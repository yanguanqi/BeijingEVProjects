﻿#ifndef EARTHVIEW_WORLD_SPATIAL3D_WEB_ENTITYITERATOR_H
#define EARTHVIEW_WORLD_SPATIAL3D_WEB_ENTITYITERATOR_H

#include "spatialinterface/ifeatureiterator.h"
#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "databaseutility/sqlquery.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeatureClass;
				class EarthView::World::Spatial::GeoDataset::IFeature;
				class CPropertySet;
			}
		}
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				class CWebEntityDataset;
				class EV_Spatial3DDataset_DLL CWebEntityIterator : public EarthView::World::Spatial::GeoDataset::IFeatureIterator
				{	
					friend class CWebEntityDataset;
				public:
					enum CWebEntityIteratorType
					{
						ModeSpatial,
						ModeAttribute,
						ModeAttributeAndSpatial
					};
				private:
					CWebEntityDataset* mpDataset;
					CWebEntityIteratorType mIteratorType;
					ev_int32 mCurrentCursor;
				protected:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CWebEntityIterator();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CWebEntityIterator(CWebEntityDataset* ref_pDataset, CWebEntityIteratorType type);
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CWebEntityIterator(_in EarthView::World::Core::CNameValuePairList *pList);
				public:				

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CWebEntityIterator();
				public:
					/// <summary>
					/// 返回下一个要素对象
					/// </summary>
					/// <param name="bCreateNewOne">是否创建一个新的要素，true需要外部释放</param>
					/// <returns>获取的要素对象</returns>
					EarthView::World::Spatial::GeoDataset::IFeature* next(ev_bool bCreateNewOne);

					/// <summary>
					/// 返回下一个要素对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>获取的要素对象</returns>
					EarthView::World::Spatial::GeoDataset::IFeature* next();

					/// <summary>
					/// 获取所有字段
					/// </summary>
					/// <param name=""></param>
					/// <returns>获取的要素字段集合</returns>
					const EarthView::World::Spatial::GeoDataset::IFields* getFields() const;

					/// <summary>
					/// 获取给定序号的字段
					/// </summary>
					/// <param name="index">字段序号</param>
					/// <returns>字段对象</returns>
					const EarthView::World::Spatial::GeoDataset::IField* getField(ev_uint32 index) const;

					/// <summary>
					/// 查找给定名称的字段
					/// </summary>
					/// <param name="fieldName">字段名称</param>
					/// <returns>找到的字段编号，没有返回-1</returns>
					ev_int32 findField(const EVString& fieldName) const;

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