#ifndef __S2_PANASONIC_VIERA_VOLUME_H__
#define __S2_PANASONIC_VIERA_VOLUME_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/
#define __S2_Panasonic_Viera_Volume_VOLUME_IN_ANALOG_INPUT 0




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Panasonic_Viera_Volume_VOLUME_OUT$_STRING_OUTPUT 0


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
#define __S2_Panasonic_Viera_Volume_VOLUMELEVEL_STRING_MAX_LEN 3
CREATE_STRING_STRUCT( S2_Panasonic_Viera_Volume, __VOLUMELEVEL, __S2_Panasonic_Viera_Volume_VOLUMELEVEL_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Panasonic_Viera_Volume )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Panasonic_Viera_Volume, __VOLUMELEVEL );
};

START_NVRAM_VAR_STRUCT( S2_Panasonic_Viera_Volume )
{
};



#endif //__S2_PANASONIC_VIERA_VOLUME_H__

