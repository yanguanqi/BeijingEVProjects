/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilereferencefactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileReference*  _stdcall EarthView_World_Spatial_CTileReferenceFactory_createImageTileReferenceForWGS84_CTileReference( )
			{
				EarthView::World::Spatial::CTileReference* objXXXX = EarthView::World::Spatial::CTileReferenceFactory::createImageTileReferenceForWGS84();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileReference*  _stdcall EarthView_World_Spatial_CTileReferenceFactory_createVectorTileReferenceForWGS84_CTileReference( )
			{
				EarthView::World::Spatial::CTileReference* objXXXX = EarthView::World::Spatial::CTileReferenceFactory::createVectorTileReferenceForWGS84();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileReference*  _stdcall EarthView_World_Spatial_CTileReferenceFactory_createDEMTileReferenceForWGS84_CTileReference( )
			{
				EarthView::World::Spatial::CTileReference* objXXXX = EarthView::World::Spatial::CTileReferenceFactory::createDEMTileReferenceForWGS84();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileReference*  _stdcall EarthView_World_Spatial_CTileReferenceFactory_createDEMTileReferenceForWGS84_CTileReference_ev_real64(_in ev_real64 spanofzero )
			{
				EarthView::World::Spatial::CTileReference* objXXXX = EarthView::World::Spatial::CTileReferenceFactory::createDEMTileReferenceForWGS84(spanofzero);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileReference*  _stdcall EarthView_World_Spatial_CTileReferenceFactory_createForWebMercator_CTileReference( )
			{
				EarthView::World::Spatial::CTileReference* objXXXX = EarthView::World::Spatial::CTileReferenceFactory::createForWebMercator();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileReferenceFactory_destroyTileReference_void_CTileReference(_in const EarthView::World::Spatial::CTileReference* tileReference )
			{
				EarthView::World::Spatial::CTileReferenceFactory::destroyTileReference(tileReference);
			}
		}
	}
}
