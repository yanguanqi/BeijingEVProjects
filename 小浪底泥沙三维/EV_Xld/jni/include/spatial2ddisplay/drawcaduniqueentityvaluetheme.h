#ifndef DRAWCADUNIQUEENTITYVALUETHEME_H
#define DRAWCADUNIQUEENTITYVALUETHEME_H
#include "spatial2ddisplay/drawtheme.h"

namespace EarthView{namespace World{namespace Spatial2D{namespace Renderer{
	class EV_SPATIAL2DDISPLAY_DLL CDrawCADUniqueEntityValueTheme
		: public CDrawTheme
	{
	public:
		CDrawCADUniqueEntityValueTheme();
		~CDrawCADUniqueEntityValueTheme();
		ev_void startDraw( _in EarthView::World::Spatial::Display::ISpatialDisplay *ref_display,
			_in EarthView::World::Spatial::Theme::ITheme *ref_theme );
		ev_bool draw( _in EarthView::World::Spatial::GeoDataset::IFeatureClass *featureClass,
			EarthView::World::Spatial::GeoDataset::IQueryFilter* filter );
		ev_void endDraw();
ev_private:
		CDrawCADUniqueEntityValueTheme(EarthView::World::Core::CNameValuePairList *pList);
	protected:
		C_DISABLE_COPY(CDrawCADUniqueEntityValueTheme);
	};
}}}}
#endif