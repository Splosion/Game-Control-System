#ifndef __S2_DISPLAY_DEVICE_SEQUENCE_DRIVE_V2_H__
#define __S2_DISPLAY_DEVICE_SEQUENCE_DRIVE_V2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Display_Device_Sequence_Drive_v2_CHECK_POWER_STATE_DIG_INPUT 0
#define __S2_Display_Device_Sequence_Drive_v2_CHECK_INPUT_STATE_DIG_INPUT 1
#define __S2_Display_Device_Sequence_Drive_v2_CHECK_PICTURE_MUTE_STATE_DIG_INPUT 2
#define __S2_Display_Device_Sequence_Drive_v2_CHECK_ASPECT_STATE_DIG_INPUT 3
#define __S2_Display_Device_Sequence_Drive_v2_CHECK_VOLUME_MUTE_STATE_DIG_INPUT 4
#define __S2_Display_Device_Sequence_Drive_v2_CHECK_EXTRA_COMMAND_1_STATE_DIG_INPUT 5
#define __S2_Display_Device_Sequence_Drive_v2_CHECK_EXTRA_COMMAND_2_STATE_DIG_INPUT 6
#define __S2_Display_Device_Sequence_Drive_v2_CHECK_EXTRA_COMMAND_3_STATE_DIG_INPUT 7
#define __S2_Display_Device_Sequence_Drive_v2_END_OF_MESSAGE_RECEIVED_DIG_INPUT 8
#define __S2_Display_Device_Sequence_Drive_v2_ENABLE_POLLING_DIG_INPUT 9
#define __S2_Display_Device_Sequence_Drive_v2_START_POLLING_DIG_INPUT 10
#define __S2_Display_Device_Sequence_Drive_v2_GET_LAMP_HOURS_DIG_INPUT 11
#define __S2_Display_Device_Sequence_Drive_v2_TIME_OUT_DIG_INPUT 12


/*
* ANALOG_INPUT
*/
#define __S2_Display_Device_Sequence_Drive_v2_POWER_REQUEST_ANALOG_INPUT 0
#define __S2_Display_Device_Sequence_Drive_v2_POWER_CURRENT_ANALOG_INPUT 1
#define __S2_Display_Device_Sequence_Drive_v2_INPUT_REQUEST_ANALOG_INPUT 2
#define __S2_Display_Device_Sequence_Drive_v2_INPUT_CURRENT_ANALOG_INPUT 3
#define __S2_Display_Device_Sequence_Drive_v2_PICTURE_MUTE_REQUEST_ANALOG_INPUT 4
#define __S2_Display_Device_Sequence_Drive_v2_PICTURE_MUTE_CURRENT_ANALOG_INPUT 5
#define __S2_Display_Device_Sequence_Drive_v2_ASPECT_REQUEST_ANALOG_INPUT 6
#define __S2_Display_Device_Sequence_Drive_v2_ASPECT_CURRENT_ANALOG_INPUT 7
#define __S2_Display_Device_Sequence_Drive_v2_VOLUME_MUTE_REQUEST_ANALOG_INPUT 8
#define __S2_Display_Device_Sequence_Drive_v2_VOLUME_MUTE_CURRENT_ANALOG_INPUT 9
#define __S2_Display_Device_Sequence_Drive_v2_EXTRA_COMMAND_1_REQUEST_ANALOG_INPUT 10
#define __S2_Display_Device_Sequence_Drive_v2_EXTRA_COMMAND_1_CURRENT_ANALOG_INPUT 11
#define __S2_Display_Device_Sequence_Drive_v2_EXTRA_COMMAND_2_REQUEST_ANALOG_INPUT 12
#define __S2_Display_Device_Sequence_Drive_v2_EXTRA_COMMAND_2_CURRENT_ANALOG_INPUT 13
#define __S2_Display_Device_Sequence_Drive_v2_EXTRA_COMMAND_3_REQUEST_ANALOG_INPUT 14
#define __S2_Display_Device_Sequence_Drive_v2_EXTRA_COMMAND_3_CURRENT_ANALOG_INPUT 15
#define __S2_Display_Device_Sequence_Drive_v2_RAMPING_COMMANDS_REQUEST_ANALOG_INPUT 16
#define __S2_Display_Device_Sequence_Drive_v2_OTHER_COMMANDS_REQUEST_ANALOG_INPUT 17
#define __S2_Display_Device_Sequence_Drive_v2_WARM_UP_WAIT_TIME_ANALOG_INPUT 18
#define __S2_Display_Device_Sequence_Drive_v2_COOL_DOWN_WAIT_TIME_ANALOG_INPUT 19
#define __S2_Display_Device_Sequence_Drive_v2_NUMBER_OF_POLL_COMMANDS_ANALOG_INPUT 20
#define __S2_Display_Device_Sequence_Drive_v2_COMMAND_DELAY_TIME_ANALOG_INPUT 21
#define __S2_Display_Device_Sequence_Drive_v2_TIME_OUT_TIME_ANALOG_INPUT 22




