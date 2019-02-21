#ifndef __S2_EXTRON_SWITCHING_AUDIOVIDEO_H__
#define __S2_EXTRON_SWITCHING_AUDIOVIDEO_H__





/*
* DIGITAL_INPUT
*/
#define __S2_Extron_Switching_AudioVideo_ENABLE_DIG_INPUT 0


/*
* ANALOG_INPUT
*/

#define __S2_Extron_Switching_AudioVideo_TYPE_STRING_INPUT 0
#define __S2_Extron_Switching_AudioVideo_TYPE_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Extron_Switching_AudioVideo, __TYPE, __S2_Extron_Switching_AudioVideo_TYPE_STRING_MAX_LEN );


#define __S2_Extron_Switching_AudioVideo_SOURCE_FOR_OUTPUT_ANALOG_INPUT 1
#define __S2_Extron_Switching_AudioVideo_SOURCE_FOR_OUTPUT_ARRAY_LENGTH 8

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Extron_Switching_AudioVideo_EXTRON_TX$_STRING_OUTPUT 0




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

START_GLOBAL_VAR_STRUCT( S2_Extron_Switching_AudioVideo )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SOURCE_FOR_OUTPUT );
   DECLARE_STRING_STRUCT( S2_Extron_Switching_AudioVideo, __TYPE );
};

START_NVRAM_VAR_STRUCT( S2_Extron_Switching_AudioVideo )
{
};



#endif //__S2_EXTRON_SWITCHING_AUDIOVIDEO_H__

