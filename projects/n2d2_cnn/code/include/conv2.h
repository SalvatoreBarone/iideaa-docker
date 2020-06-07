// N2D2 auto-generated file.
// @ Mon Sep 16 12:33:02 2019

#ifndef N2D2_EXPORTC_CONV2_LAYER_H
#define N2D2_EXPORTC_CONV2_LAYER_H

#include "typedefs.h"
#define CONV2_NB_OUTPUTS 16
#define CONV2_NB_CHANNELS 6
#define CONV2_OUTPUTS_WIDTH 10
#define CONV2_OUTPUTS_HEIGHT 10
#define CONV2_OX_SIZE 10
#define CONV2_OY_SIZE 10
#define CONV2_CHANNELS_WIDTH 14
#define CONV2_CHANNELS_HEIGHT 14
#define CONV2_KERNEL_WIDTH 5
#define CONV2_KERNEL_HEIGHT 5
#define CONV2_SUB_SAMPLE_X 1
#define CONV2_SUB_SAMPLE_Y 1
#define CONV2_STRIDE_X 1
#define CONV2_STRIDE_Y 1
#define CONV2_PADDING_X 0
#define CONV2_PADDING_Y 0

#define CONV2_ACTIVATION Rectifier
#define CONV2_SHIFT 0
static BDATA_T conv2_biases[CONV2_NB_OUTPUTS] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static WDATA_T conv2_weights_0_0[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.03396240f, 0.08504160f, 0.1302670f, 0.1337320f, 0.07369900f},
    {0.02248700f, 0.05815360f, 0.07786270f, 0.02539290f, 0.02182190f},
    {0.03858130f, 0.01975750f, 0.1835020f, 0.3043600f, 0.2543060f},
    {0.0002397000f, -0.05065680f, -0.01821790f, 0.05456950f, 0.07720710f},
    {0.02101050f, 0.06772660f, 0.03311720f, 0.07072410f, 0.1975960f}};
static WDATA_T conv2_weights_0_1[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.04509200f, -0.07340720f, -0.1239100f, -0.09790930f, -0.02728110f},
    {-0.02201330f, -0.01384380f, 0.01816250f, 0.1837130f, 0.3692020f},
    {-0.09963910f, -0.04339970f, -0.02035560f, -0.1325360f, -0.05089760f},
    {-0.06171040f, -0.03916960f, 0.2157070f, 0.3355560f, 0.008859760f},
    {-0.04936390f, -0.1179620f, -0.06057150f, 0.2567410f, 0.1450340f}};
static WDATA_T conv2_weights_0_2[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.02213510f, 0.07609110f, 0.05613140f, -0.01069310f, -0.05900290f},
    {0.03890750f, 0.002592670f, -0.002224940f, -0.01867350f, -0.03538260f},
    {-0.01459530f, -0.001483000f, -0.05511300f, -0.05677750f, -0.01559700f},
    {-0.05752830f, -0.003657270f, -0.1017860f, -0.1332350f, -0.06761650f},
    {-0.1213310f, -0.1160830f, -0.1016910f, -0.1059690f, -0.1045790f}};
static WDATA_T conv2_weights_1_1[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.1394180f, 0.1101420f, -0.06120000f, -0.1016050f, -0.04650660f},
    {0.03606280f, 0.1785550f, 0.1921890f, -0.006199930f, -0.1042310f},
    {-0.03239180f, -0.03351540f, 0.1872090f, 0.2028750f, 0.01484470f},
    {0.1005650f, -0.01906380f, 0.01747200f, 0.2050750f, 0.1873750f},
    {0.1031460f, 0.02105480f, -0.08308600f, 0.0008846680f, 0.08455790f}};
static WDATA_T conv2_weights_1_2[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.1191580f, -0.1158860f, -0.05886890f, 0.08786380f, 0.1441940f},
    {-0.1124140f, -0.1427140f, -0.1595030f, -0.01079090f, 0.001201270f},
    {-0.07149750f, -0.09176970f, -0.1308960f, -0.1039930f, -0.06089180f},
    {-0.001023510f, -0.001143440f, -0.01584050f, -0.01109490f, 0.03709910f},
    {0.09032990f, 0.06845420f, -0.008979410f, -0.007800970f, 0.02468720f}};
static WDATA_T conv2_weights_1_3[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.05451170f, -0.03701810f, 0.08088140f, 0.06176890f, 0.007677740f},
    {0.03867260f, -0.1071880f, -0.03157120f, 0.05842530f, 0.05348180f},
    {0.06059420f, -0.03730830f, -0.1438550f, -0.07509860f, 0.007080890f},
    {-0.03562440f, 0.02726450f, -0.06758320f, -0.1538760f, -0.1259220f},
    {-0.007595970f, 0.02762610f, -0.01094380f, -0.02914250f, -0.03755500f}};
