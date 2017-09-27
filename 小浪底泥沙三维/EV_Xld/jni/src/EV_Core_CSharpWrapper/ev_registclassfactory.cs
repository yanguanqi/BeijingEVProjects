using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Core_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::FileInfo", new EarthView.World.Core.FileInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::FileInfoList", new EarthView.World.Core.FileInfoListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::FileInfoListPtr", new EarthView.World.Core.FileInfoListPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CArchive", new EarthView.World.Core.ArchiveClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CArchiveProxy", new EarthView.World.Core.ArchiveClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CArchiveFactory", new EarthView.World.Core.ArchiveFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CArchiveFactoryProxy", new EarthView.World.Core.ArchiveFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CArchiveManager", new EarthView.World.Core.ArchiveManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CArchiveManager::ArchiveFactoryMap", new EarthView.World.Core.ArchiveManager.ArchiveFactoryMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CArchiveManager::ArchiveMap", new EarthView.World.Core.ArchiveManager.ArchiveMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CArchiveManager::ArchiveMapPair", new EarthView.World.Core.ArchiveManager.ArchiveMapPairClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CArchiveManager::ArchiveMapIterator", new EarthView.World.Core.ArchiveManager.ArchiveMapIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CAtomicInt", new EarthView.World.Core.AtomicIntClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CBaseTcpServerJob", new EarthView.World.Core.BaseTcpServerJobClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CBaseTcpServerJobProxy", new EarthView.World.Core.BaseTcpServerJobClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CommonStringPairList", new EarthView.World.Core.CommonStringPairListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::IntVector", new EarthView.World.Core.IntVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::IntPairVector", new EarthView.World.Core.IntPairVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::Int3Vector", new EarthView.World.Core.Int3VectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::RealVector", new EarthView.World.Core.RealVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::RealList", new EarthView.World.Core.RealListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDataStream", new EarthView.World.Core.DataStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDataStreamProxy", new EarthView.World.Core.DataStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDataStreamReader", new EarthView.World.Core.DataStreamReaderClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDataStreamWriter", new EarthView.World.Core.DataStreamWriterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::DataStreamPtr", new EarthView.World.Core.DataStreamPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::DataStreamList", new EarthView.World.Core.DataStreamListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::DataStreamListPtr", new EarthView.World.Core.DataStreamListPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CMemoryDataStream", new EarthView.World.Core.MemoryDataStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CMemoryDataStreamProxy", new EarthView.World.Core.MemoryDataStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::MemoryDataStreamPtr", new EarthView.World.Core.MemoryDataStreamPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFileStreamDataStream", new EarthView.World.Core.FileStreamDataStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFileStreamDataStreamProxy", new EarthView.World.Core.FileStreamDataStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CBufferDataStream", new EarthView.World.Core.BufferDataStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CBufferDataStreamProxy", new EarthView.World.Core.BufferDataStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFileHandleDataStream", new EarthView.World.Core.FileHandleDataStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFileHandleDataStreamProxy", new EarthView.World.Core.FileHandleDataStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CSqlBlobStream", new EarthView.World.Core.SqlBlobStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CSqlBlobStreamProxy", new EarthView.World.Core.SqlBlobStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::MemoryDataStreamVector", new EarthView.World.Core.MemoryDataStreamVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDefaultWorkQueue", new EarthView.World.Core.DefaultWorkQueueClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDefaultWorkQueueProxy", new EarthView.World.Core.DefaultWorkQueueClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDeviceUtility", new EarthView.World.Core.DeviceUtilityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDirectory", new EarthView.World.Core.DirectoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDynLib", new EarthView.World.Core.DynLibClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDynLibManager", new EarthView.World.Core.DynLibManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CLogger", new EarthView.World.Core.LoggerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CSemaphore", new EarthView.World.Core.SemaphoreClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CSemaphoreProxy", new EarthView.World.Core.SemaphoreClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CStringUtil", new EarthView.World.Core.StringUtilClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CCoreTime", new EarthView.World.Core.CoreTimeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CEvent", new EarthView.World.Core.EventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CTimerEvent", new EarthView.World.Core.TimerEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CEventDispatcher", new EarthView.World.Core.EventDispatcherClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CEventDispatcherProxy", new EarthView.World.Core.EventDispatcherClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFile", new EarthView.World.Core.FileClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::FileAttributes", new EarthView.World.Core.FileAttributesClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFileMapping", new EarthView.World.Core.FileMappingClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFileSystemArchive", new EarthView.World.Core.FileSystemArchiveClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFileSystemArchiveProxy", new EarthView.World.Core.FileSystemArchiveClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFileSystemArchiveFactory", new EarthView.World.Core.FileSystemArchiveFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFileSystemArchiveFactoryProxy", new EarthView.World.Core.FileSystemArchiveFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CException", new EarthView.World.Core.ExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CExceptionProxy", new EarthView.World.Core.ExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CUnimplementedException", new EarthView.World.Core.UnimplementedExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CUnimplementedExceptionProxy", new EarthView.World.Core.UnimplementedExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CNotLicensedException", new EarthView.World.Core.NotLicensedExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CNotLicensedExceptionProxy", new EarthView.World.Core.NotLicensedExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFileNotFoundException", new EarthView.World.Core.FileNotFoundExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CFileNotFoundExceptionProxy", new EarthView.World.Core.FileNotFoundExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CIOException", new EarthView.World.Core.IoexceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CIOExceptionProxy", new EarthView.World.Core.IoexceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CInvalidStateException", new EarthView.World.Core.InvalidStateExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CInvalidStateExceptionProxy", new EarthView.World.Core.InvalidStateExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CInvalidParametersException", new EarthView.World.Core.InvalidParametersExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CInvalidParametersExceptionProxy", new EarthView.World.Core.InvalidParametersExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CItemIdentityException", new EarthView.World.Core.ItemIdentityExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CItemIdentityExceptionProxy", new EarthView.World.Core.ItemIdentityExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CInternalErrorException", new EarthView.World.Core.InternalErrorExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CInternalErrorExceptionProxy", new EarthView.World.Core.InternalErrorExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CRenderingAPIException", new EarthView.World.Core.RenderingAPIExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CRenderingAPIExceptionProxy", new EarthView.World.Core.RenderingAPIExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CRuntimeAssertionException", new EarthView.World.Core.RuntimeAssertionExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CRuntimeAssertionExceptionProxy", new EarthView.World.Core.RuntimeAssertionExceptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::GUID", new EarthView.World.Core.GuidClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CAllocatedObject", new EarthView.World.Core.AllocatedObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CMutex", new EarthView.World.Core.MutexClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CRecursiveMutex", new EarthView.World.Core.RecursiveMutexClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CMutexLocker", new EarthView.World.Core.MutexLockerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CCondition", new EarthView.World.Core.ConditionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CEventObject", new EarthView.World.Core.EventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CEventObjectProxy", new EarthView.World.Core.EventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CPlugin", new EarthView.World.Core.PluginClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CPluginProxy", new EarthView.World.Core.PluginClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CReadWriteLock", new EarthView.World.Core.ReadWriteLockClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CReadLocker", new EarthView.World.Core.ReadLockerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWriteLocker", new EarthView.World.Core.WriteLockerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CStringArray", new EarthView.World.Core.StringArrayClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWStringArray", new EarthView.World.Core.WstringarrayClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CParameterDef", new EarthView.World.Core.ParameterDefClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::ParameterList", new EarthView.World.Core.ParameterListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CParamCommand", new EarthView.World.Core.ParamCommandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CParamCommandProxy", new EarthView.World.Core.ParamCommandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::ParamCommandMap", new EarthView.World.Core.ParamCommandMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CParamDictionary", new EarthView.World.Core.ParamDictionaryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::ParamDictionaryMap", new EarthView.World.Core.ParamDictionaryMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::IStringInterfaceObserver", new EarthView.World.Core.IstringinterfaceobserverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::IStringInterfaceObserverProxy", new EarthView.World.Core.IstringinterfaceobserverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CStringInterface", new EarthView.World.Core.StringInterfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CStringInterfaceProxy", new EarthView.World.Core.StringInterfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::StringVector", new EarthView.World.Core.StringVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::StringVectorPtr", new EarthView.World.Core.StringVectorPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CTcpClient", new EarthView.World.Core.TcpClientClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CTcpClientProxy", new EarthView.World.Core.TcpClientClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CTcpServer", new EarthView.World.Core.TcpServerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CTcpServerProxy", new EarthView.World.Core.TcpServerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CThreadFunc", new EarthView.World.Core.ThreadFuncClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CThreadFuncProxy", new EarthView.World.Core.ThreadFuncClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CThread", new EarthView.World.Core.ThreadClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CThreadProxy", new EarthView.World.Core.ThreadClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CVariant", new EarthView.World.Core.VariantClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CVariantArray", new EarthView.World.Core.VariantArrayClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueueChannelListener", new EarthView.World.Core.WorkQueueChannelListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueueChannelListenerProxy", new EarthView.World.Core.WorkQueueChannelListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue", new EarthView.World.Core.WorkQueueClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueueProxy", new EarthView.World.Core.WorkQueueClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::RequestPara", new EarthView.World.Core.WorkQueue.RequestParaClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::RequestParaProxy", new EarthView.World.Core.WorkQueue.RequestParaClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::ResponsePara", new EarthView.World.Core.WorkQueue.ResponseParaClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::ResponseParaProxy", new EarthView.World.Core.WorkQueue.ResponseParaClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CRequest", new EarthView.World.Core.WorkQueue.RequestClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CResponse", new EarthView.World.Core.WorkQueue.ResponseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CRequestHandler", new EarthView.World.Core.WorkQueue.RequestHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CRequestHandlerProxy", new EarthView.World.Core.WorkQueue.RequestHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CResponseHandler", new EarthView.World.Core.WorkQueue.ResponseHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CResponseHandlerProxy", new EarthView.World.Core.WorkQueue.ResponseHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDefaultWorkQueueBase", new EarthView.World.Core.DefaultWorkQueueBaseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDefaultWorkQueueBaseProxy", new EarthView.World.Core.DefaultWorkQueueBaseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder", new EarthView.World.Core.DefaultWorkQueueBase.RequestHandlerHolderClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CBackgroundQueue", new EarthView.World.Core.BackgroundQueueClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CBackgroundQueueProxy", new EarthView.World.Core.BackgroundQueueClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CBackgroundQueueManager", new EarthView.World.Core.BackgroundQueueManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CXmlFile", new EarthView.World.Core.XmlFileClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CXmlElement", new EarthView.World.Core.XmlElementClassFactory());
	}
}

