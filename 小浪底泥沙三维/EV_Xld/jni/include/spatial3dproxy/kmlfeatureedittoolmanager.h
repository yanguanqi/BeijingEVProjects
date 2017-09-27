#ifndef EV_KMLFEATUREEDITTOOLMANAGER_H
#define EV_KMLFEATUREEDITTOOLMANAGER_H
#include "spatial3dproxy/spatial3dproxy_config.h"
#include "spatial3dengine/ikmlobserver.h"
#include "spatial3dproxy/kmltreemanager.h"
#include "spatialgui/itool.h"
#include <spatialobject/coordinatesystem/spatialreference.h>

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
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				/// <summary>
				/// kml要素编辑工具管理
				/// </summary>
				class EV_SPATIAL3DPROXY_DLL CKmlFeatureEditToolManager:public EarthView::World::Spatial3D::KmlManager::IKmlObserver
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CKmlFeatureEditToolManager(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="sceneMgr">场景管理器</param>
					/// <param name="camera">相机</param>
					/// <param name="treeEventObject">kml树事件</param>
					/// <returns></returns>	
					CKmlFeatureEditToolManager(EarthView::World::Graphic::CSceneManager* ref_sceneMgr,EarthView::World::Graphic::CCamera* ref_camera,EarthView::World::Graphic::CViewport* ref_viewPort,EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ref_treeEventObject);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlFeatureEditToolManager();
					///<Summary>
					///刷新非视图数据
					///</Summary>
					/// <returns></returns>
					virtual ev_void refresh();
					///<Summary>
					/// 销毁当前的工具
					///</Summary>
					/// <returns></returns>
					ev_void destoryCurrentTool();
					/// <summary>
					/// 刷新工具
					/// </summary>
					/// <param name="geoObj">地理对象</param>
					/// <param name="parent">kml文档</param>
					/// <returns></returns>	
					ev_void refresh(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Spatial::Kml::CKmlDocument* parent);
					/// <summary>
					/// 结束编辑操作
					/// </summary>
					/// <param name="isCancelEdit">是否取消编辑</param>
					/// <param name="parent">kml文档</param>
					/// <returns>返回地理对象</returns>	
					EarthView::World::Spatial::Kml::CGeoObjectExtension* endEdit(ev_bool isCancelEdit,EarthView::World::Spatial::Kml::CKmlDocument* parent);
					/// <summary>
					/// 获取单例
					/// </summary>
					/// <param name="sceneMgr">场景管理器</param>
					/// <param name="camera">相机</param>
					/// <param name="treeEventObject">kml树事件</param>
					/// <returns>kml要素编辑工具</returns>	
					static EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* getSingletonPtr(EarthView::World::Graphic::CSceneManager* ref_sceneMgr,EarthView::World::Graphic::CCamera* ref_camera,EarthView::World::Graphic::CViewport* ref_viewPort,EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ref_treeEventObj);
					/// <summary>
					/// 创建工具
					/// </summary>
					/// <param name="data">地理对象</param>
					/// <param name="parent">kml文档</param>
					/// <param name="isCreate">是否创建</param>
					/// <returns>kml要素编辑工具</returns>			
					EarthView::World::Spatial::SystemUI::ITool*  createTool(EarthView::World::Spatial::Kml::CGeoObjectExtension* data,EarthView::World::Spatial::Kml::CKmlDocument* parent,ev_bool isCreate);
					EarthView::World::Spatial::SystemUI::ITool*   mCurrentTool;
					EarthView::World::Spatial::Display::ISymbol* mSymbol;
				protected:
					int mLastX;
					int mLastY;

				private:
					static EarthView::World::Graphic::CViewport* m_viewPort;
					ev_bool mHasToolCreated;
					ev_bool mIsCreate;
					
					static EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* mSingletonPtr;
					EarthView::World::Spatial::Utility::CSpatialReference* mEditSR;
					
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* mTreeEventObject;
					static EarthView::World::Graphic::CSceneManager* mSceneMgr;
					static EarthView::World::Graphic::CCamera* mCamera;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mOldGeoObject;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mNewGeoObject;
				};
			}
		}
	}
}
#endif