static WDATA_T conv2_weights_2_2[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.2368650f, 0.1744370f, -0.008162580f, -0.07373550f, 0.1891590f},
    {0.1606560f, 0.1135980f, -0.06941200f, 0.01940670f, 0.2361690f},
    {0.1095270f, 0.08439640f, -0.09922940f, 0.05035230f, 0.1493740f},
    {0.04958080f, 0.02368820f, -0.07701460f, 0.05110210f, 0.08302430f},
    {-0.01763600f, 0.05118670f, -0.03197540f, 0.03667880f, 0.02321680f}};
static WDATA_T conv2_weights_2_3[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.1082180f, -0.07711670f, -0.1392730f, -0.1823010f, -0.1590990f},
    {-0.06228770f, -0.06615530f, -0.1119850f, -0.1621310f, -0.1467010f},
    {-0.08428460f, -0.09297440f, -0.1150330f, -0.1362780f, -0.09512890f},
    {-0.03575350f, -0.07857250f, -0.1224620f, -0.09558570f, -0.03709680f},
    {0.004528290f, -0.07382780f, -0.1551940f, -0.1104700f, 0.05861900f}};
static WDATA_T conv2_weights_2_4[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.06200360f, 0.1007610f, 0.03402390f, -0.04320720f, -0.05694970f},
    {0.06651070f, 0.1821870f, 0.01645800f, -0.09831530f, 0.008517560f},
    {0.02943350f, 0.1451760f, -0.04681390f, -0.1317590f, 0.02922920f},
    {-0.03530470f, 0.06336400f, -0.05612990f, -0.08874230f, 0.01956140f},
    {-0.04171540f, 0.09185720f, 0.05256210f, -0.06255080f, -0.04757300f}};
static WDATA_T conv2_weights_3_3[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.2312380f, 0.3045240f, 0.2928520f, 0.2037320f, 0.04566620f},
    {0.06675480f, 0.04020140f, 0.07938810f, 0.05451710f, -0.02926770f},
    {0.05100140f, 0.004216980f, -0.04393200f, -0.08717790f, -0.1119930f},
    {0.05080240f, 0.05296780f, -0.006583150f, -0.02670470f, -0.06346990f},
    {-5.330160e-05f, 0.02417470f, -0.02011940f, -0.01774880f, -0.05687090f}};
static WDATA_T conv2_weights_3_4[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.03464180f, -0.05506120f, -0.004706940f, -0.02298930f, -0.06854930f},
    {0.01350450f, -0.06256260f, -0.05513400f, -0.05068920f, -0.09337090f},
    {0.06009310f, -0.03904760f, -0.04943360f, -0.04463510f, -0.08459790f},
    {0.04468150f, -0.03200700f, -0.04266220f, -0.03890530f, -0.08941920f},
    {-0.001346160f, -0.02683120f, -0.05052090f, -0.06949110f, -0.07245170f}};
static WDATA_T conv2_weights_3_5[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.1291370f, 0.05399180f, -0.02299610f, 0.02480870f, 0.01157180f},
    {0.02689970f, -0.03096470f, -0.1018560f, -0.08074970f, -0.02573980f},
    {-0.08068930f, -0.03848620f, -0.06254680f, -0.08043490f, -0.03189430f},
    {-0.07494450f, 0.04641750f, -0.02772150f, -0.05580460f, -0.02002560f},
    {0.002785300f, 0.01014540f, -0.01713010f, -0.03354460f, -0.04236000f}};
static WDATA_T conv2_weights_4_0[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.03638510f, 0.06404890f, 0.06862350f, 0.05550050f, 0.1407190f},
    {0.02859090f, 0.09072070f, 0.02568200f, 0.1110910f, 0.1510460f},
    {0.05513600f, 0.05710760f, 0.03100020f, 0.1570170f, 0.04331220f},
    {0.1156090f, 0.08272580f, 0.1305880f, 0.1859530f, 0.06697860f},
    {0.1294940f, 0.08922770f, 0.1025330f, 0.1031890f, 0.03990190f}};
static WDATA_T conv2_weights_4_4[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.03911110f, -0.01981070f, -0.07354790f, 0.04575950f, -0.07120770f},
    {0.009035210f, -0.03816540f, -0.1537160f, 0.09679230f, -0.1701480f},
    {0.03599400f, -0.09062460f, -0.1460330f, 0.1403650f, -0.2088410f},
    {0.05000660f, -0.1263250f, -0.1156250f, 0.07271150f, -0.1268410f},
    {-0.007372120f, -0.1426550f, -0.1052090f, -0.01243600f, -0.01414070f}};
