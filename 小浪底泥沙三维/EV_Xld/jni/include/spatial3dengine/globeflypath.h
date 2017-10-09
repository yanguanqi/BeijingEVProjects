#ifndef GLOBEFLYPAHT_H
#define GLOBEFLYPAHT_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"
#include "mathengine/ev_math.h"
#include "graphic/colourvalue.h"
#include "spatial3dengine/controlpoint.h"
#include "core/sharedptr.h"
#include "core/xml.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			enum FlyMode
			{
				FirstPersonMode,
				ThirdPersonMode,
				AnimationMode
			};

			class EV_Spatial3DEngine_DLL CAngleDistanceMap : public EarthView::World::Core::CBaseObject
			{
ev_private:
				CAngleDistanceMap(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CAngleDistanceMap();
				ev_bool push(const ev_int32 &key, ev_real64 const &val);
				ev_bool exist(const ev_int32 &key);
				ev_real64& operator[](const ev_int32 &key);
				ev_real64& get(const ev_int32 &key);
				ev_void erase(const ev_int32 &key);
				ev_size_t size() const;
				ev_void clear();
				ev_bool empty() const;
ev_private:
				typedef map<ev_int32,ev_real64> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::mapped_type mapped_type;
				typedef InternalList::key_type key_type;
				typedef InternalList::value_type value_type;
				typedef pair<iterator, bool> _Pairib;
				RESERVE_CONTAINER_FUNCTION_MAP(mList);

				CAngleDistanceMap::_Pairib insert(const value_type &val);
				CAngleDistanceMap::iterator find(const ev_int32 &key);
				CAngleDistanceMap::const_iterator find(const ev_int32 &key) const;
			private:
				InternalList mList;
			};

			/// <summary>
			/// 时刻与进度百分比的键值对
			/// </summary>
			class EV_Spatial3DEngine_DLL CTimeRatePair:public EarthView::World::Core::CBaseObject
			{
			public: 
				/// <summary>
				/// 构造函数
				/// </summary>
				CTimeRatePair();
				/// <summary>
				/// 时刻
				/// </summary>
				ev_real64 mfirst;
				/// <summary>
				/// 进度
				/// </summary>
				ev_real64 msecond;
ev_private:
				CTimeRatePair(_in EarthView::World::Core::CNameValuePairList *pList);
			};

			/// <summary>
			/// 时刻与进度百分比键值对容器
			/// </summary>
			class EV_Spatial3DEngine_DLL CTimeRatePairList : public EarthView::World::Core::CBaseObject
			{
ev_private:
				typedef vector<EarthView::World::Spatial3D::CTimeRatePair> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				CTimeRatePairList::iterator insert(_in CTimeRatePairList::iterator pos, _in CTimeRatePair const &t);
			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CTimeRatePairList(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CTimeRatePairList();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void push_back(_in EarthView::World::Spatial3D::CTimeRatePair const &t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void pop_back();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				EarthView::World::Spatial3D::CTimeRatePair& front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				EarthView::World::Spatial3D::CTimeRatePair& back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::CTimeRatePair const &t);
				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				ev_void remove(_in ev_size_t pos);
				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Spatial3D::CTimeRatePair& operator[](_in ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Spatial3D::CTimeRatePair const &operator[](_in ev_size_t n) const;
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Spatial3D::CTimeRatePair& at(_in ev_size_t n);
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Spatial3D::CTimeRatePair const &at(_in ev_size_t n) const;
				/// <summary>
				/// 返回元素的数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器中元素数量大小
				/// </summary>
				/// <param name="newSize">改变的容器中元素数量大小</param>
				/// <returns></returns>
				ev_void resize(_in ev_size_t newSize);
				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				/// <returns></returns>
				ev_void reserve(_in ev_size_t count);
				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clear();
			};

			class EV_Spatial3DEngine_DLL CTimeRateList : public EarthView::World::Core::CBaseObject
			{
ev_private:
				typedef vector<ev_real64> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				CTimeRateList::iterator insert(_in CTimeRateList::iterator pos, _in ev_real64 const &t);
			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CTimeRateList(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CTimeRateList();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void push_back(_in ev_real64 const &t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void pop_back();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				ev_real64& front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				ev_real64& back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void insert(_in ev_uint32 pos, _in ev_real64 const &t);
				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				ev_void remove(_in ev_size_t pos);
				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				ev_real64& operator[](_in ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				ev_real64 const &operator[](_in ev_size_t n) const;
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				ev_real64& at(_in ev_size_t n);
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				ev_real64 const &at(_in ev_size_t n) const;
				/// <summary>
				/// 返回元素的数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器中元素数量大小
				/// </summary>
				/// <param name="newSize">改变的容器中元素数量大小</param>
				/// <returns></returns>
				ev_void resize(_in ev_size_t newSize);
				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				/// <returns></returns>
				ev_void reserve(_in ev_size_t count);
				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clear();
			};

			/// <summary>
			/// 飞行参数类
			/// </summary>
			class EV_Spatial3DEngine_DLL CFLyParam:public EarthView::World::Core::CBaseObject
			{
			public:
				/// <summary>
				/// 高度模式定义
				/// </summary>
				enum AltitudeMode
				{
					RelativeToGround = 0,
					ClampedToGround,
					RelativeToSeaFloor,
					RelativeToOBQ,
					Absolute
				};
				/// <summary>
				/// 目标高度
				/// </summary>
				ev_real64 mDstAltitude;

				/// <summary>
				/// 高度是否发生了变化
				/// </summary>
				ev_bool mAltitudeChanged;
				/// <summary>
				/// 观察距离
				/// </summary>
				ev_real64 mobserveDistance;
				/// <summary>
				/// 俯仰角
				/// </summary>
				EarthView::World::Spatial::Math::CDegree mtilt;
				/// <summary>
				/// 速度
				/// </summary>
				ev_int32 mspeed;

				/// <summary>
				/// 是否从文件读取
				/// </summary>
				ev_bool misFile;

				/// <summary>
				/// 是否显示模型
				/// </summary>
				ev_bool mismodelWithEffect;

				/// <summary>
				/// 模型路径
				/// </summary>
				EVString mmodelFile;

				/// <summary>
				/// 模型所在的数据源名称
				/// </summary>
				EVString mdataSourceName;

				/// <summary>
				/// 模型所在的数据集名称
				/// </summary>
				EVString mentityDatasetName;

				/// <summary>
				/// 模型实体名
				/// </summary>
				EVString mentityName;

				/// <summary>
				/// 模型id
				/// </summary>
				int mentityId;

				/// <summary>
				/// 模型是否被换掉
				/// </summary>
				ev_bool mmodelChanged;
				/// <summary>
				/// 模型缩放比例
				/// </summary>
				ev_real32 mmodelScale;

				/// <summary>
				/// 绕X轴旋转角度
				/// </summary>
				ev_real32 mpreRotationX;
				/// <summary>
				/// 绕Y轴旋转角度
				/// </summary>
				ev_real32 mpreRotationY;
				/// <summary>
				/// 绕Z轴旋转角度
				/// </summary>
				ev_real32 mpreRotationZ;

				/// <summary>
				/// 航线的颜色
				/// </summary>
				EarthView::World::Graphic::CColourValue mlineColor;

				/// <summary>
				/// 航线的颜色
				/// </summary>
				ev_bool mlineColorChanged;

				/// <summary>
				/// 是否锁定偏航角
				/// </summary>
				ev_bool mlockHeading;

				/// <summary>
				/// 是否锁定俯仰角
				/// </summary>
				ev_bool mlockTilt;

				/// <summary>
				/// 是否锁定观察距离
				/// </summary>
				ev_bool mlockObserveDistance;

				/// <summary>
				/// 是否显示航线
				/// </summary>
				ev_bool mrenderRoute;
				/// <summary>
				/// 是否平滑航线
				/// </summary>
				ev_bool msmoothRoute;
				/// <summary>
				/// 平滑航线开关是否被改变
				/// </summary>
				ev_bool msmoothRouteChanged;

				/// <summary>
				/// 是否渲染模型
				/// </summary>
				ev_bool mrenderModel;
				/// <summary>
				/// 飞行模式
				/// </summary>
				EarthView::World::Spatial3D::FlyMode mflyMode;

				/// <summary>
				/// 高度模式
				/// </summary>
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode mAltitudeMode;
				/// <summary>
				/// 构造函数
				/// </summary>
				CFLyParam();
ev_private:
				CFLyParam(_in EarthView::World::Core::CNameValuePairList* pList);
			};

			/// <summary>
			/// 飞行路径类
			/// 飞行路径及播放控制
			/// </summary>
			class EV_Spatial3DEngine_DLL CGlobeFlyPath:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 循环模式
				/// </summary>
				enum  LOOPMODE
				{
					LOOP = 0,
					NOLOOP
				};

				/// <summary>
				/// 构造函数
				/// <param name="name">航线名称</param>
				/// <param name="radious">地球半径</param>
				/// <param name="mode">循环模式</param>
				/// </summary>
				CGlobeFlyPath(_in const EVString& name,_in ev_real64 radious,_in EarthView::World::Spatial3D::CGlobeFlyPath::LOOPMODE mode);
				/// <summary>
				/// 构造函数
				/// </summary>
				CGlobeFlyPath();
ev_private:
				CGlobeFlyPath(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				~CGlobeFlyPath();

				/// <summary>
				/// 开始飞行
				/// </summary>
				/// <param name="time">开始的时刻</param>
				/// <returns></returns>
				ev_bool start(_in ev_real64 time);
				/// <summary>
				/// 结束飞行
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool end();

				/// <summary>
				/// 清除控制点
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clear();

				/// <summary>
				/// 清除控制点
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getControlPointCount();

				/// <summary>
				/// 增加控制点
				/// </summary>
				/// <param name="point">控制点</param>
				/// <returns></returns>
				ev_void addControlPoint(_in const EarthView::World::Spatial3D::CGlobeControlPoint& point);

				/// <summary>
				/// 移除控制点
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns></returns>
				ev_void removeControlPoint(_in int index);

				/// <summary>
				/// 设置路径的名称
				/// </summary>
				/// <param name="name">名称</param>
				/// <returns></returns>
				void setName(const EVString& name)
				{
					mname = name;
				}

				/// <summary>
				/// 获取路径的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getName()
				{
					return mname;
				}

				/// <summary>
				/// 设置循环模式
				/// </summary>
				/// <param name="loop">是否循环</param>
				/// <returns></returns>
				ev_void setLoopMode(_in ev_bool loop)
				{
					if(loop)
						mloopMode = LOOP;
					else
						mloopMode = NOLOOP;
				}

				/// <summary>
				/// 获取循环模式
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool getLoopMode()
				{
					if(mloopMode == LOOP)
						return true;
					else
						return false;
				}

				/// <summary>
				/// 获取半径(默认为地球半径)
				/// </summary>
				/// <param name=""></param>
				/// <returns>球半径</returns>
				ev_real64 getRadious()
				{
					return mradious;
				}

				/// <summary>
				/// 设置半径(默认为地球半径)
				/// </summary>
				/// <param name="radius">半径</param>
				/// <returns></returns>
				ev_void setRadious(ev_real64 radius)
				{
					mradious = radius;
				}

				/// <summary>
				/// 保存成xml
				/// </summary>
				/// <param name="path">xml文件路径</param>
				/// <returns></returns>
				ev_void toXml(_in const EVString &path);

				/// <summary>
				/// 序列化成XML对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Core::CXmlElement toXml() const;

				/// <summary>
				/// 从XML文件中恢复
				/// </summary>
				/// <param name="path">xml文件路径</param>
				/// <returns></returns>
				ev_void fromXml(_in EVString &path);

				/// <summary>
				/// 从XML对象中恢复
				/// </summary>
				/// <param name="xmlElement">xml对象</param>
				/// <returns></returns>
				ev_void fromXml(EarthView::World::Core::CXmlElement &xmlElement);

				/// <summary>
				/// 获取飞行参数
				/// </summary>
				/// <param name=""></param>
				/// <returns>飞行参数</returns>
				EarthView::World::Spatial3D::CFLyParam& getFlyParam()
				{
					return mflyParam;
				}

				/// <summary>
				/// 获取控制点
				/// </summary>
				/// <param name=""></param>
				/// <returns>数字地球飞行控制点集合</returns>
				EarthView::World::Spatial3D::CGlobeControlPointMap& getControlPoint()
				{
					return mcontrolPoint;
				}

				/// <summary>
				/// 获取飞行控制点(由插值生成的全部节点)
				/// </summary>
				/// <param name=""></param>
				/// <returns>数字地球飞行控制点集合</returns>
				EarthView::World::Spatial3D::CGlobeControlPointMap& getFlyControlPoint()
				{
					return mflyControlPoint;
				}

				/// <summary>
				/// 获得角度距离字典
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial3D::CAngleDistanceMap getAngleDistance()
				{
					return mangleDistance;
				}

				/// <summary>
				/// 获得角度距离字典
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial3D::CAngleDistanceMap getRealAngleDistance()
				{
					return mrealAngleDistance;
				}

				/// <summary>
				/// 获得时刻与进度百分比对的列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial3D::CTimeRatePairList getTimeRateList()
				{
					return mtimeRatePairList;
				}

				/// <summary>
				/// 对路径进行平滑处理
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void smoothRouteLine();

				bool needToSlowDown(ev_real64 timeRate);

				ev_bool findCureControlPoint(int number);

				/// <summary>
				/// 计算角度及距离
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void computeAngleDistance();

				/// <summary>
				/// 计算角度及距离
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void computeRealAngleDistance();

				/// <summary>
				/// 根据时刻生成控制点
				/// </summary>
				/// <param name="time">时刻</param>
				/// <returns></returns>
				EarthView::World::Spatial3D::CGlobeControlPoint getInterpolaterdControlPoint(_in ev_real64 time);

				/// <summary>
				/// 计算航向角
				/// </summary>
				/// <param name="point1">控制点</param>
				/// <param name="point2">控制点</param>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CRadian ComputerHead(_in EarthView::World::Spatial3D::CGlobeControlPoint &point1,_in EarthView::World::Spatial3D::CGlobeControlPoint &point2);

				/// <summary>
				/// 获得速度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_real64 getVelocity();

				/// <summary>
				/// 设置速度
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setVelocity(_in ev_real64 velocity);

				ev_real64 getAngleVelocity()
				{
					return mangularVelocity;
				}

				EVString mname;

				EarthView::World::Spatial3D::CGlobeControlPointMap mcontrolPoint;
				EarthView::World::Spatial3D::CGlobeControlPointMap mflyControlPoint;
				EarthView::World::Spatial3D::CGlobeControlPoint mLastControlPoint;
				EarthView::World::Spatial3D::CAngleDistanceMap mangleDistance;
				EarthView::World::Spatial3D::CAngleDistanceMap mrealAngleDistance;
				EarthView::World::Spatial3D::CGlobeFlyPath::LOOPMODE mloopMode;
				ev_real64 mbezierStartPostion;
				ev_real64 mbezierSmoothScale;
				ev_real64   mangularVelocity;
				ev_real64   mradious;
				ev_bool     misRun;
				ev_real64   mstartTime;
				EarthView::World::Spatial3D::CFLyParam mflyParam;

				//EarthView::World::Spatial3D::CControlPointPathPtr mcontrolPointPath;
				EarthView::World::Spatial3D::CControlPointMap mcontrolPointMap;
				ev_real64 mtotalAngleDistance;
				ev_real64 mrrealTotalAngleDistance;
				EarthView::World::Spatial3D::CTimeRateList mtimeRateList;
				EarthView::World::Spatial3D::CTimeRatePairList mtimeRatePairList;
ev_private:
				vector<int> mcurveControlPoints;
			};

			class EV_Spatial3DEngine_DLL CGlobeFlyPathPtr:public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::CGlobeFlyPath>
			{
ev_private:
				CGlobeFlyPathPtr(_in EarthView::World::Core::CNameValuePairList *pList);
				explicit CGlobeFlyPathPtr(CGlobeFlyPath *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CGlobeFlyPath>(rep, inFreeMethod) {}
			public:
				CGlobeFlyPathPtr();
				explicit CGlobeFlyPathPtr(CGlobeFlyPath *rep);
				CGlobeFlyPathPtr(const CGlobeFlyPathPtr &tp);

				EarthView::World::Spatial3D::CGlobeFlyPath *get() const
				{
					return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::CGlobeFlyPath>::get();
				}

				void setGlobeFlyPath(_in EarthView::World::Spatial3D::CGlobeFlyPath *rep);

				EarthView::World::Spatial3D::CGlobeFlyPathPtr &operator = (const EarthView::World::Spatial3D::CGlobeFlyPathPtr &r);
			};

			class EV_Spatial3DEngine_DLL CGlobeFlyPathMap : public EarthView::World::Core::CBaseObject
			{
ev_private:
				CGlobeFlyPathMap(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CGlobeFlyPathMap();
				ev_bool push(const EVString &key, EarthView::World::Spatial3D::CGlobeFlyPathPtr const &val);
				ev_bool exist(const EVString &key);
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& operator[](const EVString &key);
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& get(const EVString &key);
				ev_void erase(const EVString &key);
				ev_size_t size() const;
				ev_void clear();
				ev_bool empty() const;
ev_private:
				typedef map<EVString,EarthView::World::Spatial3D::CGlobeFlyPathPtr> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::mapped_type mapped_type;
				typedef InternalList::key_type key_type;
				typedef InternalList::value_type value_type;
				typedef pair<iterator, bool> _Pairib;
				RESERVE_CONTAINER_FUNCTION_MAP(mList);

				CGlobeFlyPathMap::_Pairib insert(const value_type &val);
				CGlobeFlyPathMap::iterator find(const EVString &key);
				CGlobeFlyPathMap::const_iterator find(const EVString &key) const;
			private:
				InternalList mList;
			};

			class EV_Spatial3DEngine_DLL CGlobeFlyPathVector : public EarthView::World::Core::CBaseObject
			{
ev_private:
				typedef vector<EarthView::World::Spatial3D::CGlobeFlyPathPtr> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				CGlobeFlyPathVector::iterator insert(_in CGlobeFlyPathVector::iterator pos, _in EarthView::World::Spatial3D::CGlobeFlyPathPtr const &t);
			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGlobeFlyPathVector(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CGlobeFlyPathVector();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void push_back(_in EarthView::World::Spatial3D::CGlobeFlyPathPtr const &t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void pop_back();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::CGlobeFlyPathPtr const &t);
				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				ev_void remove(_in ev_size_t pos);
				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& operator[](_in ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Spatial3D::CGlobeFlyPathPtr const &operator[](_in ev_size_t n) const;
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& at(_in ev_size_t n);
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Spatial3D::CGlobeFlyPathPtr const &at(_in ev_size_t n) const;
				/// <summary>
				/// 返回元素的数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器中元素数量大小
				/// </summary>
				/// <param name="newSize">改变的容器中元素数量大小</param>
				/// <returns></returns>
				ev_void resize(_in ev_size_t newSize);
				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				/// <returns></returns>
				ev_void reserve(_in ev_size_t count);
				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clear();
			};

		}
	}
}

#endif

