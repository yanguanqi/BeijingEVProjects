#ifndef EARTHVIEW_WORLD_CARTO_GRAPHICELEMENT_H
#define EARTHVIEW_WORLD_CARTO_GRAPHICELEMENT_H

#include "carto/cartoconfig.h"
#include "carto/element.h"
#include "symbol/fillsymbol.h"
#include "symbol/linesymbol.h"
#include "symbol/textsymbol.h"
#include "symbol/markersymbol.h"
#include "symbol/simplemarkersymbol.h"

namespace EarthView
{
	namespace World
	{
		namespace Carto
		{
			class EV_CARTO_DLL CGraphicElement : public CElement
			{
			public:
				~CGraphicElement();
				virtual ISpatialReference* getSpatialReference() const;
				//这个应该是根据地图设定的
				virtual ev_void setSpatialReference(ISpatialReference* sr);
			protected:
				CGraphicElement();
				ISpatialReference* m_sr;
			};
			//CRectangleElement
			class EV_CARTO_DLL CRectangleElement : public CGraphicElement
			{
			public:
				CRectangleElement();
				~CRectangleElement();
				EarthView::World::Spatial::Display::CFillSymbol* getFillSymbol() const;
				ev_void setFillSymbol(EarthView::World::Spatial::Display::CFillSymbol* fillSymbol);
				ev_void move(ev_real64 dx,ev_real64 dy);
				ev_void draw(ISpatialDisplay* dis);
			private:
				CFillSymbol* m_fillsymbol;
			};
			//CLineElement
			class EV_CARTO_DLL CLineElement : public CGraphicElement
			{
			public:
				CLineElement();
				~CLineElement();
				EarthView::World::Spatial::Display::CLineSymbol* getLineSymbol() const;
				ev_void setLineSymbol(EarthView::World::Spatial::Display::CLineSymbol* lineSymbol);
				ev_void move(ev_real64 dx,ev_real64 dy);
				ev_void draw(ISpatialDisplay* dis);
			private:
				CLineSymbol* m_lineSymbol;
			};
			class EV_CARTO_DLL CMarkerElement : public CGraphicElement
			{
			public:
				CMarkerElement();
				~CMarkerElement();
				EarthView::World::Spatial::Display::CMarkerSymbol* getMarkerSymbol() const;
				ev_void setMarkerSymbol(EarthView::World::Spatial::Display::CMarkerSymbol* markerSymbol);
				ev_void move(ev_real64 dx,ev_real64 dy);
				ev_void draw(ISpatialDisplay* dis);
			private:
				CMarkerSymbol* m_markerSymbol;
			};
			//CTextElement
			class EV_CARTO_DLL CTextElement : public CGraphicElement
			{
			public:
				CTextElement();
				~CTextElement();
				ev_string getText() const;
				ev_void setText(ev_string text);
				ev_void move(ev_real64 dx,ev_real64 dy);
				CTextSymbol* getTextSymbol() const;
				ev_void setTextSymbol(CTextSymbol* textSymbol);
				ev_void draw(ISpatialDisplay* dis);
			private:
				CTextSymbol* m_textSymbol;
			};
		}
	}
}
#endif