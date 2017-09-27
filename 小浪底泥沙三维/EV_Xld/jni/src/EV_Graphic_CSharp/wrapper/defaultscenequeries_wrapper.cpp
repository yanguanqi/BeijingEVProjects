/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/defaultscenequeries.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback)(_in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback)(_in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CDefaultIntersectionSceneQueryProxy : public EarthView::World::Graphic::CDefaultIntersectionSceneQuery
			{
			private:
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CDefaultIntersectionSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultIntersectionSceneQuery(pList)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback(listener);
					}
					else
						return this->CDefaultIntersectionSceneQuery::execute(listener);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second)
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback(first, second);
						return returnValue;
					}
					else
						return this->CDefaultIntersectionSceneQuery::queryResult(first, second);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback(movable, fragment);
						return returnValue;
					}
					else
						return this->CDefaultIntersectionSceneQuery::queryResult(movable, fragment);
				}
				virtual const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* getListenerPtr()
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* returnValue = m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback();
						return returnValue;
					}
					else
						return this->CDefaultIntersectionSceneQuery::getListenerPtr();
				}
				virtual EarthView::World::Graphic::IntersectionSceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::IntersectionSceneQueryResult& returnValue = *(EarthView::World::Graphic::IntersectionSceneQueryResult*)m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CDefaultIntersectionSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void_Callback();
					}
					else
						return this->CDefaultIntersectionSceneQuery::clearResults();
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CDefaultIntersectionSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultIntersectionSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CDefaultIntersectionSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultIntersectionSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CDefaultIntersectionSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CDefaultIntersectionSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CDefaultIntersectionSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultIntersectionSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CDefaultIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultIntersectionSceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CDefaultIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultIntersectionSceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_execute_IntersectionSceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CDefaultIntersectionSceneQueryProxy* ptr = dynamic_cast<CDefaultIntersectionSceneQueryProxy*>((EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance);
			typedef const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay_Callback)(_in const void* ray);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback)(_in ev_bool sort, _in ev_uint16 maxresults);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_Callback)(_in ev_bool sort);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_Callback)(_in EarthView::World::Graphic::CRaySceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CDefaultRaySceneQueryProxy : public EarthView::World::Graphic::CDefaultRaySceneQuery
			{
			private:
				EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CDefaultRaySceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultRaySceneQuery(pList)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real(EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real(EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener(EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay(EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay(EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16(EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool(EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool(EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16(EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult(EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener(EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult(EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void(EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CRaySceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_Callback(listener);
					}
					else
						return this->CDefaultRaySceneQuery::execute(listener);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback(obj, distance);
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::queryResult(obj, distance);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout EarthView::World::Graphic::CColourValue& cv, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback(obj, distance, e, c, i, r, &cv, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback(fragment, distance);
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::queryResult(fragment, distance);
				}
				virtual const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* getListenerPtr()
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* returnValue = m_EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback();
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::getListenerPtr();
				}
				virtual void setRay(_in const EarthView::World::Spatial::Math::CRay& ray)
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay_Callback(&ray);
					}
					else
						return this->CDefaultRaySceneQuery::setRay(ray);
				}
				virtual const EarthView::World::Spatial::Math::CRay& getRay() const
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CRay& returnValue = *(EarthView::World::Spatial::Math::CRay*)m_EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay_Callback();
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::getRay();
				}
				virtual void setSortByDistance(_in ev_bool sort, _in ev_uint16 maxresults)
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback(sort, maxresults);
					}
					else
						return this->CDefaultRaySceneQuery::setSortByDistance(sort, maxresults);
				}
				virtual void setSortByDistance(_in ev_bool sort)
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_Callback(sort);
					}
					else
						return this->CDefaultRaySceneQuery::setSortByDistance(sort);
				}
				virtual ev_bool getSortByDistance() const
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::getSortByDistance();
				}
				virtual ev_uint16 getMaxResults() const
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::getMaxResults();
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& getLastResults()
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RaySceneQueryResult& returnValue = *(EarthView::World::Graphic::RaySceneQueryResult*)m_EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void_Callback();
					}
					else
						return this->CDefaultRaySceneQuery::clearResults();
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CDefaultRaySceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CDefaultRaySceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CDefaultRaySceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CDefaultRaySceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultRaySceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
			{
				EarthView::World::Graphic::CDefaultRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultRaySceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultRaySceneQuery_execute_void_CRaySceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
			{
				EarthView::World::Graphic::CDefaultRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultRaySceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_queryResult_ev_bool_WorldFragment_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setRay_void_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getRay_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setSortByDistance_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getSortByDistance_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getMaxResults_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_execute_RaySceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getLastResults_RaySceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CDefaultRaySceneQueryProxy* ptr = dynamic_cast<CDefaultRaySceneQueryProxy*>((EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CDefaultSphereSceneQueryProxy : public EarthView::World::Graphic::CDefaultSphereSceneQuery
			{
			private:
				EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CDefaultSphereSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultSphereSceneQuery(pList)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult(EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener(EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult(EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void(EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->CDefaultSphereSceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSphereSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void_Callback();
					}
					else
						return this->CDefaultSphereSceneQuery::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->CDefaultSphereSceneQuery::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->CDefaultSphereSceneQuery::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->CDefaultSphereSceneQuery::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CDefaultSphereSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSphereSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CDefaultSphereSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSphereSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CDefaultSphereSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSphereSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSphereSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultSphereSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CDefaultSphereSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultSphereSceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_void_CSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CDefaultSphereSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultSphereSceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CDefaultSphereSceneQueryProxy* ptr = dynamic_cast<CDefaultSphereSceneQueryProxy*>((EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CDefaultPlaneBoundedVolumeListSceneQueryProxy : public EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery
			{
			private:
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CDefaultPlaneBoundedVolumeListSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultPlaneBoundedVolumeListSceneQuery(pList)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback();
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultPlaneBoundedVolumeListSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CDefaultPlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<CDefaultPlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultPlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CDefaultAxisAlignedBoxSceneQueryProxy : public EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery
			{
			private:
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CDefaultAxisAlignedBoxSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultAxisAlignedBoxSceneQuery(pList)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void_Callback();
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CDefaultAxisAlignedBoxSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultAxisAlignedBoxSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX;
				if (dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery* ptrNativeObject = (EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CDefaultAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<CDefaultAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
		}
	}
}
