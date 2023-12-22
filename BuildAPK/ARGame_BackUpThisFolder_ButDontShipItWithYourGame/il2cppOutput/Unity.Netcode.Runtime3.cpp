#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.UInt64>
struct Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C;
// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient>
struct Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>
struct Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64>
struct Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A;
// System.Collections.Generic.IReadOnlyList`1<Unity.Netcode.NetworkClient>
struct IReadOnlyList_1_t0179361F5E46124A5F314B3F8A3BBF6C9160E9D7;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient>
struct List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Byte>
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32>
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkEvent>
struct UnsafeList_1_tFD7DB6B00333C2C114D553F48DA91C512E033F99;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkDriver/Connection>
struct UnsafeList_1_tF90CD1BACB3990B533D04C98C2C90161BD7F9C20;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl>
struct UnsafeList_1_t557C9C31121D73D732851DA0465D2D22CFFBF099;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60;
// Unity.Netcode.CustomMessagingManager
struct CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746;
// UnityEngine.Networking.HostTopology
struct HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F;
// Unity.Netcode.IDeferredMessageManager
struct IDeferredMessageManager_t4090EBA76E1C9A5B841E21584A74976F383AD793;
// Unity.Netcode.INetworkMetrics
struct INetworkMetrics_tE2C13758A950A5C77D2682C15F47914B13AC1C41;
// Unity.Netcode.MessagingSystem
struct MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D;
// Unity.Collections.NativeQueueBlockPoolData
struct NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87;
// Unity.Collections.NativeQueueData
struct NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52;
// Unity.Netcode.NetworkBehaviourUpdater
struct NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C;
// Unity.Netcode.NetworkClient
struct NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64;
// Unity.Netcode.NetworkConfig
struct NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113;
// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468;
// Unity.Netcode.NetworkObject
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366;
// Unity.Netcode.NetworkPrefabHandler
struct NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE;
// Unity.Netcode.NetworkSceneManager
struct NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC;
// Unity.Netcode.NetworkSpawnManager
struct NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D;
// Unity.Netcode.NetworkTickSystem
struct NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A;
// Unity.Netcode.NetworkTimeSystem
struct NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2;
// Unity.Netcode.NetworkTransport
struct NetworkTransport_t55E07951299283974C86476F46CC977780560B64;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// Unity.Netcode.Transports.UNET.UNetTransport
struct UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// Unity.Networking.Transport.NetworkDriver/Concurrent
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14;
// Unity.Netcode.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0D7218F0DC5E17555FA54256075C4DEAE4B73450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9F8C0C6332727DDF63C389AC074D96B4E710BE72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral644832CF60047B3D9FAB0A389B880AEF5B87FE70;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteralDF4ADD2D57F4BAB0951244413CF80823252C53CF;
IL2CPP_EXTERN_C String_t* _stringLiteralE41C5B6E51FFAC441D1612E7E7728CE5C169F3A4;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5_RuntimeMethod_var;
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14;;
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com;
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com;;
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke;
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <NetStats_TypeRegistration>
struct U3CNetStats_TypeRegistrationU3E_t1F3590BCBEC2728915450AFB1D83F696572C796E  : public RuntimeObject
{
};

// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60  : public RuntimeObject
{
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_0;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_1;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_8;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_11;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_13;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_16;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_17;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_18;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_19;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_20;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_21;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_22;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_25;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* ___m_Channels_26;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* ___m_SharedOrderChannels_27;
};

// UnityEngine.Networking.HostTopology
struct HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F  : public RuntimeObject
{
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;
};

// Unity.Netcode.NetworkClient
struct NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64  : public RuntimeObject
{
	// System.UInt64 Unity.Netcode.NetworkClient::ClientId
	uint64_t ___ClientId_0;
	// Unity.Netcode.NetworkObject Unity.Netcode.NetworkClient::PlayerObject
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___PlayerObject_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int64>
struct NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkPipelineStage>
struct NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeQueue`1/ParallelWriter<Unity.Networking.Transport.QueuedSendMessage>
struct ParallelWriter_tD2337D6A048735D05F7C0698B7FEEDAD7153DE97 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1/ParallelWriter::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1/ParallelWriter::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// System.Int32 Unity.Collections.NativeQueue`1/ParallelWriter::m_ThreadIndex
	int32_t ___m_ThreadIndex_2;
};

// Unity.Collections.NativeQueue`1/ParallelWriter<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>
struct ParallelWriter_t55B873B53088E2C14EC0CE7DD3ECA37705CB04CC 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1/ParallelWriter::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1/ParallelWriter::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// System.Int32 Unity.Collections.NativeQueue`1/ParallelWriter::m_ThreadIndex
	int32_t ___m_ThreadIndex_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Unity.Collections.FixedBytes16
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte Unity.Collections.FixedBytes16::byte0000
					uint8_t ___byte0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_1_OffsetPadding[1];
					// System.Byte Unity.Collections.FixedBytes16::byte0001
					uint8_t ___byte0001_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_2_OffsetPadding[2];
					// System.Byte Unity.Collections.FixedBytes16::byte0002
					uint8_t ___byte0002_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_3_OffsetPadding[3];
					// System.Byte Unity.Collections.FixedBytes16::byte0003
					uint8_t ___byte0003_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_4_OffsetPadding[4];
					// System.Byte Unity.Collections.FixedBytes16::byte0004
					uint8_t ___byte0004_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_5_OffsetPadding[5];
					// System.Byte Unity.Collections.FixedBytes16::byte0005
					uint8_t ___byte0005_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_6_OffsetPadding[6];
					// System.Byte Unity.Collections.FixedBytes16::byte0006
					uint8_t ___byte0006_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_6_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_7_OffsetPadding[7];
					// System.Byte Unity.Collections.FixedBytes16::byte0007
					uint8_t ___byte0007_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_7_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_8_OffsetPadding[8];
					// System.Byte Unity.Collections.FixedBytes16::byte0008
					uint8_t ___byte0008_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_8_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_9_OffsetPadding[9];
					// System.Byte Unity.Collections.FixedBytes16::byte0009
					uint8_t ___byte0009_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_9_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_10_OffsetPadding[10];
					// System.Byte Unity.Collections.FixedBytes16::byte0010
					uint8_t ___byte0010_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_10_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_11_OffsetPadding[11];
					// System.Byte Unity.Collections.FixedBytes16::byte0011
					uint8_t ___byte0011_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_11_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_12_OffsetPadding[12];
					// System.Byte Unity.Collections.FixedBytes16::byte0012
					uint8_t ___byte0012_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_12_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_13_OffsetPadding[13];
					// System.Byte Unity.Collections.FixedBytes16::byte0013
					uint8_t ___byte0013_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_13_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_14_OffsetPadding[14];
					// System.Byte Unity.Collections.FixedBytes16::byte0014
					uint8_t ___byte0014_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_14_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_15_OffsetPadding[15];
					// System.Byte Unity.Collections.FixedBytes16::byte0015
					uint8_t ___byte0015_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_15_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_15_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Unity.Networking.Transport.NetworkConnection
struct NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 
{
	// System.Int32 Unity.Networking.Transport.NetworkConnection::m_NetworkId
	int32_t ___m_NetworkId_0;
	// System.Int32 Unity.Networking.Transport.NetworkConnection::m_NetworkVersion
	int32_t ___m_NetworkVersion_1;
};

// Unity.Networking.Transport.NetworkPipeline
struct NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 
{
	// System.Int32 Unity.Networking.Transport.NetworkPipeline::Id
	int32_t ___Id_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD__padding[256];
	};
};

// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Index
	uint16_t ___Index_0;
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Version
	uint16_t ___Version_1;
};

// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress
struct Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data0
			uint8_t ___data0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___data0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data1_1_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data1
			uint8_t ___data1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___data1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data2_2_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data2
			uint8_t ___data2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___data2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data3_3_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data3
			uint8_t ___data3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___data3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data4_4_OffsetPadding[4];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data4
			uint8_t ___data4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___data4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data5_5_OffsetPadding[5];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data5
			uint8_t ___data5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___data5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data6_6_OffsetPadding[6];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data6
			uint8_t ___data6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___data6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data7_7_OffsetPadding[7];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data7
			uint8_t ___data7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___data7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data8_8_OffsetPadding[8];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data8
			uint8_t ___data8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___data8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data9_9_OffsetPadding[9];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data9
			uint8_t ___data9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___data9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data10_10_OffsetPadding[10];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data10
			uint8_t ___data10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___data10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data11_11_OffsetPadding[11];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data11
			uint8_t ___data11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___data11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data12_12_OffsetPadding[12];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data12
			uint8_t ___data12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___data12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data13_13_OffsetPadding[13];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data13
			uint8_t ___data13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___data13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data14_14_OffsetPadding[14];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data14
			uint8_t ___data14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___data14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data15_15_OffsetPadding[15];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data15
			uint8_t ___data15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___data15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_0
			uint8_t ___ipv6_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv6_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_1_17_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_1
			uint8_t ___ipv6_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_1_17_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv6_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_2_18_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_2
			uint8_t ___ipv6_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_2_18_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv6_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_3_19_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_3
			uint8_t ___ipv6_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_3_19_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv6_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_4_20_OffsetPadding[4];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_4
			uint8_t ___ipv6_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_4_20_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___ipv6_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_5_21_OffsetPadding[5];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_5
			uint8_t ___ipv6_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_5_21_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___ipv6_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_6_22_OffsetPadding[6];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_6
			uint8_t ___ipv6_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_6_22_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___ipv6_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_7_23_OffsetPadding[7];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_7
			uint8_t ___ipv6_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_7_23_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___ipv6_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_8_24_OffsetPadding[8];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_8
			uint8_t ___ipv6_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_8_24_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___ipv6_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_9_25_OffsetPadding[9];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_9
			uint8_t ___ipv6_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_9_25_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___ipv6_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_10_26_OffsetPadding[10];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_10
			uint8_t ___ipv6_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_10_26_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___ipv6_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_11_27_OffsetPadding[11];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_11
			uint8_t ___ipv6_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_11_27_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___ipv6_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_12_28_OffsetPadding[12];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_12
			uint8_t ___ipv6_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_12_28_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___ipv6_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_13_29_OffsetPadding[13];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_13
			uint8_t ___ipv6_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_13_29_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___ipv6_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_14_30_OffsetPadding[14];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_14
			uint8_t ___ipv6_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_14_30_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___ipv6_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_15_31_OffsetPadding[15];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_15
			uint8_t ___ipv6_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_15_31_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___ipv6_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_0
			uint8_t ___ipv4_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv4_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_1_33_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_1
			uint8_t ___ipv4_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_1_33_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv4_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_2_34_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_2
			uint8_t ___ipv4_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_2_34_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv4_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_3_35_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_3
			uint8_t ___ipv4_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_3_35_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv4_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port0_36_OffsetPadding[16];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::port0
			uint8_t ___port0_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port0_36_OffsetPadding_forAlignmentOnly[16];
			uint8_t ___port0_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port1_37_OffsetPadding[17];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::port1
			uint8_t ___port1_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port1_37_OffsetPadding_forAlignmentOnly[17];
			uint8_t ___port1_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___family_38_OffsetPadding[18];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::family
			uint8_t ___family_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___family_38_OffsetPadding_forAlignmentOnly[18];
			uint8_t ___family_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____padding_39_OffsetPadding[19];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::_padding
			uint8_t ____padding_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____padding_39_OffsetPadding_forAlignmentOnly[19];
			uint8_t ____padding_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding[20];
			// System.UInt32 Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_scope_id
			uint32_t ___ipv6_scope_id_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding_forAlignmentOnly[20];
			uint32_t ___ipv6_scope_id_40_forAlignmentOnly;
		};
	};
};

