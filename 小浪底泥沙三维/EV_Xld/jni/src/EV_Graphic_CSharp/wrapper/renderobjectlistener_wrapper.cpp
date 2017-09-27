/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderobjectlistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges);
			class CRenderObjectListenerProxy : public EarthView::World::Graphic::CRenderObjectListener
			{
			private:
				EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* m_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback;
				EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* m_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback;
			public:
				CRenderObjectListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderObjectListener(pList)
				{
					m_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = pCallback;
				}
				virtual void notifyRenderSingleObjectStarted(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges)
				{
					if(m_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
					else
						return this->CRenderObjectListener::notifyRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
				virtual void notifyRenderSingleObjectEnd(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges)
				{
					if(m_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
					else
						return this->CRenderObjectListener::notifyRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderObjectListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges )
			{
				EarthView::World::Graphic::CRenderObjectListener* ptrNativeObject = (EarthView::World::Graphic::CRenderObjectListener*) pObjectXXXX;
				if (dynamic_cast<CRenderObjectListenerProxy*>((EarthView::World::Graphic::CRenderObjectListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderObjectListener::notifyRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
				else
					ptrNativeObject->notifyRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback )
			{
				CRenderObjectListenerProxy* ptr = dynamic_cast<CRenderObjectListenerProxy*>((EarthView::World::Graphic::CRenderObjectListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges )
			{
				EarthView::World::Graphic::CRenderObjectListener* ptrNativeObject = (EarthView::World::Graphic::CRenderObjectListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderObjectListener::notifyRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges )
			{
				EarthView::World::Graphic::CRenderObjectListener* ptrNativeObject = (EarthView::World::Graphic::CRenderObjectListener*) pObjectXXXX;
				if (dynamic_cast<CRenderObjectListenerProxy*>((EarthView::World::Graphic::CRenderObjectListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderObjectListener::notifyRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
				else
					ptrNativeObject->notifyRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback )
			{
				CRenderObjectListenerProxy* ptr = dynamic_cast<CRenderObjectListenerProxy*>((EarthView::World::Graphic::CRenderObjectListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderObjectListener_notifyRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges )
			{
				EarthView::World::Graphic::CRenderObjectListener* ptrNativeObject = (EarthView::World::Graphic::CRenderObjectListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderObjectListener::notifyRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
			}
		}
	}
}
