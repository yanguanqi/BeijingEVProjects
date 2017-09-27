#ifndef CONTROLPOINT_H_
#define CONTROLPOINT_H_

#include "spatial3dengine/spatial3dengineconfig.h"

#include "core/commonstringpairlist.h"
#include "mathengine/ev_math.h"
#include "core/memoryallocatedobject.h"
#include "core/sharedptr.h"
#include "mathengine/vector3.h"
#include "mathengine/quaternion.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			/// <summary>
			/// 节点动画笛卡尔坐标控制点类
			/// </summary>
			class EV_Spatial3DEngine_DLL CControlPoint:public EarthView::World::Core::CBaseObject
			{
			ev_private:
				CControlPoint(_in EarthView::World::Core::CNameValuePairList* plist);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CControlPoint();
				/// <summary>
				/// 通过指定的翻滚角，俯仰角，偏航角生成姿态四元数
				/// </summary>
				/// <param name="roll">翻滚角</param>
				/// <param name="pitch">俯仰角</param>
				/// <param name="yaw">偏航角</param>
				/// <returns></returns>
				void formRollPitchYaw(_in const EarthView::World::Spatial::Math::CRadian& roll,_in const EarthView::World::Spatial::Math::CRadian& pitch,_in const EarthView::World::Spatial::Math::CRadian& yaw);
				/// <summary>
				/// 由四元数分解出翻滚角，俯仰角和偏航角；
				/// </summary>
				/// <param name="roll">翻滚角</param>
				/// <param name="pitch">俯仰角</param>
				/// <param name="yaw">偏航角</param>
				/// <returns></returns>
				void toRollPitchRaw(_in EarthView::World::Spatial::Math::CRadian& roll,_in EarthView::World::Spatial::Math::CRadian& pitch,_in EarthView::World::Spatial::Math::CRadian& yaw);

				EarthView::World::Spatial::Math::CVector3 mposition;
				EarthView::World::Spatial::Math::CQuaternion mquaternion;
				EarthView::World::Spatial::Math::CVector3 mscale;

				ev_bool operator == (_in const EarthView::World::Spatial3D::CControlPoint& rhs);
				ev_bool operator != (_in const EarthView::World::Spatial3D::CControlPoint& rhs);
			};

			/// <summary>
			/// 数字地球上的节点动画控制点类
			/// </summary>
			class EV_Spatial3DEngine_DLL CGlobeControlPoint:public EarthView::World::Core::CBaseObject
			{
ev_private:
				CGlobeControlPoint(_in EarthView::World::Core::CNameValuePairList* plist);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CGlobeControlPoint();

				/// <summary>
				/// 控制点纬度
				/// </summary>
				EarthView::World::Spatial::Math::CDegree mlatitude;
				/// <summary>
				/// 控制点经度
				/// </summary>
				EarthView::World::Spatial::Math::CDegree mlongitude;
				/// <summary>
				/// 控制点偏航角
				/// </summary>
				EarthView::World::Spatial::Math::CDegree mheading;
				/// <summary>
				/// 控制点到球心的距离
				/// </summary>
				ev_real64 mradius;
				/// <summary>
				/// 控制点姿态yaw角
				/// </summary>
				EarthView::World::Spatial::Math::CDegree myaw;
				/// <summary>
				/// 控制点姿态pitch角
				/// </summary>
				EarthView::World::Spatial::Math::CDegree mpitch;
				/// <summary>
				/// 控制点姿态roll角
				/// </summary>
				EarthView::World::Spatial::Math::CDegree mroll;
				/// <summary>
				/// 转换为EarthView::World::Spatial3D::CControlPoint对象
				/// </summary>
				/// <returns>笛卡尔坐标控制点</returns>
				EarthView::World::Spatial3D::CControlPoint transformToControlPoint();

				/// <summary>
				/// ==操作符重载
				/// </summary>
				ev_bool operator == (_in const EarthView::World::Spatial3D::CGlobeControlPoint& rhs);
				/// <summary>
				/// !=操作符重载
				/// </summary>
				ev_bool operator != (_in const EarthView::World::Spatial3D::CGlobeControlPoint& rhs);
			};

			/// <summary>
			/// 控制点map容器
			/// </summary>
			class EV_Spatial3DEngine_DLL CControlPointMap : public EarthView::World::Core::CBaseObject
			{
ev_private:
				CControlPointMap(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CControlPointMap();
				/// <summary>
				/// 添加数据
				/// </summary>
				/// <param name="key">键</param>
				/// <param name="val">值</param>
				/// <returns></returns>
				ev_bool push(const ev_real64 &key, EarthView::World::Spatial3D::CControlPoint const &val);
				/// <summary>
				/// 判断指的指定的键是否存在
				/// </summary>
				/// <param name="key">键</param>
				/// <returns></returns>
				ev_bool exist(const ev_real64 &key);
				EarthView::World::Spatial3D::CControlPoint& operator[](const ev_real64 &key);
				/// <summary>
				/// 根据指定的键返回值
				/// </summary>
				/// <param name="key">键</param>
				/// <returns></returns>
				EarthView::World::Spatial3D::CControlPoint& get(ev_real64 key);
				/// <summary>
				/// 根据指定的键删除数据
				/// </summary>
				/// <param name="key">键</param>
				/// <returns></returns>
				ev_void erase(const ev_real64 &key);
				/// <summary>
				/// 返回长度
				/// </summary>
				/// <returns></returns>
				ev_size_t size() const;
				/// <summary>
				/// 清空
				/// </summary>
				/// <returns></returns>
				ev_void clear();
				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <returns></returns>
				ev_bool empty() const;
				/// <summary>
				/// 根据索引取得键
				/// </summary>
				/// <param name="index">索引</param>
				/// <param name="key">键，返回值</param>
				/// <returns></returns>
				ev_bool getKey(ev_int32 index,ev_real64& key) const;
ev_private:
				typedef map<ev_real64,EarthView::World::Spatial3D::CControlPoint> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::mapped_type mapped_type;
				typedef InternalList::key_type key_type;
				typedef InternalList::value_type value_type;
				typedef pair<iterator, bool> _Pairib;
				RESERVE_CONTAINER_FUNCTION_MAP(mList);

				CControlPointMap::_Pairib insert(const value_type &val);
				CControlPointMap::iterator find(const ev_real64 &key);
				CControlPointMap::const_iterator find(const ev_real64 &key) const;

				ev_void operator = (const EarthView::World::Spatial3D::CControlPointMap& rhs);
			private:
				InternalList mList;
			};

			/// <summary>
			/// 数字地球控制点map容器
			/// </summary>
			class EV_Spatial3DEngine_DLL CGlobeControlPointMap : public EarthView::World::Core::CBaseObject
			{
ev_private:
				CGlobeControlPointMap(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CGlobeControlPointMap();
				/// <summary>
				/// 添加数据
				/// </summary>
				/// <param name="key">键</param>
				/// <param name="val">值</param>
				/// <returns></returns>
				ev_bool push(const ev_real64 &key, EarthView::World::Spatial3D::CGlobeControlPoint const &val);
				/// <summary>
				/// 判断指定的键是否存在
				/// </summary>
				/// <param name="key"></param>
				/// <returns></returns>
				ev_bool exist(const ev_real64 &key);
				EarthView::World::Spatial3D::CGlobeControlPoint& operator[](const ev_real64 &key);
				/// <summary>
				/// 根据指定的键返回值
				/// </summary>
				/// <param name="key">键</param>
				/// <returns></returns>
				EarthView::World::Spatial3D::CGlobeControlPoint& get(const ev_real64 &key);
				/// <summary>
				/// 根据指定的键删除数据
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
				/// 返回容器是否为空
				/// </summary>
				/// <returns></returns>
				ev_bool empty() const;

				/// <summary>
				/// 根据索引取得键
				/// </summary>
				/// <param name="index">索引</param>
				/// <param name="key">键，返回值</param>
				/// <returns></returns>
				ev_bool getKey(ev_int32 index,ev_real64& key) const;
ev_private:
				typedef map<ev_real64,EarthView::World::Spatial3D::CGlobeControlPoint> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::mapped_type mapped_type;
				typedef InternalList::key_type key_type;
				typedef InternalList::value_type value_type;
				typedef pair<iterator, bool> _Pairib;
				RESERVE_CONTAINER_FUNCTION_MAP(mList);

				CGlobeControlPointMap::_Pairib insert(const value_type &val);
				CGlobeControlPointMap::iterator find(const ev_real64 &key);
				CGlobeControlPointMap::const_iterator find(const ev_real64 &key) const;

				ev_void operator = (const EarthView::World::Spatial3D::CGlobeControlPointMap& rhs);
			private:
				InternalList mList;
			};

			/// <summary>
			/// 数字地球控制点路径
			/// </summary>
 			class EV_Spatial3DEngine_DLL CControlPointPath : public EarthView::World::Core::CBaseObject
 			{
             ev_private:
 				CControlPointPath(_in EarthView::World::Core::CNameValuePairList *pList);
 			public:
                /// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
 				CControlPointPath();
				/// <summary>
				/// 挎贝构造函数
				/// </summary>
				/// <param name="rhs"></param>
				/// <returns></returns>
				CControlPointPath(_in const CControlPointPath& rhs);
                /// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
 				virtual ~CControlPointPath();
                /// <summary>
				/// 插入控制点
				/// </summary>
				/// <param name="time">时间</param>
				/// <param name="postion">控制点</param>
				/// <returns></returns>
 				void insertControlPoint(ev_real64 time,EarthView::World::Spatial3D::CControlPoint postion);
                /// <summary>
				/// 长度
				/// </summary>
				/// <returns></returns>
 				int count();
                /// <summary>
				/// 返回最后一个控制点
				/// </summary>
				/// <param name="pos">控制点</param>
				/// <returns></returns>
 				ev_bool end(EarthView::World::Spatial3D::CControlPoint& pos);
                /// <summary>
				/// 返回最后一个控制点的时间
				/// </summary>
				/// <param name="time">时间</param>
				/// <returns></returns>
 				ev_bool endTime(ev_real64& time);
                /// <summary>
				/// 总时间长度
				/// </summary>
				/// <returns></returns>
 				ev_real64 timeLength();
                /// <summary>
				/// 清空容器
				/// </summary>
				/// <returns></returns>
 				void clear();
                /// <summary>
				/// 返加控制点数据
				/// </summary>
				/// <returns></returns>
 				EarthView::World::Spatial3D::CControlPointMap getControlPointMap() const;
                /// <summary>
				/// 写出为ＸＭＬ
				/// </summary>
				/// <param name="path">路径</param>
				/// <returns></returns>
 				void toXml(_in EVString path);
                /// <summary>
				/// 设置局部中心点
				/// </summary>
				/// <param name="localCenter">中心点</param>
				/// <returns></returns>
 				void setlocalCenter(_in const EarthView::World::Spatial::Math::CVector3& localCenter)
 				{
 					mlocalCenter = localCenter;
 				}
				/// <summary>
				/// 返回局部中心点
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CVector3 getLocalCenter() const 
				{
					return mlocalCenter;
				}

				void operator = (_in const EarthView::World::Spatial3D::CControlPointPath& rhs);
 
 			protected:
				EarthView::World::Spatial::Math::CVector3 mlocalCenter;
				EarthView::World::Spatial3D::CControlPointMap mcontrolPostionMap;
			};

			/// <summary>
			/// 控制点路径智能指针
			/// </summary>
			class UNWARP_EXPORT CControlPointPathPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::CControlPointPath>
			{
ev_private:
				CControlPointPathPtr(_in EarthView::World::Core::CNameValuePairList *pList);
				explicit CControlPointPathPtr(CControlPointPath *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CControlPointPath>(rep, inFreeMethod) {}
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CControlPointPathPtr();
				/// <summary>
				/// 挎贝构造函数
				/// </summary>
				/// <param name="rep">数据对象</param>
				/// <returns></returns>
				explicit CControlPointPathPtr(CControlPointPath *rep);
				/// <summary>
				/// 挎贝构造函数
				/// </summary>
				/// <param name="tp"></param>
				/// <returns></returns>
				CControlPointPathPtr(const CControlPointPathPtr &tp);
				/// <summary>
				/// 返回数据的指针
				/// </summary>
				/// <returns></returns>
				EarthView::World::Spatial3D::CControlPointPath *get() const
				{
					return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::CControlPointPath>::get();
				}

				CControlPointPathPtr &operator = (const CControlPointPathPtr &r);

			};

			/// <summary>
			/// 节点动画插值类
			/// </summary>
			class EV_Spatial3DEngine_DLL CGeoInterpolation:public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CGeoInterpolation(_in EarthView::World::Core::CNameValuePairList* plist);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CGeoInterpolation();
				/// <summary>
				/// 对原始的控制点进行球面插值
				/// </summary>
				/// <param name="controlPoints">控制点</param>
				/// <returns>插值而来的结果</returns>
				static EarthView::World::Spatial3D::CGlobeControlPointMap interpolation(EarthView::World::Spatial3D::CGlobeControlPointMap controlPoints);

				static void calculateTangent(EarthView::World::Spatial::Math::CVector3 v1,EarthView::World::Spatial::Math::CVector3 v2,EarthView::World::Spatial::Math::CVector3& tangent1,EarthView::World::Spatial::Math::CVector3& tangent2);

				/// <summary>
				/// 对原始的控制点进行贝塞尔插值
				/// </summary>
				/// <param name="pointA">第一个点</param>
				/// <param name="pointB">第二个点</param>
				/// <param name="controlPointA">第一个控制点</param>
				/// <param name="controlPointB">第二个控制点</param>
				/// <param name="smooth">圆滑程度，0 - 7 之间的一个数</param>
				/// <returns>插值而来的结果</returns>
				static CGlobeControlPointMap getBezierCurve(_in const EarthView::World::Spatial3D::CGlobeControlPoint& pointA,_in const EarthView::World::Spatial3D::CGlobeControlPoint& pointB,_in const EarthView::World::Spatial::Math::CVector3& controlPointA,_in const EarthView::World::Spatial::Math::CVector3& controlPointB,_in ev_uint32 smooth);
				/// <summary>
				/// 对原始的控制点进行贝塞尔插值
				/// </summary>
				/// <param name="pointA">第一个点</param>
				/// <param name="pointB">第二个点</param>
				/// <param name="controlPointA">第一个控制点</param>
				/// <param name="controlPointB">第二个控制点</param>
				/// <returns>插值而来的结果</returns>
				static CGlobeControlPointMap getBezierCurve(_in const EarthView::World::Spatial3D::CGlobeControlPoint& pointA,_in const EarthView::World::Spatial3D::CGlobeControlPoint& pointB,_in const EarthView::World::Spatial::Math::CVector3& controlPointA,_in const EarthView::World::Spatial::Math::CVector3& controlPointB);
				/// <summary>
				/// 对原始的控制点进行贝塞尔插值
				/// </summary>
				/// <param name="controlPoints">控制点</param>
				/// <returns>插值而来的结果</returns>
				static CGlobeControlPointMap bezierInterpolation(_in CGlobeControlPointMap controlPoints);
			};
		}
	}
}

#endif

