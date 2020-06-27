#ifndef __S2_EXTRON_SWITCHING_IO_REVISED_H__
#define __S2_EXTRON_SWITCHING_IO_REVISED_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Extron_Switching_IO_Revised_ENABLE_DIG_INPUT 0


/*
* ANALOG_INPUT
*/
#define __S2_Extron_Switching_IO_Revised_SOURCE_ANALOG_INPUT 0
#define __S2_Extron_Switching_IO_Revised_DEST_ANALOG_INPUT 1




/*
* DIGITAL_OUTPUT
*/
#define __S2_Extron_Switching_IO_Revised_SENT_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_Extron_Switching_IO_Revised_EXTRON_TX_STRING_OUTPUT 0


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
#define __S2_Extron_Switching_IO_Revised_TYPE_STRING_PARAMETER 10
#define __S2_Extron_Switching_IO_Revised_TYPE_PARAM_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __TYPE, __S2_Extron_Switching_IO_Revised_TYPE_PARAM_MAX_LEN );


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

START_GLOBAL_VAR_STRUCT( S2_Extron_Switching_IO_Revised )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __TYPE );
};

START_NVRAM_VAR_STRUCT( S2_Extron_Switching_IO_Revised )
{
   unsigned short __IN;
   unsigned short __PREV_IN;
   unsigned short __OUT;
   unsigned short __PREV_OUT;
};



#endif //__S2_EXTRON_SWITCHING_IO_REVISED_H__

