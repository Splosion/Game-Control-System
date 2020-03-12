#ifndef __S2_EXTRON_MUTE_H__
#define __S2_EXTRON_MUTE_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Extron_Mute_ENABLE_DIG_INPUT 0
#define __S2_Extron_Mute_ISVIDEO_DIG_INPUT 1
#define __S2_Extron_Mute_BUTTON_DIG_INPUT 2


/*
* ANALOG_INPUT
*/
#define __S2_Extron_Mute_OUTPUT_ANALOG_INPUT 0




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Extron_Mute_EXTRON_TX$_STRING_OUTPUT 0


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

START_GLOBAL_VAR_STRUCT( S2_Extron_Mute )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_Extron_Mute )
{
   unsigned short __MUTE;
   unsigned short __OUT;
};



#endif //__S2_EXTRON_MUTE_H__

