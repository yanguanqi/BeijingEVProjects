#ifndef ANALYSISEVENT_H_
#define ANALYSISEVENT_H_
#include "core\event.h"
namespace EarthView
{
	namespace Xld
	{
		namespace AnalysisTool
		{
			class CAnalysisEvent :
				public EarthView::World::Core::CEvent
			{
			ev_private:
				CAnalysisEvent(EarthView::World::Core::CNameValuePairList *pList);
			public:
				CAnalysisEvent(ev_uint16 type);
				CAnalysisEvent(ev_uint16 type, EarthView::World::Core::CEventObject *sender);
				~CAnalysisEvent();
				enum Type
				{
					Query = 9000,
					Draw = 9001,

				};
			protected:
				EVString mContents;
			};
		}
	}
}

#endif


