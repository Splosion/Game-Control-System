#ifndef __S2_PANASONIC_VIERA_CONTROLLER_H__
#define __S2_PANASONIC_VIERA_CONTROLLER_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Panasonic_Viera_Controller_SEND_DIG_INPUT 0


/*
* ANALOG_INPUT
*/

#define __S2_Panasonic_Viera_Controller_COMMAND_STRING_INPUT 0
#define __S2_Panasonic_Viera_Controller_COMMAND_STRING_MAX_LEN 1024
CREATE_STRING_STRUCT( S2_Panasonic_Viera_Controller, __COMMAND, __S2_Panasonic_Viera_Controller_COMMAND_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Panasonic_Viera_Controller_RESPONSE_STRING_OUTPUT 0


/*
* Direct Socket Variables
*/

#define __S2_Panasonic_Viera_Controller_TCPSOCKET_SOCKET 1
#define __S2_Panasonic_Viera_Controller_TCPSOCKET_STRING_MAX_LEN 2000
START_SOCKET_DEFINITION( S2_Panasonic_Viera_Controller, __TCPSOCKET )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_Panasonic_Viera_Controller, SocketRxBuf, __S2_Panasonic_Viera_Controller_TCPSOCKET_STRING_MAX_LEN );
};



/*
* INTEGER_PARAMETER
*/
#define __S2_Panasonic_Viera_Controller_PORT_INTEGER_PARAMETER 11
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
#define __S2_Panasonic_Viera_Controller_IP_STRING_PARAMETER 10
#define __S2_Panasonic_Viera_Controller_IP_PARAM_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Panasonic_Viera_Controller, __IP, __S2_Panasonic_Viera_Controller_IP_PARAM_MAX_LEN );


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

START_GLOBAL_VAR_STRUCT( S2_Panasonic_Viera_Controller )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Panasonic_Viera_Controller, __COMMAND );
   DECLARE_SOCKET( S2_Panasonic_Viera_Controller, __TCPSOCKET );
   DECLARE_STRING_STRUCT( S2_Panasonic_Viera_Controller, __IP );
};

START_NVRAM_VAR_STRUCT( S2_Panasonic_Viera_Controller )
{
};



#endif //__S2_PANASONIC_VIERA_CONTROLLER_H__