static WDATA_T conv2_weights_4_5[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.01798240f, -0.02130740f, 0.01294810f, -0.01536850f, 0.1006770f},
    {-0.02023440f, 0.03856290f, 0.03683800f, -0.08192560f, 0.1796800f},
    {-0.08267890f, 0.08528050f, 0.0005550780f, -0.1043850f, 0.1908690f},
    {-0.06058010f, 0.07964610f, -0.04162620f, -0.04220170f, 0.1419520f},
    {-0.009222610f, 0.07946810f, -0.04041820f, -0.01904970f, 0.02538750f}};
static WDATA_T conv2_weights_5_0[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.02218290f, -0.04982650f, -0.07795250f, -0.04406960f, -0.01131350f},
    {-0.03186990f, -0.02674150f, -0.02936950f, -0.04204760f, -0.03569740f},
    {0.01087240f, 0.008639010f, -0.02295170f, -0.04977010f, -0.04545880f},
    {0.04677950f, 0.03250250f, 0.02679190f, 0.01499550f, -0.01423080f},
    {0.04430340f, 0.002769110f, 0.002914850f, -0.002731880f, -0.01546100f}};
static WDATA_T conv2_weights_5_1[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.1564300f, 0.05706810f, -0.04392850f, -0.04101860f, -0.01254240f},
    {0.1837600f, 0.1998880f, 0.05636600f, 0.002176380f, -0.02226820f},
    {0.02779320f, 0.1841490f, 0.1333860f, 0.09666940f, 0.06855120f},
    {-0.04066860f, 0.05416440f, 0.08029050f, 0.06033630f, 0.04275080f},
    {-0.2165150f, -0.1250620f, -0.02938580f, -0.02745030f, -0.02074020f}};
static WDATA_T conv2_weights_5_5[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.001444060f, 0.006676560f, -0.1168770f, -0.1460140f, -0.1083930f},
    {-0.02121800f, 0.05621010f, -0.08025950f, -0.1138150f, -0.09512960f},
    {-0.05560620f, 0.1022910f, -0.007640960f, -0.07843060f, -0.08548140f},
    {-0.05389480f, 0.1158470f, 0.06555580f, -0.01653130f, -0.06284250f},
    {-0.03356050f, 0.04257530f, 0.04101520f, 0.005031420f, -0.02558360f}};
static WDATA_T conv2_weights_6_0[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.01991730f, 0.01027290f, -0.03316670f, -0.04449610f, -0.03570280f},
    {-0.001266600f, 0.009443430f, -0.008885470f, -0.01389480f, 0.01156770f},
    {0.02345510f, -0.002804630f, -0.01610310f, -0.005023880f, 0.1051090f},
    {0.01605390f, -0.004326070f, 0.01615420f, 0.1021860f, 0.1596640f},
    {-0.01793510f, -0.02532920f, 0.03643340f, 0.04785160f, -0.02346710f}};
static WDATA_T conv2_weights_6_1[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.03253400f, -0.06539130f, -0.07841150f, -0.1021840f, -0.1464700f},
    {-0.04730490f, -0.07190560f, -0.1020290f, -0.05576160f, 0.01741920f},
    {-0.02307230f, -0.03456660f, -0.007798410f, 0.05202380f, 0.06515740f},
    {-0.08243610f, -0.05976640f, 0.006961130f, -0.03747510f, -0.08625640f},
    {-0.03497190f, -0.04360920f, -0.04430250f, -0.07745090f, -0.04830100f}};
static WDATA_T conv2_weights_6_2[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.02100100f, -0.0001800390f, -0.01847800f, -0.05420360f, -0.01156850f},
    {-0.008189950f, -0.02441750f, -0.01770840f, 0.0002921640f, 0.1663460f},
    {-0.04423040f, -0.04452130f, 0.03858930f, 0.1573710f, 0.2143360f},
    {-0.02968380f, 0.03386420f, 0.1995430f, 0.1719930f, 0.1087190f},
    {0.08624190f, 0.1696520f, 0.2155170f, 0.06507380f, -0.0009989369f}};
static WDATA_T conv2_weights_6_3[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.09330450f, 0.08440190f, 0.03966060f, -0.01208920f, -0.01536110f},
    {0.09672420f, 0.04866720f, -0.04703540f, -0.1738690f, -0.1846960f},
    {0.07106520f, 0.04222860f, -0.03677330f, -0.1242560f, -0.1241020f},
    {0.02796160f, -0.008855120f, -0.08423940f, -0.1272180f, -0.06662810f},
    {-0.05196860f, -0.1118650f, -0.1630100f, -0.1760790f, -0.1304850f}};
static WDATA_T conv2_weights_7_1[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.08427240f, -0.03159820f, -0.005021110f, -0.03200000f, -0.05148860f},
    {-0.1751990f, -0.1751410f, -0.07322500f, -0.008620160f, -0.05790510f},
    {-0.1906080f, -0.1672430f, -0.1250080f, -0.03581530f, -0.03734220f},
    {-0.1472200f, -0.1377160f, -0.1290550f, -0.04650020f, -0.04610350f},
    {-0.1283510f, -0.09375290f, -0.04070050f, 0.005447260f, 0.05991040f}};
