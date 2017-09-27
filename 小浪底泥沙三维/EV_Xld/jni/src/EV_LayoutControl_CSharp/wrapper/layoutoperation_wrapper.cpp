/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "layoutcontrol/layoutoperation.h"
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_Callback)();
				class CLayoutOperationProxy : public EarthView::World::Layout::Controls::CLayoutOperation
				{
				private:
					EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_Callback* m_EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_Callback;
				public:
					CLayoutOperationProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayoutOperation(pList)
					{
						m_EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString(EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_Callback = pCallback;
					}
					virtual EVString getName()
					{
						if(m_EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLayoutOperation::getName();
					}
				};
				REGISTER_FACTORY_CLASS(CLayoutOperationProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutOperation* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperation*) pObjectXXXX;
					if (dynamic_cast<CLayoutOperationProxy*>((EarthView::World::Layout::Controls::CLayoutOperation*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutOperation::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_Callback* pCallback )
				{
					CLayoutOperationProxy* ptr = dynamic_cast<CLayoutOperationProxy*>((EarthView::World::Layout::Controls::CLayoutOperation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CLayoutOperation_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutOperation* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutOperation*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutOperation::getName();
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
