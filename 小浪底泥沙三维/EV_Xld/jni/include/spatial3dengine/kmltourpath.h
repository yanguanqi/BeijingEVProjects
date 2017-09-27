#ifndef KMLTOURPATH_H
#define KMLTOURPATH_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"
#include "core/sharedptr.h"
#include "spatialinterface/altitudemode.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		    class CSceneManager;
		}
		namespace Spatial
		{
			namespace Kml
			{
				class CTour;
				class CFlyTo;
			}
		}
		namespace Spatial3D
		{
			namespace KmlManager
			{
				/// <summary>
				/// kml飞行
				/// </summary>
				class EV_Spatial3DEngine_DLL CKmlFlyTo:public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlFlyTo();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlFlyTo();
					/// <summary>
					/// 重载==运算符
					/// </summary>
					/// <param name="rhs">比较的对象</param>
					/// <returns></returns>
					ev_bool operator == (_in const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& rhs);
					/// <summary>
					/// 重载！=运算符
					/// </summary>
					/// <param name="rhs">比较的对象</param>
					/// <returns></returns>
					ev_bool operator != (_in const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& rhs);

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlFlyTo(_in EarthView::World::Core::CNameValuePairList* plist);

				public:
					ev_real64 mlatitude;
					ev_real64 mlongitude;
					ev_real64 mheading;
					ev_real64 mtilt;
					ev_real64 maltitude;
					ev_real64 mmoditifAltitude;
					ev_real64 mdistance;
					ev_bool mneedStop;
					ev_real64 mtimeSpan;
					ev_bool misWait;
				};
				/// <summary>
				/// kml飞行集合
				/// </summary>
				class EV_Spatial3DEngine_DLL CKmlFlyToMap : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlFlyToMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlFlyToMap();
					/// <summary>
					/// 添加元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <param name="val">键值对的值</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool push(const ev_real64 &key, EarthView::World::Spatial3D::KmlManager::CKmlFlyTo const &val);
					/// <summary>
					/// 指定的键是否存在
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>存在返回true，否则返回false</returns>
					ev_bool exist(const ev_real64 &key);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>返回对应的值</returns>
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& operator[](const ev_real64 &key);
					/// <summary>
					/// 获取元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>返回对应的值</returns>
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& get(const ev_real64 &key);
					/// <summary>
					/// 删除元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns></returns>
					ev_void erase(const ev_real64 &key);
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <returns></returns>
					ev_void clear();
					/// <summary>
					///返回容器是否为null
					/// </summary>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
ev_private:
					typedef map<ev_real64,EarthView::World::Spatial3D::KmlManager::CKmlFlyTo> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);
					/// <summary>
					///插入元素
					/// </summary>
					/// <param name="val">元素值</param>
					/// <returns></returns>
					CKmlFlyToMap::_Pairib insert(const value_type &val);
					/// <summary>
					///查找元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>返回位置迭代器</returns>
					CKmlFlyToMap::iterator find(const ev_real64 &key);
					/// <summary>
					///查找元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>返回位置迭代器</returns>
					CKmlFlyToMap::const_iterator find(const ev_real64 &key) const;
					/// <summary>
					///重载=运算符
					/// </summary>
					/// <param name="rhs">赋值对象</param>
					/// <returns></returns>
					ev_void operator = (const CKmlFlyToMap& rhs);
				private:
					InternalList mList;
				};

				class EV_Spatial3DEngine_DLL CKmlFlyToTimeMap : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlFlyToTimeMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlFlyToTimeMap();
					/// <summary>
					/// 添加元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <param name="val">键值对的值</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool push(const ev_real64 &key, ev_real64 const &val);
					/// <summary>
					/// 指定的键是否存在
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>存在返回true，否则返回false</returns>
					ev_bool exist(const ev_real64 &key);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>返回对应的值</returns>
					ev_real64& operator[](const ev_real64 &key);
					/// <summary>
					/// 获取元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>返回对应的值</returns>
					ev_real64& get(const ev_real64 &key);
					/// <summary>
					/// 删除元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns></returns>
					ev_void erase(const ev_real64 &key);
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <returns></returns>
					ev_void clear();
					/// <summary>
					///返回容器是否为null
					/// </summary>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
