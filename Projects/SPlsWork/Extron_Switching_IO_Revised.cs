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

namespace UserModule_EXTRON_SWITCHING_IO_REVISED
{
    public class UserModuleClass_EXTRON_SWITCHING_IO_REVISED : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        StringParameter TYPE;
        Crestron.Logos.SplusObjects.DigitalInput ENABLE;
        Crestron.Logos.SplusObjects.AnalogInput INPUT;
        Crestron.Logos.SplusObjects.AnalogInput OUTPUT;
        Crestron.Logos.SplusObjects.StringOutput EXTRON_TX__DOLLAR__;
        ushort IN = 0;
        ushort PREV_IN = 0;
        ushort OUT = 0;
        ushort PREV_OUT = 0;
        object INPUT_OnChange_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 19;
                IN = (ushort) ( INPUT  .UshortValue ) ; 
                __context__.SourceCodeLine = 20;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( ENABLE  .Value ) && Functions.TestForTrue ( Functions.BoolToInt ( OUT > 0 ) )) ) ) && Functions.TestForTrue ( Functions.BoolToInt (IN != PREV_IN) )) ) ) && Functions.TestForTrue ( Functions.BoolToInt ( IN <= 32 ) )) ))  ) ) 
                    { 
                    __context__.SourceCodeLine = 22;
                    EXTRON_TX__DOLLAR__  .UpdateValue ( Functions.ItoA (  (int) ( IN ) ) + "*" + Functions.ItoA (  (int) ( OUT ) ) + TYPE  ) ; 
                    __context__.SourceCodeLine = 23;
                    PREV_IN = (ushort) ( IN ) ; 
                    __context__.SourceCodeLine = 24;
                    IN = (ushort) ( 0 ) ; 
                    } 
                
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object OUTPUT_OnChange_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 29;
            OUT = (ushort) ( OUTPUT  .UshortValue ) ; 
            __context__.SourceCodeLine = 30;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( ENABLE  .Value ) && Functions.TestForTrue ( Functions.BoolToInt ( IN > 0 ) )) ) ) && Functions.TestForTrue ( Functions.BoolToInt (OUT != PREV_OUT) )) ) ) && Functions.TestForTrue ( Functions.BoolToInt ( OUT <= 32 ) )) ))  ) ) 
                { 
                __context__.SourceCodeLine = 32;
                EXTRON_TX__DOLLAR__  .UpdateValue ( Functions.ItoA (  (int) ( IN ) ) + "*" + Functions.ItoA (  (int) ( OUT ) ) + TYPE  ) ; 
                __context__.SourceCodeLine = 33;
                PREV_OUT = (ushort) ( OUT ) ; 
                __context__.SourceCodeLine = 34;
                OUT = (ushort) ( 0 ) ; 
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
    
    INPUT = new Crestron.Logos.SplusObjects.AnalogInput( INPUT__AnalogSerialInput__, this );
    m_AnalogInputList.Add( INPUT__AnalogSerialInput__, INPUT );
    
    OUTPUT = new Crestron.Logos.SplusObjects.AnalogInput( OUTPUT__AnalogSerialInput__, this );
    m_AnalogInputList.Add( OUTPUT__AnalogSerialInput__, OUTPUT );
    
    EXTRON_TX__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( EXTRON_TX__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( EXTRON_TX__DOLLAR____AnalogSerialOutput__, EXTRON_TX__DOLLAR__ );
    
    TYPE = new StringParameter( TYPE__Parameter__, this );
    m_ParameterList.Add( TYPE__Parameter__, TYPE );
    
    
    INPUT.OnAnalogChange.Add( new InputChangeHandlerWrapper( INPUT_OnChange_0, false ) );
    OUTPUT.OnAnalogChange.Add( new InputChangeHandlerWrapper( OUTPUT_OnChange_1, false ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    
    
}

public UserModuleClass_EXTRON_SWITCHING_IO_REVISED ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint TYPE__Parameter__ = 10;
const uint ENABLE__DigitalInput__ = 0;
const uint INPUT__AnalogSerialInput__ = 0;
const uint OUTPUT__AnalogSerialInput__ = 1;
const uint EXTRON_TX__DOLLAR____AnalogSerialOutput__ = 0;

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
