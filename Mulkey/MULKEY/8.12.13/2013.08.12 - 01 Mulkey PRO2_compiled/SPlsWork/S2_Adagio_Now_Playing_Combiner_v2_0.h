#ifndef __S2_ADAGIO_NOW_PLAYING_COMBINER_V2_0_H__
#define __S2_ADAGIO_NOW_PLAYING_COMBINER_V2_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Adagio_Now_Playing_Combiner_v2_0_OFFLINE_DIG_INPUT 0


/*
* ANALOG_INPUT
*/

#define __S2_Adagio_Now_Playing_Combiner_v2_0_LINE1$_STRING_INPUT 0
#define __S2_Adagio_Now_Playing_Combiner_v2_0_LINE1$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner_v2_0, __LINE1$, __S2_Adagio_Now_Playing_Combiner_v2_0_LINE1$_STRING_MAX_LEN );
#define __S2_Adagio_Now_Playing_Combiner_v2_0_LINE2$_STRING_INPUT 1
#define __S2_Adagio_Now_Playing_Combiner_v2_0_LINE2$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner_v2_0, __LINE2$, __S2_Adagio_Now_Playing_Combiner_v2_0_LINE2$_STRING_MAX_LEN );
#define __S2_Adagio_Now_Playing_Combiner_v2_0_TRANSPORT$_STRING_INPUT 2
#define __S2_Adagio_Now_Playing_Combiner_v2_0_TRANSPORT$_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner_v2_0, __TRANSPORT$, __S2_Adagio_Now_Playing_Combiner_v2_0_TRANSPORT$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Adagio_Now_Playing_Combiner_v2_0_NOWPLAYING$_STRING_OUTPUT 0


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

START_GLOBAL_VAR_STRUCT( S2_Adagio_Now_Playing_Combiner_v2_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner_v2_0, __LINE1$ );
   DECLARE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner_v2_0, __LINE2$ );
   DECLARE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner_v2_0, __TRANSPORT$ );
};

START_NVRAM_VAR_STRUCT( S2_Adagio_Now_Playing_Combiner_v2_0 )
{
};



#endif //__S2_ADAGIO_NOW_PLAYING_COMBINER_V2_0_H__

