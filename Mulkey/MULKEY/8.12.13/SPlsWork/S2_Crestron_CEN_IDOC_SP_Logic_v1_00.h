#ifndef __S2_CRESTRON_CEN_IDOC_SP_LOGIC_V1_00_H__
#define __S2_CRESTRON_CEN_IDOC_SP_LOGIC_V1_00_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Crestron_CEN_IDOC_SP_Logic_v1_00_ACTIVE_DIG_INPUT 0
#define __S2_Crestron_CEN_IDOC_SP_Logic_v1_00_NOT_PRESENT_FB_DIG_INPUT 1
#define __S2_Crestron_CEN_IDOC_SP_Logic_v1_00_LOCAL_MODE_FB_DIG_INPUT 2
#define __S2_Crestron_CEN_IDOC_SP_Logic_v1_00_LOCAL_MODE_OFF_REQUEST_DIG_INPUT 3


/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/
#define __S2_Crestron_CEN_IDOC_SP_Logic_v1_00_ENABLE_CONTROLS_DIG_OUTPUT 0
#define __S2_Crestron_CEN_IDOC_SP_Logic_v1_00_PLEASE_WAIT_SUBPAGE_DIG_OUTPUT 1
#define __S2_Crestron_CEN_IDOC_SP_Logic_v1_00_NOT_PRESENT_SUBPAGE_DIG_OUTPUT 2
#define __S2_Crestron_CEN_IDOC_SP_Logic_v1_00_LOCAL_MODE_SUBPAGE_DIG_OUTPUT 3


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

START_GLOBAL_VAR_STRUCT( S2_Crestron_CEN_IDOC_SP_Logic_v1_00 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_Crestron_CEN_IDOC_SP_Logic_v1_00 )
{
};

DEFINE_WAITEVENT( S2_Crestron_CEN_IDOC_SP_Logic_v1_00, WWAIT );


#endif //__S2_CRESTRON_CEN_IDOC_SP_LOGIC_V1_00_H__

