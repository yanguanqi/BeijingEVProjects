/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tiledata.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CTileInfo*  _stdcall EarthView_World_Spatial_CTileData_getTileInfo_CTileInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				const EarthView::World::Spatial::CTileInfo* objXXXX = ptrNativeObject->getTileInfo();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileData_setTileInfo_void_CTileInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::CTileInfo* ref_tileinfo )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ptrNativeObject->setTileInfo(ref_tileinfo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileData_setData_void_EVString_DataStreamPtr(void *pObjectXXXX, _in const char* strFileName, _in void* stream )
			{
				EarthView::World::Core::ev_string strFileName1 = strFileName;
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ptrNativeObject->setData(strFileName1, *(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileData_setData_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ptrNativeObject->setData(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CTileData_getData_DataStreamPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->getData();
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CTileData_getThemeStream_DataStreamPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->getThemeStream();
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileData_setThemeStream_void_DataStreamPtr(void *pObjectXXXX, _in void* theme )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ptrNativeObject->setThemeStream(*(EarthView::World::Core::DataStreamPtr*)theme);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileData_setFileName_void_EVString(void *pObjectXXXX, _in const char* strFileName )
			{
				EarthView::World::Core::ev_string strFileName1 = strFileName;
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ptrNativeObject->setFileName(strFileName1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileData_getFileName_EVString(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFileName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileData_setLayerName_void_EVString(void *pObjectXXXX, _in const char* strLayerName )
			{
				EarthView::World::Core::ev_string strLayerName1 = strLayerName;
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ptrNativeObject->setLayerName(strLayerName1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileData_getLayerName_EVString(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getLayerName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileData_setStreamType_void_EVString(void *pObjectXXXX, _in const char* strType )
			{
				EarthView::World::Core::ev_string strType1 = strType;
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ptrNativeObject->setStreamType(strType1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileData_getStreamType_EVString(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getStreamType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileData_setDefective_void_ev_bool(void *pObjectXXXX, _in ev_bool defective )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ptrNativeObject->setDefective(defective);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CTileData_getDefective_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getDefective();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileData_addTileAttachment_void_ITileAttachmentPtr(void *pObjectXXXX, _in const void* tileAttachment )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ptrNativeObject->addTileAttachment(*(EarthView::World::Spatial::ITileAttachmentPtr*)tileAttachment);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_CTileData_getTileAttachmentCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getTileAttachmentCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_CTileData_getTileAttachment_ITileAttachmentPtr_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
			{
				const EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				const EarthView::World::Spatial::ITileAttachmentPtr& objXXXX = ptrNativeObject->getTileAttachment(index);
				const EarthView::World::Spatial::ITileAttachmentPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileData_mergeTileAttachmentList_void_CTileData(void *pObjectXXXX, _in const void* other )
			{
				EarthView::World::Spatial::CTileData* ptrNativeObject = (EarthView::World::Spatial::CTileData*) pObjectXXXX;
				ptrNativeObject->mergeTileAttachmentList(*(EarthView::World::Spatial::CTileData*)other);
			}
		}
	}
}
