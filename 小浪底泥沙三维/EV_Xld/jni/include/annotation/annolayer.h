#ifndef EARTHVIEW_WORLD_ANNOLAYER_COFING_H
#define EARTHVIEW_WORLD_ANNOLAYER_COFING_H
#include "annotation/config.h"
#include "spatialinterface/itheme.h"
#include "spatialinterface/ivectorlayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				class EV_ANNOTATION_EXPORTS CAnnoLayer
					: public EarthView::World::Spatial::Atlas::IVectorLayer
				{
				
				public:					
					virtual ~CAnnoLayer();
				public:
					/// <summary>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 获取与图层所关联的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// 获取数据集的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString getDatasetName();
					/// <summary>
					/// 获取数据集所在的数据源
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource();					
					/// <summary>
					/// 图层选择
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();
					/// <summary>
					/// 设置图层的选择集
					/// </summary>
					/// <param name="selection">图层的选择集</param>
					/// <returns></returns>
					virtual ev_void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection);
					/// <summary>
					/// 获取图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层选择</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();
					/// <summary>
					/// 获取图层的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 设置图层的名称
					/// </summary>
					/// <param name="name">图层名称</param>
					/// <returns></returns>
					virtual ev_void setName( const EVString &name );
					/// <summary>
					/// 获取图层的描述信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>描述信息</returns>
					virtual EVString getDescription() const;
					/// <summary>
					/// 设置图层的描述信息
					/// </summary>
					/// <param name="value">描述信息</param>
					/// <returns></returns>
					virtual ev_void setDescription(const EVString& value);
					/// <summary>
					/// 检测图层图层是否可以编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层可以编辑,则返回true,反之则否</returns>
					virtual ev_bool canEdit() const;
					/// <summary>
					/// 设置图层是否可以支持编辑
					/// </summary>
					/// <param name="can">如果为true,则图层可以编辑,反之则否</param>
					/// <returns></returns>
					virtual ev_void setCanEdit(ev_bool can);
					/// <summary>
					/// 检测图层是否正在被编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层正在编辑则返回true,反之则否</returns>
					virtual ev_bool isEditing() const;
					/// <summary>
					/// 设置图层是否正在编辑
					/// </summary>
					/// <param name="editing">如果为true,则设置图层正在编辑,反之则否</param>
					/// <returns></returns>
					virtual ev_void setEditing(ev_bool editing);
					/// <summary>
					/// 检测图层是否可视
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层可视则返回true,反之则否</returns>
					virtual ev_bool isVisible() const;
					/// <summary>
					/// 设置图层是否可视
					/// </summary>
					/// <param name="visible">如果为true,则图层可视,反之则否</param>
					/// <returns></returns>
					virtual ev_void setVisible(ev_bool visible);
					/// <summary>
					/// 检测图层是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果有效则返回true,反之则否</returns>
					virtual ev_bool isValid() const;

					/// <summary>
					/// 判断图层是否支持选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isSelectable() const;
					/// <summary>
					/// 设置图层是否支持选择
					/// </summary>
					/// <param name="selectable">是否可选</param>
					/// <returns></returns>
					virtual ev_void setSelectable(ev_bool selectable);
					/// <summary>
					/// 检测图层绘制时是否忽略比例尺的因素
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果忽略,则返回true,反之则否</returns>
					virtual ev_bool ignoreScale() const;
					/// <summary>
					/// 设置图层的绘制是否忽略比例尺的因素
					/// </summary>
					/// <param name="bIgnore">是否忽略</param>
					/// <returns></returns>
					virtual ev_void setIgnoreScale( _in ev_bool bIgnore );
					/// <summary>
					/// 获取最大显示比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺</returns>
					virtual ev_real64 getDisplayMaxScale() const;
					/// <summary>
					/// 设置最大显示比例尺
					/// </summary>
					/// <param name="scale">比例尺</param>
					/// <returns></returns>
					virtual ev_void setDisplayMaxScale(ev_real64 scale);
					/// <summary>
					/// 获取最小显示比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺</returns>
					virtual ev_real64 getDisplayMinScale() const;
					/// <summary>
					/// 设置最小显示比例尺
					/// </summary>
					/// <param name="scale">比例尺</param>
					/// <returns></returns>
					virtual ev_void setDisplayMinScale(ev_real64 scale);
					/// <summary>
					/// 获取图层的坐标系统
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;
					/// <summary>
					/// 设置图层的坐标系统
					/// </summary>
					/// <param name="sr">坐标系统</param>
					/// <returns></returns>
					virtual ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr );
					/// <summary>
					/// 设置图层的透明度
					/// </summary>
					/// <param name="transparent">透明值</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(ev_uint8 transparent);
					/// <summary>
					/// 获取图层的透明值
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明值</returns>
					virtual ev_uint8 getTransparentValue() const;
					/// <summary>
					/// 获取图层的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层范围</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;                    
					/// <summary>
					/// 绘制图层
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="type">绘制类型</param>
					/// <returns></returns>
					virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
					/// <summary>
					/// 图层的复制,内存外部释放
					/// </summary>
					/// <param name="sr">参考坐标系</param>
					/// <returns>图层</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;

					virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset * dataset);
					/// <summary>
					/// 把图层的信息保存到流中
					/// </summary>
					/// <param name="steam">导出流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
					/// <summary>
					/// 从xml中恢复图层的配置
					/// </summary>
					/// <param name="element">xml要素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把图层的信息导出到xml中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml要素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 设置图层显示过滤条件
					/// </summary>
					/// <param name="filter">过滤条件</param>
					/// <returns></returns>

					virtual ev_void setDisplayFilter(const EVString & filter);
					/// <summary>
					/// 获取图层显示过滤条件
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回过滤条件</returns>

					virtual EVString getDisplayFilter() const;
