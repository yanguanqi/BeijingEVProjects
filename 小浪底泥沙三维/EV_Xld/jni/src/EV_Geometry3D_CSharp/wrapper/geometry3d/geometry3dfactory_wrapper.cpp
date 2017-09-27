/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3d/geometry3dfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CGeometry3DFactory_createBox_CSimpleRenderableEx_CBox_IColor(_in const void* box, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = EarthView::World::Geometry3D::CGeometry3DFactory::createBox(*(EarthView::World::Spatial::Geometry::CBox*)box, color);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CGeometry3DFactory_createCone_CSimpleRenderableEx_CCone_IColor(_in const void* cone, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = EarthView::World::Geometry3D::CGeometry3DFactory::createCone(*(EarthView::World::Spatial::Geometry::CCone*)cone, color);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CGeometry3DFactory_createColumn_CSimpleRenderableEx_CColumn_IColor(_in const void* column, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = EarthView::World::Geometry3D::CGeometry3DFactory::createColumn(*(EarthView::World::Spatial::Geometry::CColumn*)column, color);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CGeometry3DFactory_createEllipsoid_CSimpleRenderableEx_CEllipsoid_IColor(_in const void* ellipsoid, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = EarthView::World::Geometry3D::CGeometry3DFactory::createEllipsoid(*(EarthView::World::Spatial::Geometry::CEllipsoid*)ellipsoid, color);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CGeometry3DFactory_createRing_CSimpleRenderableEx_CRing_IColor(_in const void* ring, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = EarthView::World::Geometry3D::CGeometry3DFactory::createRing(*(EarthView::World::Spatial::Geometry::CRing*)ring, color);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CGeometry3DFactory_createVolume_CSimpleRenderableEx_CRevolvingVolume_CDegree_IColor_ev_bool(_in const void* volume, _in const void* interval, _in const EarthView::World::Spatial::Display::IColor* color, _in ev_bool sideClosed )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = EarthView::World::Geometry3D::CGeometry3DFactory::createVolume(*(EarthView::World::Spatial::Geometry::CRevolvingVolume*)volume, *(EarthView::World::Spatial::Math::CDegree*)interval, color, sideClosed);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CGeometry3DFactory_createVolumeFrame_CSimpleRenderableEx_CRevolvingVolume_CDegree_IColor_ev_bool(_in const void* volume, _in const void* interval, _in const EarthView::World::Spatial::Display::IColor* color, _in ev_bool sideClosed )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = EarthView::World::Geometry3D::CGeometry3DFactory::createVolumeFrame(*(EarthView::World::Spatial::Geometry::CRevolvingVolume*)volume, *(EarthView::World::Spatial::Math::CDegree*)interval, color, sideClosed);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DFactory_destroy_void_CSimpleRenderableEx(_in EarthView::World::Geometry3D::CSimpleRenderableEx* pRenderable )
			{
				EarthView::World::Geometry3D::CGeometry3DFactory::destroy(pRenderable);
			}
		}
	}
}
