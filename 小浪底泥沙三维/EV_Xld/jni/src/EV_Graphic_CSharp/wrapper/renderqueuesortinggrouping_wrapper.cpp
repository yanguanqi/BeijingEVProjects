/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderqueuesortinggrouping.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderable*  _stdcall Get_EarthView_World_Graphic_RenderablePass_renderable( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderablePass* ptrNativeObject = (EarthView::World::Graphic::RenderablePass*) pObjectXXXX;
				EarthView::World::Graphic::CRenderable* objXXXX = ptrNativeObject->renderable;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RenderablePass_renderable( void *pObjectXXXX, EarthView::World::Graphic::CRenderable*  value )
			{
				((EarthView::World::Graphic::RenderablePass*)pObjectXXXX)->renderable = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall Get_EarthView_World_Graphic_RenderablePass_pass( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderablePass* ptrNativeObject = (EarthView::World::Graphic::RenderablePass*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->pass;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RenderablePass_pass( void *pObjectXXXX, EarthView::World::Graphic::CPass*  value )
			{
				((EarthView::World::Graphic::RenderablePass*)pObjectXXXX)->pass = value;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_Callback)(_in EarthView::World::Graphic::RenderablePass* rp);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_Callback)(_in const EarthView::World::Graphic::CPass* p);
			typedef void  ( _stdcall EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_Callback)(_in EarthView::World::Graphic::CRenderable* r);
			class CQueuedRenderableVisitorProxy : public EarthView::World::Graphic::CQueuedRenderableVisitor
			{
			private:
				EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_Callback* m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_Callback;
				EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_Callback* m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_Callback;
				EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_Callback* m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_Callback;
			public:
				CQueuedRenderableVisitorProxy(EarthView::World::Core::CNameValuePairList *pList) : CQueuedRenderableVisitor(pList)
				{
					m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_Callback = NULL;
					m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_Callback = NULL;
					m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass(EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass(EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable(EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_Callback = pCallback;
				}
				virtual void visit(_in EarthView::World::Graphic::RenderablePass* rp)
				{
					if(m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_Callback(rp);
					}
					else
						return this->CQueuedRenderableVisitor::visit(rp);
				}
				virtual ev_bool visit(_in const EarthView::World::Graphic::CPass* p)
				{
					if(m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_Callback(p);
						return returnValue;
					}
					else
						return this->CQueuedRenderableVisitor::visit(p);
				}
				virtual void visit(_in EarthView::World::Graphic::CRenderable* r)
				{
					if(m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_Callback(r);
					}
					else
						return this->CQueuedRenderableVisitor::visit(r);
				}
			};
			REGISTER_FACTORY_CLASS(CQueuedRenderableVisitorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass(void *pObjectXXXX, _in EarthView::World::Graphic::RenderablePass* rp )
			{
				EarthView::World::Graphic::CQueuedRenderableVisitor* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjectXXXX;
				if (dynamic_cast<CQueuedRenderableVisitorProxy*>((EarthView::World::Graphic::CQueuedRenderableVisitor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(rp);
				else
					ptrNativeObject->visit(rp);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass( void *pObjectXXXX, EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_Callback* pCallback )
			{
				CQueuedRenderableVisitorProxy* ptr = dynamic_cast<CQueuedRenderableVisitorProxy*>((EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_RenderablePass_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RenderablePass* rp )
			{
				EarthView::World::Graphic::CQueuedRenderableVisitor* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(rp);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass(void *pObjectXXXX, _in const EarthView::World::Graphic::CPass* p )
			{
				EarthView::World::Graphic::CQueuedRenderableVisitor* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjectXXXX;
				if (dynamic_cast<CQueuedRenderableVisitorProxy*>((EarthView::World::Graphic::CQueuedRenderableVisitor*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(p);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->visit(p);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass( void *pObjectXXXX, EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_Callback* pCallback )
			{
				CQueuedRenderableVisitorProxy* ptr = dynamic_cast<CQueuedRenderableVisitorProxy*>((EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CQueuedRenderableVisitor_visit_ev_bool_CPass_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CPass* p )
			{
				EarthView::World::Graphic::CQueuedRenderableVisitor* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(p);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* r )
			{
				EarthView::World::Graphic::CQueuedRenderableVisitor* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjectXXXX;
				if (dynamic_cast<CQueuedRenderableVisitorProxy*>((EarthView::World::Graphic::CQueuedRenderableVisitor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(r);
				else
					ptrNativeObject->visit(r);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable( void *pObjectXXXX, EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_Callback* pCallback )
			{
				CQueuedRenderableVisitorProxy* ptr = dynamic_cast<CQueuedRenderableVisitorProxy*>((EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableVisitor_visit_void_CRenderable_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* r )
			{
				EarthView::World::Graphic::CQueuedRenderableVisitor* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(r);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableCollection_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CQueuedRenderableCollection* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableCollection_removePassGroup_void_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CPass* p )
			{
				EarthView::World::Graphic::CQueuedRenderableCollection* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjectXXXX;
				ptrNativeObject->removePassGroup(p);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableCollection_resetOrganisationModes_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CQueuedRenderableCollection* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjectXXXX;
				ptrNativeObject->resetOrganisationModes();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableCollection_addOrganisationMode_void_OrganisationMode(void *pObjectXXXX, _in int om )
			{
				EarthView::World::Graphic::CQueuedRenderableCollection* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjectXXXX;
				ptrNativeObject->addOrganisationMode((EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode)om);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableCollection_addRenderable_void_CPass_CRenderable(void *pObjectXXXX, _in EarthView::World::Graphic::CPass* ref_pass, _in EarthView::World::Graphic::CRenderable* ref_rend )
			{
				EarthView::World::Graphic::CQueuedRenderableCollection* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjectXXXX;
				ptrNativeObject->addRenderable(ref_pass, ref_rend);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableCollection_sort_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CQueuedRenderableCollection* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjectXXXX;
				ptrNativeObject->sort(cam);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableCollection_acceptVisitor_void_CQueuedRenderableVisitor_OrganisationMode(void *pObjectXXXX, _in EarthView::World::Graphic::CQueuedRenderableVisitor* visitor, _in int om )
			{
				const EarthView::World::Graphic::CQueuedRenderableCollection* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjectXXXX;
				ptrNativeObject->acceptVisitor(visitor, (EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode)om);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CQueuedRenderableCollection_merge_void_CQueuedRenderableCollection(void *pObjectXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CQueuedRenderableCollection* ptrNativeObject = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjectXXXX;
				ptrNativeObject->merge(*(EarthView::World::Graphic::CQueuedRenderableCollection*)rhs);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_getSolidsBasic_CQueuedRenderableCollection(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& objXXXX = ptrNativeObject->getSolidsBasic();
				const EarthView::World::Graphic::CQueuedRenderableCollection *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_getSolidsDiffuseSpecular_CQueuedRenderableCollection(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& objXXXX = ptrNativeObject->getSolidsDiffuseSpecular();
				const EarthView::World::Graphic::CQueuedRenderableCollection *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_getSolidsDecal_CQueuedRenderableCollection(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& objXXXX = ptrNativeObject->getSolidsDecal();
				const EarthView::World::Graphic::CQueuedRenderableCollection *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_getSolidsNoShadowReceive_CQueuedRenderableCollection(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& objXXXX = ptrNativeObject->getSolidsNoShadowReceive();
				const EarthView::World::Graphic::CQueuedRenderableCollection *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_getTransparentsUnsorted_CQueuedRenderableCollection(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& objXXXX = ptrNativeObject->getTransparentsUnsorted();
				const EarthView::World::Graphic::CQueuedRenderableCollection *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_getTransparents_CQueuedRenderableCollection(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& objXXXX = ptrNativeObject->getTransparents();
				const EarthView::World::Graphic::CQueuedRenderableCollection *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_resetOrganisationModes_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				ptrNativeObject->resetOrganisationModes();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_addOrganisationMode_void_OrganisationMode(void *pObjectXXXX, _in int om )
			{
				EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				ptrNativeObject->addOrganisationMode((EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode)om);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_defaultOrganisationMode_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				ptrNativeObject->defaultOrganisationMode();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_addRenderable_void_CRenderable_CTechnique(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* ref_pRend, _in EarthView::World::Graphic::CTechnique* ref_pTech )
			{
				EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				ptrNativeObject->addRenderable(ref_pRend, ref_pTech);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_sort_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				ptrNativeObject->sort(cam);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_setSplitPassesByLightingType_void_ev_bool(void *pObjectXXXX, _in ev_bool split )
			{
				EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				ptrNativeObject->setSplitPassesByLightingType(split);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_setSplitNoShadowPasses_void_ev_bool(void *pObjectXXXX, _in ev_bool split )
			{
				EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				ptrNativeObject->setSplitNoShadowPasses(split);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_setShadowCastersCannotBeReceivers_void_ev_bool(void *pObjectXXXX, _in ev_bool ind )
			{
				EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				ptrNativeObject->setShadowCastersCannotBeReceivers(ind);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderPriorityGroup_merge_void_CRenderPriorityGroup(void *pObjectXXXX, _in const EarthView::World::Graphic::CRenderPriorityGroup* rhs )
			{
				EarthView::World::Graphic::CRenderPriorityGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjectXXXX;
				ptrNativeObject->merge(rhs);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_push_ev_bool_ev_uint16_CRenderPriorityGroup(void *pObjectXXXX, _in const ev_uint16& key, _in EarthView::World::Graphic::CRenderPriorityGroup*& ref_val )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderPriorityGroup*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_OperatorIndex_CRenderPriorityGroup_ev_uint16(void *pObjXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap& objYYYY = *(EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderPriorityGroup*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_get_CRenderPriorityGroup_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjectXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_erase_void_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_first( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderPriorityGroup*  _stdcall Get_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair*) pObjectXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderQueueGroup_PriorityMapPair_second( void *pObjectXXXX, EarthView::World::Graphic::CRenderPriorityGroup*  value )
			{
				((EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderPriorityGroup*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_nextValue_CRenderPriorityGroup(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderPriorityGroup**  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_nextValuePtr_CRenderPriorityGroup(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderPriorityGroup*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_next_CRenderPriorityGroup(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_getBegin_PriorityMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_getEnd_PriorityMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_PriorityMapIterator_getCurrent_PriorityMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderPriorityGroup*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_nextValue_CRenderPriorityGroup(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderPriorityGroup**  _stdcall EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_nextValuePtr_CRenderPriorityGroup(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderPriorityGroup*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_next_CRenderPriorityGroup(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_getBegin_PriorityMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_getEnd_PriorityMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_ConstPriorityMapIterator_getCurrent_PriorityMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderQueueGroup_getIterator_PriorityMapIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator objXXXX = ptrNativeObject->getIterator();
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator *pXXXX = new EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_addRenderable_void_CRenderable_CTechnique_ev_uint16(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* pRend, _in EarthView::World::Graphic::CTechnique* pTech, _in ev_uint16 priority )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ptrNativeObject->addRenderable(pRend, pTech, priority);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_clear_void_ev_bool(void *pObjectXXXX, _in ev_bool destroy )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ptrNativeObject->clear(destroy);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_setShadowsEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ptrNativeObject->setShadowsEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueueGroup_getShadowsEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getShadowsEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_setSplitPassesByLightingType_void_ev_bool(void *pObjectXXXX, _in ev_bool split )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ptrNativeObject->setSplitPassesByLightingType(split);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_setSplitNoShadowPasses_void_ev_bool(void *pObjectXXXX, _in ev_bool split )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ptrNativeObject->setSplitNoShadowPasses(split);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_setShadowCastersCannotBeReceivers_void_ev_bool(void *pObjectXXXX, _in ev_bool ind )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ptrNativeObject->setShadowCastersCannotBeReceivers(ind);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_resetOrganisationModes_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ptrNativeObject->resetOrganisationModes();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_addOrganisationMode_void_OrganisationMode(void *pObjectXXXX, _in int om )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ptrNativeObject->addOrganisationMode((EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode)om);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_defaultOrganisationMode_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ptrNativeObject->defaultOrganisationMode();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueGroup_merge_void_CRenderQueueGroup(void *pObjectXXXX, _in const EarthView::World::Graphic::CRenderQueueGroup* rhs )
			{
				EarthView::World::Graphic::CRenderQueueGroup* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueGroup*) pObjectXXXX;
				ptrNativeObject->merge(rhs);
			}
		}
	}
}
