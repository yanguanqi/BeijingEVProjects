#ifndef IVECTORFILEDATALAYERLABELPROPERTY_H
#define IVECTORFILEDATALAYERLABELPROPERTY_H
#include "vectorfileparser/vectorfileparser_config.h"
#include "spatialinterface/ilabelproperty.h"
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
	class EV_VECTORFILEPARSER_LIB IVectorFileDataLayerLabelProperty
		: public EarthView::World::Spatial::Display::ILabelProperty
	{
	public:
		IVectorFileDataLayerLabelProperty();
		~IVectorFileDataLayerLabelProperty();
		ev_bool isVisible() const;
		ev_void setVisible( _in ev_bool bVisible );
		ev_bool ignoreScale() const;
		ev_void setIgnoreScale( _in ev_bool bIgnore );
		ev_real64 getMinScale() const;
		ev_void setMinScale( _in ev_real64 dMinScale );
		ev_real64 getMaxScale() const;
		ev_void setMaxScale( _in ev_real64 dMaxScale );
		ev_bool isOnTopOfFeature() const;
		ev_void setOnTopOfFeature( ev_bool bOnTop );
		ev_bool isParallelToLineAlways() const;
		ev_void setParallelToLineAlways( ev_bool bParallel );
		ev_bool isHorizontalAlways() const;
		ev_void setHorizontalAlways( ev_bool bHorizontal );
		ev_bool isInPolygon() const;
		ev_void setInPolygon( ev_bool bIn );
		EarthView::World::Spatial::Display::EVFontAndAxisRelationType getRelationOfFontAndAxis() const;
		ev_void setRelationOfFontAndAxis( EarthView::World::Spatial::Display::EVFontAndAxisRelationType type );
		ev_void setTextSymbol( const EarthView::World::Spatial::Display::ISymbol *pSymbol );
		EarthView::World::Spatial::Display::ISymbol *getTextSymbol() const;
		ev_void setField( const EVString &field );
		EVString getField() const;
		ev_void setFractionLabel( ev_bool fraction);
		ev_bool getIsFractionLabel() const;
		ev_void setNumeratorField( const EVString &field );
		EVString getNumeratorField() const;
		EarthView::World::Spatial::Display::ILabelProperty * clone() const;
		ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
		EarthView::World::Core::CXmlElement toXmlElement() const;
		ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
ev_private:
		IVectorFileDataLayerLabelProperty(EarthView::World::Core::CNameValuePairList* pList);
	private:
		C_DISABLE_COPY(IVectorFileDataLayerLabelProperty);
		ev_bool m_bVisible;
		ev_bool m_bIgnoreScale;
		ev_real64 m_dMinScale;
		ev_real64 m_dMaxScale;
		EarthView::World::Spatial::Display::EVLabelType m_eType;
		ev_bool m_bOnTopOfFeature;
		ev_bool m_bParallelAlways;
		ev_bool m_bHorizontalAlways;
		ev_bool m_bInPolygon;

		EarthView::World::Spatial::Display::EVFontAndAxisRelationType m_eRelationType;
		EVString m_szExpression;
		EarthView::World::Spatial::Display::ISymbol *m_pSymbol;
		ev_bool m_bIsFraction;
		EVString m_szLabel_Numerator;
	};
}}}}
#endif