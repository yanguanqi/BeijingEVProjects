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

				class ISymbol;

				class EV_INTERFACE_DLL ILabelProperty : 
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					ILabelProperty();
					virtual ~ILabelProperty();

				public:
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

					//点类型的函数
					virtual ev_bool isOnTopOfFeature() const;
					virtual ev_void setOnTopOfFeature( ev_bool bOnTop );
					//线类型的函数
					virtual ev_bool isParallelToLineAlways() const;
					virtual ev_void setParallelToLineAlways( ev_bool bParallel );
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
					//分数注记
					virtual ev_void setFractionLabel( ev_bool fraction);
					virtual ev_bool getIsFractionLabel() const;
					virtual ev_void setNumeratorField( const EVString &field );
					virtual EVString getNumeratorField() const;

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


