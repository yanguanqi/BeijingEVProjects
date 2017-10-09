#ifndef WATERCONSERVANCYMANAGER_H_
#define WATERCONSERVANCYMANAGER_H_

#include "xldmanager_cfg.h"
#include "globecontrol\globecontrol.h"

namespace EarthView
{
	namespace XldManager
	{
		class EV_XLDMANAGER_DLL CWaterConservancyManager:public EarthView::World::Core::CBaseObject
		{
			friend class CTerrainManager;
			friend class CBilloardManager;
		ev_private:
			CWaterConservancyManager(EarthView::World::Core::CNameValuePairList* pList);
		public:

			static CWaterConservancyManager* GetSingletonPtr();
			~CWaterConservancyManager();
			void Initialise(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_globecontrol);
			void CreateTerrain(const EVString& grdFileName);
			EVString GetTerrainName(const ev_int32 terrainIndex);
			void SetTerrainVisible(const EVString& terrainName,const ev_bool& isVisible);
			void SetTerrainOffset(const EVString& terrainName, const ev_real64 offset);
			void MarkPosistion(const EVString& name, const EVString & imgeFileName, const EVString& tip, ev_real64 longi, ev_real64 lati, ev_real64 alti);
			void CreateWaterSurface(const ev_real64& waterHeight);
			void SetSectionQueryEnable(const ev_bool& isEnable);
			void SetTerrainHeightQueryEnable(const ev_bool& isEnable);
			void DrawRectBounds();
			void DrawPolylineBounds();
			ev_uint64 GetTerrainCount();
			EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
		protected:
			CWaterConservancyManager();
			static CWaterConservancyManager* mpSingleton;
			
		};
	}
}


#endif