/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dareameasure.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener);
				class CMath3DMeasureAreaProxy : public EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea
				{
				private:
					EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener_Callback;
				public:
					CMath3DMeasureAreaProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DMeasureArea(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitude3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener_Callback();
							return returnValue;
						}
						else
							return this->CMath3DMeasureArea::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener_Callback(ref_pListener);
						}
						else
							return this->CMath3DMeasureArea::setAltitude3DListener(ref_pListener);
					}
				};
				REGISTER_FACTORY_CLASS(CMath3DMeasureAreaProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getInterval_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getInterval();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setInterval_void_ev_real64(void *pObjectXXXX, _in const ev_real64& value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjectXXXX;
					ptrNativeObject->setInterval(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_calcuPolygonArea_ev_real64_VertexList_ev_bool_ev_real64(void *pObjectXXXX, _in void* inpoints, _in ev_bool calcuClampedArea, _out ev_real64& clampedArea )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calcuPolygonArea(*(EarthView::World::Spatial::Math::VertexList*)inpoints, calcuClampedArea, clampedArea);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_calcuClampedArea_ev_real64_VertexList(void *pObjectXXXX, _in void* inpoints )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calcuClampedArea(*(EarthView::World::Spatial::Math::VertexList*)inpoints);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_calcuProjectArea_ev_real64_VertexList(void *pObjectXXXX, _in void* inpoints )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calcuProjectArea(*(EarthView::World::Spatial::Math::VertexList*)inpoints);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_calculateOnServer_void_VertexList_ev_real64_ev_real64(void *pObjectXXXX, _in void* inpoints, _out ev_real64& clampArea, _out ev_real64& projArea )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjectXXXX;
					ptrNativeObject->calculateOnServer(*(EarthView::World::Spatial::Math::VertexList*)inpoints, clampArea, projArea);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DMeasureAreaProxy* ptr = dynamic_cast<CMath3DMeasureAreaProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_getAltitude3DListener_CAltitude3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DMeasureAreaProxy* ptr = dynamic_cast<CMath3DMeasureAreaProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureArea_setAltitude3DListener_void_CAltitude3DListener(pCallback);
					}
				}
			}
		}
	}
}
