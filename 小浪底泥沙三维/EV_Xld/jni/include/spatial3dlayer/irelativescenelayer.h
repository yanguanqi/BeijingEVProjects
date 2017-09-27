#ifndef IRELATIVESCENELAYER_H
#define IRELATIVESCENELAYER_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <spatialinterface/itheme.h>

#include "spatial3dlayer/3dlayerconfig.h"
#include "geometry3d/iscenelayer.h"

namespace EarthView{
	namespace World{

		namespace Graphic
		{
			class COctreeCamera;
		}

		namespace Geometry3D
		{
			class CMultiGeometry3DExtension;
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				/// <summary>
				/// 聚合非贴地二维的图层，提供在三维中渲染的接口
				/// 管理三维中非贴地二维图层
				/// </summary>
				class EV_3DLAYER_DLL IRelativeSceneLayer : public EarthView::World::Spatial3D::Atlas::ISceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					IRelativeSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IRelativeSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IRelativeSceneLayer(const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IRelativeSceneLayer();
					
				public:
					/// <summary>
					/// 重新创建空间索引
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否成功</returns>
					virtual ev_bool rebulidSpatialIndex();

				protected:
					friend class CExtensionBackgroundQueue;
					/// <summary>
					/// 获取可见的八叉树节点
					/// </summary>
					/// <param name="cam">相机</param>
					/// <param name="listNodeCode">可见的八叉树节点</param>
					/// <returns></returns>
					virtual ev_void buildVisibleGeometry(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needReleases,list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needUpdates);
					/// <summary>
					/// 矢量扩展
					/// </summary>
					/// <param name="needBuildNodes">需要建立的节点</param>
					/// <param name="needLoadExtensions">需要加载的扩展</param>
					/// <param name="needReleases">需要是否的节点</param>
					/// <returns>是否成功</returns>
					virtual bool processGeometryExtensions(const EVString& nodeCode,EarthView::World::Geometry3D::CMultiGeometry3DExtension*& geoExtension);
					/// <summary>
					/// 矢量扩展注记
					/// </summary>
					/// <param name="labelUpdate">注记更新</param>
					/// <returns>是否成功</returns>
					virtual bool processLabels(EarthView::World::Geometry3D::CMultiGeometry3DExtension* labelUpdate);

					virtual bool processStatisticsEx(const EVString& nodeCode, EarthView::World::Geometry3D::CMultiGeometry3DExtension* updateEx,ev_bool recreateEx,ev_bool recreateLabel);
					/// <summary>
					/// 加载扩展对象
					/// </summary>
					/// <param name="mapNeedLoad">扩展对象</param>
					/// <returns></returns>
					virtual ev_void loadExtensions(const EVString& nodeCode,EarthView::World::Geometry3D::CMultiGeometry3DExtension* needLoad);
					/// <summary>
					/// 挂接注记
					/// </summary>
					/// <param name="labelUpdate">注记更新</param>
					/// <returns>是否成功</returns>
					virtual bool loadLabels(EarthView::World::Geometry3D::CMultiGeometry3DExtension* labelLoad);
					virtual bool loadStatisticsEx( EarthView::World::Geometry3D::CMultiGeometry3DExtension* loadEx,ev_bool recreateEx,ev_bool recreateLabel);
					virtual ev_void updateGeometry(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needReleases,list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needUpdates);
					virtual ev_void releaseExtension(EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);
					virtual ev_void releaseExtension(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& extensions);
				

					mutable EarthView::World::Core::CReadWriteLock mCameraLock;//相机锁
					EarthView::World::Graphic::COctreeCamera* mpCacheCamera;

				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(IRelativeSceneLayer);
				};
			}
		}
	}
}
#endif
