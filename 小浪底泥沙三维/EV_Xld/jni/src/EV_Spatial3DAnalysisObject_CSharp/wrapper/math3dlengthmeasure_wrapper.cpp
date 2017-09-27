/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dlengthmeasure.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener);
				class CMath3DMeasureLengthProxy : public EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength
				{
				private:
					EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener_Callback;
				public:
					CMath3DMeasureLengthProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DMeasureLength(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitude3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener_Callback();
							return returnValue;
						}
						else
							return this->CMath3DMeasureLength::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener_Callback(ref_pListener);
						}
						else
							return this->CMath3DMeasureLength::setAltitude3DListener(ref_pListener);
					}
				};
				REGISTER_FACTORY_CLASS(CMath3DMeasureLengthProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuClampedDistance_ev_real64_ev_int32_CVector3_CVector3_VertexList(void *pObjectXXXX, _in ev_int32 num, _in void* p0, _in void* p1, _out void* vertices )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calcuClampedDistance(num, *(EarthView::World::Spatial::Math::CVector3*)p0, *(EarthView::World::Spatial::Math::CVector3*)p1, *(EarthView::World::Spatial::Math::VertexList*)vertices);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuStraightDistance_ev_real64_CVector3_CVector3(void *pObjectXXXX, _in void* p0, _in void* p1 )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calcuStraightDistance(*(EarthView::World::Spatial::Math::CVector3*)p0, *(EarthView::World::Spatial::Math::CVector3*)p1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuProjectDistance_ev_real64_CVector3_CVector3(void *pObjectXXXX, _in void* p0, _in void* p1 )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calcuProjectDistance(*(EarthView::World::Spatial::Math::CVector3*)p0, *(EarthView::World::Spatial::Math::CVector3*)p1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuMiddlePoints_ev_bool_VertexList_VertexList(void *pObjectXXXX, _in const void* inpoints, _out void* middlepoints )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->calcuMiddlePoints(*(EarthView::World::Spatial::Math::VertexList*)inpoints, *(EarthView::World::Spatial::Math::VertexList*)middlepoints);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuInterWorldPoints_ev_bool_VertexList_VertexList(void *pObjectXXXX, _in const void* inpoints, _out void* outpoints )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->calcuInterWorldPoints(*(EarthView::World::Spatial::Math::VertexList*)inpoints, *(EarthView::World::Spatial::Math::VertexList*)outpoints);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calculateOnServer_void_ev_int32_VertexList_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 num, _in const void* inpoints, _out ev_real64& clampedDistance, _out ev_real64& straightDistance, _out ev_real64& projectDistance )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjectXXXX;
					ptrNativeObject->calculateOnServer(num, *(EarthView::World::Spatial::Math::VertexList*)inpoints, clampedDistance, straightDistance, projectDistance);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DMeasureLengthProxy* ptr = dynamic_cast<CMath3DMeasureLengthProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DMeasureLengthProxy* ptr = dynamic_cast<CMath3DMeasureLengthProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener(pCallback);
					}
				}
			}
		}
	}
}
