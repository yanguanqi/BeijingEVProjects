/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/multitexturepoint3d.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_addPoint3d_void_EVString_CVector3_CDegree_EVString_float_bool_bool(void *pObjectXXXX, _in const char* ptName, _in const void* worldPos, _in const void* heading, _in const char* iconPath, _in const float& size, _in const bool& faceToCamera, _in const bool& showAsPixel )
			{
				EarthView::World::Core::ev_string ptName1 = ptName;
				EarthView::World::Core::ev_string iconPath1 = iconPath;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				ptrNativeObject->addPoint3d(ptName1, *(EarthView::World::Spatial::Math::CVector3*)worldPos, *(EarthView::World::Spatial::Math::CDegree*)heading, iconPath1, size, faceToCamera, showAsPixel);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_removePoint3d_void_EVString(void *pObjectXXXX, _in const char* ptName )
			{
				EarthView::World::Core::ev_string ptName1 = ptName;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				ptrNativeObject->removePoint3d(ptName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setVisible_void_EVString_bool(void *pObjectXXXX, _in const char* ptName, _in const bool& value )
			{
				EarthView::World::Core::ev_string ptName1 = ptName;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				ptrNativeObject->setVisible(ptName1, value);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getVisible_bool_EVString(void *pObjectXXXX, _in const char* ptName )
			{
				EarthView::World::Core::ev_string ptName1 = ptName;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getVisible(ptName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setStatus_void_EVString_CVector3_CDegree(void *pObjectXXXX, _in const char* ptName, _in const void* worldPos, _in const void* heading )
			{
				EarthView::World::Core::ev_string ptName1 = ptName;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				ptrNativeObject->setStatus(ptName1, *(EarthView::World::Spatial::Math::CVector3*)worldPos, *(EarthView::World::Spatial::Math::CDegree*)heading);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getPtIconPath_EVString_EVString(void *pObjectXXXX, _in const char* ptName )
			{
				EarthView::World::Core::ev_string ptName1 = ptName;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getPtIconPath(ptName1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_attachToScene_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				ptrNativeObject->attachToScene();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_removeAll_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				ptrNativeObject->removeAll();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setMaxVisibleDistance_void_EVString_Real(void *pObjectXXXX, _in const char* ptName, _in const Real& value )
			{
				EarthView::World::Core::ev_string ptName1 = ptName;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				ptrNativeObject->setMaxVisibleDistance(ptName1, value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setMinVisibleDistance_void_EVString_Real(void *pObjectXXXX, _in const char* ptName, _in const Real& value )
			{
				EarthView::World::Core::ev_string ptName1 = ptName;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				ptrNativeObject->setMinVisibleDistance(ptName1, value);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getMaxVisibleDistance_Real_EVString(void *pObjectXXXX, _in const char* ptName )
			{
				EarthView::World::Core::ev_string ptName1 = ptName;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getMaxVisibleDistance(ptName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_getMinVisibleDistance_Real_EVString(void *pObjectXXXX, _in const char* ptName )
			{
				EarthView::World::Core::ev_string ptName1 = ptName;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getMinVisibleDistance(ptName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CMultiTexturePoint3d_setSize_void_EVString_float(void *pObjectXXXX, _in const char* ptName, _in const float& value )
			{
				EarthView::World::Core::ev_string ptName1 = ptName;
				EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CMultiTexturePoint3d*) pObjectXXXX;
				ptrNativeObject->setSize(ptName1, value);
			}
		}
	}
}
