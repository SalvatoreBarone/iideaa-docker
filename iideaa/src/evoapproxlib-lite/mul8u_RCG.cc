#include "evoapprox-lite_8bit.h"
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.43 %
// MAE = 284 
// WCE% = 4.48 %
// WCE = 2938 
// WCRE% = 52.95 %
// EP% = 49.91 %
// MRE% = 2.61 %
// MSE = 386332 
// PDK45_PWR = 0.309 mW
// PDK45_AREA = 561.8 um2
// PDK45_DELAY = 1.73 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t mul8u_RCG(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_39, dout_44, dout_49, dout_51, dout_54, dout_59, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_76, dout_80, dout_81, dout_86, dout_91, dout_96, dout_101, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_143, dout_144, dout_146, dout_149, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_198, dout_199, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_238, dout_239, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_34=dout_18|dout_25;
   dout_39=dout_19|dout_26;
   dout_44=dout_20|dout_27;
   dout_49=dout_21|dout_28;
   dout_51=((B >> 0)&1)&((A >> 2)&1);
   dout_54=dout_22|dout_29;
   dout_59=dout_23|dout_30;
   dout_67=((B >> 1)&1)&((A >> 2)&1);
   dout_68=((B >> 2)&1)&((A >> 2)&1);
   dout_69=((B >> 3)&1)&((A >> 2)&1);
   dout_70=((B >> 4)&1)&((A >> 2)&1);
   dout_71=((B >> 5)&1)&((A >> 2)&1);
   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_73=((B >> 7)&1)&((A >> 2)&1);
   dout_74=dout_34|dout_51;
   dout_76=dout_39|dout_67;
   dout_80=dout_76|dout_67;
   dout_81=dout_44|dout_68;
   dout_86=dout_49|dout_69;
   dout_91=dout_54|dout_70;
   dout_96=dout_59|dout_71;
   dout_101=dout_31|dout_72;
   dout_111=((B >> 0)&1)&((A >> 3)&1);
   dout_112=((B >> 1)&1)&((A >> 3)&1);
   dout_113=((B >> 2)&1)&((A >> 3)&1);
   dout_114=((B >> 3)&1)&((A >> 3)&1);
   dout_115=((B >> 4)&1)&((A >> 3)&1);
   dout_116=((B >> 5)&1)&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_119=dout_80^dout_111;
   dout_120=dout_76&dout_111;
   dout_121=dout_81^dout_112;
   dout_122=dout_81&dout_112;
   dout_123=dout_121&dout_120;
   dout_124=dout_121^dout_120;
   dout_125=dout_122|dout_123;
   dout_126=dout_86^dout_113;
   dout_127=dout_86&dout_113;
   dout_128=dout_126&dout_125;
   dout_129=dout_126^dout_125;
   dout_130=dout_127|dout_128;
   dout_131=dout_91^dout_114;
   dout_132=dout_91&dout_114;
   dout_133=dout_131&dout_130;
   dout_134=dout_131^dout_130;
   dout_135=dout_132|dout_133;
   dout_136=dout_96^dout_115;
   dout_137=dout_96&dout_115;
   dout_138=dout_136&dout_135;
   dout_139=dout_136^dout_135;
   dout_140=dout_137|dout_138;
   dout_141=dout_101^dout_116;
   dout_143=dout_116&dout_140;
   dout_144=dout_141^dout_140;
   dout_146=dout_73|dout_117;
   dout_149=dout_146|dout_143;
   dout_156=((B >> 0)&1)&((A >> 4)&1);
   dout_157=((B >> 1)&1)&((A >> 4)&1);
   dout_158=((B >> 2)&1)&((A >> 4)&1);
   dout_159=((B >> 3)&1)&((A >> 4)&1);
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_164=dout_124^dout_156;
   dout_165=dout_124&dout_156;
   dout_166=dout_129^dout_157;
   dout_167=dout_129&dout_157;
   dout_168=dout_166&dout_165;
   dout_169=dout_166^dout_165;
   dout_170=dout_167|dout_168;
   dout_171=dout_134^dout_158;
   dout_172=dout_134&dout_158;
   dout_173=dout_171&dout_170;
   dout_174=dout_171^dout_170;
   dout_175=dout_172|dout_173;
   dout_176=dout_139^dout_159;
   dout_177=dout_139&dout_159;
   dout_178=dout_176&dout_175;
   dout_179=dout_176^dout_175;
   dout_180=dout_177|dout_178;
   dout_181=dout_144^dout_160;
   dout_182=dout_144&dout_160;
   dout_183=dout_181&dout_180;
   dout_184=dout_181^dout_180;
   dout_185=dout_182|dout_183;
   dout_186=dout_149^dout_161;
   dout_187=dout_149&dout_161;
   dout_188=dout_186&dout_185;
   dout_189=dout_186^dout_185;
   dout_190=dout_187|dout_188;
   dout_191=dout_118^dout_162;
   dout_192=dout_118&dout_162;
   dout_193=dout_191&dout_190;
   dout_194=dout_191^dout_190;
   dout_195=dout_192|dout_193;
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_163^dout_195;
   dout_201=((B >> 0)&1)&((A >> 5)&1);
   dout_202=((B >> 1)&1)&((A >> 5)&1);
   dout_203=((B >> 2)&1)&((A >> 5)&1);
   dout_204=((B >> 3)&1)&((A >> 5)&1);
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_209=dout_169^dout_201;
   dout_210=dout_169&dout_201;
   dout_211=dout_174^dout_202;
   dout_212=dout_174&dout_202;
   dout_213=dout_211&dout_210;
   dout_214=dout_211^dout_210;
   dout_215=dout_212|dout_213;
   dout_216=dout_179^dout_203;
   dout_217=dout_179&dout_203;
   dout_218=dout_216&dout_215;
   dout_219=dout_216^dout_215;
   dout_220=dout_217|dout_218;
   dout_221=dout_184^dout_204;
   dout_222=dout_184&dout_204;
   dout_223=dout_221&dout_220;
   dout_224=dout_221^dout_220;
   dout_225=dout_222|dout_223;
   dout_226=dout_189^dout_205;
   dout_227=dout_189&dout_205;
   dout_228=dout_226&dout_225;
   dout_229=dout_226^dout_225;
   dout_230=dout_227|dout_228;
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_233=dout_231&dout_230;
   dout_234=dout_231^dout_230;
   dout_235=dout_232|dout_233;
   dout_236=dout_199|dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_241=dout_198^dout_208;
   dout_242=dout_198&dout_208;
   dout_243=dout_208&dout_238;
   dout_244=dout_241^dout_238;
   dout_245=dout_242|dout_243;
   dout_246=((B >> 0)&1)&((A >> 6)&1);
   dout_247=((B >> 1)&1)&((A >> 6)&1);
   dout_248=((B >> 2)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_254=dout_214^dout_246;
   dout_255=dout_214&dout_246;
   dout_256=dout_219^dout_247;
   dout_257=dout_219&dout_247;
   dout_258=dout_256&dout_255;
   dout_259=dout_256^dout_255;
   dout_260=dout_257|dout_258;
   dout_261=dout_224^dout_248;
   dout_262=dout_224&dout_248;
   dout_263=dout_261&dout_260;
   dout_264=dout_261^dout_260;
   dout_265=dout_262|dout_263;
   dout_266=dout_229^dout_249;
   dout_267=dout_229&dout_249;
   dout_268=dout_266&dout_265;
   dout_269=dout_266^dout_265;
   dout_270=dout_267|dout_268;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_270;
   dout_274=dout_271^dout_270;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&((A >> 6)&1);
   dout_288=((B >> 7)&1)&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_291=((B >> 0)&1)&((A >> 7)&1);
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_299=dout_259^dout_291;
   dout_300=dout_259&dout_291;
   dout_301=dout_264^dout_292;
   dout_302=dout_264&dout_292;
   dout_303=dout_301&dout_300;
   dout_304=dout_301^dout_300;
   dout_305=dout_302|dout_303;
   dout_306=dout_269^dout_293;
   dout_307=dout_269&dout_293;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_74&1) << 2;
   O |= (dout_119&1) << 3;
   O |= (dout_164&1) << 4;
   O |= (dout_209&1) << 5;
   O |= (dout_254&1) << 6;
   O |= (dout_299&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