// Unity.Networking.Transport.DataStreamWriter/StreamData
struct StreamData_tF9752A5347148C4C2FD2C07D204FABE9539D1E94 
{
	// System.Byte* Unity.Networking.Transport.DataStreamWriter/StreamData::buffer
	uint8_t* ___buffer_0;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::length
	int32_t ___length_1;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::capacity
	int32_t ___capacity_2;
	// System.UInt64 Unity.Networking.Transport.DataStreamWriter/StreamData::bitBuffer
	uint64_t ___bitBuffer_3;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::bitIndex
	int32_t ___bitIndex_4;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::failedWrites
	int32_t ___failedWrites_5;
};

// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 
{
	// System.String Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::Address
	String_t* ___Address_0;
	// System.UInt16 Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::Port
	uint16_t ___Port_1;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::ServerListenAddress
	String_t* ___ServerListenAddress_2;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke
{
	char* ___Address_0;
	uint16_t ___Port_1;
	char* ___ServerListenAddress_2;
};
// Native definition for COM marshalling of Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com
{
	Il2CppChar* ___Address_0;
	uint16_t ___Port_1;
	Il2CppChar* ___ServerListenAddress_2;
};

// Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache
struct PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7 
{
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketsReceived
	int32_t ___PacketsReceived_0;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketsDropped
	int32_t ___PacketsDropped_1;
	// System.Single Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketLoss
	float ___PacketLoss_2;
};

// Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters
struct SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 
{
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketDelayMS
	int32_t ___PacketDelayMS_0;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketJitterMS
	int32_t ___PacketJitterMS_1;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketDropRate
	int32_t ___PacketDropRate_2;
};

// Unity.Networking.Transport.NetworkEventQueue/Concurrent/ConcurrentConnectionQueue
struct ConcurrentConnectionQueue_tE38C2DE6E083563C24985FECE98CFCF061E80C78 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32>* Unity.Networking.Transport.NetworkEventQueue/Concurrent/ConcurrentConnectionQueue::m_ConnectionEventHeadTail
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___m_ConnectionEventHeadTail_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>
struct FunctionPointer_1_tF29FF6D2564E315434ED47AB1554C8096BDB3B3A 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>
struct FunctionPointer_1_t8C37DE1737CA4B219489A8BE872435F8391F4F08 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>
struct FunctionPointer_1_t2B11019D68001BBA761F297DF394B647E9B2D0AF 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>
struct FunctionPointer_1_tE199B9295009A8E22A29B6DDD22ED499A663A39B 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>
struct FunctionPointer_1_t04915FE164A4EB6B97CE508C2D62CCB1830EDD86 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>
struct FunctionPointer_1_t10B538976246CA89EE16B10A9A3F981194F98C59 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>
struct FunctionPointer_1_t87DC6AA7478438FC2A893CEFC30932DB880EECFE 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>
struct FunctionPointer_1_t92B1E9993FD30276E18F8D355C528D0024CE9CEF 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>
struct FunctionPointer_1_t646F6606413775C943F0F4782FBB82DED8FB3123 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>
struct FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>
struct FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>
struct FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Collections.NativeList`1<System.Byte>
struct NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<System.Int32>
struct NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkEvent>
struct NativeList_1_t163E4B6B8B23750406A8688DA1D7FD433EF9EDC1 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_tFD7DB6B00333C2C114D553F48DA91C512E033F99* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkDriver/Connection>
struct NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_tF90CD1BACB3990B533D04C98C2C90161BD7F9C20* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl>
struct NativeList_1_t7D0C4FADF421E663CFE4731E9B320F919701A66C 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t557C9C31121D73D732851DA0465D2D22CFFBF099* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tD21904779CC32A6177B4E0D9832E2914FD13FFDA  : public RuntimeObject
{
};

// Unity.Networking.Transport.DataStreamWriter
struct DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA 
{
	// Unity.Networking.Transport.DataStreamWriter/StreamData Unity.Networking.Transport.DataStreamWriter::m_Data
	StreamData_tF9752A5347148C4C2FD2C07D204FABE9539D1E94 ___m_Data_0;
	// System.IntPtr Unity.Networking.Transport.DataStreamWriter::m_SendHandleData
	intptr_t ___m_SendHandleData_1;
};

// Unity.Collections.FixedBytes126
struct FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_3_OffsetPadding[48];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0080
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0096
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0112_7_OffsetPadding[112];
					// System.Byte Unity.Collections.FixedBytes126::byte0112
					uint8_t ___byte0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0112_7_OffsetPadding_forAlignmentOnly[112];
					uint8_t ___byte0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0113_8_OffsetPadding[113];
					// System.Byte Unity.Collections.FixedBytes126::byte0113
					uint8_t ___byte0113_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0113_8_OffsetPadding_forAlignmentOnly[113];
					uint8_t ___byte0113_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0114_9_OffsetPadding[114];
					// System.Byte Unity.Collections.FixedBytes126::byte0114
					uint8_t ___byte0114_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0114_9_OffsetPadding_forAlignmentOnly[114];
					uint8_t ___byte0114_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0115_10_OffsetPadding[115];
					// System.Byte Unity.Collections.FixedBytes126::byte0115
					uint8_t ___byte0115_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0115_10_OffsetPadding_forAlignmentOnly[115];
					uint8_t ___byte0115_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0116_11_OffsetPadding[116];
					// System.Byte Unity.Collections.FixedBytes126::byte0116
					uint8_t ___byte0116_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0116_11_OffsetPadding_forAlignmentOnly[116];
					uint8_t ___byte0116_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0117_12_OffsetPadding[117];
					// System.Byte Unity.Collections.FixedBytes126::byte0117
					uint8_t ___byte0117_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0117_12_OffsetPadding_forAlignmentOnly[117];
					uint8_t ___byte0117_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0118_13_OffsetPadding[118];
					// System.Byte Unity.Collections.FixedBytes126::byte0118
					uint8_t ___byte0118_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0118_13_OffsetPadding_forAlignmentOnly[118];
					uint8_t ___byte0118_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0119_14_OffsetPadding[119];
					// System.Byte Unity.Collections.FixedBytes126::byte0119
					uint8_t ___byte0119_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0119_14_OffsetPadding_forAlignmentOnly[119];
					uint8_t ___byte0119_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0120_15_OffsetPadding[120];
					// System.Byte Unity.Collections.FixedBytes126::byte0120
					uint8_t ___byte0120_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0120_15_OffsetPadding_forAlignmentOnly[120];
					uint8_t ___byte0120_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0121_16_OffsetPadding[121];
					// System.Byte Unity.Collections.FixedBytes126::byte0121
					uint8_t ___byte0121_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0121_16_OffsetPadding_forAlignmentOnly[121];
					uint8_t ___byte0121_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0122_17_OffsetPadding[122];
					// System.Byte Unity.Collections.FixedBytes126::byte0122
					uint8_t ___byte0122_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0122_17_OffsetPadding_forAlignmentOnly[122];
					uint8_t ___byte0122_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0123_18_OffsetPadding[123];
					// System.Byte Unity.Collections.FixedBytes126::byte0123
					uint8_t ___byte0123_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0123_18_OffsetPadding_forAlignmentOnly[123];
					uint8_t ___byte0123_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0124_19_OffsetPadding[124];
					// System.Byte Unity.Collections.FixedBytes126::byte0124
					uint8_t ___byte0124_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0124_19_OffsetPadding_forAlignmentOnly[124];
					uint8_t ___byte0124_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0125_20_OffsetPadding[125];
					// System.Byte Unity.Collections.FixedBytes126::byte0125
					uint8_t ___byte0125_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0125_20_OffsetPadding_forAlignmentOnly[125];
					uint8_t ___byte0125_20_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989__padding[126];
	};
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Unity.Networking.Transport.NetworkEndPoint
struct NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 
{
	// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress Unity.Networking.Transport.NetworkEndPoint::rawNetworkAddress
	Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 ___rawNetworkAddress_5;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Netcode.Transports.UTP.UnityTransport/SendTarget
struct SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 
{
	// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::ClientId
	uint64_t ___ClientId_0;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::NetworkPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___NetworkPipeline_1;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>
struct TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tF29FF6D2564E315434ED47AB1554C8096BDB3B3A ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>
struct TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t8C37DE1737CA4B219489A8BE872435F8391F4F08 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>
struct TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t2B11019D68001BBA761F297DF394B647E9B2D0AF ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>
struct TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tE199B9295009A8E22A29B6DDD22ED499A663A39B ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>
struct TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t04915FE164A4EB6B97CE508C2D62CCB1830EDD86 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>
struct TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t10B538976246CA89EE16B10A9A3F981194F98C59 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>
struct TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t87DC6AA7478438FC2A893CEFC30932DB880EECFE ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>
struct TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t92B1E9993FD30276E18F8D355C528D0024CE9CEF ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>
struct TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t646F6606413775C943F0F4782FBB82DED8FB3123 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>
struct TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>
struct TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>
struct TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE ___Ptr_0;
};

// Unity.Netcode.Transports.UTP.BatchedSendQueue
struct BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 
{
	// Unity.Collections.NativeList`1<System.Byte> Unity.Netcode.Transports.UTP.BatchedSendQueue::m_Data
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_Data_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Netcode.Transports.UTP.BatchedSendQueue::m_HeadTailIndices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_HeadTailIndices_1;
	// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::m_MaximumCapacity
	int32_t ___m_MaximumCapacity_2;
	// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::m_MinimumCapacity
	int32_t ___m_MinimumCapacity_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Unity.Collections.FixedString128Bytes
struct FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Collections.FixedString128Bytes::utf8LengthInBytes
			uint16_t ___utf8LengthInBytes_1;
			// Unity.Collections.FixedBytes126 Unity.Collections.FixedString128Bytes::bytes
			FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 ___bytes_2;
		};
		uint8_t FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952__padding[128];
	};
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// Unity.Networking.Transport.NetworkEventQueue/Concurrent
struct Concurrent_t92C384E6E68FB84D47BABBD1610E5FF8CFE3F2B3 
{
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkEvent> Unity.Networking.Transport.NetworkEventQueue/Concurrent::m_ConnectionEventQ
	NativeList_1_t163E4B6B8B23750406A8688DA1D7FD433EF9EDC1 ___m_ConnectionEventQ_0;
	// Unity.Networking.Transport.NetworkEventQueue/Concurrent/ConcurrentConnectionQueue Unity.Networking.Transport.NetworkEventQueue/Concurrent::m_ConnectionEventHeadTail
	ConcurrentConnectionQueue_tE38C2DE6E083563C24985FECE98CFCF061E80C78 ___m_ConnectionEventHeadTail_1;
};

// Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent
struct Concurrent_t76D9AE05BA23B3FBC0B4C7AADEAA81E828C46673 
{
	// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkPipelineStage> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_StageCollection
	NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 ___m_StageCollection_0;
	// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_StaticInstanceBuffer
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_StaticInstanceBuffer_1;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_Pipelines
	NativeList_1_t7D0C4FADF421E663CFE4731E9B320F919701A66C ___m_Pipelines_2;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_StageList
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_StageList_3;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_AccumulatedHeaderCapacity
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_AccumulatedHeaderCapacity_4;
	// Unity.Collections.NativeQueue`1/ParallelWriter<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_SendStageNeedsUpdateWrite
	ParallelWriter_t55B873B53088E2C14EC0CE7DD3ECA37705CB04CC ___m_SendStageNeedsUpdateWrite_5;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::sizePerConnection
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___sizePerConnection_6;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::sharedBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___sharedBuffer_7;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::sendBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___sendBuffer_8;
	// Unity.Collections.NativeArray`1<System.Int64> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_timestamp
	NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 ___m_timestamp_9;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 
{
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate> Unity.Networking.Transport.NetworkProtocol::ComputePacketOverhead
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessReceive
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSend
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendConnectionAccept
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate> Unity.Networking.Transport.NetworkProtocol::Connect
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate> Unity.Networking.Transport.NetworkProtocol::Disconnect
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendPing
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendPong
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate> Unity.Networking.Transport.NetworkProtocol::Update
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	// System.IntPtr Unity.Networking.Transport.NetworkProtocol::UserData
	intptr_t ___UserData_9;
	// System.Int32 Unity.Networking.Transport.NetworkProtocol::MaxHeaderSize
	int32_t ___MaxHeaderSize_10;
	// System.Int32 Unity.Networking.Transport.NetworkProtocol::MaxFooterSize
	int32_t ___MaxFooterSize_11;
	// System.Boolean Unity.Networking.Transport.NetworkProtocol::NeedsUpdate
	bool ___NeedsUpdate_12;
};
// Native definition for P/Invoke marshalling of Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_pinvoke
{
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	intptr_t ___UserData_9;
	int32_t ___MaxHeaderSize_10;
	int32_t ___MaxFooterSize_11;
	int32_t ___NeedsUpdate_12;
};
// Native definition for COM marshalling of Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_com
{
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	intptr_t ___UserData_9;
	int32_t ___MaxHeaderSize_10;
	int32_t ___MaxFooterSize_11;
	int32_t ___NeedsUpdate_12;
};

// Unity.Networking.Transport.NetworkSendInterface
struct NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 
{
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::BeginSendMessage
	TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736 ___BeginSendMessage_0;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::EndSendMessage
	TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D ___EndSendMessage_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::AbortSendMessage
	TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807 ___AbortSendMessage_2;
	// System.IntPtr Unity.Networking.Transport.NetworkSendInterface::UserData
	intptr_t ___UserData_3;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Networking.Transport.NetworkDriver/Concurrent
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14 
{
	// Unity.Networking.Transport.NetworkSendInterface Unity.Networking.Transport.NetworkDriver/Concurrent::m_NetworkSendInterface
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_0;
	// Unity.Networking.Transport.NetworkProtocol Unity.Networking.Transport.NetworkDriver/Concurrent::m_NetworkProtocolInterface
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 ___m_NetworkProtocolInterface_1;
	// Unity.Networking.Transport.NetworkEventQueue/Concurrent Unity.Networking.Transport.NetworkDriver/Concurrent::m_EventQueue
	Concurrent_t92C384E6E68FB84D47BABBD1610E5FF8CFE3F2B3 ___m_EventQueue_2;
	// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkDriver/Concurrent::m_DisconnectReasons
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_3;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkDriver/Connection> Unity.Networking.Transport.NetworkDriver/Concurrent::m_ConnectionList
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_4;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkDriver/Concurrent::m_DataStream
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_5;
	// Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent Unity.Networking.Transport.NetworkDriver/Concurrent::m_PipelineProcessor
	Concurrent_t76D9AE05BA23B3FBC0B4C7AADEAA81E828C46673 ___m_PipelineProcessor_6;
	// Unity.Networking.Transport.Protocols.UdpCHeader/HeaderFlags Unity.Networking.Transport.NetworkDriver/Concurrent::m_DefaultHeaderFlags
	uint8_t ___m_DefaultHeaderFlags_7;
	// Unity.Collections.NativeQueue`1/ParallelWriter<Unity.Networking.Transport.QueuedSendMessage> Unity.Networking.Transport.NetworkDriver/Concurrent::m_ConcurrentParallelSendQueue
	ParallelWriter_tD2337D6A048735D05F7C0698B7FEEDAD7153DE97 ___m_ConcurrentParallelSendQueue_8;
};
// Native definition for P/Invoke marshalling of Unity.Networking.Transport.NetworkDriver/Concurrent
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke
{
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_0;
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_pinvoke ___m_NetworkProtocolInterface_1;
	Concurrent_t92C384E6E68FB84D47BABBD1610E5FF8CFE3F2B3 ___m_EventQueue_2;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_3;
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_4;
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_5;
	Concurrent_t76D9AE05BA23B3FBC0B4C7AADEAA81E828C46673 ___m_PipelineProcessor_6;
	uint8_t ___m_DefaultHeaderFlags_7;
	ParallelWriter_tD2337D6A048735D05F7C0698B7FEEDAD7153DE97 ___m_ConcurrentParallelSendQueue_8;
};
// Native definition for COM marshalling of Unity.Networking.Transport.NetworkDriver/Concurrent
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com
{
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_0;
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_com ___m_NetworkProtocolInterface_1;
	Concurrent_t92C384E6E68FB84D47BABBD1610E5FF8CFE3F2B3 ___m_EventQueue_2;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_3;
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_4;
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_5;
	Concurrent_t76D9AE05BA23B3FBC0B4C7AADEAA81E828C46673 ___m_PipelineProcessor_6;
	uint8_t ___m_DefaultHeaderFlags_7;
	ParallelWriter_tD2337D6A048735D05F7C0698B7FEEDAD7153DE97 ___m_ConcurrentParallelSendQueue_8;
};

// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.NetworkBehaviourUpdater Unity.Netcode.NetworkManager::<BehaviourUpdater>k__BackingField
	NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C* ___U3CBehaviourUpdaterU3Ek__BackingField_7;
	// Unity.Netcode.MessagingSystem Unity.Netcode.NetworkManager::<MessagingSystem>k__BackingField
	MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D* ___U3CMessagingSystemU3Ek__BackingField_8;
	// Unity.Netcode.NetworkPrefabHandler Unity.Netcode.NetworkManager::m_PrefabHandler
	NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE* ___m_PrefabHandler_9;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkManager::ClientsToApprove
	Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A* ___ClientsToApprove_10;
	// System.Boolean Unity.Netcode.NetworkManager::m_ShuttingDown
	bool ___m_ShuttingDown_11;
	// System.Boolean Unity.Netcode.NetworkManager::m_StopProcessingMessages
	bool ___m_StopProcessingMessages_12;
	// System.String Unity.Netcode.NetworkManager::<DisconnectReason>k__BackingField
	String_t* ___U3CDisconnectReasonU3Ek__BackingField_13;
	// Unity.Netcode.NetworkTimeSystem Unity.Netcode.NetworkManager::<NetworkTimeSystem>k__BackingField
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* ___U3CNetworkTimeSystemU3Ek__BackingField_14;
	// Unity.Netcode.NetworkTickSystem Unity.Netcode.NetworkManager::<NetworkTickSystem>k__BackingField
	NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* ___U3CNetworkTickSystemU3Ek__BackingField_15;
	// System.Boolean Unity.Netcode.NetworkManager::RunInBackground
	bool ___RunInBackground_16;
	// Unity.Netcode.LogLevel Unity.Netcode.NetworkManager::LogLevel
	int32_t ___LogLevel_17;
	// Unity.Netcode.NetworkSpawnManager Unity.Netcode.NetworkManager::<SpawnManager>k__BackingField
	NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* ___U3CSpawnManagerU3Ek__BackingField_19;
	// Unity.Netcode.IDeferredMessageManager Unity.Netcode.NetworkManager::<DeferredMessageManager>k__BackingField
	RuntimeObject* ___U3CDeferredMessageManagerU3Ek__BackingField_20;
	// Unity.Netcode.CustomMessagingManager Unity.Netcode.NetworkManager::<CustomMessagingManager>k__BackingField
	CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746* ___U3CCustomMessagingManagerU3Ek__BackingField_21;
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkManager::<SceneManager>k__BackingField
	NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* ___U3CSceneManagerU3Ek__BackingField_22;
	// System.UInt64 Unity.Netcode.NetworkManager::m_LocalClientId
	uint64_t ___m_LocalClientId_24;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClients
	Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF* ___m_ConnectedClients_25;
	// System.UInt64 Unity.Netcode.NetworkManager::m_NextClientId
	uint64_t ___m_NextClientId_26;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_ClientIdToTransportIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_ClientIdToTransportIdMap_27;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_TransportIdToClientIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_TransportIdToClientIdMap_28;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClientsList
	List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5* ___m_ConnectedClientsList_29;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.NetworkManager::m_ConnectedClientIds
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_ConnectedClientIds_30;
	// Unity.Netcode.NetworkClient Unity.Netcode.NetworkManager::<LocalClient>k__BackingField
	NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* ___U3CLocalClientU3Ek__BackingField_31;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient> Unity.Netcode.NetworkManager::PendingClients
	Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684* ___PendingClients_32;
	// System.Boolean Unity.Netcode.NetworkManager::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_33;
	// System.Boolean Unity.Netcode.NetworkManager::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_34;
	// System.Boolean Unity.Netcode.NetworkManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_35;
	// System.Boolean Unity.Netcode.NetworkManager::<IsConnectedClient>k__BackingField
	bool ___U3CIsConnectedClientU3Ek__BackingField_36;
	// System.Boolean Unity.Netcode.NetworkManager::<IsApproved>k__BackingField
	bool ___U3CIsApprovedU3Ek__BackingField_37;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientConnectedCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientConnectedCallback_38;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientDisconnectCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientDisconnectCallback_39;
	// System.Action Unity.Netcode.NetworkManager::OnServerStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnServerStarted_40;
	// System.Action Unity.Netcode.NetworkManager::OnTransportFailure
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnTransportFailure_41;
	// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkManager::m_ConnectionApprovalCallback
	Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B* ___m_ConnectionApprovalCallback_42;
	// Unity.Netcode.NetworkConfig Unity.Netcode.NetworkManager::NetworkConfig
	NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113* ___NetworkConfig_43;
	// System.String Unity.Netcode.NetworkManager::<ConnectedHostname>k__BackingField
	String_t* ___U3CConnectedHostnameU3Ek__BackingField_44;
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkManager::<NetworkMetrics>k__BackingField
	RuntimeObject* ___U3CNetworkMetricsU3Ek__BackingField_45;
};

// Unity.Netcode.NetworkTransport
struct NetworkTransport_t55E07951299283974C86476F46CC977780560B64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkTransport::NetworkMetrics
	RuntimeObject* ___NetworkMetrics_4;
	// Unity.Netcode.NetworkTransport/TransportEventDelegate Unity.Netcode.NetworkTransport::OnTransportEvent
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* ___OnTransportEvent_5;
};

// Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
struct SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC 
{
	// Unity.Networking.Transport.NetworkDriver/Concurrent Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::Driver
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14 ___Driver_0;
	// Unity.Netcode.Transports.UTP.UnityTransport/SendTarget Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::Target
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___Target_1;
	// Unity.Netcode.Transports.UTP.BatchedSendQueue Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::Queue
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___Queue_2;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::ReliablePipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___ReliablePipeline_3;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
struct SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_pinvoke
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke ___Driver_0;
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___Target_1;
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___Queue_2;
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___ReliablePipeline_3;
};
// Native definition for COM marshalling of Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
struct SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_com
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com ___Driver_0;
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___Target_1;
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___Queue_2;
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___ReliablePipeline_3;
};

// Unity.Netcode.Transports.UNET.UNetTransport
struct UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A  : public NetworkTransport_t55E07951299283974C86476F46CC977780560B64
{
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_UnreliableChannelId
	int32_t ___m_UnreliableChannelId_6;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_UnreliableSequencedChannelId
	int32_t ___m_UnreliableSequencedChannelId_7;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ReliableChannelId
	int32_t ___m_ReliableChannelId_8;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ReliableSequencedChannelId
	int32_t ___m_ReliableSequencedChannelId_9;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ReliableFragmentedSequencedChannelId
	int32_t ___m_ReliableFragmentedSequencedChannelId_10;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::MessageBufferSize
	int32_t ___MessageBufferSize_11;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::MaxConnections
	int32_t ___MaxConnections_12;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::MaxSentMessageQueueSize
	int32_t ___MaxSentMessageQueueSize_13;
	// System.String Unity.Netcode.Transports.UNET.UNetTransport::ConnectAddress
	String_t* ___ConnectAddress_14;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::ConnectPort
	int32_t ___ConnectPort_15;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::ServerListenPort
	int32_t ___ServerListenPort_16;
	// Unity.Netcode.Transports.UNET.UNetTransport/SendMode Unity.Netcode.Transports.UNET.UNetTransport::MessageSendMode
	int32_t ___MessageSendMode_17;
	// System.Byte[] Unity.Netcode.Transports.UNET.UNetTransport::m_MessageBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_MessageBuffer_18;
	// System.WeakReference Unity.Netcode.Transports.UNET.UNetTransport::m_TemporaryBufferReference
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___m_TemporaryBufferReference_19;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ServerConnectionId
	int32_t ___m_ServerConnectionId_20;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ServerHostId
	int32_t ___m_ServerHostId_21;
	// Unity.Netcode.NetworkManager Unity.Netcode.Transports.UNET.UNetTransport::NetworkManager
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManager_22;
};

// <NetStats_TypeRegistration>

// <NetStats_TypeRegistration>

// UnityEngine.Networking.ConnectionConfig

// UnityEngine.Networking.ConnectionConfig

// UnityEngine.Networking.HostTopology

// UnityEngine.Networking.HostTopology

// Unity.Netcode.NetworkClient

// Unity.Netcode.NetworkClient

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// Unity.Networking.Transport.NetworkConnection

// Unity.Networking.Transport.NetworkConnection

// Unity.Networking.Transport.NetworkPipeline

// Unity.Networking.Transport.NetworkPipeline

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData

// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData

// Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache

// Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache

// Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters

// Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tD21904779CC32A6177B4E0D9832E2914FD13FFDA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::069E42803A623C550E1D97957542706C51EE52C6262757503BCA925BF40009C9
	__StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD ___069E42803A623C550E1D97957542706C51EE52C6262757503BCA925BF40009C9_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::0DC23B9F693E00DB8A82C23DBC72BF724412EEFE73C8011C7B034B95055395BA
	__StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13 ___0DC23B9F693E00DB8A82C23DBC72BF724412EEFE73C8011C7B034B95055395BA_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::AEC63A1D9817B88413C02DFD4ACAA4DCE92E7B31885038AD5F851B01F6E20836
	__StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13 ___AEC63A1D9817B88413C02DFD4ACAA4DCE92E7B31885038AD5F851B01F6E20836_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::CFFA0C336E65626D7D6A1B7DEC9EA46121AA12320D3A2187436F489C100F3047
	__StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD ___CFFA0C336E65626D7D6A1B7DEC9EA46121AA12320D3A2187436F489C100F3047_3;
};

// <PrivateImplementationDetails>

// Unity.Networking.Transport.DataStreamWriter

// Unity.Networking.Transport.DataStreamWriter

// Unity.Networking.Transport.NetworkEndPoint
struct NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_StaticFields
{
	// System.Boolean Unity.Networking.Transport.NetworkEndPoint::IsLittleEndian
	bool ___IsLittleEndian_4;
};

// Unity.Networking.Transport.NetworkEndPoint

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Netcode.Transports.UTP.UnityTransport/SendTarget

// Unity.Netcode.Transports.UTP.UnityTransport/SendTarget

// Unity.Netcode.Transports.UTP.BatchedSendQueue

// Unity.Netcode.Transports.UTP.BatchedSendQueue

// Unity.Collections.FixedString128Bytes

// Unity.Collections.FixedString128Bytes

// System.WeakReference

// System.WeakReference

// Unity.Networking.Transport.NetworkDriver/Concurrent

// Unity.Networking.Transport.NetworkDriver/Concurrent

// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler> Unity.Netcode.NetworkManager::__rpc_func_table
	Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* _____rpc_func_table_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::<Singleton>k__BackingField
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___U3CSingletonU3Ek__BackingField_18;
	// System.Action Unity.Netcode.NetworkManager::OnSingletonReady
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSingletonReady_46;
};

// Unity.Netcode.NetworkManager

// Unity.Netcode.NetworkTransport

// Unity.Netcode.NetworkTransport

// Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob

// Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob

// Unity.Netcode.Transports.UNET.UNetTransport

