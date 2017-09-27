#ifndef EARTHVIEW_WORLD_SPATIAL_WFSLAYEREX_H
#define EARTHVIEW_WORLD_SPATIAL_WFSLAYEREX_H
#include "spatial2dserver/config.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/isymbol.h"
#include "spatialserverclient/weblayer.h"
#include "spatialinterface/ivectorlayer.h"
#include "spatialinterface/ilayerselection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				class CWFSLayerSelection;
				
				class EV_2DWMS_DLL CWFSLayer
					: public EarthView::World::Spatial::Atlas::IVectorLayer
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CWFSLayer();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CWFSLayer();
					/// <summary>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 获取数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// 获取缓存数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回数据集</returns>
					EarthView::World::Spatial::GeoDataset::IDataset* getCacheDataset();
					/// <summary>
					/// 获取显示字段名
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回字段名</returns>
					virtual EVString getDisplayField() const;
					/// <summary>
					/// 设置显示字段
					/// </summary>
					/// <param name="fieldName">显示字段</param>
					/// <returns></returns>
					virtual ev_void setDisplayField(const EVString& fieldName);
					/// <summary>
					/// 获取专题图信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回专题图信息</returns>
					virtual EarthView::World::Spatial::Theme::ITheme * getTheme() const;
					/// <summary>
					/// 设置专题图信息
					/// </summary>
					/// <param name="theme">专题图信息</param>
					/// <returns></returns>
					virtual ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );
					/// <summary>
					/// 获取图层标签属性
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层标签属性</returns>
					virtual EarthView::World::Spatial::Display::ILabelProperty * getLayerLabelProperty() const;
					/// <summary>
					/// 加载要素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回数据集</returns>
					ev_void loadFeatures(ev_int32 * finishNum);
					/// <summary>
					/// 获取数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回数据集</returns>
					virtual void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* dataset);

					/// <summary>
					/// 获取图层名称
					/// </summary>
					/// <returns></returns>
					virtual EVString getName() const;

					/// <summary>
					/// 设置图层名称
					/// </summary>
					/// <param name="name">图层名称</param>
					/// <returns></returns>
					virtual ev_void setName(_in  const EVString &name );

					/// <summary>
					/// 获取图层描述信息
					/// </summary>
					/// <returns>图层描述</returns>
					virtual EVString getDescription() const;

					/// <summary>
					/// 设置图层描述信息
					/// </summary>
					/// <param name="value">图层描述</param>
					/// <returns></returns>
					virtual ev_void setDescription(_in const EVString& value);

					/// <summary>
					/// 是否可编辑
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool canEdit() const;

					/// <summary>
					/// 是否正在编辑
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool isEditing() const;

					/// <summary>
					/// 设置编辑
					/// </summary>
					/// <param name="editing">是否编辑</param>
					/// <returns></returns>
					virtual ev_void setEditing(_in ev_bool editing);

					/// <summary>
					/// 获取是否可见
					/// </summary>
					/// <returns>true表示可见</returns>
					virtual ev_bool isVisible() const;

					/// <summary>
					/// 设置是否可见
					/// </summary>
					/// <param name="visible">true表示可见</param>
					/// <returns></returns>
					virtual ev_void setVisible(_in ev_bool visible);

					/// <summary>
					/// 获取是否可用
					/// </summary>
					/// <returns>true表示可用</returns>
					virtual ev_bool isValid() const;

					/// <summary>
					/// 获取是否可选
					/// </summary>
					/// <returns>true表示可选</returns>
					virtual ev_bool isSelected() const;

					/// <summary>
					/// 设置是否可选
					/// </summary>
					/// <param name="selected">true表示可选</param>
					/// <returns></returns>
					virtual ev_void setSelectable(_in ev_bool selected);
					/// <summary>
					/// 判断图层是否支持选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isSelectable() const;
					/// <summary>
					/// 获取是否忽略比例尺
					/// </summary>
					/// <returns>true表示忽略比例尺</returns>
					virtual ev_bool ignoreScale() const;

					/// <summary>
					/// 设置是否忽略比例尺
					/// </summary>
					/// <param name="bIgnore">true表示忽略比例尺</param>
					/// <returns></returns>
					virtual ev_void setIgnoreScale( _in ev_bool bIgnore );

					/// <summary>
					/// 获取最大显示比例尺
					/// </summary>
					/// <returns>最大显示比例尺分母</returns>
					virtual ev_real64 getDisplayMaxScale() const;

					/// <summary>
					/// 设置最大显示比例尺
					/// </summary>
					/// <param name="scale">最大显示比例尺分母</param>
					/// <returns></returns>
					virtual ev_void setDisplayMaxScale(_in ev_real64 scale);

					/// <summary>
					/// 获取最小显示比例尺
					/// </summary>
					/// <returns>最小显示比例尺分母</returns>
					virtual ev_real64 getDisplayMinScale() const;

					/// <summary>
					/// 设置最小显示比例尺
					/// </summary>
					/// <param name="scale">最小显示比例尺分母</param>
					/// <returns></returns>
					virtual ev_void setDisplayMinScale(_in ev_real64 scale);

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
					/// 渲染
					/// </summary>
					/// <param name="display">渲染设备信息</param>
					/// <param name="type">渲染类型</param>
					/// <returns>成功返回true</returns>
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
					/// <summary>
					/// 获取包围盒信息
					/// </summary>
					/// <returns>包围盒对象指针，不需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent()const;
					/// <summary>
					/// 获取空间参考信息
					/// </summary>
					/// <returns>空间参考对象指针，不需释放</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;
					/// <summary>
					/// 设置空间参考
					/// </summary>
					/// <param name="sr">空间参考对象</param>
					/// <returns></returns>
					virtual ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr );
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
					/// 获取图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层选择</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();
					
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
					/// <summary>
					/// 克隆
					/// </summary>
					/// <returns>克隆对象指针</returns>
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
					/// <summary>
					/// 将当前图层生成xml描述
					/// </summary>
					/// <returns>xml</returns>
					virtual EVString toXML() const;
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
ev_private:
					CWFSLayer(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_void initQueryFilter( EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, EarthView::World::Spatial::Display::ISpatialDisplay* display );
					ev_uint8 m_TransparentValue;
					EarthView::World::Spatial::Theme::ITheme* m_pTheme;
					EVString mDatasetName;
					EVString mDatasourceName;

					EarthView::World::Spatial::Geometry::ISpatialReference* mpSRS;

					EarthView::World::Spatial::GeoDataset::IDataset* mpDataset;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpCacheFeatureClass;
					mutable EarthView::World::Core::CRecursiveMutex mCacheLock;

					EarthView::World::Spatial::Display::ILabelProperty* m_pLabelLayerProperty;

					ev_bool mbVisible;
					ev_bool mbSelectable;

					EarthView::World::Spatial::Atlas::EVLayerType mnLayerType;

					ev_bool	mbIgnoreScale;
					ev_real64 mdfMaxDisplayScale;
					ev_real64 mdfMinDisplayScale;

					EVString m_szFilter;
					EVString m_szDisplayFieldName;
					EVString mstrLayerName;
					EVString mstrDescription;
					mutable EarthView::World::Core::CReadWriteLock mSelectionLock;
					EarthView::World::Core::CRecursiveMutex mIteratorLock;

					CWFSLayerSelection *m_pSelectionSet;
				protected:
					C_DISABLE_COPY( CWFSLayer )
				};
				class EV_2DWMS_DLL CWFSLayerSelection : public EarthView::World::Spatial::Atlas::ILayerSelection
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CWFSLayerSelection();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CWFSLayerSelection();

				public:
					/// <summary>
					/// 获取选择集
					/// </summary>
					/// <param name=""></param>
					/// <returns>要素集合</returns>

					EarthView::World::Spatial::GeoDataset::IFeatureSelection * getSelection() const;
					/// <summary>
					/// 获取选择集的绘制风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>风格</returns>

					EarthView::World::Spatial::Display::ISymbol * getSelectionSymbol() const;
					/// <summary>
					/// 设置选择集的绘制风格
					/// </summary>
					/// <param name="symbol">风格</param>
					/// <returns></returns>

					ev_void setSelectionSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol );

ev_private:
					CWFSLayerSelection( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CWFSLayerSelection )

					EarthView::World::Spatial::GeoDataset::IFeatureSelection *m_pSelection;
					EarthView::World::Spatial::Display::ISymbol *m_pSymbol;
					ev_vector<ev_uint32> m_ids;
					friend class CWFSLayer;
				};
				class EV_2DWMS_DLL CWFSLayerFactory
					:public EarthView::World::Spatial::CWebLayerFactory
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CWFSLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CWFSLayerFactory();
ev_private:
					CWFSLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取工厂类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工厂类型</returns>
					
					EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// 创建图层实例
					/// </summary>
					/// <returns>图层对象指针，用相应图层类工厂析构</returns>
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 从xml结点要素还原图层对象
					/// </summary>
					/// <param name="element">xml结点对象</param>
					/// <returns>图层对象指针</returns>
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
				private:
					EarthView::World::Spatial::Atlas::EVLayerType m_eLayerType;
				};
			}
		}
	}
}

#endif