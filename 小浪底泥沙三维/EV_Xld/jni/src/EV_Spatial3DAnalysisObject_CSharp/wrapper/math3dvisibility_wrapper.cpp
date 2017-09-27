/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dvisibility.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_push_back_void_VisibilityPoint(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::VisibilityPoint& t )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::VisibilityPoint&  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_front_VisibilityPoint(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::VisibilityPoint& objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::VisibilityPoint&  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_back_VisibilityPoint(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::VisibilityPoint& objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_insert_void_ev_uint32_VisibilityPoint(void *pObjectXXXX, _in ev_uint32 pos, _in const EarthView::World::Spatial3D::Analysis::VisibilityPoint& t )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_insert_void_ev_uint32_VisibilityPointList(void *pObjectXXXX, _in ev_uint32 pos, _in const void* other )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Analysis::VisibilityPointList*)other);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::VisibilityPoint&  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_OperatorIndex_VisibilityPoint_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList& objYYYY = *(EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::VisibilityPoint& objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::VisibilityPoint&  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_at_VisibilityPoint_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::VisibilityPoint& objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_VisibilityPointList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::VisibilityPointList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::VisibilityPointList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				typedef const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener);
				class CMath3DVisibilityProxy : public EarthView::World::Spatial3D::Analysis::CMath3DVisibility
				{
				private:
					EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener_Callback;
				public:
					CMath3DVisibilityProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DVisibility(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitude3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener_Callback();
							return returnValue;
						}
						else
							return this->CMath3DVisibility::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener_Callback(ref_pListener);
						}
						else
							return this->CMath3DVisibility::setAltitude3DListener(ref_pListener);
					}
				};
				REGISTER_FACTORY_CLASS(CMath3DVisibilityProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getNeedStop_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getNeedStop();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setNeedStop_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjectXXXX;
					ptrNativeObject->setNeedStop(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calcuPointVisibility_ev_bool_CVector3_ev_real64_CVector3_ev_real64_ev_int32(void *pObjectXXXX, _in const void* view, _in const ev_real64& viewH, _in const void* target, _in const ev_real64& targetH, _in const ev_int32& number )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->calcuPointVisibility(*(EarthView::World::Spatial::Math::CVector3*)view, viewH, *(EarthView::World::Spatial::Math::CVector3*)target, targetH, number);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calcuLineVisibility_ev_real64_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VertexList_VertexList(void *pObjectXXXX, _in const void* center, _in const ev_real64& centerH, _in const void* target, _in const ev_int32& number, _in const ev_bool& isViewShed, _out void* visibilityline, _out void* invisibilityline )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calcuLineVisibility(*(EarthView::World::Spatial::Math::CVector3*)center, centerH, *(EarthView::World::Spatial::Math::CVector3*)target, number, isViewShed, *(EarthView::World::Spatial::Math::VertexList*)visibilityline, *(EarthView::World::Spatial::Math::VertexList*)invisibilityline);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calcuLineVisibility_ev_real64_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VisibilityPointList(void *pObjectXXXX, _in const void* center, _in const ev_real64& centerH, _in const void* target, _in const ev_int32& number, _in const ev_bool& isViewShed, _out void* outputPts )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calcuLineVisibility(*(EarthView::World::Spatial::Math::CVector3*)center, centerH, *(EarthView::World::Spatial::Math::CVector3*)target, number, isViewShed, *(EarthView::World::Spatial3D::Analysis::VisibilityPointList*)outputPts);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calculateOnServer_void_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VisibilityPointList_ev_real64(void *pObjectXXXX, _in const void* center, _in const ev_real64& centerH, _in const void* target, _in const ev_int32& number, _in const ev_bool& isViewShed, _out void* outputPts, _out ev_real64& shadePercent )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjectXXXX;
					ptrNativeObject->calculateOnServer(*(EarthView::World::Spatial::Math::CVector3*)center, centerH, *(EarthView::World::Spatial::Math::CVector3*)target, number, isViewShed, *(EarthView::World::Spatial3D::Analysis::VisibilityPointList*)outputPts, shadePercent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DVisibilityProxy* ptr = dynamic_cast<CMath3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DVisibilityProxy* ptr = dynamic_cast<CMath3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener(pCallback);
					}
				}
			}
		}
	}
}
