#include "rt_logging_mmi.h"
#include "Drdo_sim_2_capi.h"
#include <math.h>
#include "Drdo_sim_2.h"
#include "Drdo_sim_2_private.h"
#include "Drdo_sim_2_dt.h"
#include "sfcn_loader_c_api.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 4 , & stopRequested ) ; }
rtExtModeShutdown ( 4 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 5 ; const char_T
* gbl_raccel_Version = "9.5 (R2021a) 14-Nov-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes
( SimStruct * S , const char * inportFileName , int * matFileFormat ) {
return rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; PrevZCX rtPrevZCX ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; void MdlInitialize ( void ) { boolean_T
tmp ; rtDW . lmeiw1aeti = rtP . itinit1_InitialCondition ; rtX . gfhzlhd54y =
0.0 ; rtDW . nslw55fjo4 = rtP . itinit_InitialCondition ; rtDW . gudxj4f5fr =
1 ; if ( ssIsFirstInitCond ( rtS ) ) { rtX . nnm5idgjgm = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . gudxj4f5fr = ! tmp ; }
else { rtDW . gudxj4f5fr = 1 ; } rtX . ccbcf5slxf = 0.0 ; } rtX . nayd5kndb3
= rtP . Integrator2_IC ; rtX . bn1nj5gich = 0.0 ; rtDW . j1sqbqmbx3 = rtP .
itinit1_InitialCondition_l3j5mkh0dv ; rtX . pxw4s3bjww = 0.0 ; rtDW .
gb0p0tz3nz = rtP . itinit_InitialCondition_pv4h4vt0ps ; rtDW . fnwcukpljc = 1
; if ( ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( )
; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW .
fnwcukpljc = ! tmp ; } else { rtDW . fnwcukpljc = 1 ; } rtX . lb3v3mf5nf =
0.0 ; } rtX . dv24m504uv = rtP . Integrator2_IC_finfcihmmt ; rtX . a15dtoel0e
= 0.0 ; rtDW . nikwcsnlrs = rtP . itinit1_InitialCondition_go30gfvhlp ; rtX .
kdt2inlpip = 0.0 ; rtDW . fnx2l0adch = rtP .
itinit_InitialCondition_nf4pvnucgc ; rtDW . no5ex5xcn1 = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if (
tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . no5ex5xcn1 =
! tmp ; } else { rtDW . no5ex5xcn1 = 1 ; } } rtX . cn5rovsmjj = rtP .
Integrator2_IC_kqbwod02j2 ; rtX . i04zm2a4vw = 0.0 ; { SimStruct * rts =
ssGetSFunction ( rtS , 0 ) ; sfcnInitializeConditions ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW . jhxorqowf3 =
ssGetTaskTime ( rtS , 3 ) ; rtDW . a4zo1l0ugg = true ; rtDW . kxwhl4deiz =
true ; rtDW . fhrkpme2ua = ssGetTaskTime ( rtS , 3 ) ; rtDW . m2cbloulv2 = (
rtMinusInf ) ; rtDW . fzilssap5b = 0ULL ; rtDW . oqsfgh42ip = true ; rtDW .
cx23vuteby = true ; rtDW . m33htneu44 = ssGetTaskTime ( rtS , 2 ) ; rtDW .
isbqvnaoi4 = true ; rtDW . h0httbfyha = true ; rtDW . j4h3sf5tof =
ssGetTaskTime ( rtS , 2 ) ; rtDW . p4sl4of4eu = ( rtMinusInf ) ; rtDW .
fvzajbb5pk = 0ULL ; rtDW . h234s2aqw5 = true ; rtDW . mp03nbr0yk = true ; }
void MdlEnable ( void ) { _ssSetSampleHit ( rtS , 3 , 1 ) ; _ssSetTaskTime (
rtS , 3 , ssGetT ( rtS ) ) ; _ssSetVarNextHitTime ( rtS , 1 , ssGetT ( rtS )
) ; ; rtDW . a4zo1l0ugg = true ; rtDW . kxwhl4deiz = true ; rtDW . fhrkpme2ua
= ssGetTaskTime ( rtS , 3 ) ; rtDW . m2cbloulv2 = ( rtMinusInf ) ; rtDW .
fzilssap5b = 0ULL ; _ssSetSampleHit ( rtS , 2 , 1 ) ; _ssSetTaskTime ( rtS ,
2 , ssGetT ( rtS ) ) ; _ssSetVarNextHitTime ( rtS , 0 , ssGetT ( rtS ) ) ; ;
rtDW . isbqvnaoi4 = true ; rtDW . h0httbfyha = true ; rtDW . j4h3sf5tof =
ssGetTaskTime ( rtS , 2 ) ; rtDW . p4sl4of4eu = ( rtMinusInf ) ; rtDW .
fvzajbb5pk = 0ULL ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; sfcnStart ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } MdlInitialize ( ) ;
MdlEnable ( ) ; } void MdlOutputs ( int_T tid ) { real_T jmuz0todoh ; real_T
k0qu5tzxih ; real_T soc3 ; boolean_T tmp ; ZCEventType zcEvent ; rtB .
ly2tudtpk5 = 0.0 ; rtB . ly2tudtpk5 += rtP . Currentfilter_C * rtX .
gfhzlhd54y ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . pgb0d4fezl = rtDW .
lmeiw1aeti ; rtB . k1l0dq0whk = rtP . R2_Gain * rtB . pgb0d4fezl ; rtB .
oohzmrpuub = 1.000001 * rtB . k1l0dq0whk * 0.96711798839458663 / 0.9999 ; if
( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . nli2vgeh2l = ( rtB . ly2tudtpk5
> rtP . Constant_Value ) ; } rtB . deawsx5qhs = rtDW . nli2vgeh2l ; rtB .
i4titeidnc = rtDW . nslw55fjo4 ; } tmp = ssGetIsOkayToUpdateMode ( rtS ) ; if
( tmp ) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & rtPrevZCX .
mgaf4tjvaw , ( rtB . deawsx5qhs ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || (
rtDW . gudxj4f5fr != 0 ) ) { rtX . nnm5idgjgm = rtB . i4titeidnc ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( rtX . nnm5idgjgm
>= rtP . inti_UpperSat ) { if ( rtX . nnm5idgjgm != rtP . inti_UpperSat ) {
rtX . nnm5idgjgm = rtP . inti_UpperSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . altxlvicd3 = 3
; } else if ( rtX . nnm5idgjgm <= rtP . inti_LowerSat ) { if ( rtX .
nnm5idgjgm != rtP . inti_LowerSat ) { rtX . nnm5idgjgm = rtP . inti_LowerSat
; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . altxlvicd3 =
4 ; } else { if ( rtDW . altxlvicd3 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . altxlvicd3 = 0
; } rtB . nlefoy3v23 = rtX . nnm5idgjgm ; } else { rtB . nlefoy3v23 = rtX .
nnm5idgjgm ; } rtB . k23slsjlyn = rtP . Gain_Gain * rtB . nlefoy3v23 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . jzsv2t2lkp = ( rtB . k23slsjlyn > rtB . k1l0dq0whk ) ; } rtB .
e4kk4vfb1y = rtDW . jzsv2t2lkp ; if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . lwkbt2jmbb = ( rtB . k23slsjlyn < rtP . Constant9_Value ) ; } rtB .
ay5ogb25yw = rtDW . lwkbt2jmbb ; } if ( rtB . e4kk4vfb1y ) { rtB . kxathhjjic
= rtB . k1l0dq0whk ; } else { if ( rtB . ay5ogb25yw ) { rtB . g3sarexv1b =
rtP . Constant9_Value ; } else { rtB . g3sarexv1b = rtB . k23slsjlyn ; } rtB
. kxathhjjic = rtB . g3sarexv1b ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if
( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . nzlezri5if = ( rtB . oohzmrpuub
<= rtB . kxathhjjic ) ; } rtB . dvelx51u0p = rtDW . nzlezri5if ; } if ( rtB .
dvelx51u0p ) { rtB . njqzbmzkw3 = rtB . k1l0dq0whk ; } else { rtB .
njqzbmzkw3 = rtB . kxathhjjic ; } k0qu5tzxih = - 0.0035960711063137895 * rtB
. pgb0d4fezl / ( rtB . pgb0d4fezl - rtB . njqzbmzkw3 ) * rtB . njqzbmzkw3 ;
jmuz0todoh = - rtB . deawsx5qhs * 0.0035960711063137895 * rtB . ly2tudtpk5 *
rtB . pgb0d4fezl / ( rtB . pgb0d4fezl - rtB . njqzbmzkw3 ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . otit5fyej4 = rtP . R3_Gain * rtB .
pgb0d4fezl ; if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . dogfdpqywe = (
rtB . k23slsjlyn > rtB . otit5fyej4 ) ; } rtB . lwhjrhsyft = rtDW .
dogfdpqywe ; rtB . cyszaymdj5 = - rtB . otit5fyej4 * 0.999 * 0.1 * 0.9999 ;
if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . ij42hk2gox = ( rtB .
k23slsjlyn < rtB . cyszaymdj5 ) ; } rtB . pstioklrgc = rtDW . ij42hk2gox ; }
if ( rtB . lwhjrhsyft ) { rtB . jj2ykly5on = rtB . otit5fyej4 ; } else { if (
rtB . pstioklrgc ) { rtB . bdfew4ubkp = rtB . cyszaymdj5 ; } else { rtB .
bdfew4ubkp = rtB . k23slsjlyn ; } rtB . jj2ykly5on = rtB . bdfew4ubkp ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . dbxk3wsexw = ( rtB . ly2tudtpk5 < rtP . Constant_Value_efypwvyyax ) ;
} rtB . p5alxz5ziy = rtDW . dbxk3wsexw ; } switch ( ( int32_T ) rtP .
Battery_BatType ) { case 1 : rtB . p5m2d13jre [ 0 ] = rtP . Constant4_Value *
rtB . jj2ykly5on ; rtB . p5m2d13jre [ 1 ] = rtP . Constant4_Value * rtB .
ly2tudtpk5 ; rtB . p5m2d13jre [ 2 ] = rtP . Constant4_Value * rtB .
p5alxz5ziy ; rtB . p5m2d13jre [ 3 ] = rtP . Constant4_Value * rtB .
pgb0d4fezl ; rtB . hcwmplpfgi = - rtB . p5m2d13jre [ 2 ] *
0.0035960711063137895 * rtB . p5m2d13jre [ 1 ] * ( 7.75499999999998 / ( rtB .
p5m2d13jre [ 0 ] + 0.77549999999999808 ) ) ; break ; case 2 : rtB .
fsfqwkysby [ 0 ] = rtP . Constant1_Value_ks0gbwvaxk * rtB . jj2ykly5on ; rtB
. fsfqwkysby [ 1 ] = rtP . Constant1_Value_ks0gbwvaxk * rtB . ly2tudtpk5 ;
rtB . fsfqwkysby [ 2 ] = rtP . Constant1_Value_ks0gbwvaxk * rtB . p5alxz5ziy
; rtB . fsfqwkysby [ 3 ] = rtP . Constant1_Value_ks0gbwvaxk * rtB .
pgb0d4fezl ; rtB . hcwmplpfgi = - rtB . fsfqwkysby [ 2 ] *
0.0035960711063137895 * rtB . fsfqwkysby [ 1 ] * rtB . fsfqwkysby [ 3 ] / (
rtB . fsfqwkysby [ 3 ] * 0.1 + rtB . fsfqwkysby [ 0 ] ) ; break ; case 3 :
rtB . jaqvf35q5g [ 0 ] = rtP . Constant3_Value * rtB . jj2ykly5on ; rtB .
jaqvf35q5g [ 1 ] = rtP . Constant3_Value * rtB . ly2tudtpk5 ; rtB .
jaqvf35q5g [ 2 ] = rtP . Constant3_Value * rtB . p5alxz5ziy ; rtB .
jaqvf35q5g [ 3 ] = rtP . Constant3_Value * rtB . pgb0d4fezl ; rtB .
hcwmplpfgi = - rtB . jaqvf35q5g [ 2 ] * 0.0035960711063137895 * rtB .
jaqvf35q5g [ 1 ] * ( 7.75499999999998 / ( muDoubleScalarAbs ( rtB .
jaqvf35q5g [ 0 ] ) + 0.77549999999999808 ) ) ; break ; default : rtB .
dgkrrt2kba [ 0 ] = rtP . Constant2_Value * rtB . jj2ykly5on ; rtB .
dgkrrt2kba [ 1 ] = rtP . Constant2_Value * rtB . ly2tudtpk5 ; rtB .
dgkrrt2kba [ 2 ] = rtP . Constant2_Value * rtB . p5alxz5ziy ; rtB .
dgkrrt2kba [ 3 ] = rtP . Constant2_Value * rtB . pgb0d4fezl ; rtB .
hcwmplpfgi = - rtB . dgkrrt2kba [ 2 ] * 0.0035960711063137895 * rtB .
dgkrrt2kba [ 1 ] * ( 7.75499999999998 / ( muDoubleScalarAbs ( rtB .
dgkrrt2kba [ 0 ] ) + 0.77549999999999808 ) ) ; break ; } rtB . kgkep0bsfn =
rtX . nayd5kndb3 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . f2n5brutlw = rtB
. njqzbmzkw3 >= rtP . Saturation_UpperSat ? 1 : rtB . njqzbmzkw3 > rtP .
Saturation_LowerSat ? 0 : - 1 ; } rtB . gbskkfyvvs = rtDW . f2n5brutlw == 1 ?
rtP . Saturation_UpperSat : rtDW . f2n5brutlw == - 1 ? rtP .
Saturation_LowerSat : rtB . njqzbmzkw3 ; switch ( ( int32_T ) rtP .
Battery_BatType ) { case 1 : rtB . ohk0kl4s2f = rtB . kgkep0bsfn ; break ;
case 2 : rtB . ohk0kl4s2f = muDoubleScalarExp ( - 8.14159292035398 * rtB .
gbskkfyvvs ) * 0.30231346702233958 ; break ; case 3 : rtB . ohk0kl4s2f = rtB
. kgkep0bsfn ; break ; default : rtB . ohk0kl4s2f = rtB . kgkep0bsfn ; break
; } rtB . cxs3zbuah3 = ( ( ( k0qu5tzxih + jmuz0todoh ) + rtB . hcwmplpfgi ) +
rtB . ohk0kl4s2f ) + - 0.0 * rtB . njqzbmzkw3 ; rtB . c24gsmq3eo = rtP .
Constant_Value_jorngiczgp + rtB . cxs3zbuah3 ; if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . dkha4nh5hk = ( rtB .
c24gsmq3eo > rtP . Constant1_Value ) ; } rtB . jtq210enar = rtDW . dkha4nh5hk
; } rtB . fy4echtbva = 0.0 ; rtB . fy4echtbva += rtP . BAL_C * rtX .
bn1nj5gich ; rtB . c3xidiouan = rtP . R1_Gain * rtB . fy4echtbva ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . ggljqhbc2z = ( rtB . c24gsmq3eo < rtB . c3xidiouan ) ; } rtB .
oxfqljnx42 = rtDW . ggljqhbc2z ; rtB . gz0tlad0jf = rtDW . j1sqbqmbx3 ; rtB .
kmuikitwmq = rtP . R2_Gain_jrqfqsl4vo * rtB . gz0tlad0jf ; rtB . eprxgrrx1i =
1.000001 * rtB . kmuikitwmq * 0.96711798839458663 / 0.9999 ; } if ( rtB .
jtq210enar ) { rtB . pe2sphdjh2 = rtP . Constant1_Value ; } else { if ( rtB .
oxfqljnx42 ) { rtB . b0rmkoujvo = rtB . c3xidiouan ; } else { rtB .
b0rmkoujvo = rtB . c24gsmq3eo ; } rtB . pe2sphdjh2 = rtB . b0rmkoujvo ; } rtB
. pmwdqmho2g = 0.0 ; rtB . pmwdqmho2g += rtP . Currentfilter_C_ldprzne4qv *
rtX . pxw4s3bjww ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . ljac4kbmhk = ( rtB . pmwdqmho2g >
rtP . Constant_Value_pbqzqfbpnm ) ; } rtB . l5a1wc4xqj = rtDW . ljac4kbmhk ;
rtB . ixqtzgbiga = rtDW . gb0p0tz3nz ; } tmp = ssGetIsOkayToUpdateMode ( rtS
) ; if ( tmp ) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & rtPrevZCX .
ai5fsom5dj , ( rtB . l5a1wc4xqj ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || (
rtDW . fnwcukpljc != 0 ) ) { rtX . ccbcf5slxf = rtB . ixqtzgbiga ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( rtX . ccbcf5slxf
>= rtP . inti_UpperSat_itldayqrxp ) { if ( rtX . ccbcf5slxf != rtP .
inti_UpperSat_itldayqrxp ) { rtX . ccbcf5slxf = rtP .
inti_UpperSat_itldayqrxp ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; } rtDW . nnmbytzwts = 3 ; } else if ( rtX . ccbcf5slxf <= rtP .
inti_LowerSat_lz3gh0icex ) { if ( rtX . ccbcf5slxf != rtP .
inti_LowerSat_lz3gh0icex ) { rtX . ccbcf5slxf = rtP .
inti_LowerSat_lz3gh0icex ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; } rtDW . nnmbytzwts = 4 ; } else { if ( rtDW . nnmbytzwts != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . nnmbytzwts = 0
; } rtB . d3gxzds2xr = rtX . ccbcf5slxf ; } else { rtB . d3gxzds2xr = rtX .
ccbcf5slxf ; } rtB . c4f254ywzz = rtP . Gain_Gain_ozvwrv1fuy * rtB .
d3gxzds2xr ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . g45wnkz5nk = ( rtB . c4f254ywzz >
rtB . kmuikitwmq ) ; } rtB . f2sgyuvprw = rtDW . g45wnkz5nk ; if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . aydau4o4xu = ( rtB . c4f254ywzz <
rtP . Constant9_Value_bfo0fnc5l1 ) ; } rtB . lqctpheqal = rtDW . aydau4o4xu ;
} if ( rtB . f2sgyuvprw ) { rtB . p5xdglg0cq = rtB . kmuikitwmq ; } else { if
( rtB . lqctpheqal ) { rtB . o5ewjixonz = rtP . Constant9_Value_bfo0fnc5l1 ;
} else { rtB . o5ewjixonz = rtB . c4f254ywzz ; } rtB . p5xdglg0cq = rtB .
o5ewjixonz ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . p3fsjegloa = ( rtB . eprxgrrx1i <=
rtB . p5xdglg0cq ) ; } rtB . e1lg13dbu0 = rtDW . p3fsjegloa ; } if ( rtB .
e1lg13dbu0 ) { rtB . iqy4ug0lia = rtB . kmuikitwmq ; } else { rtB .
iqy4ug0lia = rtB . p5xdglg0cq ; } k0qu5tzxih = - 0.0035960711063137895 * rtB
. gz0tlad0jf / ( rtB . gz0tlad0jf - rtB . iqy4ug0lia ) * rtB . iqy4ug0lia ;
jmuz0todoh = - rtB . l5a1wc4xqj * 0.0035960711063137895 * rtB . pmwdqmho2g *
rtB . gz0tlad0jf / ( rtB . gz0tlad0jf - rtB . iqy4ug0lia ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . dgob51egq2 = rtP . R3_Gain_dgx1dntlxw
* rtB . gz0tlad0jf ; if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW .
b5gols3idy = ( rtB . c4f254ywzz > rtB . dgob51egq2 ) ; } rtB . alnnimc4ed =
rtDW . b5gols3idy ; rtB . ej1y2hbu1l = - rtB . dgob51egq2 * 0.999 * 0.1 *
0.9999 ; if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . ewptjpzynq = ( rtB .
c4f254ywzz < rtB . ej1y2hbu1l ) ; } rtB . jh5vh1upy1 = rtDW . ewptjpzynq ; }
if ( rtB . alnnimc4ed ) { rtB . cmxojssbts = rtB . dgob51egq2 ; } else { if (
rtB . jh5vh1upy1 ) { rtB . fkbr4vcy5f = rtB . ej1y2hbu1l ; } else { rtB .
fkbr4vcy5f = rtB . c4f254ywzz ; } rtB . cmxojssbts = rtB . fkbr4vcy5f ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . bff5sopkuo = ( rtB . pmwdqmho2g < rtP . Constant_Value_hu3rmuppbn ) ;
} rtB . p1fz34rv0r = rtDW . bff5sopkuo ; } switch ( ( int32_T ) rtP .
Battery1_BatType ) { case 1 : rtB . krxdnnqn04 [ 0 ] = rtP .
Constant4_Value_p1xz0cpgth * rtB . cmxojssbts ; rtB . krxdnnqn04 [ 1 ] = rtP
. Constant4_Value_p1xz0cpgth * rtB . pmwdqmho2g ; rtB . krxdnnqn04 [ 2 ] =
rtP . Constant4_Value_p1xz0cpgth * rtB . p1fz34rv0r ; rtB . krxdnnqn04 [ 3 ]
= rtP . Constant4_Value_p1xz0cpgth * rtB . gz0tlad0jf ; rtB . polkv0vm24 = -
rtB . krxdnnqn04 [ 2 ] * 0.0035960711063137895 * rtB . krxdnnqn04 [ 1 ] * (
7.75499999999998 / ( rtB . krxdnnqn04 [ 0 ] + 0.77549999999999808 ) ) ; break
; case 2 : rtB . eibp1n2aoz [ 0 ] = rtP . Constant1_Value_jxqfbvs00y * rtB .
cmxojssbts ; rtB . eibp1n2aoz [ 1 ] = rtP . Constant1_Value_jxqfbvs00y * rtB
. pmwdqmho2g ; rtB . eibp1n2aoz [ 2 ] = rtP . Constant1_Value_jxqfbvs00y *
rtB . p1fz34rv0r ; rtB . eibp1n2aoz [ 3 ] = rtP . Constant1_Value_jxqfbvs00y
* rtB . gz0tlad0jf ; rtB . polkv0vm24 = - rtB . eibp1n2aoz [ 2 ] *
0.0035960711063137895 * rtB . eibp1n2aoz [ 1 ] * rtB . eibp1n2aoz [ 3 ] / (
rtB . eibp1n2aoz [ 3 ] * 0.1 + rtB . eibp1n2aoz [ 0 ] ) ; break ; case 3 :
rtB . hywsatg4v3 [ 0 ] = rtP . Constant3_Value_k030zkojhy * rtB . cmxojssbts
; rtB . hywsatg4v3 [ 1 ] = rtP . Constant3_Value_k030zkojhy * rtB .
pmwdqmho2g ; rtB . hywsatg4v3 [ 2 ] = rtP . Constant3_Value_k030zkojhy * rtB
. p1fz34rv0r ; rtB . hywsatg4v3 [ 3 ] = rtP . Constant3_Value_k030zkojhy *
rtB . gz0tlad0jf ; rtB . polkv0vm24 = - rtB . hywsatg4v3 [ 2 ] *
0.0035960711063137895 * rtB . hywsatg4v3 [ 1 ] * ( 7.75499999999998 / (
muDoubleScalarAbs ( rtB . hywsatg4v3 [ 0 ] ) + 0.77549999999999808 ) ) ;
break ; default : rtB . phihsmbahp [ 0 ] = rtP . Constant2_Value_nbkvr3eqsy *
rtB . cmxojssbts ; rtB . phihsmbahp [ 1 ] = rtP . Constant2_Value_nbkvr3eqsy
* rtB . pmwdqmho2g ; rtB . phihsmbahp [ 2 ] = rtP .
Constant2_Value_nbkvr3eqsy * rtB . p1fz34rv0r ; rtB . phihsmbahp [ 3 ] = rtP
. Constant2_Value_nbkvr3eqsy * rtB . gz0tlad0jf ; rtB . polkv0vm24 = - rtB .
phihsmbahp [ 2 ] * 0.0035960711063137895 * rtB . phihsmbahp [ 1 ] * (
7.75499999999998 / ( muDoubleScalarAbs ( rtB . phihsmbahp [ 0 ] ) +
0.77549999999999808 ) ) ; break ; } rtB . naj01eqche = rtX . dv24m504uv ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . fdj2ubzmrv = rtB . iqy4ug0lia >= rtP .
Saturation_UpperSat_lxx4j3fnoa ? 1 : rtB . iqy4ug0lia > rtP .
Saturation_LowerSat_kwi433xk5g ? 0 : - 1 ; } rtB . nr4gs0vfac = rtDW .
fdj2ubzmrv == 1 ? rtP . Saturation_UpperSat_lxx4j3fnoa : rtDW . fdj2ubzmrv ==
- 1 ? rtP . Saturation_LowerSat_kwi433xk5g : rtB . iqy4ug0lia ; switch ( (
int32_T ) rtP . Battery1_BatType ) { case 1 : rtB . dfqj14wwuu = rtB .
naj01eqche ; break ; case 2 : rtB . dfqj14wwuu = muDoubleScalarExp ( -
8.14159292035398 * rtB . nr4gs0vfac ) * 0.30231346702233958 ; break ; case 3
: rtB . dfqj14wwuu = rtB . naj01eqche ; break ; default : rtB . dfqj14wwuu =
rtB . naj01eqche ; break ; } rtB . lx4rf5dtol = ( ( ( k0qu5tzxih + jmuz0todoh
) + rtB . polkv0vm24 ) + rtB . dfqj14wwuu ) + - 0.0 * rtB . iqy4ug0lia ; rtB
. kyo53jtai5 = rtP . Constant_Value_fzmb45jy2r + rtB . lx4rf5dtol ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . p3afsqgkuh = ( rtB . kyo53jtai5 > rtP . Constant1_Value_jelmmtr1rj ) ;
} rtB . c15ame0mkq = rtDW . p3afsqgkuh ; } rtB . nby1ptxpmw = 0.0 ; rtB .
nby1ptxpmw += rtP . BAL_C_pnvzkp4ayj * rtX . a15dtoel0e ; rtB . ogaffaai1o =
rtP . R1_Gain_k1h1x1zryv * rtB . nby1ptxpmw ; if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . pjyrobqcup = ( rtB .
kyo53jtai5 < rtB . ogaffaai1o ) ; } rtB . frcrm0imu1 = rtDW . pjyrobqcup ;
rtB . eo5u1lxtg4 = rtDW . nikwcsnlrs ; rtB . g0ppvkegvc = rtP .
R2_Gain_fij43s2whq * rtB . eo5u1lxtg4 ; rtB . kpg4nocamz = 1.000001 * rtB .
g0ppvkegvc * 0.96711798839458663 / 0.9999 ; } if ( rtB . c15ame0mkq ) { rtB .
erekh4vfpe = rtP . Constant1_Value_jelmmtr1rj ; } else { if ( rtB .
frcrm0imu1 ) { rtB . clyhmv3twu = rtB . ogaffaai1o ; } else { rtB .
clyhmv3twu = rtB . kyo53jtai5 ; } rtB . erekh4vfpe = rtB . clyhmv3twu ; } rtB
. pd4oav3zfl = 0.0 ; rtB . pd4oav3zfl += rtP . Currentfilter_C_hx4sknoziy *
rtX . kdt2inlpip ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . gjhglnw2fy = ( rtB . pd4oav3zfl >
rtP . Constant_Value_bksqnhysc0 ) ; } rtB . hskyqojmid = rtDW . gjhglnw2fy ;
rtB . fmtaaiz1bq = rtDW . fnx2l0adch ; } tmp = ssGetIsOkayToUpdateMode ( rtS
) ; if ( tmp ) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & rtPrevZCX .
gtvgvu1ors , ( rtB . hskyqojmid ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || (
rtDW . no5ex5xcn1 != 0 ) ) { rtX . lb3v3mf5nf = rtB . fmtaaiz1bq ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( rtX . lb3v3mf5nf
>= rtP . inti_UpperSat_nowwhgaxwk ) { if ( rtX . lb3v3mf5nf != rtP .
inti_UpperSat_nowwhgaxwk ) { rtX . lb3v3mf5nf = rtP .
inti_UpperSat_nowwhgaxwk ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; } rtDW . a0pmgywf4u = 3 ; } else if ( rtX . lb3v3mf5nf <= rtP .
inti_LowerSat_cwekkzbyq1 ) { if ( rtX . lb3v3mf5nf != rtP .
inti_LowerSat_cwekkzbyq1 ) { rtX . lb3v3mf5nf = rtP .
inti_LowerSat_cwekkzbyq1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; } rtDW . a0pmgywf4u = 4 ; } else { if ( rtDW . a0pmgywf4u != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . a0pmgywf4u = 0
; } rtB . hnkaykfcmo = rtX . lb3v3mf5nf ; } else { rtB . hnkaykfcmo = rtX .
lb3v3mf5nf ; } rtB . b3rs2blycp = rtP . Gain_Gain_jbuudt1ftk * rtB .
hnkaykfcmo ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . lsmjehtnux = ( rtB . b3rs2blycp >
rtB . g0ppvkegvc ) ; } rtB . nlvoty5kpb = rtDW . lsmjehtnux ; if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . oqcjqasc2u = ( rtB . b3rs2blycp <
rtP . Constant9_Value_nhyzz1ckmw ) ; } rtB . gao5lz0fop = rtDW . oqcjqasc2u ;
} if ( rtB . nlvoty5kpb ) { rtB . hf335bhyf1 = rtB . g0ppvkegvc ; } else { if
( rtB . gao5lz0fop ) { rtB . dxwmqkhxq3 = rtP . Constant9_Value_nhyzz1ckmw ;
} else { rtB . dxwmqkhxq3 = rtB . b3rs2blycp ; } rtB . hf335bhyf1 = rtB .
dxwmqkhxq3 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . gxbtelcl54 = ( rtB . kpg4nocamz <=
rtB . hf335bhyf1 ) ; } rtB . bqqtnueefv = rtDW . gxbtelcl54 ; } if ( rtB .
bqqtnueefv ) { rtB . ok0zckk00c = rtB . g0ppvkegvc ; } else { rtB .
ok0zckk00c = rtB . hf335bhyf1 ; } k0qu5tzxih = - 0.0035960711063137895 * rtB
. eo5u1lxtg4 / ( rtB . eo5u1lxtg4 - rtB . ok0zckk00c ) * rtB . ok0zckk00c ;
jmuz0todoh = - rtB . hskyqojmid * 0.0035960711063137895 * rtB . pd4oav3zfl *
rtB . eo5u1lxtg4 / ( rtB . eo5u1lxtg4 - rtB . ok0zckk00c ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . l5xc5g0oxc = rtP . R3_Gain_de1tgv0zzw
* rtB . eo5u1lxtg4 ; if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW .
dpmpfafv23 = ( rtB . b3rs2blycp > rtB . l5xc5g0oxc ) ; } rtB . krqyyt04ow =
rtDW . dpmpfafv23 ; rtB . hftcpnhtft = - rtB . l5xc5g0oxc * 0.999 * 0.1 *
0.9999 ; if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . ewm05hm5fd = ( rtB .
b3rs2blycp < rtB . hftcpnhtft ) ; } rtB . lx0nmorndi = rtDW . ewm05hm5fd ; }
if ( rtB . krqyyt04ow ) { rtB . hsqch24np1 = rtB . l5xc5g0oxc ; } else { if (
rtB . lx0nmorndi ) { rtB . ddd1o5htss = rtB . hftcpnhtft ; } else { rtB .
ddd1o5htss = rtB . b3rs2blycp ; } rtB . hsqch24np1 = rtB . ddd1o5htss ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . atop3sgsqq = ( rtB . pd4oav3zfl < rtP . Constant_Value_owtewy0ssm ) ;
} rtB . fiz4rc4nlg = rtDW . atop3sgsqq ; } switch ( ( int32_T ) rtP .
Battery2_BatType ) { case 1 : rtB . jxf2ydkrkn [ 0 ] = rtP .
Constant4_Value_cmgjzabbd1 * rtB . hsqch24np1 ; rtB . jxf2ydkrkn [ 1 ] = rtP
. Constant4_Value_cmgjzabbd1 * rtB . pd4oav3zfl ; rtB . jxf2ydkrkn [ 2 ] =
rtP . Constant4_Value_cmgjzabbd1 * rtB . fiz4rc4nlg ; rtB . jxf2ydkrkn [ 3 ]
= rtP . Constant4_Value_cmgjzabbd1 * rtB . eo5u1lxtg4 ; rtB . km5yr5pvq0 = -
rtB . jxf2ydkrkn [ 2 ] * 0.0035960711063137895 * rtB . jxf2ydkrkn [ 1 ] * (
7.75499999999998 / ( rtB . jxf2ydkrkn [ 0 ] + 0.77549999999999808 ) ) ; break
; case 2 : rtB . naomta4xqc [ 0 ] = rtP . Constant1_Value_gbfcrdkgqa * rtB .
hsqch24np1 ; rtB . naomta4xqc [ 1 ] = rtP . Constant1_Value_gbfcrdkgqa * rtB
. pd4oav3zfl ; rtB . naomta4xqc [ 2 ] = rtP . Constant1_Value_gbfcrdkgqa *
rtB . fiz4rc4nlg ; rtB . naomta4xqc [ 3 ] = rtP . Constant1_Value_gbfcrdkgqa
* rtB . eo5u1lxtg4 ; rtB . km5yr5pvq0 = - rtB . naomta4xqc [ 2 ] *
0.0035960711063137895 * rtB . naomta4xqc [ 1 ] * rtB . naomta4xqc [ 3 ] / (
rtB . naomta4xqc [ 3 ] * 0.1 + rtB . naomta4xqc [ 0 ] ) ; break ; case 3 :
rtB . ej4hpfvopy [ 0 ] = rtP . Constant3_Value_hat1prtoip * rtB . hsqch24np1
; rtB . ej4hpfvopy [ 1 ] = rtP . Constant3_Value_hat1prtoip * rtB .
pd4oav3zfl ; rtB . ej4hpfvopy [ 2 ] = rtP . Constant3_Value_hat1prtoip * rtB
. fiz4rc4nlg ; rtB . ej4hpfvopy [ 3 ] = rtP . Constant3_Value_hat1prtoip *
rtB . eo5u1lxtg4 ; rtB . km5yr5pvq0 = - rtB . ej4hpfvopy [ 2 ] *
0.0035960711063137895 * rtB . ej4hpfvopy [ 1 ] * ( 7.75499999999998 / (
muDoubleScalarAbs ( rtB . ej4hpfvopy [ 0 ] ) + 0.77549999999999808 ) ) ;
break ; default : rtB . efzw5gzeym [ 0 ] = rtP . Constant2_Value_gnk2tjoo5o *
rtB . hsqch24np1 ; rtB . efzw5gzeym [ 1 ] = rtP . Constant2_Value_gnk2tjoo5o
* rtB . pd4oav3zfl ; rtB . efzw5gzeym [ 2 ] = rtP .
Constant2_Value_gnk2tjoo5o * rtB . fiz4rc4nlg ; rtB . efzw5gzeym [ 3 ] = rtP
. Constant2_Value_gnk2tjoo5o * rtB . eo5u1lxtg4 ; rtB . km5yr5pvq0 = - rtB .
efzw5gzeym [ 2 ] * 0.0035960711063137895 * rtB . efzw5gzeym [ 1 ] * (
7.75499999999998 / ( muDoubleScalarAbs ( rtB . efzw5gzeym [ 0 ] ) +
0.77549999999999808 ) ) ; break ; } rtB . oq4qh1b0g3 = rtX . cn5rovsmjj ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . ebvemqdpie = rtB . ok0zckk00c >= rtP .
Saturation_UpperSat_blj3ug4rzx ? 1 : rtB . ok0zckk00c > rtP .
Saturation_LowerSat_o0i20janpw ? 0 : - 1 ; } rtB . giwbgwucdk = rtDW .
ebvemqdpie == 1 ? rtP . Saturation_UpperSat_blj3ug4rzx : rtDW . ebvemqdpie ==
- 1 ? rtP . Saturation_LowerSat_o0i20janpw : rtB . ok0zckk00c ; switch ( (
int32_T ) rtP . Battery2_BatType ) { case 1 : rtB . gpd3l10f2a = rtB .
oq4qh1b0g3 ; break ; case 2 : rtB . gpd3l10f2a = muDoubleScalarExp ( -
8.14159292035398 * rtB . giwbgwucdk ) * 0.30231346702233958 ; break ; case 3
: rtB . gpd3l10f2a = rtB . oq4qh1b0g3 ; break ; default : rtB . gpd3l10f2a =
rtB . oq4qh1b0g3 ; break ; } rtB . h0gqnbiair = ( ( ( k0qu5tzxih + jmuz0todoh
) + rtB . km5yr5pvq0 ) + rtB . gpd3l10f2a ) + - 0.0 * rtB . ok0zckk00c ; rtB
. nd0cjgwifw = rtP . Constant_Value_kiu123temw + rtB . h0gqnbiair ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . np2a5gu2nd = ( rtB . nd0cjgwifw > rtP . Constant1_Value_jj3f5fu3xp ) ;
} rtB . peg5g4ebaj = rtDW . np2a5gu2nd ; } rtB . lbzxgesswo = 0.0 ; rtB .
lbzxgesswo += rtP . BAL_C_ix2bm3qtha * rtX . i04zm2a4vw ; rtB . fylyx3bgwb =
rtP . R1_Gain_elo0441xsu * rtB . lbzxgesswo ; if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . aj13yfzsqb = ( rtB .
nd0cjgwifw < rtB . fylyx3bgwb ) ; } rtB . hjx4ttdxtg = rtDW . aj13yfzsqb ; }
if ( rtB . peg5g4ebaj ) { rtB . hrzbsnrwi3 = rtP . Constant1_Value_jj3f5fu3xp
; } else { if ( rtB . hjx4ttdxtg ) { rtB . j23pwi0b5d = rtB . fylyx3bgwb ; }
else { rtB . j23pwi0b5d = rtB . nd0cjgwifw ; } rtB . hrzbsnrwi3 = rtB .
j23pwi0b5d ; } { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; sfcnOutputs (
rts , 0 ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . kuj5cjfmdx = rtP .
R4_Gain * rtB . pgb0d4fezl ; } rtB . gmmxcfk4v1 = ( 1.0 - rtB . njqzbmzkw3 /
rtB . kuj5cjfmdx ) * 100.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
byn0u0nqg4 = rtB . gmmxcfk4v1 >= rtP . Saturation_UpperSat_pcz043fnep ? 1 :
rtB . gmmxcfk4v1 > rtP . Saturation_LowerSat_b05y2t0vvl ? 0 : - 1 ; } rtB .
hazzrzn13y = rtDW . byn0u0nqg4 == 1 ? rtP . Saturation_UpperSat_pcz043fnep :
rtDW . byn0u0nqg4 == - 1 ? rtP . Saturation_LowerSat_b05y2t0vvl : rtB .
gmmxcfk4v1 ; rtB . lhizeihnhz = rtP . donotdeletethisgain_Gain * rtB .
psghlesfzb [ 2 ] ; rtB . agvnom3jo0 = rtB . pe2sphdjh2 - rtP . R_Gain * rtB .
lhizeihnhz ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . p5xpxaxvbl = rtP .
R4_Gain_ayggl2vp1n * rtB . gz0tlad0jf ; } rtB . ljv350v5jl = ( 1.0 - rtB .
iqy4ug0lia / rtB . p5xpxaxvbl ) * 100.0 ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . bjj13qhbj4 = rtB . ljv350v5jl >= rtP . Saturation_UpperSat_aqwzuangfk
? 1 : rtB . ljv350v5jl > rtP . Saturation_LowerSat_bcd3czsgyq ? 0 : - 1 ; }
rtB . fjr1hyyzxs = rtDW . bjj13qhbj4 == 1 ? rtP .
Saturation_UpperSat_aqwzuangfk : rtDW . bjj13qhbj4 == - 1 ? rtP .
Saturation_LowerSat_bcd3czsgyq : rtB . ljv350v5jl ; rtB . odu4rqvais = rtP .
donotdeletethisgain_Gain_bg3gl2myht * rtB . psghlesfzb [ 3 ] ; rtB .
mzfgyicx2y = rtB . erekh4vfpe - rtP . R_Gain_jzgvbxeufj * rtB . odu4rqvais ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . lxdepkj5ye = rtP .
R4_Gain_ckkisgzyfx * rtB . eo5u1lxtg4 ; } rtB . cf5lednvm2 = ( 1.0 - rtB .
ok0zckk00c / rtB . lxdepkj5ye ) * 100.0 ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . f3klxlmlxp = rtB . cf5lednvm2 >= rtP . Saturation_UpperSat_i3x3oscagf
? 1 : rtB . cf5lednvm2 > rtP . Saturation_LowerSat_gnz45aadu0 ? 0 : - 1 ; }
rtB . o3jpdxseje = rtDW . f3klxlmlxp == 1 ? rtP .
Saturation_UpperSat_i3x3oscagf : rtDW . f3klxlmlxp == - 1 ? rtP .
Saturation_LowerSat_gnz45aadu0 : rtB . cf5lednvm2 ; rtB . kshw2uxvoi = rtP .
donotdeletethisgain_Gain_o42imifl5k * rtB . psghlesfzb [ 4 ] ; rtB .
lhpatqphjc = rtB . hrzbsnrwi3 - rtP . R_Gain_g4gmpqe5wx * rtB . kshw2uxvoi ;
rtB . fafevfeqnj = 0.0 ; rtB . ecm55snlkx = 0.0 ; rtB . mtks03qisz = 0.0 ;
rtB . puxyxqzwrf = 0.0 ; rtB . jrfwiwd43z = 0.0 ; rtB . dtavayqhda = 0.0 ;
rtB . cgb0hlthvq = 0.0 ; rtB . hvpojhtj1s = 0.0 ; k0qu5tzxih =
muDoubleScalarRound ( rtB . hazzrzn13y * 10000.0 ) / 10000.0 ; jmuz0todoh =
muDoubleScalarRound ( rtB . fjr1hyyzxs * 10000.0 ) / 10000.0 ; soc3 =
muDoubleScalarRound ( rtB . o3jpdxseje * 10000.0 ) / 10000.0 ; if ( ( ! (
k0qu5tzxih == jmuz0todoh ) ) || ( ! ( jmuz0todoh == soc3 ) ) ) { if (
k0qu5tzxih >= jmuz0todoh ) { if ( jmuz0todoh >= soc3 ) { rtB . cgb0hlthvq =
1.0 ; rtB . puxyxqzwrf = 1.0 ; rtB . fafevfeqnj = 0.3 ; rtB . hvpojhtj1s =
0.3 ; } else { rtB . dtavayqhda = 1.0 ; rtB . mtks03qisz = 1.0 ; rtB .
fafevfeqnj = 0.3 ; rtB . hvpojhtj1s = 0.3 ; } } else if ( k0qu5tzxih >= soc3
) { rtB . cgb0hlthvq = 1.0 ; rtB . puxyxqzwrf = 1.0 ; rtB . fafevfeqnj = 0.3
; rtB . hvpojhtj1s = 0.3 ; } else if ( soc3 >= k0qu5tzxih ) { rtB .
jrfwiwd43z = 1.0 ; rtB . ecm55snlkx = 1.0 ; rtB . fafevfeqnj = 0.3 ; rtB .
hvpojhtj1s = 0.3 ; } } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( ( rtB .
fafevfeqnj * rtP . PWM_Period + ssGetTaskTime ( rtS , 3 ) <= ssGetTaskTime (
rtS , 3 ) + 2.8421709430404007E-14 ) && rtDW . kxwhl4deiz ) { rtB .
mr3r11o4cd = 0.0 ; rtDW . a4zo1l0ugg = false ; } else { rtB . mr3r11o4cd =
rtDW . a4zo1l0ugg ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ( rtB .
hvpojhtj1s * rtP . PWM7_Period + ssGetTaskTime ( rtS , 2 ) <= ssGetTaskTime (
rtS , 2 ) + 2.8421709430404007E-14 ) && rtDW . h0httbfyha ) { rtB .
hz0bo4qocx = 0.0 ; rtDW . isbqvnaoi4 = false ; } else { rtB . hz0bo4qocx =
rtDW . isbqvnaoi4 ; } } if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW .
iekkid5tdc = ( rtB . lhizeihnhz >= 0.0 ) ; } rtB . i5ef2hwgvu = rtDW .
iekkid5tdc > 0 ? rtB . lhizeihnhz : - rtB . lhizeihnhz ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . ejvsxdy4us
= ( rtB . lhizeihnhz < rtP . Constant_Value_ogegtmkzv0 ) ; } rtB . mjks4xhjow
= rtP . Gain4_Gain * ( real_T ) rtDW . ejvsxdy4us ; } rtB . dmhyv1f3ig = rtB
. mjks4xhjow - rtB . kgkep0bsfn ; rtB . l42lm2ncga = rtB . i5ef2hwgvu * rtB .
dmhyv1f3ig ; rtB . mwzvrxpr2p = rtP . Gain1_Gain * rtB . l42lm2ncga ; rtB .
hrd1lm1ya0 = rtP . Gain2_Gain * rtB . njqzbmzkw3 ; if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . pgykuojto4 = ( rtB . odu4rqvais >=
0.0 ) ; } rtB . ey2vd3i5uv = rtDW . pgykuojto4 > 0 ? rtB . odu4rqvais : - rtB
. odu4rqvais ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . pfff4wu12s = ( rtB . odu4rqvais <
rtP . Constant_Value_h5irp45zuu ) ; } rtB . jqhmwoilj3 = rtP .
Gain4_Gain_kh00znyazs * ( real_T ) rtDW . pfff4wu12s ; } rtB . k2mzdcop0k =
rtB . jqhmwoilj3 - rtB . naj01eqche ; rtB . c1q3so5mg1 = rtB . ey2vd3i5uv *
rtB . k2mzdcop0k ; rtB . lefofrzdab = rtP . Gain1_Gain_og11bwmhu2 * rtB .
c1q3so5mg1 ; rtB . fodfgq0jzj = rtP . Gain2_Gain_m4x3vq3y1f * rtB .
iqy4ug0lia ; if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . kwn43b15y5 = (
rtB . kshw2uxvoi >= 0.0 ) ; } rtB . ffqmzoabpt = rtDW . kwn43b15y5 > 0 ? rtB
. kshw2uxvoi : - rtB . kshw2uxvoi ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if
( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . fbl4mmnwqe = ( rtB . kshw2uxvoi
< rtP . Constant_Value_k5pwul1wle ) ; } rtB . croyui1tfg = rtP .
Gain4_Gain_fstjjgzlds * ( real_T ) rtDW . fbl4mmnwqe ; } rtB . h5rctxnl5g =
rtB . croyui1tfg - rtB . oq4qh1b0g3 ; rtB . bg1emtvlu5 = rtB . ffqmzoabpt *
rtB . h5rctxnl5g ; rtB . de0pptp2dt = rtP . Gain1_Gain_anymdqpqln * rtB .
bg1emtvlu5 ; rtB . f2esttvhy2 = rtP . Gain2_Gain_jptbha03po * rtB .
ok0zckk00c ; rtB . p0xrb21qa1 = rtP . donotdeletethisgain_Gain_aakwgyoy4i *
rtB . psghlesfzb [ 5 ] ; rtB . bed1vibtj4 = rtP .
donotdeletethisgain_Gain_m54lmnwzgw * rtB . psghlesfzb [ 6 ] ; rtB .
mgmgi14ih4 = 0.0 ; if ( rtB . bed1vibtj4 > 3.0 ) { rtB . mgmgi14ih4 = 0.0 ; }
rtB . a4raottyfg = rtP . donotdeletethisgain_Gain_f1vxkbch2y * rtB .
psghlesfzb [ 1 ] ; rtB . j1n20lggjq = rtP .
donotdeletethisgain_Gain_ikuam0amnb * rtB . psghlesfzb [ 0 ] ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID4 ( int_T tid ) { rtB .
cq1hxzcfzr = rtP . gate_Value ; rtB . m4ih4dx4xb = rtP .
gate_Value_j2rsbfopkw ; rtB . jppegbuoi5 = rtP . gate_Value_pnadvif4hc ; rtB
. cu43ie0v4m = rtP . gate_Value_m3r3nzaglm ; rtB . ng4lafji5x = rtP .
gate_Value_cw3efytsqz ; rtB . p5tpfuerbv = rtP . gate_Value_m3ymbazbc2 ; rtB
. gckyylswxk = rtP . gate_Value_awsbj1udfy ; rtB . eoewe3hpfs = rtP .
gate_Value_lcm302k1d0 ; rtB . lgzmg01p1c = rtP . eee_Value ; rtB . cqfzimln2f
= rtP . gate_Value_hvqav3fre2 ; rtB . kwrjw25yn5 = rtP . eee_Value_jvovxrhhe5
; rtB . ilzaifqtd1 = rtP . gate_Value_jtuhk5jcfy ; rtB . fdsengn1kg = rtP .
eee_Value_livrakccix ; rtB . aqajecbbnu = rtP . gate_Value_hfhtxagkxf ; rtB .
mjmg2qs5xf = rtP . eee_Value_a41qgiert1 ; rtB . odighpugae = rtP .
gate_Value_imdjf4i2gu ; rtB . kat2ic3vyh = rtP . eee_Value_cwpq0ctqc0 ; rtB .
mo0cmtpcyi = rtP . gate_Value_fenld0mt10 ; rtB . htqhpx0nsu = rtP .
eee_Value_kooi21cjzm ; rtB . fw5hv2gf0k = rtP . gate_Value_gobcdjfmgd ; rtB .
l0wr0i0a0y = rtP . eee_Value_cgwkesmam5 ; rtB . gyysi3xihf = rtP .
gate_Value_iurqku1hqp ; rtB . kq3prrs1uu = rtP . eee_Value_mmisgtzd2o ; rtB .
kv0kguhr0b = rtP . gate_Value_hthchwxqcl ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { XDis * _rtXdis ; real_T dc ; SimStruct * S ; void *
diag ; _rtXdis = ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . lmeiw1aeti = rtP . Constant12_Value
; rtDW . nslw55fjo4 = rtB . hrd1lm1ya0 ; } rtDW . gudxj4f5fr = 0 ; switch (
rtDW . altxlvicd3 ) { case 3 : if ( rtB . lhizeihnhz < 0.0 ) { rtDW .
altxlvicd3 = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break
; case 4 : if ( rtB . lhizeihnhz > 0.0 ) { rtDW . altxlvicd3 = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
nnm5idgjgm = ( ( rtDW . altxlvicd3 == 3 ) || ( rtDW . altxlvicd3 == 4 ) ) ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . j1sqbqmbx3 = rtP .
Constant12_Value_df3z3yuypl ; rtDW . gb0p0tz3nz = rtB . fodfgq0jzj ; } rtDW .
fnwcukpljc = 0 ; switch ( rtDW . nnmbytzwts ) { case 3 : if ( rtB .
odu4rqvais < 0.0 ) { rtDW . nnmbytzwts = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; case 4 : if (
rtB . odu4rqvais > 0.0 ) { rtDW . nnmbytzwts = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
ccbcf5slxf = ( ( rtDW . nnmbytzwts == 3 ) || ( rtDW . nnmbytzwts == 4 ) ) ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . nikwcsnlrs = rtP .
Constant12_Value_ktnzmkcekm ; rtDW . fnx2l0adch = rtB . f2esttvhy2 ; } rtDW .
no5ex5xcn1 = 0 ; switch ( rtDW . a0pmgywf4u ) { case 3 : if ( rtB .
kshw2uxvoi < 0.0 ) { rtDW . a0pmgywf4u = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; case 4 : if (
rtB . kshw2uxvoi > 0.0 ) { rtDW . a0pmgywf4u = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
lb3v3mf5nf = ( ( rtDW . a0pmgywf4u == 3 ) || ( rtDW . a0pmgywf4u == 4 ) ) ; {
SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; sfcnUpdate ( rts , 0 ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } if ( ssIsSampleHit ( rtS ,
3 , 0 ) ) { if ( rtDW . a4zo1l0ugg ) { dc = rtB . fafevfeqnj ; if ( ( rtP .
PWM_Period <= 0.0 ) || ( muDoubleScalarIsNaN ( rtP . PWM_Period ) || ( rtP .
PWM_Period == ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"Drdo_sim_2/PWM/Variable Pulse Generator" , 2 , rtP . PWM_Period , 2 ,
ssGetTaskTime ( rtS , 3 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( dc *
rtP . PWM_Period + ssGetTaskTime ( rtS , 3 ) <= 2.8421709430404007E-14 *
ssGetTaskTime ( rtS , 3 ) + ssGetTaskTime ( rtS , 3 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvPulseWidthForVPG" , 5 , 3 ,
"Drdo_sim_2/PWM/Variable Pulse Generator" , 2 , rtB . fafevfeqnj , 2 , rtP .
PWM_Period , 2 , ssGetTaskTime ( rtS , 3 ) , 2 , 2.8421709430404007E-14 *
ssGetTaskTime ( rtS , 3 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( dc >
1.0 ) { dc = 1.0 ; if ( rtDW . oqsfgh42ip ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleGreaterThanOne" , 3
, 2 , ssGetTaskTime ( rtS , 3 ) , 2 , rtB . fafevfeqnj , 3 ,
"Drdo_sim_2/PWM/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning
( S , diag ) ; rtDW . oqsfgh42ip = false ; } } if ( ( rtDW . m2cbloulv2 > 0.0
) && ( rtDW . m2cbloulv2 == rtP . PWM_Period ) ) { rtDW . fzilssap5b ++ ; }
else { rtDW . fzilssap5b = 1ULL ; rtDW . m2cbloulv2 = rtP . PWM_Period ; rtDW
. fhrkpme2ua = ssGetTaskTime ( rtS , 3 ) ; } rtDW . jhxorqowf3 = rtDW .
m2cbloulv2 * ( real_T ) rtDW . fzilssap5b + rtDW . fhrkpme2ua ; if ( rtDW .
jhxorqowf3 - ( dc * rtP . PWM_Period + ssGetTaskTime ( rtS , 3 ) ) >
2.8421709430404007E-14 * ssGetTaskTime ( rtS , 3 ) ) { _ssSetVarNextHitTime (
rtS , 1 , ssGetTaskTime ( rtS , 3 ) + dc * rtP . PWM_Period ) ; rtDW .
a4zo1l0ugg = false ; rtDW . kxwhl4deiz = false ; } else if ( ( rtDW .
jhxorqowf3 - ( dc * rtP . PWM_Period + ssGetTaskTime ( rtS , 3 ) ) <=
2.8421709430404007E-14 * ssGetTaskTime ( rtS , 3 ) ) && ( dc > 0.0 ) && ( dc
< 1.0 ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"Drdo_sim_2/PWM/Variable Pulse Generator" , 2 , rtP . PWM_Period , 2 ,
ssGetTaskTime ( rtS , 3 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } else {
_ssSetVarNextHitTime ( rtS , 1 , rtDW . jhxorqowf3 ) ; rtDW . a4zo1l0ugg =
true ; rtDW . kxwhl4deiz = true ; } } else { if ( rtDW . kxwhl4deiz ) { if (
( rtP . PWM_Period <= 0.0 ) || ( muDoubleScalarIsNaN ( rtP . PWM_Period ) ||
( rtP . PWM_Period == ( rtInf ) ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"Drdo_sim_2/PWM/Variable Pulse Generator" , 2 , rtP . PWM_Period , 2 ,
ssGetTaskTime ( rtS , 3 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( rtB .
fafevfeqnj < 0.0 ) && rtDW . cx23vuteby ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 3 ) , 2 , rtB . fafevfeqnj , 3 ,
"Drdo_sim_2/PWM/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning
( S , diag ) ; rtDW . cx23vuteby = false ; } if ( ( rtDW . m2cbloulv2 > 0.0 )
&& ( rtDW . m2cbloulv2 == rtP . PWM_Period ) ) { rtDW . fzilssap5b ++ ; }
else { rtDW . fzilssap5b = 1ULL ; rtDW . m2cbloulv2 = rtP . PWM_Period ; rtDW
. fhrkpme2ua = ssGetTaskTime ( rtS , 3 ) ; } _ssSetVarNextHitTime ( rtS , 1 ,
ssGetTaskTime ( rtS , 3 ) + rtP . PWM_Period ) ; } else if ( rtDW .
jhxorqowf3 > 2.8421709430404007E-14 * ssGetTaskTime ( rtS , 3 ) +
ssGetTaskTime ( rtS , 3 ) ) { _ssSetVarNextHitTime ( rtS , 1 , rtDW .
jhxorqowf3 ) ; } rtDW . a4zo1l0ugg = true ; rtDW . kxwhl4deiz = true ; } } if
( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( rtDW . isbqvnaoi4 ) { dc = rtB .
hvpojhtj1s ; if ( ( rtP . PWM7_Period <= 0.0 ) || ( muDoubleScalarIsNaN ( rtP
. PWM7_Period ) || ( rtP . PWM7_Period == ( rtInf ) ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"Drdo_sim_2/PWM7/Variable Pulse Generator" , 2 , rtP . PWM7_Period , 2 ,
ssGetTaskTime ( rtS , 2 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( dc *
rtP . PWM7_Period + ssGetTaskTime ( rtS , 2 ) <= 2.8421709430404007E-14 *
ssGetTaskTime ( rtS , 2 ) + ssGetTaskTime ( rtS , 2 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvPulseWidthForVPG" , 5 , 3 ,
"Drdo_sim_2/PWM7/Variable Pulse Generator" , 2 , rtB . hvpojhtj1s , 2 , rtP .
PWM7_Period , 2 , ssGetTaskTime ( rtS , 2 ) , 2 , 2.8421709430404007E-14 *
ssGetTaskTime ( rtS , 2 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( dc >
1.0 ) { dc = 1.0 ; if ( rtDW . h234s2aqw5 ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleGreaterThanOne" , 3
, 2 , ssGetTaskTime ( rtS , 2 ) , 2 , rtB . hvpojhtj1s , 3 ,
"Drdo_sim_2/PWM7/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning
( S , diag ) ; rtDW . h234s2aqw5 = false ; } } if ( ( rtDW . p4sl4of4eu > 0.0
) && ( rtDW . p4sl4of4eu == rtP . PWM7_Period ) ) { rtDW . fvzajbb5pk ++ ; }
else { rtDW . fvzajbb5pk = 1ULL ; rtDW . p4sl4of4eu = rtP . PWM7_Period ;
rtDW . j4h3sf5tof = ssGetTaskTime ( rtS , 2 ) ; } rtDW . m33htneu44 = rtDW .
p4sl4of4eu * ( real_T ) rtDW . fvzajbb5pk + rtDW . j4h3sf5tof ; if ( rtDW .
m33htneu44 - ( dc * rtP . PWM7_Period + ssGetTaskTime ( rtS , 2 ) ) >
2.8421709430404007E-14 * ssGetTaskTime ( rtS , 2 ) ) { _ssSetVarNextHitTime (
rtS , 0 , ssGetTaskTime ( rtS , 2 ) + dc * rtP . PWM7_Period ) ; rtDW .
isbqvnaoi4 = false ; rtDW . h0httbfyha = false ; } else if ( ( rtDW .
m33htneu44 - ( dc * rtP . PWM7_Period + ssGetTaskTime ( rtS , 2 ) ) <=
2.8421709430404007E-14 * ssGetTaskTime ( rtS , 2 ) ) && ( dc > 0.0 ) && ( dc
< 1.0 ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"Drdo_sim_2/PWM7/Variable Pulse Generator" , 2 , rtP . PWM7_Period , 2 ,
ssGetTaskTime ( rtS , 2 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } else {
_ssSetVarNextHitTime ( rtS , 0 , rtDW . m33htneu44 ) ; rtDW . isbqvnaoi4 =
true ; rtDW . h0httbfyha = true ; } } else { if ( rtDW . h0httbfyha ) { if (
( rtP . PWM7_Period <= 0.0 ) || ( muDoubleScalarIsNaN ( rtP . PWM7_Period )
|| ( rtP . PWM7_Period == ( rtInf ) ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"Drdo_sim_2/PWM7/Variable Pulse Generator" , 2 , rtP . PWM7_Period , 2 ,
ssGetTaskTime ( rtS , 2 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( rtB .
hvpojhtj1s < 0.0 ) && rtDW . mp03nbr0yk ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 2 ) , 2 , rtB . hvpojhtj1s , 3 ,
"Drdo_sim_2/PWM7/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning
( S , diag ) ; rtDW . mp03nbr0yk = false ; } if ( ( rtDW . p4sl4of4eu > 0.0 )
&& ( rtDW . p4sl4of4eu == rtP . PWM7_Period ) ) { rtDW . fvzajbb5pk ++ ; }
else { rtDW . fvzajbb5pk = 1ULL ; rtDW . p4sl4of4eu = rtP . PWM7_Period ;
rtDW . j4h3sf5tof = ssGetTaskTime ( rtS , 2 ) ; } _ssSetVarNextHitTime ( rtS
, 0 , ssGetTaskTime ( rtS , 2 ) + rtP . PWM7_Period ) ; } else if ( rtDW .
m33htneu44 > 2.8421709430404007E-14 * ssGetTaskTime ( rtS , 2 ) +
ssGetTaskTime ( rtS , 2 ) ) { _ssSetVarNextHitTime ( rtS , 0 , rtDW .
m33htneu44 ) ; } rtDW . isbqvnaoi4 = true ; rtDW . h0httbfyha = true ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID4 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDis * _rtXdis ;
XDot * _rtXdot ; _rtXdis = ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) ;
_rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> gfhzlhd54y = 0.0 ;
_rtXdot -> gfhzlhd54y += rtP . Currentfilter_A * rtX . gfhzlhd54y ; _rtXdot
-> gfhzlhd54y += rtB . lhizeihnhz ; if ( _rtXdis -> nnm5idgjgm ) { _rtXdot ->
nnm5idgjgm = 0.0 ; } else { _rtXdot -> nnm5idgjgm = rtB . lhizeihnhz ; }
_rtXdot -> nayd5kndb3 = rtB . mwzvrxpr2p ; _rtXdot -> bn1nj5gich = 0.0 ;
_rtXdot -> bn1nj5gich += rtP . BAL_A * rtX . bn1nj5gich ; _rtXdot ->
bn1nj5gich += rtB . lhizeihnhz ; _rtXdot -> pxw4s3bjww = 0.0 ; _rtXdot ->
pxw4s3bjww += rtP . Currentfilter_A_hazdhojaym * rtX . pxw4s3bjww ; _rtXdot
-> pxw4s3bjww += rtB . odu4rqvais ; if ( _rtXdis -> ccbcf5slxf ) { _rtXdot ->
ccbcf5slxf = 0.0 ; } else { _rtXdot -> ccbcf5slxf = rtB . odu4rqvais ; }
_rtXdot -> dv24m504uv = rtB . lefofrzdab ; _rtXdot -> a15dtoel0e = 0.0 ;
_rtXdot -> a15dtoel0e += rtP . BAL_A_cudqa1u03y * rtX . a15dtoel0e ; _rtXdot
-> a15dtoel0e += rtB . odu4rqvais ; _rtXdot -> kdt2inlpip = 0.0 ; _rtXdot ->
kdt2inlpip += rtP . Currentfilter_A_pyl0ygpghg * rtX . kdt2inlpip ; _rtXdot
-> kdt2inlpip += rtB . kshw2uxvoi ; if ( _rtXdis -> lb3v3mf5nf ) { _rtXdot ->
lb3v3mf5nf = 0.0 ; } else { _rtXdot -> lb3v3mf5nf = rtB . kshw2uxvoi ; }
_rtXdot -> cn5rovsmjj = rtB . de0pptp2dt ; _rtXdot -> i04zm2a4vw = 0.0 ;
_rtXdot -> i04zm2a4vw += rtP . BAL_A_n35zxahhei * rtX . i04zm2a4vw ; _rtXdot
-> i04zm2a4vw += rtB . kshw2uxvoi ; { SimStruct * rts = ssGetSFunction ( rtS
, 0 ) ; real_T * sfcndX_fx = ( real_T * ) & ( ( XDot * ) ssGetdX ( rtS ) ) ->
fqxf3jikpe [ 0 ] ; ssSetdX ( rts , sfcndX_fx ) ; sfcnDerivatives ( rts ) ; if
( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } } void MdlProjection (
void ) { { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; sfcnProjection (
rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } } void
MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> a0e2og5bzk = rtB .
ly2tudtpk5 - rtP . Constant_Value ; switch ( rtDW . altxlvicd3 ) { case 1 :
_rtZCSV -> i33itngoux = 0.0 ; _rtZCSV -> dajlqncqqa = rtP . inti_UpperSat -
rtP . inti_LowerSat ; break ; case 2 : _rtZCSV -> i33itngoux = rtP .
inti_LowerSat - rtP . inti_UpperSat ; _rtZCSV -> dajlqncqqa = 0.0 ; break ;
default : _rtZCSV -> i33itngoux = rtX . nnm5idgjgm - rtP . inti_UpperSat ;
_rtZCSV -> dajlqncqqa = rtX . nnm5idgjgm - rtP . inti_LowerSat ; break ; } if
( ( rtDW . altxlvicd3 == 3 ) || ( rtDW . altxlvicd3 == 4 ) ) { _rtZCSV ->
oqcmoiqk4y = rtB . lhizeihnhz ; } else { _rtZCSV -> oqcmoiqk4y = 0.0 ; }
_rtZCSV -> midufgp43s = rtB . k23slsjlyn - rtB . k1l0dq0whk ; _rtZCSV ->
nlu45ajxxf = rtB . k23slsjlyn - rtP . Constant9_Value ; _rtZCSV -> log0n3nldm
= rtB . oohzmrpuub - rtB . kxathhjjic ; _rtZCSV -> ett24ovqr4 = rtB .
k23slsjlyn - rtB . otit5fyej4 ; _rtZCSV -> afmzikorvv = rtB . k23slsjlyn -
rtB . cyszaymdj5 ; _rtZCSV -> f1bq35l1h3 = rtB . ly2tudtpk5 - rtP .
Constant_Value_efypwvyyax ; _rtZCSV -> g2eryqsnfy = rtB . njqzbmzkw3 - rtP .
Saturation_UpperSat ; _rtZCSV -> i2uval1lim = rtB . njqzbmzkw3 - rtP .
Saturation_LowerSat ; _rtZCSV -> iuzr1iwvpk = rtB . c24gsmq3eo - rtP .
Constant1_Value ; _rtZCSV -> inufdwywux = rtB . c24gsmq3eo - rtB . c3xidiouan
; _rtZCSV -> lrm3usibnd = rtB . pmwdqmho2g - rtP . Constant_Value_pbqzqfbpnm
; switch ( rtDW . nnmbytzwts ) { case 1 : _rtZCSV -> o5uhf3qjlf = 0.0 ;
_rtZCSV -> dwzvzd5eqq = rtP . inti_UpperSat_itldayqrxp - rtP .
inti_LowerSat_lz3gh0icex ; break ; case 2 : _rtZCSV -> o5uhf3qjlf = rtP .
inti_LowerSat_lz3gh0icex - rtP . inti_UpperSat_itldayqrxp ; _rtZCSV ->
dwzvzd5eqq = 0.0 ; break ; default : _rtZCSV -> o5uhf3qjlf = rtX . ccbcf5slxf
- rtP . inti_UpperSat_itldayqrxp ; _rtZCSV -> dwzvzd5eqq = rtX . ccbcf5slxf -
rtP . inti_LowerSat_lz3gh0icex ; break ; } if ( ( rtDW . nnmbytzwts == 3 ) ||
( rtDW . nnmbytzwts == 4 ) ) { _rtZCSV -> iflzhybo1i = rtB . odu4rqvais ; }
else { _rtZCSV -> iflzhybo1i = 0.0 ; } _rtZCSV -> nyxwztuefg = rtB .
c4f254ywzz - rtB . kmuikitwmq ; _rtZCSV -> nzhkchaqji = rtB . c4f254ywzz -
rtP . Constant9_Value_bfo0fnc5l1 ; _rtZCSV -> f0nc0sdtxv = rtB . eprxgrrx1i -
rtB . p5xdglg0cq ; _rtZCSV -> odx341vqo0 = rtB . c4f254ywzz - rtB .
dgob51egq2 ; _rtZCSV -> lw4izlvxrd = rtB . c4f254ywzz - rtB . ej1y2hbu1l ;
_rtZCSV -> gknikfdpuj = rtB . pmwdqmho2g - rtP . Constant_Value_hu3rmuppbn ;
_rtZCSV -> oa1gjoi2cw = rtB . iqy4ug0lia - rtP .
Saturation_UpperSat_lxx4j3fnoa ; _rtZCSV -> ipcyaqqxzu = rtB . iqy4ug0lia -
rtP . Saturation_LowerSat_kwi433xk5g ; _rtZCSV -> g3wvwnre34 = rtB .
kyo53jtai5 - rtP . Constant1_Value_jelmmtr1rj ; _rtZCSV -> f2ywornu5d = rtB .
kyo53jtai5 - rtB . ogaffaai1o ; _rtZCSV -> lxoppagnun = rtB . pd4oav3zfl -
rtP . Constant_Value_bksqnhysc0 ; switch ( rtDW . a0pmgywf4u ) { case 1 :
_rtZCSV -> ne5id3j1xd = 0.0 ; _rtZCSV -> awkz44ceij = rtP .
inti_UpperSat_nowwhgaxwk - rtP . inti_LowerSat_cwekkzbyq1 ; break ; case 2 :
_rtZCSV -> ne5id3j1xd = rtP . inti_LowerSat_cwekkzbyq1 - rtP .
inti_UpperSat_nowwhgaxwk ; _rtZCSV -> awkz44ceij = 0.0 ; break ; default :
_rtZCSV -> ne5id3j1xd = rtX . lb3v3mf5nf - rtP . inti_UpperSat_nowwhgaxwk ;
_rtZCSV -> awkz44ceij = rtX . lb3v3mf5nf - rtP . inti_LowerSat_cwekkzbyq1 ;
break ; } if ( ( rtDW . a0pmgywf4u == 3 ) || ( rtDW . a0pmgywf4u == 4 ) ) {
_rtZCSV -> dnoluxshtz = rtB . kshw2uxvoi ; } else { _rtZCSV -> dnoluxshtz =
0.0 ; } _rtZCSV -> idmj1ndunu = rtB . b3rs2blycp - rtB . g0ppvkegvc ; _rtZCSV
-> podiuj2n10 = rtB . b3rs2blycp - rtP . Constant9_Value_nhyzz1ckmw ; _rtZCSV
-> b1eaw1yuid = rtB . kpg4nocamz - rtB . hf335bhyf1 ; _rtZCSV -> hhstefz4wx =
rtB . b3rs2blycp - rtB . l5xc5g0oxc ; _rtZCSV -> ggn5qohq0f = rtB .
b3rs2blycp - rtB . hftcpnhtft ; _rtZCSV -> mtefacjjuw = rtB . pd4oav3zfl -
rtP . Constant_Value_owtewy0ssm ; _rtZCSV -> jykvc4nwhf = rtB . ok0zckk00c -
rtP . Saturation_UpperSat_blj3ug4rzx ; _rtZCSV -> ogeqw3jggb = rtB .
ok0zckk00c - rtP . Saturation_LowerSat_o0i20janpw ; _rtZCSV -> meifowuxqk =
rtB . nd0cjgwifw - rtP . Constant1_Value_jj3f5fu3xp ; _rtZCSV -> nsebgptyce =
rtB . nd0cjgwifw - rtB . fylyx3bgwb ; { SimStruct * rts = ssGetSFunction (
rtS , 0 ) ; ssSetNonsampledZCs ( rts , & ( ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> kfvianmo5w [ 0 ] ) ) ;
sfcnZeroCrossings ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) )
return ; } _rtZCSV -> jyampscynw = rtB . gmmxcfk4v1 - rtP .
Saturation_UpperSat_pcz043fnep ; _rtZCSV -> bepzre14zh = rtB . gmmxcfk4v1 -
rtP . Saturation_LowerSat_b05y2t0vvl ; _rtZCSV -> cu3jt21jhi = rtB .
ljv350v5jl - rtP . Saturation_UpperSat_aqwzuangfk ; _rtZCSV -> go5y5r4454 =
rtB . ljv350v5jl - rtP . Saturation_LowerSat_bcd3czsgyq ; _rtZCSV ->
lt1rkr102w = rtB . cf5lednvm2 - rtP . Saturation_UpperSat_i3x3oscagf ;
_rtZCSV -> e2irj4mkgp = rtB . cf5lednvm2 - rtP .
Saturation_LowerSat_gnz45aadu0 ; _rtZCSV -> aq3ibjnrm0 = rtB . lhizeihnhz ;
_rtZCSV -> o0i22x2klq = rtB . lhizeihnhz - rtP . Constant_Value_ogegtmkzv0 ;
_rtZCSV -> mnnpwdncfd = rtB . odu4rqvais ; _rtZCSV -> iqp4ghmps5 = rtB .
odu4rqvais - rtP . Constant_Value_h5irp45zuu ; _rtZCSV -> bru5tnvnff = rtB .
kshw2uxvoi ; _rtZCSV -> ej0mqxjkqh = rtB . kshw2uxvoi - rtP .
Constant_Value_k5pwul1wle ; } void MdlTerminate ( void ) { { SimStruct * rts
= ssGetSFunction ( rtS , 0 ) ; sfcnTerminate ( rts ) ; } } static void
mr_Drdo_sim_2_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_Drdo_sim_2_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Drdo_sim_2_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Drdo_sim_2_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Drdo_sim_2_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Drdo_sim_2_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Drdo_sim_2_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_Drdo_sim_2_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_Drdo_sim_2_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_Drdo_sim_2_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Drdo_sim_2_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Drdo_sim_2_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Drdo_sim_2_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Drdo_sim_2_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_Drdo_sim_2_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Drdo_sim_2_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Drdo_sim_2_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "rtPrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB )
, sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 70 ] = {
"rtDW.lmeiw1aeti" , "rtDW.nslw55fjo4" , "rtDW.j1sqbqmbx3" , "rtDW.gb0p0tz3nz"
, "rtDW.nikwcsnlrs" , "rtDW.fnx2l0adch" , "rtDW.jhxorqowf3" ,
"rtDW.fhrkpme2ua" , "rtDW.m2cbloulv2" , "rtDW.m33htneu44" , "rtDW.j4h3sf5tof"
, "rtDW.p4sl4of4eu" , "rtDW.fzilssap5b" , "rtDW.fvzajbb5pk" ,
"rtDW.jgycbxp0kd" , "rtDW.gudxj4f5fr" , "rtDW.fnwcukpljc" , "rtDW.no5ex5xcn1"
, "rtDW.hrgiwxycqx" , "rtDW.altxlvicd3" , "rtDW.f2n5brutlw" ,
"rtDW.nnmbytzwts" , "rtDW.fdj2ubzmrv" , "rtDW.a0pmgywf4u" , "rtDW.ebvemqdpie"
, "rtDW.la35cccgmk" , "rtDW.byn0u0nqg4" , "rtDW.bjj13qhbj4" ,
"rtDW.f3klxlmlxp" , "rtDW.iekkid5tdc" , "rtDW.pgykuojto4" , "rtDW.kwn43b15y5"
, "rtDW.nli2vgeh2l" , "rtDW.jzsv2t2lkp" , "rtDW.lwkbt2jmbb" ,
"rtDW.nzlezri5if" , "rtDW.dogfdpqywe" , "rtDW.ij42hk2gox" , "rtDW.dbxk3wsexw"
, "rtDW.dkha4nh5hk" , "rtDW.ggljqhbc2z" , "rtDW.ljac4kbmhk" ,
"rtDW.g45wnkz5nk" , "rtDW.aydau4o4xu" , "rtDW.p3fsjegloa" , "rtDW.b5gols3idy"
, "rtDW.ewptjpzynq" , "rtDW.bff5sopkuo" , "rtDW.p3afsqgkuh" ,
"rtDW.pjyrobqcup" , "rtDW.gjhglnw2fy" , "rtDW.lsmjehtnux" , "rtDW.oqcjqasc2u"
, "rtDW.gxbtelcl54" , "rtDW.dpmpfafv23" , "rtDW.ewm05hm5fd" ,
"rtDW.atop3sgsqq" , "rtDW.np2a5gu2nd" , "rtDW.aj13yfzsqb" , "rtDW.a4zo1l0ugg"
, "rtDW.kxwhl4deiz" , "rtDW.oqsfgh42ip" , "rtDW.cx23vuteby" ,
"rtDW.isbqvnaoi4" , "rtDW.h0httbfyha" , "rtDW.h234s2aqw5" , "rtDW.mp03nbr0yk"
, "rtDW.ejvsxdy4us" , "rtDW.pfff4wu12s" , "rtDW.fbl4mmnwqe" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 70 , rtdwDataFieldNames ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
rtDW . lmeiw1aeti ) , sizeof ( rtDW . lmeiw1aeti ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
rtDW . nslw55fjo4 ) , sizeof ( rtDW . nslw55fjo4 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
rtDW . j1sqbqmbx3 ) , sizeof ( rtDW . j1sqbqmbx3 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
rtDW . gb0p0tz3nz ) , sizeof ( rtDW . gb0p0tz3nz ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
rtDW . nikwcsnlrs ) , sizeof ( rtDW . nikwcsnlrs ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
rtDW . fnx2l0adch ) , sizeof ( rtDW . fnx2l0adch ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
rtDW . jhxorqowf3 ) , sizeof ( rtDW . jhxorqowf3 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
rtDW . fhrkpme2ua ) , sizeof ( rtDW . fhrkpme2ua ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
rtDW . m2cbloulv2 ) , sizeof ( rtDW . m2cbloulv2 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
rtDW . m33htneu44 ) , sizeof ( rtDW . m33htneu44 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
rtDW . j4h3sf5tof ) , sizeof ( rtDW . j4h3sf5tof ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
rtDW . p4sl4of4eu ) , sizeof ( rtDW . p4sl4of4eu ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
rtDW . fzilssap5b ) , sizeof ( rtDW . fzilssap5b ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
rtDW . fvzajbb5pk ) , sizeof ( rtDW . fvzajbb5pk ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
rtDW . jgycbxp0kd ) , sizeof ( rtDW . jgycbxp0kd ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
rtDW . gudxj4f5fr ) , sizeof ( rtDW . gudxj4f5fr ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
rtDW . fnwcukpljc ) , sizeof ( rtDW . fnwcukpljc ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
rtDW . no5ex5xcn1 ) , sizeof ( rtDW . no5ex5xcn1 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
rtDW . hrgiwxycqx ) , sizeof ( rtDW . hrgiwxycqx ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
rtDW . altxlvicd3 ) , sizeof ( rtDW . altxlvicd3 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
rtDW . f2n5brutlw ) , sizeof ( rtDW . f2n5brutlw ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
rtDW . nnmbytzwts ) , sizeof ( rtDW . nnmbytzwts ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
rtDW . fdj2ubzmrv ) , sizeof ( rtDW . fdj2ubzmrv ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
rtDW . a0pmgywf4u ) , sizeof ( rtDW . a0pmgywf4u ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
rtDW . ebvemqdpie ) , sizeof ( rtDW . ebvemqdpie ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
rtDW . la35cccgmk ) , sizeof ( rtDW . la35cccgmk ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
rtDW . byn0u0nqg4 ) , sizeof ( rtDW . byn0u0nqg4 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
rtDW . bjj13qhbj4 ) , sizeof ( rtDW . bjj13qhbj4 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & (
rtDW . f3klxlmlxp ) , sizeof ( rtDW . f3klxlmlxp ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & (
rtDW . iekkid5tdc ) , sizeof ( rtDW . iekkid5tdc ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & (
rtDW . pgykuojto4 ) , sizeof ( rtDW . pgykuojto4 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & (
rtDW . kwn43b15y5 ) , sizeof ( rtDW . kwn43b15y5 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * ) & (
rtDW . nli2vgeh2l ) , sizeof ( rtDW . nli2vgeh2l ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) & (
rtDW . jzsv2t2lkp ) , sizeof ( rtDW . jzsv2t2lkp ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & (
rtDW . lwkbt2jmbb ) , sizeof ( rtDW . lwkbt2jmbb ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) & (
rtDW . nzlezri5if ) , sizeof ( rtDW . nzlezri5if ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * ) & (
rtDW . dogfdpqywe ) , sizeof ( rtDW . dogfdpqywe ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & (
rtDW . ij42hk2gox ) , sizeof ( rtDW . ij42hk2gox ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * ) & (
rtDW . dbxk3wsexw ) , sizeof ( rtDW . dbxk3wsexw ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * ) & (
rtDW . dkha4nh5hk ) , sizeof ( rtDW . dkha4nh5hk ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * ) & (
rtDW . ggljqhbc2z ) , sizeof ( rtDW . ggljqhbc2z ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * ) & (
rtDW . ljac4kbmhk ) , sizeof ( rtDW . ljac4kbmhk ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void * ) & (
rtDW . g45wnkz5nk ) , sizeof ( rtDW . g45wnkz5nk ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * ) & (
rtDW . aydau4o4xu ) , sizeof ( rtDW . aydau4o4xu ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void * ) & (
rtDW . p3fsjegloa ) , sizeof ( rtDW . p3fsjegloa ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void * ) & (
rtDW . b5gols3idy ) , sizeof ( rtDW . b5gols3idy ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void * ) & (
rtDW . ewptjpzynq ) , sizeof ( rtDW . ewptjpzynq ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void * ) & (
rtDW . bff5sopkuo ) , sizeof ( rtDW . bff5sopkuo ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void * ) & (
rtDW . p3afsqgkuh ) , sizeof ( rtDW . p3afsqgkuh ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void * ) & (
rtDW . pjyrobqcup ) , sizeof ( rtDW . pjyrobqcup ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void * ) & (
rtDW . gjhglnw2fy ) , sizeof ( rtDW . gjhglnw2fy ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void * ) & (
rtDW . lsmjehtnux ) , sizeof ( rtDW . lsmjehtnux ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void * ) & (
rtDW . oqcjqasc2u ) , sizeof ( rtDW . oqcjqasc2u ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void * ) & (
rtDW . gxbtelcl54 ) , sizeof ( rtDW . gxbtelcl54 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void * ) & (
rtDW . dpmpfafv23 ) , sizeof ( rtDW . dpmpfafv23 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void * ) & (
rtDW . ewm05hm5fd ) , sizeof ( rtDW . ewm05hm5fd ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void * ) & (
rtDW . atop3sgsqq ) , sizeof ( rtDW . atop3sgsqq ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void * ) & (
rtDW . np2a5gu2nd ) , sizeof ( rtDW . np2a5gu2nd ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void * ) & (
rtDW . aj13yfzsqb ) , sizeof ( rtDW . aj13yfzsqb ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void * ) & (
rtDW . a4zo1l0ugg ) , sizeof ( rtDW . a4zo1l0ugg ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void * ) & (
rtDW . kxwhl4deiz ) , sizeof ( rtDW . kxwhl4deiz ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void * ) & (
rtDW . oqsfgh42ip ) , sizeof ( rtDW . oqsfgh42ip ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void * ) & (
rtDW . cx23vuteby ) , sizeof ( rtDW . cx23vuteby ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void * ) & (
rtDW . isbqvnaoi4 ) , sizeof ( rtDW . isbqvnaoi4 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void * ) & (
rtDW . h0httbfyha ) , sizeof ( rtDW . h0httbfyha ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void * ) & (
rtDW . h234s2aqw5 ) , sizeof ( rtDW . h234s2aqw5 ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void * ) & (
rtDW . mp03nbr0yk ) , sizeof ( rtDW . mp03nbr0yk ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void * ) & (
rtDW . ejvsxdy4us ) , sizeof ( rtDW . ejvsxdy4us ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void * ) & (
rtDW . pfff4wu12s ) , sizeof ( rtDW . pfff4wu12s ) ) ;
mr_Drdo_sim_2_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void * ) & (
rtDW . fbl4mmnwqe ) , sizeof ( rtDW . fbl4mmnwqe ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } mr_Drdo_sim_2_cacheDataAsMxArray ( ssDW , 0 , 2
, ( const void * ) & ( rtPrevZCX ) , sizeof ( rtPrevZCX ) ) ; return ssDW ; }
void mr_Drdo_sim_2_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 ,
sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0
, 1 ) ; mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lmeiw1aeti ) , rtdwData , 0 , 0 , sizeof ( rtDW . lmeiw1aeti ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . nslw55fjo4 ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . nslw55fjo4 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . j1sqbqmbx3 ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . j1sqbqmbx3 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . gb0p0tz3nz ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . gb0p0tz3nz ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . nikwcsnlrs ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . nikwcsnlrs ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . fnx2l0adch ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . fnx2l0adch ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . jhxorqowf3 ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . jhxorqowf3 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . fhrkpme2ua ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . fhrkpme2ua ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . m2cbloulv2 ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . m2cbloulv2 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . m33htneu44 ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . m33htneu44 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . j4h3sf5tof ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . j4h3sf5tof ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . p4sl4of4eu ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . p4sl4of4eu ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . fzilssap5b ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . fzilssap5b ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . fvzajbb5pk ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . fvzajbb5pk ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . jgycbxp0kd ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . jgycbxp0kd ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . gudxj4f5fr ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . gudxj4f5fr ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . fnwcukpljc ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . fnwcukpljc ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . no5ex5xcn1 ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . no5ex5xcn1 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . hrgiwxycqx ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . hrgiwxycqx ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . altxlvicd3 ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . altxlvicd3 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . f2n5brutlw ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . f2n5brutlw ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . nnmbytzwts ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . nnmbytzwts ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . fdj2ubzmrv ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . fdj2ubzmrv ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . a0pmgywf4u ) ,
rtdwData , 0 , 23 , sizeof ( rtDW . a0pmgywf4u ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ebvemqdpie ) ,
rtdwData , 0 , 24 , sizeof ( rtDW . ebvemqdpie ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . la35cccgmk ) ,
rtdwData , 0 , 25 , sizeof ( rtDW . la35cccgmk ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . byn0u0nqg4 ) ,
rtdwData , 0 , 26 , sizeof ( rtDW . byn0u0nqg4 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . bjj13qhbj4 ) ,
rtdwData , 0 , 27 , sizeof ( rtDW . bjj13qhbj4 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . f3klxlmlxp ) ,
rtdwData , 0 , 28 , sizeof ( rtDW . f3klxlmlxp ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . iekkid5tdc ) ,
rtdwData , 0 , 29 , sizeof ( rtDW . iekkid5tdc ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . pgykuojto4 ) ,
rtdwData , 0 , 30 , sizeof ( rtDW . pgykuojto4 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . kwn43b15y5 ) ,
rtdwData , 0 , 31 , sizeof ( rtDW . kwn43b15y5 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . nli2vgeh2l ) ,
rtdwData , 0 , 32 , sizeof ( rtDW . nli2vgeh2l ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . jzsv2t2lkp ) ,
rtdwData , 0 , 33 , sizeof ( rtDW . jzsv2t2lkp ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . lwkbt2jmbb ) ,
rtdwData , 0 , 34 , sizeof ( rtDW . lwkbt2jmbb ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . nzlezri5if ) ,
rtdwData , 0 , 35 , sizeof ( rtDW . nzlezri5if ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . dogfdpqywe ) ,
rtdwData , 0 , 36 , sizeof ( rtDW . dogfdpqywe ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ij42hk2gox ) ,
rtdwData , 0 , 37 , sizeof ( rtDW . ij42hk2gox ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . dbxk3wsexw ) ,
rtdwData , 0 , 38 , sizeof ( rtDW . dbxk3wsexw ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . dkha4nh5hk ) ,
rtdwData , 0 , 39 , sizeof ( rtDW . dkha4nh5hk ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ggljqhbc2z ) ,
rtdwData , 0 , 40 , sizeof ( rtDW . ggljqhbc2z ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ljac4kbmhk ) ,
rtdwData , 0 , 41 , sizeof ( rtDW . ljac4kbmhk ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . g45wnkz5nk ) ,
rtdwData , 0 , 42 , sizeof ( rtDW . g45wnkz5nk ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . aydau4o4xu ) ,
rtdwData , 0 , 43 , sizeof ( rtDW . aydau4o4xu ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . p3fsjegloa ) ,
rtdwData , 0 , 44 , sizeof ( rtDW . p3fsjegloa ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . b5gols3idy ) ,
rtdwData , 0 , 45 , sizeof ( rtDW . b5gols3idy ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ewptjpzynq ) ,
rtdwData , 0 , 46 , sizeof ( rtDW . ewptjpzynq ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . bff5sopkuo ) ,
rtdwData , 0 , 47 , sizeof ( rtDW . bff5sopkuo ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . p3afsqgkuh ) ,
rtdwData , 0 , 48 , sizeof ( rtDW . p3afsqgkuh ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . pjyrobqcup ) ,
rtdwData , 0 , 49 , sizeof ( rtDW . pjyrobqcup ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . gjhglnw2fy ) ,
rtdwData , 0 , 50 , sizeof ( rtDW . gjhglnw2fy ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . lsmjehtnux ) ,
rtdwData , 0 , 51 , sizeof ( rtDW . lsmjehtnux ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . oqcjqasc2u ) ,
rtdwData , 0 , 52 , sizeof ( rtDW . oqcjqasc2u ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . gxbtelcl54 ) ,
rtdwData , 0 , 53 , sizeof ( rtDW . gxbtelcl54 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . dpmpfafv23 ) ,
rtdwData , 0 , 54 , sizeof ( rtDW . dpmpfafv23 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ewm05hm5fd ) ,
rtdwData , 0 , 55 , sizeof ( rtDW . ewm05hm5fd ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . atop3sgsqq ) ,
rtdwData , 0 , 56 , sizeof ( rtDW . atop3sgsqq ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . np2a5gu2nd ) ,
rtdwData , 0 , 57 , sizeof ( rtDW . np2a5gu2nd ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . aj13yfzsqb ) ,
rtdwData , 0 , 58 , sizeof ( rtDW . aj13yfzsqb ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . a4zo1l0ugg ) ,
rtdwData , 0 , 59 , sizeof ( rtDW . a4zo1l0ugg ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . kxwhl4deiz ) ,
rtdwData , 0 , 60 , sizeof ( rtDW . kxwhl4deiz ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . oqsfgh42ip ) ,
rtdwData , 0 , 61 , sizeof ( rtDW . oqsfgh42ip ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . cx23vuteby ) ,
rtdwData , 0 , 62 , sizeof ( rtDW . cx23vuteby ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . isbqvnaoi4 ) ,
rtdwData , 0 , 63 , sizeof ( rtDW . isbqvnaoi4 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . h0httbfyha ) ,
rtdwData , 0 , 64 , sizeof ( rtDW . h0httbfyha ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . h234s2aqw5 ) ,
rtdwData , 0 , 65 , sizeof ( rtDW . h234s2aqw5 ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . mp03nbr0yk ) ,
rtdwData , 0 , 66 , sizeof ( rtDW . mp03nbr0yk ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ejvsxdy4us ) ,
rtdwData , 0 , 67 , sizeof ( rtDW . ejvsxdy4us ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . pfff4wu12s ) ,
rtdwData , 0 , 68 , sizeof ( rtDW . pfff4wu12s ) ) ;
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . fbl4mmnwqe ) ,
rtdwData , 0 , 69 , sizeof ( rtDW . fbl4mmnwqe ) ) ; }
mr_Drdo_sim_2_restoreDataFromMxArray ( ( void * ) & ( rtPrevZCX ) , ssDW , 0
, 2 , sizeof ( rtPrevZCX ) ) ; } mxArray *
mr_Drdo_sim_2_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 10 ] = { "S-Function" , "Scope" , "Scope" , "Scope" ,
"Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , } ; static const
char * blockPath [ 10 ] = {
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" , "Drdo_sim_2/Scope" ,
"Drdo_sim_2/Scope1" , "Drdo_sim_2/Scope2" , "Drdo_sim_2/Scope3" ,
"Drdo_sim_2/Scope6" , "Drdo_sim_2/Scope7" , "Drdo_sim_2/Scope8" ,
"Drdo_sim_2/Scope4" , "Drdo_sim_2/Scope11" , } ; static const int reason [ 10
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs
[ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 21 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
4 ) ; ssSetNumBlocks ( rtS , 434 ) ; ssSetNumBlockIO ( rtS , 185 ) ;
ssSetNumBlockParams ( rtS , 7895 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , - 2.0 ) ; ssSetSampleTime ( rtS , 3 , - 2.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 1.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 276496418U ) ;
ssSetChecksumVal ( rtS , 1 , 3317950777U ) ; ssSetChecksumVal ( rtS , 2 ,
3654610639U ) ; ssSetChecksumVal ( rtS , 3 , 3948613528U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 17 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
Drdo_sim_2_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS ,
true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "Drdo_sim_2" ) ;
ssSetPath ( rtS , "Drdo_sim_2" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal (
rtS , 1500.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo
. loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo )
; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 9 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 9 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels
[ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" }
; static const char_T * rt_LoggedStateBlockNames [ ] = {
"Drdo_sim_2/Battery/Model/Current filter" , "Drdo_sim_2/Battery/Model/int(i)"
, "Drdo_sim_2/Battery/Model/Exp/Integrator2" , "Drdo_sim_2/Battery/Model/BAL"
, "Drdo_sim_2/Battery1/Model/Current filter" ,
"Drdo_sim_2/Battery1/Model/int(i)" ,
"Drdo_sim_2/Battery1/Model/Exp/Integrator2" , "Drdo_sim_2/Battery1/Model/BAL"
, "Drdo_sim_2/Battery2/Model/Current filter" ,
"Drdo_sim_2/Battery2/Model/int(i)" ,
"Drdo_sim_2/Battery2/Model/Exp/Integrator2" , "Drdo_sim_2/Battery2/Model/BAL"
, "Drdo_sim_2/powergui/EquivalentModel1/State-Space" } ; static const char_T
* rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11
, 12 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 13 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 13 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . gfhzlhd54y ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . nnm5idgjgm ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . nayd5kndb3 ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . bn1nj5gich ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . pxw4s3bjww ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . ccbcf5slxf ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . dv24m504uv ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . a15dtoel0e ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . kdt2inlpip ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . lb3v3mf5nf ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . cn5rovsmjj ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . i04zm2a4vw ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . fqxf3jikpe [ 0 ] ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 21 ] ; static real_T absTol [ 21 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 21 ] = { 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U } ; static real_T contStateJacPerturbBoundMinVec [ 21 ] ;
static real_T contStateJacPerturbBoundMaxVec [ 21 ] ; static uint8_T
zcAttributes [ 83 ] = { ( ZC_EVENT_ALL ) , ( 0xc0 | ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( 0xc0 | ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( 0xc0 | ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; static
ssNonContDerivSigInfo nonContDerivSigInfo [ 47 ] = { { 1 * sizeof ( real_T )
, ( char * ) ( & rtB . croyui1tfg ) , ( NULL ) } , { 1 * sizeof ( real_T ) ,
( char * ) ( & rtB . jqhmwoilj3 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . mjks4xhjow ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . hz0bo4qocx ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . mr3r11o4cd ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . lxdepkj5ye ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . p5xpxaxvbl ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . kuj5cjfmdx ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . hjx4ttdxtg ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . peg5g4ebaj ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . fiz4rc4nlg ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . lx0nmorndi ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . hftcpnhtft ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . krqyyt04ow ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . l5xc5g0oxc ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . bqqtnueefv ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . gao5lz0fop ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . nlvoty5kpb ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . hskyqojmid ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . g0ppvkegvc ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . eo5u1lxtg4 ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . frcrm0imu1 ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . c15ame0mkq ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . p1fz34rv0r ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . jh5vh1upy1 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . ej1y2hbu1l ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . alnnimc4ed ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . dgob51egq2 ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . e1lg13dbu0 ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . lqctpheqal ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . f2sgyuvprw ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . l5a1wc4xqj ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . kmuikitwmq ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . gz0tlad0jf ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . oxfqljnx42 ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . jtq210enar ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . p5alxz5ziy ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . pstioklrgc ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . cyszaymdj5 ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . lwhjrhsyft ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . otit5fyej4 ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . dvelx51u0p ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . ay5ogb25yw ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , (
char * ) ( & rtB . e4kk4vfb1y ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . deawsx5qhs ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . k1l0dq0whk ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . pgb0d4fezl ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i <
21 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 30.0 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
47 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode23tb" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 1 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol )
; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 83 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ;
ssSetSolverZcThreshold ( rtS , 0.001 ) ; ssSetSolverMaxConsecutiveMinStep (
rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS
, INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS )
; ssSetNumNonsampledZCs ( rtS , 80 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; } {
ZCSigState * zc = ( ZCSigState * ) & rtPrevZCX ; ssSetPrevZCSigState ( rtS ,
zc ) ; } { rtPrevZCX . mgaf4tjvaw = UNINITIALIZED_ZCSIG ; rtPrevZCX .
ai5fsom5dj = UNINITIALIZED_ZCSIG ; rtPrevZCX . gtvgvu1ors =
UNINITIALIZED_ZCSIG ; } ssSetChecksumVal ( rtS , 0 , 276496418U ) ;
ssSetChecksumVal ( rtS , 1 , 3317950777U ) ; ssSetChecksumVal ( rtS , 2 ,
3654610639U ) ; ssSetChecksumVal ( rtS , 3 , 3948613528U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 27 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = &
rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = &
rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = &
rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = &
rtAlwaysEnabled ; systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = &
rtAlwaysEnabled ; systemRan [ 16 ] = & rtAlwaysEnabled ; systemRan [ 17 ] = &
rtAlwaysEnabled ; systemRan [ 18 ] = & rtAlwaysEnabled ; systemRan [ 19 ] = &
rtAlwaysEnabled ; systemRan [ 20 ] = & rtAlwaysEnabled ; systemRan [ 21 ] = &
rtAlwaysEnabled ; systemRan [ 22 ] = & rtAlwaysEnabled ; systemRan [ 23 ] = &
rtAlwaysEnabled ; systemRan [ 24 ] = & rtAlwaysEnabled ; systemRan [ 25 ] = &
rtAlwaysEnabled ; systemRan [ 26 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Drdo_sim_2_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP (
rtS , mr_Drdo_sim_2_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_Drdo_sim_2_SetDWork ) ; rtP . inti_LowerSat = rtMinusInf ; rtP .
Saturation_LowerSat = rtMinusInf ; rtP . inti_LowerSat_lz3gh0icex =
rtMinusInf ; rtP . Saturation_LowerSat_kwi433xk5g = rtMinusInf ; rtP .
inti_LowerSat_cwekkzbyq1 = rtMinusInf ; rtP . Saturation_LowerSat_o0i20janpw
= rtMinusInf ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if (
ssGetErrorStatus ( rtS ) ) { return rtS ; } ssSetNumSFunctions ( rtS , 1 ) ;
{ static SimStruct childSFunctions [ 1 ] ; static SimStruct *
childSFunctionPtrs [ 1 ] ; ( void ) memset ( ( void * ) & childSFunctions [ 0
] , 0 , sizeof ( childSFunctions ) ) ; ssSetSFunctions ( rtS , &
childSFunctionPtrs [ 0 ] ) ; ssSetSFunction ( rtS , 0 , & childSFunctions [ 0
] ) ; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; static time_T
sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T sfcnTsMap [
1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof ( time_T ) * 1 ) ;
( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof ( time_T ) * 1 ) ;
ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rts ,
& sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rts , sfcnTsMap ) ; {
static struct _ssBlkInfo2 _blkInfo2 ; struct _ssBlkInfo2 * blkInfo2 = &
_blkInfo2 ; ssSetBlkInfo2Ptr ( rts , blkInfo2 ) ; } { static struct
_ssPortInfo2 _portInfo2 ; struct _ssPortInfo2 * portInfo2 = & _portInfo2 ;
_ssSetBlkInfo2PortInfo2Ptr ( rts , portInfo2 ) ; } ssSetMdlInfoPtr ( rts ,
ssGetMdlInfoPtr ( rtS ) ) ; { static struct _ssSFcnModelMethods2 methods2 ;
ssSetModelMethods2 ( rts , & methods2 ) ; } { static struct
_ssSFcnModelMethods3 methods3 ; ssSetModelMethods3 ( rts , & methods3 ) ; } {
static struct _ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , &
methods4 ) ; } { static struct _ssStatesInfo2 statesInfo2 ; static
ssPeriodicStatesInfo periodicStatesInfo ; static ssJacobianPerturbationBounds
jacPerturbationBounds ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ;
ssSetJacobianPerturbationBounds ( rts , & jacPerturbationBounds ) ;
ssSetAbsTolVector ( rts , ssGetAbsTolVector ( rtS ) + 12 ) ;
ssSetAbsTolControlVector ( rts , ssGetAbsTolControlVector ( rtS ) + 12 ) ; }
{ static struct _ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts
, 2 ) ; ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static
struct _ssInPortUnit inputPortUnits [ 2 ] ; _ssSetPortInfo2ForInputUnits (
rts , & inputPortUnits [ 0 ] ) ; } ssSetInputPortUnit ( rts , 0 , 0 ) ;
ssSetInputPortUnit ( rts , 1 , 0 ) ; { static struct _ssInPortCoSimAttribute
inputPortCoSimAttribute [ 2 ] ; _ssSetPortInfo2ForInputCoSimAttribute ( rts ,
& inputPortCoSimAttribute [ 0 ] ) ; } ssSetInputPortIsContinuousQuantity (
rts , 0 , 0 ) ; ssSetInputPortIsContinuousQuantity ( rts , 1 , 0 ) ; { static
real_T const * sfcnUPtrs [ 11 ] ; sfcnUPtrs [ 0 ] = & rtB . pe2sphdjh2 ;
sfcnUPtrs [ 1 ] = & rtB . erekh4vfpe ; sfcnUPtrs [ 2 ] = & rtB . hrzbsnrwi3 ;
sfcnUPtrs [ 3 ] = & rtB . lgzmg01p1c ; sfcnUPtrs [ 4 ] = & rtB . kwrjw25yn5 ;
sfcnUPtrs [ 5 ] = & rtB . fdsengn1kg ; sfcnUPtrs [ 6 ] = & rtB . mjmg2qs5xf ;
sfcnUPtrs [ 7 ] = & rtB . kat2ic3vyh ; sfcnUPtrs [ 8 ] = & rtB . htqhpx0nsu ;
sfcnUPtrs [ 9 ] = & rtB . l0wr0i0a0y ; sfcnUPtrs [ 10 ] = & rtB . kq3prrs1uu
; ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] )
; _ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts ,
0 , 11 ) ; } { static real_T const * sfcnUPtrs [ 25 ] ; sfcnUPtrs [ 0 ] = &
rtB . mgmgi14ih4 ; sfcnUPtrs [ 1 ] = & rtB . mr3r11o4cd ; sfcnUPtrs [ 2 ] = &
rtB . mtks03qisz ; sfcnUPtrs [ 3 ] = & rtB . ecm55snlkx ; sfcnUPtrs [ 4 ] = &
rtB . puxyxqzwrf ; sfcnUPtrs [ 5 ] = & rtB . jrfwiwd43z ; sfcnUPtrs [ 6 ] = &
rtB . cgb0hlthvq ; sfcnUPtrs [ 7 ] = & rtB . dtavayqhda ; sfcnUPtrs [ 8 ] = &
rtB . hz0bo4qocx ; sfcnUPtrs [ 9 ] = & rtB . cqfzimln2f ; sfcnUPtrs [ 10 ] =
& rtB . ilzaifqtd1 ; sfcnUPtrs [ 11 ] = & rtB . aqajecbbnu ; sfcnUPtrs [ 12 ]
= & rtB . odighpugae ; sfcnUPtrs [ 13 ] = & rtB . mo0cmtpcyi ; sfcnUPtrs [ 14
] = & rtB . fw5hv2gf0k ; sfcnUPtrs [ 15 ] = & rtB . gyysi3xihf ; sfcnUPtrs [
16 ] = & rtB . kv0kguhr0b ; sfcnUPtrs [ 17 ] = & rtB . cq1hxzcfzr ; sfcnUPtrs
[ 18 ] = & rtB . m4ih4dx4xb ; sfcnUPtrs [ 19 ] = & rtB . jppegbuoi5 ;
sfcnUPtrs [ 20 ] = & rtB . cu43ie0v4m ; sfcnUPtrs [ 21 ] = & rtB . ng4lafji5x
; sfcnUPtrs [ 22 ] = & rtB . p5tpfuerbv ; sfcnUPtrs [ 23 ] = & rtB .
gckyylswxk ; sfcnUPtrs [ 24 ] = & rtB . eoewe3hpfs ; ssSetInputPortSignalPtrs
( rts , 1 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 1 , 1 ) ; ssSetInputPortWidth ( rts , 1
, 25 ) ; } } { static struct _ssPortOutputs outputPortInfo [ 2 ] ;
ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ] ) ;
_ssSetNumOutputPorts ( rts , 2 ) ; { static struct _ssOutPortUnit
outputPortUnits [ 2 ] ; _ssSetPortInfo2ForOutputUnits ( rts , &
outputPortUnits [ 0 ] ) ; } ssSetOutputPortUnit ( rts , 0 , 0 ) ;
ssSetOutputPortUnit ( rts , 1 , 0 ) ; { static struct
_ssOutPortCoSimAttribute outputPortCoSimAttribute [ 2 ] ;
_ssSetPortInfo2ForOutputCoSimAttribute ( rts , & outputPortCoSimAttribute [ 0
] ) ; } ssSetOutputPortIsContinuousQuantity ( rts , 0 , 0 ) ;
ssSetOutputPortIsContinuousQuantity ( rts , 1 , 0 ) ; {
_ssSetOutputPortNumDimensions ( rts , 0 , 1 ) ; ssSetOutputPortWidth ( rts ,
0 , 7 ) ; ssSetOutputPortSignal ( rts , 0 , ( ( real_T * ) rtB . psghlesfzb )
) ; } { _ssSetOutputPortNumDimensions ( rts , 1 , 1 ) ; ssSetOutputPortWidth
( rts , 1 , 50 ) ; ssSetOutputPortSignal ( rts , 1 , ( ( real_T * ) rtB .
lowxonccdy ) ) ; } } ssSetContStates ( rts , & rtX . fqxf3jikpe [ 0 ] ) ;
ssSetContStateDisabled ( rts , & ( ( XDis * ) ssGetContStateDisabled ( rtS )
) -> fqxf3jikpe [ 0 ] ) ; { real_T * minVec = & ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) -> fqxf3jikpe [ 0 ] ; real_T
* maxVec = & ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec ( rtS ) )
-> fqxf3jikpe [ 0 ] ; ssSetJacobianPerturbationBoundsMinVec ( rts , minVec )
; ssSetJacobianPerturbationBoundsMaxVec ( rts , maxVec ) ; } ssSetModelName (
rts , "State-Space" ) ; ssSetPath ( rts ,
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) ; if ( ssGetRTModel (
rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ; ssSetRootSS ( rts ,
ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts , ssGetRTModel ( rtS ) )
; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts , rts ) ; }
ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static mxArray *
sfcnParams [ 10 ] ; ssSetSFcnParamsCount ( rts , 10 ) ; ssSetSFcnParamsPtr (
rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 , ( mxArray * ) rtP .
StateSpace_P1_Size ) ; ssSetSFcnParam ( rts , 1 , ( mxArray * ) rtP .
StateSpace_P2_Size ) ; ssSetSFcnParam ( rts , 2 , ( mxArray * ) rtP .
StateSpace_P3_Size ) ; ssSetSFcnParam ( rts , 3 , ( mxArray * ) rtP .
StateSpace_P4_Size ) ; ssSetSFcnParam ( rts , 4 , ( mxArray * ) rtP .
StateSpace_P5_Size ) ; ssSetSFcnParam ( rts , 5 , ( mxArray * ) rtP .
StateSpace_P6_Size ) ; ssSetSFcnParam ( rts , 6 , ( mxArray * ) rtP .
StateSpace_P7_Size ) ; ssSetSFcnParam ( rts , 7 , ( mxArray * ) rtP .
StateSpace_P8_Size ) ; ssSetSFcnParam ( rts , 8 , ( mxArray * ) rtP .
StateSpace_P9_Size ) ; ssSetSFcnParam ( rts , 9 , ( mxArray * ) rtP .
StateSpace_P10_Size ) ; } ssSetRWork ( rts , ( real_T * ) & rtDW . jgycbxp0kd
[ 0 ] ) ; ssSetIWork ( rts , ( int_T * ) & rtDW . hrgiwxycqx [ 0 ] ) ;
ssSetPWork ( rts , ( void * * ) & rtDW . bhqiz0ostl [ 0 ] ) ; { static struct
_ssDWorkRecord dWorkRecord [ 4 ] ; static struct _ssDWorkAuxRecord
dWorkAuxRecord [ 4 ] ; ssSetSFcnDWork ( rts , dWorkRecord ) ;
ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 4 ) ;
ssSetDWorkWidth ( rts , 0 , 26 ) ; ssSetDWorkDataType ( rts , 0 , SS_INTEGER
) ; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
la35cccgmk [ 0 ] ) ; ssSetDWorkWidth ( rts , 1 , 2 ) ; ssSetDWorkDataType (
rts , 1 , SS_DOUBLE ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork
( rts , 1 , & rtDW . jgycbxp0kd [ 0 ] ) ; ssSetDWorkWidth ( rts , 2 , 23 ) ;
ssSetDWorkDataType ( rts , 2 , SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . hrgiwxycqx [ 0 ] ) ;
ssSetDWorkWidth ( rts , 3 , 22 ) ; ssSetDWorkDataType ( rts , 3 , SS_POINTER
) ; ssSetDWorkComplexSignal ( rts , 3 , 0 ) ; ssSetDWork ( rts , 3 , & rtDW .
bhqiz0ostl [ 0 ] ) ; } ssSetModeVector ( rts , ( int_T * ) & rtDW .
la35cccgmk [ 0 ] ) ; sfun_spid_contc ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 0 ;
ssSetNumNonsampledZCs ( rts , 26 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortConnected ( rts , 1 , 1 ) ;
_ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ; _ssSetOutputPortBeingMerged (
rts , 1 , 0 ) ; ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ;
ssSetInputPortBufferDstPort ( rts , 1 , - 1 ) ; } } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 4 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID4 ( tid ) ; }
