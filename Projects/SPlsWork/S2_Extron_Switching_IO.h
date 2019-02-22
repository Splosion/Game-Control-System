#ifndef __S2_EXTRON_SWITCHING_IO_H__
#define __S2_EXTRON_SWITCHING_IO_H__





/*
* DIGITAL_INPUT
*/
#define __S2_Extron_Switching_IO_ENABLE_DIG_INPUT 0


/*
* ANALOG_INPUT
*/
#define __S2_Extron_Switching_IO_INPUT_ANALOG_INPUT 1
#define __S2_Extron_Switching_IO_OUTPUT_ANALOG_INPUT 2

#define __S2_Extron_Switching_IO_TYPE_STRING_INPUT 0
#define __S2_Extron_Switching_IO_TYPE_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Extron_Switching_IO, __TYPE, __S2_Extron_Switching_IO_TYPE_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Extron_Switching_IO_EXTRON_TX$_STRING_OUTPUT 0




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
#define __S2_Extron_Switching_IO_TYPESTRING_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Extron_Switching_IO, __TYPESTRING, __S2_Extron_Switching_IO_TYPESTRING_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Extron_Switching_IO )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Extron_Switching_IO, __TYPE );
};

START_NVRAM_VAR_STRUCT( S2_Extron_Switching_IO )
{
   DECLARE_STRING_STRUCT( S2_Extron_Switching_IO, __TYPESTRING );
   unsigned short __IN;
   unsigned short __PREV_IN;
   unsigned short __OUT;
   unsigned short __PREV_OUT;
};



#endif //__S2_EXTRON_SWITCHING_IO_H__

