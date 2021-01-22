#ifndef __S2_AMFM__CEN_TRACK__PRESET_PROCESSOR_V1_H__
#define __S2_AMFM__CEN_TRACK__PRESET_PROCESSOR_V1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_AMFM__CEN_TRACK__Preset_Processor_v1_AMACTIVE_DIG_INPUT 0
#define __S2_AMFM__CEN_TRACK__Preset_Processor_v1_FMACTIVE_DIG_INPUT 1
#define __S2_AMFM__CEN_TRACK__Preset_Processor_v1_FMIACTIVE_DIG_INPUT 2


/*
* ANALOG_INPUT
*/



#define __S2_AMFM__CEN_TRACK__Preset_Processor_v1_AMPRESETIN_ANALOG_INPUT 0
#define __S2_AMFM__CEN_TRACK__Preset_Processor_v1_AMPRESETIN_ARRAY_LENGTH 20
#define __S2_AMFM__CEN_TRACK__Preset_Processor_v1_FMPRESETIN_ANALOG_INPUT 20
#define __S2_AMFM__CEN_TRACK__Preset_Processor_v1_FMPRESETIN_ARRAY_LENGTH 20

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_AMFM__CEN_TRACK__Preset_Processor_v1_PRESETOUT$_STRING_OUTPUT 0
#define __S2_AMFM__CEN_TRACK__Preset_Processor_v1_PRESETOUT$_ARRAY_LENGTH 20

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_AMFM__CEN_TRACK__Preset_Processor_v1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __AMPRESETIN );
   DECLARE_IO_ARRAY( __FMPRESETIN );
   DECLARE_IO_ARRAY( __PRESETOUT$ );
};

START_NVRAM_VAR_STRUCT( S2_AMFM__CEN_TRACK__Preset_Processor_v1 )
{
};



#endif //__S2_AMFM__CEN_TRACK__PRESET_PROCESSOR_V1_H__

