#ifndef EV_STREET_VIEW_SUBDIV_TOOL_H
#define EV_STREET_VIEW_SUBDIV_TOOL_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "core/stringdefines.h"
#include "core/graphic_exception.h"
#include "core/memoryallocatedobject.h"
#include "core/stringvector.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{

			class EV_Spatial3DStreetView_DLL  CStreetViewSubdivTool : public EarthView::World::Core::CBaseObject
			{

			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CStreetViewSubdivTool(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CStreetViewSubdivTool();

				static ev_uint32 mapSize(ev_uint32 level)
				{
					return (ev_uint32)256 << level;
				}

				static double groundResolution(double latitude, int level);

				static double mapScale(double latitude, int level, int screenDpi);

				static void latLongToPixelXY(double latitude, double longitude, int level, int& pixelX, int& pixelY);

				static void pixelXYToLatLong(int pixelX, int pixelY, int level, double& latitude, double& longitude);

				static void pixelXYToTileXY(int pixelX, int pixelY, int& tileX, int& tileY)
				{
					tileX = pixelX / 256;
					tileY = pixelY / 256;
				}

				static void tileXYToPixelXY(int tileX, int tileY, int& pixelX, int& pixelY)
				{
					pixelX = tileX * 256;
					pixelY = tileY * 256;
				}

				static EVString tileXYToQuadKey(int tileX, int tileY, int level);

				static void quadKeyToTileXY(EVString quadKey, int& tileX, int& tileY, int& level);

				static EVString latLongToQuadKey(double latitude, double longitude, int level);

				static void quadKeyToLatLong(EVString quadKey, double& latitude, double& longitude);

				/// <summary>
				/// 返回相邻的街景块编码
				/// </summary>
				/// <param name="quadKey">中间的街景块编码</param>
				/// <param name="nearKeys">相邻的街景块编码</param>
				/// <returns></returns>
				static void getNearQuadKeys(EVString quadKey, EarthView::World::Core::StringVector& nearKeys);

				/// <summary>
				/// 返回某个块的经纬度跨度
				/// </summary>
				/// <param name="quadKey">街景块编码</param>
				/// <param name="maxLat">最大纬度值</param>
				/// <param name="minLon">最小经度值</param>
				/// <param name="minLat">最小纬度值</param>
				/// <param name="maxLon">最大经度值</param>
				/// <returns></returns>
				static void getBorderLonLat(EVString quadKey, double& maxLat, double& minLon, double& minLat, double& maxLon);

				/// <summary>
				/// 返回某经纬度范围内所有块编码
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static void getRangeKeys(double minLat, double minLon, double maxLat, double maxLon, int level, EarthView::World::Core::StringVector& rangeKeys);

			private:
				static double clip(double n, double minValue, double maxValue)
				{
					return min(max(n, minValue), maxValue);
				}

				static double mEarthRadius;
				static double mMinLatitude;
				static double mMaxLatitude;
				static double mMinLongitude;
				static double mMaxLongitude;
			};

		}
	}
}

#endif