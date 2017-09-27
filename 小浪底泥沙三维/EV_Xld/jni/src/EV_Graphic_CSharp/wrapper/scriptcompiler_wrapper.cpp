/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scriptcompiler.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::ConcreteNode*  _stdcall EarthView_World_Graphic_ConcreteNodePtr_get_ConcreteNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConcreteNodePtr* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodePtr*) pObjectXXXX;
				EarthView::World::Graphic::ConcreteNode* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConcreteNodeList_push_back_void_ConcreteNodePtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::ConcreteNodePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConcreteNodeList_push_front_void_ConcreteNodePtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				ptrNativeObject->push_front(*(EarthView::World::Graphic::ConcreteNodePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConcreteNodeList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConcreteNodeList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ConcreteNodeList_front_ConcreteNodePtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				EarthView::World::Graphic::ConcreteNodePtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::ConcreteNodePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ConcreteNodeList_back_ConcreteNodePtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				EarthView::World::Graphic::ConcreteNodePtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::ConcreteNodePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_ConcreteNodeList_at_ConcreteNodePtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				EarthView::World::Graphic::ConcreteNodePtr& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::ConcreteNodePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConcreteNodeList_insert_void_ev_uint32_ConcreteNodePtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::ConcreteNodePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConcreteNodeList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ConcreteNodeList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_ConcreteNodeList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConcreteNodeList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConcreteNodeList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConcreteNodeList* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::ConcreteNodeList*  _stdcall EarthView_World_Graphic_ConcreteNodeListPtr_get_ConcreteNodeList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConcreteNodeListPtr* ptrNativeObject = (EarthView::World::Graphic::ConcreteNodeListPtr*) pObjectXXXX;
				EarthView::World::Graphic::ConcreteNodeList* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_ConcreteNode_file( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConcreteNode* ptrNativeObject = (EarthView::World::Graphic::ConcreteNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->file;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ConcreteNode_file( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::ConcreteNode*)pObjectXXXX)->file = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_ConcreteNode_token( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConcreteNode* ptrNativeObject = (EarthView::World::Graphic::ConcreteNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->token;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ConcreteNode_token( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::ConcreteNode*)pObjectXXXX)->token = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_ConcreteNode_line( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConcreteNode* ptrNativeObject = (EarthView::World::Graphic::ConcreteNode*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->line;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ConcreteNode_line( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::ConcreteNode*)pObjectXXXX)->line = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_ConcreteNode_type( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConcreteNode* ptrNativeObject = (EarthView::World::Graphic::ConcreteNode*) pObjectXXXX;
				EarthView::World::Graphic::ConcreteNodeType objXXXX = ptrNativeObject->type;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ConcreteNode_type( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::ConcreteNode*)pObjectXXXX)->type = (EarthView::World::Graphic::ConcreteNodeType)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_ConcreteNode_children( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConcreteNode* ptrNativeObject = (EarthView::World::Graphic::ConcreteNode*) pObjectXXXX;
				EarthView::World::Graphic::ConcreteNodeList &objXXXX = ptrNativeObject->children;
				EarthView::World::Graphic::ConcreteNodeList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ConcreteNode_children( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::ConcreteNode*)pObjectXXXX)->children = *(EarthView::World::Graphic::ConcreteNodeList*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::ConcreteNode*  _stdcall Get_EarthView_World_Graphic_ConcreteNode_parent( void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConcreteNode* ptrNativeObject = (EarthView::World::Graphic::ConcreteNode*) pObjectXXXX;
				EarthView::World::Graphic::ConcreteNode* objXXXX = ptrNativeObject->parent;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_ConcreteNode_parent( void *pObjectXXXX, EarthView::World::Graphic::ConcreteNode*  value )
			{
				((EarthView::World::Graphic::ConcreteNode*)pObjectXXXX)->parent = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_AbstractNodePtr_get_CAbstractNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AbstractNodePtr* ptrNativeObject = (EarthView::World::Graphic::AbstractNodePtr*) pObjectXXXX;
				EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AbstractNodeList_push_back_void_AbstractNodePtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::AbstractNodePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AbstractNodeList_push_front_void_AbstractNodePtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				ptrNativeObject->push_front(*(EarthView::World::Graphic::AbstractNodePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AbstractNodeList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AbstractNodeList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_AbstractNodeList_front_AbstractNodePtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodePtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::AbstractNodePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_AbstractNodeList_back_AbstractNodePtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodePtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::AbstractNodePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_AbstractNodeList_at_AbstractNodePtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodePtr& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::AbstractNodePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AbstractNodeList_insert_void_ev_uint32_AbstractNodePtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::AbstractNodePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AbstractNodeList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_AbstractNodeList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_AbstractNodeList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AbstractNodeList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AbstractNodeList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AbstractNodeList* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::AbstractNodeList*  _stdcall EarthView_World_Graphic_AbstractNodeListPtr_get_AbstractNodeList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AbstractNodeListPtr* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeListPtr*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodeList* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			typedef EarthView::World::Graphic::CAbstractNode*  ( _stdcall EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CAbstractNode_getValue_EVString_Callback)();
			class CAbstractNodeProxy : public EarthView::World::Graphic::CAbstractNode
			{
			private:
				EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode_Callback* m_EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode_Callback;
				EarthView_World_Graphic_CAbstractNode_getValue_EVString_Callback* m_EarthView_World_Graphic_CAbstractNode_getValue_EVString_Callback;
			public:
				CAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CAbstractNode(pList)
				{
					m_EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode_Callback = NULL;
					m_EarthView_World_Graphic_CAbstractNode_getValue_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode(EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAbstractNode_getValue_EVString(EarthView_World_Graphic_CAbstractNode_getValue_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAbstractNode_getValue_EVString_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if(m_EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAbstractNode* returnValue = m_EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode_Callback();
						return returnValue;
					}
					else
						return this->CAbstractNode::clone();
				}
				virtual EVString getValue() const
				{
					if(m_EarthView_World_Graphic_CAbstractNode_getValue_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CAbstractNode_getValue_EVString_Callback();
						return returnValue;
					}
					else
						return this->CAbstractNode::getValue();
				}
			};
			REGISTER_FACTORY_CLASS(CAbstractNodeProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CAbstractNode_file( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->file;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAbstractNode_file( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CAbstractNode*)pObjectXXXX)->file = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CAbstractNode_line( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAbstractNode*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->line;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAbstractNode_line( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CAbstractNode*)pObjectXXXX)->line = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CAbstractNode_type( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodeType objXXXX = ptrNativeObject->type;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAbstractNode_type( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CAbstractNode*)pObjectXXXX)->type = (EarthView::World::Graphic::AbstractNodeType)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall Get_EarthView_World_Graphic_CAbstractNode_parent( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->parent;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAbstractNode_parent( void *pObjectXXXX, EarthView::World::Graphic::CAbstractNode*  value )
			{
				((EarthView::World::Graphic::CAbstractNode*)pObjectXXXX)->parent = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CAbstractNodeProxy*>((EarthView::World::Graphic::CAbstractNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAbstractNode::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode( void *pObjectXXXX, EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode_Callback* pCallback )
			{
				CAbstractNodeProxy* ptr = dynamic_cast<CAbstractNodeProxy*>((EarthView::World::Graphic::CAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CAbstractNode_clone_CAbstractNode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAbstractNode::clone();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CAbstractNode_getValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CAbstractNodeProxy*>((EarthView::World::Graphic::CAbstractNode*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CAbstractNode::getValue();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getValue();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAbstractNode_getValue_EVString( void *pObjectXXXX, EarthView_World_Graphic_CAbstractNode_getValue_EVString_Callback* pCallback )
			{
				CAbstractNodeProxy* ptr = dynamic_cast<CAbstractNodeProxy*>((EarthView::World::Graphic::CAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAbstractNode_getValue_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CAbstractNode_getValue_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CAbstractNode::getValue();
				return objXXXX.makeBuffer();
			}
			typedef EarthView::World::Graphic::CAbstractNode*  ( _stdcall EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString_Callback)();
			class CAtomAbstractNodeProxy : public EarthView::World::Graphic::CAtomAbstractNode
			{
			private:
				EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode_Callback* m_EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode_Callback;
				EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString_Callback* m_EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString_Callback;
			public:
				CAtomAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CAtomAbstractNode(pList)
				{
					m_EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode_Callback = NULL;
					m_EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode(EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString(EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString_Callback = pCallback;
				}
				virtual EVString getValue() const
				{
					if(m_EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString_Callback();
						return returnValue;
					}
					else
						return this->CAtomAbstractNode::getValue();
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if(m_EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAbstractNode* returnValue = m_EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CAtomAbstractNode::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CAtomAbstractNodeProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CAtomAbstractNode_value( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAtomAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAtomAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->value;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAtomAbstractNode_value( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CAtomAbstractNode*)pObjectXXXX)->value = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CAtomAbstractNode_id( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAtomAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAtomAbstractNode*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->id;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAtomAbstractNode_id( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CAtomAbstractNode*)pObjectXXXX)->id = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAtomAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAtomAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CAtomAbstractNodeProxy*>((EarthView::World::Graphic::CAtomAbstractNode*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CAtomAbstractNode::getValue();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getValue();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString( void *pObjectXXXX, EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString_Callback* pCallback )
			{
				CAtomAbstractNodeProxy* ptr = dynamic_cast<CAtomAbstractNodeProxy*>((EarthView::World::Graphic::CAtomAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CAtomAbstractNode_getValue_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAtomAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAtomAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CAtomAbstractNode::getValue();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAtomAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAtomAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CAtomAbstractNodeProxy*>((EarthView::World::Graphic::CAtomAbstractNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAtomAbstractNode::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode( void *pObjectXXXX, EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode_Callback* pCallback )
			{
				CAtomAbstractNodeProxy* ptr = dynamic_cast<CAtomAbstractNodeProxy*>((EarthView::World::Graphic::CAtomAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CAtomAbstractNode_clone_CAbstractNode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAtomAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CAtomAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAtomAbstractNode::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_AbstractNodePair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::AbstractNodePair* ptrNativeObject = (EarthView::World::Graphic::AbstractNodePair*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_AbstractNodePair_first( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::AbstractNodePair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_AbstractNodePair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::AbstractNodePair* ptrNativeObject = (EarthView::World::Graphic::AbstractNodePair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->second;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_AbstractNodePair_second( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::AbstractNodePair*)pObjectXXXX)->second = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_AbstractNodePair_OperatorAssign_AbstractNodePair_AbstractNodePair(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Graphic::AbstractNodePair& objXXXX = *((EarthView::World::Graphic::AbstractNodePair*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::AbstractNodePair*)other;
				EarthView::World::Graphic::AbstractNodePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_AbstractNodeMap_push_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* key, _in char* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::AbstractNodeMap* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, val1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_AbstractNodeMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::AbstractNodeMap* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_AbstractNodeMap_OperatorAssign_AbstractNodeMap_AbstractNodeMap(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Graphic::AbstractNodeMap& objXXXX = *((EarthView::World::Graphic::AbstractNodeMap*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::AbstractNodeMap*)other;
				EarthView::World::Graphic::AbstractNodeMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_AbstractNodeMap_OperatorIndex_EVString_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::AbstractNodeMap& objYYYY = *(EarthView::World::Graphic::AbstractNodeMap*) pObjXXXX;
				EVString& objXXXX = objYYYY[key];
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_AbstractNodeMap_get_EVString_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::AbstractNodeMap* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeMap*) pObjectXXXX;
				EVString& objXXXX = ptrNativeObject->get(key1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AbstractNodeMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::AbstractNodeMap* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_AbstractNodeMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AbstractNodeMap* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AbstractNodeMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AbstractNodeMap* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_AbstractNodeMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AbstractNodeMap* ptrNativeObject = (EarthView::World::Graphic::AbstractNodeMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			typedef EarthView::World::Graphic::CAbstractNode*  ( _stdcall EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString_Callback)();
			class CObjectAbstractNodeProxy : public EarthView::World::Graphic::CObjectAbstractNode
			{
			private:
				EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode_Callback* m_EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode_Callback;
				EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString_Callback* m_EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString_Callback;
			public:
				CObjectAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CObjectAbstractNode(pList)
				{
					m_EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode_Callback = NULL;
					m_EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode(EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString(EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if(m_EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAbstractNode* returnValue = m_EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CObjectAbstractNode::clone();
				}
				virtual EVString getValue() const
				{
					if(m_EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString_Callback();
						return returnValue;
					}
					else
						return this->CObjectAbstractNode::getValue();
				}
			};
			REGISTER_FACTORY_CLASS(CObjectAbstractNodeProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CObjectAbstractNode_cls( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->cls;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CObjectAbstractNode_cls( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CObjectAbstractNode*)pObjectXXXX)->cls = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CObjectAbstractNode_name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CObjectAbstractNode_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CObjectAbstractNode*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CObjectAbstractNode_bases( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				EarthView::World::Core::StringVector &objXXXX = ptrNativeObject->bases;
				EarthView::World::Core::StringVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CObjectAbstractNode_bases( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CObjectAbstractNode*)pObjectXXXX)->bases = *(EarthView::World::Core::StringVector*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CObjectAbstractNode_id( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->id;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CObjectAbstractNode_id( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CObjectAbstractNode*)pObjectXXXX)->id = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CObjectAbstractNode_abstract( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->abstract;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CObjectAbstractNode_abstract( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CObjectAbstractNode*)pObjectXXXX)->abstract = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CObjectAbstractNode_children( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodeList &objXXXX = ptrNativeObject->children;
				EarthView::World::Graphic::AbstractNodeList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CObjectAbstractNode_children( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CObjectAbstractNode*)pObjectXXXX)->children = *(EarthView::World::Graphic::AbstractNodeList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CObjectAbstractNode_values( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodeList &objXXXX = ptrNativeObject->values;
				EarthView::World::Graphic::AbstractNodeList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CObjectAbstractNode_values( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CObjectAbstractNode*)pObjectXXXX)->values = *(EarthView::World::Graphic::AbstractNodeList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CObjectAbstractNode_overrides( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodeList &objXXXX = ptrNativeObject->overrides;
				EarthView::World::Graphic::AbstractNodeList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CObjectAbstractNode_overrides( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CObjectAbstractNode*)pObjectXXXX)->overrides = *(EarthView::World::Graphic::AbstractNodeList*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CObjectAbstractNodeProxy*>((EarthView::World::Graphic::CObjectAbstractNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CObjectAbstractNode::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode( void *pObjectXXXX, EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode_Callback* pCallback )
			{
				CObjectAbstractNodeProxy* ptr = dynamic_cast<CObjectAbstractNodeProxy*>((EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CObjectAbstractNode_clone_CAbstractNode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CObjectAbstractNode::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CObjectAbstractNodeProxy*>((EarthView::World::Graphic::CObjectAbstractNode*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CObjectAbstractNode::getValue();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getValue();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString( void *pObjectXXXX, EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString_Callback* pCallback )
			{
				CObjectAbstractNodeProxy* ptr = dynamic_cast<CObjectAbstractNodeProxy*>((EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CObjectAbstractNode_getValue_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CObjectAbstractNode::getValue();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CObjectAbstractNode_addVariable_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				ptrNativeObject->addVariable(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CObjectAbstractNode_setVariable_void_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* value )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				ptrNativeObject->setVariable(name1, value1);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CObjectAbstractNode_getVariable_AbstractNodePair_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodePair objXXXX = ptrNativeObject->getVariable(name1);
				EarthView::World::Graphic::AbstractNodePair *pXXXX = new EarthView::World::Graphic::AbstractNodePair(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CObjectAbstractNode_getVariables_AbstractNodeMap(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CObjectAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CObjectAbstractNode*) pObjectXXXX;
				const EarthView::World::Graphic::AbstractNodeMap& objXXXX = ptrNativeObject->getVariables();
				const EarthView::World::Graphic::AbstractNodeMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			typedef EarthView::World::Graphic::CAbstractNode*  ( _stdcall EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString_Callback)();
			class CPropertyAbstractNodeProxy : public EarthView::World::Graphic::CPropertyAbstractNode
			{
			private:
				EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode_Callback* m_EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode_Callback;
				EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString_Callback* m_EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString_Callback;
			public:
				CPropertyAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CPropertyAbstractNode(pList)
				{
					m_EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode_Callback = NULL;
					m_EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode(EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString(EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if(m_EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAbstractNode* returnValue = m_EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CPropertyAbstractNode::clone();
				}
				virtual EVString getValue() const
				{
					if(m_EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPropertyAbstractNode::getValue();
				}
			};
			REGISTER_FACTORY_CLASS(CPropertyAbstractNodeProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CPropertyAbstractNode_name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPropertyAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CPropertyAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPropertyAbstractNode_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CPropertyAbstractNode*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CPropertyAbstractNode_id( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPropertyAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CPropertyAbstractNode*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->id;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPropertyAbstractNode_id( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CPropertyAbstractNode*)pObjectXXXX)->id = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CPropertyAbstractNode_values( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPropertyAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CPropertyAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodeList &objXXXX = ptrNativeObject->values;
				EarthView::World::Graphic::AbstractNodeList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPropertyAbstractNode_values( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CPropertyAbstractNode*)pObjectXXXX)->values = *(EarthView::World::Graphic::AbstractNodeList*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPropertyAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CPropertyAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CPropertyAbstractNodeProxy*>((EarthView::World::Graphic::CPropertyAbstractNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CPropertyAbstractNode::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode( void *pObjectXXXX, EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode_Callback* pCallback )
			{
				CPropertyAbstractNodeProxy* ptr = dynamic_cast<CPropertyAbstractNodeProxy*>((EarthView::World::Graphic::CPropertyAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CPropertyAbstractNode_clone_CAbstractNode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPropertyAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CPropertyAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CPropertyAbstractNode::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPropertyAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CPropertyAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CPropertyAbstractNodeProxy*>((EarthView::World::Graphic::CPropertyAbstractNode*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CPropertyAbstractNode::getValue();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getValue();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString_Callback* pCallback )
			{
				CPropertyAbstractNodeProxy* ptr = dynamic_cast<CPropertyAbstractNodeProxy*>((EarthView::World::Graphic::CPropertyAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPropertyAbstractNode_getValue_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPropertyAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CPropertyAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CPropertyAbstractNode::getValue();
				return objXXXX.makeBuffer();
			}
			typedef EarthView::World::Graphic::CAbstractNode*  ( _stdcall EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CImportAbstractNode_getValue_EVString_Callback)();
			class CImportAbstractNodeProxy : public EarthView::World::Graphic::CImportAbstractNode
			{
			private:
				EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode_Callback* m_EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode_Callback;
				EarthView_World_Graphic_CImportAbstractNode_getValue_EVString_Callback* m_EarthView_World_Graphic_CImportAbstractNode_getValue_EVString_Callback;
			public:
				CImportAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CImportAbstractNode(pList)
				{
					m_EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode_Callback = NULL;
					m_EarthView_World_Graphic_CImportAbstractNode_getValue_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode(EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CImportAbstractNode_getValue_EVString(EarthView_World_Graphic_CImportAbstractNode_getValue_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CImportAbstractNode_getValue_EVString_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if(m_EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAbstractNode* returnValue = m_EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CImportAbstractNode::clone();
				}
				virtual EVString getValue() const
				{
					if(m_EarthView_World_Graphic_CImportAbstractNode_getValue_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CImportAbstractNode_getValue_EVString_Callback();
						return returnValue;
					}
					else
						return this->CImportAbstractNode::getValue();
				}
			};
			REGISTER_FACTORY_CLASS(CImportAbstractNodeProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CImportAbstractNode_source( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImportAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CImportAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->source;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImportAbstractNode_source( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CImportAbstractNode*)pObjectXXXX)->source = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CImportAbstractNode_target( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImportAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CImportAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->target;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImportAbstractNode_target( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CImportAbstractNode*)pObjectXXXX)->target = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImportAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CImportAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CImportAbstractNodeProxy*>((EarthView::World::Graphic::CImportAbstractNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CImportAbstractNode::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode( void *pObjectXXXX, EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode_Callback* pCallback )
			{
				CImportAbstractNodeProxy* ptr = dynamic_cast<CImportAbstractNodeProxy*>((EarthView::World::Graphic::CImportAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CImportAbstractNode_clone_CAbstractNode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImportAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CImportAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CImportAbstractNode::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CImportAbstractNode_getValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImportAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CImportAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CImportAbstractNodeProxy*>((EarthView::World::Graphic::CImportAbstractNode*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CImportAbstractNode::getValue();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getValue();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CImportAbstractNode_getValue_EVString( void *pObjectXXXX, EarthView_World_Graphic_CImportAbstractNode_getValue_EVString_Callback* pCallback )
			{
				CImportAbstractNodeProxy* ptr = dynamic_cast<CImportAbstractNodeProxy*>((EarthView::World::Graphic::CImportAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CImportAbstractNode_getValue_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CImportAbstractNode_getValue_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImportAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CImportAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CImportAbstractNode::getValue();
				return objXXXX.makeBuffer();
			}
			typedef EarthView::World::Graphic::CAbstractNode*  ( _stdcall EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString_Callback)();
			class CVariableAccessAbstractNodeProxy : public EarthView::World::Graphic::CVariableAccessAbstractNode
			{
			private:
				EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode_Callback* m_EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode_Callback;
				EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString_Callback* m_EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString_Callback;
			public:
				CVariableAccessAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CVariableAccessAbstractNode(pList)
				{
					m_EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode_Callback = NULL;
					m_EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode(EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString(EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if(m_EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAbstractNode* returnValue = m_EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CVariableAccessAbstractNode::clone();
				}
				virtual EVString getValue() const
				{
					if(m_EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString_Callback();
						return returnValue;
					}
					else
						return this->CVariableAccessAbstractNode::getValue();
				}
			};
			REGISTER_FACTORY_CLASS(CVariableAccessAbstractNodeProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CVariableAccessAbstractNode_name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVariableAccessAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CVariableAccessAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVariableAccessAbstractNode_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CVariableAccessAbstractNode*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVariableAccessAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CVariableAccessAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CVariableAccessAbstractNodeProxy*>((EarthView::World::Graphic::CVariableAccessAbstractNode*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVariableAccessAbstractNode::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode( void *pObjectXXXX, EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode_Callback* pCallback )
			{
				CVariableAccessAbstractNodeProxy* ptr = dynamic_cast<CVariableAccessAbstractNodeProxy*>((EarthView::World::Graphic::CVariableAccessAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall EarthView_World_Graphic_CVariableAccessAbstractNode_clone_CAbstractNode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVariableAccessAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CVariableAccessAbstractNode*) pObjectXXXX;
				EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVariableAccessAbstractNode::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVariableAccessAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CVariableAccessAbstractNode*) pObjectXXXX;
				if (dynamic_cast<CVariableAccessAbstractNodeProxy*>((EarthView::World::Graphic::CVariableAccessAbstractNode*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CVariableAccessAbstractNode::getValue();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getValue();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString( void *pObjectXXXX, EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString_Callback* pCallback )
			{
				CVariableAccessAbstractNodeProxy* ptr = dynamic_cast<CVariableAccessAbstractNodeProxy*>((EarthView::World::Graphic::CVariableAccessAbstractNode*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CVariableAccessAbstractNode_getValue_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVariableAccessAbstractNode* ptrNativeObject = (EarthView::World::Graphic::CVariableAccessAbstractNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CVariableAccessAbstractNode::getValue();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompiler_IdMap_push_ev_bool_EVString_ev_uint32(void *pObjectXXXX, _in const char* key, _in ev_uint32& val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CScriptCompiler::IdMap* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompiler_IdMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CScriptCompiler::IdMap* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32&  _stdcall EarthView_World_Graphic_CScriptCompiler_IdMap_OperatorIndex_ev_uint32_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CScriptCompiler::IdMap& objYYYY = *(EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjXXXX;
				ev_uint32& objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32&  _stdcall EarthView_World_Graphic_CScriptCompiler_IdMap_get_ev_uint32_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CScriptCompiler::IdMap* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjectXXXX;
				ev_uint32& objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_IdMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CScriptCompiler::IdMap* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CScriptCompiler_IdMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptCompiler::IdMap* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_IdMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompiler::IdMap* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompiler_IdMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptCompiler::IdMap* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CScriptCompiler_CError_file( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompiler::CError* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::CError*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->file;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CScriptCompiler_CError_file( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CScriptCompiler::CError*)pObjectXXXX)->file = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CScriptCompiler_CError_message( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompiler::CError* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::CError*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->message;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CScriptCompiler_CError_message( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CScriptCompiler::CError*)pObjectXXXX)->message = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_CScriptCompiler_CError_line( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompiler::CError* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::CError*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->line;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CScriptCompiler_CError_line( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::CScriptCompiler::CError*)pObjectXXXX)->line = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CScriptCompiler_CError_code( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompiler::CError* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::CError*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->code;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CScriptCompiler_CError_code( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CScriptCompiler::CError*)pObjectXXXX)->code = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptCompiler::CError*  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorPtr_get_CError(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptCompiler::ErrorPtr* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorPtr*) pObjectXXXX;
				EarthView::World::Graphic::CScriptCompiler::CError* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_push_back_void_ErrorPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CScriptCompiler::ErrorPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_push_front_void_ErrorPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				ptrNativeObject->push_front(*(EarthView::World::Graphic::CScriptCompiler::ErrorPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_front_ErrorPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_back_ErrorPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_at_ErrorPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_insert_void_ev_uint32_ErrorPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CScriptCompiler::ErrorPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_ErrorList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CScriptCompiler_formatErrorCode_EVString_ev_uint32(_in ev_uint32 code )
			{
				EVString objXXXX = EarthView::World::Graphic::CScriptCompiler::formatErrorCode(code);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompiler_compile_ev_bool_EVString_EVString_EVString(void *pObjectXXXX, _in const char* str, _in const char* source, _in const char* group )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string source1 = source;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->compile(str1, source1, group1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompiler_compile_ev_bool_ConcreteNodeListPtr_EVString(void *pObjectXXXX, _in const void* nodes, _in const char* group )
			{
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->compile(*(EarthView::World::Graphic::ConcreteNodeListPtr*)nodes, group1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptCompiler__generateAST_AbstractNodeListPtr_EVString_EVString_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in const char* str, _in const char* source, _in ev_bool doImports, _in ev_bool doObjects, _in ev_bool doVariables )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string source1 = source;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodeListPtr objXXXX = ptrNativeObject->_generateAST(str1, source1, doImports, doObjects, doVariables);
				EarthView::World::Graphic::AbstractNodeListPtr *pXXXX = new EarthView::World::Graphic::AbstractNodeListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptCompiler__generateAST_AbstractNodeListPtr_EVString_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const char* str, _in const char* source, _in ev_bool doImports, _in ev_bool doObjects )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string source1 = source;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodeListPtr objXXXX = ptrNativeObject->_generateAST(str1, source1, doImports, doObjects);
				EarthView::World::Graphic::AbstractNodeListPtr *pXXXX = new EarthView::World::Graphic::AbstractNodeListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptCompiler__generateAST_AbstractNodeListPtr_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* str, _in const char* source, _in ev_bool doImports )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string source1 = source;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodeListPtr objXXXX = ptrNativeObject->_generateAST(str1, source1, doImports);
				EarthView::World::Graphic::AbstractNodeListPtr *pXXXX = new EarthView::World::Graphic::AbstractNodeListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptCompiler__generateAST_AbstractNodeListPtr_EVString_EVString(void *pObjectXXXX, _in const char* str, _in const char* source )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string source1 = source;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				EarthView::World::Graphic::AbstractNodeListPtr objXXXX = ptrNativeObject->_generateAST(str1, source1);
				EarthView::World::Graphic::AbstractNodeListPtr *pXXXX = new EarthView::World::Graphic::AbstractNodeListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompiler__compile_ev_bool_AbstractNodeListPtr_EVString_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in void* nodes, _in const char* group, _in ev_bool doImports, _in ev_bool doObjects, _in ev_bool doVariables )
			{
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_compile(*(EarthView::World::Graphic::AbstractNodeListPtr*)nodes, group1, doImports, doObjects, doVariables);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompiler__compile_ev_bool_AbstractNodeListPtr_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in void* nodes, _in const char* group, _in ev_bool doImports, _in ev_bool doObjects )
			{
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_compile(*(EarthView::World::Graphic::AbstractNodeListPtr*)nodes, group1, doImports, doObjects);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompiler__compile_ev_bool_AbstractNodeListPtr_EVString_ev_bool(void *pObjectXXXX, _in void* nodes, _in const char* group, _in ev_bool doImports )
			{
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_compile(*(EarthView::World::Graphic::AbstractNodeListPtr*)nodes, group1, doImports);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompiler__compile_ev_bool_AbstractNodeListPtr_EVString(void *pObjectXXXX, _in void* nodes, _in const char* group )
			{
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_compile(*(EarthView::World::Graphic::AbstractNodeListPtr*)nodes, group1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_addError_void_ev_uint32_EVString_ev_int32_EVString(void *pObjectXXXX, _in ev_uint32 code, _in const char* file, _in ev_int32 line, _in const char* msg )
			{
				EarthView::World::Core::ev_string file1 = file;
				EarthView::World::Core::ev_string msg1 = msg;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ptrNativeObject->addError(code, file1, line, msg1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_addError_void_ev_uint32_EVString_ev_int32(void *pObjectXXXX, _in ev_uint32 code, _in const char* file, _in ev_int32 line )
			{
				EarthView::World::Core::ev_string file1 = file;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ptrNativeObject->addError(code, file1, line);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_setListener_void_CScriptCompilerListener(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompilerListener* listener )
			{
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ptrNativeObject->setListener(listener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptCompilerListener*  _stdcall EarthView_World_Graphic_CScriptCompiler_getListener_CScriptCompilerListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				EarthView::World::Graphic::CScriptCompilerListener* objXXXX = ptrNativeObject->getListener();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CScriptCompiler_getResourceGroup_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getResourceGroup();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_addNameExclusion_void_EVString(void *pObjectXXXX, _in const char* type )
			{
				EarthView::World::Core::ev_string type1 = type;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ptrNativeObject->addNameExclusion(type1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompiler_removeNameExclusion_void_EVString(void *pObjectXXXX, _in const char* type )
			{
				EarthView::World::Core::ev_string type1 = type;
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ptrNativeObject->removeNameExclusion(type1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompiler__fireEvent_ev_bool_CScriptCompilerEvent_void(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompilerEvent* evt, _inout void* retval )
			{
				EarthView::World::Graphic::CScriptCompiler* ptrNativeObject = (EarthView::World::Graphic::CScriptCompiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_fireEvent(evt, retval);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CScriptCompilerEvent_mType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CScriptCompilerEvent_mType( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CScriptCompilerEvent*)pObjectXXXX)->mType = value1;
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in void* nodes);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* nodes);
			typedef void  ( _stdcall EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in ev_uint32 code, _in char*& file, _in ev_int32 line, _in char*& msg);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CScriptCompilerEvent* evt, _inout void* retval);
			class CScriptCompilerListenerProxy : public EarthView::World::Graphic::CScriptCompilerListener
			{
			private:
				EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString_Callback* m_EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString_Callback;
				EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr_Callback* m_EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr_Callback;
				EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr_Callback* m_EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr_Callback;
				EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_Callback* m_EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_Callback;
				EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void_Callback* m_EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void_Callback;
			public:
				CScriptCompilerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CScriptCompilerListener(pList)
				{
					m_EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr_Callback = NULL;
					m_EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr_Callback = NULL;
					m_EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString(EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr(EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr(EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString(EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void(EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::ConcreteNodeListPtr importFile(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ConcreteNodeListPtr returnValue = *(EarthView::World::Graphic::ConcreteNodeListPtr*)m_EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString_Callback(compiler, name_Char);
						return returnValue;
					}
					else
						return this->CScriptCompilerListener::importFile(compiler, name);
				}
				virtual void preConversion(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::ConcreteNodeListPtr nodes)
				{
					if(m_EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr_Callback(compiler, &nodes);
					}
					else
						return this->CScriptCompilerListener::preConversion(compiler, nodes);
				}
				virtual ev_bool postConversion(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodeListPtr& nodes)
				{
					if(m_EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr_Callback(compiler, &nodes);
						return returnValue;
					}
					else
						return this->CScriptCompilerListener::postConversion(compiler, nodes);
				}
				virtual void handleError(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in ev_uint32 code, _in const EVString& file, _in ev_int32 line, _in const EVString& msg)
				{
					if(m_EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* file_Char = file.makeBuffer();
						char* msg_Char = msg.makeBuffer();
						m_EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_Callback(compiler, code, file_Char, line, msg_Char);
					}
					else
						return this->CScriptCompilerListener::handleError(compiler, code, file, line, msg);
				}
				virtual ev_bool handleEvent(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CScriptCompilerEvent* evt, _inout void* retval)
				{
					if(m_EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void_Callback(compiler, evt, retval);
						return returnValue;
					}
					else
						return this->CScriptCompilerListener::handleEvent(compiler, evt, retval);
				}
			};
			REGISTER_FACTORY_CLASS(CScriptCompilerListenerProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CScriptCompilerListener* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX;
				if (dynamic_cast<CScriptCompilerListenerProxy*>((EarthView::World::Graphic::CScriptCompilerListener*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ConcreteNodeListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptCompilerListener::importFile(compiler, name1);
					EarthView::World::Graphic::ConcreteNodeListPtr *pXXXX = new EarthView::World::Graphic::ConcreteNodeListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ConcreteNodeListPtr objXXXX = ptrNativeObject->importFile(compiler, name1);
					EarthView::World::Graphic::ConcreteNodeListPtr *pXXXX = new EarthView::World::Graphic::ConcreteNodeListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString( void *pObjectXXXX, EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString_Callback* pCallback )
			{
				CScriptCompilerListenerProxy* ptr = dynamic_cast<CScriptCompilerListenerProxy*>((EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptCompilerListener_importFile_ConcreteNodeListPtr_CScriptCompiler_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CScriptCompilerListener* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX;
				EarthView::World::Graphic::ConcreteNodeListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptCompilerListener::importFile(compiler, name1);
				EarthView::World::Graphic::ConcreteNodeListPtr *pXXXX = new EarthView::World::Graphic::ConcreteNodeListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in void* nodes )
			{
				EarthView::World::Graphic::CScriptCompilerListener* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX;
				if (dynamic_cast<CScriptCompilerListenerProxy*>((EarthView::World::Graphic::CScriptCompilerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CScriptCompilerListener::preConversion(compiler, *(EarthView::World::Graphic::ConcreteNodeListPtr*)nodes);
				else
					ptrNativeObject->preConversion(compiler, *(EarthView::World::Graphic::ConcreteNodeListPtr*)nodes);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr( void *pObjectXXXX, EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr_Callback* pCallback )
			{
				CScriptCompilerListenerProxy* ptr = dynamic_cast<CScriptCompilerListenerProxy*>((EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompilerListener_preConversion_void_CScriptCompiler_ConcreteNodeListPtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in void* nodes )
			{
				EarthView::World::Graphic::CScriptCompilerListener* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CScriptCompilerListener::preConversion(compiler, *(EarthView::World::Graphic::ConcreteNodeListPtr*)nodes);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* nodes )
			{
				EarthView::World::Graphic::CScriptCompilerListener* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX;
				if (dynamic_cast<CScriptCompilerListenerProxy*>((EarthView::World::Graphic::CScriptCompilerListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptCompilerListener::postConversion(compiler, *(EarthView::World::Graphic::AbstractNodeListPtr*)nodes);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->postConversion(compiler, *(EarthView::World::Graphic::AbstractNodeListPtr*)nodes);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr( void *pObjectXXXX, EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr_Callback* pCallback )
			{
				CScriptCompilerListenerProxy* ptr = dynamic_cast<CScriptCompilerListenerProxy*>((EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompilerListener_postConversion_ev_bool_CScriptCompiler_AbstractNodeListPtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* nodes )
			{
				EarthView::World::Graphic::CScriptCompilerListener* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptCompilerListener::postConversion(compiler, *(EarthView::World::Graphic::AbstractNodeListPtr*)nodes);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in ev_uint32 code, _in const char* file, _in ev_int32 line, _in const char* msg )
			{
				EarthView::World::Core::ev_string file1 = file;
				EarthView::World::Core::ev_string msg1 = msg;
				EarthView::World::Graphic::CScriptCompilerListener* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX;
				if (dynamic_cast<CScriptCompilerListenerProxy*>((EarthView::World::Graphic::CScriptCompilerListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CScriptCompilerListener::handleError(compiler, code, file1, line, msg1);
				else
					ptrNativeObject->handleError(compiler, code, file1, line, msg1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_Callback* pCallback )
			{
				CScriptCompilerListenerProxy* ptr = dynamic_cast<CScriptCompilerListenerProxy*>((EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompilerListener_handleError_void_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in ev_uint32 code, _in const char* file, _in ev_int32 line, _in const char* msg )
			{
				EarthView::World::Core::ev_string file1 = file;
				EarthView::World::Core::ev_string msg1 = msg;
				EarthView::World::Graphic::CScriptCompilerListener* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CScriptCompilerListener::handleError(compiler, code, file1, line, msg1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CScriptCompilerEvent* evt, _inout void* retval )
			{
				EarthView::World::Graphic::CScriptCompilerListener* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX;
				if (dynamic_cast<CScriptCompilerListenerProxy*>((EarthView::World::Graphic::CScriptCompilerListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptCompilerListener::handleEvent(compiler, evt, retval);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->handleEvent(compiler, evt, retval);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void( void *pObjectXXXX, EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void_Callback* pCallback )
			{
				CScriptCompilerListenerProxy* ptr = dynamic_cast<CScriptCompilerListenerProxy*>((EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CScriptCompilerListener_handleEvent_ev_bool_CScriptCompiler_CScriptCompilerEvent_void_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CScriptCompilerEvent* evt, _inout void* retval )
			{
				EarthView::World::Graphic::CScriptCompilerListener* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptCompilerListener::handleEvent(compiler, evt, retval);
				return objXXXX;
			}
			typedef const void*  ( _stdcall EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& groupName);
			typedef Real  ( _stdcall EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real_Callback)();
			class CScriptCompilerManagerProxy : public EarthView::World::Graphic::CScriptCompilerManager
			{
			private:
				EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector_Callback* m_EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector_Callback;
				EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real_Callback* m_EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real_Callback;
			public:
				CScriptCompilerManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CScriptCompilerManager(pList)
				{
					m_EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector(EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString(EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real(EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real_Callback = pCallback;
				}
				virtual const EarthView::World::Core::StringVector& getScriptPatterns() const
				{
					if(m_EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Core::StringVector& returnValue = *(EarthView::World::Core::StringVector*)m_EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector_Callback();
						return returnValue;
					}
					else
						return this->CScriptCompilerManager::getScriptPatterns();
				}
				virtual void parseScript(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString_Callback(&stream, groupName_Char);
					}
					else
						return this->CScriptCompilerManager::parseScript(stream, groupName);
				}
				virtual Real getLoadingOrder() const
				{
					if(m_EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real_Callback();
						return returnValue;
					}
					else
						return this->CScriptCompilerManager::getLoadingOrder();
				}
			};
			REGISTER_FACTORY_CLASS(CScriptCompilerManagerProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptCompilerManager_getSingleton_CScriptCompilerManager( )
			{
				EarthView::World::Graphic::CScriptCompilerManager& objXXXX = EarthView::World::Graphic::CScriptCompilerManager::getSingleton();
				EarthView::World::Graphic::CScriptCompilerManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptCompilerManager*  _stdcall EarthView_World_Graphic_CScriptCompilerManager_getSingletonPtr_CScriptCompilerManager( )
			{
				EarthView::World::Graphic::CScriptCompilerManager* objXXXX = EarthView::World::Graphic::CScriptCompilerManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompilerManager_setListener_void_CScriptCompilerListener(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompilerListener* ref_listener )
			{
				EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				ptrNativeObject->setListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptCompilerListener*  _stdcall EarthView_World_Graphic_CScriptCompilerManager_getListener_CScriptCompilerListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				EarthView::World::Graphic::CScriptCompilerListener* objXXXX = ptrNativeObject->getListener();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompilerManager_addTranslatorManager_void_CScriptTranslatorManager(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptTranslatorManager* ref_man )
			{
				EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				ptrNativeObject->addTranslatorManager(ref_man);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompilerManager_removeTranslatorManager_void_CScriptTranslatorManager(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptTranslatorManager* man )
			{
				EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				ptrNativeObject->removeTranslatorManager(man);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompilerManager_clearTranslatorManagers_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				ptrNativeObject->clearTranslatorManagers();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CScriptCompilerManager_getTranslator_CScriptTranslator_AbstractNodePtr(void *pObjectXXXX, _in const void* node )
			{
				EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->getTranslator(*(EarthView::World::Graphic::AbstractNodePtr*)node);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompilerManager_addScriptPattern_void_EVString(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				ptrNativeObject->addScriptPattern(pattern1);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				if (dynamic_cast<CScriptCompilerManagerProxy*>((EarthView::World::Graphic::CScriptCompilerManager*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptCompilerManager::getScriptPatterns();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->getScriptPatterns();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector( void *pObjectXXXX, EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector_Callback* pCallback )
			{
				CScriptCompilerManagerProxy* ptr = dynamic_cast<CScriptCompilerManagerProxy*>((EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CScriptCompilerManager_getScriptPatterns_StringVector_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptCompilerManager::getScriptPatterns();
				const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString(void *pObjectXXXX, _inout void* stream, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				if (dynamic_cast<CScriptCompilerManagerProxy*>((EarthView::World::Graphic::CScriptCompilerManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CScriptCompilerManager::parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
				else
					ptrNativeObject->parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString_Callback* pCallback )
			{
				CScriptCompilerManagerProxy* ptr = dynamic_cast<CScriptCompilerManagerProxy*>((EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptCompilerManager_parseScript_void_DataStreamPtr_EVString_NoVirtual(void *pObjectXXXX, _inout void* stream, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CScriptCompilerManager::parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				if (dynamic_cast<CScriptCompilerManagerProxy*>((EarthView::World::Graphic::CScriptCompilerManager*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptCompilerManager::getLoadingOrder();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getLoadingOrder();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real( void *pObjectXXXX, EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real_Callback* pCallback )
			{
				CScriptCompilerManagerProxy* ptr = dynamic_cast<CScriptCompilerManagerProxy*>((EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CScriptCompilerManager_getLoadingOrder_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptCompilerManager* ptrNativeObject = (EarthView::World::Graphic::CScriptCompilerManager*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptCompilerManager::getLoadingOrder();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMaterial*  _stdcall Get_EarthView_World_Graphic_CPreApplyTextureAliasesScriptCompilerEvent_mMaterial( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent*) pObjectXXXX;
				EarthView::World::Graphic::CMaterial* objXXXX = ptrNativeObject->mMaterial;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPreApplyTextureAliasesScriptCompilerEvent_mMaterial( void *pObjectXXXX, EarthView::World::Graphic::CMaterial*  value )
			{
				((EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent*)pObjectXXXX)->mMaterial = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CommonStringPairList*  _stdcall Get_EarthView_World_Graphic_CPreApplyTextureAliasesScriptCompilerEvent_mAliases( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent*) pObjectXXXX;
				EarthView::World::Core::CommonStringPairList* objXXXX = ptrNativeObject->mAliases;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPreApplyTextureAliasesScriptCompilerEvent_mAliases( void *pObjectXXXX, EarthView::World::Core::CommonStringPairList*  value )
			{
				((EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent*)pObjectXXXX)->mAliases = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CPreApplyTextureAliasesScriptCompilerEvent_eventType()
			{
				EVString objXXXX = EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent::eventType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPreApplyTextureAliasesScriptCompilerEvent_eventType( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent::eventType = value1;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CProcessResourceNameScriptCompilerEvent_mResourceType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent*) pObjectXXXX;
				EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent::ResourceType objXXXX = ptrNativeObject->mResourceType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CProcessResourceNameScriptCompilerEvent_mResourceType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent*)pObjectXXXX)->mResourceType = (EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent::ResourceType)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CProcessResourceNameScriptCompilerEvent_mName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CProcessResourceNameScriptCompilerEvent_mName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent*)pObjectXXXX)->mName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CProcessResourceNameScriptCompilerEvent_eventType()
			{
				EVString objXXXX = EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent::eventType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CProcessResourceNameScriptCompilerEvent_eventType( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent::eventType = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CProcessNameExclusionScriptCompilerEvent_mClass( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mClass;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CProcessNameExclusionScriptCompilerEvent_mClass( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent*)pObjectXXXX)->mClass = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAbstractNode*  _stdcall Get_EarthView_World_Graphic_CProcessNameExclusionScriptCompilerEvent_mParent( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent*) pObjectXXXX;
				EarthView::World::Graphic::CAbstractNode* objXXXX = ptrNativeObject->mParent;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CProcessNameExclusionScriptCompilerEvent_mParent( void *pObjectXXXX, EarthView::World::Graphic::CAbstractNode*  value )
			{
				((EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent*)pObjectXXXX)->mParent = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CProcessNameExclusionScriptCompilerEvent_eventType()
			{
				EVString objXXXX = EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent::eventType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CProcessNameExclusionScriptCompilerEvent_eventType( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent::eventType = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateMaterialScriptCompilerEvent_mName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateMaterialScriptCompilerEvent_mName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*)pObjectXXXX)->mName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateMaterialScriptCompilerEvent_mResourceGroup( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mResourceGroup;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateMaterialScriptCompilerEvent_mResourceGroup( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*)pObjectXXXX)->mResourceGroup = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateMaterialScriptCompilerEvent_mFile( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mFile;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateMaterialScriptCompilerEvent_mFile( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*)pObjectXXXX)->mFile = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateMaterialScriptCompilerEvent_eventType()
			{
				EVString objXXXX = EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent::eventType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateMaterialScriptCompilerEvent_eventType( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent::eventType = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjectXXXX)->mName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mResourceGroup( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mResourceGroup;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mResourceGroup( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjectXXXX)->mResourceGroup = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mSource( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mSource;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mSource( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjectXXXX)->mSource = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mSyntax( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mSyntax;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mSyntax( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjectXXXX)->mSyntax = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mFile( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mFile;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mFile( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjectXXXX)->mFile = value1;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mProgramType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramType objXXXX = ptrNativeObject->mProgramType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_mProgramType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjectXXXX)->mProgramType = (EarthView::World::Graphic::GpuProgramType)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_eventType()
			{
				EVString objXXXX = EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent::eventType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateGpuProgramScriptCompilerEvent_eventType( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent::eventType = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjectXXXX)->mName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mResourceGroup( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mResourceGroup;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mResourceGroup( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjectXXXX)->mResourceGroup = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mSource( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mSource;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mSource( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjectXXXX)->mSource = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mLanguage( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mLanguage;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mLanguage( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjectXXXX)->mLanguage = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mFile( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mFile;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mFile( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjectXXXX)->mFile = value1;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mProgramType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramType objXXXX = ptrNativeObject->mProgramType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_mProgramType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjectXXXX)->mProgramType = (EarthView::World::Graphic::GpuProgramType)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_eventType()
			{
				EVString objXXXX = EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent::eventType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateHighLevelGpuProgramScriptCompilerEvent_eventType( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent::eventType = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateGpuSharedParametersScriptCompilerEvent_mName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateGpuSharedParametersScriptCompilerEvent_mName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*)pObjectXXXX)->mName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateGpuSharedParametersScriptCompilerEvent_mResourceGroup( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mResourceGroup;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateGpuSharedParametersScriptCompilerEvent_mResourceGroup( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*)pObjectXXXX)->mResourceGroup = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateGpuSharedParametersScriptCompilerEvent_mFile( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mFile;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateGpuSharedParametersScriptCompilerEvent_mFile( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*)pObjectXXXX)->mFile = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateGpuSharedParametersScriptCompilerEvent_eventType()
			{
				EVString objXXXX = EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent::eventType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateGpuSharedParametersScriptCompilerEvent_eventType( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent::eventType = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateParticleSystemScriptCompilerEvent_mName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateParticleSystemScriptCompilerEvent_mName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*)pObjectXXXX)->mName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateParticleSystemScriptCompilerEvent_mResourceGroup( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mResourceGroup;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateParticleSystemScriptCompilerEvent_mResourceGroup( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*)pObjectXXXX)->mResourceGroup = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateParticleSystemScriptCompilerEvent_mFile( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mFile;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateParticleSystemScriptCompilerEvent_mFile( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*)pObjectXXXX)->mFile = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateParticleSystemScriptCompilerEvent_eventType()
			{
				EVString objXXXX = EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent::eventType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateParticleSystemScriptCompilerEvent_eventType( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent::eventType = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateCompositorScriptCompilerEvent_mName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateCompositorScriptCompilerEvent_mName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*)pObjectXXXX)->mName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateCompositorScriptCompilerEvent_mResourceGroup( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mResourceGroup;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateCompositorScriptCompilerEvent_mResourceGroup( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*)pObjectXXXX)->mResourceGroup = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateCompositorScriptCompilerEvent_mFile( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent* ptrNativeObject = (EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mFile;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateCompositorScriptCompilerEvent_mFile( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*)pObjectXXXX)->mFile = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCreateCompositorScriptCompilerEvent_eventType()
			{
				EVString objXXXX = EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent::eventType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCreateCompositorScriptCompilerEvent_eventType( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent::eventType = value1;
			}
		}
	}
}
