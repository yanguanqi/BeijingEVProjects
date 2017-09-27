#ifndef _GLOBESELECTION_H_
#define _GLOBESELECTION_H_

#include "globecontrol/evglobecontrol_config.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				class ILayerSelection;
			}
		}

		namespace Spatial3D
		{
			namespace Atlas
			{
				class IGlobeLayer;
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

			/// <summary>
			/// 所有三维图层选择集的集合
			/// </summary>
			class EV_GLOBECONTROL_DLL CGlobeSelection : public EarthView::World::Core::CBaseObject
			{

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				CGlobeSelection();
				/// <summary>
				/// 析构函数
				/// </summary>
				virtual ~CGlobeSelection();

			ev_private:
				CGlobeSelection(EarthView::World::Core::CNameValuePairList* pList);

			protected:
				typedef map<EarthView::World::Spatial3D::Atlas::IGlobeLayer*,EarthView::World::Spatial::Atlas::ILayerSelection*> LayersSelection;
				LayersSelection mSelection;
			public:
				/// <summary>
				/// 获取图层数量
				/// </summary>
				/// <returns>图层数量</returns>	
				ev_uint32 getLayerCount()const;
				/// <summary>
				/// 增加一条三维图层选择集记录
				/// </summary>
				/// <param name="ref_layer">三维图层</param>
				/// <param name="ref_selection">图层选择集</param>
				/// <returns>添加成功返回true，失败返回false</returns>	
				ev_bool add(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer,EarthView::World::Spatial::Atlas::ILayerSelection* ref_selection);
				/// <summary>
				/// 移除一条三维图层选择集记录
				/// </summary>
				/// <param name="layer">三维图层</param>
				/// <returns>移除成功返回true，失败返回false</returns>	
				ev_bool remove(EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer);
				/// <summary>
				/// 清空三维图层选择集的集合
				/// </summary>
				/// <returns></returns>	
				ev_void clear();
				/// <summary>
				/// 查询是否存在该三维图层选择集记录
				/// </summary>
				/// <param name="layer">三维图层</param>
				/// <returns>存在返回true，否则返回false</returns>	
				ev_bool exist(EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer)const;
				/// <summary>
				/// 根据序号获得三维图层
				/// </summary>
				/// <param name="index">序号</param>
				/// <returns>三维图层</returns>	
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* get(ev_uint32 index)const;
				/// <summary>
				/// 根据三维图层获得该图层的选择集
				/// </summary>
				/// <param name="layer">三维图层</param>
				/// <returns>三维图层选择集</returns>	
				EarthView::World::Spatial::Atlas::ILayerSelection* get(EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer)const;
				
			};

		}
	}
}

#endif
