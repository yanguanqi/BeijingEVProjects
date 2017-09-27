#ifndef CGLOBEANIMATIONPATH_H
#define CGLOBEANIMATIONPATH_H

#include "ga/evga_config.h"
#include "mathengine/earthradius.h"
#include "core/stdheaders.h"
#include "mathengine/ev_math.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class EV_GA_DLL CGlobeAnimationControlPoint:public EarthView::World::Core::CBaseObject
				{
				public:
					EarthView::World::Spatial::Math::CDegree mlatitude;
					EarthView::World::Spatial::Math::CDegree mlongitude;
					EarthView::World::Spatial::Math::CDegree mHeading;
					ev_real64 maltitude;
					EarthView::World::Spatial::Math::CDegree mtilt;
					/// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <returns></returns>
					CGlobeAnimationControlPoint();
				ev_private:
					CGlobeAnimationControlPoint(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GA_DLL CAnimationControlPointMap : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CAnimationControlPointMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CAnimationControlPointMap();
					/// <summary>
					/// 增加新键值
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns></returns>
					ev_bool push(const ev_real64 &key, EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint const &val);
					/// <summary>
					/// 根据指定的键，判断对应的值是否存在
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					ev_bool exist(const ev_real64 &key);
					/// <summary>
					/// 根据指定的键，返回对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint& operator[](const ev_real64 &key);
					/// <summary>
					/// 根据指定的键，返回对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint& get(const ev_real64 &key);
					/// <summary>
					/// 根据指定的键，删除值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					ev_void erase(const ev_real64 &key);
					/// <summary>
					/// 返回容器的长度
					/// </summary>
					/// <returns></returns>
					ev_size_t size() const;
					/// <summary>
					/// 清空容器
					/// </summary>
					/// <returns></returns>
					ev_void clear();
					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <returns></returns>
					ev_bool empty() const;
ev_private:
					typedef map<ev_real64,EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);

					CAnimationControlPointMap::_Pairib insert(const value_type &val);
					CAnimationControlPointMap::iterator find(const ev_real64 &key);
					CAnimationControlPointMap::const_iterator find(const ev_real64 &key) const;

					ev_void operator = (const EarthView::World::Spatial3D::Controls::CAnimationControlPointMap& rhs);
				private:
					InternalList mList;
				};

				class EV_GA_DLL CGlobeAnimationPath:public EarthView::World::Core::CBaseObject
				{
				public:

					enum LOOPMODE
					{
						lOOP = 0,
						NOLOOP = 1
					};

					//typedef EarthView::World::Core::map<ev_real64,EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint> ControlPoints;
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="loopMode">循环模式</param>
					/// <param name="radious">半径</param>
					/// <returns></returns>
					CGlobeAnimationPath(_in EarthView::World::Spatial3D::Controls::CGlobeAnimationPath::LOOPMODE loopMode,_in ev_real64 radious);
				ev_private:
					CGlobeAnimationPath(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeAnimationPath();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CGlobeAnimationPath();
					/// <summary>
					/// 清空控制点
					/// </summary>
					/// <returns></returns>
					ev_void clear();
					/// <summary>
					/// 增加控制点
					/// </summary>
					/// <param name="time">时间</param>
					/// <param name="controlPoint">控制点</param>
					/// <returns></returns>
					ev_void insert(_in ev_real64 time,_in EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint controlPoint);
					/// <summary>
					/// 取得第一个时间
					/// </summary>
					/// <returns></returns>
					ev_real64 getFirstTime();
					/// <summary>
					/// 取得最后一个时间
					/// </summary>
					/// <returns></returns>
					ev_real64 getEndTime();
					/// <summary>
					/// 取得总时间段
					/// </summary>
					/// <returns></returns>
					ev_real64 getPeriod();
					/// <summary>
					/// 取得控制点数目
					/// </summary>
					/// <returns></returns>
					ev_int32 getControlPointCount();
					/// <summary>
					/// 设置速度
					/// </summary>
					/// <param name="velocity">速度</param>
					/// <returns></returns>
					ev_void setVelocity(_in ev_real64 velocity)
					{
						mangularVelocity = velocity/mradious;
					}
					/// <summary>
					/// 获取速度
					/// </summary>
					/// <returns></returns>
					ev_real64 getVelocity()
					{
						return mangularVelocity*mradious;
					}
					/// <summary>
					/// 由时间获取插值点
					/// </summary>
					/// <param name="velocity">速度</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint getInterpolaterdControlPoint(_in ev_real64 time,_in ev_bool isEven=false);
					/// <summary>
					/// 返回控制点集合
					/// </summary>
					/// <returns></returns>
					const EarthView::World::Spatial3D::Controls::CAnimationControlPointMap& getControlPoints() const
					{
						return mcontrolPoints;
					}

				protected:
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap mcontrolPoints;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath::LOOPMODE mloopMode;
					ev_bool mNeedStop;
					ev_real64 mangularVelocity;
					ev_real64 mradious;
				};
			}
		}
	}
}
#endif

