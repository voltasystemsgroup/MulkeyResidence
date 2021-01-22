#ifndef __S2_DATA_SELECTOR_SERIAL_V1_00_H__
#define __S2_DATA_SELECTOR_SERIAL_V1_00_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/



#define __S2_Data_Selector_Serial_v1_00_OUTPUT_DATA_INDEX_ANALOG_INPUT 65
#define __S2_Data_Selector_Serial_v1_00_OUTPUT_DATA_INDEX_ARRAY_LENGTH 65
#define __S2_Data_Selector_Serial_v1_00_DATA_STRING_INPUT 0
#define __S2_Data_Selector_Serial_v1_00_DATA_ARRAY_NUM_ELEMS 65
#define __S2_Data_Selector_Serial_v1_00_DATA_ARRAY_NUM_CHARS 64
CREATE_STRING_ARRAY( S2_Data_Selector_Serial_v1_00, __DATA, __S2_Data_Selector_Serial_v1_00_DATA_ARRAY_NUM_ELEMS, __S2_Data_Selector_Serial_v1_00_DATA_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_Data_Selector_Serial_v1_00_OUTPUT_STRING_OUTPUT 0
#define __S2_Data_Selector_Serial_v1_00_OUTPUT_ARRAY_LENGTH 65

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

START_GLOBAL_VAR_STRUCT( S2_Data_Selector_Serial_v1_00 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __OUTPUT_DATA_INDEX );
   DECLARE_IO_ARRAY( __OUTPUT );
   DECLARE_STRING_ARRAY( S2_Data_Selector_Serial_v1_00, __DATA );
};

START_NVRAM_VAR_STRUCT( S2_Data_Selector_Serial_v1_00 )
{
   unsigned short __GNINITCOMPLETE;
};



#endif //__S2_DATA_SELECTOR_SERIAL_V1_00_H__

