// N2D2 auto-generated file.
// @ Mon Sep 16 12:33:02 2019

#ifndef N2D2_EXPORTC_FC2_LAYER_H
#define N2D2_EXPORTC_FC2_LAYER_H

#include "typedefs.h"
#define FC2_NB_OUTPUTS 10
#define FC2_NB_CHANNELS 84

#define FC2_ACTIVATION Linear
#define FC2_SHIFT 0
static const BDATA_T fc2_biases[FC2_NB_OUTPUTS] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
#define FC2_NB_WEIGHTS (FC2_NB_OUTPUTS*FC2_NB_CHANNELS)

static const WDATA_T fc2_weights[FC2_NB_OUTPUTS][FC2_NB_CHANNELS] = 
{
    {-0.001677040f, 0.002539100f, -0.01848810f, -0.001474340f, -0.01930240f, -0.0003508520f, -0.004115760f, -0.001061100f, -0.005841000f, -0.001198640f, -0.0005447950f, -0.002436030f, 0.004953210f, -0.001729340f, 0.3091200f, -0.007879020f, -0.001731860f, -0.0003439730f, 0.3002370f, 0.3009230f, -0.0008764020f, -0.005990480f, -0.009241790f, -0.008609160f, -0.0007073410f, -0.006237440f, -0.003635990f, -0.0003285320f, -0.002174080f, 0.2946750f, -0.001505920f, -0.0006166330f, -0.0004082710f, -0.01905030f, -0.0003550590f, -0.007961680f, -0.001591550f, -0.007845100f, -0.01887280f, -0.0008906870f, -0.007501150f, -0.0002056140f, -0.0004006560f, -0.001394490f, 0.2979670f, -0.006902580f, 0.3003020f, -0.003270890f, -0.001891820f, 0.1871920f, -0.007717210f, -0.009719410f, -0.003452810f, -0.001456680f, -9.137940e-05f, -0.001898220f, -0.002796780f, -0.001251620f, -0.008802030f, -0.01643320f, -0.005594820f, -0.009327180f, -0.01827800f, -0.01797450f, -0.0002859070f, 0.2953450f, -0.01654520f, -0.001935950f, -0.002735380f, 0.2975380f, -0.002032420f, -0.002045750f, -0.003370760f, -0.001492130f, -0.007780400f, -0.003751030f, -0.0005605340f, -0.003587610f, -0.001455420f, -0.003643330f, -0.001388090f, 0.06680920f, -0.002039940f, -0.003186980f},
    {-0.003165160f, 0.002688810f, -0.003578310f, -0.002750000f, -0.002452450f, -0.001109910f, -0.002715450f, -0.002387600f, -0.003407690f, 0.3010380f, -0.002648630f, -0.002316870f, 0.01633490f, -0.001028630f, -0.001697470f, -0.004038100f, 0.2939470f, -0.001915440f, -0.002122150f, -0.0008046650f, -0.001559350f, -0.002572880f, -0.002845360f, -0.004058280f, -0.0006043350f, -0.004225570f, -0.003217770f, 0.2914540f, 0.2971690f, -0.001515760f, 0.2980940f, -0.0008561890f, -0.0007451320f, -0.002503840f, -0.001095500f, -0.004446220f, -0.003305630f, -0.003203520f, -0.001390970f, 0.2738430f, -0.002908640f, -0.001476850f, -0.002280920f, -0.002284330f, -0.002197290f, -0.004697980f, -0.002203420f, -0.002548670f, 0.2862290f, 0.001749580f, -0.002316640f, -0.003519450f, -0.002866700f, 0.0006553650f, -0.0007980750f, -0.002125530f, -0.004264450f, 0.2995230f, -0.004004730f, -0.002030320f, -0.002576040f, -0.003822400f, -0.002706580f, -0.0008633660f, -0.001231280f, -0.001514860f, -0.001716390f, -0.001977680f, -0.003143500f, -0.002209840f, -0.0003504630f, -0.001417520f, -0.002405830f, -0.002688640f, -0.004672350f, -0.003718360f, -0.0009064040f, -0.002391600f, 0.2993720f, -0.002755940f, -0.001031380f, 0.03010090f, -0.001753530f, -0.002594650f},
    {-0.002426610f, 0.002464170f, 0.3394700f, -0.005144780f, 0.3456980f, -0.002770030f, -0.004969760f, -0.001190850f, -0.002422470f, -0.0004535680f, -0.002598740f, -0.005682820f, 0.04422640f, -0.0009786530f, -0.01604400f, -0.0009646900f, -0.0006487020f, -0.002594220f, -0.01436230f, -0.01627120f, -0.007268800f, 0.0002765260f, -0.0001284990f, 0.0001538860f, -0.005230530f, -0.002076310f, -0.003546380f, -0.0005350150f, -0.001249420f, -0.01729210f, -0.001681960f, -0.003463500f, -0.0007580480f, 0.3579420f, -0.006017930f, -0.002133320f, -0.001594590f, -0.002434190f, 0.3436100f, 0.001188280f, 0.001289510f, -0.006899290f, -0.003488130f, -0.003935860f, -0.01316440f, -0.001866770f, -0.01848780f, -0.004377190f, -0.001209350f, 0.2200080f, 0.0008258820f, -0.001017500f, -0.006036320f, -0.003418890f, -0.003926510f, -0.0007089070f, -0.003513000f, -0.0003670400f, -0.001623840f, 0.3420270f, -0.003046710f, -0.0003199780f, 0.3519740f, 0.3457560f, -0.006311090f, -0.01516900f, 0.3388040f, -0.004456920f, -0.005279590f, -0.01814600f, -0.003276610f, -0.0007002150f, -0.005301330f, -0.001648040f, -0.002015950f, -0.001647050f, -0.002242200f, -0.002450100f, -0.0007672210f, -0.006322520f, -0.002343460f, 0.001420650f, -0.001328910f, -0.002121540f},
    {-0.009073950f, -0.001322210f, -0.005514910f, -0.01317940f, -0.007189950f, -0.006456200f, -0.01180350f, -0.002822610f, -0.007429320f, -0.001133500f, -0.005894680f, -0.01442780f, 0.09449170f, -0.002575000f, -0.0001055820f, -0.0005592490f, -0.001027490f, -0.005469750f, -0.0009097910f, -0.001463130f, 0.3456480f, -0.0008961170f, -0.0003959540f, -0.0006202870f, 0.3451510f, -0.007050730f, -0.005095770f, -0.002085780f, -0.001173680f, -0.001664850f, -0.001994440f, 0.3339420f, -0.003889350f, -0.006607020f, 0.3466710f, -0.003489720f, -0.002224780f, -0.004557290f, -0.004274430f, -0.001179400f, -0.0007168130f, 0.3446700f, 0.3475410f, -0.006375410f, -0.001045300f, -0.005968310f, 0.0001374750f, -0.01115770f, -0.0008627340f, -0.001554870f, -0.0004855150f, -0.0008807950f, -0.01550980f, -0.004864850f, 0.3265570f, -0.002355400f, -0.007693330f, -0.001955670f, -0.006499270f, -0.004689620f, -0.007018810f, -0.0006443070f, -0.002563250f, -0.005760050f, 0.3434460f, -0.0004055120f, -0.002703310f, -0.01014320f, -0.007679520f, -0.001049040f, -0.008359860f, -0.002238890f, -0.01061050f, -0.003780730f, -0.006890050f, -0.006736770f, -0.004500920f, -0.008048590f, -0.0008542300f, -0.006927490f, -0.007021200f, 0.005509790f, -0.002659100f, -0.008086230f},
    {-0.003039990f, -0.002517470f, -0.003605910f, -0.02495230f, -0.0006624500f, -0.001854460f, -0.02621780f, 0.3662350f, -0.004861780f, 8.649330e-05f, -0.001485730f, -0.02823150f, 0.03294030f, 0.3673590f, -0.002574130f, -0.001671940f, -0.001797480f, -0.001885440f, -0.001554020f, -0.001164620f, -0.003133840f, -0.002203370f, -0.003803010f, -0.006293480f, -0.003293310f, -0.004794000f, -0.004123140f, -0.001357080f, -0.003867400f, -0.001775730f, -0.003021670f, -0.003306930f, -0.002076050f, -0.002556680f, -0.002595640f, -0.004407800f, 0.3685070f, -0.003647650f, -0.001455430f, 0.001925550f, -0.004082360f, -0.003254480f, -0.003445430f, -0.002577090f, -0.002336560f, -0.004556270f, -0.001148930f, -0.02321350f, -0.002659480f, -0.0008996670f, -0.002848550f, -0.005068080f, -0.02564830f, -0.002798960f, -0.002549160f, 0.3590890f, -0.003913030f, -0.003083600f, -0.004932680f, -0.002024550f, -0.004860230f, -0.0005194580f, -0.001026750f, -0.001959480f, -0.002368160f, -0.0007127060f, -0.002309220f, -0.02772790f, -0.003111720f, -0.001374430f, 0.2445610f, 0.3773690f, -0.02082730f, 0.3700790f, -0.004661860f, -0.003447600f, -0.002342490f, -0.005177340f, -0.003282490f, -0.004204170f, -0.001940660f, 0.03416320f, 0.3738150f, -0.003651010f},
    {-0.002760660f, -0.003221080f, -0.002055250f, -0.007750280f, -0.002153030f, -0.002631850f, -0.009252010f, -0.003459030f, 0.3499640f, -0.003425100f, -0.002683140f, -0.008393620f, 0.04505490f, -0.002429600f, -0.006587960f, -0.01124110f, -0.002776150f, -0.003447240f, -0.006025790f, -0.005485840f, -0.006585200f, -0.01033390f, -0.008711430f, -0.009468830f, -0.006061600f, 0.3588410f, -0.008525020f, -0.002053690f, -0.002974570f, -0.004853920f, -0.003128140f, -0.006650860f, -0.002112700f, -0.002241900f, -0.002977280f, 0.3550240f, -0.003849720f, 0.3657350f, -0.001326230f, -0.002836860f, -0.01033310f, -0.008839820f, -0.004591180f, -0.002222410f, -0.005600540f, 0.3475130f, -0.004992500f, -0.004788060f, -0.002353680f, -0.004594830f, -0.01132570f, -0.01334160f, -0.008867520f, -0.003505200f, 0.0009228650f, -0.003934610f, -0.008666570f, -0.002045580f, 0.3497250f, -0.002069950f, -0.008808330f, -0.01246170f, -0.001724110f, -0.002596760f, -0.006717120f, -0.007032260f, -0.002191080f, -0.007135970f, -0.01156930f, -0.004272630f, -0.005345910f, -0.003648380f, -0.008202390f, -0.004070200f, 0.3458140f, -0.005887590f, -0.002458200f, -0.005988580f, -0.001453150f, -0.01029070f, -0.002911780f, 0.1075950f, -0.004237940f, -0.005004420f},
    {-0.0002531100f, 0.0002202290f, -5.878030e-06f, -0.003321020f, -0.0003824680f, -0.0001152160f, -0.002783720f, -0.003913050f, -0.01286910f, -0.002966940f, -0.0003023570f, -0.003105970f, -0.0003420580f, -0.003611720f, -0.006372450f, 0.3021630f, -0.002590310f, -0.0004041430f, -0.007285910f, -0.006572560f, -0.0003786380f, 0.3093510f, 0.3137680f, 0.3080260f, 7.893550e-06f, -0.01458700f, -0.007110920f, -0.002271620f, -0.001864960f, -0.007428180f, -0.002663500f, -0.0001192510f, -0.0002660140f, -0.0004274240f, 0.0001521070f, -0.01027940f, -0.002781480f, -0.01437390f, -0.0002382070f, -0.001611540f, 0.2989870f, 5.772780e-05f, -0.0003983490f, -0.0002883030f, -0.006924460f, -0.01386030f, -0.008987400f, -0.002765060f, -0.003574800f, -0.001029470f, 0.3050470f, 0.2978490f, -0.003500070f, -0.0005730850f, 0.0002912580f, -0.003686770f, -0.007284470f, -0.002961390f, -0.01306780f, 1.318080e-05f, -0.006620880f, 0.2952000f, -8.510140e-05f, 0.0001662290f, -0.0006087450f, -0.005994590f, -0.0004962290f, -0.002453050f, -0.004709320f, -0.005686020f, -0.002842320f, -0.003558610f, -0.003152690f, -0.003790790f, -0.01431070f, -0.005269930f, -0.0003972380f, -0.005120240f, -0.002002880f, -0.006158590f, -7.980790e-05f, 0.1227530f, -0.004623280f, -0.004619310f},
    {0.3241210f, 0.003515200f, -0.002032720f, -0.008386180f, -6.223880e-05f, 0.3353100f, -0.008229570f, -0.002328850f, -0.003213980f, -0.002016710f, 0.3258160f, -0.008102060f, 0.05764070f, -0.002012670f, -0.0005097590f, -0.0003466700f, -0.001775270f, 0.3226020f, -0.0005551680f, -0.0004184370f, -0.006488620f, -0.0003307420f, -0.0002721360f, -0.0003155770f, -0.005492000f, -0.003301220f, -0.003471810f, -0.001542380f, -0.002258960f, -0.0005187980f, -0.001851110f, -0.007216090f, 0.3226770f, -0.002821060f, -0.005226610f, -0.002620590f, -0.001659840f, -0.003649090f, -0.003684770f, -0.001248920f, -0.0002334950f, -0.006136790f, -0.006386740f, 0.3276290f, -0.0001915610f, -0.002788260f, -0.0006693610f, -0.007288370f, -0.002385690f, -0.001463970f, -0.0002311330f, -0.0003924270f, -0.009170430f, 0.3191400f, -0.003488560f, -0.003504450f, -0.002863560f, -0.001952800f, -0.003584740f, -0.004156120f, -0.004833150f, -0.0002754910f, -0.003379540f, -0.008077520f, -0.004773470f, -0.0004800470f, -0.005103330f, -0.008055870f, -0.005246920f, -0.0005715320f, -0.001142090f, -0.001548750f, -0.008527160f, -0.003481500f, -0.002956820f, -0.002508360f, 0.3321900f, -0.003787380f, 1.744960e-05f, -0.004152980f, 0.3321460f, 0.002393340f, -0.001738650f, -0.003846440f},
    {-0.003901250f, -0.0006924720f, -0.003265970f, -0.008219430f, -0.003982060f, -0.002880210f, -0.008705550f, -0.002963400f, -0.008663400f, -0.001288990f, -0.004444460f, -0.008321070f, 0.05929250f, -0.001970580f, -0.002862430f, -0.005034820f, -0.0007816460f, -0.003995100f, -0.002759840f, -0.003678080f, -0.005563370f, -0.003491640f, -0.005676160f, -0.006921760f, -0.006778530f, -0.006481710f, 0.3851000f, -0.001772890f, -0.002719770f, -0.001611560f, -0.0006856520f, -0.005539030f, -0.002752710f, -0.003392110f, -0.006297970f, -0.007615920f, -0.001990070f, -0.007934570f, -0.006015080f, -0.002504940f, -0.005714060f, -0.007738180f, -0.004940510f, -0.003564440f, -0.002732060f, -0.008378970f, -0.003211080f, -0.007201650f, -0.002611480f, 0.002239250f, -0.004211670f, -0.006566550f, -0.008728840f, -0.003053780f, -0.003835460f, -0.003404940f, 0.4014150f, -0.001818680f, -0.005958200f, -0.003860340f, 0.3890700f, -0.005352660f, -0.002685310f, -0.005133140f, -0.003643410f, -0.001553080f, -0.003627270f, -0.007035350f, 0.3937380f, -0.001188630f, -0.003800230f, -0.003188100f, -0.006349120f, -0.003068110f, -0.008972130f, 0.3760950f, -0.003738630f, 0.3969370f, -0.004794960f, 0.3887880f, -0.003460400f, 0.04713820f, -0.003112560f, 0.3888840f},
    {-0.005572740f, 6.439090e-05f, -0.006079630f, 0.3819220f, -0.004214350f, -0.007141460f, 0.3894930f, -0.02654190f, -0.008492690f, -0.002260350f, -0.003539630f, 0.3902890f, 0.1164570f, -0.02517600f, -0.001600500f, -0.003054300f, -0.002240600f, -0.005668870f, -0.003115020f, -0.002633750f, -0.01155840f, -0.002554490f, -0.003146690f, -0.003685410f, -0.01097570f, -0.006328850f, -0.008466270f, -0.001268030f, -0.002345940f, -0.0008756090f, -0.001772110f, -0.009764290f, -0.004834960f, -0.005285660f, -0.01174970f, -0.008330360f, -0.02325730f, -0.008860870f, -0.004195490f, -0.001517530f, -0.003133100f, -0.01069560f, -0.01088110f, -0.007543620f, -0.0004409370f, -0.008109920f, -0.001481900f, 0.3920890f, -0.002230410f, -0.003101640f, -0.002702390f, -0.003356960f, 0.3814220f, -0.004758250f, -0.008172270f, -0.02255720f, -0.006484460f, -0.002286270f, -0.007955960f, -0.005216030f, -0.007197900f, -0.003050540f, -0.004457240f, -0.005448070f, -0.009332890f, -0.0006868740f, -0.005289240f, 0.3864820f, -0.009164040f, -0.001821530f, 0.1564170f, -0.02049450f, 0.3812690f, -0.02184390f, -0.007641910f, -0.005881820f, -0.006399430f, -0.009769360f, -0.001395670f, -0.009206500f, -0.006860280f, 0.02972010f, -0.02921360f, -0.009726320f}};

#endif // N2D2_EXPORTC_FC2_LAYER_H