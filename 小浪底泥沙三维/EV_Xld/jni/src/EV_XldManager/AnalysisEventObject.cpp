#include "AnalysisEventObject.h"

EarthView::Xld::AnalysisTool::CAnalysisEventObject::CAnalysisEventObject()
{
}


EarthView::Xld::AnalysisTool::CAnalysisEventObject::~CAnalysisEventObject()
{
}

ev_bool EarthView::Xld::AnalysisTool::CAnalysisEventObject::onEvent(_in EarthView::World::Core::CEvent *e)
{
	onCustomEvent(e);
	return false;
}

void EarthView::Xld::AnalysisTool::CAnalysisEventObject::onCustomEvent(_in EarthView::World::Core::CEvent *e)
{
	
}
