#include "TypeDefs.h"
#include "Globals.h"
#include "FnctList.h"
#include "Library.h"
#include "SimplSig.h"
#include "S2_Extron_Switching_Input.h"

FUNCTION_MAIN( S2_Extron_Switching_Input );
EVENT_HANDLER( S2_Extron_Switching_Input );
DEFINE_ENTRYPOINT( S2_Extron_Switching_Input );



DEFINE_INDEPENDENT_EVENTHANDLER( S2_Extron_Switching_Input, 00000 /*input*/ )

    {
    /* Begin local function variable declarations */
    
    unsigned short  __I_NEW; 
    SAVE_GLOBAL_POINTERS ;
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_Input ), 12 );
    Nvram->S2_Extron_Switching_Input.__I = GetLocalLastModifiedArrayIndex ( S2_Extron_Switching_Input ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_Input ), 13 );
    if ( ((GetDigitalInput( INSTANCE_PTR( S2_Extron_Switching_Input ), __S2_Extron_Switching_Input_ENABLE_DIG_INPUT ) && (Nvram->S2_Extron_Switching_Input.__I <= 32)) && (Nvram->S2_Extron_Switching_Input.__I > 0))) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_Input ), 15 );
        SetAnalog ( INSTANCE_PTR( S2_Extron_Switching_Input ), __S2_Extron_Switching_Input_OUT_NUM_ANALOG_OUTPUT, Nvram->S2_Extron_Switching_Input.__I) ; 
        } 
    
    
    S2_Extron_Switching_Input_Exit__Event_0:
    /* Begin Free local function variables */
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}


/********************************************************************************
  Constructor
********************************************************************************/

/********************************************************************************
  Destructor
********************************************************************************/

/********************************************************************************
  static void ProcessDigitalEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessDigitalEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        case __S2_Extron_Switching_Input_INPUT_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_Extron_Switching_Input, 00000 /*input*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_Input ) ); 
                
            }
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_Input ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessAnalogEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessAnalogEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_Input ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessStringEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessStringEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_Extron_Switching_Input ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_Input ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketConnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketConnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_Input ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_Input ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_Extron_Switching_Input ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_Input ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketStatusEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketStatusEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_Input ) ); 
            break ;
        
    }
}

/********************************************************************************
  EVENT_HANDLER( S2_Extron_Switching_Input )
********************************************************************************/
EVENT_HANDLER( S2_Extron_Switching_Input )
    {
    SAVE_GLOBAL_POINTERS ;
    CHECK_INPUT_ARRAY ( S2_Extron_Switching_Input, __INPUT ) ;
    switch ( Signal->Type )
        {
        case e_SIGNAL_TYPE_DIGITAL :
            ProcessDigitalEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_ANALOG :
            ProcessAnalogEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STRING :
            ProcessStringEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_CONNECT :
            ProcessSocketConnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_DISCONNECT :
            ProcessSocketDisconnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_RECEIVE :
            ProcessSocketReceiveEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STATUS :
            ProcessSocketStatusEvent( Signal );
            break ;
        }
        
    RESTORE_GLOBAL_POINTERS ;
    
    }
    
/********************************************************************************
  FUNCTION_MAIN( S2_Extron_Switching_Input )
********************************************************************************/
FUNCTION_MAIN( S2_Extron_Switching_Input )
{
    SAVE_GLOBAL_POINTERS ;
    
    SET_INSTANCE_POINTER ( S2_Extron_Switching_Input );
    INITIALIZE_IO_ARRAY ( S2_Extron_Switching_Input, __INPUT, IO_TYPE_DIGITAL_INPUT, __S2_Extron_Switching_Input_INPUT_DIG_INPUT, __S2_Extron_Switching_Input_INPUT_ARRAY_LENGTH );
    
    
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_Extron_Switching_Input, sGenericOutStr, e_INPUT_TYPE_NONE, GENERIC_STRING_OUTPUT_LEN );
    
    
    
    S2_Extron_Switching_Input_Exit__MAIN:
    RESTORE_GLOBAL_POINTERS ;
    return 0 ;
    }
