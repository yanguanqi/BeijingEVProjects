#ifndef EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWROAM_H
#define EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWROAM_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "spatial3dstreetview/streetviewstructs.h"
#include "core/event.h"
#include "core/threaddefines.h"
#include "spatial3dstreetview/streetviewtile.h"
#include "spatial3dstreetview/streetviewlayer.h"
#include "download/streetviewserviceconnection.h"

#define StreetViewMoveEventType CEvent::User+123

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class CCommonSceneControl;
			}

			class CCommonSceneManager;
			class CCommonSceneCamera;
			class CStreetViewCameraManipulator;
			class CStreetViewFadeInOut;
			class CStreetViewLayer;
			class CStreetViewLayerListener;
			class CStreetViewRoam;

			class EV_Spatial3DStreetView_DLL CStreetViewRoam : public EarthView::World::Core::CEventObject, public EarthView::World::Graphic::CFrameListener
			{
			public:
				class CStreetViewMoveEvent : public EarthView::World::Core::CEvent
				{
				public:
					CStreetViewMoveEvent() : CEvent(StreetViewMoveEventType) {}
				public:
					EarthView::World::Spatial::Download::CStreetPoint mStreetPoint;
					EarthView::World::Spatial3D::CStreetViewLayer* mpStreetViewLayer;
				};

				class CStreetViewRoamLayerListener : public EarthView::World::Spatial3D::CStreetViewLayerListener
				{
ev_private:
					CStreetViewRoamLayerListener(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					CStreetViewRoamLayerListener(EarthView::World::Spatial3D::CStreetViewRoam* pRoam);
					virtual ev_void onLayerRemoved();

				private:
					CStreetViewRoamLayerListener();
					CStreetViewRoam* mpRoam;
				};

ev_private:
				CStreetViewRoam(_in EarthView::World::Core::CNameValuePairList * pList);
			public:
				CStreetViewRoam(EarthView::World::Spatial3D::Controls::CCommonSceneControl* pControl);
				virtual ~CStreetViewRoam();

				virtual ev_void initial(const ev_real32 sphereRadius, const ev_real32 arrowScale, const ev_int16 maxLevel
					, CStreetViewLayer* pLayer, const EarthView::World::Spatial::Download::CStreetPoint& streetPoint);
				virtual ev_void move(const CStreeViewArrowIndicator::ArrowDirection direction);
				ev_void removeStreetViewLayer();

				ev_bool setCurrStreetPoint(EarthView::World::Spatial3D::CStreetViewLayer* pLayer
					, const EarthView::World::Spatial::Download::CStreetPoint& streetPoint);
				ev_void getCurrStreetPoint(EarthView::World::Spatial::Download::CStreetPoint& streetPoint);
				EarthView::World::Spatial3D::CStreetViewSphere* getStreetViewSphere();
				EarthView::World::Spatial3D::CStreetViewLayer* getStreetViewLayer();
				EarthView::World::Spatial3D::CStreetViewFadeInOut* getStreetViewFadeInOut();
				ev_void startFadeInOut(ev_real64 time, ev_bool bUseEvent=false);
				ev_void endFadeInOut(ev_bool bUseEvent=false);
				ev_void notifyMovePoint();

				virtual EarthView::World::Core::DataStreamPtr getTileData(const ev_int32 level, const ev_int32 row, const ev_int32 col, const EVString& imageDir);				
				virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);

			protected:
				const ev_bool isStreetPointValid(const EarthView::World::Spatial3D::CLayerStreetPointDirection& streetPointDirection) const;
				const ev_uint16 getArrowDirection(const EarthView::World::Spatial3D::CLayerStreetPoint& layerStreetPoint2) const;
				const ev_bool getNextStreetPoint(const EarthView::World::Spatial::Download::CStreetPoint& currStreetPoint
					, const CStreeViewArrowIndicator::ArrowDirection direction, EarthView::World::Spatial3D::CLayerStreetPoint& nextLayerStreetPoint2) const;
				const ev_bool getNextStreetPoint(const EarthView::World::Spatial3D::CLayerStreetPoint& currLayerStreetPoint2
					, const CStreeViewArrowIndicator::ArrowDirection direction, EarthView::World::Spatial3D::CLayerStreetPoint& nextLayerStreetPoint2) const;
				const ev_bool getNextStreetPoint(const EarthView::World::Spatial3D::CLayerStreetPoint& currLayerStreetPoint2
					, EarthView::World::Spatial3D::CLayerStreetPoint& nextLayerStreetPoint2, ev_bool bPositive=true) const;
				const ev_uint16 getHeading(const EarthView::World::Spatial3D::CLayerStreetPoint& currLayerStreetPoint2, ev_bool bPositive=true) const;
				ev_bool getAngleWithNorth(const EarthView::World::Spatial3D::CLayerStreetPoint& currLayerStreetPoint2, ev_real32& angleWithNorth, ev_bool bPositive=true);

				virtual EarthView::World::Core::DataStreamPtr getTileData(const ev_int32 evid, const ev_int32 level, const ev_int32 row, const ev_int32 col);
				virtual EarthView::World::Core::DataStreamPtr getTileData(const EVString& imagePath);

				virtual ev_bool move(const EarthView::World::Spatial3D::CLayerStreetPoint& layerStreetPoint2);
ev_internal:
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *ev);

			private:				
				EarthView::World::Spatial3D::CStreetViewSphere* mpSphere;
				EarthView::World::Spatial3D::CStreeViewArrowIndicator* mpArrows;
				EarthView::World::Spatial3D::Controls::CCommonSceneControl* mpControl;
				EarthView::World::Spatial3D::CCommonSceneManager* mpSceneMgr;
				EarthView::World::Spatial3D::CCommonSceneCamera* mpCamera;
				EarthView::World::Spatial3D::CStreetViewCameraManipulator* mpCameraManipulator;
				EarthView::World::Spatial3D::CStreetViewFadeInOut* mpStreetViewFadeInOut;
				EarthView::World::Spatial3D::CStreetViewLayer* mpStreetViewLayer;
				EarthView::World::Spatial3D::CStreetViewRoam::CStreetViewRoamLayerListener* mpLayerListener;
				ev_bool mIsMoving;
				ev_bool mIsFadeInOuting;
				ev_bool mIsPositive;

				EV_MUTEX(StreetViewRoam);
				EarthView::World::Spatial::Download::CStreetPoint mStreetPoint;
				EarthView::World::Spatial3D::CLayerStreetPoint mLayerStreetPoint2;
			};			
		}
	}
}

#endif