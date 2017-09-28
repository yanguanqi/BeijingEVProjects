
#ifndef ANALYSISTOOLMANAGER_H_
#define  ANALYSISTOOLMANAGER_H_

#include "core\global.h"
#include "BaseInteractiver.h"

namespace EarthView
{
	namespace Xld
	{
		class CAnalysisToolManager
		{
		public:
			~CAnalysisToolManager();
			static CAnalysisToolManager* GetSingletonPtr();
			static CAnalysisToolManager& GetSingleton();

			void SetSectionQueryEnable(const ev_bool& isEnable);

			void SetTerrainHeightQueryEnable(const ev_bool& isEnable);

			void DrawRectBounds();

		private:
			static CAnalysisToolManager* mpSingleton;
			CAnalysisToolManager();
			EarthView::Xld::RenderLib::Base::CBaseInteractiver* mAnalysisTool;
		};
	}
}
#endif


