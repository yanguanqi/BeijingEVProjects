#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ENVELOPE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ENVELOPE_H
#include "spatialserverclient/spatialserverclientexports.h"
#include "../../include/spatialinterface/ienvelope.h"
// using namespace EarthView::World::Spatial::Geometry;
// using namespace EarthView::World::Spatial;
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				///
				/// </summary>
				class EV_SPATIALSERVERCLIENT_DLL CEnvelope
					:public IEnvelope
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					CEnvelope();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					virtual ~CEnvelope();
					/// <summary>
					/// 默认拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					CEnvelope(const CEnvelope& obj);
					
					
					/// <summary>
					///
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					//CEnvelope(ev_real64 minx,ev_real64 miny,ev_real64 minz,ev_real64 maxx,ev_real64 maxy,ev_real64 maxz);
ev_private:
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数键值对</param>
					/// <return></return>
					CEnvelope(CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取最小X值
					/// </summary>
					/// <param name=""></param>
					/// <return>最小X值</return>
					ev_real64 getMinX() const;
					/// <summary>
					/// 获取最小Y值
					/// </summary>
					/// <param name=""></param>
					/// <return>最小Y值</return>
					ev_real64 getMinY() const;
					/// <summary>
					/// 获取最小Z值
					/// </summary>
					/// <param name=""></param>
					/// <return>最小Z值</return>
					ev_real64 getMinZ() const;
					/// <summary>
					/// 获取最大X值
					/// </summary>
					/// <param name=""></param>
					/// <return>最大X值</return>
					ev_real64 getMaxX() const;
					/// <summary>
					/// 获取最大Y值
					/// </summary>
					/// <param name=""></param>
					/// <return>最大Y值</return>
					ev_real64 getMaxY() const;
					/// <summary>
					/// 获取最大Z值
					/// </summary>
					/// <param name=""></param>
					/// <return>最大Z值</return>
					ev_real64 getMaxZ() const;
					/// <summary>
					/// 设置最小X值
					/// </summary>
					/// <param name="value">X值</param>
					/// <return></return>
					ev_void setMinX(ev_real64 value);
					/// <summary>
					/// 设置最小Y值
					/// </summary>
					/// <param name="value">Y值</param>
					/// <return></return>
					ev_void setMinY(ev_real64 value);
					/// <summary>
					/// 设置最小Z值
					/// </summary>
					/// <param name="value">Z值</param>
					/// <return></return>
					ev_void setMinZ(ev_real64 value);
					/// <summary>
					/// 设置宽度
					/// </summary>
					/// <param name="value">宽度值</param>
					/// <return></return>
					ev_void setMaxX(ev_real64 value);
					/// <summary>
					/// 设置高度
					/// </summary>
					/// <param name="value">高度值</param>
					/// <return></return>
					ev_void setMaxY(ev_real64 value);
					/// <summary>
					/// 设置深度
					/// </summary>
					/// <param name="value">深度值</param>
					/// <return></return>
					ev_void setMaxZ(ev_real64 value);
					/// <summary>
					/// 获取宽度值
					/// </summary>
					/// <param name=""></param>
					/// <return>宽度值</return>
					ev_real64 getWidth() const;
					/// <summary>
					/// 获取高度值
					/// </summary>
					/// <param name=""></param>
					/// <return>高度值</return>
					ev_real64 getHeight() const;
					/// <summary>
					/// 获取深度值
					/// </summary>
					/// <param name=""></param>
					/// <return>深度值</return>
					ev_real64 getDepth() const;
					/// <summary>
					/// 获取中心点位置
					/// </summary>
					/// <param name="x">X值</param>
					/// <param name="y">Y值</param>
					/// <param name="z">Z值</param>
					/// <return></return>
					ev_void getCenter(_out ev_real64 & x,_out ev_real64 & y,_out ev_real64 & z) const;
					/// <summary>
					/// 设置中心点位置
					/// </summary>
					/// <param name="x">X值</param>
					/// <param name="y">Y值</param>
					/// <param name="z">Z值</param>
					/// <return></return>
					ev_void setCenter(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);
					/// <summary>
					/// 判断是否是三维Box。在有效Envelope的前提下，如果MaxZ - MinZ > 0,则为box
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					ev_bool isBox() const;
					/// <summary>
					/// 判断是否有效包围盒。
					/// 有效包围盒的条件是：
					///             1. MaxX - MinX > 0;
					///             2. MaxY - Miny > 0;
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					ev_bool isValid() const;
					ev_bool containsCoordinate(ev_real64 x,ev_real64 y,ev_real64 z) const;
					ev_bool containsEnvelope(const IEnvelope & envelope) const;
					ev_bool isIntersects(const IEnvelope & envelope) const;
					ev_void unions(const IEnvelope & envelope);
					ev_void intersects(const IEnvelope & envelope);
					ev_void expands(ev_bool isRadio,ev_real64 scaleX,ev_real64 scaleY,ev_real64 scaleZ);

					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <return></return>
					IEnvelope* clone() const;
				private:
					ev_real64 mdfMinX;
					ev_real64 mdfMinY;
					ev_real64 mdfMinZ;
					ev_real64 mdfMaxX;
					ev_real64 mdfMaxY;
					ev_real64 mdfMaxZ;

				};
			}
		}
	}
}

#endif