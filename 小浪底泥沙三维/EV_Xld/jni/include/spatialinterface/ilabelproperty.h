#ifndef EARTHVIEW_WORLD_SPATIAL2D_ILABELPROPERTY_H
#define EARTHVIEW_WORLD_SPATIAL2D_ILABELPROPERTY_H

#include "core/memoryallocatedobject.h"
#include "core/core_api.h"
#include "spatialinterface/config.h"
#include "core/xml.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				enum EVLabelType
				{
					LT_Marker = 1,
					LT_Line = 2,
					LT_Fill = 3
				};
				//用于线和面的标注类型
				enum EVFontAndAxisRelationType
				{
					FAART_FontPlumbAxisType = 1,
					FAART_FontParallelAxisType = 2,
					FAART_FontErectAlwaysType = 3
				};

				enum EVLabelDuplicateFlag
				{
					LDF_RemovelDuplicateLabel = 1,
					LDF_PlaceLaberPerPart     = 2,
					LDF_PlaceLaberPerFeature  = 3
				};				
				// 点标注位置顺序，由右上方开始
				enum EVPointLabelPosition
				{
					PLP_TopRight      = 1,   //右上方
					PLP_TopCenter     = 2,   //上方
					PLP_CenterRight   = 3,   //右方
					PLP_BottomRight   = 4,   //右下方
					PLP_BottomCenter  = 5,   //下方
					PLP_CenterLeft    = 6,   //左方
					PLP_TopLeft       = 7,	 //左上方				
					PLP_BottomLeft    = 8    //左下方
					
				};
				// 点标注位置的优先级
				enum EVPointLabelPriority
				{
					PLPP_Block  = 0,  //禁止标注
					PLPP_Heigh  = 1,
					PLPP_Mediam = 2,
					PLPP_Low    = 3
				};

				class ISymbol;

				class EV_INTERFACE_DLL ILabelProperty : 
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					ILabelProperty();
					virtual ~ILabelProperty();

				public:
					/// <summary>
					/// 获取名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					virtual EVString getName() const;

					/// <summary>
					/// 设置名称
					/// </summary>
					/// <param name="strName">名称</param>
					/// <returns></returns>

					virtual ev_void setName(EVString strName);
					/// <summary>
					/// 图层注记是否可见
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isVisible() const;

					/// <summary>
					/// 设置图层注记是否可见
					/// </summary>
					/// <param name="bVisible">是否可见</param>
					/// <returns></returns>
					virtual ev_void setVisible( _in ev_bool bVisible );

					/// <summary>
					/// 是否按比例尺显示
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool ignoreScale() const;

					/// <summary>
					/// 设置是否按比例尺显示
					/// </summary>
					/// <param name="bIgnore">是否忽略</param>
					/// <returns></returns>
					virtual ev_void setIgnoreScale( _in ev_bool bIgnore );

					/// <summary>
					/// 获取最小比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_real64 getMinScale() const;

					/// <summary>
					/// 设置最小比例尺
					/// </summary>
					/// <param name="dMinScale">最小比例尺</param>
					/// <returns></returns>
					virtual ev_void setMinScale( _in ev_real64 dMinScale );

					/// <summary>
					/// 获取最大比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_real64 getMaxScale() const;

					/// <summary>
					/// 设置最大比例尺
					/// </summary>
					/// <param name="dMaxScale">最大比例尺</param>
					/// <returns></returns>
					virtual ev_void setMaxScale( _in ev_real64 dMaxScale );

					virtual EVLabelDuplicateFlag getDuplicateFlag() const;
					virtual ev_void setDuplicateFlag( EVLabelDuplicateFlag flag );
					//点类型的函数
					virtual ev_bool isOnTopOfFeature() const;
					virtual ev_void setOnTopOfFeature( ev_bool bOnTop );
					// 获取点标注的位置及其相应的优先级（围绕点要素标注时）
					virtual EVString getPointLabelPositionPriority();
					// 设置点标注的位置及其相应的优先级
					virtual ev_void setPointLabelPositionPriority(EVString positionPriority);
					//线类型的函数
					virtual ev_bool isParallelToLineAlways() const;
					virtual ev_void setParallelToLineAlways( ev_bool bParallel );
					virtual ev_bool isSegmentLabelLine() const;
					virtual ev_void setSegmentLabelLine(ev_bool bSegmentLabel);
					//面类型的函数
					virtual ev_bool isHorizontalAlways() const;
					virtual ev_void setHorizontalAlways( ev_bool bHorizontal );
					virtual ev_bool isInPolygon() const;
					virtual ev_void setInPolygon( ev_bool bIn );
					//线和面的共同属性
					virtual EarthView::World::Spatial::Display::EVFontAndAxisRelationType getRelationOfFontAndAxis() const;
					virtual ev_void setRelationOfFontAndAxis( EarthView::World::Spatial::Display::EVFontAndAxisRelationType type );
					//设置文本风格
					virtual ev_void setTextSymbol( const EarthView::World::Spatial::Display::ISymbol *pSymbol );
					virtual EarthView::World::Spatial::Display::ISymbol *getTextSymbol() const;
					//设置标注字段
					virtual ev_void setField( const EVString &field );
					virtual EVString getField() const;
					//允许注记压盖要素
					virtual ev_void setFeatureWeightEnable(ev_bool b);
					virtual ev_bool getFeatureWeightEnable();
					/// <summary>
					/// 创建子标注
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Display::ILabelProperty *createSubLabelProperty();

					/// <summary>
					/// 添加子标注
					/// </summary>
					/// <param name="">标注属性</param>
					/// <returns></returns>
					virtual ev_void addSubLabelProperty(ILabelProperty * pLProperty);

					/// <summary>
					/// 移除子标注
					/// </summary>
					/// <param name="">标注属性</param>
					/// <returns></returns>
					virtual ev_void removeSubLabelProperty(EarthView::World::Spatial::Display::ILabelProperty * pLProperty);

					/// <summary>
					/// 获取子标注个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>子标注个数</returns>
					virtual ev_int32 getSubLabelPropertyCount() const;

					/// <summary>
					/// 获取子标注
					/// </summary>
					/// <param name="">子标注索引</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Display::ILabelProperty *getSubLabelProperty(ev_int32 nIndex);

					/// <summary>
					/// 是否分类显示注记
					/// </summary>
					/// <param name=""></param>
					/// <returns>若分类显示，则返回true,否则返回false</returns>
					virtual ev_bool isClassify();

					/// <summary>
					/// 设置是否分类显示注记
					/// </summary>
					/// <param name=""></param>
					/// <returns>标注属性</returns>
					virtual ev_void setClassify(ev_bool bClassify);

					/// <summary>
					/// 判断是不是子标注
					/// </summary>
					/// <param name=""></param>
					/// <returns>若分类显示，则返回true,否则返回false</returns>
					virtual ev_bool isSubLabelProperty();

					/// <summary>
					/// 设置注记显示过滤条件
					/// </summary>
					/// <param name="filter">过滤条件</param>
					/// <returns></returns>
					virtual ev_void setDisplayFilter(const EVString & filter);

					/// <summary>
					/// 获取注记显示过滤条件
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回过滤条件</returns>
					virtual EVString getDisplayFilter() const;

					/// <summary>
					/// 获取注记占位扩展缓冲区（像素）
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回缓冲区大小</returns>
					virtual ev_uint32 getLabelConflictBuffer();

					/// <summary>
					/// 设置注记占位扩展缓冲区（像素）
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setLabelConflictBuffer(ev_uint32 labelBuffer);

					/// <summary>
					/// 清空子标注
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSubLabelProperty();

					virtual ILabelProperty * clone() const;
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
					EVString toXML() const;
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
				ev_private:
					ILabelProperty( EarthView::World::Core::CNameValuePairList *pList );
				ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				protected:
					C_DISABLE_COPY( ILabelProperty )
				};
			}
		}
	}
}
#endif


