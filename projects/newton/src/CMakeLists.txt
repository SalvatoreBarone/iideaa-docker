cmake_minimum_required(VERSION 3.0)
project(demo)

set(CMAKE_CXX_STANDARD 11)


SET (CMAKE_C_COMPILER "/usr/bin/clang")
SET (CMAKE_CXX_COMPILER "/usr/bin/clang++")
SET (CMAKE_AR      "/usr/bin/llvm-ar")
SET (CMAKE_LINKER  "/usr/bin/llvm-ld")
SET (CMAKE_NM      "/usr/bin/llvm-nm")
SET (CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
SET (CMAKE_RANLIB  "/usr/bin/llvm-ranlib")
set(CMAKE_CXX_STANDARD 11)
set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wfatal-errors")

#We need the -fno-use-cxa-atexit flag for the symbol ___cxa_atexit
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS} -fno-use-cxa-atexit -fPIC" )

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#We are going to collect all the target modules in libs folders
SET (CMAKE_LIBRARY_OUTPUT_DIRECTORY
   ${PROJECT_BINARY_DIR}/libs.o/
   CACHE PATH
   "Single Directory for all dynamic and shared libraries"
   )
SET (CMAKE_ARCHIVE_OUTPUT_DIRECTORY
  ${PROJECT_BINARY_DIR}/libs.a/
  CACHE PATH
  "Single Directory for all static libraries."
  )
#Then we list all of them into a the library_database file; this target must be set as dependency of the ${CMAKE_PROJECT_NAME}
add_custom_target(library_database
  COMMAND ${CMAKE_COMMAND} -E echo adding compile modules to the library_database.csv file
  COMMAND echo "\\\\\\\\list of all objects which must be loaded to run the software as JIT" >> ${PROJECT_BINARY_DIR}/library_database.csv
  COMMAND echo "\\\\\\\\dynamic and shared libraries" >> ${PROJECT_BINARY_DIR}/library_database.csv
  COMMAND if [ -d ${PROJECT_BINARY_DIR}/libs.o ]; then ls ${PROJECT_BINARY_DIR}/libs.o | grep 'o\\|so' >> ${PROJECT_BINARY_DIR}/library_database.csv\; fi
  COMMAND echo "\\\\\\\\static libraries" >> ${PROJECT_BINARY_DIR}/library_database.csv
  COMMAND if [ -d ${PROJECT_BINARY_DIR}/libs.a ]; then ls ${PROJECT_BINARY_DIR}/libs.a | grep 'a' >> ${PROJECT_BINARY_DIR}/library_database.csv\; fi
)






INCLUDE_DIRECTORIES(./)
LINK_DIRECTORIES(./)

set(SOURCE_FILES newton.cpp)
add_executable(demo ${SOURCE_FILES})
#TARGET_LINK_LIBRARIES(nets_evaluation smile)

