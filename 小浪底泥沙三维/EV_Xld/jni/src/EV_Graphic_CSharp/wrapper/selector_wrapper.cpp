/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/selector.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance);
			typedef const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*  ( _stdcall EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySelector_setRay_void_CRay_Callback)(_in const void* ray);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRaySelector_getRay_CRay_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16_Callback)(_in ev_bool sort, _in ev_uint16 maxresults);
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_Callback)(_in ev_bool sort);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener_Callback)(_in EarthView::World::Graphic::CRaySceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySelector_clearResults_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CRaySelectorProxy : public EarthView::World::Graphic::CRaySelector
			{
			private:
				EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_Callback* m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_Callback;
				EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real_Callback* m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real_Callback;
				EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener_Callback* m_EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener_Callback;
				EarthView_World_Graphic_CRaySelector_setRay_void_CRay_Callback* m_EarthView_World_Graphic_CRaySelector_setRay_void_CRay_Callback;
				EarthView_World_Graphic_CRaySelector_getRay_CRay_Callback* m_EarthView_World_Graphic_CRaySelector_getRay_CRay_Callback;
				EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16_Callback* m_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16_Callback;
				EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_Callback* m_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_Callback;
				EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool_Callback* m_EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool_Callback;
				EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16_Callback* m_EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16_Callback;
				EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult_Callback* m_EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult_Callback;
				EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener_Callback* m_EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener_Callback;
				EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult_Callback* m_EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult_Callback;
				EarthView_World_Graphic_CRaySelector_clearResults_void_Callback* m_EarthView_World_Graphic_CRaySelector_clearResults_void_Callback;
				EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CRaySelectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CRaySelector(pList)
				{
					m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_setRay_void_CRay_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_getRay_CRay_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real(EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real(EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener(EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_setRay_void_CRay(EarthView_World_Graphic_CRaySelector_setRay_void_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_setRay_void_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_getRay_CRay(EarthView_World_Graphic_CRaySelector_getRay_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_getRay_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16(EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool(EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool(EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16(EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult(EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener(EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult(EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_clearResults_void(EarthView_World_Graphic_CRaySelector_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32(EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CRaySceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener_Callback(listener);
					}
					else
						return this->CRaySelector::execute(listener);
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& execute()
				{
					if(m_EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RaySceneQueryResult& returnValue = *(EarthView::World::Graphic::RaySceneQueryResult*)m_EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CRaySelector::execute();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CRaySelector_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySelector_clearResults_void_Callback();
					}
					else
						return this->CRaySelector::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_Callback(obj, distance);
						return returnValue;
					}
					else
						return this->CRaySelector::queryResult(obj, distance);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CRaySelector::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout EarthView::World::Graphic::CColourValue& cv, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback(obj, distance, e, c, i, r, &cv, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CRaySelector::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real_Callback(fragment, distance);
						return returnValue;
					}
					else
						return this->CRaySelector::queryResult(fragment, distance);
				}
				virtual const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* getListenerPtr()
				{
					if(m_EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* returnValue = m_EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener_Callback();
						return returnValue;
					}
					else
						return this->CRaySelector::getListenerPtr();
				}
				virtual void setRay(_in const EarthView::World::Spatial::Math::CRay& ray)
				{
					if(m_EarthView_World_Graphic_CRaySelector_setRay_void_CRay_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySelector_setRay_void_CRay_Callback(&ray);
					}
					else
						return this->CRaySelector::setRay(ray);
				}
				virtual const EarthView::World::Spatial::Math::CRay& getRay() const
				{
					if(m_EarthView_World_Graphic_CRaySelector_getRay_CRay_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CRay& returnValue = *(EarthView::World::Spatial::Math::CRay*)m_EarthView_World_Graphic_CRaySelector_getRay_CRay_Callback();
						return returnValue;
					}
					else
						return this->CRaySelector::getRay();
				}
				virtual void setSortByDistance(_in ev_bool sort, _in ev_uint16 maxresults)
				{
					if(m_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16_Callback(sort, maxresults);
					}
					else
						return this->CRaySelector::setSortByDistance(sort, maxresults);
				}
				virtual void setSortByDistance(_in ev_bool sort)
				{
					if(m_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_Callback(sort);
					}
					else
						return this->CRaySelector::setSortByDistance(sort);
				}
				virtual ev_bool getSortByDistance() const
				{
					if(m_EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRaySelector::getSortByDistance();
				}
				virtual ev_uint16 getMaxResults() const
				{
					if(m_EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CRaySelector::getMaxResults();
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& getLastResults()
				{
					if(m_EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RaySceneQueryResult& returnValue = *(EarthView::World::Graphic::RaySceneQueryResult*)m_EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CRaySelector::getLastResults();
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CRaySelector::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRaySelector::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CRaySelector::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRaySelector::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CRaySelector::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CRaySelector::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CRaySelector::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CRaySelectorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
			{
				EarthView::World::Graphic::CRaySelector* ptrNativeObject = (EarthView::World::Graphic::CRaySelector*) pObjectXXXX;
				if (dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRaySelector::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySelector_execute_void_CRaySceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
			{
				EarthView::World::Graphic::CRaySelector* ptrNativeObject = (EarthView::World::Graphic::CRaySelector*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRaySelector::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySelector* ptrNativeObject = (EarthView::World::Graphic::CRaySelector*) pObjectXXXX;
				if (dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySelector::execute();
					EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->execute();
					EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRaySelector_execute_RaySceneQueryResult_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySelector* ptrNativeObject = (EarthView::World::Graphic::CRaySelector*) pObjectXXXX;
				EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRaySelector::execute();
				EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySelector_clearResults_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySelector* ptrNativeObject = (EarthView::World::Graphic::CRaySelector*) pObjectXXXX;
				if (dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRaySelector::clearResults();
				else
					ptrNativeObject->clearResults();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_clearResults_void_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySelector_clearResults_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRaySelector* ptrNativeObject = (EarthView::World::Graphic::CRaySelector*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRaySelector::clearResults();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySelector_setRenderSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool render )
			{
				EarthView::World::Graphic::CRaySelector* ptrNativeObject = (EarthView::World::Graphic::CRaySelector*) pObjectXXXX;
				ptrNativeObject->setRenderSelected(render);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRaySelector_getRenderSelected_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRaySelector* ptrNativeObject = (EarthView::World::Graphic::CRaySelector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRenderSelected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRaySelector_setViewport_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CRaySelector* ptrNativeObject = (EarthView::World::Graphic::CRaySelector*) pObjectXXXX;
				ptrNativeObject->setViewport(viewport);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Graphic_CRaySelector_getViewport_CViewport(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRaySelector* ptrNativeObject = (EarthView::World::Graphic::CRaySelector*) pObjectXXXX;
				const EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->getViewport();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_queryResult_ev_bool_WorldFragment_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_getListenerPtr_CRaySceneQueryInternalListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_setRay_void_CRay( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_setRay_void_CRay_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_setRay_void_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_getRay_CRay( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_getRay_CRay_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_getRay_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_setSortByDistance_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_getSortByDistance_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_getMaxResults_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_getLastResults_RaySceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CRaySelectorProxy* ptr = dynamic_cast<CRaySelectorProxy*>((EarthView::World::Graphic::CRaySelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRaySelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CBoxSelector_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CBoxSelectorProxy : public EarthView::World::Graphic::CBoxSelector
			{
			private:
				EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_CBoxSelector_clearResults_void_Callback* m_EarthView_World_Graphic_CBoxSelector_clearResults_void_Callback;
				EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CBoxSelectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CBoxSelector(pList)
				{
					m_EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult(EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener(EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult(EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_clearResults_void(EarthView_World_Graphic_CBoxSelector_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32(EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->CBoxSelector::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if(m_EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CBoxSelector::execute();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CBoxSelector_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBoxSelector_clearResults_void_Callback();
					}
					else
						return this->CBoxSelector::clearResults();
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CBoxSelector::getLastResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->CBoxSelector::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->CBoxSelector::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->CBoxSelector::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CBoxSelector::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CBoxSelector::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CBoxSelector::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CBoxSelector::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CBoxSelector::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CBoxSelector::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CBoxSelector::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CBoxSelectorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CBoxSelector* ptrNativeObject = (EarthView::World::Graphic::CBoxSelector*) pObjectXXXX;
				if (dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBoxSelector::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBoxSelector_execute_void_CSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CBoxSelector* ptrNativeObject = (EarthView::World::Graphic::CBoxSelector*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBoxSelector::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBoxSelector* ptrNativeObject = (EarthView::World::Graphic::CBoxSelector*) pObjectXXXX;
				if (dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CBoxSelector::execute();
					EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->execute();
					EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CBoxSelector_execute_SceneQueryResult_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBoxSelector* ptrNativeObject = (EarthView::World::Graphic::CBoxSelector*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CBoxSelector::execute();
				EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBoxSelector_clearResults_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBoxSelector* ptrNativeObject = (EarthView::World::Graphic::CBoxSelector*) pObjectXXXX;
				if (dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBoxSelector::clearResults();
				else
					ptrNativeObject->clearResults();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_clearResults_void_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBoxSelector_clearResults_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBoxSelector* ptrNativeObject = (EarthView::World::Graphic::CBoxSelector*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBoxSelector::clearResults();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBoxSelector_setRenderSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool render )
			{
				EarthView::World::Graphic::CBoxSelector* ptrNativeObject = (EarthView::World::Graphic::CBoxSelector*) pObjectXXXX;
				ptrNativeObject->setRenderSelected(render);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CBoxSelector_getRenderSelected_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBoxSelector* ptrNativeObject = (EarthView::World::Graphic::CBoxSelector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRenderSelected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CBoxSelectorProxy* ptr = dynamic_cast<CBoxSelectorProxy*>((EarthView::World::Graphic::CBoxSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBoxSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener_Callback)(_in EarthView::World::Graphic::CSceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereSelector_clearResults_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* first);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback)(_in EarthView::World::Graphic::CMovableObject* first, _inout void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CSphereSelectorProxy : public EarthView::World::Graphic::CSphereSelector
			{
			private:
				EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult_Callback* m_EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult_Callback;
				EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener_Callback* m_EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener_Callback;
				EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult_Callback* m_EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult_Callback;
				EarthView_World_Graphic_CSphereSelector_clearResults_void_Callback* m_EarthView_World_Graphic_CSphereSelector_clearResults_void_Callback;
				EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_Callback* m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_Callback;
				EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback* m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback;
				EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment_Callback* m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment_Callback;
				EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CSphereSelectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CSphereSelector(pList)
				{
					m_EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult(EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener(EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult(EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_clearResults_void(EarthView_World_Graphic_CSphereSelector_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject(EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector(EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment(EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32(EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener_Callback(listener);
					}
					else
						return this->CSphereSelector::execute(listener);
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if(m_EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CSphereSelector::execute();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CSphereSelector_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereSelector_clearResults_void_Callback();
					}
					else
						return this->CSphereSelector::clearResults();
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if(m_EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SceneQueryResult& returnValue = *(EarthView::World::Graphic::SceneQueryResult*)m_EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CSphereSelector::getLastResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first)
				{
					if(m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_Callback(first);
						return returnValue;
					}
					else
						return this->CSphereSelector::queryResult(first);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* first, _inout EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback(first, &indexVec);
						return returnValue;
					}
					else
						return this->CSphereSelector::queryResult(first, indexVec);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if(m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment_Callback(fragment);
						return returnValue;
					}
					else
						return this->CSphereSelector::queryResult(fragment);
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CSphereSelector::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSphereSelector::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CSphereSelector::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSphereSelector::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CSphereSelector::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CSphereSelector::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CSphereSelector::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CSphereSelectorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CSphereSelector* ptrNativeObject = (EarthView::World::Graphic::CSphereSelector*) pObjectXXXX;
				if (dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereSelector::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereSelector_execute_void_CSceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneQueryListener* listener )
			{
				EarthView::World::Graphic::CSphereSelector* ptrNativeObject = (EarthView::World::Graphic::CSphereSelector*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereSelector::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSphereSelector* ptrNativeObject = (EarthView::World::Graphic::CSphereSelector*) pObjectXXXX;
				if (dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereSelector::execute();
					EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->execute();
					EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSphereSelector_execute_SceneQueryResult_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSphereSelector* ptrNativeObject = (EarthView::World::Graphic::CSphereSelector*) pObjectXXXX;
				EarthView::World::Graphic::SceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereSelector::execute();
				EarthView::World::Graphic::SceneQueryResult *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereSelector_clearResults_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSphereSelector* ptrNativeObject = (EarthView::World::Graphic::CSphereSelector*) pObjectXXXX;
				if (dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereSelector::clearResults();
				else
					ptrNativeObject->clearResults();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_clearResults_void_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereSelector_clearResults_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSphereSelector* ptrNativeObject = (EarthView::World::Graphic::CSphereSelector*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereSelector::clearResults();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereSelector_setRenderSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool render )
			{
				EarthView::World::Graphic::CSphereSelector* ptrNativeObject = (EarthView::World::Graphic::CSphereSelector*) pObjectXXXX;
				ptrNativeObject->setRenderSelected(render);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSphereSelector_getRenderSelected_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereSelector* ptrNativeObject = (EarthView::World::Graphic::CSphereSelector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRenderSelected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_getLastResults_SceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_CMovableObject_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_queryResult_ev_bool_WorldFragment(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CSphereSelectorProxy* ptr = dynamic_cast<CSphereSelectorProxy*>((EarthView::World::Graphic::CSphereSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance);
			typedef const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*  ( _stdcall EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CComponentSelector_setRay_void_CRay_Callback)(_in const void* ray);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CComponentSelector_getRay_CRay_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback)(_in ev_bool sort, _in ev_uint16 maxresults);
			typedef void  ( _stdcall EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_Callback)(_in ev_bool sort);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener_Callback)(_in EarthView::World::Graphic::CRaySceneQueryListener* listener);
			typedef void*  ( _stdcall EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CComponentSelector_clearResults_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
			typedef int  ( _stdcall EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType_Callback)();
			typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
			class CComponentSelectorProxy : public EarthView::World::Graphic::CComponentSelector
			{
			private:
				EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback* m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback;
				EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback;
				EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback* m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback;
				EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback* m_EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback;
				EarthView_World_Graphic_CComponentSelector_setRay_void_CRay_Callback* m_EarthView_World_Graphic_CComponentSelector_setRay_void_CRay_Callback;
				EarthView_World_Graphic_CComponentSelector_getRay_CRay_Callback* m_EarthView_World_Graphic_CComponentSelector_getRay_CRay_Callback;
				EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback* m_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback;
				EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_Callback* m_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_Callback;
				EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool_Callback* m_EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool_Callback;
				EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16_Callback* m_EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16_Callback;
				EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult_Callback* m_EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult_Callback;
				EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener_Callback* m_EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener_Callback;
				EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult_Callback* m_EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult_Callback;
				EarthView_World_Graphic_CComponentSelector_clearResults_void_Callback* m_EarthView_World_Graphic_CComponentSelector_clearResults_void_Callback;
				EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32_Callback* m_EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32_Callback;
				EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32_Callback;
				EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback;
				EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType_Callback;
				EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
			public:
				CComponentSelectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CComponentSelector(pList)
				{
					m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_setRay_void_CRay_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_getRay_CRay_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_clearResults_void_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType_Callback = NULL;
					m_EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real(EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real(EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener(EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_setRay_void_CRay(EarthView_World_Graphic_CComponentSelector_setRay_void_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_setRay_void_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_getRay_CRay(EarthView_World_Graphic_CComponentSelector_getRay_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_getRay_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16(EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool(EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool(EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16(EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult(EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener(EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult(EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_clearResults_void(EarthView_World_Graphic_CComponentSelector_clearResults_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_clearResults_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32(EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32(EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32(EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32(EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType(EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
				}
				virtual void execute(_in EarthView::World::Graphic::CRaySceneQueryListener* listener)
				{
					if(m_EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener_Callback(listener);
					}
					else
						return this->CComponentSelector::execute(listener);
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& execute()
				{
					if(m_EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RaySceneQueryResult& returnValue = *(EarthView::World::Graphic::RaySceneQueryResult*)m_EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CComponentSelector::execute();
				}
				virtual void clearResults()
				{
					if(m_EarthView_World_Graphic_CComponentSelector_clearResults_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CComponentSelector_clearResults_void_Callback();
					}
					else
						return this->CComponentSelector::clearResults();
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback(obj, distance);
						return returnValue;
					}
					else
						return this->CComponentSelector::queryResult(obj, distance);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CComponentSelector::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout EarthView::World::Graphic::CColourValue& cv, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if(m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback(obj, distance, e, c, i, r, &cv, &point, &pixelpoint);
						return returnValue;
					}
					else
						return this->CComponentSelector::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
				}
				virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback(fragment, distance);
						return returnValue;
					}
					else
						return this->CComponentSelector::queryResult(fragment, distance);
				}
				virtual const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* getListenerPtr()
				{
					if(m_EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* returnValue = m_EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback();
						return returnValue;
					}
					else
						return this->CComponentSelector::getListenerPtr();
				}
				virtual void setRay(_in const EarthView::World::Spatial::Math::CRay& ray)
				{
					if(m_EarthView_World_Graphic_CComponentSelector_setRay_void_CRay_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CComponentSelector_setRay_void_CRay_Callback(&ray);
					}
					else
						return this->CComponentSelector::setRay(ray);
				}
				virtual const EarthView::World::Spatial::Math::CRay& getRay() const
				{
					if(m_EarthView_World_Graphic_CComponentSelector_getRay_CRay_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CRay& returnValue = *(EarthView::World::Spatial::Math::CRay*)m_EarthView_World_Graphic_CComponentSelector_getRay_CRay_Callback();
						return returnValue;
					}
					else
						return this->CComponentSelector::getRay();
				}
				virtual void setSortByDistance(_in ev_bool sort, _in ev_uint16 maxresults)
				{
					if(m_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback(sort, maxresults);
					}
					else
						return this->CComponentSelector::setSortByDistance(sort, maxresults);
				}
				virtual void setSortByDistance(_in ev_bool sort)
				{
					if(m_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_Callback(sort);
					}
					else
						return this->CComponentSelector::setSortByDistance(sort);
				}
				virtual ev_bool getSortByDistance() const
				{
					if(m_EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CComponentSelector::getSortByDistance();
				}
				virtual ev_uint16 getMaxResults() const
				{
					if(m_EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CComponentSelector::getMaxResults();
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& getLastResults()
				{
					if(m_EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RaySceneQueryResult& returnValue = *(EarthView::World::Graphic::RaySceneQueryResult*)m_EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult_Callback();
						return returnValue;
					}
					else
						return this->CComponentSelector::getLastResults();
				}
				virtual void setQueryMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CComponentSelector::setQueryMask(mask);
				}
				virtual ev_uint32 getQueryMask() const
				{
					if(m_EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CComponentSelector::getQueryMask();
				}
				virtual void setQueryTypeMask(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32_Callback(mask);
					}
					else
						return this->CComponentSelector::setQueryTypeMask(mask);
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if(m_EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CComponentSelector::getQueryTypeMask();
				}
				virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if(m_EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
					}
					else
						return this->CComponentSelector::setWorldFragmentType(wft);
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if(m_EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType_Callback();
						return returnValue;
					}
					else
						return this->CComponentSelector::getWorldFragmentType();
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if(m_EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
						return returnValue;
					}
					else
						return this->CComponentSelector::getSupportedWorldFragmentTypes();
				}
			};
			REGISTER_FACTORY_CLASS(CComponentSelectorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
			{
				EarthView::World::Graphic::CComponentSelector* ptrNativeObject = (EarthView::World::Graphic::CComponentSelector*) pObjectXXXX;
				if (dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CComponentSelector::execute(listener);
				else
					ptrNativeObject->execute(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CComponentSelector_execute_void_CRaySceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
			{
				EarthView::World::Graphic::CComponentSelector* ptrNativeObject = (EarthView::World::Graphic::CComponentSelector*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CComponentSelector::execute(listener);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CComponentSelector* ptrNativeObject = (EarthView::World::Graphic::CComponentSelector*) pObjectXXXX;
				if (dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CComponentSelector::execute();
					EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->execute();
					EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CComponentSelector_execute_RaySceneQueryResult_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CComponentSelector* ptrNativeObject = (EarthView::World::Graphic::CComponentSelector*) pObjectXXXX;
				EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Graphic::CComponentSelector::execute();
				EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CComponentSelector_clearResults_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CComponentSelector* ptrNativeObject = (EarthView::World::Graphic::CComponentSelector*) pObjectXXXX;
				if (dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CComponentSelector::clearResults();
				else
					ptrNativeObject->clearResults();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_clearResults_void( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_clearResults_void_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_clearResults_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CComponentSelector_clearResults_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CComponentSelector* ptrNativeObject = (EarthView::World::Graphic::CComponentSelector*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CComponentSelector::clearResults();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CComponentSelector_setRenderSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool render )
			{
				EarthView::World::Graphic::CComponentSelector* ptrNativeObject = (EarthView::World::Graphic::CComponentSelector*) pObjectXXXX;
				ptrNativeObject->setRenderSelected(render);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CComponentSelector_getRenderSelected_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CComponentSelector* ptrNativeObject = (EarthView::World::Graphic::CComponentSelector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRenderSelected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CComponentSelector_setViewport_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CComponentSelector* ptrNativeObject = (EarthView::World::Graphic::CComponentSelector*) pObjectXXXX;
				ptrNativeObject->setViewport(viewport);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Graphic_CComponentSelector_getViewport_CViewport(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CComponentSelector* ptrNativeObject = (EarthView::World::Graphic::CComponentSelector*) pObjectXXXX;
				const EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->getViewport();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_queryResult_ev_bool_WorldFragment_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_getListenerPtr_CRaySceneQueryInternalListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_setRay_void_CRay( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_setRay_void_CRay_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_setRay_void_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_getRay_CRay( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_getRay_CRay_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_getRay_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_setSortByDistance_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_getSortByDistance_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_getMaxResults_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_getLastResults_RaySceneQueryResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_setQueryMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_getQueryMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_setQueryTypeMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_getQueryTypeMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_setWorldFragmentType_void_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_getWorldFragmentType_WorldFragmentType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
			{
				CComponentSelectorProxy* ptr = dynamic_cast<CComponentSelectorProxy*>((EarthView::World::Graphic::CComponentSelector*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
				}
			}
		}
	}
}
