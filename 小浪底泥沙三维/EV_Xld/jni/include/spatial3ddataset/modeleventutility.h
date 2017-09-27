/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：modeleventutility.h
* 摘    要：该文件是模型通用工具接口的声明
*
* 当前版本：1.0
* 作    者：邹先涛
* 完成日期：2013年6月28日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		  2012-10-16		邹先涛   1.0.0版本的内容声明
* 
**/

#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELEVENTUTILITY_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELEVENTUTILITY_H

#include "spatial3ddataset/spatial3ddatasetcomdef.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeature;
				class IDataset;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class EV_Spatial3DDataset_DLL CModelEventUtility : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CModelEventUtility(){}
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelEventUtility(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:

					/// <summary>
					/// 发送停止渲染事件
					/// </summary>
					/// <returns></returns>
					static void sendStopRenderEvent(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);

					/// <summary>
					/// 发送开始渲染事件
					/// </summary>
					/// <returns></returns>
					static void sendStartRenderEvent(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);

					/// <summary>
					/// 发送更新所有模型事件
					/// </summary>
					/// <returns></returns>
					static void sendRefreshAllModelEvent(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);

					/// <summary>
					/// 发送更新模型事件
					/// </summary>
					/// <returns></returns>
					static void sendUpdateModelEvent(EarthView::World::Spatial::GeoDataset::IDataset* pDataset, const EarthView::World::Spatial::GeoDataset::IFeature* info, EarthView::World::Spatial3D::Dataset::EntityDatasetOperType operType);

					/// <summary>
					/// 发送更新高度模式事件
					/// </summary>
					/// <returns></returns>
					static void sendUpdateAltitudeEvent(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);

					/// <summary>
					/// 发送更新索引事件
					/// </summary>
					/// <returns></returns>
					static void sendUpdateOctreeEvent(EarthView::World::Spatial::GeoDataset::IDataset* pDataset, const EarthView::World::Spatial::GeoDataset::IFeature* info, EarthView::World::Spatial3D::Dataset::EntityDatasetOperType operType);

					/// <summary>
					/// 通知刷新八叉树
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static void sendRefreshOctreeEvent(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);

					/// <summary>
					/// 通知提交的ID
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static void sendCommitIDEvent(EarthView::World::Spatial::GeoDataset::IDataset* pDataset, EarthView::World::Spatial3D::Dataset::EntityDatasetOperType operType, ev_uint32 cacheID, ev_uint32 dbID);
				};


			}//end namespace
		}
	}
}
#endif
