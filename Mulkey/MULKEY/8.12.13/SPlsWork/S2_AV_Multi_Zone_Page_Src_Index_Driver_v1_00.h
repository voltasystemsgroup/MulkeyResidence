#ifndef __S2_AV_MULTI_ZONE_PAGE_SRC_INDEX_DRIVER_V1_00_H__
#define __S2_AV_MULTI_ZONE_PAGE_SRC_INDEX_DRIVER_V1_00_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_AV_Multi_Zone_Page_Src_Index_Driver_v1_00_ENABLE_DIG_INPUT 0
#define __S2_AV_Multi_Zone_Page_Src_Index_Driver_v1_00_REPROP_DIG_INPUT 1


/*
* ANALOG_INPUT
*/
#define __S2_AV_Multi_Zone_Page_Src_Index_Driver_v1_00_LAST_AVZ_INDEX_ANALOG_INPUT 0
#define __S2_AV_Multi_Zone_Page_Src_Index_Driver_v1_00_SRC_INDEX_ANALOG_INPUT 1



#define __S2_AV_Multi_Zone_Page_Src_Index_Driver_v1_00_AVZ_SRC_INDEX_ANALOG_INPUT 2
#define __S2_AV_Multi_Zone_Page_Src_Index_Driver_v1_00_AVZ_SRC_INDEX_ARRAY_LENGTH 64

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_AV_Multi_Zone_Page_Src_Index_Driver_v1_00_SRC_PAGE_INDEX_ANALOG_OUTPUT 0
#define __S2_AV_Multi_Zone_Page_Src_Index_Driver_v1_00_SRC_INDEX_FB_ANALOG_OUTPUT 1



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

START_GLOBAL_VAR_STRUCT( S2_AV_Multi_Zone_Page_Src_Index_Driver_v1_00 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __AVZ_SRC_INDEX );
};

START_NVRAM_VAR_STRUCT( S2_AV_Multi_Zone_Page_Src_Index_Driver_v1_00 )
{
   unsigned short __GNSRCPAGEINDEX;
};



#endif //__S2_AV_MULTI_ZONE_PAGE_SRC_INDEX_DRIVER_V1_00_H__

