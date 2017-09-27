/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/serializer.h"
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
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CSerializer_writeFileHeader_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback)(_in ev_uint16 id, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_Callback)(_in void* stream);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CSerializerProxy : public EarthView::World::Graphic::CSerializer
			{
			private:
				EarthView_World_Graphic_CSerializer_writeFileHeader_void_Callback* m_EarthView_World_Graphic_CSerializer_writeFileHeader_void_Callback;
				EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* m_EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback;
				EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_Callback;
			public:
				CSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSerializer(pList)
				{
					m_EarthView_World_Graphic_CSerializer_writeFileHeader_void_Callback = NULL;
					m_EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_writeFileHeader_void(EarthView_World_Graphic_CSerializer_writeFileHeader_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_writeFileHeader_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr(EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr(EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void writeFileHeader()
				{
					if(m_EarthView_World_Graphic_CSerializer_writeFileHeader_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSerializer_writeFileHeader_void_Callback();
					}
					else
						return this->CSerializer::writeFileHeader();
				}
				virtual void writeChunkHeader(_in ev_uint16 id, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback(id, size);
					}
					else
						return this->CSerializer::writeChunkHeader(id, size);
				}
				virtual void readFileHeader(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CSerializer::readFileHeader(stream);
				}
				virtual ev_uint16 readChunk(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_Callback(&stream);
						return returnValue;
					}
					else
						return this->CSerializer::readChunk(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_writeFileHeader_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSerializer::writeFileHeader();
				else
					ptrNativeObject->writeFileHeader();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_writeFileHeader_void( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_writeFileHeader_void_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_writeFileHeader_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_writeFileHeader_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSerializer::writeFileHeader();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(void *pObjectXXXX, _in ev_uint16 id, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSerializer::writeChunkHeader(id, size);
				else
					ptrNativeObject->writeChunkHeader(id, size);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint16 id, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSerializer::writeChunkHeader(id, size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSerializer::readFileHeader(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->readFileHeader(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_readFileHeader_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSerializer::readFileHeader(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSerializer::readChunk(*(EarthView::World::Core::DataStreamPtr*)stream);
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->readChunk(*(EarthView::World::Core::DataStreamPtr*)stream);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSerializer_readChunk_ev_uint16_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSerializer::readChunk(*(EarthView::World::Core::DataStreamPtr*)stream);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSerializer::flipToLittleEndian(pData, size, count);
				else
					ptrNativeObject->flipToLittleEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSerializer::flipToLittleEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSerializer::flipToLittleEndian(pData, size);
				else
					ptrNativeObject->flipToLittleEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipToLittleEndian_void_void_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSerializer::flipToLittleEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSerializer::flipFromLittleEndian(pData, size, count);
				else
					ptrNativeObject->flipFromLittleEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSerializer::flipFromLittleEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSerializer::flipFromLittleEndian(pData, size);
				else
					ptrNativeObject->flipFromLittleEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipFromLittleEndian_void_void_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSerializer::flipFromLittleEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSerializer::flipEndian(pData, size, count);
				else
					ptrNativeObject->flipEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSerializer::flipEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSerializer::flipEndian(pData, size);
				else
					ptrNativeObject->flipEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_flipEndian_void_void_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSerializer::flipEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSerializer::determineEndianness(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->determineEndianness(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_determineEndianness_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSerializer::determineEndianness(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian(void *pObjectXXXX, _in int requestedEndian )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				if (dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSerializer::determineEndianness((EarthView::World::Graphic::CSerializer::Endian)requestedEndian);
				else
					ptrNativeObject->determineEndianness((EarthView::World::Graphic::CSerializer::Endian)requestedEndian);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CSerializerProxy* ptr = dynamic_cast<CSerializerProxy*>((EarthView::World::Graphic::CSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSerializer_determineEndianness_void_Endian_NoVirtual(void *pObjectXXXX, _in int requestedEndian )
			{
				EarthView::World::Graphic::CSerializer* ptrNativeObject = (EarthView::World::Graphic::CSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSerializer::determineEndianness((EarthView::World::Graphic::CSerializer::Endian)requestedEndian);
			}
		}
	}
}
