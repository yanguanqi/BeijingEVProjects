#ifndef EARTHVIEW_WORLD_SPATIAL3D_RESOURCEITERATOR_H
#define EARTHVIEW_WORLD_SPATIAL3D_RESOURCEITERATOR_H

#include "spatialinterface/ifeatureiterator.h" 
#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "databaseutility/sqlquery.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeatureClass;
				class IFeature;
			}}}}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				class EV_Spatial3DDataset_DLL CResourceIterator : public EarthView::World::Spatial::GeoDataset::IFeatureIterator
				{
					friend class CResourceDataset;
				private:
					EarthView::World::Core::Database::CSqlQuery mQuery;
					EarthView::World::Spatial::GeoDataset::IFeature* mpFeature;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpDataset;
					EVString mFieldNames;
					ev_bool mCreateNewOne;
                ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CResourceIterator(_in EarthView::World::Core::CNameValuePairList *pList);

				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					CResourceIterator();
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CResourceIterator();
				public:					
					/// <summary>
					/// 获取下一个要素对象
					/// </summary>
					/// <param name="bCreateNewOne">是否创建新的要素对象，如果是，需要外部释放</param>
					/// <returns>获取的要素对象</returns>
					
					virtual EarthView::World::Spatial::GeoDataset::IFeature* next(ev_bool bCreateNewOne);

					/// <summary>
					/// 获取下一个要素对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>获取的要素对象</returns>
					
					virtual EarthView::World::Spatial::GeoDataset::IFeature* next();

					/// <summary>
					///获取要素所有字段信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>字段信息</returns>
					
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const;

					/// <summary>
					/// 获取给定序号的要素字段信息
					/// </summary>
					/// <param name="index">序号</param>
					/// <returns>字段信息</returns>
					
					virtual const EarthView::World::Spatial::GeoDataset::IField* getField(ev_uint32 index) const;

					/// <summary>
					/// 查找给定名称的要素字段序号
					/// </summary>
					/// <param name="fieldName">字段名称</param>
					/// <returns>字段序号</returns>
					
					virtual ev_int32 findField(const EVString& fieldName) const;

					/// <summary>
					/// 清空查询结果
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void clear();
				};

			}//namespace
		}
	}
}

#endif
