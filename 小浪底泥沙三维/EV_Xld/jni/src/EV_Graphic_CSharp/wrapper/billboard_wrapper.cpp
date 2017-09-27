/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/billboard.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CBillboard_mPosition( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mPosition;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CBillboard_mPosition( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CBillboard*)pObjectXXXX)->mPosition = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CBillboard_mDirection( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mDirection;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CBillboard_mDirection( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CBillboard*)pObjectXXXX)->mDirection = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBillboardSet*  _stdcall Get_EarthView_World_Graphic_CBillboard_mParentSet( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				EarthView::World::Graphic::CBillboardSet* objXXXX = ptrNativeObject->mParentSet;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CBillboard_mParentSet( void *pObjectXXXX, EarthView::World::Graphic::CBillboardSet*  value )
			{
				((EarthView::World::Graphic::CBillboard*)pObjectXXXX)->mParentSet = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CBillboard_mColour( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mColour;
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CBillboard_mColour( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CBillboard*)pObjectXXXX)->mColour = *(EarthView::World::Graphic::CColourValue*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CBillboard_mRotation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				EarthView::World::Spatial::Math::CRadian &objXXXX = ptrNativeObject->mRotation;
				EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CBillboard_mRotation( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CBillboard*)pObjectXXXX)->mRotation = *(EarthView::World::Spatial::Math::CRadian*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CBillboard_mVisible( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mVisible;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CBillboard_mVisible( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CBillboard*)pObjectXXXX)->mVisible = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CBillboard_mBeyondDistance( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mBeyondDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CBillboard_mBeyondDistance( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CBillboard*)pObjectXXXX)->mBeyondDistance = value;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CBillboard_getRotation_CRadian(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CRadian& objXXXX = ptrNativeObject->getRotation();
				const EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboard_setRotation_void_CRadian(void *pObjectXXXX, _in const void* rotation )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ptrNativeObject->setRotation(*(EarthView::World::Spatial::Math::CRadian*)rotation);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboard_setPosition_void_CVector3(void *pObjectXXXX, _in const void* position )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ptrNativeObject->setPosition(*(EarthView::World::Spatial::Math::CVector3*)position);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboard_setPosition_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ptrNativeObject->setPosition(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CBillboard_getPosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getPosition();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboard_setDimensions_void_Real_Real(void *pObjectXXXX, _in Real width, _in Real height )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ptrNativeObject->setDimensions(width, height);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboard_resetDimensions_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ptrNativeObject->resetDimensions();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboard_setColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ptrNativeObject->setColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CBillboard_getColour_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getColour();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CBillboard_hasOwnDimensions_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasOwnDimensions();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CBillboard_getOwnWidth_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOwnWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CBillboard_getOwnHeight_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOwnHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboard__notifyOwner_void_CBillboardSet(void *pObjectXXXX, _in EarthView::World::Graphic::CBillboardSet* ref_owner )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ptrNativeObject->_notifyOwner(ref_owner);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CBillboard_isUseTexcoordRect_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isUseTexcoordRect();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboard_setTexcoordIndex_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 texcoordIndex )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ptrNativeObject->setTexcoordIndex(texcoordIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CBillboard_getTexcoordIndex_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getTexcoordIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboard_setTexcoordRect_void_FloatRect(void *pObjectXXXX, _in const void* texcoordRect )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ptrNativeObject->setTexcoordRect(*(EarthView::World::Graphic::FloatRect*)texcoordRect);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboard_setTexcoordRect_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real u0, _in Real v0, _in Real u1, _in Real v1 )
			{
				EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				ptrNativeObject->setTexcoordRect(u0, v0, u1, v1);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CBillboard_getTexcoordRect_FloatRect(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboard* ptrNativeObject = (EarthView::World::Graphic::CBillboard*) pObjectXXXX;
				const EarthView::World::Graphic::FloatRect& objXXXX = ptrNativeObject->getTexcoordRect();
				const EarthView::World::Graphic::FloatRect *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
		}
	}
}
