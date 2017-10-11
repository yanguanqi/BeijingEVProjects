
#ifndef WATERMANAGER_H_
#define  WATERMANAGER_H_
#include "core\global.h"
#include "core\stringdefines.h"
#include "globecontrol\globecontrol.h"
#include "spatialobject\geometry\envelope.h"
#include "mathengine\vector3.h"
#include "spatialobject\geometry\curvering.h"
#include "spatial3dproxy\kmltreemanager.h"
#include "spatialframeworkproxy\appatlas.h"
#include "spatialframeworkproxy\appdatasource.h"
#include "spatialframeworkproxy\datasourceoption.h"

namespace EarthView
{
	namespace Xld 
	{
		namespace RenderLib
		{
			class CWaterManager
			{
			public:
				static CWaterManager* GetSingletonPtr();

				~CWaterManager();

				void CreateWaterSurface(const ev_real64& waterHeight);
				void DeleteWaterSurface(const ev_bool& isSure);
				void SetWaterSurfaceHeight(const ev_real64 waterHeight);
				void SetWaterSurfaceVisible(const ev_bool& isVisible);
			protected:
				
				static CWaterManager* mpSingleton;
				EarthView::World::Spatial::Geometry::CEnvelope* mpEnvelope;
				EarthView::World::Spatial3D::Atlas::CKmlLayer* mpKmlLayer;
				EarthView::World::Spatial::Kml::CGeoObjectExtension* mpKMLWaterSurface;
				EarthView::World::Spatial::Kml::CKmlDocument* mpKMLRootDocument;
				CWaterManager();
				void CreateFloodWaterSurface(const ev_real64& waterHeight);
				void CreateKMLWaterSurface(EVString kmlName, EarthView::World::Spatial::Math::VertexList* lstVert, const ev_real64& waterHeight);
				void DeleteKMLWaterSurface(const ev_bool& isSure);
				void DeleteFloodWaterSurface(const ev_bool& isSure);
			private:
				ev_bool mWaterCreated;

			};
		}

	}
}

#endif


