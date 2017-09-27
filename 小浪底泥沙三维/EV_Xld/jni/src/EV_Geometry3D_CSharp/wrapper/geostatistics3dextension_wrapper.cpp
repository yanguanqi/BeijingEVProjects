/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geostatistics3dextension.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_Callback)(_in ev_real64 dis);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_Callback)(_in void* indices);
			class CGeoStatistics3DExtensionProxy : public EarthView::World::Geometry3D::CGeoStatistics3DExtension
			{
			private:
				EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_Callback* m_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_Callback;
				EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_Callback* m_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_Callback;
			public:
				CGeoStatistics3DExtensionProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeoStatistics3DExtension(pList)
				{
					m_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64(EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector(EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_Callback = pCallback;
				}
				virtual void setLabelVisibleDistance(_in ev_real64 dis)
				{
					if(m_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_Callback(dis);
					}
					else
						return this->CGeoStatistics3DExtension::setLabelVisibleDistance(dis);
				}
				virtual ev_bool setInvisibleIndices(_in EarthView::World::Core::IntVector indices)
				{
					if(m_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_Callback(&indices);
						return returnValue;
					}
					else
						return this->CGeoStatistics3DExtension::setInvisibleIndices(indices);
				}
			};
			REGISTER_FACTORY_CLASS(CGeoStatistics3DExtensionProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall Get_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mpSymbol( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform*) pObjectXXXX;
				EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->mpSymbol;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mpSymbol( void *pObjectXXXX, EarthView::World::Spatial::Display::ISymbol*  value )
			{
				((EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform*)pObjectXXXX)->mpSymbol = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mMatrix4( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->mMatrix4;
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CGeoStatistics3DExtension_TagSymbolTransform_mMatrix4( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform*)pObjectXXXX)->mMatrix4 = *(EarthView::World::Spatial::Math::CMatrix4*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_addSymbolTransform_void_ISymbol_CMatrix4(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol, _in const void* matrix )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				ptrNativeObject->addSymbolTransform(symbol, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_setSymbolTransform_void_ev_uint32_ISymbol_CMatrix4(void *pObjectXXXX, _in ev_uint32 index, _in const EarthView::World::Spatial::Display::ISymbol* symbol, _in const EarthView::World::Spatial::Math::CMatrix4* matrix )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				ptrNativeObject->setSymbolTransform(index, symbol, matrix);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_getSymbolTransformCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getSymbolTransformCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_getTransformMatrix_CMatrix4_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getTransformMatrix(index);
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_getSymbol_ISymbol_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_setPosition_void_CVector3(void *pObjectXXXX, _in const void* position )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				ptrNativeObject->setPosition(*(EarthView::World::Spatial::Math::CVector3*)position);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_build_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_render_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				ptrNativeObject->render();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool_ISymbol(void *pObjectXXXX, _in ev_bool resetTextStyle, _in ev_bool derenderTxt, _in ev_bool reCreate, _in ev_bool attachLabel, _in EarthView::World::Spatial::Display::ISymbol* psymbol )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, psymbol);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_derender_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				ptrNativeObject->derender();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_layoutLabels_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				ptrNativeObject->layoutLabels();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 dis )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				if (dynamic_cast<CGeoStatistics3DExtensionProxy*>((EarthView::World::Geometry3D::CGeoStatistics3DExtension*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoStatistics3DExtension::setLabelVisibleDistance(dis);
				else
					ptrNativeObject->setLabelVisibleDistance(dis);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_Callback* pCallback )
			{
				CGeoStatistics3DExtensionProxy* ptr = dynamic_cast<CGeoStatistics3DExtensionProxy*>((EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_setLabelVisibleDistance_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dis )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoStatistics3DExtension::setLabelVisibleDistance(dis);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector(void *pObjectXXXX, _in void* indices )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				if (dynamic_cast<CGeoStatistics3DExtensionProxy*>((EarthView::World::Geometry3D::CGeoStatistics3DExtension*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoStatistics3DExtension::setInvisibleIndices(*(EarthView::World::Core::IntVector*)indices);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setInvisibleIndices(*(EarthView::World::Core::IntVector*)indices);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_Callback* pCallback )
			{
				CGeoStatistics3DExtensionProxy* ptr = dynamic_cast<CGeoStatistics3DExtensionProxy*>((EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoStatistics3DExtension_setInvisibleIndices_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in void* indices )
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* ptrNativeObject = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoStatistics3DExtension::setInvisibleIndices(*(EarthView::World::Core::IntVector*)indices);
				return objXXXX;
			}
		}
	}
}
