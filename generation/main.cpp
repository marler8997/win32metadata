#define _WINSOCKAPI_
#define SECURITY_WIN32

#define QCC_OS_GROUP_WINDOWS

#include <windows.h>
#include <sdkddkver.h>

#include <WinSock2.h>
#include <lmcons.h>
#include <dde.h>
#include <winscard.h>
#include <winspool.h>

#include <winternl.h>

// NTSecAPI.h seems to be preferred to ntlsa. The functions in ntlsa.h on msdn either point to ntsecapi.h
// or they aren't documented
#define _NTDEF_
#include <NTSecAPI.h>
//#include <ntlsa.h>

#include <aclapi.h>
#include <wct.h>
#include <evntrace.h>
#include <sddl.h>
#include <appmgmt.h>
#include <perflib.h>
#include <winreg.h>
#include <winsafer.h>
#include <enclaveapi.h>
#include <memoryapi.h>
#include <pathcch.h>
#include <roerrorapi.h>
#include <inspectable.h>
#include <cfgmgr32.h>
#include <gamingdeviceinformation.h>
#include <Shlwapi.h>
#include <shellscalingapi.h>
#include <Shlobj.h>
#include <Shlobj_core.h>
#include <authz.h>
#include <bcrypt.h>
#include <prsht.h>
#include <dpa_dsa.h>
#include <CommCtrl.h>
#include <debugapi.h>
#include <LmDfs.h>
#include <Lm.h>
#include <windns.h>
#include <NtDsAPI.h>
#include <fltUser.h>
#include <wingdi.h>
#include <utilapiset.h>
#include <WinBase.h>
#include <windowsceip.h>
#include <threadpoollegacyapiset.h>
#include <appmodel.h>
#include <processenv.h>
#include <winnls.h>
#include <TlHelp32.h>
#include <fibersapi.h>
#include <Psapi.h>
#include <lzexpand.h>
#include <ProcessSnapshot.h>
#include <WerApi.h>
#include <NspAPI.h>
#include <ncryptprotect.h>
#include <ip2string.h>
#include <objbase.h>
#include <ObjIdl.h>
#include <combaseapi.h>
#include <ole2.h>
#include <OAIdl.h>
#include <Rpc.h>
#include <SetupAPI.h>
#include <shellapi.h>
#include <WinUser.h>
#include <UserEnv.h>
#include <websocket.h>
#include <winver.h>
#include <winhttp.h>
//#include <WinBer.h>
#include <Winldap.h>
#include <Ws2spi.h>
#include <WtsApi32.h>
#include <XmlLite.h>
#include <wincred.h>
#include <evntcons.h>
#include <evntprov.h>
#include <featurestagingapi.h>
#include <libloaderapi.h>
#include <libloaderapi2.h>
#include <compressapi.h>
#include <roapi.h>
#include <robuffer.h>
#include <roparameterizediid.h>
// SDK is missing cor.h
//#include <rometadataresolution.h>
#include <roregistrationapi.h>
#include <winstring.h>
#include <devquery.h>
#include <swdevice.h>
#include <powerbase.h>
#include <shcore.h>
#include <IsolatedAppLauncher.h>
#include <fci.h>
#include <mssip.h>
#include <fltdefs.h>
#include <oobenotification.h>
#include <DsGetDC.h>
#include <MSWSock.h>
#include <WS2tcpip.h>
#include <iphlpapi.h>
#include <netioapi.h>
#include <IcmpAPI.h>
#include <WinBer.h>
#include <tokenbinding.h>
#include <tdh.h>
#include <sspi.h>
#include <NTSecPKG.h>
#include <secext.h>
#include <wincrypt.h>
#include <fdi.h>
#include <Midles.h>
#include <LMat.h>
#include <OleCtl.h>
#include <Npapi.h>
#include <powersetting.h>
#include <powrprof.h>
#include <rpcssl.h>
#include <ShObjIdl_core.h>
#include <statehelpers.h>
#include <webservices.h>
//#include <minidumpapiset.h>
#include <rtlsupportapi.h>
#include <expandedresources.h>
#include <gamingtcui.h>
#include <jsrt.h>
#include <jsrt9.h>
//#include <DispatcherQueue.h>
#include <DhcpCSdk.h>
#include <dhcpsapi.h>
#include <madcapcl.h>
#include <Dhcpv6cSdk.h>
#include <DirectML.h>
#include <WinDNS.h>
#include <DSRole.h>
#include <esent.h>
#include <wlanapi.h>
#include <UIAutomationClient.h>
#include <UIAutomationCoreApi.h>
#include <hidsdi.h>
#include <hidpi.h>
#include <xapo.h>
#include <hrtfapoapi.h>
#include <icu.h>
#include <icucommon.h>
#include <icui18n.h>
#include <recapis.h>
#include <iphlpapi.h>
#include <errhandlingapi.h>
#include <mfidl.h>
#include <wmcontainer.h>
#include <functiondiscoveryprovider.h>
#include <mfapi.h>
#include <mfidl.h>
#include <mfobjects.h>
#include <mfreadwrite.h>
#include <mmdeviceapi.h>
#include <alljoyn_c\AboutData.h>
#include <alljoyn_c\AboutObj.h>
#include <alljoyn_c\AboutObjectDescription.h>
#include <alljoyn_c\AboutProxy.h>
#include <alljoyn_c\ApplicationStateListener.h>
#include <alljoyn_c\AuthListener.h>
#include <alljoyn_c\AutoPinger.h>
#include <alljoyn_c\BusAttachment.h>
#include <alljoyn_c\BusListener.h>
#include <alljoyn_c\BusObject.h>
#include <alljoyn_c\version.h>
#include <alljoyn_c\Init.h>
#include <alljoyn_c\InterfaceDescription.h>
#include <alljoyn_c\KeyStoreListener.h>
#include <alljoyn_c\Message.h>
#include <alljoyn_c\MsgArg.h>
#include <alljoyn_c\Observer.h>
#include <alljoyn_c\PermissionConfigurationListener.h>
#include <alljoyn_c\PermissionConfigurator.h>
#include <alljoyn_c\AutoPinger.h>
#include <alljoyn_c\ProxyBusObject.h>
#include <alljoyn_c\SecurityApplicationProxy.h>
#include <alljoyn_c\SessionListener.h>
#include <alljoyn_c\Session.h>

