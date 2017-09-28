#ifndef EARTHVIEW_WORLD_SPATIAL_STREETVIEWCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_STREETVIEWCONNECTION_H
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/downloadglobal.h"
#include "download/connectionimpplugin.h"
#include "core/variant.h"
#include "core/string_array.h"
#include "spatialdatabase/fields.h"
#include "spatialdatabase/datametainfo.h"
#include "spatialinterface/ifeatureiterator.h"
#include "spatialdatabase/queryfilter.h"
#include "featurevector.h"


using namespace EarthView::World::Spatial::GeoDataset;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class CStreetViewServiceConnection;
				class CStreetViewServiceConnectionImp;

				class EV_DOWNLOAD_DLL CStreetPoint:public EarthView::World::Core::CAllocatedObject
				{
				public:
					CStreetPoint()
					{
						mEVID = 0;
						mNearEVID = 0;
						mTopoID = 0;
						mID = 0;
						mIsEdge = false;
						mIsRepeated = false;
						mLon = 0.0;
						mLat = 0.0;	
						mNearLon = 0.0;
						mNearLat = 0.0;
						mPhotoFile = "";
						mMapCode = "";
						mNearMapCode = "";
						mExtendAtrri = "";
					}
					virtual ~CStreetPoint()
					{

					}
					ev_uint32 mEVID;
					ev_uint32 mNearEVID;
					ev_uint32 mTopoID;
					ev_uint32 mID;
					ev_bool mIsEdge;
					ev_bool mIsRepeated;
					ev_real64 mLon;
					ev_real64 mLat;
					ev_real64 mNearLon;
					ev_real64 mNearLat;
					EVString mPhotoFile;
					EVString mMapCode;
					EVString mNearMapCode;
					EVString mExtendAtrri;
ev_private:
					CStreetPoint( EarthView::World::Core::CNameValuePairList *pList )
					{
						mEVID = 0;
						mNearEVID = 0;
						mTopoID = 0;
						mID = 0;
						mIsEdge = false;
						mIsRepeated = false;
						mLon = 0.0;
						mLat = 0.0;	
						mNearLon = 0.0;
						mNearLat = 0.0;
						mPhotoFile = "";
						mMapCode = "";
						mNearMapCode = "";
						mExtendAtrri = "";
					}
public:
				inline ev_bool operator == (_in const EarthView::World::Spatial::Download::CStreetPoint &rkStreetPoint ) const
				{
					return (mEVID==rkStreetPoint.mEVID && mNearEVID==rkStreetPoint.mNearEVID && mTopoID==rkStreetPoint.mTopoID  && mID==rkStreetPoint.mID  && mIsEdge==rkStreetPoint.mIsEdge && fuzzyCompare(mLon,rkStreetPoint.mLon) && fuzzyCompare(mLat,rkStreetPoint.mLat)  && fuzzyCompare(mNearLon,rkStreetPoint.mNearLon) && fuzzyCompare(mNearLat,rkStreetPoint.mNearLat) && mPhotoFile==rkStreetPoint.mPhotoFile && mMapCode==rkStreetPoint.mMapCode && mNearMapCode==rkStreetPoint.mNearMapCode);
				}

				inline ev_bool operator != (_in const EarthView::World::Spatial::Download::CStreetPoint &rkStreetPoint ) const
				{
					return (mEVID!=rkStreetPoint.mEVID || mNearEVID!=rkStreetPoint.mNearEVID || mTopoID!=rkStreetPoint.mTopoID  || mID!=rkStreetPoint.mID || mIsEdge!=rkStreetPoint.mIsEdge || !fuzzyCompare(mLon,rkStreetPoint.mLon) || !fuzzyCompare(mLat,rkStreetPoint.mLat)  || !fuzzyCompare(mNearLon,rkStreetPoint.mNearLon) || !fuzzyCompare(mNearLat,rkStreetPoint.mNearLat) || mPhotoFile!=rkStreetPoint.mPhotoFile || mMapCode!=rkStreetPoint.mMapCode || mNearMapCode!=rkStreetPoint.mNearMapCode);
				}

				};

				/// <summary>
				/// 场景中可见对象的集合
				/// </summary>
				class  EV_DOWNLOAD_DLL CStreetPointList : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::Download::CStreetPoint> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					///// <summary>
					///// 集合插入元素
					///// </summary>
					///// <param name="pos">迭代器</param>
					///// <param name="t">Handle标识</param>
					///// <returns>插入后的键值对</returns>
					//iterator insert(_in iterator pos, _in EarthView::World::Spatial::Download::CStreetPoint const &t)
					//{
					//	return mList.insert(pos, t);
					//}
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CStreetPointList(_in EarthView::World::Core::CNameValuePairList *pList)
					{

					}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CStreetPointList()
					{

					}
					/// <summary>
					/// 在容器末尾添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial::Download::CStreetPoint const &t)
					{
						mList.push_back(t);
					}

					/// <summary>
					/// 删除最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back()
					{
						mList.pop_back();
					}

					/// <summary>
					/// 返回第一个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>第一个元素值</returns>
					EarthView::World::Spatial::Download::CStreetPoint& front()
					{
						return mList.front();
					}

					/// <summary>
					/// 返回最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>最后元素值</returns>
					EarthView::World::Spatial::Download::CStreetPoint& back()
					{
						return mList.back();
					}

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial::Download::CStreetPoint& at(_in ev_uint32 pos)
					{
						//iterator it = begin();
						//for(ev_uint32 i = 0; i < pos; i++)
						//	it++;
						//return *it;
						return mList[pos];
					}

					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>为空返回true，否则false</returns>
					ev_bool empty() const
					{
						return mList.empty();
					}

					/// <summary>
					/// 返回容器中元素数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器中元素数量大小</returns>
					ev_size_t size() const
					{
						return mList.size();
					}

					/// <summary>
					/// 改变容器大小
					/// </summary>
					/// <param name="newSize">容器大小</param>
					/// <returns></returns>
					void resize(_in ev_size_t newSize)
					{
						mList.resize(newSize);
					}

					/// <summary>
					/// 清空容器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear()
					{
						mList.clear();
					}
					
				};


				///////////////////////////////////////////////////////////////////////////
				class EV_DOWNLOAD_DLL CStreetViewServiceConnection : public EarthView::World::Spatial::Download::CWebServiceConnection
				{
					friend class CWebManager;

				public:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CStreetViewServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CStreetViewServiceConnection();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setConnectionImp(EarthView::World::Spatial::Download::ConnectionImp* ref_pImp);

					/// <summary>
					/// 断开与web服务器的连接
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>		
					ev_void  closeConnect();

					/// <summary>
					/// 连接web服务器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>		
					ev_void openConnect();

					virtual ev_int32 readintidata(const EVString& servicename, _out EarthView::World::Core::MemoryDataStreamPtr& stream);
					virtual ev_int32 getStreetPoints(const EVString& servicename,_in const EVString& mapCode,_out EarthView::World::Spatial::Download::CStreetPointList& streetPoints);
					virtual ev_int32 getPicture(const EVString& servicename,ev_int32 ID, ev_int32 level, ev_int32 row, ev_int32 col,_out EarthView::World::Core::MemoryDataStreamPtr& picMem);	

				protected:
					CStreetViewServiceConnection();

				private:
					C_DISABLE_COPY(CStreetViewServiceConnection);
					CStreetViewServiceConnectionImp* mpImp;
ev_private:
					CStreetViewServiceConnection(EarthView::World::Core::CNameValuePairList* plist);
				};

				class EV_DOWNLOAD_DLL CStreetViewServiceConnectionImp : public EarthView::World::Spatial::Download::ConnectionImp
				{
				public:
					CStreetViewServiceConnectionImp();
					virtual ~CStreetViewServiceConnectionImp();
					virtual ev_int32 readintidata(const EVString& servicename, _out EarthView::World::Core::MemoryDataStreamPtr& stream)
					{
						return -1;
					}
					virtual ev_int32 getStreetPoints(const EVString& servicename,_in const EVString& mapCode,_out EarthView::World::Spatial::Download::CStreetPointList& streetPoints)
					{
						return -1;
					}
					virtual ev_int32 getPicture(const EVString& servicename,ev_int32 ID, ev_int32 level, ev_int32 row, ev_int32 col,_out EarthView::World::Core::MemoryDataStreamPtr& picMem)
					{
						return -1;
					}


ev_private:
					CStreetViewServiceConnectionImp(EarthView::World::Core::CNameValuePairList* plist);
				};

			}}}}
#endif