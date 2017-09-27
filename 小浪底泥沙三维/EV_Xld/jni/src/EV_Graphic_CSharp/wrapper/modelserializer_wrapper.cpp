/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/modelserializer.h"
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
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_Callback)(_in EarthView::World::Graphic::CMesh* mesh, _inout char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_Callback)(_in EarthView::World::Graphic::CMesh* mesh, _inout char*& name);
			class CModelSerializerListenerProxy : public EarthView::World::Graphic::CModelSerializerListener
			{
			private:
				EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_Callback* m_EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_Callback;
				EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_Callback* m_EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_Callback;
			public:
				CModelSerializerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelSerializerListener(pList)
				{
					m_EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString(EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString(EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_Callback = pCallback;
				}
				virtual void processMaterialName(_in EarthView::World::Graphic::CMesh* mesh, _inout EVString& name)
				{
					if(m_EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_Callback(mesh, name_Char);
						name = name_Char;
						if(name_Char != NULL){ delete[] name_Char;name_Char = NULL;}
					}
					else
						return this->CModelSerializerListener::processMaterialName(mesh, name);
				}
				virtual void processSkeletonName(_in EarthView::World::Graphic::CMesh* mesh, _inout EVString& name)
				{
					if(m_EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_Callback(mesh, name_Char);
						name = name_Char;
						if(name_Char != NULL){ delete[] name_Char;name_Char = NULL;}
					}
					else
						return this->CModelSerializerListener::processSkeletonName(mesh, name);
				}
			};
			REGISTER_FACTORY_CLASS(CModelSerializerListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CModelSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerListener*) pObjectXXXX;
				if (dynamic_cast<CModelSerializerListenerProxy*>((EarthView::World::Graphic::CModelSerializerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CModelSerializerListener::processMaterialName(mesh, name1);
				else
					ptrNativeObject->processMaterialName(mesh, name1);
				name=name1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_Callback* pCallback )
			{
				CModelSerializerListenerProxy* ptr = dynamic_cast<CModelSerializerListenerProxy*>((EarthView::World::Graphic::CModelSerializerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CModelSerializerListener_processMaterialName_void_CMesh_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CModelSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CModelSerializerListener::processMaterialName(mesh, name1);
				name=name1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CModelSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerListener*) pObjectXXXX;
				if (dynamic_cast<CModelSerializerListenerProxy*>((EarthView::World::Graphic::CModelSerializerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CModelSerializerListener::processSkeletonName(mesh, name1);
				else
					ptrNativeObject->processSkeletonName(mesh, name1);
				name=name1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_Callback* pCallback )
			{
				CModelSerializerListenerProxy* ptr = dynamic_cast<CModelSerializerListenerProxy*>((EarthView::World::Graphic::CModelSerializerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CModelSerializerListener_processSkeletonName_void_CMesh_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CModelSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CModelSerializerListener::processSkeletonName(mesh, name1);
				name=name1.makeBuffer();
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback)(_inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh, _inout void* miscParams);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_Callback)(_inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_writeFileHeader_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback)(_in ev_uint16 id, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr_Callback)(_in void* stream);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CModelSerializerProxy : public EarthView::World::Graphic::CModelSerializer
			{
			private:
				EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_Callback* m_EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_Callback;
				EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* m_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback;
				EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* m_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_Callback;
				EarthView_World_Graphic_CModelSerializer_writeFileHeader_void_Callback* m_EarthView_World_Graphic_CModelSerializer_writeFileHeader_void_Callback;
				EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* m_EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback;
				EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* m_EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr_Callback;
				EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian_Callback;
			public:
				CModelSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelSerializer(pList)
				{
					m_EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_writeFileHeader_void_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString(EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh(EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_writeFileHeader_void(EarthView_World_Graphic_CModelSerializer_writeFileHeader_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_writeFileHeader_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr(EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr(EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual EVString getFileExtension() const
				{
					if(m_EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_Callback();
						return returnValue;
					}
					else
						return this->CModelSerializer::getFileExtension();
				}
				virtual void importMesh(_inout EarthView::World::Core::DataStreamPtr& stream, _in EarthView::World::Graphic::CMesh* pMesh, _inout EarthView::World::Core::CommonStringPairList& miscParams)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback(&stream, pMesh, &miscParams);
					}
					else
						return this->CModelSerializer::importMesh(stream, pMesh, miscParams);
				}
				virtual void importMesh(_inout EarthView::World::Core::DataStreamPtr& stream, _in EarthView::World::Graphic::CMesh* pMesh)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_Callback(&stream, pMesh);
					}
					else
						return this->CModelSerializer::importMesh(stream, pMesh);
				}
				virtual void writeFileHeader()
				{
					if(m_EarthView_World_Graphic_CModelSerializer_writeFileHeader_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_writeFileHeader_void_Callback();
					}
					else
						return this->CModelSerializer::writeFileHeader();
				}
				virtual void writeChunkHeader(_in ev_uint16 id, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback(id, size);
					}
					else
						return this->CModelSerializer::writeChunkHeader(id, size);
				}
				virtual void readFileHeader(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CModelSerializer::readFileHeader(stream);
				}
				virtual ev_uint16 readChunk(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr_Callback(&stream);
						return returnValue;
					}
					else
						return this->CModelSerializer::readChunk(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CModelSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CModelSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CModelSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CModelSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CModelSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CModelSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CModelSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CModelSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CModelSerializerProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CModelSerializer* ptrNativeObject = (EarthView::World::Graphic::CModelSerializer*) pObjectXXXX;
				if (dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CModelSerializer::getFileExtension();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFileExtension();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CModelSerializer_getFileExtension_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CModelSerializer* ptrNativeObject = (EarthView::World::Graphic::CModelSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CModelSerializer::getFileExtension();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(void *pObjectXXXX, _inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh, _inout void* miscParams )
			{
				EarthView::World::Graphic::CModelSerializer* ptrNativeObject = (EarthView::World::Graphic::CModelSerializer*) pObjectXXXX;
				if (dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CModelSerializer::importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh, *(EarthView::World::Core::CommonStringPairList*)miscParams);
				else
					ptrNativeObject->importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh, *(EarthView::World::Core::CommonStringPairList*)miscParams);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_NoVirtual(void *pObjectXXXX, _inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh, _inout void* miscParams )
			{
				EarthView::World::Graphic::CModelSerializer* ptrNativeObject = (EarthView::World::Graphic::CModelSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CModelSerializer::importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh, *(EarthView::World::Core::CommonStringPairList*)miscParams);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh(void *pObjectXXXX, _inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh )
			{
				EarthView::World::Graphic::CModelSerializer* ptrNativeObject = (EarthView::World::Graphic::CModelSerializer*) pObjectXXXX;
				if (dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CModelSerializer::importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh);
				else
					ptrNativeObject->importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CModelSerializer_importMesh_void_DataStreamPtr_CMesh_NoVirtual(void *pObjectXXXX, _inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh )
			{
				EarthView::World::Graphic::CModelSerializer* ptrNativeObject = (EarthView::World::Graphic::CModelSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CModelSerializer::importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CModelSerializer_setListener_void_CModelSerializerListener(void *pObjectXXXX, _in EarthView::World::Graphic::CModelSerializerListener* ref_listener )
			{
				EarthView::World::Graphic::CModelSerializer* ptrNativeObject = (EarthView::World::Graphic::CModelSerializer*) pObjectXXXX;
				ptrNativeObject->setListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializerListener*  _stdcall EarthView_World_Graphic_CModelSerializer_getListener_CModelSerializerListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CModelSerializer* ptrNativeObject = (EarthView::World::Graphic::CModelSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CModelSerializerListener* objXXXX = ptrNativeObject->getListener();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_writeFileHeader_void( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_writeFileHeader_void_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_writeFileHeader_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_readFileHeader_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_readChunk_ev_uint16_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CModelSerializerProxy* ptr = dynamic_cast<CModelSerializerProxy*>((EarthView::World::Graphic::CModelSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_Callback)();
			typedef EarthView::World::Graphic::CModelSerializer*  ( _stdcall EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_Callback)(_in EarthView::World::Graphic::CModelSerializer* pSerializer);
			class CModelSerializerFactoryProxy : public EarthView::World::Graphic::CModelSerializerFactory
			{
			private:
				EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_Callback* m_EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_Callback;
				EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_Callback* m_EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_Callback;
				EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_Callback* m_EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_Callback;
			public:
				CModelSerializerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelSerializerFactory(pList)
				{
					m_EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_Callback = NULL;
					m_EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString(EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer(EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer(EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_Callback = pCallback;
				}
				virtual EVString getFileExtension() const
				{
					if(m_EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_Callback();
						return returnValue;
					}
					else
						return this->CModelSerializerFactory::getFileExtension();
				}
				virtual EarthView::World::Graphic::CModelSerializer* createInstance() const
				{
					if(m_EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CModelSerializer* returnValue = m_EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_Callback();
						return returnValue;
					}
					else
						return this->CModelSerializerFactory::createInstance();
				}
				virtual void destroyInstance(_in EarthView::World::Graphic::CModelSerializer* pSerializer) const
				{
					if(m_EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_Callback(pSerializer);
					}
					else
						return this->CModelSerializerFactory::destroyInstance(pSerializer);
				}
			};
			REGISTER_FACTORY_CLASS(CModelSerializerFactoryProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CModelSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CModelSerializerFactoryProxy*>((EarthView::World::Graphic::CModelSerializerFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CModelSerializerFactory::getFileExtension();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFileExtension();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_Callback* pCallback )
			{
				CModelSerializerFactoryProxy* ptr = dynamic_cast<CModelSerializerFactoryProxy*>((EarthView::World::Graphic::CModelSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CModelSerializerFactory_getFileExtension_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CModelSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CModelSerializerFactory::getFileExtension();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializer*  _stdcall EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CModelSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CModelSerializerFactoryProxy*>((EarthView::World::Graphic::CModelSerializerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CModelSerializerFactory::createInstance();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->createInstance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_Callback* pCallback )
			{
				CModelSerializerFactoryProxy* ptr = dynamic_cast<CModelSerializerFactoryProxy*>((EarthView::World::Graphic::CModelSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializer*  _stdcall EarthView_World_Graphic_CModelSerializerFactory_createInstance_CModelSerializer_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CModelSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerFactory*) pObjectXXXX;
				EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CModelSerializerFactory::createInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer(void *pObjectXXXX, _in EarthView::World::Graphic::CModelSerializer* pSerializer )
			{
				const EarthView::World::Graphic::CModelSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CModelSerializerFactoryProxy*>((EarthView::World::Graphic::CModelSerializerFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CModelSerializerFactory::destroyInstance(pSerializer);
				else
					ptrNativeObject->destroyInstance(pSerializer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer( void *pObjectXXXX, EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_Callback* pCallback )
			{
				CModelSerializerFactoryProxy* ptr = dynamic_cast<CModelSerializerFactoryProxy*>((EarthView::World::Graphic::CModelSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CModelSerializerFactory_destroyInstance_void_CModelSerializer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CModelSerializer* pSerializer )
			{
				const EarthView::World::Graphic::CModelSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CModelSerializerFactory::destroyInstance(pSerializer);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CModelSerializerFactoryEnum_getSingleton_CModelSerializerFactoryEnum( )
			{
				EarthView::World::Graphic::CModelSerializerFactoryEnum& objXXXX = EarthView::World::Graphic::CModelSerializerFactoryEnum::getSingleton();
				EarthView::World::Graphic::CModelSerializerFactoryEnum *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializerFactoryEnum*  _stdcall EarthView_World_Graphic_CModelSerializerFactoryEnum_getSingletonPtr_CModelSerializerFactoryEnum( )
			{
				EarthView::World::Graphic::CModelSerializerFactoryEnum* objXXXX = EarthView::World::Graphic::CModelSerializerFactoryEnum::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CModelSerializerFactoryEnum_registerFactory_bool_CModelSerializerFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CModelSerializerFactory* ref_pFactory )
			{
				EarthView::World::Graphic::CModelSerializerFactoryEnum* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerFactoryEnum*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->registerFactory(ref_pFactory);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializerFactory*  _stdcall EarthView_World_Graphic_CModelSerializerFactoryEnum_getFactory_CModelSerializerFactory_EVString(void *pObjectXXXX, _in const char* fileExt )
			{
				EarthView::World::Core::ev_string fileExt1 = fileExt;
				EarthView::World::Graphic::CModelSerializerFactoryEnum* ptrNativeObject = (EarthView::World::Graphic::CModelSerializerFactoryEnum*) pObjectXXXX;
				EarthView::World::Graphic::CModelSerializerFactory* objXXXX = ptrNativeObject->getFactory(fileExt1);
				return objXXXX;
			}
		}
	}
}