static WDATA_T conv2_weights_7_2[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.008203540f, 0.007893150f, -0.009470070f, -0.08478280f, 0.001051710f},
    {-0.09575560f, 0.03958590f, 0.04153390f, -0.04653830f, 0.06686800f},
    {-0.09342480f, 0.07592100f, 0.04359200f, 0.007881760f, 0.1287410f},
    {0.001586890f, 0.07472070f, 0.03446910f, 0.08728650f, 0.09642360f},
    {0.006595480f, 0.001050790f, 0.04410440f, 0.06168130f, -0.005021730f}};
static WDATA_T conv2_weights_7_3[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.03195170f, -0.01731880f, -0.04393630f, -0.05944330f, -0.08898290f},
    {0.006228810f, 0.01727520f, -0.05921300f, -0.08877310f, -0.1048850f},
    {0.001619630f, 0.009809560f, -0.1175250f, -0.1085730f, -0.1201580f},
    {0.05342160f, 0.07675070f, -0.002684460f, -0.1227640f, -0.1507100f},
    {0.09443810f, 0.1001120f, 0.001895010f, -0.1555520f, -0.1741490f}};
static WDATA_T conv2_weights_7_4[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.2049420f, 0.1074200f, 0.1018690f, -0.0008480950f, -0.1038730f},
    {0.09463910f, 0.1287850f, 0.1755820f, -0.05402450f, -0.08798450f},
    {0.02086990f, 0.1627550f, 0.1443300f, -0.05774680f, -0.03740650f},
    {0.004503470f, 0.1284230f, 0.04517520f, 0.008767330f, -0.02700630f},
    {-0.06426300f, 0.01215640f, 0.03680300f, 0.09548470f, 0.002972430f}};
static WDATA_T conv2_weights_8_2[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.001695490f, 0.1026900f, 0.1823910f, 0.02062400f, -0.06652660f},
    {-0.08040270f, -0.06365080f, -0.04811800f, 0.04284670f, 0.08987010f},
    {0.003210810f, 0.1150520f, 0.3185260f, 0.3011200f, 0.1719770f},
    {0.1762780f, 0.2131750f, 0.1843780f, 0.03891100f, -0.02548900f},
    {0.05145040f, -0.002610150f, -0.07278510f, -0.07192560f, 0.03636200f}};
static WDATA_T conv2_weights_8_3[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.02029150f, -0.05383370f, 0.03866460f, 0.1581430f, 0.1791290f},
    {0.2003430f, 0.2806660f, 0.3404750f, 0.2158350f, 0.02204690f},
    {0.1303480f, 0.1136750f, 0.01527530f, -0.1109210f, -0.02779230f},
    {-0.1342990f, -0.1575560f, -0.05225260f, 0.05731900f, 0.1140740f},
    {-0.09487600f, -0.02811230f, 0.05003220f, 0.09474310f, 0.02238670f}};
static WDATA_T conv2_weights_8_4[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.03057100f, 0.003163970f, -0.04092780f, -0.09458830f, -0.09981170f},
    {-0.05077790f, -0.06756790f, -0.1726920f, -0.1390060f, -0.08939180f},
    {-0.1076480f, -0.09618960f, -0.1419780f, -0.08939480f, -0.1113930f},
    {-0.1245910f, -0.1166050f, -0.1057450f, -0.04035780f, -0.01898730f},
    {-0.1046880f, -0.04803230f, 0.009954060f, 0.02663070f, -0.02827830f}};
static WDATA_T conv2_weights_8_5[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.05917810f, -0.02283050f, 0.03113830f, 0.04188620f, 0.02321100f},
    {-0.1533360f, -0.05534850f, 0.03619510f, -0.02213230f, -0.1004800f},
    {-0.2158540f, -0.08340060f, -0.07643120f, -0.1656880f, -0.06434790f},
    {-0.1701520f, -0.08434510f, -0.03769800f, -0.01654230f, 0.03868900f},
    {-0.03144200f, -0.01642520f, -0.06792030f, -0.05172630f, -0.08096780f}};
static WDATA_T conv2_weights_9_0[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.02165410f, 0.02510980f, 0.04976130f, -0.03166480f, -0.06329920f},
    {0.01842090f, 0.01186690f, -0.03490360f, 0.09467270f, 0.1095210f},
    {-0.02946040f, 0.03089410f, 0.1654930f, 0.2358830f, 0.01664950f},
    {0.07974460f, 0.2072300f, 0.1482530f, 0.04883220f, -0.03406530f},
    {0.06628620f, -0.02650430f, -0.06803020f, -0.02378680f, -0.05503770f}};
