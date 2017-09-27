#ifndef EARTHVIEW_WORLD_SPATIAL3D_ENTITYSELECTION_H
#define EARTHVIEW_WORLD_SPATIAL3D_ENTITYSELECTION_H


#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatialinterface/ifeatureselection.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CEntityDataset;
				class EV_Spatial3DDataset_DLL CEntitySelection : public EarthView::World::Spatial::GeoDataset::IFeatureSelection
				{
					friend class CMeshTemplateDataset;
					friend class CEntityDataset;
					friend class CMeshDataset;
					friend class CResourceDataset;
				private:
					EarthView::World::Spatial3D::Dataset::CEntityDataset* mpDataset;
					vector<ev_uint32> mIDs;
				protected:
					CEntitySelection();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEntitySelection(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CEntitySelection();

					/// <summary>
					/// 获取选择的entity数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>选择的entity数量</returns>
					
					virtual ev_uint32 getCount() const;

					/// <summary>
					/// 获取给定序号的entity的id
					/// </summary>
					/// <param name="index">序号</param>
					/// <returns>entity id</returns>
					
					virtual ev_uint32 getID(ev_uint32 index) const;

					/// <summary>
					/// 获取所有选择的entity的id
					/// </summary>
					/// <param name="ids">id集合</param>
					/// <returns>选择的entity数量</returns>
					
					virtual ev_uint32 getIDs(ev_uint32 * ids) const;

					/// <summary>
					/// 查找给定entity id是否选中
					/// </summary>
					/// <param name="id">id</param>
					/// <returns>选中的entity序号</returns>
					
					virtual ev_int32 findID(ev_uint32 id) const;

					/// <summary>
					/// 进行查询
					/// </summary>
					/// <param name="filter">查询Filter</param>
					/// <returns>查询结果迭代器</returns>
					
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const;

					/// <summary>
					/// 进行选择
					/// </summary>
					/// <param name="filter">查询Filter</param>
					/// <returns>查询到的要素选择器</returns>
					
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const;

					/// <summary>
					/// 添加一个选择的entity id 
					/// </summary>
					/// <param name="id">id</param>
					/// <returns>成功返回true,失败返回false</returns>
					
					virtual ev_bool addID(ev_uint32 id) ;

					/// <summary>
					/// 添加多个选择的entity id 
					/// </summary>
					/// <param name="id">id集合</param>
					/// <param name="size">id数量</param>
					/// <returns>添加成功的数量</returns>
					
					virtual ev_uint32 addIDs(ev_uint32 * id,ev_uint32 size) ;

					/// <summary>
					/// 从给定序号开始移除选择的entity
					/// </summary>
					/// <param name="index">移除起始序号</param>
					/// <param name="size">移除数量</param>
					/// <returns>成功移除的数量</returns>
					
					virtual ev_uint32 remove(ev_uint32 index,ev_uint32 size) ;

					/// <summary>
					/// 清除所有选择的entity
					/// </summary>
					/// <param name=""></param>
					/// <returns>清理的数量</returns>
					
					virtual ev_uint32 clear() ;
				};

			}//namespace
		}
	}
}
#endif
