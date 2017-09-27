#ifndef EARTHVIEW_WORLD_SPATIAL3D_EFFECTITERATOR_H
#define EARTHVIEW_WORLD_SPATIAL3D_EFFECTITERATOR_H

#include "spatialinterface/ifeatureiterator.h"
#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "databaseutility/sqlquery.h"
#include "spatial3ddataset/effectfeature.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeatureClass;
				class IFeature;
				class CPropertySet;
			}
		}
	}
}




namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				/// <summary>
				/// 特效要素查询结果迭代器，用于遍历查询结果，只能向前移动，不可后退。
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectFeatureIterator : public EarthView::World::Spatial::GeoDataset::IFeatureIterator
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectFeatureIterator(_in EarthView::World::Core::CNameValuePairList *pList);
					vector<EarthView::World::Spatial::GeoDataset::IFeature*> mQueryFeatures;

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectFeatureIterator();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectFeatureIterator();

					/// <summary>
					/// 下一个结果
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果移动到最后，返回NULL；否则，返回值有效</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* next();

					/// <summary>
					/// 获取字段集合
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const;

					/// <summary>
					/// 获取字段
					/// </summary>
					/// <param name="index">字段索引</param>
					/// <returns></returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getField(ev_uint32 index) const;

					/// <summary>
					/// 查找字段
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <returns></returns>
					virtual ev_int32 findField(const EVString& fieldName) const;	

					/// <summary>
					/// 清除字段集合
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
ev_private:
					EarthView::World::Core::Database::CSqlQuery mQuery;					
					EarthView::World::Spatial3D::Dataset::CEffectFeature* mpFeature;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpDataset;
					EVString mFieldNames;	

					friend class CEffectDataset;
				};
			}//namespace
		}
	}
}

#endif
