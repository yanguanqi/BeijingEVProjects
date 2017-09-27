/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/coordinatesystem/transformation.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Utility
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_Callback)(_in const EarthView::World::Spatial::Utility::CSpatialReference* ref_objSrcCrdSys);
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_Callback)(_in const EarthView::World::Spatial::Utility::CSpatialReference* ref_objDstCrdSys);
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_Callback)(_in const EarthView::World::Spatial::Utility::CTransParameter* objTransParameter);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_Callback)(_in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _inout ev_real64* pdfZ);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_Callback)(_in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _inout ev_real64* pdfZ, _inout ev_bool* pBSuccesss);
				class CCoordinateTransformationProxy : public EarthView::World::Spatial::Utility::CCoordinateTransformation
				{
				private:
					EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_Callback* m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_Callback;
					EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_Callback* m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_Callback;
					EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_Callback* m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_Callback;
					EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_Callback;
				public:
					CCoordinateTransformationProxy(EarthView::World::Core::CNameValuePairList *pList) : CCoordinateTransformation(pList)
					{
						m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference(EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference(EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter(EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_Callback = pCallback;
					}
					virtual void setSourceCS(_in const EarthView::World::Spatial::Utility::CSpatialReference* ref_objSrcCrdSys)
					{
						if(m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_Callback(ref_objSrcCrdSys);
						}
						else
							return this->CCoordinateTransformation::setSourceCS(ref_objSrcCrdSys);
					}
					virtual void setTargetCS(_in const EarthView::World::Spatial::Utility::CSpatialReference* ref_objDstCrdSys)
					{
						if(m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_Callback(ref_objDstCrdSys);
						}
						else
							return this->CCoordinateTransformation::setTargetCS(ref_objDstCrdSys);
					}
					virtual void setTransParameter(_in const EarthView::World::Spatial::Utility::CTransParameter* objTransParameter)
					{
						if(m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_Callback(objTransParameter);
						}
						else
							return this->CCoordinateTransformation::setTransParameter(objTransParameter);
					}
					virtual ev_int32 transform(_in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _inout ev_real64* pdfZ)
					{
						if(m_EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_Callback(nCount, pdfX, pdfY, pdfZ);
							return returnValue;
						}
						else
							return this->CCoordinateTransformation::transform(nCount, pdfX, pdfY, pdfZ);
					}
					virtual ev_int32 transfromEx(_in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _inout ev_real64* pdfZ, _inout ev_bool* pBSuccesss)
					{
						if(m_EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_Callback(nCount, pdfX, pdfY, pdfZ, pBSuccesss);
							return returnValue;
						}
						else
							return this->CCoordinateTransformation::transfromEx(nCount, pdfX, pdfY, pdfZ, pBSuccesss);
					}
				};
				REGISTER_FACTORY_CLASS(CCoordinateTransformationProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Utility::CSpatialReference* ref_objSrcCrdSys )
				{
					EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					if (dynamic_cast<CCoordinateTransformationProxy*>((EarthView::World::Spatial::Utility::CCoordinateTransformation*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CCoordinateTransformation::setSourceCS(ref_objSrcCrdSys);
					else
						ptrNativeObject->setSourceCS(ref_objSrcCrdSys);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_Callback* pCallback )
				{
					CCoordinateTransformationProxy* ptr = dynamic_cast<CCoordinateTransformationProxy*>((EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Utility::CSpatialReference* ref_objSrcCrdSys )
				{
					EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CCoordinateTransformation::setSourceCS(ref_objSrcCrdSys);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Utility::CSpatialReference* ref_objDstCrdSys )
				{
					EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					if (dynamic_cast<CCoordinateTransformationProxy*>((EarthView::World::Spatial::Utility::CCoordinateTransformation*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CCoordinateTransformation::setTargetCS(ref_objDstCrdSys);
					else
						ptrNativeObject->setTargetCS(ref_objDstCrdSys);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_Callback* pCallback )
				{
					CCoordinateTransformationProxy* ptr = dynamic_cast<CCoordinateTransformationProxy*>((EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Utility::CSpatialReference* ref_objDstCrdSys )
				{
					EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CCoordinateTransformation::setTargetCS(ref_objDstCrdSys);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter(void *pObjectXXXX, _in const EarthView::World::Spatial::Utility::CTransParameter* objTransParameter )
				{
					EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					if (dynamic_cast<CCoordinateTransformationProxy*>((EarthView::World::Spatial::Utility::CCoordinateTransformation*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CCoordinateTransformation::setTransParameter(objTransParameter);
					else
						ptrNativeObject->setTransParameter(objTransParameter);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter( void *pObjectXXXX, EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_Callback* pCallback )
				{
					CCoordinateTransformationProxy* ptr = dynamic_cast<CCoordinateTransformationProxy*>((EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Utility::CTransParameter* objTransParameter )
				{
					EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CCoordinateTransformation::setTransParameter(objTransParameter);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Utility::CSpatialReference*  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_getSourceCS_CSpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					const EarthView::World::Spatial::Utility::CSpatialReference* objXXXX = ptrNativeObject->getSourceCS();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Utility::CSpatialReference*  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_getTargetCS_CSpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					const EarthView::World::Spatial::Utility::CSpatialReference* objXXXX = ptrNativeObject->getTargetCS();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Utility::CTransParameter*  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_getTransParameter_CTransParameter(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					const EarthView::World::Spatial::Utility::CTransParameter* objXXXX = ptrNativeObject->getTransParameter();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _inout ev_real64* pdfZ )
				{
					EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					if (dynamic_cast<CCoordinateTransformationProxy*>((EarthView::World::Spatial::Utility::CCoordinateTransformation*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CCoordinateTransformation::transform(nCount, pdfX, pdfY, pdfZ);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->transform(nCount, pdfX, pdfY, pdfZ);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCoordinateTransformationProxy* ptr = dynamic_cast<CCoordinateTransformationProxy*>((EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _inout ev_real64* pdfZ )
				{
					EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CCoordinateTransformation::transform(nCount, pdfX, pdfY, pdfZ);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(void *pObjectXXXX, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _inout ev_real64* pdfZ, _inout ev_bool* pBSuccesss )
				{
					EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					if (dynamic_cast<CCoordinateTransformationProxy*>((EarthView::World::Spatial::Utility::CCoordinateTransformation*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CCoordinateTransformation::transfromEx(nCount, pdfX, pdfY, pdfZ, pBSuccesss);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->transfromEx(nCount, pdfX, pdfY, pdfZ, pBSuccesss);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_Callback* pCallback )
				{
					CCoordinateTransformationProxy* ptr = dynamic_cast<CCoordinateTransformationProxy*>((EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _inout ev_real64* pdfZ, _inout ev_bool* pBSuccesss )
				{
					EarthView::World::Spatial::Utility::CCoordinateTransformation* ptrNativeObject = (EarthView::World::Spatial::Utility::CCoordinateTransformation*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CCoordinateTransformation::transfromEx(nCount, pdfX, pdfY, pdfZ, pBSuccesss);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_CSpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(_in const EarthView::World::Spatial::Utility::CSpatialReference* objSrcCrdSys, _in ev_int32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _in ev_bool pForwardFlag )
				{
					ev_int32 objXXXX = EarthView::World::Spatial::Utility::CCoordinateTransformation::transform(objSrcCrdSys, nCount, pdfX, pdfY, pForwardFlag);
					return objXXXX;
				}
			}
		}
	}
}
