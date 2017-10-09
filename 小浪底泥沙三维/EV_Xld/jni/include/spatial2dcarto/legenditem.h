#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_LEGENDITEM_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_LEGENDITEM_H

#include "spatialinterface/isymbol.h"
#include "spatialinterface/igeometry.h"
#include "spatial2dcarto/cartoconfig.h"
#include "spatialinterface/ilegendItem.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/ilayer.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				/// <summary>
				/// 图例项类
				/// </summary>
				class EV_SPATIAL2DCARTO_DLL CLegendItem :
					public ILegendItem
				{
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="c"></param>
					/// <returns></returns>
					CLegendItem();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name="c"></param>
					/// <returns></returns>
					virtual ~CLegendItem();

				public:

					/// <summary>
					/// 获取名称
					/// </summary>
					/// <param name="c"></param>
					/// <returns>名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 设置名称
					/// </summary>
					/// <param name="c">名称</param>
					/// <returns></returns>
					virtual ev_void setName(const EVString& strName);

					/// <summary>
					/// 获取要素风格
					/// </summary>
					/// <param name="c">图例风格</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getFeatureSymbol() const;

					/// <summary>
					/// 设置要素风格
					/// </summary>
					/// <param name="c">图例风格</param>
					/// <returns>名称</returns>
					virtual ev_void setFeatureSymbol(EarthView::World::Spatial::Display::ISymbol * pSymbol);

					/// <summary>
					/// 获取要素风格
					/// </summary>
					/// <param name="c">图例风格</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;

					/// <summary>
					/// 设置要素风格
					/// </summary>
					/// <param name="c">要素风格</param>
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
					ev_void setTransparentValue(ev_uint8 nValue);

					/// <summary>
					/// 获取图例项的透明值
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明值</returns>
					ev_uint8 getTransparentValue() const;

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

				ev_private:
					CLegendItem( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ev_void init();
					C_DISABLE_COPY(CLegendItem)	
				private:
					EarthView::World::Spatial::Geometry::EVGeometryType m_geometryType;
					EVString m_strName;
					EarthView::World::Spatial::Display::ISymbol *m_pFeatureSymbol;
					ev_int32 m_nLayerIndex;
					ev_uint8 m_nTransValue;
					ev_bool m_bParent;
					EVString m_datasetname;
				
				};


				/// <summary>
				/// 图例项容器类
				/// </summary>
				class EV_SPATIAL2DCARTO_DLL CLegendItemVector : 
					public ILegendItemVector
				{
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLegendItemVector();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CLegendItemVector();
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
					virtual ev_void addLegendItem(const ILegendItem * pItem);

					/// <summary>
					/// 获取图列项数目
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
					virtual ILegendItem* getLegendItem(const ev_int32 nIndex);

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
					/// <returns>移除成功返回true,否则返回false</returns>
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
					/// 清空所有图例项
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearAllItem();

					/// <summary>
					/// 克隆图例项集合
					/// </summary>
					/// <param name=""></param>
					/// <returns>克隆的图例项集合</returns>
					virtual _extfree EarthView::World::Spatial::Carto::ILegendItemVector *clone() const;

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

				ev_private:
					CLegendItemVector( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY(CLegendItemVector)	
				private:
					ev_vector<ILegendItem *> m_vectorItem;
					ev_vector<EVString> m_ignoreDataset;
				};

				class EV_SPATIAL2DCARTO_DLL CLegendItemManager : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLegendItemManager();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CLegendItemManager();
				public:

					/// <summary>
					/// 创建图例项
					/// </summary>
					/// <param name="pItemVector">将创建的图例项添加到的目标图例容器</param>
					/// <param name="pLayer">需要创建图例项的图层</param>
					/// <returns></returns>
					ev_void createLegendItem(ILegendItemVector *pItemVector, EarthView::World::Spatial::Atlas::ILayer* pLayer);

					/// <summary>
					/// 从图例项容器移除图例项
					/// </summary>
					/// <param name="pItemVector">图例容器</param>
					/// <param name="pLayer">需要移除的图例项对应的图层</param>
					/// <returns>元素类型</returns>
					ev_void removeLegendItem(ILegendItemVector *pItemVector, EarthView::World::Spatial::Atlas::ILayer* pLayer);
				private:
					ev_void createRasterLegendItem(ILegendItemVector *pItemVector, EarthView::World::Spatial::Atlas::ILayer* pLayer);
					ev_void createVectorLegndItem(ILegendItemVector *pItemVector, EarthView::World::Spatial::Atlas::ILayer* pLayer);
				};
			}
		}
	}
}
#endif
