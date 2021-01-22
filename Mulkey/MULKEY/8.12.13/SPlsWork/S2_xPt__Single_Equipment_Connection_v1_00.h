#ifndef __S2_XPT__SINGLE_EQUIPMENT_CONNECTION_V1_00_H__
#define __S2_XPT__SINGLE_EQUIPMENT_CONNECTION_V1_00_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/
#define __S2_xPt__Single_Equipment_Connection_v1_00_CONNECTTO_ANALOG_INPUT 0




/*
* DIGITAL_OUTPUT
*/
#define __S2_xPt__Single_Equipment_Connection_v1_00_CONNECT_DIG_OUTPUT 0
#define __S2_xPt__Single_Equipment_Connection_v1_00_DISCEC_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_xPt__Single_Equipment_Connection_v1_00_EQUIPMENTID_ANALOG_OUTPUT 0



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

START_GLOBAL_VAR_STRUCT( S2_xPt__Single_Equipment_Connection_v1_00 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_xPt__Single_Equipment_Connection_v1_00 )
{
   unsigned short __GNCURRENTCONNECTION;
};



#endif //__S2_XPT__SINGLE_EQUIPMENT_CONNECTION_V1_00_H__