static WDATA_T conv2_weights_9_3[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.02971280f, 0.001195490f, 0.04348350f, -0.02415790f, -0.1614520f},
    {-0.08225500f, -0.05166680f, -0.06885280f, -0.1481920f, -0.05258650f},
    {-0.1127970f, -0.1042150f, -0.1132300f, 0.03480900f, 0.05797830f},
    {-0.08184430f, -0.01418220f, 0.1300310f, 0.1421430f, 0.01126780f},
    {0.1942980f, 0.1745790f, 0.09417670f, 0.01954480f, -0.07680970f}};
static WDATA_T conv2_weights_9_4[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.03943900f, 0.03334140f, -0.04059900f, 0.001106460f, 0.08940640f},
    {0.01826530f, 0.008946530f, 0.03268090f, 0.07294410f, 0.07182520f},
    {0.02019010f, 0.09176720f, 0.07188400f, 0.01637670f, -0.02582590f},
    {0.04849820f, -0.02396430f, -0.03320840f, -0.05507980f, -0.1116140f},
    {-0.04345830f, -0.09334030f, -0.08506250f, -0.1479500f, -0.1589420f}};
static WDATA_T conv2_weights_9_5[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.03141880f, -0.03453490f, -0.01185850f, -0.1082520f, -0.1304510f},
    {-0.03480900f, -0.009240150f, -0.008990350f, -0.1015350f, 0.04661940f},
    {0.005204120f, -0.05894760f, -0.04776640f, 0.1152780f, 0.1695020f},
    {-0.02074390f, 0.008432430f, 0.08835780f, 0.1111500f, 0.06609260f},
    {0.01989010f, 0.02410010f, -0.04035010f, -0.04733600f, -0.1091200f}};
static WDATA_T conv2_weights_10_0[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-7.394950e-05f, -0.001180280f, -0.0002848520f, 0.005413950f, 0.002333390f},
    {0.007753870f, -0.005782940f, 0.007976020f, -0.001151680f, 0.001659840f},
    {-0.002497840f, 0.0006007980f, -0.002899360f, -0.002924990f, 0.0004090140f},
    {-0.004509850f, -0.008728930f, -0.001788970f, -0.004824750f, -0.0006083850f},
    {0.007976470f, -0.01189510f, -0.01178170f, -0.006170300f, 0.008795650f}};
static WDATA_T conv2_weights_10_1[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.004716370f, -0.001351230f, 0.008240600f, 4.292570e-05f, 0.001642620f},
    {-0.005235370f, -0.003825670f, -0.0002418690f, 0.01040110f, 0.01077170f},
    {-0.01047050f, 0.005856160f, -0.003771330f, -0.007914900f, -0.003789010f},
    {-0.003073440f, 0.001015360f, -0.001764890f, -0.01352830f, -0.01210470f},
    {0.002420050f, 0.004823400f, 0.002408490f, 0.01713690f, 0.01396500f}};
static WDATA_T conv2_weights_10_4[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.004613490f, -0.002149220f, -0.01068820f, -0.01060090f, -0.003981680f},
    {0.0008083210f, -0.0001416570f, 0.001840100f, -0.002636570f, 0.006389450f},
    {-0.0008673160f, 0.004679380f, -0.0002045780f, 0.006569090f, -0.007165770f},
    {-0.002475600f, 0.001605410f, 0.002246390f, 0.004353110f, -0.0008684000f},
    {-0.003395100f, -0.007437560f, -0.009116620f, 0.008817200f, 0.01922420f}};
static WDATA_T conv2_weights_10_5[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.003534560f, -0.002969560f, -0.009991690f, 0.002591960f, -0.01123370f},
    {0.001457000f, 0.0007848400f, -0.005099110f, -0.004279070f, -0.009751630f},
    {-0.001216510f, 0.001225090f, -0.0003905860f, -0.005252740f, 0.001731210f},
    {0.004547620f, -0.002721940f, -0.01389150f, 0.001739320f, -0.001367240f},
    {-0.007158060f, -0.005652730f, 0.0005876960f, -0.004510210f, -0.009194190f}};
static WDATA_T conv2_weights_11_0[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.02445480f, 0.008661390f, 0.03238480f, 0.05100450f, 0.02206330f},
    {0.004836060f, 0.008847640f, 0.04088530f, 0.01702720f, 0.005257490f},
    {-0.01647570f, 0.0002382750f, -0.002176970f, -0.0006985720f, -0.004003980f},
    {-0.01219600f, -0.006802660f, -0.007128020f, -0.008260820f, -0.01512270f},
    {-0.01397430f, -0.005698670f, -0.008470410f, -0.005438620f, -0.005714440f}};
static WDATA_T conv2_weights_11_1[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.01887620f, 0.007710890f, 0.01055500f, -0.005290330f, -0.03131090f},
    {-0.02165710f, -0.003289030f, 0.001737410f, -0.01783120f, -0.03991260f},
    {-0.03521420f, -0.02605790f, 0.002859870f, 0.003887520f, -0.007480660f},
    {-0.01643220f, -0.01911400f, -0.004556290f, 0.02119220f, 0.02780250f},
    {0.001620740f, -0.006028950f, -0.01249940f, -0.009268590f, -0.01367980f}};
