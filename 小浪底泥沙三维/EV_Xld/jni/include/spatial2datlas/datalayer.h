#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_DATALAYER_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_DATALAYER_H
#include "spatialinterface/ivectorlayer.h"
#include "spatialinterface/istatisticstheme.h"
#include "spatialinterface/iqueryfilter.h"
#include "spatialinterface/ilayerselection.h"
#include "spatial2datlasconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ISpatialThemeScale;
}}}}
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class ILabelProperty;
			}}}}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeatureClass;
}}}}
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				///<summary>
				///图层类
				///</summary>
				class EV_SPATIAL2DATLAS_DLL CDataLayer : public EarthView::World::Spatial::Atlas::IVectorLayer
				{
				public:	
					///<summary>
					///默认构造函数
					///</summary>
					CDataLayer();
					///<summary>
					///析构函数
					///</summary>
					~CDataLayer();

				public:
					///////////// EarthView::World::Spatial::Atlas::ILayer //////////////////

					/// <summary>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 设置图层的透明度
					/// </summary>
					/// <param name="transparent">透明值</param>
					/// <returns></returns>
					ev_void setTransparentValue(ev_uint8 transparent);
					/// <summary>
					/// 获取图层的透明值
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明值</returns>
					ev_uint8 getTransparentValue() const;

					/// <summary>
					/// 获取图层名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					EVString getName() const;

					/// <summary>
					/// 设置图层名称
					/// </summary>
					/// <param name="value">图层名字</param>
					/// <returns></returns>
					
					ev_void setName(const EVString &name);

					/// <summary>
					/// 获取图层描述信息
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					EVString getDescription() const;

					/// <summary>
					/// 设置图层描述信息
					/// </summary>
					/// <param name="value">图层描述信息</param>
					/// <returns></returns>
					
					ev_void setDescription(const EVString& value);

					/// <summary>
					/// 获取是否可编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_bool canEdit() const;

					/// <summary>
					/// 获取是否在编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_bool isEditing() const;

					/// <summary>
					/// 设置是否编辑
					/// </summary>
					/// <param name="editing">是否编辑</param>
					/// <returns></returns>
					/// <memo>必须在图层可编辑状态下才有效</memo>
					ev_void setEditing(ev_bool editing);

					/// <summary>
					/// 是否可见
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_bool isVisible() const;

					/// <summary>
					/// 设置是否可见
					/// </summary>
					/// <param name="visible">是否可见</param>
					/// <returns></returns>
					
					ev_void setVisible(ev_bool visible);

					/// <summary>
					/// 图层是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_bool isValid() const;
					

					/// <summary>
					/// 图层是否可选
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_bool isSelectable() const;

					/// <summary>
					/// 设置图层是否可选
					/// </summary>
					/// <param name="selected">是否可选</param>
					/// <returns></returns>
					
					ev_void setSelectable(ev_bool selected);

					/// <summary>
					/// 是否按比例尺显示
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_bool ignoreScale() const;

					/// <summary>
					/// 设置是否按比例尺显示
					/// </summary>
					/// <param name="bIgnore">是否忽略</param>
					/// <returns></returns>
					
					ev_void setIgnoreScale( _in ev_bool bIgnore );

					/// <summary>
					/// 获取最大显示比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_real64 getDisplayMaxScale() const;

					/// <summary>
					/// 设置最大显示比例尺
					/// </summary>
					/// <param name="displayMaxScale">最大显示比例尺</param>
					/// <returns></returns>
					
					ev_void setDisplayMaxScale( _in ev_real64 displayMaxScale );
					
					/// <summary>
					/// 获取最小显示比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_real64 getDisplayMinScale() const;

					/// <summary>
					/// 设置最小显示比例尺
					/// </summary>
					/// <param name="displayMinScale">最小显示比例尺</param>
					/// <returns></returns>
					
					ev_void setDisplayMinScale(_in ev_real64 displayMinScale );

					/// <summary>
					/// 获取图层显示的参考坐标系
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;

					/// <summary>
					/// 设置图层显示的参考坐标系
					/// </summary>
					/// <param name="sr">参考坐标系</param>
					/// <returns></returns>
					
					ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference *sr );
					/// <summary>
					/// 获取图层的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层范围</returns>
					const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;
					/// <summary>
					/// 绘制图层
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="type">绘制类型</param>
					/// <returns></returns>
					ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
					/// <summary>
					/// 图层的复制,内存外部释放
					/// </summary>
					/// <param name="sr">参考坐标系</param>
					/// <returns>图层</returns>
					
					_extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
					/// <summary>
					/// 把图层的信息保存到流中
					/// </summary>
					/// <param name="steam">导出流</param>
					/// <returns></returns>
					
					ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
					/// <summary>
					/// 从xml中恢复图层的配置
					/// </summary>
					/// <param name="element">xml要素</param>
					/// <returns></returns>
					
					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把图层的信息导出到xml中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml要素</returns>
					
					EarthView::World::Core::CXmlElement toXmlElement() const;
					////////////// EarthView::World::Spatial::Atlas::IVectorLayer //////////////
					/// <summary>
					/// 获取数据源
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					EarthView::World::Spatial::GeoDataset::IDataset* getDataset();

					/// <summary>
					/// 设置数据源
					/// </summary>
					/// <param name="dataset">数据源</param>
					/// <returns></returns>
					
					virtual ev_void setDataset( EarthView::World::Spatial::GeoDataset::IDataset * ref_dataset );
					/// <summary>
					/// 获取数据集的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString getDatasetName();
					/// <summary>
					/// 获取提示值的字段
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					EVString getDisplayField() const;
					/// <summary>
					/// 设置提示值的字段
					/// </summary>
					/// <param name="fieldName">提示值的字段</param>
					/// <returns></returns>
					
					ev_void setDisplayField(const EVString& fieldName);

					/// <summary>
					/// 获取专题图
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					EarthView::World::Spatial::Theme::ITheme * getTheme() const;

					/// <summary>
					/// 获取多比例尺专题图
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ISpatialThemeScale * getSpatialThemeScale() const;
					/// <summary>
					/// 设置专题图
					/// </summary>
					/// <param name="theme">专题图</param>
					/// <returns></returns>
					
					ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );

					/// <summary>
					/// 获取是否显示提示
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_bool isShowTip() const;

					/// <summary>
					/// 设置是否显示提示
					/// </summary>
					/// <param name="show">是否显示</param>
					/// <returns></returns>
					
					ev_void setShowTip(ev_bool show);

					/// <summary>
					/// 图层选择
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					
					ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void clearSelection();

					/// <summary>
					/// 获取图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层选择</returns>
					
					EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();

					////////////// CDataLayer ///////////////
					/// <summary>
					/// 获取图层标签属性
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层标签属性</returns>
					
					EarthView::World::Spatial::Display::ILabelProperty * getLayerLabelProperty() const;

					/// <summary>
					/// 设置图层显示过滤条件
					/// </summary>
					/// <param name="filter">过滤条件</param>
					/// <returns></returns>
					
					ev_void setDisplayFilter(const EVString & filter);
					/// <summary>
					/// 获取图层显示过滤条件
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回过滤条件</returns>
					
					EVString getDisplayFilter() const;
				ev_internal:
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );	
				ev_private:
					CDataLayer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CDataLayer );
				protected:
					ev_void initQueryFilter( EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, 
						EarthView::World::Spatial::Display::ISpatialDisplay* display, 
						ev_bool bExtent = false);
					ev_void selectBufferLayer( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );
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
					EarthView::World::Spatial::GeoDataset::IDataset* m_pData;
					EVString mszDataSourceName;
					EVString mszDataName;
					EarthView::World::Spatial::Geometry::EVGeometryType mtGeometryType;
					/// <summary>
					/// 显示字段
					/// </summary>
					EVString m_szDisplayFieldName;
					/// <summary>
					/// 专题图
					/// </summary>
					EarthView::World::Spatial::Theme::ITheme* m_pTheme;
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
					/// 图层标签属性
					/// </summary>
					EarthView::World::Spatial::Display::ILabelProperty* m_pLabelLayerProperty;
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

					EarthView::World::Spatial::Atlas::ISpatialThemeScale* mpSpatialThemeScale;
				};
			}
		}
	}
}
#endif
