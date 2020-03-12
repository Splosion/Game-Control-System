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

namespace UserModule_PANASONIC_VIERA_CONTROLLER
{
    public class UserModuleClass_PANASONIC_VIERA_CONTROLLER : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        Crestron.Logos.SplusObjects.StringInput IPADDRESS;
        Crestron.Logos.SplusObjects.StringInput COMMAND;
        Crestron.Logos.SplusObjects.DigitalInput SEND;
        SplusTcpClient TCPSOCKET;
        object SEND_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 17;
                Functions.SocketConnectClient ( TCPSOCKET , IPADDRESS ,  (ushort) ( 55000 ) ,  (ushort) ( 0 ) ) ; 
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object TCPSOCKET_OnSocketConnect_1 ( Object __Info__ )
    
        { 
        SocketEventInfo __SocketInfo__ = (SocketEventInfo)__Info__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SocketInfo__);
            
            __context__.SourceCodeLine = 22;
            Functions.SocketSend ( TCPSOCKET , COMMAND ) ; 
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SocketInfo__ ); }
        return this;
        
    }
    

public override void LogosSplusInitialize()
{
    SocketInfo __socketinfo__ = new SocketInfo( 1, this );
    InitialParametersClass.ResolveHostName = __socketinfo__.ResolveHostName;
    _SplusNVRAM = new SplusNVRAM( this );
    TCPSOCKET  = new SplusTcpClient ( 2000, this );
    
    SEND = new Crestron.Logos.SplusObjects.DigitalInput( SEND__DigitalInput__, this );
    m_DigitalInputList.Add( SEND__DigitalInput__, SEND );
    
    IPADDRESS = new Crestron.Logos.SplusObjects.StringInput( IPADDRESS__AnalogSerialInput__, 15, this );
    m_StringInputList.Add( IPADDRESS__AnalogSerialInput__, IPADDRESS );
    
    COMMAND = new Crestron.Logos.SplusObjects.StringInput( COMMAND__AnalogSerialInput__, 1024, this );
    m_StringInputList.Add( COMMAND__AnalogSerialInput__, COMMAND );
    
    
    SEND.OnDigitalPush.Add( new InputChangeHandlerWrapper( SEND_OnPush_0, false ) );
    TCPSOCKET.OnSocketConnect.Add( new SocketHandlerWrapper( TCPSOCKET_OnSocketConnect_1, false ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    
    
}

public UserModuleClass_PANASONIC_VIERA_CONTROLLER ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint IPADDRESS__AnalogSerialInput__ = 0;
const uint COMMAND__AnalogSerialInput__ = 1;
const uint SEND__DigitalInput__ = 0;

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
