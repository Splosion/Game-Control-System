#include "TypeDefs.h"
#include "Globals.h"
#include "FnctList.h"
#include "Library.h"
#include "SimplSig.h"
#include "S2_Processor_Selector.h"

FUNCTION_MAIN( S2_Processor_Selector );
EVENT_HANDLER( S2_Processor_Selector );
DEFINE_ENTRYPOINT( S2_Processor_Selector );



DEFINE_INDEPENDENT_EVENTHANDLER( S2_Processor_Selector, 00000 /*Select*/ )

    {
    /* Begin local function variable declarations */
    
    SAVE_GLOBAL_POINTERS ;
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Processor_Selector ), 26 );
    if ( (Nvram->S2_Processor_Selector.__PROCESSOR_01_ON == 1)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Processor_Selector ), 28 );
        SetAnalog ( INSTANCE_PTR( S2_Processor_Selector ), __S2_Processor_Selector_SELECTEDOUTPUT_ANALOG_OUTPUT, GetIntegerParameter( INSTANCE_PTR( S2_Processor_Selector ), __S2_Processor_Selector_PROCESSOR02OUTPUT_INTEGER_PARAMETER ) ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Processor_Selector ), 29 );
        SetAnalog ( INSTANCE_PTR( S2_Processor_Selector ), __S2_Processor_Selector_SELECTEDINPUT_ANALOG_OUTPUT, GetIntegerParameter( INSTANCE_PTR( S2_Processor_Selector ), __S2_Processor_Selector_PROCESSOR02INPUT_INTEGER_PARAMETER ) ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Processor_Selector ), 30 );
        Nvram->S2_Processor_Selector.__PROCESSOR_01_ON = 0; 
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Processor_Selector ), 34 );
        SetAnalog ( INSTANCE_PTR( S2_Processor_Selector ), __S2_Processor_Selector_SELECTEDOUTPUT_ANALOG_OUTPUT, GetIntegerParameter( INSTANCE_PTR( S2_Processor_Selector ), __S2_Processor_Selector_PROCESSOR02OUTPUT_INTEGER_PARAMETER ) ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Processor_Selector ), 35 );
        SetAnalog ( INSTANCE_PTR( S2_Processor_Selector ), __S2_Processor_Selector_SELECTEDINPUT_ANALOG_OUTPUT, GetIntegerParameter( INSTANCE_PTR( S2_Processor_Selector ), __S2_Processor_Selector_PROCESSOR02INPUT_INTEGER_PARAMETER ) ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Processor_Selector ), 36 );
        Nvram->S2_Processor_Selector.__PROCESSOR_01_ON = 1; 
        } 
    
    
    S2_Processor_Selector_Exit__Event_0:
    /* Begin Free local function variables */
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_Processor_Selector, 00001 /*ResetProcessor*/ )

    {
    /* Begin local function variable declarations */
    
    SAVE_GLOBAL_POINTERS ;
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Processor_Selector ), 42 );
    Nvram->S2_Processor_Selector.__PROCESSOR_01_ON = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Processor_Selector ), 43 );
    SetAnalog ( INSTANCE_PTR( S2_Processor_Selector ), __S2_Processor_Selector_SELECTEDOUTPUT_ANALOG_OUTPUT, 0) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Processor_Selector ), 44 );
    SetAnalog ( INSTANCE_PTR( S2_Processor_Selector ), __S2_Processor_Selector_SELECTEDINPUT_ANALOG_OUTPUT, 0) ; 
    
    S2_Processor_Selector_Exit__Event_1:
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
        case __S2_Processor_Selector_SELECT_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_Processor_Selector, 00000 /*Select*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_Processor_Selector ) ); 
                
            }
            break;
            
        case __S2_Processor_Selector_RESETPROCESSOR_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_Processor_Selector, 00001 /*ResetProcessor*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_Processor_Selector ) ); 
                
            }
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Processor_Selector ) ); 
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
            SetSymbolEventStart ( INSTANCE_PTR( S2_Processor_Selector ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessStringEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessStringEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_Processor_Selector ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Processor_Selector ) ); 
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
            SetSymbolEventStart ( INSTANCE_PTR( S2_Processor_Selector ) ); 
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
            SetSymbolEventStart ( INSTANCE_PTR( S2_Processor_Selector ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_Processor_Selector ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Processor_Selector ) ); 
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
            SetSymbolEventStart ( INSTANCE_PTR( S2_Processor_Selector ) ); 
            break ;
        
    }
}

/********************************************************************************
  EVENT_HANDLER( S2_Processor_Selector )
********************************************************************************/
EVENT_HANDLER( S2_Processor_Selector )
    {
    SAVE_GLOBAL_POINTERS ;
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
  FUNCTION_MAIN( S2_Processor_Selector )
********************************************************************************/
FUNCTION_MAIN( S2_Processor_Selector )
{
    SAVE_GLOBAL_POINTERS ;
    
    SET_INSTANCE_POINTER ( S2_Processor_Selector );
    
    
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_Processor_Selector, sGenericOutStr, e_INPUT_TYPE_NONE, GENERIC_STRING_OUTPUT_LEN );
    
    
    
    S2_Processor_Selector_Exit__MAIN:
    RESTORE_GLOBAL_POINTERS ;
    return 0 ;
    }
