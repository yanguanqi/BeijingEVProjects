/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderqueue.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall Get_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_first( void *pObjectXXXX, ev_uint8  value )
			{
				((EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueGroup*  _stdcall Get_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueGroup* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupPair_second( void *pObjectXXXX, EarthView::World::Graphic::CRenderQueueGroup*  value )
			{
				((EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupIterator_OperatorPlusLeftIncrease_RenderQueueGroupIterator(void *pObjXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator& objXXXX = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) pObjXXXX;
				++objXXXX;
				return (void*)pObjXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupIterator_OperatorPlusRightIncrease_RenderQueueGroupIterator_int(void *pObjXXXX, _in int )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator& objXXXX = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator result = objXXXX++;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator* pnew = new EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator(result);
				pnew->setExternFree(true);
				return (void*)pnew;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupIterator_OperatorNotEquals_bool_RenderQueueGroupIterator(void *pObjXXXX, _in const void* o )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator& objXXXX = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator& objXXXX1 = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*)o;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupIterator_OperatorEquals_bool_RenderQueueGroupIterator(void *pObjXXXX, _in const void* o )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator& objXXXX = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator& objXXXX1 = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*)o;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_RenderQueueGroupIterator_getValue_RenderQueueGroupPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& objXXXX = ptrNativeObject->getValue();
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_insert_void_RenderQueueGroupPair(void *pObjectXXXX, _in void* v )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap*) pObjectXXXX;
				ptrNativeObject->insert(*(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair*)v);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_find_RenderQueueGroupIterator_ev_uint8(void *pObjectXXXX, _in ev_uint8 key )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator objXXXX = ptrNativeObject->find(key);
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator *pXXXX = new EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_begin_RenderQueueGroupIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator objXXXX = ptrNativeObject->begin();
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator *pXXXX = new EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_end_RenderQueueGroupIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator objXXXX = ptrNativeObject->end();
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator *pXXXX = new EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_RenderQueueGroupMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue::QueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue::QueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueGroup*  _stdcall EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_nextValue_CRenderQueueGroup(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue::QueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueGroup* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueGroup**  _stdcall EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_nextValuePtr_CRenderQueueGroup(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueGroup** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueGroup*  _stdcall EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_next_CRenderQueueGroup(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueGroup* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_getBegin_RenderQueueGroupPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_getEnd_RenderQueueGroupPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueue_QueueGroupIterator_getCurrent_RenderQueueGroupPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_OperatorAssign_ConstQueueGroupIterator_ConstQueueGroupIterator(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator& objXXXX = *((EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*)other;
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueGroup*  _stdcall EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_nextValue_CRenderQueueGroup(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueGroup* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueGroup**  _stdcall EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_nextValuePtr_CRenderQueueGroup(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueGroup** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueGroup*  _stdcall EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_next_CRenderQueueGroup(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueGroup* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_getBegin_RenderQueueGroupPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_getEnd_RenderQueueGroupPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderQueue_ConstQueueGroupIterator_getCurrent_RenderQueueGroupPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in ev_uint8 groupID, _in ev_uint16 priority, _inout EarthView::World::Graphic::CTechnique** ppTech, _in EarthView::World::Graphic::CRenderQueue* pQueue);
			class CRenderableListenerProxy : public EarthView::World::Graphic::CRenderQueue::CRenderableListener
			{
			private:
				EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_Callback* m_EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_Callback;
			public:
				CRenderableListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderableListener(pList)
				{
					m_EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_Callback = pCallback;
				}
				virtual ev_bool renderableQueued(_in EarthView::World::Graphic::CRenderable* rend, _in ev_uint8 groupID, _in ev_uint16 priority, _inout EarthView::World::Graphic::CTechnique** ppTech, _in EarthView::World::Graphic::CRenderQueue* pQueue)
				{
					if(m_EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_Callback(rend, groupID, priority, ppTech, pQueue);
						return returnValue;
					}
					else
						return this->CRenderableListener::renderableQueued(rend, groupID, priority, ppTech, pQueue);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderableListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in ev_uint8 groupID, _in ev_uint16 priority, _inout EarthView::World::Graphic::CTechnique** ppTech, _in EarthView::World::Graphic::CRenderQueue* pQueue )
			{
				EarthView::World::Graphic::CRenderQueue::CRenderableListener* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::CRenderableListener*) pObjectXXXX;
				if (dynamic_cast<CRenderableListenerProxy*>((EarthView::World::Graphic::CRenderQueue::CRenderableListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueue::CRenderableListener::renderableQueued(rend, groupID, priority, ppTech, pQueue);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->renderableQueued(rend, groupID, priority, ppTech, pQueue);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_Callback* pCallback )
			{
				CRenderableListenerProxy* ptr = dynamic_cast<CRenderableListenerProxy*>((EarthView::World::Graphic::CRenderQueue::CRenderableListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueue_CRenderableListener_renderableQueued_ev_bool_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in ev_uint8 groupID, _in ev_uint16 priority, _inout EarthView::World::Graphic::CTechnique** ppTech, _in EarthView::World::Graphic::CRenderQueue* pQueue )
			{
				EarthView::World::Graphic::CRenderQueue::CRenderableListener* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue::CRenderableListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderQueue::CRenderableListener::renderableQueued(rend, groupID, priority, ppTech, pQueue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_clear_void_ev_bool(void *pObjectXXXX, _in ev_bool destroyPassMaps )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->clear(destroyPassMaps);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueGroup*  _stdcall EarthView_World_Graphic_CRenderQueue_getQueueGroup_CRenderQueueGroup_ev_uint8(void *pObjectXXXX, _in ev_uint8 qid )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueGroup* objXXXX = ptrNativeObject->getQueueGroup(qid);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_addRenderable_void_CRenderable_ev_uint8_ev_uint16(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* ref_pRend, _in ev_uint8 groupID, _in ev_uint16 priority )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->addRenderable(ref_pRend, groupID, priority);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_addRenderable_void_CRenderable_ev_uint8(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* ref_pRend, _in ev_uint8 groupId )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->addRenderable(ref_pRend, groupId);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_addRenderable_void_CRenderable(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* ref_pRend )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->addRenderable(ref_pRend);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueue_existRenderable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existRenderable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CRenderQueue_getDefaultQueueGroup_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->getDefaultQueueGroup();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_setDefaultRenderablePriority_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 priority )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->setDefaultRenderablePriority(priority);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderQueue_getDefaultRenderablePriority_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getDefaultRenderablePriority();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_setDefaultQueueGroup_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 grp )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->setDefaultQueueGroup(grp);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderQueue__getQueueGroupIterator_QueueGroupIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator objXXXX = ptrNativeObject->_getQueueGroupIterator();
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator *pXXXX = new EarthView::World::Graphic::CRenderQueue::QueueGroupIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_setSplitPassesByLightingType_void_ev_bool(void *pObjectXXXX, _in ev_bool split )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->setSplitPassesByLightingType(split);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueue_getSplitPassesByLightingType_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSplitPassesByLightingType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_setSplitNoShadowPasses_void_ev_bool(void *pObjectXXXX, _in ev_bool split )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->setSplitNoShadowPasses(split);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueue_getSplitNoShadowPasses_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSplitNoShadowPasses();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_setShadowCastersCannotBeReceivers_void_ev_bool(void *pObjectXXXX, _in ev_bool ind )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->setShadowCastersCannotBeReceivers(ind);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderQueue_getShadowCastersCannotBeReceivers_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getShadowCastersCannotBeReceivers();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_setRenderableListener_void_CRenderableListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue::CRenderableListener* ref_listener )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->setRenderableListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueue::CRenderableListener*  _stdcall EarthView_World_Graphic_CRenderQueue_getRenderableListener_CRenderableListener(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueue::CRenderableListener* objXXXX = ptrNativeObject->getRenderableListener();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_merge_void_CRenderQueue(void *pObjectXXXX, _in const EarthView::World::Graphic::CRenderQueue* rhs )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->merge(rhs);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueue_processVisibleObject_void_CMovableObject_CCamera_ev_bool_VisibleObjectsBoundsInfo(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* mo, _in EarthView::World::Graphic::CCamera* cam, _in ev_bool onlyShadowCasters, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds )
			{
				EarthView::World::Graphic::CRenderQueue* ptrNativeObject = (EarthView::World::Graphic::CRenderQueue*) pObjectXXXX;
				ptrNativeObject->processVisibleObject(mo, cam, onlyShadowCasters, visibleBounds);
			}
		}
	}
}