// Unity.Netcode.Transports.UNET.UNetTransport
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke(const Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14& unmarshaled, Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke_back(const Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke& marshaled, Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14& unmarshaled);
IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke_cleanup(Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com(const Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14& unmarshaled, Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com_back(const Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com& marshaled, Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14& unmarshaled);
IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com_cleanup(Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com& marshaled);

// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9_gshared (const RuntimeMethod* method) ;

// System.Boolean Unity.Networking.Transport.NetworkEndPoint::TryParse(System.String,System.UInt16,Unity.Networking.Transport.NetworkEndPoint&,Unity.Networking.Transport.NetworkFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_TryParse_mFB525A245C1DE79526D34FEBC03F49BC6428CD4E (String_t* ___0_address, uint16_t ___1_port, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63* ___2_endpoint, int32_t ___3_family, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::ParseNetworkEndpoint(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_ParseNetworkEndpoint_m11DE31B21D1DFD889066782743112F705D61B9F2 (String_t* ___0_ip, uint16_t ___1_port, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ServerEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ListenEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0 (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkConnection Unity.Netcode.Transports.UTP.UnityTransport::ParseClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5 (uint64_t ___0_netcodeConnectionId, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver/Concurrent::BeginSend(Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.NetworkConnection,Unity.Networking.Transport.DataStreamWriter&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Concurrent_BeginSend_m08F4DDE3E9503455B091B4F1CA55709107405DAC (Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14* __this, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___0_pipe, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___1_id, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___2_writer, int32_t ___3_requiredPayloadSize, const RuntimeMethod* method) ;
// Unity.Collections.FixedString128Bytes Unity.Netcode.Transports.UTP.ErrorUtilities::ErrorToFixedString(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ErrorUtilities_ErrorToFixedString_mC86BD2B14A72FAD11ABF8F1F7A0EF99AC45DFF3B (int32_t ___0_error, uint64_t ___1_connectionId, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkPipeline::op_Equality(Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkPipeline_op_Equality_mA9AE79BEA5C9AEEA5EBD0EA49EC22CAC387918D2 (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___0_lhs, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___1_rhs, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::FillWriterWithMessages(Unity.Networking.Transport.DataStreamWriter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___0_writer, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::FillWriterWithBytes(Unity.Networking.Transport.DataStreamWriter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___0_writer, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver/Concurrent::EndSend(Unity.Networking.Transport.DataStreamWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Concurrent_EndSend_m37CAD602AD47C3AEF56E5DAF464382CDD2A94B18 (Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA ___0_writer, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::Consume(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SendBatchedMessagesJob_Execute_mC7FD30CAD908F8FB1CF55850DD1778E6732B23C7 (SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::.ctor(System.UInt64,Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, uint64_t ___0_clientId, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___1_networkPipeline, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkPipeline::Equals(Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkPipeline_Equals_mDDEEE23DC6479D865F524372DE89B48CC06B6F14 (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* __this, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___0_connection, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(Unity.Netcode.Transports.UTP.UnityTransport/SendTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_other, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkPipeline::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkPipeline_GetHashCode_m34FA347FD9DD395BCE190E09E593FA9B97C662EF_inline (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::GetNetcodeClientId(System.Byte,System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint8_t ___0_hostId, uint16_t ___1_connectionId, bool ___2_isServer, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::get_IsStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_get_IsStarted_mB18FFFD3F8718BFE678B7460A9D5772F1B02628E (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::get_Singleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::get_ConnectedClientsList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkManager_get_ConnectedClientsList_mA7F66C446F46012C187EB6C41FB399C511E6EDC9 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::SendQueued(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkManager::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::GetUNetConnectionDetails(System.UInt64,System.Byte&,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, uint8_t* ___1_hostId, uint16_t* ___2_connectionId, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::QueueMessageForSending(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_QueueMessageForSending_mBCFD4B1C14BA55D53E8C4F5928E4182C1FC38B5F (int32_t ___0_hostId, int32_t ___1_connectionId, int32_t ___2_channelId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_buffer, int32_t ___4_size, uint8_t* ___5_error, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Send_m58F29B19199882D9D8053858C265380DCF292855 (int32_t ___0_hostId, int32_t ___1_connectionId, int32_t ___2_channelId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_buffer, int32_t ___4_size, uint8_t* ___5_error, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::SendQueuedMessages(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_SendQueuedMessages_mB66F1C5C0101405B87D5258D3FC75900F456C76E (int32_t ___0_hostId, int32_t ___1_connectionId, uint8_t* ___2_error, const RuntimeMethod* method) ;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::Receive(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74 (int32_t* ___0_hostId, int32_t* ___1_connectionId, int32_t* ___2_channelId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_buffer, int32_t ___4_bufferSize, int32_t* ___5_receivedSize, uint8_t* ___6_error, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared)(__this, ___0_array, ___1_offset, ___2_count, method);
}
// UnityEngine.Networking.ConnectionConfig Unity.Netcode.Transports.UNET.UNetTransport::GetConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___0_defaultConfig, int32_t ___1_maxDefaultConnections, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m2C18DF965A03542887B43E391DC153A0CB44F33C (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___0_topology, int32_t ___1_port, String_t* ___2_ip, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Connect_mF7BC9C0E04D5D5D6763128FAB3F51FD5CF62BDEC (int32_t ___0_hostId, String_t* ___1_address, int32_t ___2_port, int32_t ___3_exeptionConnectionId, uint8_t* ___4_error, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20 (int32_t ___0_hostId, int32_t ___1_connectionId, uint8_t* ___2_error, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::GetCurrentRTT(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetCurrentRTT_mB6407834EF7EF2DE689EFF0CB276825A51C3E10D (int32_t ___0_hostId, int32_t ___1_connectionId, uint8_t* ___2_error, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Shutdown_mBC882DF0C55BA635D3E0281F95D9BFC2F9FE1996 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkTransport::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Init_m0ADB18EAE22E2B2AFD8183ED3A3EE71A6020B0BE (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_mF6E6BBCAC0C41237A0A26FC3BDA8C882AC627113 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfig::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_MaxSentMessageQueueSize_m4EF0FBEF7C0BF9A3D28BE8577B7AA449522EDEE7 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>()
inline void EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>()
inline void EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>()
inline void EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>()
inline void EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>()
inline void EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>()
inline void EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>()
inline void EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>()
inline void EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>()
inline void EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>()
inline void EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_pinvoke(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke& marshaled)
{
	marshaled.___Address_0 = il2cpp_codegen_marshal_string(unmarshaled.___Address_0);
	marshaled.___Port_1 = unmarshaled.___Port_1;
	marshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_string(unmarshaled.___ServerListenAddress_2);
}
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_pinvoke_back(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke& marshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled)
{
	unmarshaled.___Address_0 = il2cpp_codegen_marshal_string_result(marshaled.___Address_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Address_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Address_0));
	uint16_t unmarshaledPort_temp_1 = 0;
	unmarshaledPort_temp_1 = marshaled.___Port_1;
	unmarshaled.___Port_1 = unmarshaledPort_temp_1;
	unmarshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_string_result(marshaled.___ServerListenAddress_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerListenAddress_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ServerListenAddress_2));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_pinvoke_cleanup(ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Address_0);
	marshaled.___Address_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ServerListenAddress_2);
	marshaled.___ServerListenAddress_2 = NULL;
}
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_com(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com& marshaled)
{
	marshaled.___Address_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___Address_0);
	marshaled.___Port_1 = unmarshaled.___Port_1;
	marshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___ServerListenAddress_2);
}
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_com_back(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com& marshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled)
{
	unmarshaled.___Address_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___Address_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Address_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Address_0));
	uint16_t unmarshaledPort_temp_1 = 0;
	unmarshaledPort_temp_1 = marshaled.___Port_1;
	unmarshaled.___Port_1 = unmarshaledPort_temp_1;
	unmarshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___ServerListenAddress_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerListenAddress_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ServerListenAddress_2));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_com_cleanup(ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Address_0);
	marshaled.___Address_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ServerListenAddress_2);
	marshaled.___ServerListenAddress_2 = NULL;
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::ParseNetworkEndpoint(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_ParseNetworkEndpoint_m11DE31B21D1DFD889066782743112F705D61B9F2 (String_t* ___0_ip, uint16_t ___1_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE41C5B6E51FFAC441D1612E7E7728CE5C169F3A4);
		s_Il2CppMethodInitialized = true;
	}
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// NetworkEndpoint endpoint = default;
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63));
		// if (!NetworkEndpoint.TryParse(ip, port, out endpoint, NetworkFamily.Ipv4) &&
		//     !NetworkEndpoint.TryParse(ip, port, out endpoint, NetworkFamily.Ipv6))
		String_t* L_0 = ___0_ip;
		uint16_t L_1 = ___1_port;
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NetworkEndPoint_TryParse_mFB525A245C1DE79526D34FEBC03F49BC6428CD4E(L_0, L_1, (&V_0), 2, NULL);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_3 = ___0_ip;
		uint16_t L_4 = ___1_port;
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = NetworkEndPoint_TryParse_mFB525A245C1DE79526D34FEBC03F49BC6428CD4E(L_3, L_4, (&V_0), ((int32_t)23), NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogError($"Invalid network endpoint: {ip}:{port}.");
		String_t* L_6 = ___0_ip;
		uint16_t L_7 = ___1_port;
		uint16_t L_8 = L_7;
		RuntimeObject* L_9 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE41C5B6E51FFAC441D1612E7E7728CE5C169F3A4, L_6, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_10, NULL);
	}

