/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dbaseobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener);
				class CMath3DBaseObjectProxy : public EarthView::World::Spatial3D::Analysis::CMath3DBaseObject
				{
				private:
					EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Callback;
				public:
					CMath3DBaseObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DBaseObject(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitude3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Callback();
							return returnValue;
						}
						else
							return this->CMath3DBaseObject::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Callback(ref_pListener);
						}
						else
							return this->CMath3DBaseObject::setAltitude3DListener(ref_pListener);
					}
				};
				REGISTER_FACTORY_CLASS(CMath3DBaseObjectProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjectXXXX;
					if (dynamic_cast<CMath3DBaseObjectProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CMath3DBaseObject::getAltitude3DListener();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* objXXXX = ptrNativeObject->getAltitude3DListener();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DBaseObjectProxy* ptr = dynamic_cast<CMath3DBaseObjectProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjectXXXX;
					const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CMath3DBaseObject::getAltitude3DListener();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjectXXXX;
					if (dynamic_cast<CMath3DBaseObjectProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CMath3DBaseObject::setAltitude3DListener(ref_pListener);
					else
						ptrNativeObject->setAltitude3DListener(ref_pListener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DBaseObjectProxy* ptr = dynamic_cast<CMath3DBaseObjectProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CMath3DBaseObject::setAltitude3DListener(ref_pListener);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::CMathUtility3D*  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getMathUtility3D_CMathUtility3D(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* objXXXX = ptrNativeObject->getMathUtility3D();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getDefaultCalcuMode_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getDefaultCalcuMode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setDefaultCalcuMode_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*) pObjectXXXX;
					ptrNativeObject->setDefaultCalcuMode(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_computeBox_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*) pObjectXXXX;
					ptrNativeObject->computeBox();
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mNorth( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mNorth;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mNorth( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjectXXXX)->mNorth = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mSouth( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mSouth;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mSouth( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjectXXXX)->mSouth = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mWest( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mWest;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mWest( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjectXXXX)->mWest = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mEast( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mEast;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mEast( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjectXXXX)->mEast = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mBottomRadius( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mBottomRadius;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mBottomRadius( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjectXXXX)->mBottomRadius = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mTopRadius( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mTopRadius;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mTopRadius( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjectXXXX)->mTopRadius = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mCenter( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mCenter;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mCenter( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjectXXXX)->mCenter = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mIsComputed( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsComputed;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CGeoBoundingBox_mIsComputed( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)pObjectXXXX)->mIsComputed = value;
				}
			}
		}
	}
}