static WDATA_T conv2_weights_11_2[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.001582150f, 0.02989150f, 0.04978300f, 0.04803360f, 0.005606430f},
    {-0.005904660f, 0.02022780f, 0.008854170f, 0.007568350f, 0.0002790330f},
    {-0.02513900f, -0.004339680f, -0.007398600f, -0.01650880f, 0.004617250f},
    {-0.03797250f, -0.01461060f, -0.01338620f, -0.01486100f, 0.004093070f},
    {-0.02057360f, -0.006293180f, -0.01129270f, -0.02113300f, -0.02753150f}};
static WDATA_T conv2_weights_11_5[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.03296750f, 0.01884890f, 0.02876510f, 0.04668920f, 0.03441100f},
    {0.03361740f, 0.004826930f, 0.04523980f, 0.05905040f, 0.01722560f},
    {-0.01138250f, -0.03129680f, 0.02099350f, 0.01451310f, -0.01706340f},
    {-0.04036270f, -0.05112010f, -0.02398500f, -0.02584600f, -0.02761910f},
    {-0.04208950f, -0.05005660f, -0.04284270f, -0.03995100f, -0.02634480f}};
static WDATA_T conv2_weights_12_0[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.009292580f, -0.02153220f, -0.04640540f, -0.06793530f, -0.06767060f},
    {0.0003842780f, -0.01455640f, -0.05160200f, -0.08960340f, -0.1432630f},
    {-0.02375000f, -0.0004017740f, -0.05533260f, -0.1128390f, -0.1082500f},
    {0.007735770f, 0.02170190f, -0.03328950f, -0.06268570f, 0.0001328240f},
    {0.07756600f, 0.05165750f, 0.007162040f, -0.005651430f, 0.01212220f}};
static WDATA_T conv2_weights_12_1[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.004554790f, -0.03409690f, -0.1185640f, -0.1360090f, -0.06295110f},
    {-0.02596860f, -0.02463410f, -0.06588650f, -0.1176720f, -0.08417050f},
    {-0.02211610f, 0.03192550f, 0.03968100f, -0.01546440f, -0.04971600f},
    {0.08751790f, 0.1253330f, 0.1367640f, 0.07616460f, -0.05951780f},
    {-0.02181280f, -0.01010150f, -0.01807520f, -0.04188630f, -0.1471550f}};
static WDATA_T conv2_weights_12_3[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.02553950f, -0.09559820f, -0.1156590f, -0.1464690f, -0.2068930f},
    {-0.02840970f, -0.07756240f, -0.09021550f, -0.1087550f, -0.2106030f},
    {-0.01720780f, -0.05658360f, -0.08126050f, -0.07659750f, -0.1506470f},
    {0.008489380f, 0.01687450f, -0.03166650f, -0.07963760f, -0.08185260f},
    {0.1140230f, 0.1752540f, 0.03608830f, -0.04700240f, 0.04263950f}};
static WDATA_T conv2_weights_12_4[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.02181580f, -0.05936610f, -0.06730830f, 0.06740420f, 0.1072270f},
    {-0.03915390f, -0.06864130f, -0.09470480f, 0.05137180f, 0.1859990f},
    {-0.03983760f, -0.08279650f, -0.1102070f, 0.03249250f, 0.2328240f},
    {-0.01555180f, -0.05034780f, -0.05094100f, 0.08964740f, 0.2174690f},
    {-0.04127320f, -0.05341040f, -0.01767900f, 0.1502040f, 0.1592910f}};
static WDATA_T conv2_weights_13_1[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.008835050f, 0.02645620f, 0.01794160f, 0.02648290f, 0.03900290f},
    {-0.06060860f, -0.02878370f, 0.008584700f, 0.03411200f, 0.03107560f},
    {0.02791980f, 0.01957750f, -0.02691430f, -0.04816420f, -0.05920250f},
    {0.1806260f, 0.2482170f, 0.2776670f, 0.1709440f, 0.07624150f},
    {0.09516230f, 0.1761440f, 0.2574960f, 0.2934140f, 0.1708990f}};
static WDATA_T conv2_weights_13_2[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.07794440f, -0.008532110f, 0.06418220f, 0.1123990f, 0.1557450f},
    {-0.08164330f, -0.02776890f, 0.08384790f, 0.09696640f, 0.1003910f},
    {-0.1107380f, -0.1784700f, -0.1749910f, -0.1436610f, -0.09203750f},
    {0.05348700f, -0.07754910f, -0.1816660f, -0.1950960f, -0.09882830f},
    {0.1512410f, 0.09387430f, 0.08312360f, 0.05121150f, -0.004800870f}};
