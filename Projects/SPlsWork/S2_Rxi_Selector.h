#ifndef __S2_RXI_SELECTOR_H__
#define __S2_RXI_SELECTOR_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Rxi_Selector_SELECT_DIG_INPUT 0
#define __S2_Rxi_Selector_RESETRXI_DIG_INPUT 1


/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Rxi_Selector_SELECTEDINPUT_ANALOG_OUTPUT 0
#define __S2_Rxi_Selector_SELECTEDOUTPUT_ANALOG_OUTPUT 1



/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Rxi_Selector_RXI01INPUT_INTEGER_PARAMETER 10
#define __S2_Rxi_Selector_RXI02INPUT_INTEGER_PARAMETER 11
#define __S2_Rxi_Selector_RXI01OUTPUT_INTEGER_PARAMETER 12
#define __S2_Rxi_Selector_RXI02OUTPUT_INTEGER_PARAMETER 13
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

START_GLOBAL_VAR_STRUCT( S2_Rxi_Selector )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_Rxi_Selector )
{
   unsigned short __RXI_01_ON;
};



#endif //__S2_RXI_SELECTOR_H__