IL_0037:
	{
		// return endpoint;
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_11 = V_0;
		return L_11;
	}
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ServerEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkEndpoint ServerEndPoint => ParseNetworkEndpoint(Address, Port);
		String_t* L_0 = __this->___Address_0;
		uint16_t L_1 = __this->___Port_1;
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_2;
		L_2 = ConnectionAddressData_ParseNetworkEndpoint_m11DE31B21D1DFD889066782743112F705D61B9F2(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865*>(__this + _offset);
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 _returnValue;
	_returnValue = ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ListenEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0 (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B6_0 = NULL;
	{
		// public NetworkEndpoint ListenEndPoint => ParseNetworkEndpoint((ServerListenAddress?.Length == 0) ? Address : ServerListenAddress, Port);
		String_t* L_0 = __this->___ServerListenAddress_2;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0015;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(G_B2_0, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0015:
	{
		if (G_B3_0)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = __this->___ServerListenAddress_2;
		G_B6_0 = L_3;
		goto IL_0025;
	}

IL_001f:
	{
		String_t* L_4 = __this->___Address_0;
		G_B6_0 = L_4;
	}

IL_0025:
	{
		uint16_t L_5 = __this->___Port_1;
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_6;
		L_6 = ConnectionAddressData_ParseNetworkEndpoint_m11DE31B21D1DFD889066782743112F705D61B9F2(G_B6_0, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865*>(__this + _offset);
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 _returnValue;
	_returnValue = ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_pinvoke(const SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC& unmarshaled, SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_pinvoke& marshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke(unmarshaled.___Driver_0, marshaled.___Driver_0);
	marshaled.___Target_1 = unmarshaled.___Target_1;
	marshaled.___Queue_2 = unmarshaled.___Queue_2;
	marshaled.___ReliablePipeline_3 = unmarshaled.___ReliablePipeline_3;
}
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_pinvoke_back(const SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_pinvoke& marshaled, SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC& unmarshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14 unmarshaledDriver_temp_0;
	memset((&unmarshaledDriver_temp_0), 0, sizeof(unmarshaledDriver_temp_0));
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke_back(marshaled.___Driver_0, unmarshaledDriver_temp_0);
	unmarshaled.___Driver_0 = unmarshaledDriver_temp_0;
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 unmarshaledTarget_temp_1;
	memset((&unmarshaledTarget_temp_1), 0, sizeof(unmarshaledTarget_temp_1));
	unmarshaledTarget_temp_1 = marshaled.___Target_1;
	unmarshaled.___Target_1 = unmarshaledTarget_temp_1;
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 unmarshaledQueue_temp_2;
	memset((&unmarshaledQueue_temp_2), 0, sizeof(unmarshaledQueue_temp_2));
	unmarshaledQueue_temp_2 = marshaled.___Queue_2;
	unmarshaled.___Queue_2 = unmarshaledQueue_temp_2;
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 unmarshaledReliablePipeline_temp_3;
	memset((&unmarshaledReliablePipeline_temp_3), 0, sizeof(unmarshaledReliablePipeline_temp_3));
	unmarshaledReliablePipeline_temp_3 = marshaled.___ReliablePipeline_3;
	unmarshaled.___ReliablePipeline_3 = unmarshaledReliablePipeline_temp_3;
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_pinvoke_cleanup(SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_pinvoke& marshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke_cleanup(marshaled.___Driver_0);
}


// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_com(const SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC& unmarshaled, SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_com& marshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com(unmarshaled.___Driver_0, marshaled.___Driver_0);
	marshaled.___Target_1 = unmarshaled.___Target_1;
	marshaled.___Queue_2 = unmarshaled.___Queue_2;
	marshaled.___ReliablePipeline_3 = unmarshaled.___ReliablePipeline_3;
}
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_com_back(const SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_com& marshaled, SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC& unmarshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14 unmarshaledDriver_temp_0;
	memset((&unmarshaledDriver_temp_0), 0, sizeof(unmarshaledDriver_temp_0));
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com_back(marshaled.___Driver_0, unmarshaledDriver_temp_0);
	unmarshaled.___Driver_0 = unmarshaledDriver_temp_0;
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 unmarshaledTarget_temp_1;
	memset((&unmarshaledTarget_temp_1), 0, sizeof(unmarshaledTarget_temp_1));
	unmarshaledTarget_temp_1 = marshaled.___Target_1;
	unmarshaled.___Target_1 = unmarshaledTarget_temp_1;
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 unmarshaledQueue_temp_2;
	memset((&unmarshaledQueue_temp_2), 0, sizeof(unmarshaledQueue_temp_2));
	unmarshaledQueue_temp_2 = marshaled.___Queue_2;
	unmarshaled.___Queue_2 = unmarshaledQueue_temp_2;
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 unmarshaledReliablePipeline_temp_3;
	memset((&unmarshaledReliablePipeline_temp_3), 0, sizeof(unmarshaledReliablePipeline_temp_3));
	unmarshaledReliablePipeline_temp_3 = marshaled.___ReliablePipeline_3;
	unmarshaled.___ReliablePipeline_3 = unmarshaledReliablePipeline_temp_3;
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_com_cleanup(SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_com& marshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com_cleanup(marshaled.___Driver_0);
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SendBatchedMessagesJob_Execute_mC7FD30CAD908F8FB1CF55850DD1778E6732B23C7 (SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral644832CF60047B3D9FAB0A389B880AEF5B87FE70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF4ADD2D57F4BAB0951244413CF80823252C53CF);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t G_B6_0 = 0;
	{
		// var clientId = Target.ClientId;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* L_0 = (&__this->___Target_1);
		uint64_t L_1 = L_0->___ClientId_0;
		V_0 = L_1;
		// var connection = ParseClientId(clientId);
		uint64_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_3;
		L_3 = UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5(L_2, NULL);
		V_1 = L_3;
		// var pipeline = Target.NetworkPipeline;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* L_4 = (&__this->___Target_1);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_5 = L_4->___NetworkPipeline_1;
		V_2 = L_5;
		goto IL_00d0;
	}

IL_0024:
	{
		// var result = Driver.BeginSend(pipeline, connection, out var writer);
		Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14* L_6 = (&__this->___Driver_0);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_7 = V_2;
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_8 = V_1;
		int32_t L_9;
		L_9 = Concurrent_BeginSend_m08F4DDE3E9503455B091B4F1CA55709107405DAC(L_6, L_7, L_8, (&V_4), 0, NULL);
		V_3 = L_9;
		// if (result != (int)Networking.Transport.Error.StatusCode.Success)
		int32_t L_10 = V_3;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.LogError($"Error sending message: {ErrorUtilities.ErrorToFixedString(result, clientId)}");
		int32_t L_11 = V_3;
		uint64_t L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_13;
		L_13 = ErrorUtilities_ErrorToFixedString_mC86BD2B14A72FAD11ABF8F1F7A0EF99AC45DFF3B(L_11, L_12, NULL);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_14 = L_13;
		RuntimeObject* L_15 = Box(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralDF4ADD2D57F4BAB0951244413CF80823252C53CF, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
		// return;
		return;
	}

IL_0054:
	{
		// var written = pipeline == ReliablePipeline ? Queue.FillWriterWithBytes(ref writer) : Queue.FillWriterWithMessages(ref writer);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_17 = V_2;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_18 = __this->___ReliablePipeline_3;
		bool L_19;
		L_19 = NetworkPipeline_op_Equality_mA9AE79BEA5C9AEEA5EBD0EA49EC22CAC387918D2(L_17, L_18, NULL);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* L_20 = (&__this->___Queue_2);
		int32_t L_21;
		L_21 = BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4(L_20, (&V_4), NULL);
		G_B6_0 = L_21;
		goto IL_007e;
	}

IL_0071:
	{
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* L_22 = (&__this->___Queue_2);
		int32_t L_23;
		L_23 = BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3(L_22, (&V_4), NULL);
		G_B6_0 = L_23;
	}

IL_007e:
	{
		V_5 = G_B6_0;
		// result = Driver.EndSend(writer);
		Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14* L_24 = (&__this->___Driver_0);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA L_25 = V_4;
		int32_t L_26;
		L_26 = Concurrent_EndSend_m37CAD602AD47C3AEF56E5DAF464382CDD2A94B18(L_24, L_25, NULL);
		V_3 = L_26;
		// if (result == written)
		int32_t L_27 = V_3;
		int32_t L_28 = V_5;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_00a2;
		}
	}
	{
		// Queue.Consume(written);
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* L_29 = (&__this->___Queue_2);
		int32_t L_30 = V_5;
		BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A(L_29, L_30, NULL);
		goto IL_00d0;
	}

IL_00a2:
	{
		// if (result != (int)Networking.Transport.Error.StatusCode.NetworkSendQueueFull)
		int32_t L_31 = V_3;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-5))))
		{
			goto IL_00cf;
		}
	}
	{
		// Debug.LogError($"Error sending the message: {ErrorUtilities.ErrorToFixedString(result, clientId)}");
		int32_t L_32 = V_3;
		uint64_t L_33 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_34;
		L_34 = ErrorUtilities_ErrorToFixedString_mC86BD2B14A72FAD11ABF8F1F7A0EF99AC45DFF3B(L_32, L_33, NULL);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_35 = L_34;
		RuntimeObject* L_36 = Box(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral644832CF60047B3D9FAB0A389B880AEF5B87FE70, L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_37, NULL);
		// Queue.Consume(written);
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* L_38 = (&__this->___Queue_2);
		int32_t L_39 = V_5;
		BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A(L_38, L_39, NULL);
	}

IL_00cf:
	{
		// return;
		return;
	}

IL_00d0:
	{
		// while (!Queue.IsEmpty)
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* L_40 = (&__this->___Queue_2);
		bool L_41;
		L_41 = BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C(L_40, NULL);
		if (!L_41)
		{
			goto IL_0024;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SendBatchedMessagesJob_Execute_mC7FD30CAD908F8FB1CF55850DD1778E6732B23C7_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC*>(__this + _offset);
	SendBatchedMessagesJob_Execute_mC7FD30CAD908F8FB1CF55850DD1778E6732B23C7(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::.ctor(System.UInt64,Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, uint64_t ___0_clientId, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___1_networkPipeline, const RuntimeMethod* method) 
{
	{
		// ClientId = clientId;
		uint64_t L_0 = ___0_clientId;
		__this->___ClientId_0 = L_0;
		// NetworkPipeline = networkPipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_1 = ___1_networkPipeline;
		__this->___NetworkPipeline_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_clientId, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___1_networkPipeline, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41(_thisAdjusted, ___0_clientId, ___1_networkPipeline, method);
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(Unity.Netcode.Transports.UTP.UnityTransport/SendTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_other, const RuntimeMethod* method) 
{
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ClientId == other.ClientId && NetworkPipeline.Equals(other.NetworkPipeline);
		uint64_t L_0 = __this->___ClientId_0;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_1 = ___0_other;
		uint64_t L_2 = L_1.___ClientId_0;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_3 = __this->___NetworkPipeline_1;
		V_0 = L_3;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_4 = ___0_other;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_5 = L_4.___NetworkPipeline_1;
		bool L_6;
		L_6 = NetworkPipeline_Equals_mDDEEE23DC6479D865F524372DE89B48CC06B6F14((&V_0), L_5, NULL);
		return L_6;
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D_AdjustorThunk (RuntimeObject* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_other, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	bool _returnValue;
	_returnValue = SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj is SendTarget other && Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*)((SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*)(SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*)UnBox(L_1, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var))));
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_2 = V_0;
		bool L_3;
		L_3 = SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	bool _returnValue;
	_returnValue = SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, const RuntimeMethod* method) 
{
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (ClientId.GetHashCode() * 397) ^ NetworkPipeline.GetHashCode();
		uint64_t* L_0 = (&__this->___ClientId_0);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_2 = __this->___NetworkPipeline_1;
		V_0 = L_2;
		int32_t L_3;
		L_3 = NetworkPipeline_GetHashCode_m34FA347FD9DD395BCE190E09E593FA9B97C662EF_inline((&V_0), NULL);
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::get_ServerClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_get_ServerClientId_m359544B1359E41F2FA8793037D66A004AB179767 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	{
		// public override ulong ServerClientId => GetNetcodeClientId(0, 0, true);
		uint64_t L_0;
		L_0 = UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71(__this, (uint8_t)0, (uint16_t)0, (bool)1, NULL);
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_LateUpdate_mCE7ED80C40E3D4178A5F9500F5C36731286AECA4 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0D7218F0DC5E17555FA54256075C4DEAE4B73450_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9F8C0C6332727DDF63C389AC074D96B4E710BE72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* V_1 = NULL;
	{
		// if (UnityEngine.Networking.NetworkTransport.IsStarted && MessageSendMode == SendMode.Queued)
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkTransport_get_IsStarted_mB18FFFD3F8718BFE678B7460A9D5772F1B02628E(NULL);
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_1 = __this->___MessageSendMode_17;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0074;
		}
	}
	{
		// if (NetworkManager != null && NetworkManager.IsServer)
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = __this->___NetworkManager_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_4 = __this->___NetworkManager_22;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0064;
		}
	}
	{
		// foreach (var targetClient in NetworkManager.Singleton.ConnectedClientsList)
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_6;
		L_6 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = NetworkManager_get_ConnectedClientsList_mA7F66C446F46012C187EB6C41FB399C511E6EDC9(L_6, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.Netcode.NetworkClient>::GetEnumerator() */, IEnumerable_1_t0D7218F0DC5E17555FA54256075C4DEAE4B73450_il2cpp_TypeInfo_var, L_7);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_0;
					if (!L_9)
					{
						goto IL_0063;
					}
				}
				{
					RuntimeObject* L_10 = V_0;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0063:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_003d_1:
			{
				// foreach (var targetClient in NetworkManager.Singleton.ConnectedClientsList)
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* L_12;
				L_12 = InterfaceFuncInvoker0< NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.Netcode.NetworkClient>::get_Current() */, IEnumerator_1_t9F8C0C6332727DDF63C389AC074D96B4E710BE72_il2cpp_TypeInfo_var, L_11);
				V_1 = L_12;
				// SendQueued(targetClient.ClientId);
				NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* L_13 = V_1;
				NullCheck(L_13);
				uint64_t L_14 = L_13->___ClientId_0;
				UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA(__this, L_14, NULL);
			}

IL_0050_1:
			{
				// foreach (var targetClient in NetworkManager.Singleton.ConnectedClientsList)
				RuntimeObject* L_15 = V_0;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// SendQueued(NetworkManager.Singleton.LocalClientId);
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_17;
		L_17 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_17);
		uint64_t L_18;
		L_18 = NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577(L_17, NULL);
		UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA(__this, L_18, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::Send(System.UInt64,System.ArraySegment`1<System.Byte>,Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Send_m4C7588596E538BA0A9A22E19184B5B44A8480D11 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___1_payload, int32_t ___2_networkDelivery, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___0_clientId;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// if (payload.Offset > 0)
		int32_t L_1;
		L_1 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___1_payload), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_009d;
		}
	}
	{
		// if (m_MessageBuffer.Length >= payload.Count)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_MessageBuffer_18;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) < ((int32_t)L_3)))
		{
			goto IL_0032;
		}
	}
	{
		// buffer = m_MessageBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___m_MessageBuffer_18;
		V_2 = L_4;
		goto IL_007f;
	}

IL_0032:
	{
		// if (m_TemporaryBufferReference != null && ((bufferRef = m_TemporaryBufferReference.Target) != null) && ((byte[])bufferRef).Length >= payload.Count)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = __this->___m_TemporaryBufferReference_19;
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		RuntimeObject* L_8 = L_7;
		V_4 = L_8;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_9 = V_4;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_9, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_10;
		L_10 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		if ((((int32_t)((int32_t)(((RuntimeArray*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_9, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->max_length))) < ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		// buffer = (byte[])bufferRef;
		RuntimeObject* L_11 = V_4;
		V_2 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_11, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		goto IL_007f;
	}

IL_0066:
	{
		// buffer = new byte[payload.Count];
		int32_t L_12;
		L_12 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_2 = L_13;
		// m_TemporaryBufferReference = new WeakReference(buffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_15 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_15, (RuntimeObject*)L_14, NULL);
		__this->___m_TemporaryBufferReference_19 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TemporaryBufferReference_19), (void*)L_15);
	}

IL_007f:
	{
		// Buffer.BlockCopy(payload.Array, payload.Offset, buffer, 0, payload.Count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___1_payload), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_17;
		L_17 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___1_payload), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		int32_t L_19;
		L_19 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_16, L_17, (RuntimeArray*)L_18, 0, L_19, NULL);
		goto IL_00a5;
	}

IL_009d:
	{
		// buffer = payload.Array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___1_payload), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		V_2 = L_20;
	}

IL_00a5:
	{
		// int channelId = -1;
		V_3 = (-1);
		int32_t L_21 = ___2_networkDelivery;
		switch (L_21)
		{
			case 0:
			{
				goto IL_00c3;
			}
			case 1:
			{
				goto IL_00cc;
			}
			case 2:
			{
				goto IL_00d5;
			}
			case 3:
			{
				goto IL_00de;
			}
			case 4:
			{
				goto IL_00e7;
			}
		}
	}
	{
		goto IL_00ee;
	}

IL_00c3:
	{
		// channelId = m_UnreliableChannelId;
		int32_t L_22 = __this->___m_UnreliableChannelId_6;
		V_3 = L_22;
		// break;
		goto IL_00ee;
	}

IL_00cc:
	{
		// channelId = m_UnreliableSequencedChannelId;
		int32_t L_23 = __this->___m_UnreliableSequencedChannelId_7;
		V_3 = L_23;
		// break;
		goto IL_00ee;
	}

IL_00d5:
	{
		// channelId = m_ReliableChannelId;
		int32_t L_24 = __this->___m_ReliableChannelId_8;
		V_3 = L_24;
		// break;
		goto IL_00ee;
	}

IL_00de:
	{
		// channelId = m_ReliableSequencedChannelId;
		int32_t L_25 = __this->___m_ReliableSequencedChannelId_9;
		V_3 = L_25;
		// break;
		goto IL_00ee;
	}

IL_00e7:
	{
		// channelId = m_ReliableFragmentedSequencedChannelId;
		int32_t L_26 = __this->___m_ReliableFragmentedSequencedChannelId_10;
		V_3 = L_26;
	}

IL_00ee:
	{
		// if (MessageSendMode == SendMode.Queued)
		int32_t L_27 = __this->___MessageSendMode_17;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_010b;
		}
	}
	{
		// UnityEngine.Networking.NetworkTransport.QueueMessageForSending(hostId, connectionId, channelId, buffer, payload.Count, out byte error);
		uint8_t L_28 = V_0;
		uint16_t L_29 = V_1;
		int32_t L_30 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_2;
		int32_t L_32;
		L_32 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = NetworkTransport_QueueMessageForSending_mBCFD4B1C14BA55D53E8C4F5928E4182C1FC38B5F(L_28, L_29, L_30, L_31, L_32, (&V_5), NULL);
		return;
	}

IL_010b:
	{
		// UnityEngine.Networking.NetworkTransport.Send(hostId, connectionId, channelId, buffer, payload.Count, out byte error);
		uint8_t L_34 = V_0;
		uint16_t L_35 = V_1;
		int32_t L_36 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_2;
		int32_t L_38;
		L_38 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = NetworkTransport_Send_m58F29B19199882D9D8053858C265380DCF292855(L_34, L_35, L_36, L_37, L_38, (&V_6), NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::SendQueued(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___0_clientId;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// UnityEngine.Networking.NetworkTransport.SendQueuedMessages(hostId, connectionId, out _);
		uint8_t L_1 = V_0;
		uint16_t L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NetworkTransport_SendQueuedMessages_mB66F1C5C0101405B87D5258D3FC75900F456C76E(L_1, L_2, (&V_2), NULL);
		// }
		return;
	}
}
// Unity.Netcode.NetworkEvent Unity.Netcode.Transports.UNET.UNetTransport::PollEvent(System.UInt64&,System.ArraySegment`1<System.Byte>&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UNetTransport_PollEvent_m2B3B3E3EFB0B448552244173F8C036C26EF49AF9 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t* ___0_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___1_payload, float* ___2_receiveTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	uint8_t G_B7_0 = 0x0;
	uint8_t G_B1_0 = 0x0;
	uint8_t G_B5_0 = 0x0;
	uint8_t G_B2_0 = 0x0;
	uint8_t G_B3_0 = 0x0;
	uint8_t G_B4_0 = 0x0;
	uint8_t G_B6_0 = 0x0;
	uint8_t G_B8_0 = 0x0;
	{
		// var eventType = UnityEngine.Networking.NetworkTransport.Receive(out int hostId, out int connectionId, out _, m_MessageBuffer, m_MessageBuffer.Length, out int receivedSize, out byte error);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_MessageBuffer_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___m_MessageBuffer_18;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74((&V_1), (&V_2), (&V_5), L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), (&V_3), (&V_4), NULL);
		V_0 = L_2;
		// clientId = GetNetcodeClientId((byte)hostId, (ushort)connectionId, false);
		uint64_t* L_3 = ___0_clientId;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		uint64_t L_6;
		L_6 = UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71(__this, (uint8_t)((int32_t)(uint8_t)L_4), (uint16_t)((int32_t)(uint16_t)L_5), (bool)0, NULL);
		*((int64_t*)L_3) = (int64_t)L_6;
		// receiveTime = Time.realtimeSinceStartup;
		float* L_7 = ___2_receiveTime;
		float L_8;
		L_8 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		*((float*)L_7) = (float)L_8;
		// var networkError = (NetworkError)error;
		uint8_t L_9 = V_4;
		// if (networkError == NetworkError.MessageToLong)
		uint8_t L_10 = L_9;
		G_B1_0 = L_10;
		if ((!(((uint32_t)L_10) == ((uint32_t)7))))
		{
			G_B7_0 = L_10;
			goto IL_00b2;
		}
	}
	{
		// if (m_TemporaryBufferReference != null && m_TemporaryBufferReference.IsAlive && ((byte[])m_TemporaryBufferReference.Target).Length >= receivedSize)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = __this->___m_TemporaryBufferReference_19;
		G_B2_0 = G_B1_0;
		if (!L_11)
		{
			G_B5_0 = G_B1_0;
			goto IL_0076;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_12);
		G_B3_0 = G_B2_0;
		if (!L_13)
		{
			G_B5_0 = G_B2_0;
			goto IL_0076;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_15, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_16 = V_3;
		G_B4_0 = G_B3_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_15, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->max_length))) < ((int32_t)L_16)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0076;
		}
	}
	{
		// tempBuffer = (byte[])m_TemporaryBufferReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_17 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_17);
		V_6 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_18, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		G_B6_0 = G_B4_0;
		goto IL_008b;
	}

IL_0076:
	{
		// tempBuffer = new byte[receivedSize];
		int32_t L_19 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_6 = L_20;
		// m_TemporaryBufferReference = new WeakReference(tempBuffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_6;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_22, (RuntimeObject*)L_21, NULL);
		__this->___m_TemporaryBufferReference_19 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TemporaryBufferReference_19), (void*)L_22);
		G_B6_0 = G_B5_0;
	}

IL_008b:
	{
		// eventType = UnityEngine.Networking.NetworkTransport.Receive(out hostId, out connectionId, out _, tempBuffer, tempBuffer.Length, out receivedSize, out error);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_6;
		NullCheck(L_24);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74((&V_1), (&V_2), (&V_5), L_23, ((int32_t)(((RuntimeArray*)L_24)->max_length)), (&V_3), (&V_4), NULL);
		V_0 = L_25;
		// payload = new ArraySegment<byte>(tempBuffer, 0, receivedSize);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_26 = ___1_payload;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_6;
		int32_t L_28 = V_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_29;
		memset((&L_29), 0, sizeof(L_29));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_29), L_27, 0, L_28, /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_26)->____array_1), (void*)NULL);
		G_B8_0 = G_B6_0;
		goto IL_00c5;
	}

