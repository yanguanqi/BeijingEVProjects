/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/assimpserializer.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString_Callback)(_in EarthView::World::Graphic::CMesh* mesh, _inout char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString_Callback)(_in EarthView::World::Graphic::CMesh* mesh, _inout char*& name);
			class CAssimpSerializerListenerProxy : public EarthView::World::Graphic::CAssimpSerializerListener
			{
			private:
				EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString_Callback* m_EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString_Callback;
				EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString_Callback* m_EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString_Callback;
			public:
				CAssimpSerializerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAssimpSerializerListener(pList)
				{
					m_EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString(EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString(EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString_Callback = pCallback;
				}
				virtual void processMaterialName(_in EarthView::World::Graphic::CMesh* mesh, _inout EVString& name)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString_Callback(mesh, name_Char);
						name = name_Char;
						if(name_Char != NULL){ delete[] name_Char;name_Char = NULL;}
					}
					else
						return this->CAssimpSerializerListener::processMaterialName(mesh, name);
				}
				virtual void processSkeletonName(_in EarthView::World::Graphic::CMesh* mesh, _inout EVString& name)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString_Callback(mesh, name_Char);
						name = name_Char;
						if(name_Char != NULL){ delete[] name_Char;name_Char = NULL;}
					}
					else
						return this->CAssimpSerializerListener::processSkeletonName(mesh, name);
				}
			};
			REGISTER_FACTORY_CLASS(CAssimpSerializerListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CAssimpSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializerListener*) pObjectXXXX;
				if (dynamic_cast<CAssimpSerializerListenerProxy*>((EarthView::World::Graphic::CAssimpSerializerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAssimpSerializerListener::processMaterialName(mesh, name1);
				else
					ptrNativeObject->processMaterialName(mesh, name1);
				name=name1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString_Callback* pCallback )
			{
				CAssimpSerializerListenerProxy* ptr = dynamic_cast<CAssimpSerializerListenerProxy*>((EarthView::World::Graphic::CAssimpSerializerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializerListener_processMaterialName_void_CMesh_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CAssimpSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAssimpSerializerListener::processMaterialName(mesh, name1);
				name=name1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CAssimpSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializerListener*) pObjectXXXX;
				if (dynamic_cast<CAssimpSerializerListenerProxy*>((EarthView::World::Graphic::CAssimpSerializerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAssimpSerializerListener::processSkeletonName(mesh, name1);
				else
					ptrNativeObject->processSkeletonName(mesh, name1);
				name=name1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString_Callback* pCallback )
			{
				CAssimpSerializerListenerProxy* ptr = dynamic_cast<CAssimpSerializerListenerProxy*>((EarthView::World::Graphic::CAssimpSerializerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializerListener_processSkeletonName_void_CMesh_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CAssimpSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAssimpSerializerListener::processSkeletonName(mesh, name1);
				name=name1.makeBuffer();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr_Callback)(_in const void* meshPtr);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream_Callback)(_inout void* m7zStream);
			class CAssimpToMeshListenerProxy : public EarthView::World::Graphic::CAssimpToMeshListener
			{
			private:
				EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr_Callback* m_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr_Callback;
				EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream_Callback* m_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream_Callback;
			public:
				CAssimpToMeshListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAssimpToMeshListener(pList)
				{
					m_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr(EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream(EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream_Callback = pCallback;
				}
				virtual void beforeWriteToFile(_in const EarthView::World::Graphic::CMeshPtr& meshPtr)
				{
					if(m_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr_Callback(&meshPtr);
					}
					else
						return this->CAssimpToMeshListener::beforeWriteToFile(meshPtr);
				}
				virtual void beforeWriteTo7Z(_inout EarthView::World::Spatial::MeshStream& m7zStream)
				{
					if(m_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream_Callback(&m7zStream);
					}
					else
						return this->CAssimpToMeshListener::beforeWriteTo7Z(m7zStream);
				}
			};
			REGISTER_FACTORY_CLASS(CAssimpToMeshListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr(void *pObjectXXXX, _in const void* meshPtr )
			{
				EarthView::World::Graphic::CAssimpToMeshListener* ptrNativeObject = (EarthView::World::Graphic::CAssimpToMeshListener*) pObjectXXXX;
				if (dynamic_cast<CAssimpToMeshListenerProxy*>((EarthView::World::Graphic::CAssimpToMeshListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAssimpToMeshListener::beforeWriteToFile(*(EarthView::World::Graphic::CMeshPtr*)meshPtr);
				else
					ptrNativeObject->beforeWriteToFile(*(EarthView::World::Graphic::CMeshPtr*)meshPtr);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr( void *pObjectXXXX, EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr_Callback* pCallback )
			{
				CAssimpToMeshListenerProxy* ptr = dynamic_cast<CAssimpToMeshListenerProxy*>((EarthView::World::Graphic::CAssimpToMeshListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteToFile_void_CMeshPtr_NoVirtual(void *pObjectXXXX, _in const void* meshPtr )
			{
				EarthView::World::Graphic::CAssimpToMeshListener* ptrNativeObject = (EarthView::World::Graphic::CAssimpToMeshListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAssimpToMeshListener::beforeWriteToFile(*(EarthView::World::Graphic::CMeshPtr*)meshPtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream(void *pObjectXXXX, _inout void* m7zStream )
			{
				EarthView::World::Graphic::CAssimpToMeshListener* ptrNativeObject = (EarthView::World::Graphic::CAssimpToMeshListener*) pObjectXXXX;
				if (dynamic_cast<CAssimpToMeshListenerProxy*>((EarthView::World::Graphic::CAssimpToMeshListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAssimpToMeshListener::beforeWriteTo7Z(*(EarthView::World::Spatial::MeshStream*)m7zStream);
				else
					ptrNativeObject->beforeWriteTo7Z(*(EarthView::World::Spatial::MeshStream*)m7zStream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream( void *pObjectXXXX, EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream_Callback* pCallback )
			{
				CAssimpToMeshListenerProxy* ptr = dynamic_cast<CAssimpToMeshListenerProxy*>((EarthView::World::Graphic::CAssimpToMeshListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpToMeshListener_beforeWriteTo7Z_void_MeshStream_NoVirtual(void *pObjectXXXX, _inout void* m7zStream )
			{
				EarthView::World::Graphic::CAssimpToMeshListener* ptrNativeObject = (EarthView::World::Graphic::CAssimpToMeshListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAssimpToMeshListener::beforeWriteTo7Z(*(EarthView::World::Spatial::MeshStream*)m7zStream);
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback)(_in char*& filePath, _inout EarthView::World::Graphic::CMesh* pMesh, _out void* aniStream, _out void* skeletonStream);
			typedef char*  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback)(_inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh, _inout void* miscParams);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_Callback)(_inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback)(_in ev_uint16 id, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr_Callback)(_in void* stream);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CAssimpSerializerProxy : public EarthView::World::Graphic::CAssimpSerializer
			{
			private:
				EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback* m_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback;
				EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString_Callback* m_EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString_Callback;
				EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* m_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback;
				EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* m_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_Callback;
				EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void_Callback* m_EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void_Callback;
				EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* m_EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback;
				EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian_Callback;
			public:
				CAssimpSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAssimpSerializer(pList)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr(EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString(EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh(EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void(EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr(EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr(EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual EVString getFileExtension() const
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString_Callback();
						return returnValue;
					}
					else
						return this->CAssimpSerializer::getFileExtension();
				}
				virtual void importMesh(_in const EVString& filePath, _inout EarthView::World::Graphic::CMesh* pMesh, _out EarthView::World::Core::MemoryDataStreamPtr& aniStream, _out EarthView::World::Core::MemoryDataStreamPtr& skeletonStream)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* filePath_Char = filePath.makeBuffer();
						m_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback(filePath_Char, pMesh, &aniStream, &skeletonStream);
					}
					else
						return this->CAssimpSerializer::importMesh(filePath, pMesh, aniStream, skeletonStream);
				}
				virtual void writeFileHeader()
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void_Callback();
					}
					else
						return this->CAssimpSerializer::writeFileHeader();
				}
				virtual void writeChunkHeader(_in ev_uint16 id, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback(id, size);
					}
					else
						return this->CAssimpSerializer::writeChunkHeader(id, size);
				}
				virtual void readFileHeader(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CAssimpSerializer::readFileHeader(stream);
				}
				virtual ev_uint16 readChunk(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr_Callback(&stream);
						return returnValue;
					}
					else
						return this->CAssimpSerializer::readChunk(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAssimpSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAssimpSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAssimpSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAssimpSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAssimpSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAssimpSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CAssimpSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CAssimpSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CAssimpSerializerProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				if (dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CAssimpSerializer::getFileExtension();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFileExtension();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CAssimpSerializer_getFileExtension_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CAssimpSerializer::getFileExtension();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_useDoubleSideLight_void_ev_bool(void *pObjectXXXX, _in ev_bool doubleSideLight )
			{
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ptrNativeObject->useDoubleSideLight(doubleSideLight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_setIsLeftHand_void_ev_bool(void *pObjectXXXX, _in ev_bool isLeftHand )
			{
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ptrNativeObject->setIsLeftHand(isLeftHand);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* filePath, _inout EarthView::World::Graphic::CMesh* pMesh, _out void* aniStream, _out void* skeletonStream )
			{
				EarthView::World::Core::ev_string filePath1 = filePath;
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				if (dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAssimpSerializer::importMesh(filePath1, pMesh, *(EarthView::World::Core::MemoryDataStreamPtr*)aniStream, *(EarthView::World::Core::MemoryDataStreamPtr*)skeletonStream);
				else
					ptrNativeObject->importMesh(filePath1, pMesh, *(EarthView::World::Core::MemoryDataStreamPtr*)aniStream, *(EarthView::World::Core::MemoryDataStreamPtr*)skeletonStream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* filePath, _inout EarthView::World::Graphic::CMesh* pMesh, _out void* aniStream, _out void* skeletonStream )
			{
				EarthView::World::Core::ev_string filePath1 = filePath;
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAssimpSerializer::importMesh(filePath1, pMesh, *(EarthView::World::Core::MemoryDataStreamPtr*)aniStream, *(EarthView::World::Core::MemoryDataStreamPtr*)skeletonStream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_setAlphaRejection_void_ev_byte(void *pObjectXXXX, _in ev_byte alphaRejection )
			{
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ptrNativeObject->setAlphaRejection(alphaRejection);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_setCompositorAllSubmesh_void_ev_bool(void *pObjectXXXX, _in const ev_bool b )
			{
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ptrNativeObject->setCompositorAllSubmesh(b);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_setExportNormal_void_ev_bool(void *pObjectXXXX, _in ev_bool exportNormal )
			{
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ptrNativeObject->setExportNormal(exportNormal);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_setOptimizeVertex_void_ev_bool(void *pObjectXXXX, _in ev_bool optimizeVertex )
			{
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ptrNativeObject->setOptimizeVertex(optimizeVertex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_setLocalMatrix_void_CMatrix4(void *pObjectXXXX, _in void* localMatrix )
			{
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ptrNativeObject->setLocalMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)localMatrix);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAssimpSerializer_assimp2mesh_ev_bool_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* daeFile, _in const char* desFolder, _in ev_bool toDDS )
			{
				EarthView::World::Core::ev_string daeFile1 = daeFile;
				EarthView::World::Core::ev_string desFolder1 = desFolder;
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->assimp2mesh(daeFile1, desFolder1, toDDS);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAssimpSerializer_assimp2mesh2_CMeshPtr_EVString_EVString_ev_bool_CAssimpToMeshListener(void *pObjectXXXX, _in const char* daeFile, _in const char* desFolder, _in ev_bool toDDS, _in EarthView::World::Graphic::CAssimpToMeshListener* listener )
			{
				EarthView::World::Core::ev_string daeFile1 = daeFile;
				EarthView::World::Core::ev_string desFolder1 = desFolder;
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CMeshPtr objXXXX = ptrNativeObject->assimp2mesh2(daeFile1, desFolder1, toDDS, listener);
				EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAssimpSerializer_assimp2mesh2_no_initresource_CMeshPtr_EVString_EVString_ev_bool_CAssimpToMeshListener_EVString(void *pObjectXXXX, _in const char* daeFile, _in const char* desFolder, _in ev_bool toDDS, _in EarthView::World::Graphic::CAssimpToMeshListener* listener, _in const char* resourceGroup )
			{
				EarthView::World::Core::ev_string daeFile1 = daeFile;
				EarthView::World::Core::ev_string desFolder1 = desFolder;
				EarthView::World::Core::ev_string resourceGroup1 = resourceGroup;
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CMeshPtr objXXXX = ptrNativeObject->assimp2mesh2_no_initresource(daeFile1, desFolder1, toDDS, listener, resourceGroup1);
				EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAssimpSerializer_assimp2mesh2_7z_no_initresource_CMeshPtr_EVString_EVString_ev_bool_CAssimpToMeshListener_EVString(void *pObjectXXXX, _in const char* daeFile, _in const char* desFolder, _in ev_bool toDDS, _in EarthView::World::Graphic::CAssimpToMeshListener* listener, _in const char* resourceGroup )
			{
				EarthView::World::Core::ev_string daeFile1 = daeFile;
				EarthView::World::Core::ev_string desFolder1 = desFolder;
				EarthView::World::Core::ev_string resourceGroup1 = resourceGroup;
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CMeshPtr objXXXX = ptrNativeObject->assimp2mesh2_7z_no_initresource(daeFile1, desFolder1, toDDS, listener, resourceGroup1);
				EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_getSourceTextureNames_void_EVString_CStringArray(void *pObjectXXXX, _in const char* daeFile, _inout void* textures )
			{
				EarthView::World::Core::ev_string daeFile1 = daeFile;
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ptrNativeObject->getSourceTextureNames(daeFile1, *(EarthView::World::Core::CStringArray*)textures);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_exportMesh_void_EVString_EVString(void *pObjectXXXX, _in char* meshFilePath, _in const char* exportFilePath )
			{
				EarthView::World::Core::ev_string meshFilePath1 = meshFilePath;
				EarthView::World::Core::ev_string exportFilePath1 = exportFilePath;
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ptrNativeObject->exportMesh(meshFilePath1, exportFilePath1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializer_exportMesh_void_CMesh_DataStreamPtr_EVString_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* pMesh, _in void* aniDataPtr, _in const char* exportFilePath, _in const ev_bool& exportFromLocal )
			{
				EarthView::World::Core::ev_string exportFilePath1 = exportFilePath;
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ptrNativeObject->exportMesh(pMesh, *(EarthView::World::Core::DataStreamPtr*)aniDataPtr, exportFilePath1, exportFromLocal);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAssimpSerializer_isValidExportFormat_ev_bool_CMesh_DataStreamPtr_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* pMesh, _in void* aniDataPtr, _in const char* exportFilePath, _inout ev_bool& isValidFormat, _in const ev_bool& exportFromLocal )
			{
				EarthView::World::Core::ev_string exportFilePath1 = exportFilePath;
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isValidExportFormat(pMesh, *(EarthView::World::Core::DataStreamPtr*)aniDataPtr, exportFilePath1, isValidFormat, exportFromLocal);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAssimpSerializer_isValidExportFormat_ev_bool_EVString_EVString_ev_bool(void *pObjectXXXX, _in char* meshFilePath, _in const char* exportFilePath, _inout ev_bool& isValidFormat )
			{
				EarthView::World::Core::ev_string meshFilePath1 = meshFilePath;
				EarthView::World::Core::ev_string exportFilePath1 = exportFilePath;
				EarthView::World::Graphic::CAssimpSerializer* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isValidExportFormat(meshFilePath1, exportFilePath1, isValidFormat);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_importMesh_void_DataStreamPtr_CMesh(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_writeFileHeader_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_readFileHeader_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_readChunk_ev_uint16_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CAssimpSerializerProxy* ptr = dynamic_cast<CAssimpSerializerProxy*>((EarthView::World::Graphic::CAssimpSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer_Callback)(_in EarthView::World::Graphic::CAssimpSerializer* pSerializer);
			typedef char*  ( _stdcall EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString_Callback)();
			typedef EarthView::World::Graphic::CModelSerializer*  ( _stdcall EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CModelSerializer_Callback)(_in EarthView::World::Graphic::CModelSerializer* pSerializer);
			class CAssimpSerializerFactoryProxy : public EarthView::World::Graphic::CAssimpSerializerFactory
			{
			private:
				EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer_Callback* m_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer_Callback;
				EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString_Callback* m_EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString_Callback;
				EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer_Callback* m_EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer_Callback;
				EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CModelSerializer_Callback* m_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CModelSerializer_Callback;
			public:
				CAssimpSerializerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CAssimpSerializerFactory(pList)
				{
					m_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer_Callback = NULL;
					m_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CModelSerializer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer(EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString(EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer(EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CModelSerializer(EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CModelSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CModelSerializer_Callback = pCallback;
				}
				virtual EVString getFileExtension() const
				{
					if(m_EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString_Callback();
						return returnValue;
					}
					else
						return this->CAssimpSerializerFactory::getFileExtension();
				}
				virtual EarthView::World::Graphic::CModelSerializer* createInstance() const
				{
					if(m_EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CModelSerializer* returnValue = m_EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer_Callback();
						return returnValue;
					}
					else
						return this->CAssimpSerializerFactory::createInstance();
				}
				virtual void destroyInstance(_in EarthView::World::Graphic::CAssimpSerializer* pSerializer) const
				{
					if(m_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer_Callback(pSerializer);
					}
					else
						return this->CAssimpSerializerFactory::destroyInstance(pSerializer);
				}
			};
			REGISTER_FACTORY_CLASS(CAssimpSerializerFactoryProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAssimpSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CAssimpSerializerFactoryProxy*>((EarthView::World::Graphic::CAssimpSerializerFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CAssimpSerializerFactory::getFileExtension();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFileExtension();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString_Callback* pCallback )
			{
				CAssimpSerializerFactoryProxy* ptr = dynamic_cast<CAssimpSerializerFactoryProxy*>((EarthView::World::Graphic::CAssimpSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CAssimpSerializerFactory_getFileExtension_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAssimpSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CAssimpSerializerFactory::getFileExtension();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializer*  _stdcall EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAssimpSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CAssimpSerializerFactoryProxy*>((EarthView::World::Graphic::CAssimpSerializerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAssimpSerializerFactory::createInstance();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->createInstance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer_Callback* pCallback )
			{
				CAssimpSerializerFactoryProxy* ptr = dynamic_cast<CAssimpSerializerFactoryProxy*>((EarthView::World::Graphic::CAssimpSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializer*  _stdcall EarthView_World_Graphic_CAssimpSerializerFactory_createInstance_CModelSerializer_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAssimpSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjectXXXX;
				EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAssimpSerializerFactory::createInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer(void *pObjectXXXX, _in EarthView::World::Graphic::CAssimpSerializer* pSerializer )
			{
				const EarthView::World::Graphic::CAssimpSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CAssimpSerializerFactoryProxy*>((EarthView::World::Graphic::CAssimpSerializerFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAssimpSerializerFactory::destroyInstance(pSerializer);
				else
					ptrNativeObject->destroyInstance(pSerializer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer_Callback* pCallback )
			{
				CAssimpSerializerFactoryProxy* ptr = dynamic_cast<CAssimpSerializerFactoryProxy*>((EarthView::World::Graphic::CAssimpSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CAssimpSerializer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CAssimpSerializer* pSerializer )
			{
				const EarthView::World::Graphic::CAssimpSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAssimpSerializerFactory::destroyInstance(pSerializer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CModelSerializer( void *pObjectXXXX, EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CModelSerializer_Callback* pCallback )
			{
				CAssimpSerializerFactoryProxy* ptr = dynamic_cast<CAssimpSerializerFactoryProxy*>((EarthView::World::Graphic::CAssimpSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAssimpSerializerFactory_destroyInstance_void_CModelSerializer(pCallback);
				}
			}
		}
	}
}
