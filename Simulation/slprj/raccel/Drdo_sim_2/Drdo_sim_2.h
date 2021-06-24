#ifndef RTW_HEADER_Drdo_sim_2_h_
#define RTW_HEADER_Drdo_sim_2_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Drdo_sim_2_COMMON_INCLUDES_
#define Drdo_sim_2_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Drdo_sim_2_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME Drdo_sim_2
#define NSAMPLE_TIMES (5) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (185) 
#define NUM_ZC_EVENTS (3) 
#ifndef NCSTATES
#define NCSTATES (21)   
#elif NCSTATES != 21
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T pgb0d4fezl ; real_T k1l0dq0whk ; real_T oohzmrpuub ;
real_T ly2tudtpk5 ; real_T deawsx5qhs ; real_T i4titeidnc ; real_T nlefoy3v23
; real_T k23slsjlyn ; real_T kxathhjjic ; real_T njqzbmzkw3 ; real_T
otit5fyej4 ; real_T cyszaymdj5 ; real_T jj2ykly5on ; real_T p5alxz5ziy ;
real_T hcwmplpfgi ; real_T kgkep0bsfn ; real_T gbskkfyvvs ; real_T ohk0kl4s2f
; real_T cxs3zbuah3 ; real_T c24gsmq3eo ; real_T fy4echtbva ; real_T
c3xidiouan ; real_T pe2sphdjh2 ; real_T gz0tlad0jf ; real_T kmuikitwmq ;
real_T eprxgrrx1i ; real_T pmwdqmho2g ; real_T l5a1wc4xqj ; real_T ixqtzgbiga
; real_T d3gxzds2xr ; real_T c4f254ywzz ; real_T p5xdglg0cq ; real_T
iqy4ug0lia ; real_T dgob51egq2 ; real_T ej1y2hbu1l ; real_T cmxojssbts ;
real_T p1fz34rv0r ; real_T polkv0vm24 ; real_T naj01eqche ; real_T nr4gs0vfac
; real_T dfqj14wwuu ; real_T lx4rf5dtol ; real_T kyo53jtai5 ; real_T
nby1ptxpmw ; real_T ogaffaai1o ; real_T erekh4vfpe ; real_T eo5u1lxtg4 ;
real_T g0ppvkegvc ; real_T kpg4nocamz ; real_T pd4oav3zfl ; real_T hskyqojmid
; real_T fmtaaiz1bq ; real_T hnkaykfcmo ; real_T b3rs2blycp ; real_T
hf335bhyf1 ; real_T ok0zckk00c ; real_T l5xc5g0oxc ; real_T hftcpnhtft ;
real_T hsqch24np1 ; real_T fiz4rc4nlg ; real_T km5yr5pvq0 ; real_T oq4qh1b0g3
; real_T giwbgwucdk ; real_T gpd3l10f2a ; real_T h0gqnbiair ; real_T
nd0cjgwifw ; real_T lbzxgesswo ; real_T fylyx3bgwb ; real_T hrzbsnrwi3 ;
real_T psghlesfzb [ 7 ] ; real_T lowxonccdy [ 50 ] ; real_T kuj5cjfmdx ;
real_T gmmxcfk4v1 ; real_T hazzrzn13y ; real_T lhizeihnhz ; real_T agvnom3jo0
; real_T p5xpxaxvbl ; real_T ljv350v5jl ; real_T fjr1hyyzxs ; real_T
odu4rqvais ; real_T mzfgyicx2y ; real_T lxdepkj5ye ; real_T cf5lednvm2 ;
real_T o3jpdxseje ; real_T kshw2uxvoi ; real_T lhpatqphjc ; real_T mr3r11o4cd
; real_T hz0bo4qocx ; real_T i5ef2hwgvu ; real_T mjks4xhjow ; real_T
dmhyv1f3ig ; real_T l42lm2ncga ; real_T mwzvrxpr2p ; real_T hrd1lm1ya0 ;
real_T ey2vd3i5uv ; real_T jqhmwoilj3 ; real_T k2mzdcop0k ; real_T c1q3so5mg1
; real_T lefofrzdab ; real_T fodfgq0jzj ; real_T ffqmzoabpt ; real_T
croyui1tfg ; real_T h5rctxnl5g ; real_T bg1emtvlu5 ; real_T de0pptp2dt ;
real_T f2esttvhy2 ; real_T p0xrb21qa1 ; real_T bed1vibtj4 ; real_T a4raottyfg
; real_T j1n20lggjq ; real_T cq1hxzcfzr ; real_T m4ih4dx4xb ; real_T
jppegbuoi5 ; real_T cu43ie0v4m ; real_T ng4lafji5x ; real_T p5tpfuerbv ;
real_T gckyylswxk ; real_T eoewe3hpfs ; real_T lgzmg01p1c ; real_T cqfzimln2f
; real_T kwrjw25yn5 ; real_T ilzaifqtd1 ; real_T fdsengn1kg ; real_T
aqajecbbnu ; real_T mjmg2qs5xf ; real_T odighpugae ; real_T kat2ic3vyh ;
real_T mo0cmtpcyi ; real_T htqhpx0nsu ; real_T fw5hv2gf0k ; real_T l0wr0i0a0y
; real_T gyysi3xihf ; real_T kq3prrs1uu ; real_T kv0kguhr0b ; real_T
mgmgi14ih4 ; real_T fafevfeqnj ; real_T ecm55snlkx ; real_T mtks03qisz ;
real_T puxyxqzwrf ; real_T jrfwiwd43z ; real_T dtavayqhda ; real_T cgb0hlthvq
; real_T hvpojhtj1s ; real_T ddd1o5htss ; real_T dxwmqkhxq3 ; real_T
j23pwi0b5d ; real_T efzw5gzeym [ 4 ] ; real_T ej4hpfvopy [ 4 ] ; real_T
naomta4xqc [ 4 ] ; real_T jxf2ydkrkn [ 4 ] ; real_T fkbr4vcy5f ; real_T
o5ewjixonz ; real_T clyhmv3twu ; real_T phihsmbahp [ 4 ] ; real_T hywsatg4v3
[ 4 ] ; real_T eibp1n2aoz [ 4 ] ; real_T krxdnnqn04 [ 4 ] ; real_T bdfew4ubkp
; real_T g3sarexv1b ; real_T b0rmkoujvo ; real_T dgkrrt2kba [ 4 ] ; real_T
jaqvf35q5g [ 4 ] ; real_T fsfqwkysby [ 4 ] ; real_T p5m2d13jre [ 4 ] ;
boolean_T e4kk4vfb1y ; boolean_T ay5ogb25yw ; boolean_T dvelx51u0p ;
boolean_T lwhjrhsyft ; boolean_T pstioklrgc ; boolean_T jtq210enar ;
boolean_T oxfqljnx42 ; boolean_T f2sgyuvprw ; boolean_T lqctpheqal ;
boolean_T e1lg13dbu0 ; boolean_T alnnimc4ed ; boolean_T jh5vh1upy1 ;
boolean_T c15ame0mkq ; boolean_T frcrm0imu1 ; boolean_T nlvoty5kpb ;
boolean_T gao5lz0fop ; boolean_T bqqtnueefv ; boolean_T krqyyt04ow ;
boolean_T lx0nmorndi ; boolean_T peg5g4ebaj ; boolean_T hjx4ttdxtg ; } B ;
typedef struct { real_T lmeiw1aeti ; real_T nslw55fjo4 ; real_T j1sqbqmbx3 ;
real_T gb0p0tz3nz ; real_T nikwcsnlrs ; real_T fnx2l0adch ; real_T jhxorqowf3
; real_T fhrkpme2ua ; real_T m2cbloulv2 ; real_T m33htneu44 ; real_T
j4h3sf5tof ; real_T p4sl4of4eu ; uint64_T fzilssap5b ; uint64_T fvzajbb5pk ;
real_T jgycbxp0kd [ 2 ] ; void * bhqiz0ostl [ 22 ] ; struct { void *
LoggedData [ 4 ] ; } cw0uq4zdcz ; struct { void * LoggedData [ 4 ] ; }
gollga0vke ; struct { void * LoggedData [ 4 ] ; } gop3lvwil2 ; struct { void
* LoggedData [ 3 ] ; } ekvcfateot ; struct { void * LoggedData [ 4 ] ; }
kdr4gka2zp ; struct { void * LoggedData [ 4 ] ; } ejcx1ntqzg ; struct { void
* LoggedData [ 3 ] ; } p2zhc55or3 ; struct { void * LoggedData ; } puarrkjwb4
; struct { void * LoggedData ; } fe4yi24401 ; struct { void * LoggedData ; }
anotinlj1b ; struct { void * LoggedData ; } awv2paopc4 ; int_T gudxj4f5fr ;
int_T fnwcukpljc ; int_T no5ex5xcn1 ; int_T hrgiwxycqx [ 23 ] ; int_T
altxlvicd3 ; int_T f2n5brutlw ; int_T nnmbytzwts ; int_T fdj2ubzmrv ; int_T
a0pmgywf4u ; int_T ebvemqdpie ; int_T la35cccgmk [ 26 ] ; int_T byn0u0nqg4 ;
int_T bjj13qhbj4 ; int_T f3klxlmlxp ; int_T iekkid5tdc ; int_T pgykuojto4 ;
int_T kwn43b15y5 ; boolean_T nli2vgeh2l ; boolean_T jzsv2t2lkp ; boolean_T
lwkbt2jmbb ; boolean_T nzlezri5if ; boolean_T dogfdpqywe ; boolean_T
ij42hk2gox ; boolean_T dbxk3wsexw ; boolean_T dkha4nh5hk ; boolean_T
ggljqhbc2z ; boolean_T ljac4kbmhk ; boolean_T g45wnkz5nk ; boolean_T
aydau4o4xu ; boolean_T p3fsjegloa ; boolean_T b5gols3idy ; boolean_T
ewptjpzynq ; boolean_T bff5sopkuo ; boolean_T p3afsqgkuh ; boolean_T
pjyrobqcup ; boolean_T gjhglnw2fy ; boolean_T lsmjehtnux ; boolean_T
oqcjqasc2u ; boolean_T gxbtelcl54 ; boolean_T dpmpfafv23 ; boolean_T
ewm05hm5fd ; boolean_T atop3sgsqq ; boolean_T np2a5gu2nd ; boolean_T
aj13yfzsqb ; boolean_T a4zo1l0ugg ; boolean_T kxwhl4deiz ; boolean_T
oqsfgh42ip ; boolean_T cx23vuteby ; boolean_T isbqvnaoi4 ; boolean_T
h0httbfyha ; boolean_T h234s2aqw5 ; boolean_T mp03nbr0yk ; boolean_T
ejvsxdy4us ; boolean_T pfff4wu12s ; boolean_T fbl4mmnwqe ; } DW ; typedef
struct { real_T gfhzlhd54y ; real_T nnm5idgjgm ; real_T nayd5kndb3 ; real_T
bn1nj5gich ; real_T pxw4s3bjww ; real_T ccbcf5slxf ; real_T dv24m504uv ;
real_T a15dtoel0e ; real_T kdt2inlpip ; real_T lb3v3mf5nf ; real_T cn5rovsmjj
; real_T i04zm2a4vw ; real_T fqxf3jikpe [ 9 ] ; } X ; typedef struct { real_T
gfhzlhd54y ; real_T nnm5idgjgm ; real_T nayd5kndb3 ; real_T bn1nj5gich ;
real_T pxw4s3bjww ; real_T ccbcf5slxf ; real_T dv24m504uv ; real_T a15dtoel0e
; real_T kdt2inlpip ; real_T lb3v3mf5nf ; real_T cn5rovsmjj ; real_T
i04zm2a4vw ; real_T fqxf3jikpe [ 9 ] ; } XDot ; typedef struct { boolean_T
gfhzlhd54y ; boolean_T nnm5idgjgm ; boolean_T nayd5kndb3 ; boolean_T
bn1nj5gich ; boolean_T pxw4s3bjww ; boolean_T ccbcf5slxf ; boolean_T
dv24m504uv ; boolean_T a15dtoel0e ; boolean_T kdt2inlpip ; boolean_T
lb3v3mf5nf ; boolean_T cn5rovsmjj ; boolean_T i04zm2a4vw ; boolean_T
fqxf3jikpe [ 9 ] ; } XDis ; typedef struct { real_T gfhzlhd54y ; real_T
nnm5idgjgm ; real_T nayd5kndb3 ; real_T bn1nj5gich ; real_T pxw4s3bjww ;
real_T ccbcf5slxf ; real_T dv24m504uv ; real_T a15dtoel0e ; real_T kdt2inlpip
; real_T lb3v3mf5nf ; real_T cn5rovsmjj ; real_T i04zm2a4vw ; real_T
fqxf3jikpe [ 9 ] ; } CStateAbsTol ; typedef struct { real_T gfhzlhd54y ;
real_T nnm5idgjgm ; real_T nayd5kndb3 ; real_T bn1nj5gich ; real_T pxw4s3bjww
; real_T ccbcf5slxf ; real_T dv24m504uv ; real_T a15dtoel0e ; real_T
kdt2inlpip ; real_T lb3v3mf5nf ; real_T cn5rovsmjj ; real_T i04zm2a4vw ;
real_T fqxf3jikpe [ 9 ] ; } CXPtMin ; typedef struct { real_T gfhzlhd54y ;
real_T nnm5idgjgm ; real_T nayd5kndb3 ; real_T bn1nj5gich ; real_T pxw4s3bjww
; real_T ccbcf5slxf ; real_T dv24m504uv ; real_T a15dtoel0e ; real_T
kdt2inlpip ; real_T lb3v3mf5nf ; real_T cn5rovsmjj ; real_T i04zm2a4vw ;
real_T fqxf3jikpe [ 9 ] ; } CXPtMax ; typedef struct { real_T a0e2og5bzk ;
real_T mvfexceywj ; real_T i33itngoux ; real_T dajlqncqqa ; real_T oqcmoiqk4y
; real_T midufgp43s ; real_T nlu45ajxxf ; real_T log0n3nldm ; real_T
ett24ovqr4 ; real_T afmzikorvv ; real_T f1bq35l1h3 ; real_T g2eryqsnfy ;
real_T i2uval1lim ; real_T iuzr1iwvpk ; real_T inufdwywux ; real_T lrm3usibnd
; real_T c5ofdwj2r5 ; real_T o5uhf3qjlf ; real_T dwzvzd5eqq ; real_T
iflzhybo1i ; real_T nyxwztuefg ; real_T nzhkchaqji ; real_T f0nc0sdtxv ;
real_T odx341vqo0 ; real_T lw4izlvxrd ; real_T gknikfdpuj ; real_T oa1gjoi2cw
; real_T ipcyaqqxzu ; real_T g3wvwnre34 ; real_T f2ywornu5d ; real_T
lxoppagnun ; real_T axims2zbiv ; real_T ne5id3j1xd ; real_T awkz44ceij ;
real_T dnoluxshtz ; real_T idmj1ndunu ; real_T podiuj2n10 ; real_T b1eaw1yuid
; real_T hhstefz4wx ; real_T ggn5qohq0f ; real_T mtefacjjuw ; real_T
jykvc4nwhf ; real_T ogeqw3jggb ; real_T meifowuxqk ; real_T nsebgptyce ;
real_T kfvianmo5w [ 26 ] ; real_T jyampscynw ; real_T bepzre14zh ; real_T
cu3jt21jhi ; real_T go5y5r4454 ; real_T lt1rkr102w ; real_T e2irj4mkgp ;
real_T aq3ibjnrm0 ; real_T o0i22x2klq ; real_T mnnpwdncfd ; real_T iqp4ghmps5
; real_T bru5tnvnff ; real_T ej0mqxjkqh ; } ZCV ; typedef struct { ZCSigState
mgaf4tjvaw ; ZCSigState ai5fsom5dj ; ZCSigState gtvgvu1ors ; } PrevZCX ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T Battery_BatType ; real_T Battery1_BatType ; real_T Battery2_BatType ;
real_T PWM_Period ; real_T PWM7_Period ; real_T Constant_Value ; real_T
Constant_Value_efypwvyyax ; real_T Constant_Value_ogegtmkzv0 ; real_T
Constant_Value_pbqzqfbpnm ; real_T Constant_Value_hu3rmuppbn ; real_T
Constant_Value_h5irp45zuu ; real_T Constant_Value_bksqnhysc0 ; real_T
Constant_Value_owtewy0ssm ; real_T Constant_Value_k5pwul1wle ; real_T
itinit1_InitialCondition ; real_T R2_Gain ; real_T Currentfilter_A ; real_T
Currentfilter_C ; real_T itinit_InitialCondition ; real_T inti_UpperSat ;
real_T inti_LowerSat ; real_T Gain_Gain ; real_T R3_Gain ; real_T
Integrator2_IC ; real_T Saturation_UpperSat ; real_T Saturation_LowerSat ;
real_T BAL_A ; real_T BAL_C ; real_T R1_Gain ; real_T
itinit1_InitialCondition_l3j5mkh0dv ; real_T R2_Gain_jrqfqsl4vo ; real_T
Currentfilter_A_hazdhojaym ; real_T Currentfilter_C_ldprzne4qv ; real_T
itinit_InitialCondition_pv4h4vt0ps ; real_T inti_UpperSat_itldayqrxp ; real_T
inti_LowerSat_lz3gh0icex ; real_T Gain_Gain_ozvwrv1fuy ; real_T
R3_Gain_dgx1dntlxw ; real_T Integrator2_IC_finfcihmmt ; real_T
Saturation_UpperSat_lxx4j3fnoa ; real_T Saturation_LowerSat_kwi433xk5g ;
real_T BAL_A_cudqa1u03y ; real_T BAL_C_pnvzkp4ayj ; real_T R1_Gain_k1h1x1zryv
; real_T itinit1_InitialCondition_go30gfvhlp ; real_T R2_Gain_fij43s2whq ;
real_T Currentfilter_A_pyl0ygpghg ; real_T Currentfilter_C_hx4sknoziy ;
real_T itinit_InitialCondition_nf4pvnucgc ; real_T inti_UpperSat_nowwhgaxwk ;
real_T inti_LowerSat_cwekkzbyq1 ; real_T Gain_Gain_jbuudt1ftk ; real_T
R3_Gain_de1tgv0zzw ; real_T Integrator2_IC_kqbwod02j2 ; real_T
Saturation_UpperSat_blj3ug4rzx ; real_T Saturation_LowerSat_o0i20janpw ;
real_T BAL_A_n35zxahhei ; real_T BAL_C_ix2bm3qtha ; real_T R1_Gain_elo0441xsu
; real_T StateSpace_P1_Size [ 2 ] ; real_T StateSpace_P1 [ 3895 ] ; real_T
StateSpace_P2_Size [ 2 ] ; real_T StateSpace_P2 [ 4 ] ; real_T
StateSpace_P3_Size [ 2 ] ; real_T StateSpace_P3 [ 9 ] ; real_T
StateSpace_P4_Size [ 2 ] ; real_T StateSpace_P4 [ 3705 ] ; real_T
StateSpace_P5_Size [ 2 ] ; real_T StateSpace_P5 [ 50 ] ; real_T
StateSpace_P6_Size [ 2 ] ; real_T StateSpace_P6 [ 25 ] ; real_T
StateSpace_P7_Size [ 2 ] ; real_T StateSpace_P7 [ 25 ] ; real_T
StateSpace_P8_Size [ 2 ] ; real_T StateSpace_P8 [ 25 ] ; real_T
StateSpace_P9_Size [ 2 ] ; real_T StateSpace_P9 ; real_T StateSpace_P10_Size
[ 2 ] ; real_T StateSpace_P10 ; real_T R4_Gain ; real_T
Saturation_UpperSat_pcz043fnep ; real_T Saturation_LowerSat_b05y2t0vvl ;
real_T donotdeletethisgain_Gain ; real_T R_Gain ; real_T R4_Gain_ayggl2vp1n ;
real_T Saturation_UpperSat_aqwzuangfk ; real_T Saturation_LowerSat_bcd3czsgyq
; real_T donotdeletethisgain_Gain_bg3gl2myht ; real_T R_Gain_jzgvbxeufj ;
real_T R4_Gain_ckkisgzyfx ; real_T Saturation_UpperSat_i3x3oscagf ; real_T
Saturation_LowerSat_gnz45aadu0 ; real_T donotdeletethisgain_Gain_o42imifl5k ;
real_T R_Gain_g4gmpqe5wx ; real_T Gain4_Gain ; real_T Gain1_Gain ; real_T
Gain2_Gain ; real_T Gain4_Gain_kh00znyazs ; real_T Gain1_Gain_og11bwmhu2 ;
real_T Gain2_Gain_m4x3vq3y1f ; real_T Gain4_Gain_fstjjgzlds ; real_T
Gain1_Gain_anymdqpqln ; real_T Gain2_Gain_jptbha03po ; real_T
donotdeletethisgain_Gain_aakwgyoy4i ; real_T
donotdeletethisgain_Gain_m54lmnwzgw ; real_T
donotdeletethisgain_Gain_f1vxkbch2y ; real_T
donotdeletethisgain_Gain_ikuam0amnb ; real_T Constant_Value_jorngiczgp ;
real_T Constant1_Value ; real_T Constant12_Value ; real_T Constant9_Value ;
real_T Constant1_Value_ks0gbwvaxk ; real_T Constant2_Value ; real_T
Constant3_Value ; real_T Constant4_Value ; real_T Constant_Value_fzmb45jy2r ;
real_T Constant1_Value_jelmmtr1rj ; real_T Constant12_Value_df3z3yuypl ;
real_T Constant9_Value_bfo0fnc5l1 ; real_T Constant1_Value_jxqfbvs00y ;
real_T Constant2_Value_nbkvr3eqsy ; real_T Constant3_Value_k030zkojhy ;
real_T Constant4_Value_p1xz0cpgth ; real_T Constant_Value_kiu123temw ; real_T
Constant1_Value_jj3f5fu3xp ; real_T Constant12_Value_ktnzmkcekm ; real_T
Constant9_Value_nhyzz1ckmw ; real_T Constant1_Value_gbfcrdkgqa ; real_T
Constant2_Value_gnk2tjoo5o ; real_T Constant3_Value_hat1prtoip ; real_T
Constant4_Value_cmgjzabbd1 ; real_T gate_Value ; real_T gate_Value_j2rsbfopkw
; real_T gate_Value_pnadvif4hc ; real_T gate_Value_m3r3nzaglm ; real_T
gate_Value_cw3efytsqz ; real_T gate_Value_m3ymbazbc2 ; real_T
gate_Value_awsbj1udfy ; real_T gate_Value_lcm302k1d0 ; real_T eee_Value ;
real_T gate_Value_hvqav3fre2 ; real_T eee_Value_jvovxrhhe5 ; real_T
gate_Value_jtuhk5jcfy ; real_T eee_Value_livrakccix ; real_T
gate_Value_hfhtxagkxf ; real_T eee_Value_a41qgiert1 ; real_T
gate_Value_imdjf4i2gu ; real_T eee_Value_cwpq0ctqc0 ; real_T
gate_Value_fenld0mt10 ; real_T eee_Value_kooi21cjzm ; real_T
gate_Value_gobcdjfmgd ; real_T eee_Value_cgwkesmam5 ; real_T
gate_Value_iurqku1hqp ; real_T eee_Value_mmisgtzd2o ; real_T
gate_Value_hthchwxqcl ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ;
extern B rtB ; extern X rtX ; extern DW rtDW ; extern PrevZCX rtPrevZCX ;
extern P rtP ; extern mxArray * mr_Drdo_sim_2_GetDWork ( ) ; extern void
mr_Drdo_sim_2_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_Drdo_sim_2_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Drdo_sim_2_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
