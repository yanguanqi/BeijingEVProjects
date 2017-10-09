#include "AnalysisEvent.h"





EarthView::Xld::AnalysisTool::CAnalysisEvent::CAnalysisEvent(ev_uint16 type):CEvent(type)
{
}

EarthView::Xld::AnalysisTool::CAnalysisEvent::CAnalysisEvent(ev_uint16 type, EarthView::World::Core::CEventObject * sender):CEvent(type,sender)
{
}

EarthView::Xld::AnalysisTool::CAnalysisEvent::~CAnalysisEvent()
{
}
