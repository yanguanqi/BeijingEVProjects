/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/spatialposition.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CSpatialPosition_setPos_void_double_double_double(void *pObjectXXXX, _in double x, _in double y, _in double z )
				{
					EarthView::World::Spatial::Math::CSpatialPosition* ptrNativeObject = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjectXXXX;
					ptrNativeObject->setPos(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CSpatialPosition_getPos_void_double_double_double(void *pObjectXXXX, _inout double& x, _inout double& y, _inout double& z )
				{
					EarthView::World::Spatial::Math::CSpatialPosition* ptrNativeObject = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjectXXXX;
					ptrNativeObject->getPos(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CSpatialPosition_setScale_void_double_double_double(void *pObjectXXXX, _in double x, _in double y, _in double z )
				{
					EarthView::World::Spatial::Math::CSpatialPosition* ptrNativeObject = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjectXXXX;
					ptrNativeObject->setScale(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CSpatialPosition_getScale_void_double_double_double(void *pObjectXXXX, _inout double& x, _inout double& y, _inout double& z )
				{
					EarthView::World::Spatial::Math::CSpatialPosition* ptrNativeObject = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjectXXXX;
					ptrNativeObject->getScale(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CSpatialPosition_setRotation_void_double_double_double_double(void *pObjectXXXX, _in double x, _in double y, _in double z, _in double w )
				{
					EarthView::World::Spatial::Math::CSpatialPosition* ptrNativeObject = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjectXXXX;
					ptrNativeObject->setRotation(x, y, z, w);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CSpatialPosition_getRotation_void_double_double_double_double(void *pObjectXXXX, _inout double& x, _inout double& y, _inout double& z, _inout double& w )
				{
					EarthView::World::Spatial::Math::CSpatialPosition* ptrNativeObject = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjectXXXX;
					ptrNativeObject->getRotation(x, y, z, w);
				}
			}
		}
	}
}
