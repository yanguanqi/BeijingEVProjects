#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELOBJECTMANAGER_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELOBJECTMANAGER_H

#include "spatial3dengine/spatial3denginecomdef.h"
#include "geometry3d/visibleobject.h"
#include "graphic/colourvalue.h"
#include "graphic/framelistener.h"

namespace EarthView{
	namespace World{
		namespace Geometry3D
		{
			class VisibleObjects;
		}
		namespace Spatial3D{
			class CGlobeCamera;
			class CModelEditHelper;
			

			namespace Dataset
			{
				class CModelOctreeManager;
			}

			namespace Atlas{
				class CEntityLayer;
			}
		}

		namespace Spatial{
			namespace Octree{
				class CBaseOctreeNode;
			}
		}

		namespace Spatial
		{
			namespace GeoDataset
			{
				class IFeatureSelection;
			}
		}
		

		namespace Core
		{
			class CThread;
			class CSemaphore;
			class CDefaultWorkQueue;
		}

		namespace Graphic{
			class CCamera;
			class CSceneManager;
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{

				class CModelUpdateThreadFunc;
				


				
				class EV_Spatial3DEngine_DLL CModelObjectManager : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <returns></returns>
					CModelObjectManager(EarthView::World::Graphic::CSceneManager* ref_pSceneManager);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CModelObjectManager();

					/// <summary>
					/// 找出可见对象
					/// </summary>
					/// <param name="camera">相机对象</param>
					/// <returns></returns>
					void findVisibleObjects(EarthView::World::Graphic::CCamera* camera);

					/// <summary>
					/// 添加图层到管理器
					/// </summary>
					/// <param name="layer">entity图层对象</param>
					/// <returns></returns>
					void addLayer(EarthView::World::Spatial3D::Atlas::CEntityLayer* ref_layer);

					/// <summary>
					/// 从管理器删除图层
					/// </summary>
					/// <param name="layer">entity图层对象</param>
					/// <returns></returns>
					void removeLayer(EarthView::World::Spatial3D::Atlas::CEntityLayer* layer);

					/// <summary>
					/// 获取管理的图层数
					/// </summary>
					/// <returns>图层个数</returns>
					ev_uint32 getNumLayer();

					/// <summary>
					/// 获取管理的图层
					/// </summary>
					/// <param name="index">图层序号</param>
					/// <returns>图层对象</returns>
					EarthView::World::Spatial3D::Atlas::CEntityLayer* getLayer(ev_uint32 index);


				protected:
					/// <summary>
					/// 初始化
					/// </summary>
					/// <returns></returns>
					void _init();

					/// <summary>
					/// 反初始化
					/// </summary>
					/// <returns></returns>
					void _unInit();

					/// <summary>
					/// 判断相机是否移动
					/// </summary>
					/// <param name="cam">相机对象</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					ev_bool _isCameraMoved(EarthView::World::Graphic::CCamera* cam);

					/// <summary>
					/// 强制移动相机
					/// </summary>
					/// <returns></returns>
					void _forceCameraMove();

					/// <summary>
					/// 拷贝相机
					/// </summary>
					/// <param name="cam">相机对象</param>
					/// <returns></returns>
					void _copyCamera(EarthView::World::Graphic::CCamera* cam);

				protected:

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="list">构造函数参数键值对表</param>
					/// <returns></returns>
					
					CModelObjectManager( _in EarthView::World::Core::CNameValuePairList* list );

				private:
					//图层索引
					typedef set<EarthView::World::Spatial3D::Dataset::CModelOctreeManager*> LayerSpatialIndexList;
					LayerSpatialIndexList mLayerSpatialIndexList;

					typedef set<EarthView::World::Spatial3D::Atlas::CEntityLayer*> RenderLayers;
					RenderLayers mLayers;

					//更新线程
					EarthView::World::Core::CThread* mpThread;
					EarthView::World::Core::CSemaphore* mpSemaphore;
					CModelUpdateThreadFunc* mpThreadFunc;

					//相机最后一次移动的变换矩阵
					EarthView::World::Spatial::Math::CMatrix4 mLastViewMatrix;

					//相机移动标志
					ev_bool mIsForceCameraMove;

					//场景管理器
					EarthView::World::Graphic::CSceneManager* mpSceneManager;

					//子线程使用的camera
					EarthView::World::Spatial3D::CGlobeCamera* mpCopyCamera;

					friend class CModelLoadWorkQueue;
					friend class CModelUnloadWorkQueue;
					friend class CModelUpdateThreadFunc;
					friend class EarthView::World::Spatial3D::Atlas::CEntityLayer;
					friend class CManualModelObject;
					friend class CManualInstanceObject;
					friend class /*EarthView::World::Spatial3D::ModelManager::*/CModelBaseObject;
				};

				


			}//namespace
		}
	}
}
#endif

