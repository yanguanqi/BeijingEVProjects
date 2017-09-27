/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/modelcomponentselecttool.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace SystemUI
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout void* point, _inout void* pixelpoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback)(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout void* cv, _inout void* point, _inout void* pixelpoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback)(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance);
				typedef const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay_Callback)(_in const void* ray);
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback)(_in ev_bool sort, _in ev_uint16 maxresults);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_Callback)(_in ev_bool sort);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool_Callback)();
				typedef ev_uint16  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener_Callback)(_in EarthView::World::Graphic::CRaySceneQueryListener* listener);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32_Callback)(_in ev_uint32 mask);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback)(_in int wft);
				typedef int  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType_Callback)();
				typedef const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback)();
				class CModelComponentSelectorProxy : public EarthView::World::Spatial3D::SystemUI::CModelComponentSelector
				{
				private:
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback;
				public:
					CModelComponentSelectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelComponentSelector(pList)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback = pCallback;
					}
					virtual void execute(_in EarthView::World::Graphic::CRaySceneQueryListener* listener)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener_Callback(listener);
						}
						else
							return this->CModelComponentSelector::execute(listener);
					}
					virtual EarthView::World::Graphic::RaySceneQueryResult& execute()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RaySceneQueryResult& returnValue = *(EarthView::World::Graphic::RaySceneQueryResult*)m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelector::execute();
					}
					virtual void clearResults()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void_Callback();
						}
						else
							return this->CModelComponentSelector::clearResults();
					}
					virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback(obj, distance);
							return returnValue;
						}
						else
							return this->CModelComponentSelector::queryResult(obj, distance);
					}
					virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_int32 objIndex, _in ev_int32 submeshIndex, _in ev_int32 instanceIndex, _in ev_int32 segmentIndex, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, &point, &pixelpoint);
							return returnValue;
						}
						else
							return this->CModelComponentSelector::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
					}
					virtual ev_bool queryResult(_in EarthView::World::Graphic::CMovableObject* obj, _in Real distance, _in ev_real32 e, _in ev_uint8 c, _in ev_uint16 i, _in ev_uint16 r, _inout EarthView::World::Graphic::CColourValue& cv, _inout EarthView::World::Spatial::Math::CVector3& point, _inout EarthView::World::Spatial::Math::CVector2& pixelpoint)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback(obj, distance, e, c, i, r, &cv, &point, &pixelpoint);
							return returnValue;
						}
						else
							return this->CModelComponentSelector::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
					}
					virtual ev_bool queryResult(_in EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, _in Real distance)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback(fragment, distance);
							return returnValue;
						}
						else
							return this->CModelComponentSelector::queryResult(fragment, distance);
					}
					virtual const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* getListenerPtr()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelector::getListenerPtr();
					}
					virtual void setRay(_in const EarthView::World::Spatial::Math::CRay& ray)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay_Callback(&ray);
						}
						else
							return this->CModelComponentSelector::setRay(ray);
					}
					virtual const EarthView::World::Spatial::Math::CRay& getRay() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CRay& returnValue = *(EarthView::World::Spatial::Math::CRay*)m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelector::getRay();
					}
					virtual void setSortByDistance(_in ev_bool sort, _in ev_uint16 maxresults)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback(sort, maxresults);
						}
						else
							return this->CModelComponentSelector::setSortByDistance(sort, maxresults);
					}
					virtual void setSortByDistance(_in ev_bool sort)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_Callback(sort);
						}
						else
							return this->CModelComponentSelector::setSortByDistance(sort);
					}
					virtual ev_bool getSortByDistance() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelector::getSortByDistance();
					}
					virtual ev_uint16 getMaxResults() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelector::getMaxResults();
					}
					virtual EarthView::World::Graphic::RaySceneQueryResult& getLastResults()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RaySceneQueryResult& returnValue = *(EarthView::World::Graphic::RaySceneQueryResult*)m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelector::getLastResults();
					}
					virtual void setQueryMask(_in ev_uint32 mask)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32_Callback(mask);
						}
						else
							return this->CModelComponentSelector::setQueryMask(mask);
					}
					virtual ev_uint32 getQueryMask() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelector::getQueryMask();
					}
					virtual void setQueryTypeMask(_in ev_uint32 mask)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32_Callback(mask);
						}
						else
							return this->CModelComponentSelector::setQueryTypeMask(mask);
					}
					virtual ev_uint32 getQueryTypeMask() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelector::getQueryTypeMask();
					}
					virtual void setWorldFragmentType(_in EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback((int)wft);
						}
						else
							return this->CModelComponentSelector::setWorldFragmentType(wft);
					}
					virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneQuery::WorldFragmentType returnValue = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType)m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelector::getWorldFragmentType();
					}
					virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelector::getSupportedWorldFragmentTypes();
					}
				};
				REGISTER_FACTORY_CLASS(CModelComponentSelectorProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelector* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX;
					if (dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelector::execute(listener);
					else
						ptrNativeObject->execute(listener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_void_CRaySceneQueryListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRaySceneQueryListener* listener )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelector* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelector::execute(listener);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelector* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX;
					if (dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelector::execute();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_execute_RaySceneQueryResult_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelector* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX;
					EarthView::World::Graphic::RaySceneQueryResult& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelector::execute();
					EarthView::World::Graphic::RaySceneQueryResult *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelector* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX;
					if (dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelector::clearResults();
					else
						ptrNativeObject->clearResults();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_clearResults_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelector* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelector::clearResults();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRenderSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool render )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelector* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX;
					ptrNativeObject->setRenderSelected(render);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRenderSelected_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CModelComponentSelector* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getRenderSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setViewport_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelector* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX;
					ptrNativeObject->setViewport(viewport);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getViewport_CViewport(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CModelComponentSelector* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX;
					const EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->getViewport();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_queryResult_ev_bool_WorldFragment_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getListenerPtr_CRaySceneQueryInternalListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setRay_void_CRay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getRay_CRay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_ev_uint16(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setSortByDistance_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSortByDistance_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getMaxResults_ev_uint16(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getLastResults_RaySceneQueryResult(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryMask_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryMask_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setQueryTypeMask_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getQueryTypeMask_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_setWorldFragmentType_void_WorldFragmentType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getWorldFragmentType_WorldFragmentType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet_Callback* pCallback )
				{
					CModelComponentSelectorProxy* ptr = dynamic_cast<CModelComponentSelectorProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelector_getSupportedWorldFragmentTypes_WorldFragmentTypeSet(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CModelComponentSelectToolProxy : public EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool
				{
				private:
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent_Callback;
				public:
					CModelComponentSelectToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelComponentSelectTool(pList)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent(EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void_Callback();
						}
						else
							return this->CModelComponentSelectTool::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::getChecked();
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::getEnabled();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::getType();
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onMouseUp(button, shift, x, y);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::isCheckable();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CModelComponentSelectTool::setChecked(checked);
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CModelComponentSelectTool::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CModelComponentSelectTool::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void_Callback();
						}
						else
							return this->CModelComponentSelectTool::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void_Callback();
						}
						else
							return this->CModelComponentSelectTool::deactivate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onContextMenu(x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onDoubleClick();
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onDoubleClick(button, shift, x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CModelComponentSelectTool::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CModelComponentSelectToolProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					if (dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					if (dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::getChecked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChecked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::getChecked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					if (dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::getEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setSortByDistance_void_ev_bool(void *pObjectXXXX, _in ev_bool sort )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ptrNativeObject->setSortByDistance(sort);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setSortByDistance_void_ev_bool_ev_uint16(void *pObjectXXXX, _in ev_bool sort, _in ev_uint16 maxresults )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ptrNativeObject->setSortByDistance(sort, maxresults);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getSortByDistance_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getSortByDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getMaxResults_ev_uint16(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->getMaxResults();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getSelectButton_GUIMouseButtonMask(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask objXXXX = ptrNativeObject->getSelectButton();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setSelectButton_void_GUIMouseButtonMask(void *pObjectXXXX, _in int button )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ptrNativeObject->setSelectButton((EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask)button);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_resetResults_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ptrNativeObject->resetResults();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					if (dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					if (dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					if (dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent_Callback* pCallback )
				{
					CModelComponentSelectToolProxy* ptr = dynamic_cast<CModelComponentSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CModelComponentSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CModelComponentSelectTool_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
