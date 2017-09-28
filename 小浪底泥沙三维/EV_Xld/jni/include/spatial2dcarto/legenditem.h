#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_LEGENDITEM_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_LEGENDITEM_H

#include "spatialinterface/isymbol.h"
#include "spatialinterface/igeometry.h"
#include "spatial2dcarto/cartoconfig.h"
#include "spatialinterface/ilegenditem.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/imapframe.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				class CLegendItemVector;
				/// <summary>
				/// 图例项类
				/// </summary>
				class EV_SPATIAL2DCARTO_DLL CLegendItem :
					public ILegendItem
				{
					friend class CLegendItemVector;
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
					/// 获取图例名称
					/// </summary>
					/// <param name="c"></param>
					/// <returns>图例名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 设置图例名称
					/// </summary>
					/// <param name="c">图例名称</param>
					/// <returns></returns>
					virtual ev_void setName(_in const EVString& strName);

					/// <summary>
					/// 获取图例风格
					/// </summary>
					/// <param name="c">图例风格</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getSymbol() const;

					/// <summary>
					/// 设置图例风格
					/// </summary>
					/// <param name="c">图例风格</param>
					/// <returns>名称</returns>
					virtual ev_void setSymbol(_in EarthView::World::Spatial::Display::ISymbol * pSymbol);

					/// <summary>
					/// 获取图例几何类型
					/// </summary>
					/// <param name="c">图例几何类型</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;

					/// <summary>
					/// 设置图例几何类型
					/// </summary>
					/// <param name="type">图例几何类型</param>
					/// <returns></returns>
					virtual ev_void setGeometryType(_in EarthView::World::Spatial::Geometry::EVGeometryType type);

					/// <summary>
					/// 获取图例对应的图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>图例对应的图层</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* getLayer();

					/// <summary>
					/// 设置图例对应的图层
					/// </summary>
					/// <param name="pLayer">图层对象</param>
					/// <returns></returns>
					virtual ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* pLayer);

					/// <summary>
					/// 设置图例项的透明度
					/// </summary>
					/// <param name="nValue">透明值</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(_in ev_uint8 nValue);

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
					virtual ev_void setParentItem(_in const ev_bool bParent);

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
					private:
					ev_bool isSymbolChanged(ev_real64 dScale);
					ev_void init();
				ev_private:
					CLegendItem( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY(CLegendItem)	
				private:
					EarthView::World::Spatial::Geometry::EVGeometryType m_geometryType;
					EVString m_strName;
					EarthView::World::Spatial::Display::ISymbol *m_pFeatureSymbol;
					ev_uint8 m_nTransValue;
					ev_bool m_bParent;
					EarthView::World::Spatial::Atlas::ILayer* m_pLayer;
					//用于记录图层信息的
					ev_int32 m_nLayerIndex;
					ev_bool m_bScaleTheme;
					ev_real64 m_dMaxScale;
					ev_real64 m_dMinScale;
				};

				/// <summary>
				/// 图例项容器类
				/// </summary>
				class  CLegendItemVector : public EarthView::World::Core::CAllocatedObject
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
					 /// 创建图例项(在内部创建，自动添加到图例容器中)
					 /// </summary>
					 /// <param name="pLayer">需要创建图例项的图层</param>
					 /// <returns></returns>
					 ev_void createLegendItem(_in EarthView::World::Spatial::Atlas::ILayer* pLayer);

					 /// <summary>
					 /// 添加图列项(在外部创建，添加到图例容器中)
					 /// </summary>
					 /// <param name="pItem">图列项</param>
					 /// <returns></returns>
					 ev_void addLegendItem(_in const EarthView::World::Spatial::Carto::ILegendItem * pItem);

					 /// <summary>
					 /// 移除图列项(按索引)
					 /// </summary>
					 /// <param name="c">图列项索引</param>
					 /// <returns></returns>
					 ev_void removeLegendItem(_in const ev_int32 nIndex);

					 /// <summary>
					 /// 移除图列项(按图列项对应的图层)
					 /// </summary>
					 /// <param name="pLayer">图列项对应的图层</param>
					 /// <returns></returns>
					 ev_void removeLegendItem(_in EarthView::World::Spatial::Atlas::ILayer* pLayer);

					 /// <summary>
					 /// 获取图列项总数目
					 /// </summary>
					 /// <param name="pItem"></param>
					 /// <returns>图列项数目</returns>
					 ev_int32 getItemCount();

					 /// <summary>
					 /// 获取父图列项数目
					 /// </summary>
					 /// <param name="pItem"></param>
					 /// <returns>父图列项数目</returns>
					 ev_int32 getParentItemCount() const;

					 /// <summary>
					 /// 获取图列项
					 /// </summary>
					 /// <param name="pItem">图列项的索引</param>
					 /// <returns></returns>
					 ILegendItem* getLegendItem(_in const ev_int32 nIndex);

					 /// <summary>
					 /// 标记不需要添加图例的图层
					 /// </summary>
					 /// <param name="pLayer">不需要添加图例的图层</param>
					 /// <returns></returns>
					 ev_void flagIgnoreLayer(_in EarthView::World::Spatial::Atlas::ILayer* pLayer);

					 /// <summary>
					 /// 清空不需要添加图例的图层的标记
					 /// </summary>
					 /// <param name=""></param>
					 /// <returns></returns>
					 ev_void clearIgnoreLayer();

					 /// <summary>
					 /// 获取不需要添加图例的图层数目
					 /// </summary>
					 /// <param name=""></param>
					 /// <returns>不需要添加图例的图层数目</returns>
					 ev_int32 getIgnoreLayerCount();

					 /// <summary>
					 /// 判断是否是不需要添加图例的图层
					 /// </summary>
					 /// <param name="pLayer">进行判断的图层</param>
					 /// <returns>是返回true,不是返回false</returns>
					 ev_bool isIgnoreLayer(_in EarthView::World::Spatial::Atlas::ILayer* pLayer) const;

					 /// <summary>
					 /// 获取不需要添加图例的图层
					 /// </summary>
					 /// <param name="nIndex">不需要添加图例的图层索引</param>
					 /// <returns>不需要添加图例的图层</returns>
					 virtual EarthView::World::Spatial::Atlas::ILayer* getIgnoreLayer(ev_int32 nIndex) const;
					 
					 /// <summary>
					 /// 移除不需要添加图例的图层
					 /// </summary>
					 /// <param name="pLayer">不需要添加图例的图层索引</param>
					 /// <returns></returns>
					 virtual ev_void removeIgnoreLayer(ev_int32 nIndex);
					 /// <summary>
					 /// 清空所有图例项
					 /// </summary>
					 /// <param name=""></param>
					 /// <returns></returns>
					 ev_void clearAllItem();

					 /// <summary>
					 /// 克隆图例项集合
					 /// </summary>
					 /// <param name=""></param>
					 /// <returns>克隆的图例项集合</returns>
					 _extfree EarthView::World::Spatial::Carto::CLegendItemVector *clone() const;

					 /// <summary>
					 /// 从xml元素中恢复图例的配置
					 /// </summary>
					 /// <param name="element">xml元素</param>
					 /// <returns></returns>
					 ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					 /// <summary>
					 /// 把图例的配置保存到xml元素中
					 /// </summary>
					 /// <param name=""></param>
					 /// <returns>xml元素</returns>
					 EarthView::World::Core::CXmlElement toXmlElement() const;

					 /// <summary>
					 /// 设置图例对应的地图
					 /// </summary>
					 /// <param name="pMap">图例对应的地图</param>
					 /// <returns></returns>
					 ev_void setMapFrame(EarthView::World::Spatial::Carto::IMapFrame *pMapFrame);

					 /// <summary>
					 /// 判断多比例尺专题图是否发生变化
					 /// </summary>
					 /// <param name=""></param>
					 /// <returns>如果多比例尺专题图发生了变化，返回true,否则返回false</returns>
					 ev_bool isThemeScaleChanged();
				private:
				typedef ev_map<ev_int32, EVString> LayerSaveInfo;
				private:
					ev_void createRasterLegendItem(EarthView::World::Spatial::Atlas::ILayer* pLayer);
					ev_void createVectorLegndItem(EarthView::World::Spatial::Atlas::ILayer* pLayer);
					ev_void getSupportLegendLayer(EarthView::World::Spatial::Atlas::ILayer* pLayer, ev_vector <EarthView::World::Spatial::Atlas::ILayer*>& layersInfo) const;
					ev_void getAllSupportLegendLayers(EarthView::World::Spatial::Atlas::IMap* pMap, ev_vector <EarthView::World::Spatial::Atlas::ILayer*>& layersInfo) const;
					ev_bool matchLayer(CLegendItem *pItem, ev_vector <EarthView::World::Spatial::Atlas::ILayer*> layersInfo);
					ev_bool isLayersChanged(LayerSaveInfo layersInfo);
					EarthView::World::Spatial::Geometry::EVGeometryType getGeometryTypeBySymbol(_in EarthView::World::Spatial::Display::ISymbol * pSymbol);
				private:
					ev_vector<EarthView::World::Spatial::Atlas::ILayer*> m_ignoreLayers;
					ev_vector<EarthView::World::Spatial::Atlas::ILayer*> m_layersInfo;
					ev_vector<ILegendItem *> m_vectorItem;
					ev_vector<ev_int32> m_ignoreLayerIndex;
					LayerSaveInfo m_layersSaveInfo;
					EarthView::World::Spatial::Atlas::IMap* m_pMap;
					EarthView::World::Spatial::Carto::IMapFrame* m_pMapFrame;
					ev_int32 m_nValidLayerCount;
				};
			}
		}
	}
}
#endif
