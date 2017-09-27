
#ifndef BILLBOARDMANAGER_H_
#define  BILLBOARDMANAGER_H_


#include "globecontrol\globecontrol.h"
#include "geometry3d\geometry3dextension\multipoint3dextension.h"
#include "symbol\billboard3dsymbol.h"

namespace EarthView
{
	namespace Xld
	{
		namespace RenderLib 
		{
			class CBilloardManager
			{

				friend class CWaterConservancyManager;

			public:

				~CBilloardManager();

				/// <summary>
				///单件模式获取CTerrainManager对象
				/// </summary>
				static  EarthView::Xld::RenderLib::CBilloardManager& getSingleton();

				/// <summary>
				///单件模式获取CTerrainManager指针
				/// </summary>
				static  EarthView::Xld::RenderLib::CBilloardManager* getSingletonPtr();

				void CreateBillBoard(const EVString& billboardName, const EVString& imgFileName, const EVString& content, ev_real64& longi, ev_real64& lati, ev_real64& alti);

				EarthView::World::Spatial::Display::CBillboard3DSymbol* GetBillboardSymbol();
			protected:

				void InitialiseSymbol();

				static EarthView::Xld::RenderLib::CBilloardManager* mpSingleton;

				EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;

				EarthView::World::Spatial::Display::CBillboard3DSymbol* mpSymbol;

				CBilloardManager();

				ev_map<EVString, EarthView::World::Geometry3D::CMultiGeometry3DExtension*> mExtentionList;
				
				vector<EarthView::World::Spatial::CGeoObject*> mGeoObjectList;

				
			private:

				ev_bool mIsInitialised;

				EarthView::World::Spatial::Utility::CSpatialReference* mpSR;
			};

		}
	}
}

#endif