ev_private:
					CAnnoLayer( EarthView::World::Core::CNameValuePairList *pList );
ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				public:
					CAnnoLayer();
				private:
					ev_void initQueryFilter(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, EarthView::World::Spatial::Display::ISpatialDisplay* display);
					C_DISABLE_COPY( CAnnoLayer )
				private:
					/// <summary>
					/// 图层名称
					/// </summary>
					EVString m_szLayerName;
					/// <summary>
					/// 描述信息
					/// </summary>
					EVString m_szDescription;
					/// <summary>
					/// 图层是否在编辑
					/// </summary>
					ev_bool m_bIsEditing;
					/// <summary>
					/// 是否可见
					/// </summary>
					bool m_bIsVisible;
					/// <summary>
					/// 是否有效
					/// </summary>
					bool m_bIsValid;
					/// <summary>
					/// 图层是否可选
					/// </summary>
					bool m_bIsSelectable;
					/// <summary>
					/// 是否按比例尺显示
					/// </summary>
					ev_bool m_bIgnoreScale;
					/// <summary>
					/// 最小显示比例尺
					/// </summary>
					ev_real64 m_dDisplayMinScale;
					/// <summary>
					/// 最大显示比例尺
					/// </summary>
					ev_real64 m_dDisplayMaxScale;
					/// <summary>
					/// 参考坐标系
					/// </summary>
					EarthView::World::Spatial::Geometry::ISpatialReference* m_pSpatialReference;
					/// <summary>
					/// 数据(数据源)
					/// </summary>
					EarthView::World::Spatial::GeoDataset::IDataset* mpData;
					/// <summary>
					/// 是否显示提示
					/// </summary>
					bool m_bShowTip;
					/// <summary>
					/// 图层选择要素集合
					/// </summary>
					EarthView::World::Spatial::Atlas::ILayerSelection* m_pSelectionSet;
					/// <summary>
					/// 图层选择要素集合的同步锁
					/// </summary>
					mutable EarthView::World::Core::CReadWriteLock mSelectionLock;
					/// <summary>
					/// 图层显示过滤
					/// </summary>
					EVString m_szFilter;
					//0-100
					//0:完全不透明
					//100:完全透明
					ev_uint8 m_nTransparent;
					//图层的范围
					EarthView::World::Spatial::Geometry::IEnvelope* mpSpatialReferenceEnve;
				};
				class EV_ANNOTATION_EXPORTS CAnnoLayerFactory: public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				public:
					CAnnoLayerFactory();
					~CAnnoLayerFactory();
				public:
					/// <summary>
					/// 获取工厂类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工厂类型</returns>
					
					EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层</returns>
					
					_extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 从xml要素中恢复一个图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层</returns>
					
					_extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 删除图层实例
					/// </summary>
					/// <param name="layer">待删除的图层</param>
					/// <returns>如果删除成功则返回true,反之则否</returns>
					
					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				ev_private:
					CAnnoLayerFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CAnnoLayerFactory );
				private:
					EarthView::World::Spatial::Atlas::EVLayerType m_eLayerType;
				};
			}
		}
	}
}

#endif 