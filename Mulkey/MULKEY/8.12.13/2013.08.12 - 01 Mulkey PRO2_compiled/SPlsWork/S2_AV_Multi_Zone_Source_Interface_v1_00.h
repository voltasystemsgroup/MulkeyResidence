#ifndef __S2_AV_MULTI_ZONE_SOURCE_INTERFACE_V1_00_H__
#define __S2_AV_MULTI_ZONE_SOURCE_INTERFACE_V1_00_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_ENABLE_MULTI_SELECT_DIG_INPUT 0
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_CLEAR_DIG_INPUT 1
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_ALL_DIG_INPUT 2
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_SRC_0_DIG_INPUT 3

#define __S2_AV_Multi_Zone_Source_Interface_v1_00_SRC_DIG_INPUT 4
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_SRC_ARRAY_LENGTH 32
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_DIG_INPUT 36
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_ARRAY_LENGTH 64
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_ENABLE_DIG_INPUT 100
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_ENABLE_ARRAY_LENGTH 64

/*
* ANALOG_INPUT
*/
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_INDEX_ANALOG_INPUT 0
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_SRC_INDEX_ANALOG_INPUT 1
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_INDEX_FB_ANALOG_INPUT 2




/*
* DIGITAL_OUTPUT
*/

#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_FB_DIG_OUTPUT 0
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_FB_ARRAY_LENGTH 64

/*
* ANALOG_OUTPUT
*/


#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_SRC_INDEX_OUT_ANALOG_OUTPUT 0
#define __S2_AV_Multi_Zone_Source_Interface_v1_00_AVZ_SRC_INDEX_OUT_ARRAY_LENGTH 64

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
CREATE_INTARRAY1D( S2_AV_Multi_Zone_Source_Interface_v1_00, __GNAVZ, 64 );;


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

START_GLOBAL_VAR_STRUCT( S2_AV_Multi_Zone_Source_Interface_v1_00 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SRC );
   DECLARE_IO_ARRAY( __AVZ );
   DECLARE_IO_ARRAY( __AVZ_ENABLE );
   DECLARE_IO_ARRAY( __AVZ_FB );
   DECLARE_IO_ARRAY( __AVZ_SRC_INDEX_OUT );
};

START_NVRAM_VAR_STRUCT( S2_AV_Multi_Zone_Source_Interface_v1_00 )
{
   unsigned short __GNSRC;
   DECLARE_INTARRAY( S2_AV_Multi_Zone_Source_Interface_v1_00, __GNAVZ );
};



#endif //__S2_AV_MULTI_ZONE_SOURCE_INTERFACE_V1_00_H__

