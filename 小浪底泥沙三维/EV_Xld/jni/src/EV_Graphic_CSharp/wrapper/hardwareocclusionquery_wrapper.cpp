/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/hardwareocclusionquery.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32_Callback)(_inout ev_uint32& NumOfFragments);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool_Callback)();
			class CHardwareOcclusionQueryProxy : public EarthView::World::Graphic::CHardwareOcclusionQuery
			{
			private:
				EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void_Callback* m_EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void_Callback;
				EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void_Callback* m_EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void_Callback;
				EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool_Callback;
			public:
				CHardwareOcclusionQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareOcclusionQuery(pList)
				{
					m_EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void(EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void(EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32(EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool(EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool_Callback = pCallback;
				}
				virtual void beginOcclusionQuery()
				{
					if(m_EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void_Callback();
					}
					else
						return this->CHardwareOcclusionQuery::beginOcclusionQuery();
				}
				virtual void endOcclusionQuery()
				{
					if(m_EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void_Callback();
					}
					else
						return this->CHardwareOcclusionQuery::endOcclusionQuery();
				}
				virtual ev_bool pullOcclusionQuery(_inout ev_uint32& NumOfFragments)
				{
					if(m_EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32_Callback(NumOfFragments);
						return returnValue;
					}
					else
						return this->CHardwareOcclusionQuery::pullOcclusionQuery(NumOfFragments);
				}
				virtual ev_bool isStillOutstanding()
				{
					if(m_EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CHardwareOcclusionQuery::isStillOutstanding();
				}
			};
			REGISTER_FACTORY_CLASS(CHardwareOcclusionQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery* ptrNativeObject = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX;
				if (dynamic_cast<CHardwareOcclusionQueryProxy*>((EarthView::World::Graphic::CHardwareOcclusionQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareOcclusionQuery::beginOcclusionQuery();
				else
					ptrNativeObject->beginOcclusionQuery();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void_Callback* pCallback )
			{
				CHardwareOcclusionQueryProxy* ptr = dynamic_cast<CHardwareOcclusionQueryProxy*>((EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_beginOcclusionQuery_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery* ptrNativeObject = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareOcclusionQuery::beginOcclusionQuery();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery* ptrNativeObject = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX;
				if (dynamic_cast<CHardwareOcclusionQueryProxy*>((EarthView::World::Graphic::CHardwareOcclusionQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareOcclusionQuery::endOcclusionQuery();
				else
					ptrNativeObject->endOcclusionQuery();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void_Callback* pCallback )
			{
				CHardwareOcclusionQueryProxy* ptr = dynamic_cast<CHardwareOcclusionQueryProxy*>((EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_endOcclusionQuery_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery* ptrNativeObject = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareOcclusionQuery::endOcclusionQuery();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32(void *pObjectXXXX, _inout ev_uint32& NumOfFragments )
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery* ptrNativeObject = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX;
				if (dynamic_cast<CHardwareOcclusionQueryProxy*>((EarthView::World::Graphic::CHardwareOcclusionQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareOcclusionQuery::pullOcclusionQuery(NumOfFragments);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->pullOcclusionQuery(NumOfFragments);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32_Callback* pCallback )
			{
				CHardwareOcclusionQueryProxy* ptr = dynamic_cast<CHardwareOcclusionQueryProxy*>((EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_pullOcclusionQuery_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _inout ev_uint32& NumOfFragments )
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery* ptrNativeObject = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareOcclusionQuery::pullOcclusionQuery(NumOfFragments);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_getLastQuerysPixelcount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareOcclusionQuery* ptrNativeObject = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLastQuerysPixelcount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery* ptrNativeObject = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX;
				if (dynamic_cast<CHardwareOcclusionQueryProxy*>((EarthView::World::Graphic::CHardwareOcclusionQuery*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareOcclusionQuery::isStillOutstanding();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isStillOutstanding();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool_Callback* pCallback )
			{
				CHardwareOcclusionQueryProxy* ptr = dynamic_cast<CHardwareOcclusionQueryProxy*>((EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHardwareOcclusionQuery_isStillOutstanding_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery* ptrNativeObject = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareOcclusionQuery::isStillOutstanding();
				return objXXXX;
			}
		}
	}
}
