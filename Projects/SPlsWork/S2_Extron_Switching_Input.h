#ifndef __S2_EXTRON_SWITCHING_INPUT_H__
#define __S2_EXTRON_SWITCHING_INPUT_H__





/*
* DIGITAL_INPUT
*/
#define __S2_Extron_Switching_Input_ENABLE_DIG_INPUT 0

#define __S2_Extron_Switching_Input_INPUT_DIG_INPUT 1
#define __S2_Extron_Switching_Input_INPUT_ARRAY_LENGTH 12

/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Extron_Switching_Input_OUT_NUM_ANALOG_OUTPUT 0





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

START_GLOBAL_VAR_STRUCT( S2_Extron_Switching_Input )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __INPUT );
};

START_NVRAM_VAR_STRUCT( S2_Extron_Switching_Input )
{
   unsigned short __I;
};



#endif //__S2_EXTRON_SWITCHING_INPUT_H__

