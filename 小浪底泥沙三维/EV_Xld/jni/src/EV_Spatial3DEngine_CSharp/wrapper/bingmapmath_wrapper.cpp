/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/bingmapmath.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapMath_Clip_Real_Real_Real_Real(_in Real n, _in Real minValue, _in Real maxValue )
				{
					Real objXXXX = EarthView::World::Spatial3D::Atlas::CBingMapMath::Clip(n, minValue, maxValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapMath_MapSize_ev_uint32_ev_uint32(_in ev_uint32 level )
				{
					ev_uint32 objXXXX = EarthView::World::Spatial3D::Atlas::CBingMapMath::MapSize(level);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapMath_LatLongToPixelXY_void_Real_Real_ev_uint32_ev_uint32_ev_uint32(_in Real latitude, _in Real longitude, _in ev_uint32 levelOfDetail, _inout ev_uint32& pixelX, _inout ev_uint32& pixelY )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapMath::LatLongToPixelXY(latitude, longitude, levelOfDetail, pixelX, pixelY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapMath_PixelXYToLatLong_void_ev_uint32_ev_uint32_ev_uint32_Real_Real(_in ev_uint32 pixelX, _in ev_uint32 pixelY, _in ev_uint32 levelOfDetail, _inout Real& latitude, _inout Real& longitude )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapMath::PixelXYToLatLong(pixelX, pixelY, levelOfDetail, latitude, longitude);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapMath_PixelXYToTileXY_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32(_in ev_uint32 pixelX, _in ev_uint32 pixelY, _inout ev_uint32& tileX, _inout ev_uint32& tileY )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapMath::PixelXYToTileXY(pixelX, pixelY, tileX, tileY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapMath_TileXYToPixelXY_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32(_in ev_uint32 tileX, _in ev_uint32 tileY, _inout ev_uint32& pixelX, _inout ev_uint32& pixelY )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapMath::TileXYToPixelXY(tileX, tileY, pixelX, pixelY);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapMath_TileXYToQuadKey_EVString_ev_uint32_ev_uint32_ev_uint32(_in ev_uint32 tileX, _in ev_uint32 tileY, _in ev_uint32 levelOfDetail )
				{
					EVString objXXXX = EarthView::World::Spatial3D::Atlas::CBingMapMath::TileXYToQuadKey(tileX, tileY, levelOfDetail);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapMath_QuadKeyToTileXY_void_EVString_ev_uint32_ev_uint32_ev_uint32(_inout char*& quadKey, _inout ev_uint32& tileX, _inout ev_uint32& tileY, _inout ev_uint32& levelOfDetail )
				{
					EarthView::World::Core::ev_string quadKey1 = quadKey;
					EarthView::World::Spatial3D::Atlas::CBingMapMath::QuadKeyToTileXY(quadKey1, tileX, tileY, levelOfDetail);
					quadKey=quadKey1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial3D_Atlas_CBingMapMath_MinLatitude()
				{
					const Real objXXXX = EarthView::World::Spatial3D::Atlas::CBingMapMath::MinLatitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial3D_Atlas_CBingMapMath_MaxLatitude()
				{
					const Real objXXXX = EarthView::World::Spatial3D::Atlas::CBingMapMath::MaxLatitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial3D_Atlas_CBingMapMath_MinLongitude()
				{
					const Real objXXXX = EarthView::World::Spatial3D::Atlas::CBingMapMath::MinLongitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial3D_Atlas_CBingMapMath_MaxLongitude()
				{
					const Real objXXXX = EarthView::World::Spatial3D::Atlas::CBingMapMath::MaxLongitude;
					return objXXXX;
				}
			}
		}
	}
}
