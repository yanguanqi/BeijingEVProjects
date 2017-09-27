/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/tilematrixset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileMatrixSet_getIdentifier_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getIdentifier();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileMatrixSet_getSupportedCRS_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getSupportedCRS();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileMatrixSet_getWellKnownScaleSet_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getWellKnownScaleSet();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileMatrixSet_getTileMatrixCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTileMatrixCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CTileMatrix*  _stdcall EarthView_World_Spatial_CTileMatrixSet_getTileMatrixRef_CTileMatrix_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				const EarthView::World::Spatial::CTileMatrix* objXXXX = ptrNativeObject->getTileMatrixRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CTileMatrix*  _stdcall EarthView_World_Spatial_CTileMatrixSet_getTileMatrixRef_CTileMatrix_EVString(void *pObjectXXXX, _in const char* tileMatrix )
			{
				EarthView::World::Core::ev_string tileMatrix1 = tileMatrix;
				const EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				const EarthView::World::Spatial::CTileMatrix* objXXXX = ptrNativeObject->getTileMatrixRef(tileMatrix1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWebServiceBoundingBox*  _stdcall EarthView_World_Spatial_CTileMatrixSet_getBoundingBoxRef_COGCWebServiceBoundingBox(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWebServiceBoundingBox* objXXXX = ptrNativeObject->getBoundingBoxRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileMatrixSet_getTitleCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTitleCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileMatrixSet_getTitle_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getTitle(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileMatrixSet_getAbstractCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getAbstractCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileMatrixSet_getAbstract_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getAbstract(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileMatrixSet_getKeywordCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getKeywordCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileMatrixSet_getKeyword_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CTileMatrixSet* ptrNativeObject = (EarthView::World::Spatial::CTileMatrixSet*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getKeyword(index);
				return objXXXX.makeBuffer();
			}
		}
	}
}
