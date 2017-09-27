#ifndef EARTHVIEW_WORLD_KMLSERIALIZE_KMLDOCUMENT_H
#define EARTHVIEW_WORLD_KMLSERIALIZE_KMLDOCUMENT_H

#include "config.h"
#include "kmlnetworklink.h"
#include "kmltour.h"
#include "spatialobject/geometry/envelope.h"
//#include "libkml/kml/dom/kml_ptr.h"
#include "spatialobject/geometry/box.h"
#include "spatialobject/geometry/point.h"
#include "spatialobject/geometry/linestring.h"
#include "spatialobject/geometry/polygon.h"
#include "float.h"
#include "mathengine/matrix3.h"
#include "geoobjectextension.h"
#include "cachemanager/kmlcacheaccessor.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				class CKmlSerializer;
				/// <summary>
				/// 接口类，定义了一个监听器可以被用来获得渲染目标事件的通知
				/// </summary>
				class EV_KMLSERIALIZER_DLL CEnvelopListener: public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEnvelopListener(_in EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CEnvelopListener() {}
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEnvelopListener() {}
					/// <summary>
					/// 包围盒改变后通知
					/// </summary>
					virtual ev_void envelopChangedUpdate(){};
				};

				class EV_KMLSERIALIZER_DLL GeoObjects : public EarthView::World::Core::CBaseObject
				{
				public:
					EarthView::World::Spatial::Geometry::CEnvelope mEnvelope;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					GeoObjects(_in EarthView::World::Core::CNameValuePairList *pList);
ev_private:
					typedef vector<EarthView::World::Spatial::Kml::CGeoObjectExtension *> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					iterator insert(iterator pos, EarthView::World::Spatial::Kml::CGeoObjectExtension *const &ref_t)
					{
						return mList.insert(pos, ref_t);
					}

				private:
					InternalList mList;
					typedef vector<EarthView::World::Spatial::Kml::CEnvelopListener *> CEnvelopListenerList;
					CEnvelopListenerList mListeners;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					GeoObjects();

					/// <summary>
					/// 添加包围盒的监听
					/// </summary>
					/// <param name="listener">包围盒监听器</param>
					/// <returns></returns>
					ev_void addListener(EarthView::World::Spatial::Kml::CEnvelopListener* ref_listener)
					{
						mListeners.push_back(ref_listener);
					}
					/// <summary>
					/// 移除指定的包围盒监听
					/// </summary>
					/// <param name="listener">包围盒监听器</param>
					/// <returns></returns>
					ev_void removeListener(EarthView::World::Spatial::Kml::CEnvelopListener* listener);
					/// <summary>
					/// 移除所有的监听
					/// </summary>
					/// <returns></returns>
					ev_void clearAllListener()
					{
						mListeners.clear();
					}
					/// <summary>
					/// 包围盒变化的消息响应
					/// </summary>
					/// <returns></returns>
					ev_void _notifyEnvelopChange();
					/// <summary>
					/// 在容器最后添加对象
					/// </summary>
					/// <param name="t">待增加的队像</param>
					/// <returns></returns>
					ev_void push_back(EarthView::World::Spatial::Kml::CGeoObjectExtension *const & ref_t);
					/// <summary>
					/// 移除容器指定位置的对象
					/// </summary>
					/// <param name="pos">对象的位置</param>
					/// <returns></returns>
					ev_void remove(ev_size_t pos);
					/// <summary>
					///返回容器是否为null
					/// </summary>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const
					{
						return mList.empty();
					}
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::Kml::CGeoObjectExtension*& operator[](ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::Kml::CGeoObjectExtension *const &operator[](ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Kml::CGeoObjectExtension*& at(ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Kml::CGeoObjectExtension *const &at(ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const
					{
						return mList.size();
					}
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(ev_size_t newSize)
					{
						mList.resize(newSize);
					}
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(ev_size_t count)
					{
						mList.reserve(count);
					}
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <returns></returns>
					ev_void clear();
					/// <summary>
					/// 获取几何体的外包盒
					/// </summary>
					/// <returns>外包盒对象</returns>
					EarthView::World::Spatial::Geometry::CEnvelope getEnvelopRef();
					/// <summary>
					/// 计算包几何体围盒
					/// </summary>
					/// <param t>待计算的几何体</param>
					/// <param envelop>包围盒对象</param>
					/// <returns></returns>
					ev_void computeEnvelop(EarthView::World::Spatial::Kml::CGeoObjectExtension& t,EarthView::World::Spatial::Geometry::CEnvelope& envelop);
				};

				//zk
				class EV_KMLSERIALIZER_DLL CTours : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::Kml::CTour*> InternalList;
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
					CTours::iterator insert(_in EarthView::World::Spatial::Kml::CTours::iterator pos, _in EarthView::World::Spatial::Kml::CTour *const & ref_t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTours(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CTours();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Spatial::Kml::CTour *const &ref_t);
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
					EarthView::World::Spatial::Kml::CTour*& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial::Kml::CTour*& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::Kml::CTour *const &ref_t);
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
					EarthView::World::Spatial::Kml::CTour*& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::Kml::CTour *const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Kml::CTour*& at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Kml::CTour *const &at(_in ev_size_t n) const;
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

				class EV_KMLSERIALIZER_DLL CKmlNetworkLinks : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::Kml::CKmlNetworkLink*> InternalList;
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
					CKmlNetworkLinks::iterator insert(_in EarthView::World::Spatial::Kml::CKmlNetworkLinks::iterator pos, _in EarthView::World::Spatial::Kml::CKmlNetworkLink *const & ref_t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlNetworkLinks(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CKmlNetworkLinks();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Spatial::Kml::CKmlNetworkLink *const &ref_t);
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
					EarthView::World::Spatial::Kml::CKmlNetworkLink*& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial::Kml::CKmlNetworkLink*& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::Kml::CKmlNetworkLink *const &ref_t);
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
					EarthView::World::Spatial::Kml::CKmlNetworkLink*& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::Kml::CKmlNetworkLink *const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Kml::CKmlNetworkLink*& at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Kml::CKmlNetworkLink *const &at(_in ev_size_t n) const;
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

				class EV_KMLSERIALIZER_DLL CKmlDocument : public EarthView::World::Spatial::Kml::CEnvelopListener
				{				
				private:
					EarthView::World::Spatial::Geometry::CEnvelope mEnvelope;
					EarthView::World::Spatial::KmlCacheAccessor*  pAccessor;
					ev_bool mModifyed;

					friend class CKmlSerializer;	
					CKmlSerializer* m_pKmlSerializer;
				protected:
					//zf add 2014/6/5
					ev_uint32 mReferenceCount;
					//end
					ev_bool mNetLinkHasUpdate;

					//ev_bool isDisposing;//未起作用，暂时屏蔽，pengyong，2015.06.17

#if EV_PLATFORM != EV_PLATFORM_APPLE && EV_PLATFORM != EV_PLATFORM_APPLE_IOS
					// 子文档集合
					vector<EarthView::World::Spatial::Kml::CKmlDocument*> mSubDocuments;

#endif
					// 网络链接对象集合
					EarthView::World::Spatial::Kml::CKmlNetworkLinks mVecNetLink;
					// geoObject对象集合
					EarthView::World::Spatial::Kml::GeoObjects mGeoObjects;
					//zk
					// 游览对象集合
					EarthView::World::Spatial::Kml::CTours mTours;
				public:
					CKmlWorkQueueState* WorkQueueState;
					CKmlWorkQueueState BatchWorkQueueState;
					CKmlWorkQueueState DynamicBatchWorkQueueState;					
					EVString mKmlPath;
					EVString mName;
					EVString mId;
					EVString mDesiription;
					ev_bool mIsExpand;
					ev_bool mIsNetworkLink;
					ev_bool mIsBelongToNetLink;
					CKmlNetworkLink *mpParentNetworkLink;
					CKmlDocument *mpParent;
					ev_bool m_isFolder;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* mRelativeNetworkLink;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute GeoObjectExtAttr;
					ev_bool mIsVisible;
					ev_bool mIsLodPassed;
					//lookat 参数
					///纬度
					ev_real64 mLatitude;
					///经度
					ev_real64 mLongitude;
					///行偏角
					ev_real64 mHeading;
					///倾角
					ev_real64 mTilt;
					///高度
					ev_real64 mAltitude;
					///高度
					ev_real64 mOriAltitude;
					///是否改变
					ev_bool mIsDirty;
					///only for Google Range,distance from camera to target
					ev_real64 mRange;
					ev_bool mIsCameraAltComputed;
					//end

					EarthView::World::Core::CBaseObject* BatchObjects;
					EarthView::World::Core::CBaseObject* NewBatchObjects;
					EarthView::World::Core::CBaseObject* RegionBatchObjects;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlDocument(_in EarthView::World::Core::CNameValuePairList *pList);	

				public:
					CKmlDocument();
					~CKmlDocument();

					/// <summary>
					/// 加载kml文档,将其解析为kml对象
					/// </summary>
					/// <param name="kml_uri">kml文档所在的路径</param>
					/// <returns>ev_bool是否成功加载kml文档</returns>
					ev_bool loadDocument(const	EVString& kml_uri);

					/// <summary>
					/// 创建新的kml文档
					/// </summary>
					/// <returns>ev_bool</returns>
					ev_bool newDocument();

					/// <summary>
					/// 保存kml文档
					/// </summary>
					/// <param name="kmlPath">kml文件的保存路径</param>
					/// <returns>是否成功保存</returns>
					ev_bool save(const EVString& kmlPath);

					/// <summary>
					/// 在文档内部添加子文档
					/// </summary>
					/// <param name="doc"></param>
					/// <returns>是否添加子文档</returns>
					ev_bool addSubDocument(EarthView::World::Spatial::Kml::CKmlDocument* ref_doc);
					/// <summary>
					/// 获得子文档的数量
					/// </summary>
					/// <returns>获得子文档个数</returns>
					ev_uint32 getSubDocumentCount();
					/// <summary>
					/// 获得第index个子文档
					/// </summary>
					/// <param name="index">第index个子文档</param>
					/// <returns>Kml文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument* getSubDocument(ev_uint32 index);
					/// <summary>
					/// 删除子文档
					/// </summary>
					/// <param name="index">第index个子文档</param>
					/// <returns>是否删除该子文档</returns>
					ev_bool removeSubDocument(ev_uint32 index);

					/// <summary>
					/// 在文档内部添加网络链接
					/// </summary>
					/// <param name="doc">kml文档</param>
					/// <returns>是否添加成功</returns>
					ev_bool addNetworkLink(EarthView::World::Spatial::Kml::CKmlNetworkLink* ref_doc);
					/// <summary>
					/// 获得网络链接的数量
					/// </summary>
					/// <returns>网络链接的个数</returns>
					ev_uint32 getNetworkLinkCount();
					/// <summary>
					/// 获得网络链接
					/// </summary>
					/// <param name="index">获得第index个网络链接</param>
					/// <returns>返回获得的网络链接</returns>
					EarthView::World::Spatial::Kml::CKmlNetworkLink* getNetworkLink(ev_uint32 index);
					/// <summary>
					/// 更新网络链接
					/// </summary>
					/// <returns></returns>
					ev_void netLinkStateUpdate();
					/// <summary>
					/// 删除网络链接
					/// </summary>
					/// <param name="index">删除第index个网络链接</param>
					/// <returns>是否成功删除该网络链接</returns>
					ev_bool removeNetworkLink(ev_uint32 index);

					/// <summary>
					/// 往kml文档中添加GeoObject对象
					/// </summary>
					/// <param name="obj">添加的地理对象</param>
					/// <returns>是否添加</returns>
					ev_bool addGeoObject(const EarthView::World::Spatial::Kml::CGeoObjectExtension& obj);	
					/// <summary>
					/// 删除GeoObject对象
					/// </summary>
					/// <param name="obj">添加的地理对象</param>
					/// <returns></returns>
					ev_bool removeGeoObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObject);
					/// <summary>
					/// 获取GeoObject对象集合
					/// </summary>
					/// <returns>返回地理对象集合</returns>                    
					EarthView::World::Spatial::Kml::GeoObjects& getGeoObjects() ;

					//zk
					/// <summary>
					/// 获取游览对象集合
					/// </summary>
					/// <returns>返回游览对象集合</returns>
					EarthView::World::Spatial::Kml::CTours& getTours();

					/// <summary>
					/// 获取高度模式
					/// </summary>
					/// <returns>返回高度模式</returns>
					const ev_uint16 getmode();

					/// <summary>
					/// 更新包围盒
					/// </summary>
					/// <returns></returns>
					virtual ev_void envelopChangedUpdate();
					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <returns>对象的包围盒</returns>
					EarthView::World::Spatial::Geometry::CEnvelope getEnvelopRef(ev_bool& hasData);

					//zf add 2014/6/5 kmlDocument引用计数
					ev_void setKmlDocumentRefCount(ev_uint32 count);
					ev_uint32 getKmlDocumentRefCount();

					/// <summary>
					/// 解析kmz文件到目标路径下
					/// </summary>
					/// <param name="kmzPath">kmz路径</param>
					/// <param name="kml_uri">目标路径</param>
					/// <returns>无</returns>
					void parseKmzStringToFile(const	EVString& kmzPath,const EVString& kml_uri);

					/// <summary>
					/// kmlDocument是否可见
					/// </summary>
					/// <returns>true为可见</returns>
					ev_bool isVisible();

					/// <summary>
					/// kmlDocument是否可见
					/// </summary>
					/// <param name="val">修改状态</param>
					/// <returns>无</returns>
					ev_void modifyed(ev_bool val);
					/// <summary>
					/// kmlDocument是否为修改状态
					/// </summary>
					/// <returns>true为kmlDocument处于修改状态</returns>
					ev_bool isModifyed();
				private:
					/// <summary>
					/// 迭代更新网络链接
					/// </summary>
					/// <param name="kmlDoc">kml文档</param>
					/// <returns>无</returns>
					ev_void iteratorUpdateNetLink(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);

					/// <summary>
					/// 更新对象包围盒
					/// </summary>
					/// <param name="kmlDoc">kmldoc的子文档对象</param>
					/// <returns></returns>
					ev_void iteratorUpdateEnvelop(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);

					/// <summary>
					/// 迭代获取包围盒
					/// </summary>
					/// <param name="doc">kml文档</param>
					/// <param name="envelop">包围盒</param>
					/// <returns></returns>
					ev_void iteratorGetEnvelopRef(EarthView::World::Spatial::Kml::CKmlDocument* doc,EarthView::World::Spatial::Geometry::CEnvelope& envelop,ev_bool& hasData);
				private:
					/// <summary>
					/// 解析kml文件里的内容
					/// </summary>
					/// <param name="strPath">kml文件的路径</param>
					/// <returns></returns>
					ev_void parseKmlFileContent(EVString& strPath);

					/// <summary>
					/// 获取图片路径的缓存路径
					/// </summary>
					/// <param name="picPath">图片路径</param>
					/// <returns>图片缓存</returns>
					EarthView::World::Core::MemoryDataStreamPtr genKmlPicCache(const EVString& picPath);

					/// <summary>
					/// 获取kml路径的缓存路径
					/// </summary>
					/// <param name="kmlPath">kml路径</param>
					/// <returns>kml或kmz的缓存路径</returns>
					EVString genKmlOrKmzCache(const EVString& kmlPath);

					/// <summary>
					/// 获取缓存路径
					/// </summary>
					/// <param name="picPath">图片路径</param>
					/// <param name="cacheFolder">缓存文件夹</param>
					/// <param name="fileName">文件名</param>
					/// <returns>无</returns>
					ev_void genCachePath(const EVString& picPath,_out EVString& cacheFolder,_out EVString&fileName);

					/// <summary>
					/// 加密字符串
					/// </summary>
					/// <param name="src">待加密字符串</param>
					/// <returns>加密后的字符串</returns>
					EVString encrypt( EVString src );

					/// <summary>
					/// 在指定位置下创建目录 zf kmz add
					/// </summary>
					/// <param name="filePath">文件路径</param>
					/// <returns>无</returns>
					ev_void createDir(const EVString& filePath); 
					/// <summary>
					/// 路径中是否为http
					/// </summary>
					/// <param name="url">kml路径</param>
					/// <returns>true为是，false为否</returns>
					ev_bool isHttp(const EVString& url);
					/// <summary>
					/// 是否为kmz格式
					/// </summary>
					/// <param name="url">kml路径</param>
					/// <returns>true为是，false为否</returns>
					ev_bool isKmz(const EVString& url);
					/// <summary>
					/// 是否为mesh格式
					/// </summary>
					/// <param name="url">kml路径</param>
					/// <returns>true为是，false为否</returns>
					ev_bool isMesh(const EVString& url);
				};
			}
		}
	}
}

#endif