static WDATA_T conv2_weights_13_4[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.03036060f, 0.04026730f, 0.03798780f, 0.09036750f, 0.08854520f},
    {-0.05336470f, -0.01743600f, 0.02759230f, 0.09690500f, 0.08347030f},
    {-0.1296600f, -0.1024790f, -0.03392660f, 0.03297340f, -0.01612540f},
    {-0.09141120f, -0.1244310f, -0.1293620f, -0.1048990f, -0.09878290f},
    {-0.01600840f, -0.01351330f, -0.01514160f, -0.07210670f, -0.07563900f}};
static WDATA_T conv2_weights_13_5[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.07956570f, 0.07480310f, 0.03437950f, 0.004200950f, 0.02051870f},
    {-0.04577540f, -0.07647970f, -0.04143470f, -0.01076960f, 0.04703260f},
    {-0.1883080f, -0.1703790f, -0.1053260f, -0.06757550f, -0.005799800f},
    {-0.1834890f, -0.1428360f, -0.1492910f, -0.1617570f, -0.1635360f},
    {-0.01724180f, -0.001372350f, -0.04630160f, -0.06473750f, -0.1275130f}};
static WDATA_T conv2_weights_14_0[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.02228140f, 0.08314600f, 0.1037140f, 0.1090920f, 0.07852910f},
    {-0.04175440f, 0.02000060f, 0.1270210f, 0.1416960f, 0.1112720f},
    {-0.07413390f, -0.08614690f, 0.006479590f, 0.1105160f, 0.07808240f},
    {-0.04644070f, -0.03487190f, -0.03304410f, 0.05220930f, 0.09626370f},
    {-0.06967970f, -0.03571960f, -0.02591710f, -0.007756050f, 0.01286350f}};
static WDATA_T conv2_weights_14_2[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.04310900f, 0.1009730f, 0.06755240f, -0.02050470f, 0.003626610f},
    {-0.03825180f, -0.003126670f, -0.05947790f, -0.04399410f, -0.006672750f},
    {-0.04120910f, -0.03697450f, -0.1136680f, -0.05745750f, 0.02746290f},
    {-0.1403830f, -0.1455830f, -0.1748650f, -0.1653140f, -0.09499910f},
    {-0.05473080f, -0.09016530f, -0.1030150f, -0.1000770f, -0.1142590f}};
static WDATA_T conv2_weights_14_3[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.06477410f, -0.1253760f, -0.07626630f, -0.02677430f, -0.05310580f},
    {0.01620400f, -0.1246100f, -0.1070480f, -0.03465080f, 0.007557120f},
    {0.1339980f, 0.02366350f, -0.08674870f, 0.004410680f, 0.03549020f},
    {0.1430870f, 0.2444030f, 0.1724760f, 0.04096470f, -0.05171990f},
    {-0.06185840f, 0.1446140f, 0.2402660f, 0.2161920f, 0.1241490f}};
static WDATA_T conv2_weights_14_5[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.06768170f, 0.1131460f, 0.06982350f, -0.01380870f, 0.02284720f},
    {-0.005423250f, 0.07910620f, 0.1365920f, 0.01471730f, 0.04458930f},
    {-0.1080170f, -0.03990480f, 0.02609260f, -0.01250330f, -0.006546410f},
    {-0.1633740f, -0.1573940f, -0.1059560f, -0.1260160f, -0.07439840f},
    {-0.1267790f, -0.1632060f, -0.1444870f, -0.1073350f, -0.02846290f}};
static WDATA_T conv2_weights_15_0[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.006019350f, 0.01062570f, -0.01156150f, -0.03535400f, -0.04379370f},
    {0.1124910f, 0.1331020f, 0.01814010f, -0.03169950f, -0.01124860f},
    {0.1745460f, 0.08095470f, 0.009976970f, -0.005690100f, 0.004568200f},
    {0.06168150f, 0.01887950f, 0.001889770f, -0.01222670f, 0.04972690f},
    {-0.006860130f, 0.005115020f, 0.001440160f, 0.04986900f, 0.09540580f}};
static WDATA_T conv2_weights_15_1[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.06758610f, -0.04071710f, -0.04622840f, -0.1302320f, -0.1261930f},
    {-0.03841910f, -0.05710080f, -0.1252830f, -0.1307860f, -0.09557030f},
    {-0.05369620f, -0.09366710f, -0.06596720f, -0.03017520f, -0.001707780f},
    {-0.06817440f, -0.01541170f, 0.06797740f, 0.09175430f, 0.08927870f},
    {0.0003047470f, 0.1255210f, 0.1651800f, 0.09022280f, 0.07857970f}};
