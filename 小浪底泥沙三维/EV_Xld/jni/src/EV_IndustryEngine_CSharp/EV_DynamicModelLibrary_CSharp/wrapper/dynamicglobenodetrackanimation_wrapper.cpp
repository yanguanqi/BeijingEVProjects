/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicglobenodetrackanimation.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
		}
	}
}
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_Callback)(_in const void* refreshPoints);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback)(_in const ev_real64& time);
			typedef ev_real64  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback)();
			typedef void*  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_Callback)();
			typedef void*  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_Callback)(_in const ev_real64& time);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_Callback)(_in int altitudeMode);
			typedef int  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ref_globeNodeTrackAnimationListener);
			typedef EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback)(_in const ev_bool& enable);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_Callback)(_in const ev_bool& enable);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_Callback)(_in const ev_real64& frequency);
			typedef ev_real64  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback)(_in EarthView::World::Graphic::CSceneNode* ref_node);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			class CDynamicGlobeNodeTrackAnimationProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback;
			public:
				CDynamicGlobeNodeTrackAnimationProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicGlobeNodeTrackAnimation(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
				}
				virtual void createAnimation()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_Callback();
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::createAnimation();
				}
				virtual void refreshAnimation(_in const EarthView::World::Spatial3D::CGlobeControlPointMap& refreshPoints)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_Callback(&refreshPoints);
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::refreshAnimation(refreshPoints);
				}
				virtual void setCurrentFrameTime(_in const ev_real64& time)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback(time);
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::setCurrentFrameTime(time);
				}
				virtual ev_real64 getCurrentFrameTime() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::getCurrentFrameTime();
				}
				virtual EarthView::World::Spatial3D::CGlobeControlPoint getCurrentFrameControlPoint() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::CGlobeControlPoint returnValue = *(EarthView::World::Spatial3D::CGlobeControlPoint*)m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_Callback();
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::getCurrentFrameControlPoint();
				}
				virtual EarthView::World::Spatial3D::CGlobeControlPoint getKeyFrameControlPoint(_in const ev_real64& time) const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::CGlobeControlPoint returnValue = *(EarthView::World::Spatial3D::CGlobeControlPoint*)m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_Callback(time);
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::getKeyFrameControlPoint(time);
				}
				virtual ev_bool getAnimationIsLooping()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::getAnimationIsLooping();
				}
				virtual void setAltitudeMode(_in EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_Callback((int)altitudeMode);
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::setAltitudeMode(altitudeMode);
				}
				virtual EarthView::World::Spatial3D::CFLyParam::AltitudeMode getAltitudeMode()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::CFLyParam::AltitudeMode returnValue = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode)m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_Callback();
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::getAltitudeMode();
				}
				virtual void setGlobeNodeTrackAnimationListener(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ref_globeNodeTrackAnimationListener)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_Callback(ref_globeNodeTrackAnimationListener);
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::setGlobeNodeTrackAnimationListener(ref_globeNodeTrackAnimationListener);
				}
				virtual EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* getGlobeNodeTrackAnimationListener()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_Callback();
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::getGlobeNodeTrackAnimationListener();
				}
				virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::frameStarted(evt);
				}
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::frameRenderingQueued(evt);
				}
				virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::frameEnded(evt);
				}
				virtual void clearAllGlobeNodeTrackPoints()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_Callback();
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::clearAllGlobeNodeTrackPoints();
				}
				virtual ev_bool canStart() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::canStart();
				}
				virtual ev_bool hasRequestCreateAnimation() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::hasRequestCreateAnimation();
				}
				virtual ev_bool hasCreatedAnimation() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::hasCreatedAnimation();
				}
				virtual void setOnLineModeEnabled(_in const ev_bool& enable)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::setOnLineModeEnabled(enable);
				}
				virtual ev_bool getOnLineModeEnabled() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::getOnLineModeEnabled();
				}
				virtual void setAnimationsetEnabled(_in const ev_bool& enable)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::setAnimationsetEnabled(enable);
				}
				virtual ev_bool getAnimationsetEnabled() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::getAnimationsetEnabled();
				}
				virtual void setArouseFrequency(_in const ev_real64& frequency)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_Callback(frequency);
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::setArouseFrequency(frequency);
				}
				virtual ev_real64 getArouseFrequency() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::getArouseFrequency();
				}
				virtual void forceArouseAnimation()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_Callback();
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::forceArouseAnimation();
				}
				virtual void destoryAnimation()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void_Callback();
					}
					else
						return this->CDynamicGlobeNodeTrackAnimation::destoryAnimation();
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicGlobeNodeTrackAnimationProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::createAnimation();
				else
					ptrNativeObject->createAnimation();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::createAnimation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap(void *pObjectXXXX, _in const void* refreshPoints )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::refreshAnimation(*(EarthView::World::Spatial3D::CGlobeControlPointMap*)refreshPoints);
				else
					ptrNativeObject->refreshAnimation(*(EarthView::World::Spatial3D::CGlobeControlPointMap*)refreshPoints);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_NoVirtual(void *pObjectXXXX, _in const void* refreshPoints )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::refreshAnimation(*(EarthView::World::Spatial3D::CGlobeControlPointMap*)refreshPoints);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64(void *pObjectXXXX, _in const ev_real64& time )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setCurrentFrameTime(time);
				else
					ptrNativeObject->setCurrentFrameTime(time);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64& time )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setCurrentFrameTime(time);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getCurrentFrameTime();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getCurrentFrameTime();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getCurrentFrameTime();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial3D::CGlobeControlPoint objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getCurrentFrameControlPoint();
					EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial3D::CGlobeControlPoint objXXXX = ptrNativeObject->getCurrentFrameControlPoint();
					EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getCurrentFrameControlPoint();
				EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPoint(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64(void *pObjectXXXX, _in const ev_real64& time )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial3D::CGlobeControlPoint objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getKeyFrameControlPoint(time);
					EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial3D::CGlobeControlPoint objXXXX = ptrNativeObject->getKeyFrameControlPoint(time);
					EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64& time )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getKeyFrameControlPoint(time);
				EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPoint(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAnimationIsLooping();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getAnimationIsLooping();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAnimationIsLooping();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode(void *pObjectXXXX, _in int altitudeMode )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setAltitudeMode((EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
				else
					ptrNativeObject->setAltitudeMode((EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_NoVirtual(void *pObjectXXXX, _in int altitudeMode )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setAltitudeMode((EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAltitudeMode();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->getAltitudeMode();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAltitudeMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ref_globeNodeTrackAnimationListener )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setGlobeNodeTrackAnimationListener(ref_globeNodeTrackAnimationListener);
				else
					ptrNativeObject->setGlobeNodeTrackAnimationListener(ref_globeNodeTrackAnimationListener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ref_globeNodeTrackAnimationListener )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setGlobeNodeTrackAnimationListener(ref_globeNodeTrackAnimationListener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getGlobeNodeTrackAnimationListener();
					return objXXXX;
				}
				else
				{
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* objXXXX = ptrNativeObject->getGlobeNodeTrackAnimationListener();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getGlobeNodeTrackAnimationListener();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameStarted(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameStarted(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameStarted(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameRenderingQueued(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameRenderingQueued(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameRenderingQueued(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameEnded(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameEnded(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::frameEnded(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::clearAllGlobeNodeTrackPoints();
				else
					ptrNativeObject->clearAllGlobeNodeTrackPoints();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::clearAllGlobeNodeTrackPoints();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::canStart();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canStart();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::canStart();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::hasRequestCreateAnimation();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasRequestCreateAnimation();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::hasRequestCreateAnimation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::hasCreatedAnimation();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasCreatedAnimation();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::hasCreatedAnimation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setOnLineModeEnabled(enable);
				else
					ptrNativeObject->setOnLineModeEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setOnLineModeEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getOnLineModeEnabled();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getOnLineModeEnabled();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getOnLineModeEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setAnimationsetEnabled(enable);
				else
					ptrNativeObject->setAnimationsetEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setAnimationsetEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAnimationsetEnabled();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getAnimationsetEnabled();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getAnimationsetEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64(void *pObjectXXXX, _in const ev_real64& frequency )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setArouseFrequency(frequency);
				else
					ptrNativeObject->setArouseFrequency(frequency);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64& frequency )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::setArouseFrequency(frequency);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getArouseFrequency();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getArouseFrequency();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::getArouseFrequency();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::forceArouseAnimation();
				else
					ptrNativeObject->forceArouseAnimation();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation::forceArouseAnimation();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getControlPointMap_CGlobeControlPointMap(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPointMap objXXXX = ptrNativeObject->getControlPointMap();
				EarthView::World::Spatial3D::CGlobeControlPointMap *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPointMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void(pCallback);
				}
			}
		}
	}
}
