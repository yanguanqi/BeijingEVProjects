/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/gemserializer.h"
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
			typedef char*  ( _stdcall EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback)(_inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh, _inout void* miscParams);
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_Callback)(_inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh);
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_writeFileHeader_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback)(_in ev_uint16 id, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr_Callback)(_in void* stream);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CGemSerializerProxy : public EarthView::World::Graphic::CGemSerializer
			{
			private:
				EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString_Callback* m_EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString_Callback;
				EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* m_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback;
				EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* m_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_Callback;
				EarthView_World_Graphic_CGemSerializer_writeFileHeader_void_Callback* m_EarthView_World_Graphic_CGemSerializer_writeFileHeader_void_Callback;
				EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* m_EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback;
				EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* m_EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr_Callback;
				EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian_Callback;
			public:
				CGemSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGemSerializer(pList)
				{
					m_EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_writeFileHeader_void_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString(EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh(EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_writeFileHeader_void(EarthView_World_Graphic_CGemSerializer_writeFileHeader_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_writeFileHeader_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr(EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr(EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual EVString getFileExtension() const
				{
					if(m_EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGemSerializer::getFileExtension();
				}
				virtual void importMesh(_inout EarthView::World::Core::DataStreamPtr& stream, _in EarthView::World::Graphic::CMesh* pMesh)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_Callback(&stream, pMesh);
					}
					else
						return this->CGemSerializer::importMesh(stream, pMesh);
				}
				virtual void writeFileHeader()
				{
					if(m_EarthView_World_Graphic_CGemSerializer_writeFileHeader_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_writeFileHeader_void_Callback();
					}
					else
						return this->CGemSerializer::writeFileHeader();
				}
				virtual void writeChunkHeader(_in ev_uint16 id, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback(id, size);
					}
					else
						return this->CGemSerializer::writeChunkHeader(id, size);
				}
				virtual void readFileHeader(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CGemSerializer::readFileHeader(stream);
				}
				virtual ev_uint16 readChunk(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr_Callback(&stream);
						return returnValue;
					}
					else
						return this->CGemSerializer::readChunk(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CGemSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CGemSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CGemSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CGemSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CGemSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CGemSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CGemSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CGemSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CGemSerializerProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGemSerializer* ptrNativeObject = (EarthView::World::Graphic::CGemSerializer*) pObjectXXXX;
				if (dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGemSerializer::getFileExtension();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFileExtension();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGemSerializer_getFileExtension_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGemSerializer* ptrNativeObject = (EarthView::World::Graphic::CGemSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGemSerializer::getFileExtension();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh(void *pObjectXXXX, _inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh )
			{
				EarthView::World::Graphic::CGemSerializer* ptrNativeObject = (EarthView::World::Graphic::CGemSerializer*) pObjectXXXX;
				if (dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGemSerializer::importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh);
				else
					ptrNativeObject->importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_NoVirtual(void *pObjectXXXX, _inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh )
			{
				EarthView::World::Graphic::CGemSerializer* ptrNativeObject = (EarthView::World::Graphic::CGemSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGemSerializer::importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_writeFileHeader_void( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_writeFileHeader_void_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_writeFileHeader_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_readFileHeader_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_readChunk_ev_uint16_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CGemSerializerProxy* ptr = dynamic_cast<CGemSerializerProxy*>((EarthView::World::Graphic::CGemSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString_Callback)();
			typedef EarthView::World::Graphic::CModelSerializer*  ( _stdcall EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer_Callback)(_in EarthView::World::Graphic::CModelSerializer* pSerializer);
			class CGemSerializerFactoryProxy : public EarthView::World::Graphic::CGemSerializerFactory
			{
			private:
				EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString_Callback* m_EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString_Callback;
				EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer_Callback* m_EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer_Callback;
				EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer_Callback* m_EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer_Callback;
			public:
				CGemSerializerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CGemSerializerFactory(pList)
				{
					m_EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer_Callback = NULL;
					m_EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString(EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer(EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer(EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer_Callback = pCallback;
				}
				virtual EVString getFileExtension() const
				{
					if(m_EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGemSerializerFactory::getFileExtension();
				}
				virtual EarthView::World::Graphic::CModelSerializer* createInstance() const
				{
					if(m_EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CModelSerializer* returnValue = m_EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer_Callback();
						return returnValue;
					}
					else
						return this->CGemSerializerFactory::createInstance();
				}
				virtual void destroyInstance(_in EarthView::World::Graphic::CModelSerializer* pSerializer) const
				{
					if(m_EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer_Callback(pSerializer);
					}
					else
						return this->CGemSerializerFactory::destroyInstance(pSerializer);
				}
			};
			REGISTER_FACTORY_CLASS(CGemSerializerFactoryProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGemSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CGemSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CGemSerializerFactoryProxy*>((EarthView::World::Graphic::CGemSerializerFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGemSerializerFactory::getFileExtension();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFileExtension();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString_Callback* pCallback )
			{
				CGemSerializerFactoryProxy* ptr = dynamic_cast<CGemSerializerFactoryProxy*>((EarthView::World::Graphic::CGemSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGemSerializerFactory_getFileExtension_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGemSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CGemSerializerFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGemSerializerFactory::getFileExtension();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializer*  _stdcall EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGemSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CGemSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CGemSerializerFactoryProxy*>((EarthView::World::Graphic::CGemSerializerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CGemSerializerFactory::createInstance();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->createInstance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer_Callback* pCallback )
			{
				CGemSerializerFactoryProxy* ptr = dynamic_cast<CGemSerializerFactoryProxy*>((EarthView::World::Graphic::CGemSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializer*  _stdcall EarthView_World_Graphic_CGemSerializerFactory_createInstance_CModelSerializer_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGemSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CGemSerializerFactory*) pObjectXXXX;
				EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CGemSerializerFactory::createInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer(void *pObjectXXXX, _in EarthView::World::Graphic::CModelSerializer* pSerializer )
			{
				const EarthView::World::Graphic::CGemSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CGemSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CGemSerializerFactoryProxy*>((EarthView::World::Graphic::CGemSerializerFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGemSerializerFactory::destroyInstance(pSerializer);
				else
					ptrNativeObject->destroyInstance(pSerializer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer( void *pObjectXXXX, EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer_Callback* pCallback )
			{
				CGemSerializerFactoryProxy* ptr = dynamic_cast<CGemSerializerFactoryProxy*>((EarthView::World::Graphic::CGemSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGemSerializerFactory_destroyInstance_void_CModelSerializer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CModelSerializer* pSerializer )
			{
				const EarthView::World::Graphic::CGemSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CGemSerializerFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGemSerializerFactory::destroyInstance(pSerializer);
			}
		}
	}
}
