#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_ILEGENDITEM_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_ILEGENDITEM_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ilayer.h"
#include "core/xml.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				class EV_INTERFACE_DLL ILegendItem :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name="c"></param>
					/// <returns></returns>
					virtual ~ILegendItem();
				public:

					/// <summary>
					/// 获取名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 设置名称
					/// </summary>
					/// <param name="strName">名称</param>
					/// <returns></returns>
					virtual ev_void setName(const EVString& strName);

					/// <summary>
					/// 获取要素风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>要素风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getFeatureSymbol() const;

					/// <summary>
					/// 设置要素风格
					/// </summary>
					/// <param name="pSymbol">要素风格</param>
					/// <returns></returns>
					virtual ev_void setFeatureSymbol(EarthView::World::Spatial::Display::ISymbol * pSymbol);

					/// <summary>
					/// 获取要素几何类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>要素几何类型</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;

					/// <summary>
					/// 设置要素几何类型
					/// </summary>
					/// <param name="type">要素几何类型</param>
					/// <returns></returns>
					virtual ev_void setGeometryType(EarthView::World::Spatial::Geometry::EVGeometryType type);
					
					/// <summary>
					/// 获取图例对应的数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>图例对应的数据集名称</returns>
					virtual EVString getDatasetName() const;

					/// <summary>
					/// 设置图例对应的数据集名称
					/// </summary>
					/// <param name="strName">图例对应的数据集名称</param>
					/// <returns></returns>
					virtual ev_void setDatasetName(EVString strName);

					/// <summary>
					/// 设置图例项的透明度
					/// </summary>
					/// <param name="nValue">透明值</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(ev_uint8 nValue);

					/// <summary>
					/// 获取图例项的透明值
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明值</returns>
					virtual ev_uint8 getTransparentValue() const;

					/// <summary>
					/// 判断是否是父项（在复杂专题图情况下，有父项和子项之分）
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否是父项</returns>
					virtual  ev_bool isParentItem() const;

					/// <summary>
					/// 设置是否是父项
					/// </summary>
					/// <param name="bParent">是否是父项</param>
					/// <returns></returns>
					virtual ev_void setParentItem(const ev_bool bParent);

					/// <summary>
					/// 克隆图例项
					/// </summary>
					/// <param name=""></param>
					/// <returns>克隆的对象</returns>
					virtual _extfree EarthView::World::Spatial::Carto::ILegendItem *clone() const;

					/// <summary>
					/// 从xml元素中恢复图例的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 把图例的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

				protected:
					ILegendItem();
             ev_private:
					ILegendItem( EarthView::World::Core::CNameValuePairList *pList );
				private:
					ILegendItem(ILegendItem & obj);
				};

				class EV_INTERFACE_DLL ILegendItemVector :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name="c"></param>
					/// <returns></returns>
					virtual ~ILegendItemVector();
				public:

					/// <summary>
					/// 移除图列项
					/// </summary>
					/// <param name="c">图列项索引</param>
					/// <returns></returns>
					virtual ev_void removeLegendItem(const ev_int32 nIndex);

					/// <summary>
					/// 添加图列项
					/// </summary>
					/// <param name="pItem">图列项</param>
					/// <returns></returns>
					virtual ev_void addLegendItem(const EarthView::World::Spatial::Carto::ILegendItem * pItem);

					/// <summary>
					/// 获取图列项总数目
					/// </summary>
					/// <param name="pItem"></param>
					/// <returns>图列项数目</returns>
					virtual ev_int32 getItemCount();

					/// <summary>
					/// 获取父图列项数目
					/// </summary>
					/// <param name="pItem"></param>
					/// <returns>父图列项数目</returns>
					virtual ev_int32 getParentItemCount() const;

					/// <summary>
					/// 添加图列项
					/// </summary>
					/// <param name="pItem">图列项</param>
					/// <returns></returns>
					virtual  EarthView::World::Spatial::Carto::ILegendItem* getLegendItem(const ev_int32 nIndex);

					/// <summary>
					/// 添加不需要添加图例的数据集名称
					/// </summary>
					/// <param name="strName">数据集名称</param>
					/// <returns></returns>
					virtual ev_void addIgnoreDataset(EVString strName);

					/// <summary>
					/// 移除不需要添加图例的数据集名称
					/// </summary>
					/// <param name="strName">数据集名称</param>
					/// <returns></returns>
					virtual ev_bool removeIgnoreDataset(EVString strName);

					/// <summary>
					/// 获取不需要添加图例的数据集名称
					/// </summary>
					/// <param name="nIndex">数据集名称对应的索引</param>
					/// <returns></returns>
					virtual EVString getIgnoreDataset(ev_int32 nIndex);

					/// <summary>
					/// 获取不需要添加图例的数据集数目
					/// </summary>
					/// <param name="">是否被选择</param>
					/// <returns></returns>
					virtual ev_int32 getIgnoreDatasetCount();

					/// <summary>
					/// 清空不需要添加图例的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearIgnoreDataset();

					/// <summary>
					/// 判断是否是不需要添加图例的数据集
					/// </summary>
					/// <param name="strName">数据集名称</param>
					/// <returns></returns>
					virtual ev_bool isIgnoreDataset(EVString strName);

					/// <summary>
					/// 克隆图例项集合
					/// </summary>
					/// <param name=""></param>
					/// <returns>克隆的图例项集合</returns>
					virtual _extfree EarthView::World::Spatial::Carto::ILegendItemVector *clone() const;

					/// <summary>
					/// 清空所有图例项
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearAllItem();

					/// <summary>
					/// 从xml元素中恢复图例的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 把图例的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
				protected:
					ILegendItemVector();
			ev_private:
					ILegendItemVector( EarthView::World::Core::CNameValuePairList *pList );
				private:
					ILegendItemVector(ILegendItemVector& obj);
				};
			}
		}
	}
}

#endif

