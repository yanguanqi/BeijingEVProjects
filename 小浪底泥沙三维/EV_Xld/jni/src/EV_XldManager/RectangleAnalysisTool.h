
#ifndef RECTANGLEANALYSISTOOL_H_
#define RECTANGLEANALYSISTOOL_H_

#include "BaseInteractiver.h"
#include "globecontrol\globecontrol.h"
#include "MoveLine.h"
#include "RenderLibDataType.h"

namespace EarthView
{
	namespace Xld
	{
		namespace AnalysisTool
		{

			class CRectangleAnalysisTool : public EarthView::Xld::RenderLib::Base::CBaseInteractiver
			{
			public:

				CRectangleAnalysisTool(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl);

				~CRectangleAnalysisTool();
			private:
				EarthView::Xld::RenderLib::CMoveLine* mpMoveLine;

			protected:

				virtual bool HandleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent) override;


				virtual bool HandleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent) override;


				virtual void HandlePoint(EarthView::World::Spatial::Math::CVector3* vPos) override;



			};
		}
	}
}

#endif


