/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/vectorcache3dlayerinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_setLayerTheme_void_ITheme(void *pObjectXXXX, _in EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					ptrNativeObject->setLayerTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_getLayerTheme_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getLayerTheme();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_setLayerLabelProperty_void_ILabelProperty(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ILabelProperty* labelproperty )
				{
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					ptrNativeObject->setLayerLabelProperty(labelproperty);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_getLayerLabelProperty_ILabelProperty(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->getLayerLabelProperty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_setLayerFeatureCount_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					ptrNativeObject->setLayerFeatureCount(count);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_getLayerFeatureCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getLayerFeatureCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_setLayerStatisticsMaxValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					ptrNativeObject->setLayerStatisticsMaxValue(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_getLayerStatisticsMaxValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getLayerStatisticsMaxValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_setLayerRootOctreeBox_void_CAxisAlignedBox(void *pObjectXXXX, _inout void* box )
				{
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					ptrNativeObject->setLayerRootOctreeBox(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_getLayerRootOctreeBox_CAxisAlignedBox(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getLayerRootOctreeBox();
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_setLayerWebFields_void_CVector3DCacheFieldVector(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* fields )
				{
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					ptrNativeObject->setLayerWebFields(fields);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_getLayerWebFields_CVector3DCacheFieldVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector* objXXXX = ptrNativeObject->getLayerWebFields();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_toStream_MemoryDataStreamPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->toStream();
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorCache3DLayerInfo_fromStream_CVectorCache3DLayerInfo_MemoryDataStreamPtr(_in const void* stream )
				{
					EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo* objXXXX = EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo::fromStream(*(EarthView::World::Core::MemoryDataStreamPtr*)stream);
					return objXXXX;
				}
			}
		}
	}
}
