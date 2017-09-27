/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/meshserializer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef char*  ( _stdcall EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback)(_inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh, _inout void* miscParams);
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_Callback)(_inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh);
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback)(_in ev_uint16 id, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr_Callback)(_in void* stream);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CMeshSerializerProxy : public EarthView::World::Graphic::CMeshSerializer
			{
			private:
				EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString_Callback* m_EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString_Callback;
				EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* m_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback;
				EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* m_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_Callback;
				EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void_Callback* m_EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void_Callback;
				EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* m_EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback;
				EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* m_EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr_Callback;
				EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian_Callback;
			public:
				CMeshSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshSerializer(pList)
				{
					m_EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString(EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh(EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void(EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr(EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr(EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void importMesh(_inout EarthView::World::Core::DataStreamPtr& stream, _in EarthView::World::Graphic::CMesh* pMesh)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_Callback(&stream, pMesh);
					}
					else
						return this->CMeshSerializer::importMesh(stream, pMesh);
				}
				virtual EVString getFileExtension() const
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMeshSerializer::getFileExtension();
				}
				virtual void writeFileHeader()
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void_Callback();
					}
					else
						return this->CMeshSerializer::writeFileHeader();
				}
				virtual void writeChunkHeader(_in ev_uint16 id, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback(id, size);
					}
					else
						return this->CMeshSerializer::writeChunkHeader(id, size);
				}
				virtual void readFileHeader(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CMeshSerializer::readFileHeader(stream);
				}
				virtual ev_uint16 readChunk(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr_Callback(&stream);
						return returnValue;
					}
					else
						return this->CMeshSerializer::readChunk(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CMeshSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CMeshSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CMeshSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CMeshSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CMeshSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CMeshSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CMeshSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CMeshSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CMeshSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializer_exportMesh_void_CMesh_EVString_Endian(void *pObjectXXXX, _in const EarthView::World::Graphic::CMesh* pMesh, _in const char* filename, _in int endianMode )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				ptrNativeObject->exportMesh(pMesh, filename1, (EarthView::World::Graphic::CSerializer::Endian)endianMode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializer_exportMesh_void_CMesh_EVString(void *pObjectXXXX, _in const EarthView::World::Graphic::CMesh* pMesh, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				ptrNativeObject->exportMesh(pMesh, filename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializer_exportMesh_void_CMesh_EVString_MeshVersion_Endian(void *pObjectXXXX, _in const EarthView::World::Graphic::CMesh* pMesh, _in const char* filename, _in int version, _in int endianMode )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				ptrNativeObject->exportMesh(pMesh, filename1, (EarthView::World::Graphic::MeshVersion)version, (EarthView::World::Graphic::CSerializer::Endian)endianMode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializer_exportMesh_void_CMesh_EVString_MeshVersion(void *pObjectXXXX, _in const EarthView::World::Graphic::CMesh* pMesh, _in const char* filename, _in int version )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				ptrNativeObject->exportMesh(pMesh, filename1, (EarthView::World::Graphic::MeshVersion)version);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializer_exportMesh_void_CMesh_DataStreamPtr_Endian(void *pObjectXXXX, _in const EarthView::World::Graphic::CMesh* pMesh, _in void* stream, _in int endianMode )
			{
				EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				ptrNativeObject->exportMesh(pMesh, *(EarthView::World::Core::DataStreamPtr*)stream, (EarthView::World::Graphic::CSerializer::Endian)endianMode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializer_exportMesh_void_CMesh_DataStreamPtr(void *pObjectXXXX, _in const EarthView::World::Graphic::CMesh* pMesh, _in void* stream )
			{
				EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				ptrNativeObject->exportMesh(pMesh, *(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializer_exportMesh_void_CMesh_DataStreamPtr_MeshVersion_Endian(void *pObjectXXXX, _in const EarthView::World::Graphic::CMesh* pMesh, _in void* stream, _in int version, _in int endianMode )
			{
				EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				ptrNativeObject->exportMesh(pMesh, *(EarthView::World::Core::DataStreamPtr*)stream, (EarthView::World::Graphic::MeshVersion)version, (EarthView::World::Graphic::CSerializer::Endian)endianMode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializer_exportMesh_void_CMesh_DataStreamPtr_MeshVersion(void *pObjectXXXX, _in const EarthView::World::Graphic::CMesh* pMesh, _in void* stream, _in int version )
			{
				EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				ptrNativeObject->exportMesh(pMesh, *(EarthView::World::Core::DataStreamPtr*)stream, (EarthView::World::Graphic::MeshVersion)version);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh(void *pObjectXXXX, _inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh )
			{
				EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				if (dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMeshSerializer::importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh);
				else
					ptrNativeObject->importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_NoVirtual(void *pObjectXXXX, _inout void* stream, _in EarthView::World::Graphic::CMesh* pMesh )
			{
				EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMeshSerializer::importMesh(*(EarthView::World::Core::DataStreamPtr*)stream, pMesh);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				if (dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CMeshSerializer::getFileExtension();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFileExtension();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CMeshSerializer_getFileExtension_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CMeshSerializer::getFileExtension();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_importMesh_void_DataStreamPtr_CMesh_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_writeFileHeader_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_writeChunkHeader_void_ev_uint16_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_readFileHeader_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_readChunk_ev_uint16_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CMeshSerializerProxy* ptr = dynamic_cast<CMeshSerializerProxy*>((EarthView::World::Graphic::CMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString_Callback)();
			typedef EarthView::World::Graphic::CModelSerializer*  ( _stdcall EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer_Callback)(_in EarthView::World::Graphic::CModelSerializer* pSerializer);
			class CMeshSerializerFactoryProxy : public EarthView::World::Graphic::CMeshSerializerFactory
			{
			private:
				EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString_Callback* m_EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString_Callback;
				EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer_Callback* m_EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer_Callback;
				EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer_Callback* m_EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer_Callback;
			public:
				CMeshSerializerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshSerializerFactory(pList)
				{
					m_EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer_Callback = NULL;
					m_EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString(EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer(EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer(EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer_Callback = pCallback;
				}
				virtual EVString getFileExtension() const
				{
					if(m_EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMeshSerializerFactory::getFileExtension();
				}
				virtual EarthView::World::Graphic::CModelSerializer* createInstance() const
				{
					if(m_EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CModelSerializer* returnValue = m_EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer_Callback();
						return returnValue;
					}
					else
						return this->CMeshSerializerFactory::createInstance();
				}
				virtual void destroyInstance(_in EarthView::World::Graphic::CModelSerializer* pSerializer) const
				{
					if(m_EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer_Callback(pSerializer);
					}
					else
						return this->CMeshSerializerFactory::destroyInstance(pSerializer);
				}
			};
			REGISTER_FACTORY_CLASS(CMeshSerializerFactoryProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMeshSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CMeshSerializerFactoryProxy*>((EarthView::World::Graphic::CMeshSerializerFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CMeshSerializerFactory::getFileExtension();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFileExtension();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString_Callback* pCallback )
			{
				CMeshSerializerFactoryProxy* ptr = dynamic_cast<CMeshSerializerFactoryProxy*>((EarthView::World::Graphic::CMeshSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CMeshSerializerFactory_getFileExtension_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMeshSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializerFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CMeshSerializerFactory::getFileExtension();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializer*  _stdcall EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMeshSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CMeshSerializerFactoryProxy*>((EarthView::World::Graphic::CMeshSerializerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMeshSerializerFactory::createInstance();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->createInstance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer_Callback* pCallback )
			{
				CMeshSerializerFactoryProxy* ptr = dynamic_cast<CMeshSerializerFactoryProxy*>((EarthView::World::Graphic::CMeshSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CModelSerializer*  _stdcall EarthView_World_Graphic_CMeshSerializerFactory_createInstance_CModelSerializer_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMeshSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializerFactory*) pObjectXXXX;
				EarthView::World::Graphic::CModelSerializer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMeshSerializerFactory::createInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer(void *pObjectXXXX, _in EarthView::World::Graphic::CModelSerializer* pSerializer )
			{
				const EarthView::World::Graphic::CMeshSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializerFactory*) pObjectXXXX;
				if (dynamic_cast<CMeshSerializerFactoryProxy*>((EarthView::World::Graphic::CMeshSerializerFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMeshSerializerFactory::destroyInstance(pSerializer);
				else
					ptrNativeObject->destroyInstance(pSerializer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer( void *pObjectXXXX, EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer_Callback* pCallback )
			{
				CMeshSerializerFactoryProxy* ptr = dynamic_cast<CMeshSerializerFactoryProxy*>((EarthView::World::Graphic::CMeshSerializerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMeshSerializerFactory_destroyInstance_void_CModelSerializer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CModelSerializer* pSerializer )
			{
				const EarthView::World::Graphic::CMeshSerializerFactory* ptrNativeObject = (EarthView::World::Graphic::CMeshSerializerFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMeshSerializerFactory::destroyInstance(pSerializer);
			}
		}
	}
}