ev_private:
					typedef map<ev_real64,ev_real64> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);
					/// <summary>
					///插入元素
					/// </summary>
					/// <param name="val">元素值</param>
					/// <returns></returns>
					CKmlFlyToTimeMap::_Pairib insert(const value_type &val);
					/// <summary>
					///查找元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>返回位置迭代器</returns>
					CKmlFlyToTimeMap::iterator find(const ev_real64 &key);
					/// <summary>
					///查找元素
					/// </summary>
					/// <param name="key">键值对的键</param>
					/// <returns>返回位置迭代器</returns>
					CKmlFlyToTimeMap::const_iterator find(const ev_real64 &key) const;
					/// <summary>
					///重载 = 运算符
					/// </summary>
					/// <param name="rhs">赋值对象</param>
					/// <returns></returns>
					ev_void operator = (const CKmlFlyToTimeMap& rhs);
				private:
					InternalList mList;
				};
				/// <summary>
				/// kml飞行游览路径
				/// </summary>
				class EV_Spatial3DEngine_DLL CKmlTourPath:public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlTourPath();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlTourPath();
					/// <summary>
					/// 初始化flyto容器
					/// </summary>
					/// <param name="tour">游览</param>
					/// <returns></returns>
					void initializeFlyToMap(_in EarthView::World::Spatial::Kml::CTour* ref_tour);
					/// <summary>
					/// 初始化kml游览
					/// </summary>
					/// <param name="tour">游览</param>
					/// <returns></returns>
					void initializeKmlTour(_in EarthView::World::Spatial::Kml::CTour* ref_tour);
					/// <summary>
					/// 获取高程值
					/// </summary>
					/// <param name="altitudeMode">高程模式</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="originalAltitude">起始高度</param>
					/// <returns>返回高度值</returns>
					ev_real64 getAltitude(_in EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode,_in ev_real64 latitude,_in ev_real64 longitude,_in ev_real64 originalAltitude);
					/// <summary>
					/// 设置场景管理
					/// </summary>
					/// <param name="sceneManager">场景管理器</param>
					/// <returns></returns>
					void setSceneManager(_in EarthView::World::Graphic::CSceneManager* ref_sceneManager);
					/// <summary>
					/// 转换为flyto
					/// </summary>
					/// <param name="flyTo">flyto对象</param>
					/// <returns>返回对象</returns>
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo convertToKmlFlyTo(_in EarthView::World::Spatial::Kml::CFlyTo* flyTo);
					/// <summary>
					/// 内插
					/// </summary>
					/// <param name="time">飞行的时间</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo getInterpolaterdFlyTo(_in ev_real64 time);
					/// <summary>
					/// 设置flyto
					/// </summary>
					/// <param name="kmlFlyTo">flyto对象</param>
					/// <param name="front">上一个flyto对象</param>
					/// <param name="back">下一个flyto对象</param>
					/// <param name="ratio">速率</param>
					/// <returns></returns>
					ev_void setFlyTo(EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& kmlFlyTo,_in const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& front,_in const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& back,_in ev_real64 ratio);
					/// <summary>
					/// 计算flyto
					/// </summary>
					/// <param name="front">上一个flyto对象</param>
					/// <param name="back">下一个flyto对象</param>
					/// <param name="frontTime">开始时间</param>
					/// <param name="backTime">结束时间</param>
					/// <param name="currentTime">当前时间</param>
					/// <returns>返回飞行对象</returns>
					EarthView::World::Spatial3D::KmlManager::CKmlFlyTo calculateFlyTo(_in const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& front,_in const EarthView::World::Spatial3D::KmlManager::CKmlFlyTo& back,_in ev_real64 frontTime,_in ev_real64 backTime,_in ev_real64 currentTime);
					/// <summary>
					/// 返回时间长度
					/// </summary>
					/// <returns>返回时间长度</returns>
					ev_real64 getTimeLength();
					/// <summary>
					/// 获取flyto个数
					/// </summary>
					/// <returns>返回flyto的个数</returns>
					ev_int32 getFlyToNumber();
					/// <summary>
					/// 获取飞行对象
					/// </summary>
					/// <param name="timeSpan">时间</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="heading">相机的heading角</param>
					/// <param name="tilt">相机的tilt角</param>
					/// <param name="alitude">高程</param>
					/// <param name="moditifAltiude">高程修正值</param>
					/// <param name="distance">距离</param>
					/// <returns></returns>
					ev_void addKmlFlyTo(_in ev_real64 timeSpan,_in ev_real64 latitude,_in ev_real64 longitude,_in ev_real64 heading,_in ev_real64 tilt,_in ev_real64 alitude,ev_real64 moditifAltiude,ev_real64 distance);
					/// <summary>
					/// 获取游览对象
					/// </summary>
					/// <returns>返回游览对象</returns>
					EarthView::World::Spatial::Kml::CTour* getTour();
					/// <summary>
					/// 清除列表
					/// </summary>
					/// <returns></returns>
					ev_void clear();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlTourPath(_in EarthView::World::Core::CNameValuePairList* plist);

				protected:
					CKmlFlyToMap mkmlTourMap;
					CKmlFlyToTimeMap mkmlFlyToTimeMap;
					EarthView::World::Graphic::CSceneManager* msceneManager;
					EarthView::World::Spatial::Kml::CTour* mmapTour;
				};

				class EV_Spatial3DEngine_DLL CKmlTourPathPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::KmlManager::CKmlTourPath>
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlTourPathPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="rep">EarthView::World::Spatial3D::KmlManager::CKmlTourPath对象</param>
					/// <param name="inFreeMethod">方法</param>
					/// <returns></returns>
					explicit CKmlTourPathPtr(CKmlTourPath *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CKmlTourPath>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlTourPathPtr();
					/// <summary>
					/// 拷贝构造
					/// </summary>
					/// <returns></returns>
					explicit CKmlTourPathPtr(CKmlTourPath *rep);
					/// <summary>
					/// 拷贝构造
					/// </summary>
					/// <returns></returns>
					CKmlTourPathPtr(const CKmlTourPathPtr &tp);
					/// <summary>
					/// 获取对象
					/// </summary>
					/// <returns>返回游览路径</returns>
					EarthView::World::Spatial3D::KmlManager::CKmlTourPath *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::KmlManager::CKmlTourPath>::get();
					}
					/// <summary>
					/// 重载赋值运算符
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr &operator = (const EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr &r);

				};
			}
		}
	}
}


#endif

