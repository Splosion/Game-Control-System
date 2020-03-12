#ifndef __S2_EXTRON_GAIN_VOLUME_H__
#define __S2_EXTRON_GAIN_VOLUME_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Extron_Gain_Volume_ENABLE_DIG_INPUT 0
#define __S2_Extron_Gain_Volume_ISINPUT_DIG_INPUT 1
#define __S2_Extron_Gain_Volume_ISXP300_DIG_INPUT 2
#define __S2_Extron_Gain_Volume_UP_DIG_INPUT 3
#define __S2_Extron_Gain_Volume_DOWN_DIG_INPUT 4


/*
* ANALOG_INPUT
*/
#define __S2_Extron_Gain_Volume_IO_ANALOG_INPUT 0




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Extron_Gain_Volume_EXTRON_TX$_STRING_OUTPUT 0


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

START_GLOBAL_VAR_STRUCT( S2_Extron_Gain_Volume )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_Extron_Gain_Volume )
{
   unsigned short __INPUT;
};



#endif //__S2_EXTRON_GAIN_VOLUME_H__

