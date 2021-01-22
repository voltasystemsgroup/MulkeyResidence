#ifndef __S2_AV_MULTI_ZONE_PRESS_AND_HOLD_LOGIC_GATE_V1_00_H__
#define __S2_AV_MULTI_ZONE_PRESS_AND_HOLD_LOGIC_GATE_V1_00_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_AV_Multi_Zone_Press_and_Hold_Logic_Gate_v1_00_HELD_DIG_INPUT 0

#define __S2_AV_Multi_Zone_Press_and_Hold_Logic_Gate_v1_00_ENABLE_FB_DIG_INPUT 1
#define __S2_AV_Multi_Zone_Press_and_Hold_Logic_Gate_v1_00_ENABLE_FB_ARRAY_LENGTH 64
#define __S2_AV_Multi_Zone_Press_and_Hold_Logic_Gate_v1_00_SELECT_FB_DIG_INPUT 65
#define __S2_AV_Multi_Zone_Press_and_Hold_Logic_Gate_v1_00_SELECT_FB_ARRAY_LENGTH 64

/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/
#define __S2_AV_Multi_Zone_Press_and_Hold_Logic_Gate_v1_00_AVZ_ALL_DIG_OUTPUT 0
#define __S2_AV_Multi_Zone_Press_and_Hold_Logic_Gate_v1_00_AVZ_CLEAR_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/



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

START_GLOBAL_VAR_STRUCT( S2_AV_Multi_Zone_Press_and_Hold_Logic_Gate_v1_00 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ENABLE_FB );
   DECLARE_IO_ARRAY( __SELECT_FB );
};

START_NVRAM_VAR_STRUCT( S2_AV_Multi_Zone_Press_and_Hold_Logic_Gate_v1_00 )
{
};



#endif //__S2_AV_MULTI_ZONE_PRESS_AND_HOLD_LOGIC_GATE_V1_00_H__

