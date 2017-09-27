/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/analysis3dlistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_Callback)(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_Callback)(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_Callback)(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_Callback)(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_Callback)(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_Callback)(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, _in char*& info);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_Callback)(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, _in ev_uint32 value, _in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_Callback)(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* pTool);
				class CAnalysis3DListenerProxy : public EarthView::World::Spatial3D::Analysis::CAnalysis3DListener
				{
				private:
					EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_Callback;
				public:
					CAnalysis3DListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnalysis3DListener(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool(EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool(EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool(EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool(EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool(EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32(EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool(EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_Callback = pCallback;
					}
					virtual void onAnalysisStart(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_Callback(tool);
						}
						else
							return this->CAnalysis3DListener::onAnalysisStart(tool);
					}
					virtual void onAnalysisEnd(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_Callback(tool);
						}
						else
							return this->CAnalysis3DListener::onAnalysisEnd(tool);
					}
					virtual void onEventStart(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_Callback(tool);
						}
						else
							return this->CAnalysis3DListener::onEventStart(tool);
					}
					virtual void onEventEnd(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_Callback(tool);
						}
						else
							return this->CAnalysis3DListener::onEventEnd(tool);
					}
					virtual void prepareParma(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_Callback(tool);
						}
						else
							return this->CAnalysis3DListener::prepareParma(tool);
					}
					virtual void onStepChanged(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, _in EVString info)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* info_Char = info.makeBuffer();
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_Callback(tool, info_Char);
						}
						else
							return this->CAnalysis3DListener::onStepChanged(tool, info);
					}
					virtual void onProgressChanged(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, _in ev_uint32 value, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_Callback(tool, value, count);
						}
						else
							return this->CAnalysis3DListener::onProgressChanged(tool, value, count);
					}
					virtual void onMouseClicked(_in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* pTool)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_Callback(pTool);
						}
						else
							return this->CAnalysis3DListener::onMouseClicked(pTool);
					}
				};
				REGISTER_FACTORY_CLASS(CAnalysis3DListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onAnalysisStart(tool);
					else
						ptrNativeObject->onAnalysisStart(tool);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_Callback* pCallback )
				{
					CAnalysis3DListenerProxy* ptr = dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onAnalysisStart(tool);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onAnalysisEnd(tool);
					else
						ptrNativeObject->onAnalysisEnd(tool);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_Callback* pCallback )
				{
					CAnalysis3DListenerProxy* ptr = dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onAnalysisEnd(tool);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onEventStart(tool);
					else
						ptrNativeObject->onEventStart(tool);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_Callback* pCallback )
				{
					CAnalysis3DListenerProxy* ptr = dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onEventStart(tool);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onEventEnd(tool);
					else
						ptrNativeObject->onEventEnd(tool);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_Callback* pCallback )
				{
					CAnalysis3DListenerProxy* ptr = dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onEventEnd(tool);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::prepareParma(tool);
					else
						ptrNativeObject->prepareParma(tool);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_Callback* pCallback )
				{
					CAnalysis3DListenerProxy* ptr = dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::prepareParma(tool);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, _in char* info )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onStepChanged(tool, info1);
					else
						ptrNativeObject->onStepChanged(tool, info1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_Callback* pCallback )
				{
					CAnalysis3DListenerProxy* ptr = dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, _in char* info )
				{
					EarthView::World::Core::ev_string info1 = info;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onStepChanged(tool, info1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, _in ev_uint32 value, _in ev_uint32 count )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onProgressChanged(tool, value, count);
					else
						ptrNativeObject->onProgressChanged(tool, value, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CAnalysis3DListenerProxy* ptr = dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, _in ev_uint32 value, _in ev_uint32 count )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onProgressChanged(tool, value, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* pTool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onMouseClicked(pTool);
					else
						ptrNativeObject->onMouseClicked(pTool);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_Callback* pCallback )
				{
					CAnalysis3DListenerProxy* ptr = dynamic_cast<CAnalysis3DListenerProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* pTool )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DListener::onMouseClicked(pTool);
				}
			}
		}
	}
}
