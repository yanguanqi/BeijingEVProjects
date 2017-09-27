#ifndef EARTHVIEW_WORLD_KMLSERIALIZE_KMLTOUR_H
#define EARTHVIEW_WORLD_KMLSERIALIZE_KMLTOUR_H

#include "config.h"
#include <core/memoryallocatedobject.h>
#include "spatialinterface/altitudemode.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				//飞行方式
				enum EVFlyToMode 
				{
					FTM_BOUNCE = 0,//从一点到另一点（逐点）的不间断飞行,每一点都不减速(默认是bounce)
					FTM_SMOOTH //都以零速度开始和结束
				};

				// 抽象视图类型
				enum EVAbstractView
				{
					AV_CAMERA,
					AV_LOOKAT
				};				
				// 漫游状态
				enum EVTourUnitType 
				{
					TUT_FLYTO,
					TUT_WAIT
				};

				//漫游
				class EV_KMLSERIALIZER_DLL CTourUnit : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTourUnit(_in EarthView::World::Core::CNameValuePairList *pList);
				public:	
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTourUnit();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CTourUnit();		
					EarthView::World::Spatial::Kml::EVTourUnitType m_type;
				public:
					/// <summary>
					/// 获取漫游的类型
					/// </summary>
					/// <returns>返回漫游的类型</returns>
					virtual EarthView::World::Spatial::Kml::EVTourUnitType getType() const;
					/// <summary>
					/// 设置漫游的类型
					/// </summary>
					/// <param name="type_tour">漫游类型</param>
					/// <returns></returns>
					ev_void setType(const EarthView::World::Spatial::Kml::EVTourUnitType type_tour);

					//zk
					/// <summary>
					/// 克隆一个漫游对象
					/// </summary>
					/// <returns>返回漫游对象</returns>
					virtual EarthView::World::Spatial::Kml::CTourUnit* clone();
				};

				class EV_KMLSERIALIZER_DLL CFlyTo : public EarthView::World::Spatial::Kml::CTourUnit
				{
				public:
					class EV_KMLSERIALIZER_DLL CameraStr:public EarthView::World::Core::CBaseObject
					{
					public: 
						//zk
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <returns></returns>
						CameraStr()
							:lon(0.0),
							lat(0.0),
							altitude(0.0),
							heading(0.0),
							tilt(0.0),
							altitidemode(EarthView::World::Spatial::Utility::AM_ClampToGround),
							roll(0.0)
						{

						}
						double lon;//0
						double lat;//0
						double altitude;//0
						double heading;//0
						double tilt;//0
						EarthView::World::Spatial::Utility::EVAltitudeMode altitidemode;//0
						double roll;//0

ev_private:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="pList">构造函数参数键值对表</param>
						/// <returns></returns>
						CameraStr(_in EarthView::World::Core::CNameValuePairList *pList);
					};

					class EV_KMLSERIALIZER_DLL LookAtStr:public EarthView::World::Core::CBaseObject
					{
					public:
						//zk
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <returns></returns>
						LookAtStr()
							:lon(0.0),
							lat(0.0),
							altitude(0.0),
							heading(0.0),
							tilt(0.0),
							altitidemode(EarthView::World::Spatial::Utility::AM_ClampToGround),
							range(0.0)
						{
						}
						double lon;//0
						double lat;//0
						double altitude;//0
						double heading;//0
						double tilt;//0
						EarthView::World::Spatial::Utility::EVAltitudeMode altitidemode; //0
						double range;//0
ev_private:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="pList">构造函数参数键值对表</param>
						/// <returns></returns>
						LookAtStr(_in EarthView::World::Core::CNameValuePairList *pList);
					};
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFlyTo(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CFlyTo();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CFlyTo();
					
					/// <summary>
					/// 获得飞行时间
					/// </summary>
					/// <returns>返回飞行的时间</returns>
					ev_real64 getDuration();

					/// <summary>
					/// 设置飞行时间
					/// </summary>
					/// <param name="durationF">飞行时间</param>
					/// <returns></returns>
					ev_void setDuration(double durationF);
					
					/// <summary>
					/// 获得飞行模式
					/// </summary>
					/// <returns>返回飞行模式</returns>
					EarthView::World::Spatial::Kml::EVFlyToMode getFlyToMode();

					/// <summary>
					/// 设置飞行模式
					/// </summary>
					/// <param name="durationF">飞行模式</param>
					/// <returns></returns>
					ev_void setFlyToMode(EarthView::World::Spatial::Kml::EVFlyToMode mode);

					/// <summary>
					/// 获得AbstractView哪种观察方式
					/// </summary>
					/// <returns>返回观察方式</returns>
					EarthView::World::Spatial::Kml::EVAbstractView getAbstractView();
					/// <summary>
					/// 设置观察方式
					/// </summary>
					/// <param name="abstra">观察的方式</param>
					/// <returns></returns>
					ev_void setAbstractView(EarthView::World::Spatial::Kml::EVAbstractView abstra);
					/// <summary>
					/// 获得相机描述
					/// </summary>
					/// <returns>返回相机描述</returns>
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr& getCamera();
					/// <summary>
					/// 设置相机描述
					/// </summary>
					/// <param name="camera_tour">相机描述</param>
					/// <returns></returns>
					ev_void setCamera(EarthView::World::Spatial::Kml::CFlyTo::CameraStr camera_tour);
					/// <summary>
					/// 获得观察描述
					/// </summary>
					/// <returns>返回观察描述</returns>
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr& getLookAt();
					/// <summary>
					/// 设置观察描述
					/// </summary>
					/// <param name="camera_tour">观察描述类</param>
					/// <returns></returns>
					ev_void setLookAt(EarthView::World::Spatial::Kml::CFlyTo::LookAtStr lookat_tour);
					//获得观察方式里面的值
					//AbstractViewPtr getAbstractViewContent();
					//ev_real64 

					//设置观察方式里面的值
					//ev_void setAbstractViewContent(AbstractViewPtr abstractV_tour);

					//zk
					/// <summary>
					/// 克隆
					/// </summary>
					/// <returns>返回克隆对象</returns>
					virtual EarthView::World::Spatial::Kml::CTourUnit* clone();

				protected:
					ev_real64 mDruationTime;
					EarthView::World::Spatial::Kml::EVFlyToMode mMode;
					EarthView::World::Spatial::Kml::EVAbstractView mabstractView;
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr mCameras;
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr mLookAts;
					//AbstractViewPtr abstracview_tour;
				};

				class EV_KMLSERIALIZER_DLL CWait : public EarthView::World::Spatial::Kml::CTourUnit
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CWait(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CWait();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CWait();
					
					/// <summary>
					/// 获得等待时间
					/// </summary>
					/// <returns>返回等待时间</returns>
					ev_real64 getDuration();

					
					/// <summary>
					/// 设置等待时间
					/// </summary>
					/// <param name="durationW">等待的时间</param>
					/// <returns></returns>
					ev_void setDuration(ev_real64 durationW);
					/// <summary>
					/// 克隆
					/// </summary>
					/// <returns>返回克隆的对象</returns>
					virtual EarthView::World::Spatial::Kml::CTourUnit* clone();

				protected:
					ev_real64 mdurationWait;
				};

				class EV_KMLSERIALIZER_DLL CTourUnitVector : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::Kml::CTourUnit*> InternalList;
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
					CTourUnitVector::iterator insert(_in EarthView::World::Spatial::Kml::CTourUnitVector::iterator pos, _in EarthView::World::Spatial::Kml::CTourUnit *const &ref_t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTourUnitVector(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CTourUnitVector();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Spatial::Kml::CTourUnit *const &ref_t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial::Kml::CTourUnit*& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial::Kml::CTourUnit*& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::Kml::CTourUnit *const &ref_t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::Kml::CTourUnit*& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::Kml::CTourUnit *const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Kml::CTourUnit*& at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Kml::CTourUnit *const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
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
					/// <returns></returns>
					ev_void clear();
				};

				class EV_KMLSERIALIZER_DLL CTour : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTour(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					EVString mName;
					EVString mId;	
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTour();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CTour();
					/// <summary>
					/// 拷贝构造
					/// </summary>
					/// <param name="rhs">拷贝的对象</param>
					/// <returns></returns>
					CTour(const CTour& rhs);
					/// <summary>
					/// 添加对象到列表
					/// </summary>
					/// <param name="unit">添加的对象</param>
					/// <returns></returns>
					ev_void addTourUnit(const EarthView::World::Spatial::Kml::CTourUnit* ref_unit);
					/// <summary>
					/// 移除指定的索引的元素
					/// </summary>
					/// <param name="unit">索引位置</param>
					/// <returns></returns>	
					ev_void removeTourUnit(ev_size_t index);
					/// <summary>
					/// 清空对象到列表
					/// </summary>
					/// <returns></returns>
					ev_void clearTourUnit();
					/// <summary>
					/// 获取指定索引的对象
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>返回对象</returns>
					EarthView::World::Spatial::Kml::CTourUnit* getTourUnit(ev_size_t index);
					/// <summary>
					/// 获取子对象的个数
					/// </summary>
					/// <returns>返回个数</returns>
					ev_uint32 getTourUnitNum();
		

					/// <summary>
					/// 判断是否可见
					/// </summary>
					/// <returns>是否可见</returns>
					ev_bool isVisiable() const;

					/// <summary>
					/// 设置是否可见
					/// <param name="visibility">是否可见</param>
					/// </summary>
					ev_void setVisible(ev_bool visiable);

					/// <summary>
					/// 左侧树节点是否打开
					/// </summary>
					/// <returns>bool</returns>
					ev_bool isOpen() const;

					/// <summary>
					/// 设置左侧树节点是否打开
					/// <param name="opened">bool</param>
					/// </summary>
					ev_void setOpened(ev_bool opened);

					/// <summary>
					/// 获得描述
					/// </summary>
					/// <returns>返回描述</returns>
					const EVString& getDescription() const;

					/// <summary>
					/// 设置描述
					/// <param name="descripton">描述</param>
					/// </summary>
					ev_void setDescription(const EVString& descripton);

					//zk
					/// <summary>
					/// 获取游览的关键点
					/// <param name="descripton">描述</param>
					/// </summary>
					/// <returns>返回关键点</returns>
					EarthView::World::Spatial::Kml::CTourUnitVector getTourUnits() const
					{
						return mTourUnits;
					}
				protected:
					EarthView::World::Spatial::Kml::CTourUnitVector mTourUnits;		
	
					ev_bool mOpen;
					ev_bool mVisiable;
					EVString mDescription;
				};
			}
		}
	}
}
#endif

