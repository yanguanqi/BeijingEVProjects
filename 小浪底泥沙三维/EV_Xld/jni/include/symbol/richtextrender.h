#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_RICHTEXTRENDER_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_RICHTEXTRENDER_H
#include "symbol/symbolexports.h"
#include "spatialinterface/idisplay2d.h"
#include "spatialinterface/ipaintdevice.h"
#include "spatialinterface/isymbol.h"
class RichTextRenderMeasure_impl;
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class EV_SYMBOL_DLL CRichTextRenderMeasure : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CRichTextRenderMeasure();
					CRichTextRenderMeasure(const EVString& str, const ISymbol* symbol);
					void measureRichText(const EVString& str, const ISymbol* symbol);
					~CRichTextRenderMeasure();
					void getTextSize(double& w, double& h);
					void getTextSize(EarthView::World::Display::EVDeviceUnits unit, double& w, double& h);
ev_private:
					CRichTextRenderMeasure(EarthView::World::Core::CNameValuePairList *pList);
				private:
					void makeNode();
					RichTextRenderMeasure_impl* mpImpl;

					friend class CRichTextRender;
				};
				class EV_SYMBOL_DLL CRichTextRender : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CRichTextRender();
					~CRichTextRender();
					ev_void startDraw( EarthView::World::Display::IDisplay2D* display, const EarthView::World::Spatial::Display::ISymbol*pSymbol );
					ev_void draw( ev_real64 *dx,
						ev_real64 *dy,
						ev_int32 *pSegments,
						ev_int32 nCount );
					ev_void endDraw();
				ev_private:
					CRichTextRender(EarthView::World::Core::CNameValuePairList *pList);
				private:
					EarthView::World::Display::IDisplay2D* mpDisplay;
					CRichTextRenderMeasure* mpRenderMeasure;
				};
			}
		}
	}
}
#endif
