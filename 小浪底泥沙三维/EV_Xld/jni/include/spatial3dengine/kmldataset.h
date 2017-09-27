#ifndef EV_KMLDATASET_H 
#define EV_KMLDATASET_H
#include "spatialinterface/idataset.h"
#include "spatial3dengine/spatial3dengineconfig.h"
#include "graphic/scenemanager.h"
#include "geometry3d/geopolygonex.h"
#include "spatialobject/geometry/envelope.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				class CKmlDocument;
				class CGeoObjectExtension;
				class CTour;
				class CKmlNetworkLink;
				class GeoObjects;
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				class CEnvelope;
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				class CKmlDataSource;
				class EV_Spatial3DEngine_DLL CKmlDataSet:public EarthView::World::Spatial::GeoDataset::IDataset
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlDataSet(_in EarthView::World::Core::CNameValuePairList *pList);
				public:					
					///KmlDataset容器类
					class EV_Spatial3DEngine_DLL CKmlDataSets:public EarthView::World::Core::CBaseObject
					{
ev_private:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="pList">构造函数参数键值对表</param>
						/// <returns></returns>
						CKmlDataSets(_in EarthView::World::Core::CNameValuePairList *pList);

ev_private:
						typedef vector<EarthView::World::Spatial3D::KmlManager::CKmlDataSet *> InternalList;
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
						iterator insert(iterator pos, EarthView::World::Spatial3D::KmlManager::CKmlDataSet *const &t)
						{
							return mList.insert(pos, t);
						}

					private:
						InternalList mList;
					public:
						CKmlDataSets(){};
						/// <summary>
						/// 在容器最后添加对象
						/// </summary>
						/// <param name="t">待增加的队像</param>
						/// <returns></returns>
						void push_back(EarthView::World::Spatial3D::KmlManager::CKmlDataSet *const &t)
						{
							mList.push_back(t);
						}
						/// <summary>
						/// 移除容器指定位置的对象
						/// </summary>
						/// <param name="pos">对象的位置</param>
						/// <returns></returns>
						void remove(ev_size_t pos)
						{
							iterator it = mList.begin();
							it = it + pos;
							mList.erase(it);
						}
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
						EarthView::World::Spatial3D::KmlManager::CKmlDataSet*& operator[](ev_size_t n)
						{
							reference l = mList[n];
							return l;
						}
						/// <summary>
						/// 重载[]操作符
						/// </summary>
						/// <param name="n">下标位置</param>
						/// <returns>返回下标对应的值</returns>
						EarthView::World::Spatial3D::KmlManager::CKmlDataSet *const &operator[](ev_size_t n) const
						{
							const_reference l =  mList[n];
							return l;
						}
						/// <summary>
						/// 返回某位置的元素值
						/// </summary>
						/// <param name="n">位置</param>
						/// <returns>返回位置对应的值</returns>
						EarthView::World::Spatial3D::KmlManager::CKmlDataSet*& at(ev_size_t n)
						{
							reference l = mList[n];
							return l;
						}
						/// <summary>
						/// 返回某位置的元素值
						/// </summary>
						/// <param name="n">位置</param>
						/// <returns>返回位置对应的值</returns>
						EarthView::World::Spatial3D::KmlManager::CKmlDataSet *const &at(ev_size_t n) const
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
						void resize(ev_size_t newSize)
						{
							mList.resize(newSize);
						}
						/// <summary>
						/// 改变容器中最小的元素容纳数量
						/// </summary>
						/// <param name="count">最小的元素容纳数量</param>
						/// <returns></returns>
						void reserve(ev_size_t count)
						{
							mList.reserve(count);
						}
						/// <summary>
						/// 清空所有元素
						/// </summary>
						/// <returns></returns>
						void clear()
						{
							mList.clear();
						}
					};
					///end
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CKmlDataSet();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="">数据集的名字</param>
					/// <returns></returns>
					CKmlDataSet(const EVString& filename);
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets mParentDataSets;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets mSubDataSets;
					ev_bool mIsDirty;
					ev_bool mIsAddGeoObject;
					ev_bool mIsDeRenderGeoObject;
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlDataSet();
					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <returns>数据集名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取数据集版本号，该方法是确认数据变更情况。
					/// </summary>
					/// <returns>数据集版本号</returns>
					virtual ev_uint64 getDataVersion() const;
					/// <summary>
					/// 获取数据集描述
					/// </summary>
					/// <returns>数据集描述</returns>
					virtual EVString getDescription() const;
					/// <summary>
					/// 获取数据集更新时间
					/// </summary>
					/// <returns>数据集更新时间</returns>
					virtual EVString getUpdateTime() const;
					/// <summary>
					/// 判断是否包含子数据集
					/// </summary>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool hasSubDataset() const;
					/// <summary>
					/// 获取数据集所在数据源对象，该值为引用对象指针。
					/// </summary>
					/// <returns>数据集所在数据源对象指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;
					/// <summary>
					/// 判断数据集是否具有编辑能力
					/// </summary>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool canEdit() const;
					/// <summary>
					/// 判断数据集是否处在编辑状态
					/// </summary>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool isEditing() const;
					/// <summary>
					/// 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
					/// </summary>
					/// <param name="withUndo">确定是否开启Undo功能</param>
					/// <returns>开启编辑成功，返回true；否则，返回false</returns>
					virtual ev_bool startEditing(ev_bool withUndo);
					/// <summary>
					/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
					/// </summary>
					/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
					/// <returns>结束编辑成功，返回true;否则，返回false</returns>
					virtual ev_bool stopEditing(ev_bool isSave);
					/// <summary>
					/// 判断数据集是否处在编辑操作状态
					/// </summary>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool isBeginEditingOperation();
					/// <summary>
					/// 开启编辑操作，用于标识数据集编辑操作。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <returns>开启编辑操作成功，返回true;否则，返回false</returns>
					virtual ev_bool beginEditingOperation();
					/// <summary>
					/// 结束编辑操作，用于标识数据集编辑操作结束。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <param name="isConfirm">提交操作，设置true;否则，设置false</param>
					/// <returns>结束编辑操作成功，返回true;否则，返回false</returns>
					virtual ev_bool endEditingOperation(ev_bool isConfirm);
					/// <summary>
					/// 设置数据源
					/// </summary>
					/// <param name="dataSource">kml数据源</param>
					/// <returns></returns>
					ev_void setDataSourceRef(EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ref_dataSource);
					///<summary>
					///添加文件夹,图层
					///</summary>
					/// <param name="kmlDocument">kml文档</param>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_void addFolder(_nofree EarthView::World::Spatial::Kml::CKmlDocument* ref_kmlDocument,EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					///<summary>
					///添加本地KML文件
					///</summary>
					/// <param name="filePath">kml文件</param>
					/// <param name="parent">kml父文档</param>
					/// <returns>kml文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument* addKmlFile(const EVString filePath,EarthView::World::Spatial::Kml::CKmlDocument* parent);
					///<summary>
					///添加KML网络链接
					///</summary>
					/// <param name="kmlNet">kml网络连接</param>
					/// <param name="parent">kml父文档</param>
					/// <returns>kml文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument* addNetworkLink(_nofree EarthView::World::Spatial::Kml::CKmlNetworkLink* ref_kmlNet,EarthView::World::Spatial::Kml::CKmlDocument* parent);
					///<summary>
					///添加KML对象
					///</summary>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_void addKmlObject(_nofree EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj,EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					
					///<summary>
					///添加KML对象
					///</summary>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_void updateKmlObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj,EarthView::World::Spatial::Kml::CKmlDocument* parent);

					///<summary>
					///添加KML游览对象
					///</summary>
					/// <param name="tour">游览对象</param>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_void addTour(_nofree EarthView::World::Spatial::Kml::CTour* ref_tour,EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					///<summary>
					///删除KML对象
					///</summary>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_bool removeKmlObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj,EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					///<summary>
					///删除KML文件夹
					///</summary>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_bool removeFolder( EarthView::World::Spatial::Kml::CKmlDocument* ref_kmlDocument);
					///<summary>
					///删除KML网络连接
					///</summary>
					/// <param name="netLink">kml网络连接</param>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_bool removeKmlNetworkLink(EarthView::World::Spatial::Kml::CKmlNetworkLink* netLink,EarthView::World::Spatial::Kml::CKmlDocument* parent);
						///<summary>
					///删除KML游览对象
					///</summary>
					/// <param name="tour">游览</param>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_bool removeTour(EarthView::World::Spatial::Kml::CTour* ref_tour,EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					///<summary>
					///保存图层
					///</summary>
					/// <param name="savePath">保存的路径</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool save(const EVString savePath);
					///<summary>
					///保存kml对象
					///</summary>
					/// <param name="savePath">保存的路径</param>
					/// <param name="geoObj">地理对象</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool saveKmlObject(EVString savePath,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
					///<summary>
					///保存kml网络连接对象
					///</summary>
					/// <param name="savePath">保存的路径</param>
					/// <param name="netLink">网络连接对象</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool saveKmlNetworkLink(EVString savePath,EarthView::World::Spatial::Kml::CKmlNetworkLink* netLink);
					///<summary>
					///保存文件夹
					///</summary>
					/// <param name="savePath">保存的路径</param>
					/// <param name="folder">kml文件夹</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool saveFolder(EVString savePath,EarthView::World::Spatial::Kml::CKmlDocument* ref_folder);
					//zk
					///<summary>
					///保存路径游览
					///</summary>
					/// <param name="savePath">保存的路径</param>
					/// <param name="tour">游览对象</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool saveTour(const EVString& savePath,EarthView::World::Spatial::Kml::CTour* tour);

				public:
					///<summary>
					/// 获取包围盒
					///</summary>
					/// <returns>返回包围盒信息</returns>
					EarthView::World::Spatial::Geometry::CEnvelope getEnvelopeRef(ev_bool& hasData);
					//EarthView::World::Spatial::Kml::GeoObjects mGeoObjects;
					///<summary>
					///数据集所在的绝对路径 
					///</summary>
					EVString mFilePath;
					ev_bool misShare;
					EarthView::World::Spatial::Kml::CKmlDocument* mKmlDocument;
				

					///<summary>
					///删除KML文件夹
					///</summary>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_bool removeFolder( EarthView::World::Spatial::Kml::CKmlDocument* ref_kmlDocument,EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);

				private:
					EarthView::World::Spatial::Kml::GeoObjects* mCurrentModifedObjects;
					ev_bool iteratorKmlDocument(EarthView::World::Spatial::Kml::CKmlDocument* kmlDocument,EarthView::World::Spatial::Kml::CKmlDocument* destKmlDocument);
					
					//EarthView::World::Spatial::Kml::CGeoObjectExtension* mCurrentModifedObject;
					ev_bool iteratorRemoveFolder(EarthView::World::Spatial::Kml::CKmlDocument* kmlDocument,EarthView::World::Spatial::Kml::CKmlDocument* parent);
					
					ev_bool iteratorRemoveNetLink(EarthView::World::Spatial::Kml::CKmlDocument* kmldoc,EarthView::World::Spatial::Kml::CKmlNetworkLink* destNetlink);
					//EarthView::World::Spatial::Kml::CKmlDocument* iteratorKmlDocument(EarthView::World::Spatial::Kml::CKmlDocument* kmlDocument);
					///<summary>
					///迭代kmfeaturelist对象
					///</summary>
					//ev_void iteratorKmlFeatureList(EarthView::World::Spatial::Kml::CKmlDocument& kmldoc,EarthView::World::Spatial::Kml::CKmlDocument& kmlfeatureList);
					///<summary>
					///迭代kmfeaturelist对象
					///</summary>
					//ev_bool iteratorRemove(void* object,EarthView::World::Spatial::Kml::CKmlDocument& kmlfeatureList,EVString type);
					EVString mDataSetName;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* mDataSource;
				private:
					EarthView::World::Spatial::Geometry::CEnvelope* mEnvelope;;
				};
			}
		}
	}
}
#endif
