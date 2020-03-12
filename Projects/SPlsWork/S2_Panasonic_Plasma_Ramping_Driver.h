#ifndef __S2_PANASONIC_PLASMA_RAMPING_DRIVER_H__
#define __S2_PANASONIC_PLASMA_RAMPING_DRIVER_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Panasonic_Plasma_Ramping_Driver_VOLUME_UP_DIG_INPUT 0
#define __S2_Panasonic_Plasma_Ramping_Driver_VOLUME_DOWN_DIG_INPUT 1
#define __S2_Panasonic_Plasma_Ramping_Driver_BRIGHTNESS_UP_DIG_INPUT 2
#define __S2_Panasonic_Plasma_Ramping_Driver_BRIGHTNESS_DOWN_DIG_INPUT 3
#define __S2_Panasonic_Plasma_Ramping_Driver_SHARPNESS_UP_DIG_INPUT 4
#define __S2_Panasonic_Plasma_Ramping_Driver_SHARPNESS_DOWN_DIG_INPUT 5
#define __S2_Panasonic_Plasma_Ramping_Driver_PICTURE_UP_DIG_INPUT 6
#define __S2_Panasonic_Plasma_Ramping_Driver_PICTURE_DOWN_DIG_INPUT 7
#define __S2_Panasonic_Plasma_Ramping_Driver_TINT_UP_DIG_INPUT 8
#define __S2_Panasonic_Plasma_Ramping_Driver_TINT_DOWN_DIG_INPUT 9
#define __S2_Panasonic_Plasma_Ramping_Driver_COLOR_UP_DIG_INPUT 10
#define __S2_Panasonic_Plasma_Ramping_Driver_COLOR_DOWN_DIG_INPUT 11


/*
* ANALOG_INPUT
*/


#define __S2_Panasonic_Plasma_Ramping_Driver_FROM_DEVICE$_BUFFER_INPUT 0
#define __S2_Panasonic_Plasma_Ramping_Driver_FROM_DEVICE$_BUFFER_MAX_LEN 500
CREATE_STRING_STRUCT( S2_Panasonic_Plasma_Ramping_Driver, __FROM_DEVICE$, __S2_Panasonic_Plasma_Ramping_Driver_FROM_DEVICE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Panasonic_Plasma_Ramping_Driver_RAMPING_DONE_ANALOG_OUTPUT 0
#define __S2_Panasonic_Plasma_Ramping_Driver_VOLUME_OUT_ANALOG_OUTPUT 1
#define __S2_Panasonic_Plasma_Ramping_Driver_BRIGHTNESS_OUT_ANALOG_OUTPUT 2
#define __S2_Panasonic_Plasma_Ramping_Driver_SHARPNESS_OUT_ANALOG_OUTPUT 3
#define __S2_Panasonic_Plasma_Ramping_Driver_PICTURE_OUT_ANALOG_OUTPUT 4
#define __S2_Panasonic_Plasma_Ramping_Driver_TINT_OUT_ANALOG_OUTPUT 5
#define __S2_Panasonic_Plasma_Ramping_Driver_COLOR_OUT_ANALOG_OUTPUT 6

#define __S2_Panasonic_Plasma_Ramping_Driver_TO_DEVICE$_STRING_OUTPUT 7


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
#define __S2_Panasonic_Plasma_Ramping_Driver_STEMP_STRING_MAX_LEN 25
CREATE_STRING_STRUCT( S2_Panasonic_Plasma_Ramping_Driver, __STEMP, __S2_Panasonic_Plasma_Ramping_Driver_STEMP_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Panasonic_Plasma_Ramping_Driver )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __IVOLUME;
   unsigned short __IBRIGHT;
   unsigned short __ISHARP;
   unsigned short __IPICTURE;
   unsigned short __ITINT;
   unsigned short __ICOLOR;
   unsigned short __ITEMP;
   unsigned short __IFLAG1;
   DECLARE_STRING_STRUCT( S2_Panasonic_Plasma_Ramping_Driver, __STEMP );
   DECLARE_STRING_STRUCT( S2_Panasonic_Plasma_Ramping_Driver, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_Panasonic_Plasma_Ramping_Driver )
{
};



#endif //__S2_PANASONIC_PLASMA_RAMPING_DRIVER_H__

