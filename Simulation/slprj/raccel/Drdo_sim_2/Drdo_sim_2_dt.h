#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "uint64_T" , 14 , 8 } , { "int64_T" , 15
, 8 } , { "uint64_T" , 16 , 8 } } ; static uint_T rtDataTypeSizes [ ] = {
sizeof ( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof (
uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) ,
sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof (
int_T ) , sizeof ( void * ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) ,
sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint64_T ) } ; static
const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" ,
"uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"uint64_T" , "int64_T" , "uint64_T" } ; static DataTypeTransition
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . pgb0d4fezl ) , 0 , 0 , 255 }
, { ( char_T * ) ( & rtB . e4kk4vfb1y ) , 8 , 0 , 21 } , { ( char_T * ) ( &
rtDW . lmeiw1aeti ) , 0 , 0 , 12 } , { ( char_T * ) ( & rtDW . fzilssap5b ) ,
14 , 0 , 2 } , { ( char_T * ) ( & rtDW . jgycbxp0kd [ 0 ] ) , 0 , 0 , 2 } , {
( char_T * ) ( & rtDW . bhqiz0ostl [ 0 ] ) , 11 , 0 , 52 } , { ( char_T * ) (
& rtDW . gudxj4f5fr ) , 10 , 0 , 64 } , { ( char_T * ) ( & rtDW . nli2vgeh2l
) , 8 , 0 , 38 } } ; static DataTypeTransitionTable rtBTransTable = { 8U ,
rtBTransitions } ; static DataTypeTransition rtPTransitions [ ] = { { (
char_T * ) ( & rtP . Battery_BatType ) , 0 , 0 , 7895 } } ; static
DataTypeTransitionTable rtPTransTable = { 1U , rtPTransitions } ;
