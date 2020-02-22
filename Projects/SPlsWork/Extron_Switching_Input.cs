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

namespace UserModule_EXTRON_SWITCHING_INPUT
{
    public class UserModuleClass_EXTRON_SWITCHING_INPUT : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        Crestron.Logos.SplusObjects.DigitalInput ENABLE;
        InOutArray<Crestron.Logos.SplusObjects.DigitalInput> INPUT;
        Crestron.Logos.SplusObjects.AnalogOutput OUT_NUM;
        ushort I = 0;
        object INPUT_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                ushort I_NEW = 0;
                
                
                __context__.SourceCodeLine = 12;
                I = (ushort) ( Functions.GetLastModifiedArrayIndex( __SignalEventArg__ ) ) ; 
                __context__.SourceCodeLine = 13;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( ENABLE  .Value ) && Functions.TestForTrue ( Functions.BoolToInt ( I <= 32 ) )) ) ) && Functions.TestForTrue ( Functions.BoolToInt ( I > 0 ) )) ))  ) ) 
                    { 
                    __context__.SourceCodeLine = 15;
                    OUT_NUM  .Value = (ushort) ( I ) ; 
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
        
        ENABLE = new Crestron.Logos.SplusObjects.DigitalInput( ENABLE__DigitalInput__, this );
        m_DigitalInputList.Add( ENABLE__DigitalInput__, ENABLE );
        
        INPUT = new InOutArray<DigitalInput>( 32, this );
        for( uint i = 0; i < 32; i++ )
        {
            INPUT[i+1] = new Crestron.Logos.SplusObjects.DigitalInput( INPUT__DigitalInput__ + i, INPUT__DigitalInput__, this );
            m_DigitalInputList.Add( INPUT__DigitalInput__ + i, INPUT[i+1] );
        }
        
        OUT_NUM = new Crestron.Logos.SplusObjects.AnalogOutput( OUT_NUM__AnalogSerialOutput__, this );
        m_AnalogOutputList.Add( OUT_NUM__AnalogSerialOutput__, OUT_NUM );
        
        
        for( uint i = 0; i < 32; i++ )
            INPUT[i+1].OnDigitalPush.Add( new InputChangeHandlerWrapper( INPUT_OnPush_0, false ) );
            
        
        _SplusNVRAM.PopulateCustomAttributeList( true );
        
        NVRAM = _SplusNVRAM;
        
    }
    
    public override void LogosSimplSharpInitialize()
    {
        
        
    }
    
    public UserModuleClass_EXTRON_SWITCHING_INPUT ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}
    
    
    
    
    const uint ENABLE__DigitalInput__ = 0;
    const uint INPUT__DigitalInput__ = 1;
    const uint OUT_NUM__AnalogSerialOutput__ = 0;
    
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
