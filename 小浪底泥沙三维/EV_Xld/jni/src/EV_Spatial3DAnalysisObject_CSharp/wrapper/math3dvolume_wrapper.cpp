/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dvolume.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener);
				class CMath3DVolumeProxy : public EarthView::World::Spatial3D::Analysis::CMath3DVolume
				{
				private:
					EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener_Callback;
				public:
					CMath3DVolumeProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DVolume(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitude3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener_Callback();
							return returnValue;
						}
						else
							return this->CMath3DVolume::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener_Callback(ref_pListener);
						}
						else
							return this->CMath3DVolume::setAltitude3DListener(ref_pListener);
					}
				};
				REGISTER_FACTORY_CLASS(CMath3DVolumeProxy);
				extern "C" EV_DLL_EXPORT  const int  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_getCalcuStyle_VolumeCalcuStyle(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					const EarthView::World::Spatial3D::Analysis::VolumeCalcuStyle objXXXX = ptrNativeObject->getCalcuStyle();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_setCalcuStyle_void_VolumeCalcuStyle(void *pObjectXXXX, _in const int& value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ptrNativeObject->setCalcuStyle((EarthView::World::Spatial3D::Analysis::VolumeCalcuStyle&)value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_getInterval_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getInterval();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_setInterval_void_ev_real64(void *pObjectXXXX, _in const ev_real64& value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ptrNativeObject->setInterval(value);
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_getDepth_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getDepth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_setDepth_void_ev_real64(void *pObjectXXXX, _in const ev_real64& value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ptrNativeObject->setDepth(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_getDefaultDepth_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getDefaultDepth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_setDefaultDepth_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ptrNativeObject->setDefaultDepth(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_getNeedStop_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getNeedStop();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_setNeedStop_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ptrNativeObject->setNeedStop(value);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_getProgressV_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getProgressV();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_getMinAltiPointZ_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinAltiPointZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_calcuVolume_ev_real64_VertexList_ev_real64_ev_real64(void *pObjectXXXX, _in void* pts, _out ev_real64& fillVolume, _out ev_real64& digVolume )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calcuVolume(*(EarthView::World::Spatial::Math::VertexList*)pts, fillVolume, digVolume);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DVolume_calculateOnServer_void_VertexList_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in void* pts, _out ev_real64& fillVolume, _out ev_real64& digVolume, _out ev_real64& groundArea )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DVolume* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX;
					ptrNativeObject->calculateOnServer(*(EarthView::World::Spatial::Math::VertexList*)pts, fillVolume, digVolume, groundArea);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DVolumeProxy* ptr = dynamic_cast<CMath3DVolumeProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DVolume_getAltitude3DListener_CAltitude3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DVolumeProxy* ptr = dynamic_cast<CMath3DVolumeProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DVolume_setAltitude3DListener_void_CAltitude3DListener(pCallback);
					}
				}
			}
		}
	}
}
