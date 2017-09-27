#pragma once
#include "effect3d_config.h"
#include <mathengine/ev_math.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				/// <summary>
				/// 高度范围类，记录高度范围，并可以将高度范围切分为多份
				/// </summary>
				class EV_EFFECT3D_DLL CHeightRange : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CHeightRange(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="minHeight">最小高度</param>
					/// <param name="maxHeight">最大高度</param>
					/// <returns></returns>
					CHeightRange();
					CHeightRange(ev_real32 minHeight, ev_real32 maxHeight);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CHeightRange(){};

					/// <summary>
					/// 将高度范围随机切分为n份
					/// </summary>
					/// <param name="levels">份数</param>
					/// <returns></returns>
					void splitRandom(ev_int32 levels);

					/// <summary>
					/// 获得子高度范围的数量
					/// </summary>
					/// <returns>高度范围的份数</returns>
					ev_int32 subHeightRangeCount();

					/// <summary>
					/// 获得第n份子高度范围
					/// </summary>
					/// <param name="index">子高度范围序号</param>
					/// <returns>子高度范围</returns>
					EarthView::World::Spatial::Effect3D::CHeightRange getSubHeightRange(ev_int32 index);

					/// <summary>
					/// 返回范围中心
					/// </summary>
					/// <returns></returns>
					ev_real32 center();

					/// <summary>
					/// 重载==
					/// </summary>
					/// <returns>比较结果</returns>
					ev_bool operator==(const EarthView::World::Spatial::Effect3D::CHeightRange &other) const;

					/// <summary>
					/// 重载!=
					/// </summary>
					/// <returns>比较结果</returns>
					ev_bool operator!=(const EarthView::World::Spatial::Effect3D::CHeightRange &other) const;
					/// <summary>
					/// 最大高度
					/// </summary>
					ev_real32 mfMaxHeight;

					/// <summary>
					/// 最小高度
					/// </summary>
					ev_real32 mfMinHeight;

					/// <summary>
					/// 空高度范围
					/// </summary>
					const static EarthView::World::Spatial::Effect3D::CHeightRange ZERO;

					bool isIntersect(const CHeightRange &range);
					/// <summary>
					/// 默认云层高度
					/// </summary>
					const static Real DEFAULTHEIGHT;
				protected:
					vector<EarthView::World::Spatial::Effect3D::CHeightRange> mvecSubHeightRanges;
				};
			}
		}
	}
}