#include <alljoyn_c\AjAPI.h>
#include <MSAJTransport.h>
#include <Icm.h>
#include <compstui.h>
#include <winddiui.h>
#include <printoem.h>
//#include <RpcProxy.h>
#include <PerceptionDevice.h>
#include <propvarutil.h>
#include <DbgHelp.h>
#include <UIAutomationCoreApi.h>
#include <webauthn.h>
#include <MLOperatorAuthor.h>
#include <socketapi.h>
#include <wincodec.h>
#include <wincodecsdk.h>
#include <winsafer.h>
#include <wlanapi.h>
#include <WS2spi.h>
#include <xaudio2fx.h>
#include <xaudio2.h>

#if 0
typedef struct IRpcStubBufferVtbl
{
    BEGIN_INTERFACE

        HRESULT(STDMETHODCALLTYPE* QueryInterface)(
            IRpcStubBuffer* This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void** ppvObject);

    ULONG(STDMETHODCALLTYPE* AddRef)(
        IRpcStubBuffer* This);

    ULONG(STDMETHODCALLTYPE* Release)(
        IRpcStubBuffer* This);

    HRESULT(STDMETHODCALLTYPE* Connect)(
        IRpcStubBuffer* This,
        /* [annotation][in] */
        _In_  IUnknown* pUnkServer);

    void (STDMETHODCALLTYPE* Disconnect)(
        IRpcStubBuffer* This);

    HRESULT(STDMETHODCALLTYPE* Invoke)(
        IRpcStubBuffer* This,
        /* [annotation][out][in] */
        _Inout_  RPCOLEMESSAGE* _prpcmsg,
        /* [annotation][in] */
        _In_  IRpcChannelBuffer* _pRpcChannelBuffer);

    IRpcStubBuffer* (STDMETHODCALLTYPE* IsIIDSupported)(
        IRpcStubBuffer* This,
        /* [annotation][in] */
        _In_  REFIID riid);

    ULONG(STDMETHODCALLTYPE* CountRefs)(
        IRpcStubBuffer* This);

    HRESULT(STDMETHODCALLTYPE* DebugServerQueryInterface)(
        IRpcStubBuffer* This,
        /* [annotation][out] */
        _Outptr_  void** ppv);

    void (STDMETHODCALLTYPE* DebugServerRelease)(
        IRpcStubBuffer* This,
        /* [annotation][in] */
        _In_  void* pv);

    END_INTERFACE
} IRpcStubBufferVtbl;

typedef struct IPSFactoryBufferVtbl
{
    BEGIN_INTERFACE

        HRESULT(STDMETHODCALLTYPE* QueryInterface)(
            IPSFactoryBuffer* This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void** ppvObject);

    ULONG(STDMETHODCALLTYPE* AddRef)(
        IPSFactoryBuffer* This);

    ULONG(STDMETHODCALLTYPE* Release)(
        IPSFactoryBuffer* This);

    HRESULT(STDMETHODCALLTYPE* CreateProxy)(
        IPSFactoryBuffer* This,
        /* [annotation][in] */
        _In_  IUnknown* pUnkOuter,
        /* [annotation][in] */
        _In_  REFIID riid,
        /* [annotation][out] */
        _Outptr_  IRpcProxyBuffer** ppProxy,
        /* [annotation][out] */
        _Outptr_  void** ppv);

    HRESULT(STDMETHODCALLTYPE* CreateStub)(
        IPSFactoryBuffer* This,
        /* [annotation][in] */
        _In_  REFIID riid,
        /* [annotation][unique][in] */
        _In_opt_  IUnknown* pUnkServer,
        /* [annotation][out] */
        _Outptr_  IRpcStubBuffer** ppStub);

    END_INTERFACE
} IPSFactoryBufferVtbl;

#include <RpcProxy.h>
#endif

