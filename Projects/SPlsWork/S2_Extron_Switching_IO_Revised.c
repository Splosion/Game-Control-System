#include "TypeDefs.h"
#include "Globals.h"
#include "FnctList.h"
#include "Library.h"
#include "SimplSig.h"
#include "S2_Extron_Switching_IO_Revised.h"

FUNCTION_MAIN( S2_Extron_Switching_IO_Revised );
EVENT_HANDLER( S2_Extron_Switching_IO_Revised );
DEFINE_ENTRYPOINT( S2_Extron_Switching_IO_Revised );



DEFINE_INDEPENDENT_EVENTHANDLER( S2_Extron_Switching_IO_Revised, 00000 /*Input*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "*" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__1, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__1 );
    
    SAVE_GLOBAL_POINTERS ;
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "*" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 50 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), 19 );
    Nvram->S2_Extron_Switching_IO_Revised.__IN = GetAnalogInput( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), __S2_Extron_Switching_IO_Revised_INPUT_ANALOG_INPUT ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), 20 );
    if ( (((GetDigitalInput( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), __S2_Extron_Switching_IO_Revised_ENABLE_DIG_INPUT ) && (Nvram->S2_Extron_Switching_IO_Revised.__OUT > 0)) && (Nvram->S2_Extron_Switching_IO_Revised.__IN != Nvram->S2_Extron_Switching_IO_Revised.__PREV_IN)) && (Nvram->S2_Extron_Switching_IO_Revised.__IN <= 32))) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), 22 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) , GENERIC_STRING_OUTPUT( S2_Extron_Switching_IO_Revised )  ,8 , "%s%s%s%s"  , Itoa ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , Nvram->S2_Extron_Switching_IO_Revised.__IN) ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ,  Itoa ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    , Nvram->S2_Extron_Switching_IO_Revised.__OUT) ,  GLOBAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __TYPE  )   )  ; 
        SetSerial( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), __S2_Extron_Switching_IO_Revised_EXTRON_TX$_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Extron_Switching_IO_Revised ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ); }
        
        ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), 23 );
        Nvram->S2_Extron_Switching_IO_Revised.__PREV_IN = Nvram->S2_Extron_Switching_IO_Revised.__IN; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), 24 );
        Nvram->S2_Extron_Switching_IO_Revised.__IN = 0; 
        } 
    
    
    S2_Extron_Switching_IO_Revised_Exit__Event_0:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_Extron_Switching_IO_Revised, 00001 /*Output*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "*" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__1, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__1 );
    
    SAVE_GLOBAL_POINTERS ;
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "*" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 50 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), 29 );
    Nvram->S2_Extron_Switching_IO_Revised.__OUT = GetAnalogInput( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), __S2_Extron_Switching_IO_Revised_OUTPUT_ANALOG_INPUT ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), 30 );
    if ( (((GetDigitalInput( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), __S2_Extron_Switching_IO_Revised_ENABLE_DIG_INPUT ) && (Nvram->S2_Extron_Switching_IO_Revised.__IN > 0)) && (Nvram->S2_Extron_Switching_IO_Revised.__OUT != Nvram->S2_Extron_Switching_IO_Revised.__PREV_OUT)) && (Nvram->S2_Extron_Switching_IO_Revised.__OUT <= 32))) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), 32 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) , GENERIC_STRING_OUTPUT( S2_Extron_Switching_IO_Revised )  ,8 , "%s%s%s%s"  , Itoa ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , Nvram->S2_Extron_Switching_IO_Revised.__IN) ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ,  Itoa ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    , Nvram->S2_Extron_Switching_IO_Revised.__OUT) ,  GLOBAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __TYPE  )   )  ; 
        SetSerial( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), __S2_Extron_Switching_IO_Revised_EXTRON_TX$_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Extron_Switching_IO_Revised ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ); }
        
        ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), 33 );
        Nvram->S2_Extron_Switching_IO_Revised.__PREV_OUT = Nvram->S2_Extron_Switching_IO_Revised.__OUT; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), 34 );
        Nvram->S2_Extron_Switching_IO_Revised.__OUT = 0; 
        } 
    
    
    S2_Extron_Switching_IO_Revised_Exit__Event_1:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
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
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ); 
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
        case __S2_Extron_Switching_IO_Revised_INPUT_ANALOG_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_Extron_Switching_IO_Revised, 00000 /*Input*/, 0 );
            break;
            
        case __S2_Extron_Switching_IO_Revised_OUTPUT_ANALOG_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_Extron_Switching_IO_Revised, 00001 /*Output*/, 0 );
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessStringEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessStringEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_Extron_Switching_IO_Revised ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ); 
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
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ); 
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
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_Extron_Switching_IO_Revised ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ); 
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
            SetSymbolEventStart ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ) ); 
            break ;
        
    }
}

/********************************************************************************
  EVENT_HANDLER( S2_Extron_Switching_IO_Revised )
********************************************************************************/
EVENT_HANDLER( S2_Extron_Switching_IO_Revised )
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
  FUNCTION_MAIN( S2_Extron_Switching_IO_Revised )
********************************************************************************/
FUNCTION_MAIN( S2_Extron_Switching_IO_Revised )
{
    SAVE_GLOBAL_POINTERS ;
    
    SET_INSTANCE_POINTER ( S2_Extron_Switching_IO_Revised );
    
    
    InitStringParamStruct ( INSTANCE_PTR( S2_Extron_Switching_IO_Revised ), GLOBAL_STRING_STRUCT( S2_Extron_Switching_IO_Revised, __TYPE ) , e_INPUT_TYPE_STRING_PARAMETER, __S2_Extron_Switching_IO_Revised_TYPE_STRING_PARAMETER, __S2_Extron_Switching_IO_Revised_TYPE_PARAM_MAX_LEN, NAME_AS_STRING( __TYPE ) );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_Extron_Switching_IO_Revised, sGenericOutStr, e_INPUT_TYPE_NONE, GENERIC_STRING_OUTPUT_LEN );
    
    
    
    S2_Extron_Switching_IO_Revised_Exit__MAIN:
    RESTORE_GLOBAL_POINTERS ;
    return 0 ;
    }
