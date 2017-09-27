/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dslope.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener);
				class CMath3DSlopeProxy : public EarthView::World::Spatial3D::Analysis::CMath3DSlope
				{
				private:
					EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener_Callback;
				public:
					CMath3DSlopeProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DSlope(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitude3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener_Callback();
							return returnValue;
						}
						else
							return this->CMath3DSlope::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener_Callback(ref_pListener);
						}
						else
							return this->CMath3DSlope::setAltitude3DListener(ref_pListener);
					}
				};
				REGISTER_FACTORY_CLASS(CMath3DSlopeProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_setNeedStop_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					ptrNativeObject->setNeedStop(val);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_getNeedStop_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getNeedStop();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_setInterval_void_ev_real64(void *pObjectXXXX, _in const ev_real64& value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					ptrNativeObject->setInterval(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_getInterval_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getInterval();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_getSlopeDistributing_RealVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					EarthView::World::Core::RealVector& objXXXX = ptrNativeObject->getSlopeDistributing();
					EarthView::World::Core::RealVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_getSlopeValues_RealVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					EarthView::World::Core::RealVector& objXXXX = ptrNativeObject->getSlopeValues();
					EarthView::World::Core::RealVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAspectValues_RealVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					EarthView::World::Core::RealVector& objXXXX = ptrNativeObject->getAspectValues();
					EarthView::World::Core::RealVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_getSlopePositionList_VertexList(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					EarthView::World::Spatial::Math::VertexList& objXXXX = ptrNativeObject->getSlopePositionList();
					EarthView::World::Spatial::Math::VertexList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_getInterpolationCountX_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getInterpolationCountX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_getInterpolationCountY_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getInterpolationCountY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_getProgressV_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getProgressV();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DSlope_calcuSlopeDistributing_void_VertexList_RealVector(void *pObjectXXXX, _in void* boundaryPts, _in const void* divisions )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX;
					ptrNativeObject->calcuSlopeDistributing(*(EarthView::World::Spatial::Math::VertexList*)boundaryPts, *(EarthView::World::Core::RealVector*)divisions);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DSlopeProxy* ptr = dynamic_cast<CMath3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DSlope_getAltitude3DListener_CAltitude3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DSlopeProxy* ptr = dynamic_cast<CMath3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DSlope_setAltitude3DListener_void_CAltitude3DListener(pCallback);
					}
				}
			}
		}
	}
}
