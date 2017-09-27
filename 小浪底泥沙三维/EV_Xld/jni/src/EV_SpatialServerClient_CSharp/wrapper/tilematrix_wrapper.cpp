/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/tilematrix.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileMatrix_getIdentifier_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getIdentifier();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileMatrix_getScaleDenominator_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getScaleDenominator();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileMatrix_getTopLeftCorner_void_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& left, _out ev_real64& top )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				ptrNativeObject->getTopLeftCorner(left, top);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileMatrix_getMatrixWidth_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMatrixWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileMatrix_getMatrixHeight_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMatrixHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileMatrix_getTileWidth_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTileWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileMatrix_getTileHeight_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTileHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileMatrix_getTitleCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTitleCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileMatrix_getTitle_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getTitle(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileMatrix_getAbstractCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getAbstractCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileMatrix_getAbstract_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getAbstract(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileMatrix_getKeywordCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getKeywordCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTileMatrix_getKeyword_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CTileMatrix* ptrNativeObject = (EarthView::World::Spatial::CTileMatrix*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getKeyword(index);
				return objXXXX.makeBuffer();
			}
		}
	}
}
