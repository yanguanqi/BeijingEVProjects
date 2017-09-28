#ifndef EARTHVIEW_WORLD_SPATIAL_OSGBCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_OSGBCONNECTION_H
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
#include "core/xml.h"


using namespace EarthView::World::Spatial::GeoDataset;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class COSGBServiceConnection;
				class COSGBServiceConnectionImp;

				class EV_DOWNLOAD_DLL COSGBTopTile:public EarthView::World::Core::CAllocatedObject
				{
				public:
					COSGBTopTile();
					virtual ~COSGBTopTile();
					EVString mTileName;
					EVString mModelPath;
					ev_real64 mCenterX;
					ev_real64 mCenterY;
					ev_real64 mCenterZ;
					ev_real64 mRadius;
					ev_real64 mMinRange;
ev_private:
					COSGBTopTile(EarthView::World::Core::CNameValuePairList* pList);
					

				}; 

				class  EV_DOWNLOAD_DLL COSGBTopTileVector : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					typedef vector<COSGBTopTile> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">迭代器</param>
					/// <param name="t">Handle标识</param>
					/// <returns>插入后的键值对</returns>
					iterator insert(_in iterator pos, _in EarthView::World::Spatial::Download::COSGBTopTile const &t)
					{
						return mList.insert(pos, t);
					}

				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					COSGBTopTileVector(_in EarthView::World::Core::CNameValuePairList *pList)
					{

					}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COSGBTopTileVector()
					{

					}
					/// <summary>
					/// 在容器末尾添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial::Download::COSGBTopTile const &t)
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
					EarthView::World::Spatial::Download::COSGBTopTile& front()
					{
						return mList.front();
					}

					/// <summary>
					/// 返回最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>最后元素值</returns>
					EarthView::World::Spatial::Download::COSGBTopTile& back()
					{
						return mList.back();
					}

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial::Download::COSGBTopTile& at(_in ev_uint32 pos)
					{
						return mList.at(pos);					

					}

					/// <summary>
					/// 插入元素
					/// </summary>
					/// <param name="pos">插入位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::Download::COSGBTopTile const &t)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.insert(it, t);
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


				class EV_DOWNLOAD_DLL COSGBLayerLevel:public EarthView::World::Core::CAllocatedObject
				{
				public:
					COSGBLayerLevel();

					virtual ~COSGBLayerLevel();


					ev_int32 mLevel;
					ev_uint64 mBeginCol;
					ev_uint64 mEndCol;
					ev_uint64 mBeginRow;
					ev_uint64 mEndRow;
					ev_real32 mTileWidth;
					ev_real32 mTileHeight;
ev_private:
					COSGBLayerLevel(EarthView::World::Core::CNameValuePairList* pList);

				};

				class  EV_DOWNLOAD_DLL COSGBLayerLevelVector : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					typedef vector<COSGBLayerLevel> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">迭代器</param>
					/// <param name="t">Handle标识</param>
					/// <returns>插入后的键值对</returns>
					iterator insert(_in iterator pos, _in EarthView::World::Spatial::Download::COSGBLayerLevel const &t)
					{
						return mList.insert(pos, t);
					}

				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					COSGBLayerLevelVector(_in EarthView::World::Core::CNameValuePairList *pList)
					{

					}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COSGBLayerLevelVector()
					{

					}
					/// <summary>
					/// 在容器末尾添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial::Download::COSGBLayerLevel const &t)
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
					EarthView::World::Spatial::Download::COSGBLayerLevel& front()
					{
						return mList.front();
					}

					/// <summary>
					/// 返回最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>最后元素值</returns>
					EarthView::World::Spatial::Download::COSGBLayerLevel& back()
					{
						return mList.back();
					}

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial::Download::COSGBLayerLevel& at(_in ev_uint32 pos)
					{
						return mList.at(pos);					

					}

					/// <summary>
					/// 插入元素
					/// </summary>
					/// <param name="pos">插入位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::Download::COSGBLayerLevel const &t)
					{
						iterator it = begin();
						for(ev_uint32 i = 0; i < pos; i++)
							it++;
						mList.insert(it, t);
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

				class EV_DOWNLOAD_DLL COSGBLayerMetaData:public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
				{
				public:
					COSGBLayerMetaData();

					virtual ~COSGBLayerMetaData();

					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;

					/// <summary>
					/// 获取数据集的名称
					/// </summary>
					/// <returns>数据集的名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 获取数据集的范围
					/// </summary>
					/// <returns>内部对象引用，无需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;

					/// <summary>
					/// 获取数据集的坐标系统
					/// </summary>
					/// <returns>坐标系统对象</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;

					virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);

                    static void parseMetaData(_in EarthView::World::Core::CXmlFile& xmlFile,_out EarthView::World::Spatial::Download::COSGBLayerMetaData& metadata);

					EVString mVersion;
					EVString mFileExt;
					EVString mTileType;
					ev_int32 mBagLevel;
					EVString mGuid;
					ev_real64 mMinLon;
					ev_real64 mMinLat;
					ev_real64 mMaxLon;
					ev_real64 mMaxLat;
					ev_int32 mBeginLevel;
					ev_int32 mEndLevel;

					ev_real64 mCenterLat;
					ev_real64 mCenterLon;
					ev_real64 mCenterAlt;
					ev_real64 mOriginX;
					ev_real64 mOriginY;
					ev_real64 mOriginZ;

                    EVString mSRS;

					EVString mTag;
					COSGBLayerLevelVector mLevels;
					COSGBTopTileVector mTopTiles;
					EarthView::World::Spatial::GeoDataset::EVDatasetType mDatasetType;
ev_private:
					COSGBLayerMetaData(EarthView::World::Core::CNameValuePairList* pList);

				};

		

			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL COSGBServiceConnection : public EarthView::World::Spatial::Download::CWebServiceConnection
			{
				friend class CWebManager;

			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				COSGBServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~COSGBServiceConnection();

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

				virtual ev_int32 getMetaData(const EVString& guid,_out EarthView::World::Spatial::Download::COSGBLayerMetaData& metadata);


				virtual  ev_int32 getOSGBData(const EVString& guid,const EVString& fileName,_out EarthView::World::Core::MemoryDataStreamPtr& osgbData);	

                	

			protected:
				COSGBServiceConnection();

			private:
				C_DISABLE_COPY(COSGBServiceConnection);
				COSGBServiceConnectionImp* mpImp;
ev_private:
				COSGBServiceConnection(EarthView::World::Core::CNameValuePairList* plist);
			};

			class EV_DOWNLOAD_DLL COSGBServiceConnectionImp : public EarthView::World::Spatial::Download::ConnectionImp
			{
			public:
				COSGBServiceConnectionImp();
				virtual ~COSGBServiceConnectionImp();
				
				virtual ev_int32 getMetaData(const EVString& guid,_out EarthView::World::Spatial::Download::COSGBLayerMetaData& metadata)
				{
					return -1;
				}


				virtual  ev_int32 getOSGBData(const EVString& guid,const EVString& fileName,_out EarthView::World::Core::MemoryDataStreamPtr& osgbData)
				{
					return -1;
				}


ev_private:
				COSGBServiceConnectionImp(EarthView::World::Core::CNameValuePairList* plist);
			};

		}}}}
#endif