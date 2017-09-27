/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/operation.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_COperation_getName_EVString_Callback)();
				class COperationProxy : public EarthView::World::Spatial2D::Controls::COperation
				{
				private:
					EarthView_World_Spatial2D_Controls_COperation_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_COperation_getName_EVString_Callback;
				public:
					COperationProxy(EarthView::World::Core::CNameValuePairList *pList) : COperation(pList)
					{
						m_EarthView_World_Spatial2D_Controls_COperation_getName_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_COperation_getName_EVString(EarthView_World_Spatial2D_Controls_COperation_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_COperation_getName_EVString_Callback = pCallback;
					}
					virtual EVString getName()
					{
						if(m_EarthView_World_Spatial2D_Controls_COperation_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_COperation_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->COperation::getName();
					}
				};
				REGISTER_FACTORY_CLASS(COperationProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_COperation_getName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::COperation* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperation*) pObjectXXXX;
					if (dynamic_cast<COperationProxy*>((EarthView::World::Spatial2D::Controls::COperation*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::COperation::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_COperation_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_COperation_getName_EVString_Callback* pCallback )
				{
					COperationProxy* ptr = dynamic_cast<COperationProxy*>((EarthView::World::Spatial2D::Controls::COperation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_COperation_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_COperation_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::COperation* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperation*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::COperation::getName();
					return objXXXX.makeBuffer();
				}
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString_Callback)();
				class COperationGroupProxy : public EarthView::World::Spatial2D::Controls::COperationGroup
				{
				private:
					EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString_Callback;
				public:
					COperationGroupProxy(EarthView::World::Core::CNameValuePairList *pList) : COperationGroup(pList)
					{
						m_EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString(EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString_Callback = pCallback;
					}
					virtual EVString getName()
					{
						if(m_EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->COperationGroup::getName();
					}
				};
				REGISTER_FACTORY_CLASS(COperationGroupProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::COperationGroup* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationGroup*) pObjectXXXX;
					if (dynamic_cast<COperationGroupProxy*>((EarthView::World::Spatial2D::Controls::COperationGroup*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::COperationGroup::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString_Callback* pCallback )
				{
					COperationGroupProxy* ptr = dynamic_cast<COperationGroupProxy*>((EarthView::World::Spatial2D::Controls::COperationGroup*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_COperationGroup_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::COperationGroup* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationGroup*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::COperationGroup::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_COperationGroup_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::COperationGroup* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationGroup*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Controls::COperation*  _stdcall EarthView_World_Spatial2D_Controls_COperationGroup_getChild_COperation_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Controls::COperationGroup* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationGroup*) pObjectXXXX;
					const EarthView::World::Spatial2D::Controls::COperation* objXXXX = ptrNativeObject->getChild(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_COperationGroup_addChild_void_COperation(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::COperation* child )
				{
					EarthView::World::Spatial2D::Controls::COperationGroup* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationGroup*) pObjectXXXX;
					ptrNativeObject->addChild(child);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_COperationGroup_removeChild_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Controls::COperationGroup* ptrNativeObject = (EarthView::World::Spatial2D::Controls::COperationGroup*) pObjectXXXX;
					ptrNativeObject->removeChild(index);
				}
			}
		}
	}
}
