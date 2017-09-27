/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/fltserializer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString_Callback)(_in EarthView::World::Graphic::CMesh* mesh, _inout char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString_Callback)(_in EarthView::World::Graphic::CMesh* mesh, _inout char*& name);
			class CFltSerializerListenerProxy : public EarthView::World::Graphic::CFltSerializerListener
			{
			private:
				EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString_Callback* m_EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString_Callback;
				EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString_Callback* m_EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString_Callback;
			public:
				CFltSerializerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CFltSerializerListener(pList)
				{
					m_EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString(EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString(EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString_Callback = pCallback;
				}
				virtual void processMaterialName(_in EarthView::World::Graphic::CMesh* mesh, _inout EVString& name)
				{
					if(m_EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString_Callback(mesh, name_Char);
						name = name_Char;
						if(name_Char != NULL){ delete[] name_Char;name_Char = NULL;}
					}
					else
						return this->CFltSerializerListener::processMaterialName(mesh, name);
				}
				virtual void processSkeletonName(_in EarthView::World::Graphic::CMesh* mesh, _inout EVString& name)
				{
					if(m_EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString_Callback(mesh, name_Char);
						name = name_Char;
						if(name_Char != NULL){ delete[] name_Char;name_Char = NULL;}
					}
					else
						return this->CFltSerializerListener::processSkeletonName(mesh, name);
				}
			};
			REGISTER_FACTORY_CLASS(CFltSerializerListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CFltSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CFltSerializerListener*) pObjectXXXX;
				if (dynamic_cast<CFltSerializerListenerProxy*>((EarthView::World::Graphic::CFltSerializerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFltSerializerListener::processMaterialName(mesh, name1);
				else
					ptrNativeObject->processMaterialName(mesh, name1);
				name=name1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString_Callback* pCallback )
			{
				CFltSerializerListenerProxy* ptr = dynamic_cast<CFltSerializerListenerProxy*>((EarthView::World::Graphic::CFltSerializerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializerListener_processMaterialName_void_CMesh_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CFltSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CFltSerializerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFltSerializerListener::processMaterialName(mesh, name1);
				name=name1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CFltSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CFltSerializerListener*) pObjectXXXX;
				if (dynamic_cast<CFltSerializerListenerProxy*>((EarthView::World::Graphic::CFltSerializerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFltSerializerListener::processSkeletonName(mesh, name1);
				else
					ptrNativeObject->processSkeletonName(mesh, name1);
				name=name1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString_Callback* pCallback )
			{
				CFltSerializerListenerProxy* ptr = dynamic_cast<CFltSerializerListenerProxy*>((EarthView::World::Graphic::CFltSerializerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializerListener_processSkeletonName_void_CMesh_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMesh* mesh, _inout char*& name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CFltSerializerListener* ptrNativeObject = (EarthView::World::Graphic::CFltSerializerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFltSerializerListener::processSkeletonName(mesh, name1);
				name=name1.makeBuffer();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback)(_in char*& filePath, _in EarthView::World::Graphic::CMesh* pMesh, _out void* aniStream, _out void* skeletonStream);
			typedef char*  ( _stdcall EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback)(_inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh, _inout void* miscParams);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_Callback)(_inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_writeFileHeader_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback)(_in ev_uint16 id, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr_Callback)(_in void* stream);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CFltSerializerProxy : public EarthView::World::Graphic::CFltSerializer
			{
			private:
				EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback* m_EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback;
				EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString_Callback* m_EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString_Callback;
				EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* m_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback;
				EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* m_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_Callback;
				EarthView_World_Graphic_CFltSerializer_writeFileHeader_void_Callback* m_EarthView_World_Graphic_CFltSerializer_writeFileHeader_void_Callback;
				EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* m_EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback;
				EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* m_EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr_Callback;
				EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian_Callback;
			public:
				CFltSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CFltSerializer(pList)
				{
					m_EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_writeFileHeader_void_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr(EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString(EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh(EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_writeFileHeader_void(EarthView_World_Graphic_CFltSerializer_writeFileHeader_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_writeFileHeader_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr(EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr(EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual EVString getFileExtension() const
				{
					if(m_EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFltSerializer::getFileExtension();
				}
				virtual void importMesh(_in const EVString& filePath, _in EarthView::World::Graphic::CMesh* pMesh, _out EarthView::World::Core::MemoryDataStreamPtr& aniStream, _out EarthView::World::Core::MemoryDataStreamPtr& skeletonStream)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* filePath_Char = filePath.makeBuffer();
						m_EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback(filePath_Char, pMesh, &aniStream, &skeletonStream);
					}
					else
						return this->CFltSerializer::importMesh(filePath, pMesh, aniStream, skeletonStream);
				}
				virtual void writeFileHeader()
				{
					if(m_EarthView_World_Graphic_CFltSerializer_writeFileHeader_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializer_writeFileHeader_void_Callback();
					}
					else
						return this->CFltSerializer::writeFileHeader();
				}
				virtual void writeChunkHeader(_in ev_uint16 id, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback(id, size);
					}
					else
						return this->CFltSerializer::writeChunkHeader(id, size);
				}
				virtual void readFileHeader(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CFltSerializer::readFileHeader(stream);
				}
				virtual ev_uint16 readChunk(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr_Callback(&stream);
						return returnValue;
					}
					else
						return this->CFltSerializer::readChunk(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CFltSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CFltSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CFltSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CFltSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CFltSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CFltSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CFltSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CFltSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CFltSerializerProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFltSerializer* ptrNativeObject = (EarthView::World::Graphic::CFltSerializer*) pObjectXXXX;
				if (dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFltSerializer::getFileExtension();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFileExtension();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFltSerializer_getFileExtension_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFltSerializer* ptrNativeObject = (EarthView::World::Graphic::CFltSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFltSerializer::getFileExtension();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* filePath, _in EarthView::World::Graphic::CMesh* pMesh, _out void* aniStream, _out void* skeletonStream )
			{
				EarthView::World::Core::ev_string filePath1 = filePath;
				EarthView::World::Graphic::CFltSerializer* ptrNativeObject = (EarthView::World::Graphic::CFltSerializer*) pObjectXXXX;
				if (dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFltSerializer::importMesh(filePath1, pMesh, *(EarthView::World::Core::MemoryDataStreamPtr*)aniStream, *(EarthView::World::Core::MemoryDataStreamPtr*)skeletonStream);
				else
					ptrNativeObject->importMesh(filePath1, pMesh, *(EarthView::World::Core::MemoryDataStreamPtr*)aniStream, *(EarthView::World::Core::MemoryDataStreamPtr*)skeletonStream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializer_importMesh_void_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* filePath, _in EarthView::World::Graphic::CMesh* pMesh, _out void* aniStream, _out void* skeletonStream )
			{
				EarthView::World::Core::ev_string filePath1 = filePath;
				EarthView::World::Graphic::CFltSerializer* ptrNativeObject = (EarthView::World::Graphic::CFltSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFltSerializer::importMesh(filePath1, pMesh, *(EarthView::World::Core::MemoryDataStreamPtr*)aniStream, *(EarthView::World::Core::MemoryDataStreamPtr*)skeletonStream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializer_setCompositorAllSubmesh_void_ev_bool(void *pObjectXXXX, _in const ev_bool b )
			{
				EarthView::World::Graphic::CFltSerializer* ptrNativeObject = (EarthView::World::Graphic::CFltSerializer*) pObjectXXXX;
				ptrNativeObject->setCompositorAllSubmesh(b);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializer_setAlphaRejection_void_ev_byte(void *pObjectXXXX, _in ev_byte alphaRejection )
			{
				EarthView::World::Graphic::CFltSerializer* ptrNativeObject = (EarthView::World::Graphic::CFltSerializer*) pObjectXXXX;
				ptrNativeObject->setAlphaRejection(alphaRejection);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFltSerializer_flt2mesh_ev_bool_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* fltFile, _in const char* desFolder, _in ev_bool toDDS )
			{
				EarthView::World::Core::ev_string fltFile1 = fltFile;
				EarthView::World::Core::ev_string desFolder1 = desFolder;
				EarthView::World::Graphic::CFltSerializer* ptrNativeObject = (EarthView::World::Graphic::CFltSerializer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->flt2mesh(fltFile1, desFolder1, toDDS);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializer_useDoubleSideLight_void_ev_bool(void *pObjectXXXX, _in ev_bool doubleSideLight )
			{
				EarthView::World::Graphic::CFltSerializer* ptrNativeObject = (EarthView::World::Graphic::CFltSerializer*) pObjectXXXX;
				ptrNativeObject->useDoubleSideLight(doubleSideLight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializer_setLocalMatrix_void_CMatrix4(void *pObjectXXXX, _in void* localMatrix )
			{
				EarthView::World::Graphic::CFltSerializer* ptrNativeObject = (EarthView::World::Graphic::CFltSerializer*) pObjectXXXX;
				ptrNativeObject->setLocalMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)localMatrix);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_importMesh_void_DataStreamPtr_CMesh(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_writeFileHeader_void( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_writeFileHeader_void_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_writeFileHeader_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_readFileHeader_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_readChunk_ev_uint16_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CFltSerializerProxy* ptr = dynamic_cast<CFltSerializerProxy*>((EarthView::World::Graphic::CFltSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer_Callback)(_in EarthView::World::Graphic::CFltSerializer* pSerializer);
			typedef char*  ( _stdcall EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString_Callback)();
			typedef EarthView::World::Graphic::CModelSerializer*  ( _stdcall EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CModelSerializer_Callback)(_in EarthView::World::Graphic::CModelSerializer* pSerializer);
			class CFltSerializerFactoryProxy : public EarthView::World::Graphic::CFltSerializerFactory
			{
			private:
				EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer_Callback* m_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer_Callback;
				EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString_Callback* m_EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString_Callback;
				EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer_Callback* m_EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer_Callback;
				EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CModelSerializer_Callback* m_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CModelSerializer_Callback;
			public:
				CFltSerializerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CFltSerializerFactory(pList)
				{
					m_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer_Callback = NULL;
					m_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CModelSerializer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer(EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString(EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer(EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CModelSerializer(EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CModelSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CModelSerializer_Callback = pCallback;
				}
				virtual EVString getFileExtension() const
				{
					if(m_EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFltSerializerFactory::getFileExtension();
				}
				virtual EarthView::World::Graphic::CModelSerializer* createInstance() const
				{
					if(m_EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CModelSerializer* returnValue = m_EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer_Callback();
						return returnValue;
					}
					else
						return this->CFltSerializerFactory::createInstance();
				}
				virtual void destroyInstance(_in EarthView::World::Graphic::CFltSerializer* pSerializer) const
				{
					if(m_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer_Callback(pSerializer);
					}
					else
						return this->CFltSerializerFactory::destroyInstance(pSerializer);
				}
			};
			REGISTER_FACTORY_CLASS(CFltSerializerFactoryProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFltSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CFltSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CFltSerializerFactoryProxy*>((EarthView::World::Graphic::CFltSerializerFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFltSerializerFactory::getFileExtension();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFileExtension();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString_Callback* pCallback )
			{
				CFltSerializerFactoryProxy* ptr = dynamic_cast<CFltSerializerFactoryProxy*>((EarthView::World::Graphic::CFltSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFltSerializerFactory_getFileExtension_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFltSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CFltSerializerFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFltSerializerFactory::getFileExtension();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializer*  _stdcall EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFltSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CFltSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CFltSerializerFactoryProxy*>((EarthView::World::Graphic::CFltSerializerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CFltSerializerFactory::createInstance();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->createInstance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer_Callback* pCallback )
			{
				CFltSerializerFactoryProxy* ptr = dynamic_cast<CFltSerializerFactoryProxy*>((EarthView::World::Graphic::CFltSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializer*  _stdcall EarthView_World_Graphic_CFltSerializerFactory_createInstance_CModelSerializer_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFltSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CFltSerializerFactory*) pObjectXXXX;
				EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CFltSerializerFactory::createInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer(void *pObjectXXXX, _in EarthView::World::Graphic::CFltSerializer* pSerializer )
			{
				const EarthView::World::Graphic::CFltSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CFltSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CFltSerializerFactoryProxy*>((EarthView::World::Graphic::CFltSerializerFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFltSerializerFactory::destroyInstance(pSerializer);
				else
					ptrNativeObject->destroyInstance(pSerializer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer_Callback* pCallback )
			{
				CFltSerializerFactoryProxy* ptr = dynamic_cast<CFltSerializerFactoryProxy*>((EarthView::World::Graphic::CFltSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CFltSerializer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CFltSerializer* pSerializer )
			{
				const EarthView::World::Graphic::CFltSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CFltSerializerFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFltSerializerFactory::destroyInstance(pSerializer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CModelSerializer( void *pObjectXXXX, EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CModelSerializer_Callback* pCallback )
			{
				CFltSerializerFactoryProxy* ptr = dynamic_cast<CFltSerializerFactoryProxy*>((EarthView::World::Graphic::CFltSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFltSerializerFactory_destroyInstance_void_CModelSerializer(pCallback);
				}
			}
		}
	}
}