IL_00b2:
	{
		// payload = new ArraySegment<byte>(m_MessageBuffer, 0, receivedSize);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_30 = ___1_payload;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___m_MessageBuffer_18;
		int32_t L_32 = V_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_33;
		memset((&L_33), 0, sizeof(L_33));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_33), L_31, 0, L_32, /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_30 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_30)->____array_1), (void*)NULL);
		G_B8_0 = G_B7_0;
	}

IL_00c5:
	{
		// if (networkError == NetworkError.Timeout)
		if ((!(((uint32_t)G_B8_0) == ((uint32_t)6))))
		{
			goto IL_00ca;
		}
	}
	{
		// eventType = NetworkEventType.DisconnectEvent;
		V_0 = 2;
	}

IL_00ca:
	{
		int32_t L_34 = V_0;
		switch (L_34)
		{
			case 0:
			{
				goto IL_00e6;
			}
			case 1:
			{
				goto IL_00e8;
			}
			case 2:
			{
				goto IL_00ea;
			}
			case 3:
			{
				goto IL_00ec;
			}
			case 4:
			{
				goto IL_00ec;
			}
		}
	}
	{
		goto IL_00ec;
	}

IL_00e6:
	{
		// return NetworkEvent.Data;
		return (int32_t)(0);
	}

