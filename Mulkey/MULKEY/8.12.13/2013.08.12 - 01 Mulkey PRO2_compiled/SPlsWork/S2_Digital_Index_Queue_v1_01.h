#ifndef __S2_DIGITAL_INDEX_QUEUE_V1_01_H__
#define __S2_DIGITAL_INDEX_QUEUE_V1_01_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/

#define __S2_Digital_Index_Queue_v1_01_INDEX_FB_DIG_INPUT 0
#define __S2_Digital_Index_Queue_v1_01_INDEX_FB_ARRAY_LENGTH 64

/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Digital_Index_Queue_v1_01_FIRST_INDEX_ANALOG_OUTPUT 0
#define __S2_Digital_Index_Queue_v1_01_LAST_INDEX_ANALOG_OUTPUT 1


#define __S2_Digital_Index_Queue_v1_01_ORDER_POS_ANALOG_OUTPUT 2
#define __S2_Digital_Index_Queue_v1_01_ORDER_POS_ARRAY_LENGTH 64

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
CREATE_INTARRAY1D( S2_Digital_Index_Queue_v1_01, __DS, 64 );;


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

START_GLOBAL_VAR_STRUCT( S2_Digital_Index_Queue_v1_01 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __INDEX_FB );
   DECLARE_IO_ARRAY( __ORDER_POS );
};

START_NVRAM_VAR_STRUCT( S2_Digital_Index_Queue_v1_01 )
{
   unsigned short __GNINITCOMPLETE;
   unsigned short __ITEMSINDS;
   DECLARE_INTARRAY( S2_Digital_Index_Queue_v1_01, __DS );
};



#endif //__S2_DIGITAL_INDEX_QUEUE_V1_01_H__

