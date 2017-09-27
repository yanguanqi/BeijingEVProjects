/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/overlay.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef EarthView::World::Graphic::COverlayElement*  ( _stdcall EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real_Callback)(_in Real x, _in Real y);
			class COverlayProxy : public EarthView::World::Graphic::COverlay
			{
			private:
				EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real_Callback* m_EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real_Callback;
			public:
				COverlayProxy(EarthView::World::Core::CNameValuePairList *pList) : COverlay(pList)
				{
					m_EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real(EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::COverlayElement* findElementAt(_in Real x, _in Real y)
				{
					if(m_EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::COverlayElement* returnValue = m_EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real_Callback(x, y);
						return returnValue;
					}
					else
						return this->COverlay::findElementAt(x, y);
				}
			};
			REGISTER_FACTORY_CLASS(COverlayProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_push_back_void_COverlayContainer(void *pObjectXXXX, _in EarthView::World::Graphic::COverlayContainer*& ref_t )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_push_front_void_COverlayContainer(void *pObjectXXXX, _in EarthView::World::Graphic::COverlayContainer*& ref_t )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				ptrNativeObject->push_front(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayContainer*  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_front_COverlayContainer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				EarthView::World::Graphic::COverlayContainer* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayContainer*  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_back_COverlayContainer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				EarthView::World::Graphic::COverlayContainer* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayContainer*  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_at_COverlayContainer_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				EarthView::World::Graphic::COverlayContainer* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_insert_void_ev_uint32_COverlayContainer(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::COverlayContainer*& ref_t )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_remove_void_COverlayContainer(void *pObjectXXXX, _in EarthView::World::Graphic::COverlayContainer*& t )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				ptrNativeObject->remove(t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_OverlayContainerList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList* ptrNativeObject = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayContainer*  _stdcall EarthView_World_Graphic_COverlay_getChild_COverlayContainer_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				EarthView::World::Graphic::COverlayContainer* objXXXX = ptrNativeObject->getChild(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_COverlay_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_COverlay_getOwner_CSceneManager(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				const EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getOwner();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_setOwner_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* ref_sm )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->setOwner(ref_sm);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_setZOrder_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 zorder )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->setZOrder(zorder);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_COverlay_getZOrder_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getZOrder();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlay_isVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlay_isInitialised_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isInitialised();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_show_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->show();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_hide_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->hide();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_add2D_void_COverlayContainer(void *pObjectXXXX, _in EarthView::World::Graphic::COverlayContainer* ref_cont )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->add2D(ref_cont);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_remove2D_void_COverlayContainer(void *pObjectXXXX, _in EarthView::World::Graphic::COverlayContainer* cont )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->remove2D(cont);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_add3D_void_CSceneNode(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* ref_node )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->add3D(ref_node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_remove3D_void_CSceneNode(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* node )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->remove3D(node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_setScroll_void_Real_Real(void *pObjectXXXX, _in Real x, _in Real y )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->setScroll(x, y);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_COverlay_getScrollX_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getScrollX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_COverlay_getScrollY_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getScrollY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_scroll_void_Real_Real(void *pObjectXXXX, _in Real xoff, _in Real yoff )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->scroll(xoff, yoff);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_setRotate_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->setRotate(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_COverlay_getRotate_CRadian(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CRadian& objXXXX = ptrNativeObject->getRotate();
				const EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_rotate_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->rotate(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_setScale_void_Real_Real(void *pObjectXXXX, _in Real x, _in Real y )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->setScale(x, y);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_COverlay_getScaleX_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getScaleX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_COverlay_getScaleY_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getScaleY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay__getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->_getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay__findVisibleObjects_void_CCamera_CRenderQueue(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->_findVisibleObjects(cam, queue);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real(void *pObjectXXXX, _in Real x, _in Real y )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				if (dynamic_cast<COverlayProxy*>((EarthView::World::Graphic::COverlay*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::COverlay::findElementAt(x, y);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->findElementAt(x, y);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real_Callback* pCallback )
			{
				COverlayProxy* ptr = dynamic_cast<COverlayProxy*>((EarthView::World::Graphic::COverlay*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayElement*  _stdcall EarthView_World_Graphic_COverlay_findElementAt_COverlayElement_Real_Real_NoVirtual(void *pObjectXXXX, _in Real x, _in Real y )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				EarthView::World::Graphic::COverlayElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::COverlay::findElementAt(x, y);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COverlay_Overlay2DElementsIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay::Overlay2DElementsIterator* ptrNativeObject = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay_Overlay2DElementsIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator* ptrNativeObject = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayContainer*  _stdcall EarthView_World_Graphic_COverlay_Overlay2DElementsIterator_getCurrent_COverlayContainer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator* ptrNativeObject = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjectXXXX;
				EarthView::World::Graphic::COverlayContainer* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayContainer*  _stdcall EarthView_World_Graphic_COverlay_Overlay2DElementsIterator_next_COverlayContainer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator* ptrNativeObject = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjectXXXX;
				EarthView::World::Graphic::COverlayContainer* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayContainer*  _stdcall EarthView_World_Graphic_COverlay_Overlay2DElementsIterator_getBegin_COverlayContainer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator* ptrNativeObject = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjectXXXX;
				EarthView::World::Graphic::COverlayContainer* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayContainer*  _stdcall EarthView_World_Graphic_COverlay_Overlay2DElementsIterator_getEnd_COverlayContainer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator* ptrNativeObject = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjectXXXX;
				EarthView::World::Graphic::COverlayContainer* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_COverlay_get2DElementsIterator_Overlay2DElementsIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator objXXXX = ptrNativeObject->get2DElementsIterator();
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator *pXXXX = new EarthView::World::Graphic::COverlay::Overlay2DElementsIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_COverlay_getOrigin_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getOrigin();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COverlay__notifyOrigin_void_EVString(void *pObjectXXXX, _in const char* origin )
			{
				EarthView::World::Core::ev_string origin1 = origin;
				EarthView::World::Graphic::COverlay* ptrNativeObject = (EarthView::World::Graphic::COverlay*) pObjectXXXX;
				ptrNativeObject->_notifyOrigin(origin1);
			}
		}
	}
}
