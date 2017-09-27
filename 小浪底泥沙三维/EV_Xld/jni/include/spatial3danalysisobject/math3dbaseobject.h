#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DBASEOBJECT_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DBASEOBJECT_H

#include "spatial3danalysisobject_config.h"
#include <core/memoryallocatedobject.h>
#include "mathutility3d.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class CMathUtility3D;
				class CAltitude3DListener;

#define DB_NAN -1000/*std::numeric_limits<ev_real64>::quiet_NaN()*/
#define IS_NAN(a) a == -1000/*_isnan(a)*/

				/// <summary>
				/// 三维分析算法基类
				/// 此类无实际意义，由于各种三维分析都需要用到以下几个函数，特提出一个共有基类
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CMath3DBaseObject : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CMath3DBaseObject(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					CMath3DBaseObject();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CMath3DBaseObject();
					/// <summary>
					/// 获取高程控件指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>高程控件</returns>
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitude3DListener() const;
					/// <summary>
					/// 设置高程控件指针
					/// </summary>
					/// <param name="pListener">高程控件</param>
					virtual ev_void setAltitude3DListener(EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener);
					/// <summary>
					/// 获取三维分析算法指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>指针</returns>
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* getMathUtility3D() const;
					/// <summary>
					/// 获取是否使用默认计算模式（相关参数采用推荐值）
					/// </summary>
					/// <returns></returns>
					ev_bool getDefaultCalcuMode();
					/// <summary>
					/// 设置是否使用默认计算模式（相关参数采用推荐值）
					/// </summary>
					/// <param name="value"></param>
					ev_void setDefaultCalcuMode(ev_bool value);

				protected:
					/// <summary>
					/// 三维分析基础算法指针
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* mpMathUtility3D;
					/// <summary>
					/// 高程指针
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CAltitude3DListener* mpAltitude3DListener;
					/// <summary>
					/// 是否使用默认计算模式（相关参数采用推荐值）
					/// </summary>
					ev_bool mDefaultCalcuMode;
				};

				/// <summary>
				/// 包围盒类
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CGeoBoundingBox : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CGeoBoundingBox(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					CGeoBoundingBox();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CGeoBoundingBox();

					/// <summary>
					/// 计算包围盒
					/// </summary>
					/// <param name=""></param>
					ev_void computeBox();

					/// <summary>
					/// 最大纬度
					/// </summary>
					ev_real64 mNorth;
					/// <summary>
					/// 最小纬度
					/// </summary>
					ev_real64 mSouth;
					/// <summary>
					/// 最小经度
					/// </summary>
					ev_real64 mWest;
					/// <summary>
					/// 最大经度
					/// </summary>
					ev_real64 mEast;
					/// <summary>
					/// 底面离地心的距离
					/// </summary>
					ev_real64 mBottomRadius;
					/// <summary>
					/// 顶面离地心的距离
					/// </summary>
					ev_real64 mTopRadius;
					
					/// <summary>
					/// 中心点世界坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCenter;
					/// <summary>
					/// 是否已计算包围盒
					/// </summary>
					ev_bool mIsComputed;
ev_private:
					/// <summary>
					/// 立方体的八个角顶点数组(世界坐标)
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCorners[8];
				};
			}
		}
	}
}

#endif