IL_00e8:
	{
		// return NetworkEvent.Connect;
		return (int32_t)(1);
	}

IL_00ea:
	{
		// return NetworkEvent.Disconnect;
		return (int32_t)(2);
	}

IL_00ec:
	{
		// return NetworkEvent.Nothing;
		return (int32_t)(4);
	}
}
// System.Boolean Unity.Netcode.Transports.UNET.UNetTransport::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UNetTransport_StartClient_m7D430B310E7E678616409CBD9DC7A62B1730471C (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// m_ServerHostId = UnityEngine.Networking.NetworkTransport.AddHost(new HostTopology(GetConfig(), 1), 0, null);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0;
		L_0 = UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64(__this, NULL);
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_1 = (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F*)il2cpp_codegen_object_new(HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13(L_1, L_0, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NetworkTransport_AddHost_m2C18DF965A03542887B43E391DC153A0CB44F33C(L_1, 0, (String_t*)NULL, NULL);
		__this->___m_ServerHostId_21 = L_2;
		// m_ServerConnectionId = UnityEngine.Networking.NetworkTransport.Connect(m_ServerHostId, ConnectAddress, ConnectPort, 0, out byte error);
		int32_t L_3 = __this->___m_ServerHostId_21;
		String_t* L_4 = __this->___ConnectAddress_14;
		int32_t L_5 = __this->___ConnectPort_15;
		int32_t L_6;
		L_6 = NetworkTransport_Connect_mF7BC9C0E04D5D5D6763128FAB3F51FD5CF62BDEC(L_3, L_4, L_5, 0, (&V_0), NULL);
		__this->___m_ServerConnectionId_20 = L_6;
		// return (NetworkError)error == NetworkError.Ok;
		uint8_t L_7 = V_0;
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Netcode.Transports.UNET.UNetTransport::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UNetTransport_StartServer_mA835EB4590F0F107C20EADFB3B6A9816D6BEF7F9 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* V_0 = NULL;
	{
		// var topology = new HostTopology(GetConfig(), MaxConnections);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0;
		L_0 = UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64(__this, NULL);
		int32_t L_1 = __this->___MaxConnections_12;
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_2 = (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F*)il2cpp_codegen_object_new(HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// return -1 != UnityEngine.Networking.NetworkTransport.AddHost(topology, ServerListenPort, null);
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_3 = V_0;
		int32_t L_4 = __this->___ServerListenPort_16;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = NetworkTransport_AddHost_m2C18DF965A03542887B43E391DC153A0CB44F33C(L_3, L_4, (String_t*)NULL, NULL);
		return (bool)((((int32_t)((((int32_t)(-1)) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::DisconnectRemoteClient(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_DisconnectRemoteClient_m6BF77B6EE4222030BEB84EE397A10C6364258DE0 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___0_clientId;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// UnityEngine.Networking.NetworkTransport.Disconnect((int)hostId, (int)connectionId, out byte error);
		uint8_t L_1 = V_0;
		uint16_t L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20(L_1, L_2, (&V_2), NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::DisconnectLocalClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_DisconnectLocalClient_mC6DD90DD7A10B23BA6AF74DC6CAF10F6A079ECBC (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// UnityEngine.Networking.NetworkTransport.Disconnect(m_ServerHostId, m_ServerConnectionId, out byte error);
		int32_t L_0 = __this->___m_ServerHostId_21;
		int32_t L_1 = __this->___m_ServerConnectionId_20;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20(L_0, L_1, (&V_0), NULL);
		// }
		return;
	}
}
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::GetCurrentRtt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetCurrentRtt_m2B1E15B3E50EB2428605CCBB66F3BEFA0715B9DD (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___0_clientId;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// return (ulong)UnityEngine.Networking.NetworkTransport.GetCurrentRTT((int)hostId, (int)connectionId, out byte error);
		uint8_t L_1 = V_0;
		uint16_t L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NetworkTransport_GetCurrentRTT_mB6407834EF7EF2DE689EFF0CB276825A51C3E10D(L_1, L_2, (&V_2), NULL);
		return ((int64_t)L_3);
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Shutdown_m7FF84172B99ED983BF242F5BF2CBDC6EF1B5104A (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Networking.NetworkTransport.Shutdown();
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_Shutdown_mBC882DF0C55BA635D3E0281F95D9BFC2F9FE1996(NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::Initialize(Unity.Netcode.NetworkManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Initialize_m4FFEE72C84D864C2D8DB8C6F73A01713CDAAC265 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___0_networkManager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager = networkManager;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = ___0_networkManager;
		__this->___NetworkManager_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NetworkManager_22), (void*)L_0);
		// m_MessageBuffer = new byte[MessageBufferSize];
		int32_t L_1 = __this->___MessageBufferSize_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___m_MessageBuffer_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MessageBuffer_18), (void*)L_2);
		// UnityEngine.Networking.NetworkTransport.Init();
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_Init_m0ADB18EAE22E2B2AFD8183ED3A3EE71A6020B0BE(NULL);
		// }
		return;
	}
}
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::GetNetcodeClientId(System.Byte,System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint8_t ___0_hostId, uint16_t ___1_connectionId, bool ___2_isServer, const RuntimeMethod* method) 
{
	{
		// if (isServer)
		bool L_0 = ___2_isServer;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		// return 0;
		return ((int64_t)0);
	}

IL_0006:
	{
		// return (connectionId | (ulong)hostId << 16) + 1;
		uint16_t L_1 = ___1_connectionId;
		uint8_t L_2 = ___0_hostId;
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_1)|((int64_t)(((int64_t)(uint64_t)L_2)<<((int32_t)16))))), ((int64_t)1)));
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::GetUNetConnectionDetails(System.UInt64,System.Byte&,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, uint8_t* ___1_hostId, uint16_t* ___2_connectionId, const RuntimeMethod* method) 
{
	{
		// if (clientId == 0)
		uint64_t L_0 = ___0_clientId;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// hostId = (byte)m_ServerHostId;
		uint8_t* L_1 = ___1_hostId;
		int32_t L_2 = __this->___m_ServerHostId_21;
		*((int8_t*)L_1) = (int8_t)((int32_t)(uint8_t)L_2);
		// connectionId = (ushort)m_ServerConnectionId;
		uint16_t* L_3 = ___2_connectionId;
		int32_t L_4 = __this->___m_ServerConnectionId_20;
		*((int16_t*)L_3) = (int16_t)((int32_t)(uint16_t)L_4);
		return;
	}

IL_0016:
	{
		// hostId = (byte)((clientId - 1) >> 16);
		uint8_t* L_5 = ___1_hostId;
		uint64_t L_6 = ___0_clientId;
		*((int8_t*)L_5) = (int8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_6, ((int64_t)1)))>>((int32_t)16))));
		// connectionId = (ushort)((clientId - 1));
		uint16_t* L_7 = ___2_connectionId;
		uint64_t L_8 = ___0_clientId;
		*((int16_t*)L_7) = (int16_t)((int32_t)(uint16_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_8, ((int64_t)1))));
		// }
		return;
	}
}
// UnityEngine.Networking.ConnectionConfig Unity.Netcode.Transports.UNET.UNetTransport::GetConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* V_0 = NULL;
	{
		// var connectionConfig = new ConnectionConfig();
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0 = (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)il2cpp_codegen_object_new(ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConnectionConfig__ctor_mF6E6BBCAC0C41237A0A26FC3BDA8C882AC627113(L_0, NULL);
		V_0 = L_0;
		// m_UnreliableChannelId = connectionConfig.AddChannel(QosType.Unreliable);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_1 = V_0;
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_1, 0, NULL);
		__this->___m_UnreliableChannelId_6 = L_2;
		// m_UnreliableSequencedChannelId = connectionConfig.AddChannel(QosType.UnreliableSequenced);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_3 = V_0;
		NullCheck(L_3);
		uint8_t L_4;
		L_4 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_3, 2, NULL);
		__this->___m_UnreliableSequencedChannelId_7 = L_4;
		// m_ReliableChannelId = connectionConfig.AddChannel(QosType.Reliable);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_5 = V_0;
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_5, 3, NULL);
		__this->___m_ReliableChannelId_8 = L_6;
		// m_ReliableSequencedChannelId = connectionConfig.AddChannel(QosType.ReliableSequenced);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_7 = V_0;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_7, 5, NULL);
		__this->___m_ReliableSequencedChannelId_9 = L_8;
		// m_ReliableFragmentedSequencedChannelId = connectionConfig.AddChannel(QosType.ReliableFragmentedSequenced);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_9 = V_0;
		NullCheck(L_9);
		uint8_t L_10;
		L_10 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_9, ((int32_t)10), NULL);
		__this->___m_ReliableFragmentedSequencedChannelId_10 = L_10;
		// connectionConfig.MaxSentMessageQueueSize = (ushort)MaxSentMessageQueueSize;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_11 = V_0;
		int32_t L_12 = __this->___MaxSentMessageQueueSize_13;
		NullCheck(L_11);
		ConnectionConfig_set_MaxSentMessageQueueSize_m4EF0FBEF7C0BF9A3D28BE8577B7AA449522EDEE7(L_11, (uint16_t)((int32_t)(uint16_t)L_12), NULL);
		// return connectionConfig;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_13 = V_0;
		return L_13;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport__ctor_mF3B67C172CE0E35FB1BE70D11129B3B6C2A1447A (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MessageBufferSize = 1024 * 5;
		__this->___MessageBufferSize_11 = ((int32_t)5120);
		// public int MaxConnections = 100;
		__this->___MaxConnections_12 = ((int32_t)100);
		// public int MaxSentMessageQueueSize = 128;
		__this->___MaxSentMessageQueueSize_13 = ((int32_t)128);
		// public string ConnectAddress = "127.0.0.1";
		__this->___ConnectAddress_14 = _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ConnectAddress_14), (void*)_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		// public int ConnectPort = 7777;
		__this->___ConnectPort_15 = ((int32_t)7777);
		// public int ServerListenPort = 7777;
		__this->___ServerListenPort_16 = ((int32_t)7777);
		NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <NetStats_TypeRegistration>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNetStats_TypeRegistrationU3E_Run_m4764288AF8C406F68E0F92850930BB722B3ABF59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var);
		EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD(EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691(EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5(EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382(EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D(EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37(EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A(EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82(EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB(EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9(EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkPipeline_GetHashCode_m34FA347FD9DD395BCE190E09E593FA9B97C662EF_inline (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* __this, const RuntimeMethod* method) 
{
	{
		// return Id;
		int32_t L_0 = __this->___Id_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsServer { get; internal set; }
		bool L_0 = __this->___U3CIsServerU3Ek__BackingField_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkManager Singleton { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
