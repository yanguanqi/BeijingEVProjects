/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/skeletonserializer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback)(_in ev_uint16 id, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_Callback)(_in void* stream);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CSkeletonSerializerProxy : public EarthView::World::Graphic::CSkeletonSerializer
			{
			private:
				EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void_Callback;
				EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback;
				EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian_Callback;
			public:
				CSkeletonSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSkeletonSerializer(pList)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void(EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr(EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr(EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void readFileHeader(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CSkeletonSerializer::readFileHeader(stream);
				}
				virtual void writeFileHeader()
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void_Callback();
					}
					else
						return this->CSkeletonSerializer::writeFileHeader();
				}
				virtual void writeChunkHeader(_in ev_uint16 id, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback(id, size);
					}
					else
						return this->CSkeletonSerializer::writeChunkHeader(id, size);
				}
				virtual ev_uint16 readChunk(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr_Callback(&stream);
						return returnValue;
					}
					else
						return this->CSkeletonSerializer::readChunk(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSkeletonSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSkeletonSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSkeletonSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSkeletonSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSkeletonSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSkeletonSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CSkeletonSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CSkeletonSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CSkeletonSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_EVString(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* pSkeleton, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CSkeletonSerializer* ptrNativeObject = (EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX;
				ptrNativeObject->exportSkeleton(pSkeleton, filename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_EVString_SkeletonVersion(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* pSkeleton, _in const char* filename, _in int ver )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CSkeletonSerializer* ptrNativeObject = (EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX;
				ptrNativeObject->exportSkeleton(pSkeleton, filename1, (EarthView::World::Graphic::SkeletonVersion)ver);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_EVString_SkeletonVersion_Endian(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* pSkeleton, _in const char* filename, _in int ver, _in int endianMode )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CSkeletonSerializer* ptrNativeObject = (EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX;
				ptrNativeObject->exportSkeleton(pSkeleton, filename1, (EarthView::World::Graphic::SkeletonVersion)ver, (EarthView::World::Graphic::CSerializer::Endian)endianMode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_DataStreamPtr(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* pSkeleton, _in void* stream )
			{
				EarthView::World::Graphic::CSkeletonSerializer* ptrNativeObject = (EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX;
				ptrNativeObject->exportSkeleton(pSkeleton, *(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_DataStreamPtr_SkeletonVersion(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* pSkeleton, _in void* stream, _in int ver )
			{
				EarthView::World::Graphic::CSkeletonSerializer* ptrNativeObject = (EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX;
				ptrNativeObject->exportSkeleton(pSkeleton, *(EarthView::World::Core::DataStreamPtr*)stream, (EarthView::World::Graphic::SkeletonVersion)ver);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeletonSerializer_exportSkeleton_void_CSkeleton_DataStreamPtr_SkeletonVersion_Endian(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* pSkeleton, _in void* stream, _in int ver, _in int endianMode )
			{
				EarthView::World::Graphic::CSkeletonSerializer* ptrNativeObject = (EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX;
				ptrNativeObject->exportSkeleton(pSkeleton, *(EarthView::World::Core::DataStreamPtr*)stream, (EarthView::World::Graphic::SkeletonVersion)ver, (EarthView::World::Graphic::CSerializer::Endian)endianMode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeletonSerializer_importSkeleton_void_DataStreamPtr_CSkeleton(void *pObjectXXXX, _in void* stream, _in EarthView::World::Graphic::CSkeleton* pDest )
			{
				EarthView::World::Graphic::CSkeletonSerializer* ptrNativeObject = (EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX;
				ptrNativeObject->importSkeleton(*(EarthView::World::Core::DataStreamPtr*)stream, pDest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSkeletonSerializer* ptrNativeObject = (EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX;
				if (dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeletonSerializer::readFileHeader(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->readFileHeader(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeletonSerializer_readFileHeader_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSkeletonSerializer* ptrNativeObject = (EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeletonSerializer::readFileHeader(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_writeFileHeader_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_readChunk_ev_uint16_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CSkeletonSerializerProxy* ptr = dynamic_cast<CSkeletonSerializerProxy*>((EarthView::World::Graphic::CSkeletonSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeletonSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
		}
	}
}
