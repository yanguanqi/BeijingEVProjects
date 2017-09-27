#ifndef EV_KML_EVENT_H
#define EV_KML_EVENT_H

#include "core/global.h"
#include "spatial3dproxy/spatial3dproxy_config.h"
#include "core/event.h"
#include "core/variant.h"
#include "spatialinterface/ilayer.h"
#include "kmlserializer/geoobjectextension.h"
#include "kmlserializer/kmldocument.h"
/////#include "spatial3dengine/kmldataset.h"


/////zk
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
				/// kml图层的操作事件
				/// </summary>
				class EV_SPATIAL3DPROXY_DLL CKmlLayerEvent:public EarthView::World::Core::CEvent
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CKmlLayerEvent(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">类型标识</param>
					/// <returns></returns>
					CKmlLayerEvent(ev_uint16 type);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlLayerEvent();
					/// <summary>
					/// 设置图层
					/// </summary>
					/// <param name="layer">layer对象</param>
					/// <returns></returns>
					ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* ref_layer);
					/// <summary>
					/// 获取图层
					/// </summary>
					/// <returns>返回图层对象</returns>
					EarthView::World::Spatial::Atlas::ILayer* getLayer();
					/// <summary>
					/// 设置地理对象
					/// </summary>
					/// <param name="geoObj">地理对象</param>
					/// <returns></returns>
					ev_void setGeoObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj);
					/// <summary>
					/// 获取地理对象
					/// </summary>
					/// <returns>返回地理对象</returns>
					EarthView::World::Spatial::Kml::CGeoObjectExtension* getGeoObject();
					/// <summary>
					/// 设置响应的状态
					/// </summary>
					/// <param name="response">响应的状态</param>
					/// <returns></returns>
					ev_void setResponseState(ev_bool response);
					/// <summary>
					/// 获取响应的状态
					/// </summary>
					/// <returns>返回响应的状态</returns>
					ev_bool getResponseState();
					/// <summary>
					/// 设置kml父文档
					/// </summary>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_void setParent(EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					/// <summary>
					/// 获取父文档
					/// </summary>
					/// <returns>返回kml父文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument* getParent();
				protected:
					ev_bool mResponseState;
					EarthView::World::Spatial::Atlas::ILayer* mLayer;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mGeoObject;
					EarthView::World::Spatial::Kml::CKmlDocument* mParent;
				private:
				};
				/// <summary>
				/// kml图层对象的操作事件
				/// </summary>
				class EV_SPATIAL3DPROXY_DLL CKmlLayerObjectEvent:public EarthView::World::Core::CEvent
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CKmlLayerObjectEvent(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">类型标识</param>
					/// <returns></returns>
					CKmlLayerObjectEvent(ev_uint16 type);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlLayerObjectEvent();
					/// <summary>
					/// 设置图层
					/// </summary>
					/// <param name="layer">layer对象</param>
					/// <returns></returns>
					ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* ref_layer);
					/// <summary>
					/// 获取图层
					/// </summary>
					/// <returns>返回图层对象</returns>
					EarthView::World::Spatial::Atlas::ILayer* getLayer();
					/// <summary>
					/// 设置地理对象
					/// </summary>
					/// <param name="geoObj">地理对象</param>
					/// <returns></returns>
					ev_void setGeoObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj);
					/// <summary>
					/// 获取地理对象
					/// </summary>
					/// <returns>返回地理对象</returns>
					EarthView::World::Spatial::Kml::CGeoObjectExtension* getGeoObject();
					/// <summary>
					/// 设置响应的状态
					/// </summary>
					/// <param name="response">响应的状态</param>
					/// <returns></returns>
					ev_void setResponseState(ev_bool response);
					/// <summary>
					/// 获取响应的状态
					/// </summary>
					/// <returns>返回响应的状态</returns>
					ev_bool getResponseState();
					/// <summary>
					/// 设置保存的路径
					/// </summary>
					/// <param name="savePath">保存路径</param>
					/// <returns></returns>
					ev_void setSaveFilePath(EVString savePath);
					/// <summary>
					/// 获取存储的路径
					/// </summary>
					/// <returns>返回路径</returns>
					EVString getSaveFilePath();
				protected:
					ev_bool mResponseState;
					EarthView::World::Spatial::Atlas::ILayer* mLayer;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mGeoObject;
					EVString mSavePath;
				private:
				};
				/// <summary>
				/// kml添加文件夹事件
				/// </summary>
				class EV_SPATIAL3DPROXY_DLL CKmlAddFolderEvent:public EarthView::World::Core::CEvent
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CKmlAddFolderEvent(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">类型标识</param>
					/// <returns></returns>
					CKmlAddFolderEvent(ev_uint16 type);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlAddFolderEvent();
					/// <summary>
					/// 设置图层
					/// </summary>
					/// <param name="layer">layer对象</param>
					/// <returns></returns>
					ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* ref_layer);
					/// <summary>
					/// 获取图层
					/// </summary>
					/// <returns>返回图层对象</returns>
					EarthView::World::Spatial::Atlas::ILayer* getLayer();
					/// <summary>
					/// 设置kml文档
					/// </summary>
					/// <param name="folder">kml文档</param>
					/// <returns></returns>
					ev_void setFolder(EarthView::World::Spatial::Kml::CKmlDocument* ref_folder);
					/// <summary>
					/// 获取kml文档
					/// </summary>
					/// <returns>返回kml文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument*  getFolder();
					/// <summary>
					/// 设置响应的状态
					/// </summary>
					/// <param name="response">响应的状态</param>
					/// <returns></returns>
					ev_void setResponseState(ev_bool response);
					/// <summary>
					/// 获取响应的状态
					/// </summary>
					/// <returns>返回响应的状态</returns>
					ev_bool getResponseState();
					/// <summary>
					/// 设置kml父文档
					/// </summary>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_void setParent(EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					/// <summary>
					/// 获取父文档
					/// </summary>
					/// <returns>返回kml父文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument* getParent();
					/// <summary>
					/// 设置保存的路径
					/// </summary>
					/// <param name="savePath">保存路径</param>
					/// <returns></returns>
					ev_void setSaveFilePath(EVString savePath);
					/// <summary>
					/// 获取存储的路径
					/// </summary>
					/// <returns>返回路径</returns>
					EVString getSaveFilePath();
				protected:
					ev_bool mResponseState;
					EarthView::World::Spatial::Kml::CKmlDocument* mFolder;
					EarthView::World::Spatial::Atlas::ILayer* mLayer;
					EarthView::World::Spatial::Kml::CKmlDocument* mParent;
					EVString mSavePath;

				private:
				};
				/// <summary>
				/// kml文件事件
				/// </summary>
				class EV_SPATIAL3DPROXY_DLL CKmlFileEvent:public EarthView::World::Core::CEvent
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CKmlFileEvent(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">类型标识</param>
					/// <returns></returns>
					CKmlFileEvent(ev_uint16 type);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlFileEvent();
					/// <summary>
					/// 设置图层
					/// </summary>
					/// <param name="layer">layer对象</param>
					/// <returns></returns>
					ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* ref_layer);
					/// <summary>
					/// 获取图层
					/// </summary>
					/// <returns>返回图层对象</returns>
					EarthView::World::Spatial::Atlas::ILayer* getLayer();
					/// <summary>
					/// 设置保存的路径
					/// </summary>
					/// <param name="filePath">保存路径</param>
					/// <returns></returns>
					ev_void setFilePath(EVString filePath);
					/// <summary>
					/// 获取存储的路径
					/// </summary>
					/// <returns>返回路径</returns>
					EVString getFilePath();
					/// <summary>
					/// 设置响应的状态
					/// </summary>
					/// <param name="response">响应的状态</param>
					/// <returns></returns>
					ev_void setResponseState(ev_bool response);
					/// <summary>
					/// 获取响应的状态
					/// </summary>
					/// <returns>返回响应的状态</returns>
					ev_bool getResponseState();
					/// <summary>
					/// 设置kml父文档
					/// </summary>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_void setParent(EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					/// <summary>
					/// 获取父文档
					/// </summary>
					/// <returns>返回kml父文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument* getParent();
					/// <summary>
					/// 设置保存的路径
					/// </summary>
					/// <param name="savePath">保存路径</param>
					/// <returns></returns>
					ev_void setSaveFilePath(EVString savePath);
					/// <summary>
					/// 获取存储的路径
					/// </summary>
					/// <returns>返回路径</returns>
					EVString getSaveFilePath();
				protected:
					ev_bool mResponseState;
					EVString mFilePath;
					EarthView::World::Spatial::Atlas::ILayer* mLayer;
					EarthView::World::Spatial::Kml::CKmlDocument* mParent;
					EVString mSavePath;
				private:
				};

				/// <summary>
				/// kml事件
				/// </summary>
				class EV_SPATIAL3DPROXY_DLL CKmlEvent:public EarthView::World::Core::CEvent
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CKmlEvent(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">类型标识</param>
					/// <returns></returns>
					CKmlEvent(ev_uint16 type);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlEvent();
		/*			ev_void setGeoObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
					EarthView::World::Spatial::Kml::CGeoObjectExtension* getGeoObject();*/

					/// <summary>
					/// 设置图层
					/// </summary>
					/// <param name="layer">layer对象</param>
					/// <returns></returns>
					ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* ref_layer);
					/// <summary>
					/// 获取图层
					/// </summary>
					/// <returns>返回图层对象</returns>
					EarthView::World::Spatial::Atlas::ILayer* getLayer();
					/// <summary>
					/// 设置保存的路径
					/// </summary>
					/// <param name="savePath">保存路径</param>
					/// <returns></returns>
					ev_void setSaveFilePath(EVString savePath);
					/// <summary>
					/// 获取存储的路径
					/// </summary>
					/// <returns>返回路径</returns>
					EVString getSaveFilePath();
					/// <summary>
					/// 设置kml父文档
					/// </summary>
					/// <param name="parent">kml父文档</param>
					/// <returns></returns>
					ev_void setParent(EarthView::World::Spatial::Kml::CKmlDocument* ref_parent);
					/// <summary>
					/// 获取父文档
					/// </summary>
					/// <returns>返回kml父文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument* getParent();
				/*	ev_void setFolder(EarthView::World::Spatial::Kml::CKmlDocument* folder);
					EarthView::World::Spatial::Kml::CKmlDocument*  getFolder();*/

					/// <summary>
					/// 设置保存的路径
					/// </summary>
					/// <param name="filePath">保存路径</param>
					/// <returns></returns>
					ev_void setFilePath(EVString filePath);
					/// <summary>
					/// 获取存储的路径
					/// </summary>
					/// <returns>返回路径</returns>
					EVString getFilePath();
				protected:
					//EarthView::World::Spatial::Kml::CGeoObjectExtension* mGeoObject;
					EarthView::World::Spatial::Atlas::ILayer* mLayer;
					EVString mSavePath;
					EarthView::World::Spatial::Kml::CKmlDocument* mParent;
					//EarthView::World::Spatial::Kml::CKmlDocument* mFolder;
					EVString mFilePath;
				private:
				};

				/// <summary>
				/// kml树节点事件
				/// </summary>
				class EV_SPATIAL3DPROXY_DLL CKmlTreeNodeEvent:public EarthView::World::Core::CEvent
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CKmlTreeNodeEvent(_in EarthView::World::Core::CNameValuePairList *pList);
				public:

					/// <summary>
					/// kml树节点的类型
					/// </summary>
					enum EVKmlTreeNodeType
					{
						NT_CGeoObject,
						//zk
						NT_Tour,
						NT_Folder,
						NT_NetLink
					};
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">类型标识</param>
					/// <returns></returns>
					CKmlTreeNodeEvent(ev_uint16 type);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlTreeNodeEvent();
					/// <summary>
					/// 设置kml树节点的类型
					/// </summary>
					/// <param name="nodeType">节点类型</param>
					/// <returns></returns>
					ev_void setTreeNodeType(EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent::EVKmlTreeNodeType nodeType);
					/// <summary>
					/// 获取节点类型
					/// </summary>
					/// <returns>返回节点类型</returns>
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent::EVKmlTreeNodeType getTreeNodeType();
					/// <summary>
					/// 设置子地理对象
					/// </summary>
					/// <param name="geoObj">地理对象</param>
					/// <returns></returns>
					ev_void setChildObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj);
					/// <summary>
					/// 获取地理对象
					/// </summary>
					/// <returns>返回地理对象</returns>
					EarthView::World::Spatial::Kml::CGeoObjectExtension* getChildObject();
					//zk

					/// <summary>
					/// 设置游览
					/// </summary>
					/// <param name="tour">游览对象</param>
					/// <returns></returns>
					ev_void setTour(EarthView::World::Spatial::Kml::CTour* ref_tour);
					/// <summary>
					/// 获取游览
					/// </summary>
					/// <returns>返回游览对象</returns>
					EarthView::World::Spatial::Kml::CTour* getTour();
					/// <summary>
					/// 设置图层
					/// </summary>
					/// <param name="layer">layer对象</param>
					/// <returns></returns>
					ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* ref_layer);
					/// <summary>
					/// 获取图层
					/// </summary>
					/// <returns>返回图层对象</returns>
					EarthView::World::Spatial::Atlas::ILayer* getLayer();
					/// <summary>
					/// 设置保存的路径
					/// </summary>
					/// <param name="savePath">保存路径</param>
					/// <returns></returns>
					ev_void setSaveFilePath(EVString savePath);
					/// <summary>
					/// 获取存储的路径
					/// </summary>
					/// <returns>返回路径</returns>
					EVString getSaveFilePath();
					/// <summary>
					/// 设置kml文档
					/// </summary>
					/// <param name="folder">kml文档</param>
					/// <returns></returns>
					ev_void setFolder(EarthView::World::Spatial::Kml::CKmlDocument* ref_folder);
					/// <summary>
					/// 获取存储的路径
					/// </summary>
					/// <returns>返回路径</returns>
					EarthView::World::Spatial::Kml::CKmlDocument* getFolder();
					/// <summary>
					/// 设置kml父文档
					/// </summary>
					/// <param name="folder">kml父文档</param>
					/// <returns></returns>
					ev_void setParentObject(EarthView::World::Spatial::Kml::CKmlDocument* ref_folder);
					/// <summary>
					/// 获取父对象
					/// </summary>
					/// <returns>返回父对象</returns>
					EarthView::World::Spatial::Kml::CKmlDocument*  getParentObject();
					/// <summary>
					/// 设置保存的路径
					/// </summary>
					/// <param name="filePath">保存路径</param>
					/// <returns></returns>
					ev_void setFilePath(EVString filePath);
					/// <summary>
					/// 获取存储的路径
					/// </summary>
					/// <returns>返回路径</returns>
					EVString getFilePath();
					/// <summary>
					/// 获取kml网络连接
					/// </summary>
					/// <returns>返回网络连接</returns>
					EarthView::World::Spatial::Kml::CKmlNetworkLink* getKmlNetLink();
					/// <summary>
					/// 设置kml网络连接
					/// </summary>
					/// <param name="netLink">kml网络连接</param>
					/// <returns></returns>
					ev_void setKmlNetLink(EarthView::World::Spatial::Kml::CKmlNetworkLink* ref_netLink);
					/// <summary>
					/// 设置kml网络连接相关的kml文档
					/// </summary>
					/// <param name="releativeParent">kml文档</param>
					/// <returns></returns>
					ev_void setNetLinkReleativeParent(EarthView::World::Spatial::Kml::CKmlDocument* ref_releativeParent);
					/// <summary>
					/// 获取kml网络连接父文档
					/// </summary>
					/// <returns>返回kml网络连接父文档</returns>
					EarthView::World::Spatial::Kml::CKmlDocument*  getNetLinkReleativeParent();
				protected:
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent::EVKmlTreeNodeType mNodeType;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mChildObject;
					//zk
					EarthView::World::Spatial::Kml::CTour* mtour;
					EarthView::World::Spatial::Atlas::ILayer* mLayer;
					EVString mSavePath;
					EarthView::World::Spatial::Kml::CKmlDocument* mParentObject;
					EarthView::World::Spatial::Kml::CKmlDocument* mReleativeParent;
					EarthView::World::Spatial::Kml::CKmlDocument* mFolder;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* mKmlNetLink;
					EVString mFilePath;
				private:
				};
			}
		}
	}
}
#endif
