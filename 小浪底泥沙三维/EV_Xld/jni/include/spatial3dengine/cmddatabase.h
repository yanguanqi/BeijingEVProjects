#ifndef EARTHVIEW_WORLD_SPATIAL3D_CMDDATABASE_H
#define EARTHVIEW_WORLD_SPATIAL3D_CMDDATABASE_H

#include "spatial3denginecomdef.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{
				class IGlobeLayer;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{

			enum CommandOperType
			{
				COT_INSERT=0,
				COT_UPDATE,
				COT_DELETE
			};

			class EV_Spatial3DEngine_DLL CCmdDataBase : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CCmdDataBase(EarthView::World::Core::CNameValuePairList* pList);

			protected:
				ev_uint32 mID;
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* mpLayer;
				EarthView::World::Spatial3D::CommandOperType mOperType;
			public:

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="layer">图层对象</param>
				/// <param name="id">id</param>
				/// <param name="operType">操作类型</param>
				/// <returns></returns>
				CCmdDataBase(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer, ev_uint32 id, EarthView::World::Spatial3D::CommandOperType operType);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CCmdDataBase();

				/// <summary>
				/// 获取图层对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层对象</returns>
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer();

				/// <summary>
				/// 获取id
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 getID();

				/// <summary>
				/// 获取操作类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>操作类型</returns>
				EarthView::World::Spatial3D::CommandOperType getOperType();

				/// <summary>
				/// 设置id
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void setID(ev_uint32 id);

				/// <summary>
				/// 设置图层对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层对象</returns>
				void setLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_pLayer);

				/// <summary>
				/// 设置操作类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>操作类型</returns>
				void setOperType(EarthView::World::Spatial3D::CommandOperType operType);

			};

		}
	}
}

#endif
