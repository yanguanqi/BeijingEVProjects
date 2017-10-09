#include "RectangleAnalysisTool.h"
#ifndef POLYGONANALYSIS_H_
#define  POLYGONANALYSIS_H_

namespace EarthView
{
	namespace Xld
	{
		namespace AnalysisTool
		{
			class CPolygonAnalysisTool : public EarthView::Xld::RenderLib::Base::CBaseInteractiver
			{
			public:

				CPolygonAnalysisTool(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl);

				~CPolygonAnalysisTool();
			private:
				EarthView::Xld::RenderLib::CMoveLine* mpMoveLine;


			protected:

				virtual bool HandleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent) override;


				virtual bool HandleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent) override;


				virtual void HandlePoint(EarthView::World::Spatial::Math::CVector3* vPos) override;

				virtual bool HandleMouseDoubleClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent) override;
			
				
			};
		}
	}
}

#endif


