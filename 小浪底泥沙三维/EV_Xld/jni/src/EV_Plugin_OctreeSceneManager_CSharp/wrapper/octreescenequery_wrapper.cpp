/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_octreescenemanager/octreescenequery.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback)(_in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback)(_in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class COctreeIntersectionSceneQueryProxy : public EarthView::World::Graphic::COctreeIntersectionSceneQuery
			{
			private:
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				COctreeIntersectionSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : COctreeIntersectionSceneQuery(pList)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject(EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment(EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener(EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_IntersectionSceneQueryResult(EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult(EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void(EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback(listener);
					}
					else
						return this->COctreeIntersectionSceneQuery::execute(listener);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _in EarthView::World::Graphic::CMovableObject* second)
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback(first, second);
						return returnValue;
					}
					else
						return this->COctreeIntersectionSceneQuery::queryResult(first, second);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* movable, _in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback(movable, fragment);
						return returnValue;
					}
					else
						return this->COctreeIntersectionSceneQuery::queryResult(movable, fragment);
				}
				virtual const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* getListenerPtr()
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* returnValue = m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback();
						return returnValue;
					}
					else
						return this->COctreeIntersectionSceneQuery::getListenerPtr();
				}
				virtual EarthView::World::Graphic::IntersectionSceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::IntersectionSceneQueryResult& returnValue = *(EarthView::World::Graphic::IntersectionSceneQueryResult*)m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->COctreeIntersectionSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void_Callback();
					}
					else
						return this->COctreeIntersectionSceneQuery::clearResults();
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->COctreeIntersectionSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeIntersectionSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->COctreeIntersectionSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeIntersectionSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->COctreeIntersectionSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->COctreeIntersectionSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->COctreeIntersectionSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(COctreeIntersectionSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener )
			{
				EarthView::World::Graphic::COctreeIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX;
				if (dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeIntersectionSceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_void_CIntersectionSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CIntersectionSceneQueryListener* listener )
			{
				EarthView::World::Graphic::COctreeIntersectionSceneQuery* ptrNativeObject = (EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeIntersectionSceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_queryResult_ev_bool_CMovableObject_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getListenerPtr_CIntersectionSceneQueryInternalListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_IntersectionSceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_IntersectionSceneQueryResult_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_execute_IntersectionSceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getLastResults_IntersectionSceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				COctreeIntersectionSceneQueryProxy* ptr = dynamic_cast<COctreeIntersectionSceneQueryProxy*>((EarthView::World::Graphic::COctreeIntersectionSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeIntersectionSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance);
			typedef const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay_Callback)(_in const void* ray);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback)(_in ev_bool sort, _in ev_uint16 maxresults);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_Callback)(_in ev_bool sort);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_execute_RaySceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener_Callback)(_in EarthView::World::Graphic::CRaySceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class COctreeRaySceneQueryProxy : public EarthView::World::Graphic::COctreeRaySceneQuery
			{
			private:
				EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_execute_RaySceneQueryResult_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_execute_RaySceneQueryResult_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				COctreeRaySceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : COctreeRaySceneQuery(pList)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_execute_RaySceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real(EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real(EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener(EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay(EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay(EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16(EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool(EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool(EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16(EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_execute_RaySceneQueryResult(EarthView_World_Graphic_COctreeRaySceneQuery_execute_RaySceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_execute_RaySceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener(EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult(EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void(EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CRaySceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener_Callback(listener);
					}
					else
						return this->COctreeRaySceneQuery::execute(listener);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance)
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback(obj, distance);
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::queryResult(obj, distance);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout EarthView::World::Graphic::CColourValue& cv, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback(obj, distance, e, c, i, r, &cv, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance)
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback(fragment, distance);
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::queryResult(fragment, distance);
				}
				virtual const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* getListenerPtr()
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* returnValue = m_EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback();
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::getListenerPtr();
				}
				virtual void setRay(_in const EarthView::World::Spatial::Math::CRay& ray)
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay_Callback(&ray);
					}
					else
						return this->COctreeRaySceneQuery::setRay(ray);
				}
				virtual const EarthView::World::Spatial::Math::CRay& getRay() const
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CRay& returnValue = *(EarthView::World::Spatial::Math::CRay*)m_EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay_Callback();
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::getRay();
				}
				virtual void setSortByDistance(_in ev_bool sort, _in ev_uint16 maxresults)
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback(sort, maxresults);
					}
					else
						return this->COctreeRaySceneQuery::setSortByDistance(sort, maxresults);
				}
				virtual void setSortByDistance(_in ev_bool sort)
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_Callback(sort);
					}
					else
						return this->COctreeRaySceneQuery::setSortByDistance(sort);
				}
				virtual ev_bool getSortByDistance() const
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::getSortByDistance();
				}
				virtual ev_uint16 getMaxResults() const
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::getMaxResults();
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& getLastResults()
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RaySceneQueryResult& returnValue = *(EarthView::World::Graphic::RaySceneQueryResult*)m_EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void_Callback();
					}
					else
						return this->COctreeRaySceneQuery::clearResults();
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->COctreeRaySceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->COctreeRaySceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->COctreeRaySceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->COctreeRaySceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(COctreeRaySceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
			{
				EarthView::World::Graphic::COctreeRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX;
				if (dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeRaySceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeRaySceneQuery_execute_void_CRaySceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
			{
				EarthView::World::Graphic::COctreeRaySceneQuery* ptrNativeObject = (EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeRaySceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_queryResult_ev_bool_WorldFragment_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getListenerPtr_CRaySceneQueryInternalListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setRay_void_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getRay_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setSortByDistance_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getSortByDistance_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getMaxResults_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_execute_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_execute_RaySceneQueryResult_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_execute_RaySceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getLastResults_RaySceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				COctreeRaySceneQueryProxy* ptr = dynamic_cast<COctreeRaySceneQueryProxy*>((EarthView::World::Graphic::COctreeRaySceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeRaySceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class COctreeSphereSceneQueryProxy : public EarthView::World::Graphic::COctreeSphereSceneQuery
			{
			private:
				EarthView_World_Graphic_COctreeSphereSceneQuery_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				COctreeSphereSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : COctreeSphereSceneQuery(pList)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_SceneQueryResult(EarthView_World_Graphic_COctreeSphereSceneQuery_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener(EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult(EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void(EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->COctreeSphereSceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->COctreeSphereSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void_Callback();
					}
					else
						return this->COctreeSphereSceneQuery::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->COctreeSphereSceneQuery::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->COctreeSphereSceneQuery::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->COctreeSphereSceneQuery::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->COctreeSphereSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeSphereSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->COctreeSphereSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeSphereSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->COctreeSphereSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->COctreeSphereSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->COctreeSphereSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(COctreeSphereSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::COctreeSphereSceneQuery* ptrNativeObject = (EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX;
				if (dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeSphereSceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSphereSceneQuery_execute_void_CSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::COctreeSphereSceneQuery* ptrNativeObject = (EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeSphereSceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_execute_SceneQueryResult_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				COctreeSphereSceneQueryProxy* ptr = dynamic_cast<COctreeSphereSceneQueryProxy*>((EarthView::World::Graphic::COctreeSphereSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSphereSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class COctreePlaneBoundedVolumeListSceneQueryProxy : public EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery
			{
			private:
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				COctreePlaneBoundedVolumeListSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : COctreePlaneBoundedVolumeListSceneQuery(pList)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void_Callback();
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->COctreePlaneBoundedVolumeListSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(COctreePlaneBoundedVolumeListSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery* ptrNativeObject = (EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX;
				if (dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_void_CSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery* ptrNativeObject = (EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				COctreePlaneBoundedVolumeListSceneQueryProxy* ptr = dynamic_cast<COctreePlaneBoundedVolumeListSceneQueryProxy*>((EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreePlaneBoundedVolumeListSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class COctreeAxisAlignedBoxSceneQueryProxy : public EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery
			{
			private:
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				COctreeAxisAlignedBoxSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : COctreeAxisAlignedBoxSceneQuery(pList)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_SceneQueryResult(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::getLastResults();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void_Callback();
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->COctreeAxisAlignedBoxSceneQuery::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(COctreeAxisAlignedBoxSceneQueryProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery* ptrNativeObject = (EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX;
				if (dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_void_CSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery* ptrNativeObject = (EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_SceneQueryResult_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				COctreeAxisAlignedBoxSceneQueryProxy* ptr = dynamic_cast<COctreeAxisAlignedBoxSceneQueryProxy*>((EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeAxisAlignedBoxSceneQuery_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
		}
	}
}
