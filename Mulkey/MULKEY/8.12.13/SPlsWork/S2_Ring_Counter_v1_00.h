#ifndef __S2_RING_COUNTER_V1_00_H__
#define __S2_RING_COUNTER_V1_00_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Ring_Counter_v1_00_RESET_DIG_INPUT 0
#define __S2_Ring_Counter_v1_00_PREVIOUS_DIG_INPUT 1
#define __S2_Ring_Counter_v1_00_NEXT_DIG_INPUT 2


/*
* ANALOG_INPUT
*/
#define __S2_Ring_Counter_v1_00_FORCE_ANALOG_INPUT 0
#define __S2_Ring_Counter_v1_00_RANGE_ANALOG_INPUT 1




/*
* DIGITAL_OUTPUT
*/

#define __S2_Ring_Counter_v1_00_OUT_DIG_OUTPUT 0
#define __S2_Ring_Counter_v1_00_OUT_ARRAY_LENGTH 32

/*
* ANALOG_OUTPUT
*/



/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Ring_Counter_v1_00_WRAP_AROUND_INTEGER_PARAMETER 10
#define __S2_Ring_Counter_v1_00_START_POS_INTEGER_PARAMETER 11
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

START_GLOBAL_VAR_STRUCT( S2_Ring_Counter_v1_00 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __OUT );
   unsigned short __GNINITCOMPLETE;
   unsigned short __GNOUTPUT;
   unsigned short __GNLASTOUTPUT;
};

START_NVRAM_VAR_STRUCT( S2_Ring_Counter_v1_00 )
{
};



#endif //__S2_RING_COUNTER_V1_00_H__

