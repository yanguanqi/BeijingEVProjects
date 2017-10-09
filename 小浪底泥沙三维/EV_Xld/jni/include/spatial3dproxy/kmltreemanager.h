#ifndef EV_KML_TREE_MANAGER_H
#define EV_KML_TREE_MANAGER_H
#include "core/event.h"
#include "core/memoryallocatedobject.h"
#include "spatial3dproxy/spatial3dproxy_config.h"

#include "spatial3dengine/kmllayer.h"

#include "spatialgui/scenelayeractiveevent.h"
#include "spatial3dproxy/kmlevent.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				class CTour;
			}
		}
		
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{
			namespace KmlManager{

				/// <summary>
				/// 3d图层s
				/// </summary>
				class EV_SPATIAL3DPROXY_DLL AllGlobeControlLayers : public EarthView::World::Core::CBaseObject
				{
				public:
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					AllGlobeControlLayers(_in EarthView::World::Core::CNameValuePairList *pList)
					{

					}

ev_private:
					typedef vector<EarthView::World::Spatial::Atlas::ILayer *> InternalList;
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
					iterator insert(iterator pos, EarthView::World::Spatial::Atlas::ILayer *const &t)
					{
						return mList.insert(pos, t);
					}

				private:
					InternalList mList;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>	
					AllGlobeControlLayers(){};
					/// <summary>
					/// 在容器最后添加对象
					/// </summary>
					/// <param name="t">待增加的对象</param>
					/// <returns></returns>
					void push_back(EarthView::World::Spatial::Atlas::ILayer *const &t)
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
					EarthView::World::Spatial::Atlas::ILayer*& operator[](ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::Atlas::ILayer *const &operator[](ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Atlas::ILayer*& at(ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Atlas::ILayer *const &at(ev_size_t n) const
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
				/// <summary>
				/// kml树管理对象
				/// </summary>
				class EV_SPATIAL3DPROXY_DLL CKmlTreeManager:public EarthView::World::Core::CEventObject
				{

ev_internal:
					/// <summary>
					/// 事件处理函数，可重载
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns>已处理返回true，否则返回false</returns>
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);
				public:
					/// <summary>
					/// 移除图层事件响应
					/// </summary>
					/// <param name="e">3d图层事件</param>
					/// <returns></returns>
					virtual ev_bool onRemoveSceneLayer(EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e);

					/// <summary>
					/// 重命名图层事件响应
					/// </summary>
					/// <param name="e">3d图层事件</param>
					/// <returns></returns>
					virtual ev_bool onChangeSceneLayerName(EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* e);

					/// <summary>
					/// 添加kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onAddKmlObjectEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);

					/// <summary>
					/// 修改kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onUpdateKmlObjectEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
					/// <summary>
					/// 删除kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onRemoveKmlObjectEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
					/// <summary>
					/// 保存kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onSaveKmlObjectEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
					/// <summary>
					/// 添加kml文件夹事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onAddKmlFolderEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
					/// <summary>
					/// 删除kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onRemoveKmlFolderEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
					/// <summary>
					/// 添加kml文件事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onAddKmlFileEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
					/// <summary>
					/// 保存kml对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onSaveKmlFileEvent(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
					/// <summary>
					/// 添加kml网络事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onAddNetworkLink(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
					
					/// <summary>
					/// 移除kml网络事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onRemoveNetworkLink(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
					/// <summary>
					/// 保存kml网络对象事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onSaveNetworkLink(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);

					

					/// <summary>
					/// 添加文件夹之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onAddKmlFolderAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);

					/// <summary>
					/// 移除文件夹之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onRemoveKmlFolderAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);

					/// <summary>
					/// 添加kml对象之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onAddKmlObjectAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);

					/// <summary>
					/// 移除kml对象后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onRemoveKmlObjectAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);

					/// <summary>
					/// 添加kml网络链接对象事件之后响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onAddKmlNetworkLinkAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);

					/// <summary>
					/// 移除kml网络对象之后事件响应
					/// </summary>
					/// <param name="e">kml树节点事件</param>
					/// <returns></returns>
					virtual ev_bool onRemoveKmlNetworkLinkAfter(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* e);
					/// <summary>
					/// 场景改变事件响应
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual ev_void onSceneChange(_in EarthView::World::Core::CEvent *e);

					virtual ev_void onCurrentToolChanged(_in EarthView::World::Core::CEvent *e);
					/// <summary>
					/// 场景关闭事件响应
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual ev_void onSceneClose(_in EarthView::World::Core::CEvent *e);
					/// <summary>
					/// 游览结束事件响应
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual ev_void onTourEnd(_in EarthView::World::Core::CEvent* e);


					/// <summary>
					/// 计算地理对象的中心位置
					/// </summary>
					/// <param name="centerLatLon">中心经纬度</param>
					/// <param name="am">高程模式</param>
					/// <param name="alt">高程值</param>
					/// <returns>中心位置坐标</returns>
					EarthView::World::Spatial::Math::CVector3 computeCGeoObjectCenterPos(EarthView::World::Spatial::Math::CVector3 centerLatLon,EarthView::World::Spatial::Utility::EVAltitudeMode am,ev_real64 alt);
					/// <summary>
					/// 计算范围
					/// </summary>
					/// <param name="modelPos">模型的位置</param>
					/// <param name="cameraPos">相机位置</param>
					/// <param name="range">范围</param>
					/// <returns></returns>			
					ev_void computeRange(EarthView::World::Spatial::Math::CVector3 modelPos,EarthView::World::Spatial::Math::CVector3 cameraPos,ev_real64& range/*,ev_real64 title*/);

					/// <summary>
					/// 计算高程
					/// </summary>
					/// <param name="geoobj">地理对象</param>
					/// <returns>返回高程值</returns>
					ev_real64 computeCameraAlt(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj);

					/// <summary>
					/// 设置3d图层
					/// </summary>
					/// <param name="allLayers">图层s</param>
					/// <returns></returns>
					ev_void setGlobeControlsLayers(EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers allLayers);

					ev_void computePlacemarkView(EarthView::World::Spatial3D::CGlobeCamera* camera,EarthView::World::Spatial::Math::CVector3 &pos,ev_real64 &heading,ev_real64 &tilt,ev_real64 &range);

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlTreeManager(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name="ref_layer">图层对象</param>
					/// <returns></returns>
					//CKmlTreeManager(EarthView::World::Spatial::Atlas::ILayer* ref_layer);

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name="ref_layer">图层对象</param>
					/// <returns></returns>
					CKmlTreeManager();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlTreeManager();
		

					virtual void setCurrentLayer(EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer);

					virtual EarthView::World::Spatial3D::Atlas::CKmlLayer* getCurrentLayer();

					/// <summary>
					/// 加载kml树
					/// </summary>
					/// <returns></returns>
					ev_void loadTree();
					/// <summary>
					/// 添加kml文件
					/// </summary>
					/// <param name="filePath">文件路径</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					EarthView::World::Spatial::Kml::CKmlDocument* addKmlFile(EVString filePath,EarthView::World::Spatial::Kml::CKmlDocument* parent);
					/// <summary>
					/// 保存kml文件
					/// </summary>
					/// <param name="savePath">文件路径</param>
					/// <returns></returns>
					ev_void saveKmlFile(EVString savePath);
					/// <summary>
					/// 保存kml文件夹
					/// </summary>
					/// <param name="savePath">文件路径</param>
					/// <param name="node">kmldoc</param>
					/// <returns></returns>
					ev_void saveFolder(EVString savePath,EarthView::World::Spatial::Kml::CKmlDocument* node);
					/// <summary>
					/// 添加kml对象
					/// </summary>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					ev_void addKmlObject(_nofree EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Spatial::Kml::CKmlDocument* parent);
					
					/// <summary>
					/// 添加kml对象
					/// </summary>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					ev_void updateKmlObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Spatial::Kml::CKmlDocument* parent);

					
					/// <summary>
					/// 移除kml对象
					/// </summary>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					ev_void removeKmlObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Spatial::Kml::CKmlDocument* parent);
		
					/// <summary>
					/// 保存kml对象
					/// </summary>
					/// <param name="savePath">保存的路径</param>
					/// <param name="geoObj">地理对象</param>
					/// <returns></returns>				
					ev_void saveKmlObject(EVString savePath,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
					
					

					/// <summary>
					/// 添加kml文件夹
					/// </summary>
					/// <param name="folder">kml文件夹</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					ev_void addKmlFolder(_nofree EarthView::World::Spatial::Kml::CKmlDocument* folder,EarthView::World::Spatial::Kml::CKmlDocument* parent);
					
					/// <summary>
					/// 更新kml文件夹属性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void updateKmlFolder(EarthView::World::Spatial::Kml::CKmlDocument*pKmlFolder, EarthView::World::Spatial::Kml::CKmlDocument* pParentKmlFolder);
					
					/// <summary>
					/// 移除kml文件夹
					/// </summary>
					/// <param name="node">kmldoc</param>
					/// <returns></returns>
					ev_void removeKmlFolder(EarthView::World::Spatial::Kml::CKmlDocument* node,EarthView::World::Spatial::Kml::CKmlDocument* parent);

					//zk 
					/// <summary>
					/// 添加kml游览
					/// </summary>
					/// <param name="folder">kml游览</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					ev_void addTour(_nofree EarthView::World::Spatial::Kml::CTour* tour,EarthView::World::Spatial::Kml::CKmlDocument* parent);

					/// <summary>
					/// 移除kml游览
					/// </summary>
					/// <param name="tour">游览</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>				
					ev_void removeTour(EarthView::World::Spatial::Kml::CTour* tour,EarthView::World::Spatial::Kml::CKmlDocument* parent);
					/// <summary>
					/// 保存kml游览
					/// </summary>
					/// <param name="savePath">保存的路径</param>
					/// <param name="tour">游览对象</param>
					/// <returns></returns>
					ev_void saveTour(const EVString& savePath,EarthView::World::Spatial::Kml::CTour* tour);
					//网络链接

					/// <summary>
					/// 添加kml网络连接
					/// </summary>
					/// <param name="kmlNet">kml网络连接</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>
					ev_void addNetworkLink(_nofree EarthView::World::Spatial::Kml::CKmlNetworkLink* kmlNet,EarthView::World::Spatial::Kml::CKmlDocument* parent);
					/// <summary>
					/// 更新kml网络连接属性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void updateKmlNetworkLink(EarthView::World::Spatial::Kml::CKmlNetworkLink* pKmlNetworkLink, EarthView::World::Spatial::Kml::CKmlDocument* parent);

						/// <summary>
					/// 移除kml网络连接
					/// </summary>
					/// <param name="kmlNet">kml网络连接</param>
					/// <param name="parent">kmldoc</param>
					/// <returns></returns>				
					ev_void removeKmlNetworkLink(EarthView::World::Spatial::Kml::CKmlNetworkLink* netLink,EarthView::World::Spatial::Kml::CKmlDocument* parent);
					/// <summary>
					/// 保存kml网络连接
					/// </summary>
					/// <param name="savePath">保存的路径</param>
					/// <param name="netLink">kml网络连接</param>
					/// <returns></returns>
					ev_void saveKmlNetworkLink(EVString savePath,EarthView::World::Spatial::Kml::CKmlNetworkLink* netLink);
					//end

					/// <summary>
					/// 获取kml树管理单例
					/// </summary>
					/// <param name="ref_layer">图层</param>
					/// <returns></returns>
					//static EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* getSingletonPtr(EarthView::World::Spatial::Atlas::ILayer* ref_layer);

				ev_private:
						EarthView::World::Spatial3D::Atlas::CKmlLayer* mLayer;
				private:
					/// <summary>
					/// 迭代数据集
					/// </summary>
					/// <param name="kmldoc">kml文档</param>
					/// <returns></returns>
					ev_void iteratorDataset(EarthView::World::Spatial::Kml::CKmlDocument* kmldoc);
					/// <summary>
					/// 发送事件
					/// </summary>
					/// <param name="kmldoc">事件</param>
					/// <returns></returns>
					ev_void sendActiveEvent(EarthView::World::Core::CEvent* event);
					static EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager *ms_Singleton;
					
					EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers mAllGlobeControlLayers;
				};
			}
		}
	}
}
#endif
