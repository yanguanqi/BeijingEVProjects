#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_DATALAYER_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_DATALAYER_H
#include "spatialinterface/ivectorlayer.h"
#include "spatialinterface/istatisticstheme.h"
#include "spatialinterface/ilabelproperty.h"
#include "spatialinterface/iqueryfilter.h"
#include "spatialinterface/ilayerselection.h"


#include "spatial2datlasconfig.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				///<summary>
				///图层label页的属性类
				///提供label页属性的设置和描述的方法
				///</summary>
				class EV_SPATIAL2DATLAS_DLL CLayerLabelProperty:
					public EarthView::World::Spatial::Display::ILabelProperty
				{
				public:
					CLayerLabelProperty();
					~CLayerLabelProperty();

				public:
					/// <summary>
					/// 图层注记是否可见
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_bool isVisible() const;

					/// <summary>
					/// 设置图层注记是否可见
					/// </summary>
					/// <param name="bVisible">是否可见</param>
					/// <returns></returns>
					
					ev_void setVisible( _in ev_bool bVisible );

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
					/// 获取最小比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_real64 getMinScale() const;

					/// <summary>
					/// 设置最小比例尺
					/// </summary>
					/// <param name="dMinScale">最小比例尺</param>
					/// <returns></returns>
					
					ev_void setMinScale( _in ev_real64 dMinScale );

					/// <summary>
					/// 获取最大比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_real64 getMaxScale() const;

					/// <summary>
					/// 设置最大比例尺
					/// </summary>
					/// <param name="dMaxScale">最大比例尺</param>
					/// <returns></returns>
					
					ev_void setMaxScale( _in ev_real64 dMaxScale );

					/// <summary>
					/// 检测标注是否在要素的上面
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果在要素上面返回true,反之则否</returns>
					ev_bool isOnTopOfFeature() const;
					/// <summary>
					/// 设置标注是否在要素之上
					/// </summary>
					/// <param name="bOnTop">如果为true,则在要素的上面,反之则否</param>
					/// <returns></returns>
					ev_void setOnTopOfFeature( ev_bool bOnTop );

					/// <summary>
					/// 判断标注是否一直平行于线
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果一直平行与线则返回true,反之则否</returns>
					ev_bool isParallelToLineAlways() const;
					/// <summary>
					/// 设置标注是否一直平行于线
					/// </summary>
					/// <param name="bParalle">如果为true,则标注一直平行于线,反之则否</param>
					/// <returns></returns>
					ev_void setParallelToLineAlways( ev_bool bParallel );

					/// <summary>
					/// 判断标注是否一直保持水平
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果始终保持水平,则返回true,反之则否</returns>
					ev_bool isHorizontalAlways() const;
					/// <summary>
					/// 设置标注是否保持水平
					/// </summary>
					/// <param name="bHorizontal">如果为true,则标注保持水平,反之则否</param>
					/// <returns></returns>
					ev_void setHorizontalAlways( ev_bool bHorizontal );

					/// <summary>
					/// 判断标注是否一直在面的内部
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果标注一直在面的内部则返回true,反之则否</returns>
					ev_bool isInPolygon() const;
					/// <summary>
					/// 设置标注是否一直面内部
					/// </summary>
					/// <param name="bIn">如果为true,则保持标注一直在面的内部,反之则否</param>
					/// <returns></returns>
					ev_void setInPolygon( ev_bool bIn );

					/// <summary>
					/// 获取标注与轴的关系
					/// </summary>
					/// <param name=""></param>
					/// <returns>字体与轴的关系</returns>
					EarthView::World::Spatial::Display::EVFontAndAxisRelationType getRelationOfFontAndAxis() const;
					/// <summary>
					/// 设置字体与轴的关系
					/// </summary>
					/// <param name="type">字体与轴的关系类型</param>
					/// <returns></returns>
					ev_void setRelationOfFontAndAxis( EarthView::World::Spatial::Display::EVFontAndAxisRelationType type );

					/// <summary>
					/// 设置文本风格
					/// </summary>
					/// <param name="pSymbol">文本风格</param>
					/// <returns></returns>
					ev_void setTextSymbol( const EarthView::World::Spatial::Display::ISymbol *pSymbol );
					/// <summary>
					/// 获取文本风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>文本风格</returns>
					EarthView::World::Spatial::Display::ISymbol *getTextSymbol() const;

					/// <summary>
					/// 设置标注的字段
					/// </summary>
					/// <param name="field">字段名称</param>
					/// <returns></returns>
					ev_void setField( const EVString &field );
					/// <summary>
					/// 获取标注的字段
					/// </summary>
					/// <param name=""></param>
					/// <returns>字段名称</returns>
					EVString getField() const;
					/// <summary>
					/// 设置分数标注
					/// </summary>
					/// <param name="faction">true为设置分数形式</param>
					/// <returns></returns>
					ev_void setFractionLabel( ev_bool fraction);
					/// <summary>
					/// 获取当前是否为分数标注
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果是分数形式返回true</returns>
					ev_bool getIsFractionLabel() const;
					/// <summary>
					/// 设置标注的字段(分子)
					/// </summary>
					/// <param name="field">字段名称</param>
					/// <returns></returns>
					ev_void setNumeratorField( const EVString &field );
					/// <summary>
					/// 获取标注的字段(分子)
					/// </summary>
					/// <param name=""></param>
					/// <returns>字段名称</returns>
					EVString getNumeratorField() const;
					/// <summary>
					/// 复制
					/// </summary>
					/// <param name=""></param>
					/// <returns>标注属性</returns>
					EarthView::World::Spatial::Display::ILabelProperty * clone() const;
					/// <summary>
					/// 从xml中恢复标注属性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把标注属性保存成xml要素
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml要素</returns>
					EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 把标注属性保存到流中
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
				ev_internal:
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
			ev_private:
					CLayerLabelProperty( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CLayerLabelProperty )

					/// <summary>
					/// 是否可见
					/// </summary>
					ev_bool m_bVisible;
					/// <summary>
					/// 是否按比例尺显示
					/// </summary>
					ev_bool m_bIgnoreScale;
					/// <summary>
					/// 最小比例尺
					/// </summary>
					ev_real64 m_dMinScale;
					/// <summary>
					/// 最大比例尺
					/// </summary>
					ev_real64 m_dMaxScale;
					/// <summary>
					/// 标注类型
					/// </summary>
					EarthView::World::Spatial::Display::EVLabelType m_eType;
					/// <summary>
					/// 点
					/// </summary>
					ev_bool m_bOnTopOfFeature;
					/// <summary>
					/// 线
					/// </summary>
					ev_bool m_bParallelAlways;
					/// <summary>
					/// 面
					/// </summary>
					ev_bool m_bHorizontalAlways;
					ev_bool m_bInPolygon;
					/// <summary>
					/// 线、面的共同属性
					/// </summary>
					EarthView::World::Spatial::Display::EVFontAndAxisRelationType m_eRelationType;
					/// <summary>
					/// 标注字段
					/// </summary>
					EVString m_szExpression;
					/// <summary>
					/// 标注风格
					/// </summary>
					EarthView::World::Spatial::Display::ISymbol *m_pSymbol;
					/// <summary>
					/// 标记是否分数形式
					/// </summary>
					ev_bool m_bIsFraction;
					/// <summary>
					/// 标注字段(分数注记时有效，作为分子)
					/// </summary>
					EVString m_szLabel_Numerator;
				};
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
					
					ev_void setDataset( EarthView::World::Spatial::GeoDataset::IDataset * ref_dataset );

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
					ev_void initQueryFilter( EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, EarthView::World::Spatial::Display::ISpatialDisplay* display );
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
					CLayerLabelProperty* m_pLabelLayerProperty;
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
			}
		}
	}
}
#endif
