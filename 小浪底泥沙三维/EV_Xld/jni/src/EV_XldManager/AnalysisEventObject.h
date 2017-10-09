#ifndef ANALYSISEVENTOBJECT_H_
#define ANALYSISEVENTOBJECT_H_
#include "core\object.h"
namespace EarthView
{
	namespace Xld
	{
		namespace AnalysisTool
		{
			class CAnalysisEventObject :
				public EarthView::World::Core::CEventObject
			{
			public:

				CAnalysisEventObject();

				~CAnalysisEventObject();

				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e) override;

				virtual void onCustomEvent(_in EarthView::World::Core::CEvent *e) override;

			};
		}
	}
}

#endif


