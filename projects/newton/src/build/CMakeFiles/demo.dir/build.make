# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /opt/newton/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/newton/src/build

# Include any dependencies generated for this target.
include CMakeFiles/demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demo.dir/flags.make

CMakeFiles/demo.dir/newton.cpp.o: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/newton.cpp.o: ../newton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/newton/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/demo.dir/newton.cpp.o"
	/usr/bin/clang++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/demo.dir/newton.cpp.o -c /opt/newton/src/newton.cpp

CMakeFiles/demo.dir/newton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo.dir/newton.cpp.i"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/newton/src/newton.cpp > CMakeFiles/demo.dir/newton.cpp.i

CMakeFiles/demo.dir/newton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo.dir/newton.cpp.s"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/newton/src/newton.cpp -o CMakeFiles/demo.dir/newton.cpp.s

CMakeFiles/demo.dir/newton.cpp.o.requires:

.PHONY : CMakeFiles/demo.dir/newton.cpp.o.requires

CMakeFiles/demo.dir/newton.cpp.o.provides: CMakeFiles/demo.dir/newton.cpp.o.requires
	$(MAKE) -f CMakeFiles/demo.dir/build.make CMakeFiles/demo.dir/newton.cpp.o.provides.build
.PHONY : CMakeFiles/demo.dir/newton.cpp.o.provides

CMakeFiles/demo.dir/newton.cpp.o.provides.build: CMakeFiles/demo.dir/newton.cpp.o


# Object files for target demo
demo_OBJECTS = \
"CMakeFiles/demo.dir/newton.cpp.o"

# External object files for target demo
demo_EXTERNAL_OBJECTS =

demo: CMakeFiles/demo.dir/newton.cpp.o
demo: CMakeFiles/demo.dir/build.make
demo: CMakeFiles/demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/newton/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable demo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/demo.dir/build: demo

.PHONY : CMakeFiles/demo.dir/build

CMakeFiles/demo.dir/requires: CMakeFiles/demo.dir/newton.cpp.o.requires

.PHONY : CMakeFiles/demo.dir/requires

CMakeFiles/demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/demo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/demo.dir/clean

CMakeFiles/demo.dir/depend:
	cd /opt/newton/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/newton/src /opt/newton/src /opt/newton/src/build /opt/newton/src/build /opt/newton/src/build/CMakeFiles/demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/demo.dir/depend