/*
* DIGITAL_OUTPUT
*/
#define __S2_Display_Device_Sequence_Drive_v2_TIMED_OUT_DIG_OUTPUT 0
#define __S2_Display_Device_Sequence_Drive_v2_COMMUNICATING_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_Display_Device_Sequence_Drive_v2_SEND_POWER_ANALOG_OUTPUT 0
#define __S2_Display_Device_Sequence_Drive_v2_SEND_INPUT_ANALOG_OUTPUT 1
#define __S2_Display_Device_Sequence_Drive_v2_SEND_PICTURE_MUTE_ANALOG_OUTPUT 2
#define __S2_Display_Device_Sequence_Drive_v2_SEND_ASPECT_ANALOG_OUTPUT 3
#define __S2_Display_Device_Sequence_Drive_v2_SEND_VOLUME_MUTE_ANALOG_OUTPUT 4
#define __S2_Display_Device_Sequence_Drive_v2_SEND_EXTRA_COMMAND_1_ANALOG_OUTPUT 5
#define __S2_Display_Device_Sequence_Drive_v2_SEND_EXTRA_COMMAND_2_ANALOG_OUTPUT 6
#define __S2_Display_Device_Sequence_Drive_v2_SEND_EXTRA_COMMAND_3_ANALOG_OUTPUT 7
#define __S2_Display_Device_Sequence_Drive_v2_SEND_RAMPING_ANALOG_OUTPUT 8
#define __S2_Display_Device_Sequence_Drive_v2_SEND_OTHER_ANALOG_OUTPUT 9
#define __S2_Display_Device_Sequence_Drive_v2_SEND_POLL_ANALOG_OUTPUT 10



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

START_GLOBAL_VAR_STRUCT( S2_Display_Device_Sequence_Drive_v2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __INEXTPOLL;
   unsigned short __IWAITING;
   unsigned short __IMAXPOLL;
   unsigned short __IOKTOSEND;
   unsigned short __IPOWERREQ;
   unsigned short __IINPUTREQ;
   unsigned short __IASPECTREQ;
   unsigned short __IPICTUREMUTEREQ;
   unsigned short __IVOLUMEMUTEREQ;
   unsigned short __IEXTRA1REQ;
   unsigned short __IEXTRA2REQ;
   unsigned short __IEXTRA3REQ;
   unsigned short __ITIMEOUTTIME;
};

START_NVRAM_VAR_STRUCT( S2_Display_Device_Sequence_Drive_v2 )
{
};

DEFINE_WAITEVENT( S2_Display_Device_Sequence_Drive_v2, __SPLS_TMPVAR__WAITLABEL_0__ );
DEFINE_WAITEVENT( S2_Display_Device_Sequence_Drive_v2, WTIMEOUT );


#endif //__S2_DISPLAY_DEVICE_SEQUENCE_DRIVE_V2_H__

