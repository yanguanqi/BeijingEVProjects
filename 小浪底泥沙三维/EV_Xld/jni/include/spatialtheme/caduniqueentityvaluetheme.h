#ifndef CADUNIQUEVALUETHEME_H
#define CADUNIQUEVALUETHEME_H

#include "spatialthemeconfig.h"
#include "spatialinterface/iuniquetheme.h"

namespace EarthView{namespace World{namespace Spatial{namespace Theme{
class EV_SPATIALTHEME_DLL CCADUniqueEntityValueTheme : public IUniqueTheme
{
public:
	CCADUniqueEntityValueTheme();
	~CCADUniqueEntityValueTheme();
	EVThemeType getType() const;
	EVString getCaption() const;
	ev_void setCaption( _in const EVString & caption );
	ev_bool useDefaultSymbol() const;
	ev_void setUseDefaultSymbol( _in ev_bool usable);
	EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const;
	ev_void setDefaultSymbol( _in const EarthView::World::Spatial::Display::ISymbol * symbol);
	ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);
	EarthView::World::Spatial::Theme::ITheme * clone() const;
	ev_void toStream( _out EarthView::World::Core::CDataStream & stream ) const;
	EarthView::World::Core::CXmlElement toXmlElement() const;
	ev_void fromXmlElement( EarthView::World::Core::CXmlElement& element);
	EVString getFieldString() const;
	ev_void setFieldString( _in const EVString &field );
	EVString getSubCaption( _in ev_uint32 index ) const;
	ev_void setSubCaption( _in ev_uint32 index,_in const EVString &subCaption );
	EarthView::World::Spatial::Display::ISymbol* getSymbol( _in const EVString &value ) const;
	EarthView::World::Spatial::Display::ISymbol* getSymbol( _in ev_int32 index ) const;
	ev_void setSymbol( _in const ev_int32 index, _in const EarthView::World::Spatial::Display::ISymbol *symbol );
	ev_void addValue( _in const EVString &value, _in const EVString &caption, _in const EarthView::World::Spatial::Display::ISymbol *symbol );
	ev_void removeValue( _in const ev_int32 index );
	ev_void removeAll();
	ev_uint32 getValueCount() const;
	EVString getValue( _in ev_uint32 index ) const;
	ev_bool containsValue( _in const EVString &value ) const;
	EVString getDefaultCaption() const;
	ev_void setDefaultCaption( _in const EVString &defaultCaption );
ev_private:
	CCADUniqueEntityValueTheme(EarthView::World::Core::CNameValuePairList* pList);
protected:
	C_DISABLE_COPY(CCADUniqueEntityValueTheme);
	ev_bool m_bUseDefaultSymbol;
	EarthView::World::Spatial::Display::ISymbol *m_pDefaultSymbol;
	EVString m_szDefalutCaption;
	EVString m_szCaption;
	EVString m_szFieldName;
	ev_vector<EarthView::World::Spatial::Display::ISymbol*>*m_vSymbol;
	ev_vector<EVString>*m_vLabel;
	ev_vector<EVString>*m_vValue;
};
}}}}
#endif