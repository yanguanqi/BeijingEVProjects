#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_BINGMAPMATH_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_BINGMAPMATH_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"
#include "mathengine/ev_math.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas
			{
				class EV_Spatial3DEngine_DLL CBingMapMath : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CBingMapMath(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					~CBingMapMath();

					static Real Clip(Real n,Real minValue, Real maxValue); 

					static ev_uint32 MapSize(ev_uint32 level);

					static void LatLongToPixelXY(Real latitude, Real longitude, ev_uint32 levelOfDetail, ev_uint32& pixelX, ev_uint32& pixelY);

					static void PixelXYToLatLong(ev_uint32 pixelX, ev_uint32 pixelY, ev_uint32 levelOfDetail, Real& latitude, Real& longitude);    

					static void PixelXYToTileXY(ev_uint32 pixelX, ev_uint32 pixelY, ev_uint32& tileX, ev_uint32& tileY);  

					static void TileXYToPixelXY(ev_uint32 tileX, ev_uint32 tileY, ev_uint32& pixelX, ev_uint32& pixelY); 

					static EVString TileXYToQuadKey(ev_uint32 tileX, ev_uint32 tileY, ev_uint32 levelOfDetail);

					static void QuadKeyToTileXY(EVString& quadKey, ev_uint32& tileX, ev_uint32& tileY, ev_uint32& levelOfDetail);  


					static const Real MinLatitude;  
					static const Real MaxLatitude;  
					static const Real MinLongitude;  
					static const Real MaxLongitude; 
				private:
					CBingMapMath();

					
				};
			}
		}
	}
}

#endif