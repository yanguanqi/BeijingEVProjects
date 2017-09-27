#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ROTATEDENVELOPE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ROTATEDENVELOPE_H

#include "spatialinterface/ienvelope.h"
#include "spatialobject/config.h"

// using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 可旋转的包围盒类
				/// </summary>
				class EV_GEOMETRY_DLL CRotatedEnvelope
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRotatedEnvelope();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CRotatedEnvelope();
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="envelope">包围盒对象</param>
					/// <param name="rotation">旋转角度</param>
					/// <returns></returns>
					CRotatedEnvelope(const EarthView::World::Spatial::Geometry::IEnvelope* envelope,ev_real64 rotation);
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">包围盒对象</param>
					/// <returns></returns>
					CRotatedEnvelope(CRotatedEnvelope& obj);
ev_private:
					/// <summary>
					/// 默认参数构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRotatedEnvelope(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取包围盒对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒</returns>
					EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const;
					/// <summary>
					/// 获取旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>旋转角度</returns>
					ev_real64 getRotation() const;
					/// <summary>
					/// 设置旋转角度
					/// </summary>
					/// <param name="value">旋转角度</param>
					/// <returns></returns>
					ev_void setRotation(ev_real64 value);
				};
			}
		}
	}
}

#endif
