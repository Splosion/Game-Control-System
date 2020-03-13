using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Linq;
using Crestron;
using Crestron.Logos.SplusLibrary;
using Crestron.Logos.SplusObjects;
using Crestron.SimplSharp;

namespace UserModule_ANALOG_TO_INTEGER_STRING_VOLUME__0_100_
{
    public class UserModuleClass_ANALOG_TO_INTEGER_STRING_VOLUME__0_100_ : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        Crestron.Logos.SplusObjects.AnalogInput VOLUME_IN;
        Crestron.Logos.SplusObjects.StringOutput VOLUME_OUT__DOLLAR__;
        object VOLUME_IN_OnChange_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 9;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( VOLUME_IN  .UshortValue > 100 ))  ) ) 
                    { 
                    __context__.SourceCodeLine = 11;
                    VOLUME_OUT__DOLLAR__  .UpdateValue ( Functions.ItoA (  (int) ( 100 ) )  ) ; 
                    } 
                
                else 
                    {
                    __context__.SourceCodeLine = 13;
                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( VOLUME_IN  .UshortValue < 0 ))  ) ) 
                        { 
                        __context__.SourceCodeLine = 15;
                        VOLUME_OUT__DOLLAR__  .UpdateValue ( Functions.ItoA (  (int) ( 0 ) )  ) ; 
                        } 
                    
                    else 
                        {
                        __context__.SourceCodeLine = 18;
                        VOLUME_OUT__DOLLAR__  .UpdateValue ( Functions.ItoA (  (int) ( VOLUME_IN  .UshortValue ) )  ) ; 
                        }
                    
                    }
                
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    
    public override void LogosSplusInitialize()
    {
        SocketInfo __socketinfo__ = new SocketInfo( 1, this );
        InitialParametersClass.ResolveHostName = __socketinfo__.ResolveHostName;
        _SplusNVRAM = new SplusNVRAM( this );
        
        VOLUME_IN = new Crestron.Logos.SplusObjects.AnalogInput( VOLUME_IN__AnalogSerialInput__, this );
        m_AnalogInputList.Add( VOLUME_IN__AnalogSerialInput__, VOLUME_IN );
        
        VOLUME_OUT__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( VOLUME_OUT__DOLLAR____AnalogSerialOutput__, this );
        m_StringOutputList.Add( VOLUME_OUT__DOLLAR____AnalogSerialOutput__, VOLUME_OUT__DOLLAR__ );
        
        
        VOLUME_IN.OnAnalogChange.Add( new InputChangeHandlerWrapper( VOLUME_IN_OnChange_0, false ) );
        
        _SplusNVRAM.PopulateCustomAttributeList( true );
        
        NVRAM = _SplusNVRAM;
        
    }
    
    public override void LogosSimplSharpInitialize()
    {
        
        
    }
    
    public UserModuleClass_ANALOG_TO_INTEGER_STRING_VOLUME__0_100_ ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}
    
    
    
    
    const uint VOLUME_IN__AnalogSerialInput__ = 0;
    const uint VOLUME_OUT__DOLLAR____AnalogSerialOutput__ = 0;
    
    [SplusStructAttribute(-1, true, false)]
    public class SplusNVRAM : SplusStructureBase
    {
    
        public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
        
        
    }
    
    SplusNVRAM _SplusNVRAM = null;
    
    public class __CEvent__ : CEvent
    {
        public __CEvent__() {}
        public void Close() { base.Close(); }
        public int Reset() { return base.Reset() ? 1 : 0; }
        public int Set() { return base.Set() ? 1 : 0; }
        public int Wait( int timeOutInMs ) { return base.Wait( timeOutInMs ) ? 1 : 0; }
    }
    public class __CMutex__ : CMutex
    {
        public __CMutex__() {}
        public void Close() { base.Close(); }
        public void ReleaseMutex() { base.ReleaseMutex(); }
        public int WaitForMutex() { return base.WaitForMutex() ? 1 : 0; }
    }
     public int IsNull( object obj ){ return (obj == null) ? 1 : 0; }
}


}
