/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/coordinatesystem/coordinatefactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Utility
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Utility::CSpatialReference*  _stdcall EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_EVWellKnownGeoCSType(_in int eWellKnownCS )
				{
					EarthView::World::Spatial::Utility::CSpatialReference* objXXXX = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys((EarthView::World::Spatial::Utility::EVWellKnownGeoCSType)eWellKnownCS);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Utility::CSpatialReference*  _stdcall EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_EVWellKnownProjCSType(_in int eWelKnProjCS )
				{
					EarthView::World::Spatial::Utility::CSpatialReference* objXXXX = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys((EarthView::World::Spatial::Utility::EVWellKnownProjCSType)eWelKnProjCS);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Utility::CSpatialReference*  _stdcall EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_IEllipseSpheriod_CProjParameter(_in const EarthView::World::Spatial::Geometry::IEllipseSpheriod* pobjEllipseSphere, _in const EarthView::World::Spatial::Utility::CProjParameter* pObjProjParameter )
				{
					EarthView::World::Spatial::Utility::CSpatialReference* objXXXX = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys(pobjEllipseSphere, pObjProjParameter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Utility::CSpatialReference*  _stdcall EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_EVSpatialReferenceStringType_EVString(_in int eStrType, _in const char* pszReference )
				{
					EarthView::World::Core::ev_string pszReference1 = pszReference;
					EarthView::World::Spatial::Utility::CSpatialReference* objXXXX = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)eStrType, pszReference1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Utility::CSpatialReference*  _stdcall EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_ev_int32(_in ev_int32 ESPG )
				{
					EarthView::World::Spatial::Utility::CSpatialReference* objXXXX = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys(ESPG);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Utility::CSpatialReference*  _stdcall EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_CDataStream(_inout void* objStream )
				{
					EarthView::World::Spatial::Utility::CSpatialReference* objXXXX = EarthView::World::Spatial::Utility::CCoordinateSystemFactory::createCoordSys(*(EarthView::World::Core::CDataStream*)objStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CCoordinateSystemFactory_releaseCoordSys_void_CSpatialReference(_in EarthView::World::Spatial::Utility::CSpatialReference* pCorSys )
				{
					EarthView::World::Spatial::Utility::CCoordinateSystemFactory::releaseCoordSys(pCorSys);
				}
			}
		}
	}
}
