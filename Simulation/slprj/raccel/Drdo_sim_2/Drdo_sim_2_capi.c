#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Drdo_sim_2_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#ifndef SS_INT64
#define SS_INT64  15
#endif
#ifndef SS_UINT64
#define SS_UINT64  16
#endif
#else
#include "builtin_typeid_types.h"
#include "Drdo_sim_2.h"
#include "Drdo_sim_2_capi.h"
#include "Drdo_sim_2_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 25 , TARGET_STRING
( "Drdo_sim_2/MATLAB Function" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 }
, { 1 , 25 , TARGET_STRING ( "Drdo_sim_2/MATLAB Function" ) , TARGET_STRING (
"" ) , 1 , 0 , 0 , 0 , 0 } , { 2 , 25 , TARGET_STRING (
"Drdo_sim_2/MATLAB Function" ) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } ,
{ 3 , 25 , TARGET_STRING ( "Drdo_sim_2/MATLAB Function" ) , TARGET_STRING (
"" ) , 3 , 0 , 0 , 0 , 0 } , { 4 , 25 , TARGET_STRING (
"Drdo_sim_2/MATLAB Function" ) , TARGET_STRING ( "" ) , 4 , 0 , 0 , 0 , 0 } ,
{ 5 , 25 , TARGET_STRING ( "Drdo_sim_2/MATLAB Function" ) , TARGET_STRING (
"" ) , 5 , 0 , 0 , 0 , 0 } , { 6 , 25 , TARGET_STRING (
"Drdo_sim_2/MATLAB Function" ) , TARGET_STRING ( "" ) , 6 , 0 , 0 , 0 , 0 } ,
{ 7 , 25 , TARGET_STRING ( "Drdo_sim_2/MATLAB Function" ) , TARGET_STRING (
"" ) , 7 , 0 , 0 , 0 , 0 } , { 8 , 26 , TARGET_STRING (
"Drdo_sim_2/MATLAB Function1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 }
, { 9 , 0 , TARGET_STRING (
"Drdo_sim_2/Current Measurement/do not delete this gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"Drdo_sim_2/Current Measurement1/do not delete this gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"Drdo_sim_2/PWM/Variable Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"Drdo_sim_2/PWM7/Variable Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"Drdo_sim_2/Voltage Measurement/do not delete this gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"Drdo_sim_2/Voltage Measurement1/do not delete this gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Current Measurement/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Data Type Conversion1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 17 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Data Type Conversion2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Fcn1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 19 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Fcn6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Fcn9" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 21 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 23 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/R1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/R2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 }
, { 25 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/R3" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/R4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 }
, { 27 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/int(i)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/it init" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
1 } , { 29 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/it init1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Relational Operator" ) , TARGET_STRING ( "" ) , 0 ,
1 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation" ) , TARGET_STRING ( "SOC (%)" ) , 0 , 0
, 0 , 0 , 0 } , { 32 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Add" ) ,
TARGET_STRING ( "Voltage (V)" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0 ,
TARGET_STRING ( "Drdo_sim_2/Battery/Model/Add2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 35 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Switch7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/BAL" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 }
, { 37 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Current filter" ) ,
TARGET_STRING ( "Current (A)" ) , 0 , 0 , 0 , 0 , 0 } , { 38 , 0 ,
TARGET_STRING (
"Drdo_sim_2/Battery1/Current Measurement/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Data Type Conversion1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 40 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Data Type Conversion2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Fcn1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 42 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Fcn6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Fcn9" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 44 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 46 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/R1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/R2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 }
, { 48 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/R3" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/R4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 }
, { 50 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/int(i)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/it init" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 1 } , { 52 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/it init1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 53 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Relational Operator" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 54 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation" ) , TARGET_STRING ( "SOC (%)" ) , 0 ,
0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Add"
) , TARGET_STRING ( "Voltage (V)" ) , 0 , 0 , 0 , 0 , 0 } , { 56 , 0 ,
TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Add2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 58 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Switch7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/BAL" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 60 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Current filter" ) ,
TARGET_STRING ( "Current (A)" ) , 0 , 0 , 0 , 0 , 0 } , { 61 , 0 ,
TARGET_STRING (
"Drdo_sim_2/Battery2/Current Measurement/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Data Type Conversion1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 63 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Data Type Conversion2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 64 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Fcn1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 65 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Fcn6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 66 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Fcn9" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 67 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 69 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/R1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/R2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 }
, { 71 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/R3" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 72 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/R4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 }
, { 73 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/int(i)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/it init" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 1 } , { 75 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/it init1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 76 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Relational Operator" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 77 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation" ) , TARGET_STRING ( "SOC (%)" ) , 0 ,
0 , 0 , 0 , 0 } , { 78 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Add"
) , TARGET_STRING ( "Voltage (V)" ) , 0 , 0 , 0 , 0 , 0 } , { 79 , 0 ,
TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Add2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 81 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Switch7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/BAL" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 83 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Current filter" ) ,
TARGET_STRING ( "Current (A)" ) , 0 , 0 , 0 , 0 , 0 } , { 84 , 0 ,
TARGET_STRING ( "Drdo_sim_2/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 2 } , { 85 , 0 , TARGET_STRING ( "Drdo_sim_2/Diode/Model/eee" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 86 , 0 , TARGET_STRING (
"Drdo_sim_2/Diode1/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2
} , { 87 , 0 , TARGET_STRING ( "Drdo_sim_2/Diode1/Model/eee" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 88 , 0 , TARGET_STRING (
"Drdo_sim_2/Diode2/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2
} , { 89 , 0 , TARGET_STRING ( "Drdo_sim_2/Diode2/Model/eee" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 90 , 0 , TARGET_STRING (
"Drdo_sim_2/Diode3/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2
} , { 91 , 0 , TARGET_STRING ( "Drdo_sim_2/Diode3/Model/eee" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 92 , 0 , TARGET_STRING (
"Drdo_sim_2/Diode4/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2
} , { 93 , 0 , TARGET_STRING ( "Drdo_sim_2/Diode4/Model/eee" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 94 , 0 , TARGET_STRING (
"Drdo_sim_2/Diode5/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2
} , { 95 , 0 , TARGET_STRING ( "Drdo_sim_2/Diode5/Model/eee" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 96 , 0 , TARGET_STRING (
"Drdo_sim_2/Diode6/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2
} , { 97 , 0 , TARGET_STRING ( "Drdo_sim_2/Diode6/Model/eee" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 98 , 0 , TARGET_STRING (
"Drdo_sim_2/Diode7/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2
} , { 99 , 0 , TARGET_STRING ( "Drdo_sim_2/Diode7/Model/eee" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 100 , 0 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 101 , 0 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "" ) ,
1 , 0 , 2 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/E_dyn Charge/Multiport Switch1" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 103 , 2 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/E_dyn Charge/Product" ) , TARGET_STRING ( "" ) , 0
, 0 , 3 , 0 , 0 } , { 104 , 4 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/E_dyn Charge/Product1" ) , TARGET_STRING ( "" ) , 0
, 0 , 3 , 0 , 0 } , { 105 , 3 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/E_dyn Charge/Product2" ) , TARGET_STRING ( "" ) , 0
, 0 , 3 , 0 , 0 } , { 106 , 1 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/E_dyn Charge/Product3" ) , TARGET_STRING ( "" ) , 0
, 0 , 3 , 0 , 0 } , { 107 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Exp/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 108 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Exp/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 109 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Exp/Gain4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 1 } , { 110 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Exp/Integrator2" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 111 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Exp/Multiport Switch1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 112 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Exp/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 113 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Exp/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 114 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Exp/Add3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 115 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic/LowerRelop1" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 1 } , { 116 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic/UpperRelop" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 1 } , { 117 , 6 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic/Switch" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic/Switch2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 119 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic1/LowerRelop1" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 120 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic1/UpperRelop" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 1 } , { 121 , 7 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic1/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 122 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic1/Switch2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 123 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic2/LowerRelop1" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 124 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic2/UpperRelop" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 1 } , { 125 , 8 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic2/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 126 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation Dynamic2/Switch2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 127 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/E_dyn Charge/Multiport Switch1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 128 , 10 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/E_dyn Charge/Product" ) , TARGET_STRING ( "" ) , 0
, 0 , 3 , 0 , 0 } , { 129 , 12 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/E_dyn Charge/Product1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 3 , 0 , 0 } , { 130 , 11 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/E_dyn Charge/Product2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 3 , 0 , 0 } , { 131 , 9 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/E_dyn Charge/Product3" ) , TARGET_STRING ( "" ) ,
0 , 0 , 3 , 0 , 0 } , { 132 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 133 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Exp/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 134 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Gain4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 135 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Integrator2" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 136 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Multiport Switch1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 137 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 138 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 139 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 140 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic/LowerRelop1" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 141 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic/UpperRelop" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 1 } , { 142 , 14 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 143 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic/Switch2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 144 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic1/LowerRelop1" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 145 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic1/UpperRelop" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 146 , 15 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic1/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 147 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic1/Switch2" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 148 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic2/LowerRelop1" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 149 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic2/UpperRelop" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 150 , 16 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic2/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 151 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation Dynamic2/Switch2" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 152 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/E_dyn Charge/Multiport Switch1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 153 , 18 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/E_dyn Charge/Product" ) , TARGET_STRING ( "" ) , 0
, 0 , 3 , 0 , 0 } , { 154 , 20 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/E_dyn Charge/Product1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 3 , 0 , 0 } , { 155 , 19 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/E_dyn Charge/Product2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 3 , 0 , 0 } , { 156 , 17 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/E_dyn Charge/Product3" ) , TARGET_STRING ( "" ) ,
0 , 0 , 3 , 0 , 0 } , { 157 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 158 , 0 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Exp/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 159 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Gain4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 160 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Integrator2" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 161 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Multiport Switch1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 162 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 163 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 164 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 165 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic/LowerRelop1" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 166 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic/UpperRelop" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 1 } , { 167 , 22 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 168 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic/Switch2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 169 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic1/LowerRelop1" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 170 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic1/UpperRelop" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 171 , 23 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic1/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 172 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic1/Switch2" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 173 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic2/LowerRelop1" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 174 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic2/UpperRelop" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 0 , 1 } , { 175 , 24 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic2/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 176 , 0 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation Dynamic2/Switch2" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 177 , 0 , TARGET_STRING (
"Drdo_sim_2/Mosfet/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 2 } , { 178 , 0 , TARGET_STRING ( "Drdo_sim_2/Mosfet1/Diode/Model/(gate)"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 179 , 0 , TARGET_STRING (
"Drdo_sim_2/Mosfet2/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 180 , 0 , TARGET_STRING (
"Drdo_sim_2/Mosfet3/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 181 , 0 , TARGET_STRING (
"Drdo_sim_2/Mosfet4/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 182 , 0 , TARGET_STRING (
"Drdo_sim_2/Mosfet5/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 183 , 0 , TARGET_STRING (
"Drdo_sim_2/Mosfet6/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 184 , 0 , TARGET_STRING (
"Drdo_sim_2/Mosfet7/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static
const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 185 , TARGET_STRING
( "Drdo_sim_2/Battery" ) , TARGET_STRING ( "BatType" ) , 0 , 0 , 0 } , { 186
, TARGET_STRING ( "Drdo_sim_2/Battery1" ) , TARGET_STRING ( "BatType" ) , 0 ,
0 , 0 } , { 187 , TARGET_STRING ( "Drdo_sim_2/Battery2" ) , TARGET_STRING (
"BatType" ) , 0 , 0 , 0 } , { 188 , TARGET_STRING ( "Drdo_sim_2/PWM" ) ,
TARGET_STRING ( "Period" ) , 0 , 0 , 0 } , { 189 , TARGET_STRING (
"Drdo_sim_2/PWM7" ) , TARGET_STRING ( "Period" ) , 0 , 0 , 0 } , { 190 ,
TARGET_STRING ( "Drdo_sim_2/Current Measurement/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 191 , TARGET_STRING (
"Drdo_sim_2/Current Measurement1/do not delete this gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 192 , TARGET_STRING (
"Drdo_sim_2/Voltage Measurement/do not delete this gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 193 , TARGET_STRING (
"Drdo_sim_2/Voltage Measurement1/do not delete this gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 194 , TARGET_STRING (
"Drdo_sim_2/Battery/Current Measurement/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 195 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0
} , { 196 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 197 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Constant12" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 198 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Constant9" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 199 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 200 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 201 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/R"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 202 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/R1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
203 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/R2" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 204 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/R3" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
205 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/R4" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 206 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/int(i)" ) , TARGET_STRING ( "UpperSaturationLimit"
) , 0 , 0 , 0 } , { 207 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/int(i)" )
, TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 208 ,
TARGET_STRING ( "Drdo_sim_2/Battery/Model/it init" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 209 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/it init1" ) , TARGET_STRING ( "InitialCondition" )
, 0 , 0 , 0 } , { 210 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 211 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Saturation" ) , TARGET_STRING ( "LowerLimit" ) , 0
, 0 , 0 } , { 212 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/BAL" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 213 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/BAL" ) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , {
214 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Current filter" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 215 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Current filter" ) , TARGET_STRING ( "C" ) , 0 , 0 ,
0 } , { 216 , TARGET_STRING (
"Drdo_sim_2/Battery1/Current Measurement/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 217 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 218 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 219 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Constant12" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 220 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Constant9" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 221 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 222 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 223 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/R" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
224 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/R1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 225 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/R2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
226 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/R3" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 227 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/R4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
228 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/int(i)" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 0 , 0 } , { 229 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/int(i)" ) , TARGET_STRING ( "LowerSaturationLimit"
) , 0 , 0 , 0 } , { 230 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/it init"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 231 ,
TARGET_STRING ( "Drdo_sim_2/Battery1/Model/it init1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 232 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Saturation" ) , TARGET_STRING ( "UpperLimit" ) , 0
, 0 , 0 } , { 233 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Saturation" )
, TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 234 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/BAL" ) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , {
235 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/BAL" ) , TARGET_STRING ( "C"
) , 0 , 0 , 0 } , { 236 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Current filter" ) , TARGET_STRING ( "A" ) , 0 , 0
, 0 } , { 237 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Current filter" )
, TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 238 , TARGET_STRING (
"Drdo_sim_2/Battery2/Current Measurement/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 239 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 240 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 241 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Constant12" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 242 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Constant9" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 243 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 244 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 245 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/R" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
246 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/R1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 247 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/R2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
248 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/R3" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 249 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/R4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
250 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/int(i)" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 0 , 0 } , { 251 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/int(i)" ) , TARGET_STRING ( "LowerSaturationLimit"
) , 0 , 0 , 0 } , { 252 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/it init"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 253 ,
TARGET_STRING ( "Drdo_sim_2/Battery2/Model/it init1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 254 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Saturation" ) , TARGET_STRING ( "UpperLimit" ) , 0
, 0 , 0 } , { 255 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Saturation" )
, TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 256 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/BAL" ) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , {
257 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/BAL" ) , TARGET_STRING ( "C"
) , 0 , 0 , 0 } , { 258 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Current filter" ) , TARGET_STRING ( "A" ) , 0 , 0
, 0 } , { 259 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Current filter" )
, TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 260 , TARGET_STRING (
"Drdo_sim_2/Diode/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } ,
{ 261 , TARGET_STRING ( "Drdo_sim_2/Diode/Model/eee" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 262 , TARGET_STRING (
"Drdo_sim_2/Diode1/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 263 , TARGET_STRING ( "Drdo_sim_2/Diode1/Model/eee" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 264 , TARGET_STRING (
"Drdo_sim_2/Diode2/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 265 , TARGET_STRING ( "Drdo_sim_2/Diode2/Model/eee" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 266 , TARGET_STRING (
"Drdo_sim_2/Diode3/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 267 , TARGET_STRING ( "Drdo_sim_2/Diode3/Model/eee" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 268 , TARGET_STRING (
"Drdo_sim_2/Diode4/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 269 , TARGET_STRING ( "Drdo_sim_2/Diode4/Model/eee" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 270 , TARGET_STRING (
"Drdo_sim_2/Diode5/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 271 , TARGET_STRING ( "Drdo_sim_2/Diode5/Model/eee" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 272 , TARGET_STRING (
"Drdo_sim_2/Diode6/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 273 , TARGET_STRING ( "Drdo_sim_2/Diode6/Model/eee" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 274 , TARGET_STRING (
"Drdo_sim_2/Diode7/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 275 , TARGET_STRING ( "Drdo_sim_2/Diode7/Model/eee" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 276 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P1" )
, 0 , 4 , 0 } , { 277 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P2" )
, 0 , 5 , 0 } , { 278 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P3" )
, 0 , 6 , 0 } , { 279 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P4" )
, 0 , 7 , 0 } , { 280 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P5" )
, 0 , 8 , 0 } , { 281 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P6" )
, 0 , 9 , 0 } , { 282 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P7" )
, 0 , 10 , 0 } , { 283 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P8" )
, 0 , 9 , 0 } , { 284 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P9" )
, 0 , 0 , 0 } , { 285 , TARGET_STRING (
"Drdo_sim_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P10"
) , 0 , 0 , 0 } , { 286 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Compare To Zero/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 287 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Compare To Zero2/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 288 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/E_dyn Charge/Constant1" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 289 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/E_dyn Charge/Constant2" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 290 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/E_dyn Charge/Constant3" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 291 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/E_dyn Charge/Constant4" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 292 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Exp/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0
} , { 293 , TARGET_STRING ( "Drdo_sim_2/Battery/Model/Exp/Gain4" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 294 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Exp/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 295 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Exp/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 296 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Exp/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 297 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Compare To Zero/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 298 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Compare To Zero2/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 299 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/E_dyn Charge/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 300 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/E_dyn Charge/Constant2" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 301 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/E_dyn Charge/Constant3" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 302 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/E_dyn Charge/Constant4" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 303 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 304 , TARGET_STRING ( "Drdo_sim_2/Battery1/Model/Exp/Gain4" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 305 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 306 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 307 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 308 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Compare To Zero/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 309 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Compare To Zero2/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 310 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/E_dyn Charge/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 311 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/E_dyn Charge/Constant2" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 312 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/E_dyn Charge/Constant3" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 313 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/E_dyn Charge/Constant4" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 314 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 315 , TARGET_STRING ( "Drdo_sim_2/Battery2/Model/Exp/Gain4" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 316 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 317 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 318 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 319 , TARGET_STRING (
"Drdo_sim_2/Mosfet/Diode/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 320 , TARGET_STRING ( "Drdo_sim_2/Mosfet1/Diode/Model/(gate)" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 321 , TARGET_STRING (
"Drdo_sim_2/Mosfet2/Diode/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 322 , TARGET_STRING ( "Drdo_sim_2/Mosfet3/Diode/Model/(gate)" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 323 , TARGET_STRING (
"Drdo_sim_2/Mosfet4/Diode/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 324 , TARGET_STRING ( "Drdo_sim_2/Mosfet5/Diode/Model/(gate)" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 325 , TARGET_STRING (
"Drdo_sim_2/Mosfet6/Diode/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 326 , TARGET_STRING ( "Drdo_sim_2/Mosfet7/Diode/Model/(gate)" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 327 , TARGET_STRING (
"Drdo_sim_2/Battery/Model/Exp/Compare To Zero2/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 328 , TARGET_STRING (
"Drdo_sim_2/Battery1/Model/Exp/Compare To Zero2/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 329 , TARGET_STRING (
"Drdo_sim_2/Battery2/Model/Exp/Compare To Zero2/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . fafevfeqnj , & rtB . ecm55snlkx ,
& rtB . mtks03qisz , & rtB . puxyxqzwrf , & rtB . jrfwiwd43z , & rtB .
dtavayqhda , & rtB . cgb0hlthvq , & rtB . hvpojhtj1s , & rtB . mgmgi14ih4 , &
rtB . p0xrb21qa1 , & rtB . bed1vibtj4 , & rtB . mr3r11o4cd , & rtB .
hz0bo4qocx , & rtB . j1n20lggjq , & rtB . a4raottyfg , & rtB . lhizeihnhz , &
rtB . p5alxz5ziy , & rtB . deawsx5qhs , & rtB . gmmxcfk4v1 , & rtB .
cyszaymdj5 , & rtB . oohzmrpuub , & rtB . k23slsjlyn , & rtB . hrd1lm1ya0 , &
rtB . c3xidiouan , & rtB . k1l0dq0whk , & rtB . otit5fyej4 , & rtB .
kuj5cjfmdx , & rtB . nlefoy3v23 , & rtB . i4titeidnc , & rtB . pgb0d4fezl , &
rtB . dvelx51u0p , & rtB . hazzrzn13y , & rtB . agvnom3jo0 , & rtB .
cxs3zbuah3 , & rtB . c24gsmq3eo , & rtB . njqzbmzkw3 , & rtB . fy4echtbva , &
rtB . ly2tudtpk5 , & rtB . odu4rqvais , & rtB . p1fz34rv0r , & rtB .
l5a1wc4xqj , & rtB . ljv350v5jl , & rtB . ej1y2hbu1l , & rtB . eprxgrrx1i , &
rtB . c4f254ywzz , & rtB . fodfgq0jzj , & rtB . ogaffaai1o , & rtB .
kmuikitwmq , & rtB . dgob51egq2 , & rtB . p5xpxaxvbl , & rtB . d3gxzds2xr , &
rtB . ixqtzgbiga , & rtB . gz0tlad0jf , & rtB . e1lg13dbu0 , & rtB .
fjr1hyyzxs , & rtB . mzfgyicx2y , & rtB . lx4rf5dtol , & rtB . kyo53jtai5 , &
rtB . iqy4ug0lia , & rtB . nby1ptxpmw , & rtB . pmwdqmho2g , & rtB .
kshw2uxvoi , & rtB . fiz4rc4nlg , & rtB . hskyqojmid , & rtB . cf5lednvm2 , &
rtB . hftcpnhtft , & rtB . kpg4nocamz , & rtB . b3rs2blycp , & rtB .
f2esttvhy2 , & rtB . fylyx3bgwb , & rtB . g0ppvkegvc , & rtB . l5xc5g0oxc , &
rtB . lxdepkj5ye , & rtB . hnkaykfcmo , & rtB . fmtaaiz1bq , & rtB .
eo5u1lxtg4 , & rtB . bqqtnueefv , & rtB . o3jpdxseje , & rtB . lhpatqphjc , &
rtB . h0gqnbiair , & rtB . nd0cjgwifw , & rtB . ok0zckk00c , & rtB .
lbzxgesswo , & rtB . pd4oav3zfl , & rtB . cqfzimln2f , & rtB . lgzmg01p1c , &
rtB . ilzaifqtd1 , & rtB . kwrjw25yn5 , & rtB . aqajecbbnu , & rtB .
fdsengn1kg , & rtB . odighpugae , & rtB . mjmg2qs5xf , & rtB . mo0cmtpcyi , &
rtB . kat2ic3vyh , & rtB . fw5hv2gf0k , & rtB . htqhpx0nsu , & rtB .
gyysi3xihf , & rtB . l0wr0i0a0y , & rtB . kv0kguhr0b , & rtB . kq3prrs1uu , &
rtB . psghlesfzb [ 0 ] , & rtB . lowxonccdy [ 0 ] , & rtB . hcwmplpfgi , &
rtB . fsfqwkysby [ 0 ] , & rtB . dgkrrt2kba [ 0 ] , & rtB . jaqvf35q5g [ 0 ]
, & rtB . p5m2d13jre [ 0 ] , & rtB . i5ef2hwgvu , & rtB . mwzvrxpr2p , & rtB
. mjks4xhjow , & rtB . kgkep0bsfn , & rtB . ohk0kl4s2f , & rtB . l42lm2ncga ,
& rtB . gbskkfyvvs , & rtB . dmhyv1f3ig , & rtB . jtq210enar , & rtB .
oxfqljnx42 , & rtB . b0rmkoujvo , & rtB . pe2sphdjh2 , & rtB . e4kk4vfb1y , &
rtB . ay5ogb25yw , & rtB . g3sarexv1b , & rtB . kxathhjjic , & rtB .
lwhjrhsyft , & rtB . pstioklrgc , & rtB . bdfew4ubkp , & rtB . jj2ykly5on , &
rtB . polkv0vm24 , & rtB . eibp1n2aoz [ 0 ] , & rtB . phihsmbahp [ 0 ] , &
rtB . hywsatg4v3 [ 0 ] , & rtB . krxdnnqn04 [ 0 ] , & rtB . ey2vd3i5uv , &
rtB . lefofrzdab , & rtB . jqhmwoilj3 , & rtB . naj01eqche , & rtB .
dfqj14wwuu , & rtB . c1q3so5mg1 , & rtB . nr4gs0vfac , & rtB . k2mzdcop0k , &
rtB . c15ame0mkq , & rtB . frcrm0imu1 , & rtB . clyhmv3twu , & rtB .
erekh4vfpe , & rtB . f2sgyuvprw , & rtB . lqctpheqal , & rtB . o5ewjixonz , &
rtB . p5xdglg0cq , & rtB . alnnimc4ed , & rtB . jh5vh1upy1 , & rtB .
fkbr4vcy5f , & rtB . cmxojssbts , & rtB . km5yr5pvq0 , & rtB . naomta4xqc [ 0
] , & rtB . efzw5gzeym [ 0 ] , & rtB . ej4hpfvopy [ 0 ] , & rtB . jxf2ydkrkn
[ 0 ] , & rtB . ffqmzoabpt , & rtB . de0pptp2dt , & rtB . croyui1tfg , & rtB
. oq4qh1b0g3 , & rtB . gpd3l10f2a , & rtB . bg1emtvlu5 , & rtB . giwbgwucdk ,
& rtB . h5rctxnl5g , & rtB . peg5g4ebaj , & rtB . hjx4ttdxtg , & rtB .
j23pwi0b5d , & rtB . hrzbsnrwi3 , & rtB . nlvoty5kpb , & rtB . gao5lz0fop , &
rtB . dxwmqkhxq3 , & rtB . hf335bhyf1 , & rtB . krqyyt04ow , & rtB .
lx0nmorndi , & rtB . ddd1o5htss , & rtB . hsqch24np1 , & rtB . cq1hxzcfzr , &
rtB . m4ih4dx4xb , & rtB . jppegbuoi5 , & rtB . cu43ie0v4m , & rtB .
ng4lafji5x , & rtB . p5tpfuerbv , & rtB . gckyylswxk , & rtB . eoewe3hpfs , &
rtP . Battery_BatType , & rtP . Battery1_BatType , & rtP . Battery2_BatType ,
& rtP . PWM_Period , & rtP . PWM7_Period , & rtP .
donotdeletethisgain_Gain_aakwgyoy4i , & rtP .
donotdeletethisgain_Gain_m54lmnwzgw , & rtP .
donotdeletethisgain_Gain_ikuam0amnb , & rtP .
donotdeletethisgain_Gain_f1vxkbch2y , & rtP . donotdeletethisgain_Gain , &
rtP . Constant_Value_jorngiczgp , & rtP . Constant1_Value , & rtP .
Constant12_Value , & rtP . Constant9_Value , & rtP . Gain_Gain , & rtP .
Gain2_Gain , & rtP . R_Gain , & rtP . R1_Gain , & rtP . R2_Gain , & rtP .
R3_Gain , & rtP . R4_Gain , & rtP . inti_UpperSat , & rtP . inti_LowerSat , &
rtP . itinit_InitialCondition , & rtP . itinit1_InitialCondition , & rtP .
Saturation_UpperSat_pcz043fnep , & rtP . Saturation_LowerSat_b05y2t0vvl , &
rtP . BAL_A , & rtP . BAL_C , & rtP . Currentfilter_A , & rtP .
Currentfilter_C , & rtP . donotdeletethisgain_Gain_bg3gl2myht , & rtP .
Constant_Value_fzmb45jy2r , & rtP . Constant1_Value_jelmmtr1rj , & rtP .
Constant12_Value_df3z3yuypl , & rtP . Constant9_Value_bfo0fnc5l1 , & rtP .
Gain_Gain_ozvwrv1fuy , & rtP . Gain2_Gain_m4x3vq3y1f , & rtP .
R_Gain_jzgvbxeufj , & rtP . R1_Gain_k1h1x1zryv , & rtP . R2_Gain_jrqfqsl4vo ,
& rtP . R3_Gain_dgx1dntlxw , & rtP . R4_Gain_ayggl2vp1n , & rtP .
inti_UpperSat_itldayqrxp , & rtP . inti_LowerSat_lz3gh0icex , & rtP .
itinit_InitialCondition_pv4h4vt0ps , & rtP .
itinit1_InitialCondition_l3j5mkh0dv , & rtP . Saturation_UpperSat_aqwzuangfk
, & rtP . Saturation_LowerSat_bcd3czsgyq , & rtP . BAL_A_cudqa1u03y , & rtP .
BAL_C_pnvzkp4ayj , & rtP . Currentfilter_A_hazdhojaym , & rtP .
Currentfilter_C_ldprzne4qv , & rtP . donotdeletethisgain_Gain_o42imifl5k , &
rtP . Constant_Value_kiu123temw , & rtP . Constant1_Value_jj3f5fu3xp , & rtP
. Constant12_Value_ktnzmkcekm , & rtP . Constant9_Value_nhyzz1ckmw , & rtP .
Gain_Gain_jbuudt1ftk , & rtP . Gain2_Gain_jptbha03po , & rtP .
R_Gain_g4gmpqe5wx , & rtP . R1_Gain_elo0441xsu , & rtP . R2_Gain_fij43s2whq ,
& rtP . R3_Gain_de1tgv0zzw , & rtP . R4_Gain_ckkisgzyfx , & rtP .
inti_UpperSat_nowwhgaxwk , & rtP . inti_LowerSat_cwekkzbyq1 , & rtP .
itinit_InitialCondition_nf4pvnucgc , & rtP .
itinit1_InitialCondition_go30gfvhlp , & rtP . Saturation_UpperSat_i3x3oscagf
, & rtP . Saturation_LowerSat_gnz45aadu0 , & rtP . BAL_A_n35zxahhei , & rtP .
BAL_C_ix2bm3qtha , & rtP . Currentfilter_A_pyl0ygpghg , & rtP .
Currentfilter_C_hx4sknoziy , & rtP . gate_Value_hvqav3fre2 , & rtP .
eee_Value , & rtP . gate_Value_jtuhk5jcfy , & rtP . eee_Value_jvovxrhhe5 , &
rtP . gate_Value_hfhtxagkxf , & rtP . eee_Value_livrakccix , & rtP .
gate_Value_imdjf4i2gu , & rtP . eee_Value_a41qgiert1 , & rtP .
gate_Value_fenld0mt10 , & rtP . eee_Value_cwpq0ctqc0 , & rtP .
gate_Value_gobcdjfmgd , & rtP . eee_Value_kooi21cjzm , & rtP .
gate_Value_iurqku1hqp , & rtP . eee_Value_cgwkesmam5 , & rtP .
gate_Value_hthchwxqcl , & rtP . eee_Value_mmisgtzd2o , & rtP . StateSpace_P1
[ 0 ] , & rtP . StateSpace_P2 [ 0 ] , & rtP . StateSpace_P3 [ 0 ] , & rtP .
StateSpace_P4 [ 0 ] , & rtP . StateSpace_P5 [ 0 ] , & rtP . StateSpace_P6 [ 0
] , & rtP . StateSpace_P7 [ 0 ] , & rtP . StateSpace_P8 [ 0 ] , & rtP .
StateSpace_P9 , & rtP . StateSpace_P10 , & rtP . Constant_Value , & rtP .
Constant_Value_efypwvyyax , & rtP . Constant1_Value_ks0gbwvaxk , & rtP .
Constant2_Value , & rtP . Constant3_Value , & rtP . Constant4_Value , & rtP .
Gain1_Gain , & rtP . Gain4_Gain , & rtP . Integrator2_IC , & rtP .
Saturation_UpperSat , & rtP . Saturation_LowerSat , & rtP .
Constant_Value_pbqzqfbpnm , & rtP . Constant_Value_hu3rmuppbn , & rtP .
Constant1_Value_jxqfbvs00y , & rtP . Constant2_Value_nbkvr3eqsy , & rtP .
Constant3_Value_k030zkojhy , & rtP . Constant4_Value_p1xz0cpgth , & rtP .
Gain1_Gain_og11bwmhu2 , & rtP . Gain4_Gain_kh00znyazs , & rtP .
Integrator2_IC_finfcihmmt , & rtP . Saturation_UpperSat_lxx4j3fnoa , & rtP .
Saturation_LowerSat_kwi433xk5g , & rtP . Constant_Value_bksqnhysc0 , & rtP .
Constant_Value_owtewy0ssm , & rtP . Constant1_Value_gbfcrdkgqa , & rtP .
Constant2_Value_gnk2tjoo5o , & rtP . Constant3_Value_hat1prtoip , & rtP .
Constant4_Value_cmgjzabbd1 , & rtP . Gain1_Gain_anymdqpqln , & rtP .
Gain4_Gain_fstjjgzlds , & rtP . Integrator2_IC_kqbwod02j2 , & rtP .
Saturation_UpperSat_blj3ug4rzx , & rtP . Saturation_LowerSat_o0i20janpw , &
rtP . gate_Value , & rtP . gate_Value_j2rsbfopkw , & rtP .
gate_Value_pnadvif4hc , & rtP . gate_Value_m3r3nzaglm , & rtP .
gate_Value_cw3efytsqz , & rtP . gate_Value_m3ymbazbc2 , & rtP .
gate_Value_awsbj1udfy , & rtP . gate_Value_lcm302k1d0 , & rtP .
Constant_Value_ogegtmkzv0 , & rtP . Constant_Value_h5irp45zuu , & rtP .
Constant_Value_k5pwul1wle , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 14 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2 , 0 } , {
rtwCAPI_VECTOR , 20 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] =
{ 1 , 1 , 7 , 1 , 50 , 1 , 4 , 1 , 95 , 41 , 1 , 4 , 9 , 1 , 95 , 39 , 2 , 25
, 1 , 25 , 25 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 ,
1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL
) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 0 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 1 , 0 } , { ( NULL ) , ( NULL ) , 4 , 0 } } ;
static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 185 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 145 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 276496418U , 3317950777U , 3654610639U , 3948613528U } , ( NULL ) , 0 , 0
, rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
Drdo_sim_2_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Drdo_sim_2_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Drdo_sim_2_host_InitializeDataMapInfo ( Drdo_sim_2_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
