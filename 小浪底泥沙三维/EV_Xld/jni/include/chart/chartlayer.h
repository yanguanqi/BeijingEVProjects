#ifndef EARTHVIEW_WORLD_CHART_CCHARTLAYER_H
#define EARTHVIEW_WORLD_CHART_CCHARTLAYER_H

#include "spatialinterface/ichartlayer.h"
#include "chartlayerexports.h"
#include "spatialinterface/irenderer.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/ispatialreference.h"
#include "chartoption.h"
#include "spatialinterface/ivectorlayer.h"
#include "chartdataset.h"
#include "spatialinterface/ilayerselection.h"
#include "color/rgbcolor.h"
#include "color/colorblend.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{			
			namespace Atlas
			{
				/// <summary>
				/// 海图图层选择集类
				/// </summary>
				class EVCHART_DLL CChartLayerSelection
					:public EarthView::World::Spatial::Atlas::ILayerSelection
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CChartLayerSelection();

				public:
					/// <summary>
					/// 获取要素选择集
					/// </summary>
					/// <returns>要素选择集对象指针，不需释放，只要进行了选择操作，不论有无选中要素，返回指针都非空</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection * getSelection() const;
					
					/// <summary>
					/// 获取选择集渲染风格，无实际操作，与接口一致
					/// </summary>
					/// <returns>返回空，不只有一种符号</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getSelectionSymbol() const
					{
						return NULL;
					}

					/// <summary>
					/// 设置选择集渲染风格，无实际操作，与接口一致
					/// </summary>
					/// <param name="symbol">渲染风格</param>
					/// <returns></returns>
					virtual ev_void setSelectionSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol )
					{
					}
					
					/// <summary>
					/// 获取选中点要素的渲染风格
					/// </summary>
					/// <returns>渲染风格对象指针，不需释放</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getPointSelectionSymbol() const;
					
					/// <summary>
					/// 设置选中线要素的渲染风格
					/// </summary>
					/// <param name="symbol">渲染风格</param>
					/// <returns></returns>
					virtual ev_void setPointSelectionSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					
					/// <summary>
					/// 获取选中线要素的渲染风格
					/// </summary>
					/// <returns>渲染风格对象指针，不需释放</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getLineSelectionSymbol() const;
					
					/// <summary>
					/// 设置选中线要素的渲染风格
					/// </summary>
					/// <param name="symbol">渲染风格</param>
					/// <returns></returns>
					virtual ev_void setLineSelectionSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					
					/// <summary>
					/// 获取选中面要素的渲染风格
					/// </summary>
					/// <returns>渲染风格对象指针，不需释放</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getAreaSelectionSymbol() const;
					
					/// <summary>
					/// 设置选中面要素的渲染风格
					/// </summary>
					/// <param name="symbol">渲染风格</param>
					/// <returns></returns>
					virtual ev_void setAreaSelectionSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol );

				ev_private:
					CChartLayerSelection( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CChartLayerSelection();
					
					EarthView::World::Spatial::Display::ISymbol* mpPointSymbol;
					EarthView::World::Spatial::Display::ISymbol* mpLineSymbol;
					EarthView::World::Spatial::Display::ISymbol* mpAreaSymbol;

					EarthView::World::Spatial::GeoDataset::IFeatureSelection* mpFeatureSelection;
					
					C_DISABLE_COPY( CChartLayerSelection )
					friend class CChartLayer;
				};
				
				class EVCHART_DLL NHChartClassControl : public EarthView::World::Core::CAllocatedObject
				{
					friend class CChartLayer;
				public:
					NHChartClassControl();
					NHChartClassControl(const NHChartClassControl& chartClassControl);
					NHChartClassControl& operator=(const NHChartClassControl& chartClassControl);
					ev_void setUseChartClassControl(ev_bool flag) {useChartClassControl = useChartClassControl;}
					ev_bool getUseChartClassControl() const {return useChartClassControl;}
					ev_void setHasSetColor(ev_bool flag) {hasSetColor = flag;}
					ev_bool getHasSetColor() const {return hasSetColor;}
					ev_void setScaleFactor(ev_uint32 value) {scaleFactor = value;}
					ev_uint32 getScaleFactor() const {return scaleFactor;}
					ev_void setCustomColor(const EarthView::World::Spatial::Display::CRgbColor& color);
					const EarthView::World::Spatial::Display::CRgbColor& getCustomColor() const {return customColor;}
					EarthView::World::Spatial::Display::EVColorBlendOperation getColorBlendMode() const {return mBlendMode;}
					ev_void setColorBlendMode(EarthView::World::Spatial::Display::EVColorBlendOperation mode) {mBlendMode = mode;}
ev_private:
					NHChartClassControl(EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_bool useChartClassControl;
					ev_bool hasSetColor;
					ev_uint32 scaleFactor;
					EarthView::World::Spatial::Display::CRgbColor customColor;
					EarthView::World::Spatial::Display::EVColorBlendOperation mBlendMode;
				};
				/// <summary>
				/// 海图图层类
				/// </summary>
				class EVCHART_DLL CChartLayer
					:public EarthView::World::Spatial::Atlas::IChartLayer
				{
					friend class CChartLayerFactory;
				public:
					/// <summary>
					/// 按条件选择要素
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <param name="type">操作类型</param>
					/// <returns></returns>
					virtual ev_void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter *filter,_in EarthView::World::Spatial::Atlas::EVSelectionResultType type );
					
					/// <summary>
					/// 清除选择
					/// </summary>
					/// <returns></returns>
					virtual ev_void clearSelection();
					
					/// <summary>
					/// 获取图层选择集
					/// </summary>
					/// <returns>图层选择集对象指针，不需释放</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();
					
					/// <summary>
					/// 获取图层类型
					/// </summary>
					/// <returns>图层类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					
					/// <summary>
					/// 获取关联数据集
					/// </summary>
					/// <returns>关联数据集对象指针，不需释放</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					
					/// <summary>
					/// 获取图层名称
					/// </summary>
					/// <returns>图层名称</returns>
					virtual EVString getName() const;
					
					/// <summary>
					/// 设置图层名称
					/// </summary>
					/// <param name="name">图层名称</param>
					/// <returns></returns>
					virtual ev_void setName(_in const EVString &name );

					/// <summary>
					/// 获取图层描述据
					/// </summary>
					/// <returns>图层描述</returns>
					virtual EVString getDescription() const;
					
					/// <summary>
					/// 设置图层描述
					/// </summary>
					/// <param name="value">图层描述</param>
					/// <returns></returns>
					virtual ev_void setDescription(_in const EVString& value);

					/// <summary>
					/// 是否可编辑
					/// </summary>
					/// <returns>false：不可编辑，恒定值</returns>
					virtual ev_bool canEdit() const;

					/// <summary>
					/// 是否正在编辑，与接口一致，无实际操作
					/// </summary>
					/// <returns>true表示正在编辑/false表示未在编辑</returns>
					virtual ev_bool isEditing() const;
					
					/// <summary>
					/// 设置编辑,与接口一致，无实际操作
					/// </summary>
					/// <param name="editing">true开始编辑/flase结束编辑</param>
					/// <returns></returns>
					virtual ev_void setEditing(_in ev_bool editing);
					
					/// <summary>
					/// 获取图层是否可用
					/// </summary>
					/// <returns>true表示图层可用/false表示不可用</returns>
					virtual ev_bool isValid() const;
					
					/// <summary>
					/// 设置图层透明度
					/// </summary>
					/// <param name="transparent">图层透明度</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(ev_uint8 transparent);
					
					/// <summary>
					/// 获取图层透明度
					/// </summary>
					/// <returns>图层透明度</returns>
					virtual ev_uint8 getTransparentValue() const;
					
					/// <summary>
					/// 查询全图层是否可见
					/// </summary>
					/// <returns>true表示全图层可见/false表示全图层不可见</returns>
					virtual ev_bool isVisible() const;

					/// <summary>
					/// 设置全图层是否可见
					/// </summary>
					/// <param name="visible">true可见/false不可见</param>
					/// <returns></returns>
					virtual ev_void setVisible(_in ev_bool visible);

					/// <summary>
					/// 查询全图层是否可选
					/// </summary>
					/// <returns>true表示全图层可选/false表示全图层不可选</returns>
					virtual ev_bool isSelectable() const;

					/// <summary>
					/// 设置全图层是否可选
					/// </summary>
					/// <param name="selected">是否可选</param>
					/// <returns></returns>
					virtual ev_void setSelectable(_in ev_bool selected);

					/// <summary>
					/// 查询是否忽略比例尺
					/// </summary>
					/// <returns>是否忽略比例尺</returns>
					virtual ev_bool ignoreScale() const;

					/// <summary>
					/// 设置是否忽略比例尺
					/// </summary>
					/// <param name="bIgnore">是否忽略比例尺</param>
					/// <returns></returns>
					virtual ev_void setIgnoreScale(_in ev_bool bIgnore );

					/// <summary>
					/// 获取最大显示比例尺
					/// </summary>
					/// <returns>最大显示比例尺</returns>
					virtual ev_real64 getDisplayMaxScale() const;

					/// <summary>
					/// 设置最大显示比例尺
					/// </summary>
					/// <param name="scale">最大显示比例尺</param>
					/// <returns></returns>
					virtual ev_void setDisplayMaxScale(_in ev_real64 scale);
				
					/// <summary>
					/// 获取最小显示比例尺
					/// </summary>
					/// <returns>最小显示比例尺</returns>
					virtual ev_real64 getDisplayMinScale() const;

					/// <summary>
					/// 设置最小显示比例尺
					/// </summary>
					/// <param name="scale">最小显示比例尺</param>
					/// <returns></returns>
					virtual ev_void setDisplayMinScale(_in ev_real64 scale);

					/// <summary>
					/// 获取图层显示空间坐标系
					/// </summary>
					/// <returns>坐标参考对象的指针，不需释放</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;

					/// <summary>
					/// 设置图层显示空间坐标系
					/// </summary>
					/// <param name="sr">图层显示空间坐标系</param>
					/// <returns></returns>
					virtual ev_void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference *sr );

					/// <summary>
					/// 获取全图层范围
					/// </summary>
					/// <returns>全图层范围，外部释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;                    

					/// <summary>
					/// 渲染
					/// </summary>
					/// <param name="display">关联设备</param>
					/// <param name="type">渲染类型</param>
					/// <returns>成功渲染返回true</returns>
					///注意：渲染矢量和注记之间不允许有其他任何操作，否则注记可能渲染不对
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display,
											_in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
					/// <summary>
					/// 获取此图层物标类数目
					/// </summary>
					/// <returns>图层所含物标类数目</returns>
					ev_uint32 getObjectClassNum() const;

					/// <summary>
					/// 获取物标类名称
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>物标类名称</returns>
					const EVString getObjectClassName(_in ev_uint32 index);
					
					/// <summary>
					/// 获取某物标类的类型
					/// </summary>
					/// <param name="name">物标类名称</param>
					/// <returns>物标类型代码</returns>
					ev_int32 getObjectClassType(const EVString& name);
					
					/// <summary>
					/// 设置某一物标类的可见性
					/// </summary>
					/// <param name="index">物标类索引</param>
					/// <param name="value">true可见/false不可见</param>
					/// <returns></returns>
					ev_void setClassVisible(_in ev_uint32 index,_in ev_bool value);
					
					/// <summary>
					/// 设置某一物标类的可见性
					/// </summary>
					/// <param name="name">物标类名称</param>
					/// <param name="value">true可见/false不可见</param>
					/// <returns></returns>
					ev_void setClassVisible(_in const EVString& name,_in ev_bool value);
					
					/// <summary>
					/// 查询某一物标类是否可见
					/// </summary>
					/// <param name="index">物标类索引</param>
					/// <returns>true表示该类物体可见/false表示该类物体不可见</returns>
					ev_bool isClassVisible(_in ev_uint32 index);
					
					/// <summary>
					/// 设置某物标类是否可见
					/// </summary>
					/// <param name="name">物标类名称</param>
					/// <returns>true表示该物标类可见/false表示该类物体不可见</returns>
					ev_bool isClassVisible(_in const EVString& name);
					
					/// <summary>
					/// 设置某物标类是否可选
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="value">true可选/false不可选</param>
					/// <returns></returns>
					ev_void setClassSelected(_in ev_uint32 index,_in ev_bool value);

					/// <summary>
					/// 查询某物标类是否可选
					/// </summary>
					/// <param name="index">物标类索引</param>
					/// <returns>true表示该类物体可选/false表示该类物体不可选</returns>
					ev_bool isClassSelected(_in ev_uint32 index);

					/// <summary>
					/// 查询某物标类是否可选
					/// </summary>
					/// <param name="name">物标类名称</param>
					/// <returns>true表示该类物体可选/false表示该类物体不可选</returns>
					ev_bool isClassSelected(_in const EVString& name);
					
					/// <summary>
					/// 设置关联的数据集
					/// </summary>
					/// <param name="pDataset">关联数据集</param>
					/// <returns></returns>
					ev_void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);

					/// <summary>
					/// 获取关联的条件对象
					/// </summary>
					/// <returns>本图层条件对象指针</returns>
					virtual EarthView::World::Spatial::Display::IChartOption* getOptionRef();

					/// <summary>
					/// 设置环境变量
					/// </summary>
					/// <param name="uniformOption">操作参数</param>
					/// <returns></returns>
					virtual ev_void setEnvironment(_in const EarthView::World::Spatial::Display::IChartOption* uniformOption);

					/// <summary>
					/// 克隆
					/// </summary>
					/// <returns>克隆结果的指针</returns>
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
					//	virtual ev_void toStream( _out CDataStream &stream ) const;
					
					/// <summary>
					/// 将当前layer输出成xml流
					/// </summary>
					/// <returns>描述当前layer的xml流</returns>
					virtual EVString toXML() const;
					
					/// <summary>
					/// 从EarthView::World::Core::CXmlElement解析成layer
					/// </summary>
					/// <param name="element">描述layer的xml结点对象</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					
					/// <summary>
					/// 将当前layer输出成EarthView::World::Core::CXmlElement对象
					/// </summary>
					/// <returns>描述当前layer的EarthView::World::Core::CXmlElement对象</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 设置某一物标类最小显示比例尺
					/// </summary>
					/// <param name="className">物标类名称</param>
					/// <param name="scale">比例尺</param>
					/// <returns></returns>
					ev_void setClassDisplayMinScale (const EVString& className, const ev_real64 scale);
					/// <summary>
					/// 获取某一物标类的最小显示比例尺
					/// </summary>
					/// <param name="className">物标类名称</param>
					/// <param name="minScale">最小显示比例尺</param>
					/// <returns>设置了该物标类的显示比例尺,返回true,否则，返回false</returns>
					ev_bool getClassDisplayMinScale (const EVString& className, ev_real64& minScale) const;
					/// <summary>
					/// 设置某一物标类的最大显示比例尺
					/// </summary>
					/// <param name="className">物标类名称</param>
					/// <param name="scale">比例尺</param>
					/// <returns></returns>
					ev_void setClassDisplayMaxScale (const EVString& className, const ev_real64 scale);
					/// <summary>
					/// 获取某一物标类的最大显示比例尺
					/// </summary>
					/// <param name="className">物标类名称</param>
					/// <param name="maxScale">最大显示比例尺</param>
					/// <returns>设置了该物标类的显示比例尺，返回true,否则，返回false</returns>
					ev_bool getClassDisplayMaxScale (const EVString& className, ev_real64& maxScale) const;
					/// <summary>
					/// 设置图层中某一物标类是否忽略比例尺显示
					/// </summary>
					/// <param name="className">物标类名称</param>
					/// <param name="classIgnore">物标类忽略比例尺状态</param>
					/// <returns></returns>
					ev_void setClassIgnoreScale(const EVString& className, const ev_bool classIgnore);
					/// <summary>
					/// 获取某一物标类是否忽略比例尺显示
					/// </summary>
					/// <param name="className">物标类名称</param>
					/// <returns>忽略比例尺返回true,否知返回false</returns>
					ev_bool getClassIgnoreScale(const EVString& className) const;
					/// <summary>
					/// 按索引号设置该索引下的物标类的最小可见比例尺
					/// </summary>
					/// <param name="index">物标索引号</param>
					/// <param name="scale">比例尺分母</param>
					/// <returns></returns>
					ev_void setClassDisplayMinScale (const ev_uint32 index, const ev_real64 scale);
					/// <summary>
					/// 根据索引号获取最小显示比例尺
					/// </summary>
					/// <param name="index">索引号</param>
					/// <param name="scale">比例尺分母</param>
					/// <returns>是否忽略比例尺显示，如果忽略，返回true,否则返回false</returns>
					ev_bool getClassDisplayMinScale(const ev_uint32 index, ev_real64& scale) const;
					/// <summary>
					/// 按索引号设置该索引下的物标类的最大可见比例尺
					/// </summary>
					/// <param name="index">索引号</param>
					/// <param name="scale">比例尺</param>
					/// <returns></returns>
					ev_void setClassDisplayMaxScale(const ev_uint32 index, const ev_real64 scale);
					/// <summary>
					/// 根据索引号获取最大显示比例尺
					/// </summary>
					/// <param name="index">索引号</param>
					/// <param name="scale">比例尺</param>
					/// <returns>是否忽略比例尺显示，如果忽略，返回true，否则返回false</returns>
					ev_bool getClassDisplayMaxScale(const ev_uint32 index, ev_real64& scale) const;
					/// <summary>
					/// 按索引号设置该索引下是否忽略比例尺显示
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="classIgnore">是否忽略比例尺</param>
					/// <returns></returns>
					ev_void setClassIgnoreScale(const ev_uint32 index, const ev_bool classIgnore);
					/// <summary>
					/// 根据索引号获取是否忽略比例尺显示
					/// </summary>
					/// <param name="index">索引号</param>
					/// <returns>忽略比例尺返回true,否知返回false</returns>
					ev_bool getClassIgnoreScale(const ev_uint32 index) const;

					ev_void setUseChartClassControl(const EVString& className, ev_bool IsUse);
					ev_bool getUseChartClassControl(const EVString& className) const;
					ev_void setChartClassControlSize(const EVString& className, ev_uint32 sizeFactor);
					ev_bool getChartClassControlSize(const EVString& className, ev_uint32& sizeFactor) const;
					ev_void setChartClassControlColor(const EVString& className,
										const EarthView::World::Spatial::Display::IColor* color);
					ev_bool getChartClassControlColor(const EVString& className,
										EarthView::World::Spatial::Display::IColor*& pColor) const;
					ev_void setUseChartClassControlColor(const EVString& className, ev_bool useColor);
					ev_bool getUseChartClassControlColor(const EVString& className) const;
					const NHChartClassControl* const getChartClassControl(const EVString& className) const;
					//ev_void setChartClassControl(const EVString& className, const NHChartClassControl* pChartClassControl);
					ev_void setChartClassControlColorBlendMode(const EVString& className,EarthView::World::Spatial::Display::EVColorBlendOperation mode);
					EarthView::World::Spatial::Display::EVColorBlendOperation getChartClassControlColorBlendMode(const EVString& className) const;
				public:
					///<summary>
					/// 析构函数
					/// </summary>
					~CChartLayer();
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CChartLayer();
				ev_private:
					CChartLayer(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					EarthView::World::Core::StringVector getSuitableClass(const ev_real64 displayScale,
																										const ev_bool selectFlag = false);
					EVString mstrName;

					EVString mstrDescription;

					EarthView::World::Spatial::Display::CChartOption* mpOption;
					///物标类数目
					ev_uint32 mnClassCount;
					///全部要素数目
					ev_uint32 mnFeatureCount;

					///具体海图类层，一一对应
					///物标类名称列表
					ev_vector<EVString> mlistClassName;
					///物标类可见性列表
					ev_vector<ev_bool> mlistClassVisible;
					///物标类可选性列表
					ev_vector<ev_bool> mlistClassSelectable;
					///物标类的最小可见比例尺分母
					ev_vector<ev_real64> m_ListClassMinScale;
					///物标类的最大可见比例尺分母
					ev_vector<ev_real64> m_ListClassMaxScale;
					///是否设置了该物标类的显示比例尺范围
					ev_vector<ev_bool> m_ListClassIgnoreScale;

					ev_uint8 mnTrans;
					///全图层可见性
					ev_bool mbVisible;
					///全图层可选性
					ev_bool mbSelectable;

					///最小显示比例
					ev_real64 mnMinDisplayScale;///最小比例尺分母，display获取的比例尺大与此不显示
					///最大显示比例
					ev_real64 mnMaxDisplayScale;////最大比例尺分母，display获取的比例尺小于此不显示
					///忽略显示比例
					ev_bool mbIgnoreScale;

					///关联数据集，共享
					EarthView::World::Spatial::GeoDataset::CChartDataset* mpDataset;

					////图层坐标系
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialReference;

					///符号渲染引擎
					EarthView::World::Spatial::Display::IRenderer* mpSymbolRenderer;
					///注记渲染引擎
					EarthView::World::Spatial::Display::IRenderer* mpLabelRenderer;

					EarthView::World::Spatial::Display::IRenderer* mpSelectionRenderer;

					ev_bool mbCanEdit;
					ev_bool mbEditing;
					mutable EarthView::World::Core::CReadWriteLock mLock;
					EarthView::World::Spatial::Atlas::CChartLayerSelection* mpLayerSelection;
					EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelope;

					map<EVString, NHChartClassControl*> m_ChartClassControl;
				};
			}
		}
	}
}
#endif

