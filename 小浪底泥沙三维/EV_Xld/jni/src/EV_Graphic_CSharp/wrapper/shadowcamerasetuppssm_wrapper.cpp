/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowcamerasetuppssm.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real_Callback)(_in ev_uint64  splitIndex, _in Real factor);
			typedef void  ( _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback)(_in Real n);
			typedef Real  ( _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback)(_in ev_bool s);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback)(_in void* angle);
			typedef void*  ( _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback)(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration);
			class CPSSMShadowCameraSetupProxy : public EarthView::World::Graphic::CPSSMShadowCameraSetup
			{
			private:
				EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real_Callback* m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real_Callback;
				EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback* m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback;
				EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback* m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback;
				EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback* m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback;
				EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback* m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback;
				EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback* m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback;
				EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback* m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback;
				EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback;
			public:
				CPSSMShadowCameraSetupProxy(EarthView::World::Core::CNameValuePairList *pList) : CPSSMShadowCameraSetup(pList)
				{
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real_Callback = NULL;
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback = NULL;
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real(EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_Real(EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real(EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool(EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool(EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree(EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree(EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback = pCallback;
				}
				virtual void setOptimalAdjustFactor(_in ev_size_t splitIndex, _in Real factor)
				{
					if(m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real_Callback(splitIndex, factor);
					}
					else
						return this->CPSSMShadowCameraSetup::setOptimalAdjustFactor(splitIndex, factor);
				}
				virtual void getShadowCamera(_in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_size_t iteration) const
				{
					if(m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback(sm, cam, vp, light, texCam, iteration);
					}
					else
						return this->CPSSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				}
				virtual Real getOptimalAdjustFactor() const
				{
					if(m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback();
						return returnValue;
					}
					else
						return this->CPSSMShadowCameraSetup::getOptimalAdjustFactor();
				}
				virtual void setUseSimpleOptimalAdjust(_in ev_bool s)
				{
					if(m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback(s);
					}
					else
						return this->CPSSMShadowCameraSetup::setUseSimpleOptimalAdjust(s);
				}
				virtual ev_bool getUseSimpleOptimalAdjust() const
				{
					if(m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPSSMShadowCameraSetup::getUseSimpleOptimalAdjust();
				}
				virtual void setCameraLightDirectionThreshold(_in EarthView::World::Spatial::Math::CDegree angle)
				{
					if(m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback(&angle);
					}
					else
						return this->CPSSMShadowCameraSetup::setCameraLightDirectionThreshold(angle);
				}
				virtual EarthView::World::Spatial::Math::CDegree getCameraLightDirectionThreshold() const
				{
					if(m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CDegree returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CPSSMShadowCameraSetup::getCameraLightDirectionThreshold();
				}
			};
			REGISTER_FACTORY_CLASS(CPSSMShadowCameraSetupProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_push_back_void_Real(void *pObjectXXXX, _in Real& t )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_front_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_back_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_insert_void_ev_uint32_Real(void *pObjectXXXX, _in ev_uint32 pos, _in Real& t )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList& objYYYY = *(EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjXXXX;
				Real& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_at_Real_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_CPSSMShadowCameraSetupSplitPointList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_push_back_void_Real(void *pObjectXXXX, _in Real& t )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_front_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_back_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_insert_void_ev_uint32_Real(void *pObjectXXXX, _in ev_uint32 pos, _in Real& t )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList& objYYYY = *(EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjXXXX;
				Real& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_at_Real_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_OptimalAdjustFactorList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_calculateSplitPoints_void_ev_size_t_Real_Real_Real(void *pObjectXXXX, _in ev_uint64  splitCount, _in Real nearDist, _in Real farDist, _in Real lambda )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->calculateSplitPoints(splitCount, nearDist, farDist, lambda);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_calculateSplitPoints_void_ev_size_t_Real_Real(void *pObjectXXXX, _in ev_uint64  splitCount, _in Real nearDist, _in Real farDist )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->calculateSplitPoints(splitCount, nearDist, farDist);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_setSplitPoints_void_CPSSMShadowCameraSetupSplitPointList(void *pObjectXXXX, _in const void* newSplitPoints )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->setSplitPoints(*(EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList*)newSplitPoints);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real(void *pObjectXXXX, _in ev_uint64  splitIndex, _in Real factor )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CPSSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CPSSMShadowCameraSetup*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CPSSMShadowCameraSetup::setOptimalAdjustFactor(splitIndex, factor);
				else
					ptrNativeObject->setOptimalAdjustFactor(splitIndex, factor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real( void *pObjectXXXX, EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real_Callback* pCallback )
			{
				CPSSMShadowCameraSetupProxy* ptr = dynamic_cast<CPSSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_ev_size_t_Real_NoVirtual(void *pObjectXXXX, _in ev_uint64  splitIndex, _in Real factor )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CPSSMShadowCameraSetup::setOptimalAdjustFactor(splitIndex, factor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_setSplitPadding_void_Real(void *pObjectXXXX, _in Real pad )
			{
				EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->setSplitPadding(pad);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getSplitPadding_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getSplitPadding();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getSplitCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getSplitCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CPSSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CPSSMShadowCameraSetup*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CPSSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
				else
					ptrNativeObject->getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Callback* pCallback )
			{
				CPSSMShadowCameraSetupProxy* ptr = dynamic_cast<CPSSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSceneManager* sm, _in const EarthView::World::Graphic::CCamera* cam, _in const EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* texCam, _in ev_uint64  iteration )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CPSSMShadowCameraSetup::getShadowCamera(sm, cam, vp, light, texCam, iteration);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getSplitPoints_CPSSMShadowCameraSetupSplitPointList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				const EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList& objXXXX = ptrNativeObject->getSplitPoints();
				const EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real_ev_size_t(void *pObjectXXXX, _in ev_uint64  splitIndex )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOptimalAdjustFactor(splitIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				if (dynamic_cast<CPSSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CPSSMShadowCameraSetup*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CPSSMShadowCameraSetup::getOptimalAdjustFactor();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getOptimalAdjustFactor();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real( void *pObjectXXXX, EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real_Callback* pCallback )
			{
				CPSSMShadowCameraSetupProxy* ptr = dynamic_cast<CPSSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPSSMShadowCameraSetup_getOptimalAdjustFactor_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPSSMShadowCameraSetup* ptrNativeObject = (EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CPSSMShadowCameraSetup::getOptimalAdjustFactor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Callback* pCallback )
			{
				CPSSMShadowCameraSetupProxy* ptr = dynamic_cast<CPSSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setOptimalAdjustFactor_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Callback* pCallback )
			{
				CPSSMShadowCameraSetupProxy* ptr = dynamic_cast<CPSSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Callback* pCallback )
			{
				CPSSMShadowCameraSetupProxy* ptr = dynamic_cast<CPSSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Callback* pCallback )
			{
				CPSSMShadowCameraSetupProxy* ptr = dynamic_cast<CPSSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Callback* pCallback )
			{
				CPSSMShadowCameraSetupProxy* ptr = dynamic_cast<CPSSMShadowCameraSetupProxy*>((EarthView::World::Graphic::CPSSMShadowCameraSetup*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPSSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree(pCallback);
				}
			}
		}
	}
}