static WDATA_T conv2_weights_15_2[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.001163270f, 0.04488620f, 0.03227040f, -0.01396150f, 0.04057450f},
    {0.1493930f, 0.1140690f, 0.005338530f, -0.01126550f, 0.02564350f},
    {0.1376700f, 0.02627460f, -0.01634910f, -0.01763440f, 0.05365600f},
    {-0.05432320f, -0.03381040f, 0.01764710f, 0.07046510f, 0.07933400f},
    {-0.04545390f, 0.05520130f, 0.08354440f, 0.07744040f, 0.04096800f}};
static WDATA_T conv2_weights_15_3[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.005174800f, -0.08581320f, -0.1316600f, -0.08732370f, -0.05190500f},
    {-0.06481920f, -0.06047140f, -0.02524330f, -0.08520270f, -0.1311250f},
    {-0.04606260f, 0.02995620f, -0.01126830f, -0.05688520f, -0.09840770f},
    {0.03250230f, -0.05598410f, -0.07335660f, -0.06942350f, -0.02206970f},
    {0.01790070f, -0.04405890f, -0.03256630f, -0.04655980f, -0.03147170f}};
static WDATA_T conv2_weights_15_4[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {0.08607880f, 0.1546340f, 0.007951120f, -0.05994840f, -0.1025700f},
    {0.1450950f, 0.1010830f, -0.05382990f, -0.1226930f, -0.1320160f},
    {0.03409000f, -0.04740940f, -0.1244180f, -0.1210670f, -0.09746690f},
    {-0.08566080f, -0.09562850f, -0.1039380f, -0.05024560f, -0.02798920f},
    {-0.04927500f, -0.004921000f, -0.004056380f, 0.007604030f, 0.03015760f}};
static WDATA_T conv2_weights_15_5[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH] = {
    {-0.03175890f, 0.07585690f, 0.1820260f, 0.07772040f, 0.002869230f},
    {-0.01493140f, 0.1809060f, 0.2145750f, 0.002470810f, -0.07372890f},
    {0.1494530f, 0.2015260f, 0.06111430f, -0.06834060f, -0.1001960f},
    {0.1313140f, -0.0009257860f, -0.08740920f, -0.09778360f, -0.07705560f},
    {-0.05060200f, -0.1027740f, -0.03162150f, -0.03101980f, 0.03672190f}};
typedef WDATA_T CONV2_KERNEL_T[CONV2_KERNEL_HEIGHT][CONV2_KERNEL_WIDTH];
static CONV2_KERNEL_T* conv2_weights[CONV2_NB_OUTPUTS][CONV2_NB_CHANNELS] = {
    {&conv2_weights_0_0, &conv2_weights_0_1, &conv2_weights_0_2, NULL, NULL, NULL},
    {NULL, &conv2_weights_1_1, &conv2_weights_1_2, &conv2_weights_1_3, NULL, NULL},
    {NULL, NULL, &conv2_weights_2_2, &conv2_weights_2_3, &conv2_weights_2_4, NULL},
    {NULL, NULL, NULL, &conv2_weights_3_3, &conv2_weights_3_4, &conv2_weights_3_5},
    {&conv2_weights_4_0, NULL, NULL, NULL, &conv2_weights_4_4, &conv2_weights_4_5},
    {&conv2_weights_5_0, &conv2_weights_5_1, NULL, NULL, NULL, &conv2_weights_5_5},
    {&conv2_weights_6_0, &conv2_weights_6_1, &conv2_weights_6_2, &conv2_weights_6_3, NULL, NULL},
    {NULL, &conv2_weights_7_1, &conv2_weights_7_2, &conv2_weights_7_3, &conv2_weights_7_4, NULL},
    {NULL, NULL, &conv2_weights_8_2, &conv2_weights_8_3, &conv2_weights_8_4, &conv2_weights_8_5},
    {&conv2_weights_9_0, NULL, NULL, &conv2_weights_9_3, &conv2_weights_9_4, &conv2_weights_9_5},
    {&conv2_weights_10_0, &conv2_weights_10_1, NULL, NULL, &conv2_weights_10_4, &conv2_weights_10_5},
    {&conv2_weights_11_0, &conv2_weights_11_1, &conv2_weights_11_2, NULL, NULL, &conv2_weights_11_5},
    {&conv2_weights_12_0, &conv2_weights_12_1, NULL, &conv2_weights_12_3, &conv2_weights_12_4, NULL},
    {NULL, &conv2_weights_13_1, &conv2_weights_13_2, NULL, &conv2_weights_13_4, &conv2_weights_13_5},
    {&conv2_weights_14_0, NULL, &conv2_weights_14_2, &conv2_weights_14_3, NULL, &conv2_weights_14_5},
    {&conv2_weights_15_0, &conv2_weights_15_1, &conv2_weights_15_2, &conv2_weights_15_3, &conv2_weights_15_4, &conv2_weights_15_5}};

#endif // N2D2_EXPORTC_CONV2_LAYER_H
