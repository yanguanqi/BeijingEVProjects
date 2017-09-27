#ifndef EARTHVIEW_WORLD_SPATIAL3D_LAYER3DEDITORLISTENER_H
#define EARTHVIEW_WORLD_SPATIAL3D_LAYER3DEDITORLISTENER_H

#include "spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatial3ddataset/spatial3ddatasetcomdef.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class IGlobeLayer;
			}
		}
	}
}
	

namespace EarthView{
    namespace World{
        namespace Spatial3D{

			class EV_Spatial3DEngine_DLL CLayer3DEditorListener : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">参数键值对</param>
				/// <returns></returns>
				CLayer3DEditorListener(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CLayer3DEditorListener();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CLayer3DEditorListener();

				/// <summary>
				/// 开始编辑响应函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void onStartEditing(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer);

				/// <summary>
				/// 结束编辑响应函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void onEndEditing(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer);

				/// <summary>
				/// 模型操作提交
				/// </summary>
				/// <param name="operType">模型操作类别</param>
				/// <param name="cacheID">未提交前模型的ID</param>
				/// <param name="dbID">提交后在数据库中的ID</param>
				/// <returns></returns>
				virtual void onEndCommitModel(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, EarthView::World::Spatial3D::Dataset::EntityDatasetOperType operType, ev_uint32 cacheID, ev_uint32 dbID);

				/// <summary>
				/// meshxg插入操作
				/// </summary>
				/// <param name="cacheID">未提交前的ID</param>
				/// <param name="dbID">提交后在数据库中的ID</param>
				/// <returns></returns>
				virtual void onInsertMeshxg(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer, ev_uint32 cacheID, ev_uint32 recordID);

			};
          
        }
    }
}
#endif
