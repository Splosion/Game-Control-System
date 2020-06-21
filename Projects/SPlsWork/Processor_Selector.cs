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

namespace UserModule_PROCESSOR_SELECTOR
{
    public class UserModuleClass_PROCESSOR_SELECTOR : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        Crestron.Logos.SplusObjects.DigitalInput SELECT;
        Crestron.Logos.SplusObjects.DigitalInput RESETPROCESSOR;
        UShortParameter PROCESSOR01INPUT;
        UShortParameter PROCESSOR02INPUT;
        UShortParameter PROCESSOR01OUTPUT;
        UShortParameter PROCESSOR02OUTPUT;
        Crestron.Logos.SplusObjects.AnalogOutput SELECTEDINPUT;
        Crestron.Logos.SplusObjects.AnalogOutput SELECTEDOUTPUT;
        ushort SWITCHED = 0;
        object SELECT_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 26;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt (SWITCHED == 1))  ) ) 
                    { 
                    __context__.SourceCodeLine = 28;
                    SELECTEDOUTPUT  .Value = (ushort) ( PROCESSOR02OUTPUT  .Value ) ; 
                    __context__.SourceCodeLine = 29;
                    SELECTEDINPUT  .Value = (ushort) ( PROCESSOR02INPUT  .Value ) ; 
                    __context__.SourceCodeLine = 30;
                    SWITCHED = (ushort) ( 0 ) ; 
                    } 
                
                else 
                    { 
                    __context__.SourceCodeLine = 34;
                    SELECTEDOUTPUT  .Value = (ushort) ( PROCESSOR02OUTPUT  .Value ) ; 
                    __context__.SourceCodeLine = 35;
                    SELECTEDINPUT  .Value = (ushort) ( PROCESSOR02INPUT  .Value ) ; 
                    __context__.SourceCodeLine = 36;
                    SWITCHED = (ushort) ( 1 ) ; 
                    } 
                
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object RESETPROCESSOR_OnPush_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 42;
            SWITCHED = (ushort) ( 0 ) ; 
            __context__.SourceCodeLine = 43;
            SELECTEDOUTPUT  .Value = (ushort) ( 0 ) ; 
            __context__.SourceCodeLine = 44;
            SELECTEDINPUT  .Value = (ushort) ( 0 ) ; 
            
            
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
    
    SELECT = new Crestron.Logos.SplusObjects.DigitalInput( SELECT__DigitalInput__, this );
    m_DigitalInputList.Add( SELECT__DigitalInput__, SELECT );
    
    RESETPROCESSOR = new Crestron.Logos.SplusObjects.DigitalInput( RESETPROCESSOR__DigitalInput__, this );
    m_DigitalInputList.Add( RESETPROCESSOR__DigitalInput__, RESETPROCESSOR );
    
    SELECTEDINPUT = new Crestron.Logos.SplusObjects.AnalogOutput( SELECTEDINPUT__AnalogSerialOutput__, this );
    m_AnalogOutputList.Add( SELECTEDINPUT__AnalogSerialOutput__, SELECTEDINPUT );
    
    SELECTEDOUTPUT = new Crestron.Logos.SplusObjects.AnalogOutput( SELECTEDOUTPUT__AnalogSerialOutput__, this );
    m_AnalogOutputList.Add( SELECTEDOUTPUT__AnalogSerialOutput__, SELECTEDOUTPUT );
    
    PROCESSOR01INPUT = new UShortParameter( PROCESSOR01INPUT__Parameter__, this );
    m_ParameterList.Add( PROCESSOR01INPUT__Parameter__, PROCESSOR01INPUT );
    
    PROCESSOR02INPUT = new UShortParameter( PROCESSOR02INPUT__Parameter__, this );
    m_ParameterList.Add( PROCESSOR02INPUT__Parameter__, PROCESSOR02INPUT );
    
    PROCESSOR01OUTPUT = new UShortParameter( PROCESSOR01OUTPUT__Parameter__, this );
    m_ParameterList.Add( PROCESSOR01OUTPUT__Parameter__, PROCESSOR01OUTPUT );
    
    PROCESSOR02OUTPUT = new UShortParameter( PROCESSOR02OUTPUT__Parameter__, this );
    m_ParameterList.Add( PROCESSOR02OUTPUT__Parameter__, PROCESSOR02OUTPUT );
    
    
    SELECT.OnDigitalPush.Add( new InputChangeHandlerWrapper( SELECT_OnPush_0, false ) );
    RESETPROCESSOR.OnDigitalPush.Add( new InputChangeHandlerWrapper( RESETPROCESSOR_OnPush_1, false ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    
    
}

public UserModuleClass_PROCESSOR_SELECTOR ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint SELECT__DigitalInput__ = 0;
const uint RESETPROCESSOR__DigitalInput__ = 1;
const uint PROCESSOR01INPUT__Parameter__ = 10;
const uint PROCESSOR02INPUT__Parameter__ = 11;
const uint PROCESSOR01OUTPUT__Parameter__ = 12;
const uint PROCESSOR02OUTPUT__Parameter__ = 13;
const uint SELECTEDINPUT__AnalogSerialOutput__ = 0;
const uint SELECTEDOUTPUT__AnalogSerialOutput__ = 1;

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
