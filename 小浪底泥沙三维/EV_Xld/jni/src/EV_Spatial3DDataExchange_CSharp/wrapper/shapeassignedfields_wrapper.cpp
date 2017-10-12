/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/shapeassignedfields.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CScaleField__XValue( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CScaleField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_XValue;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CScaleField__XValue( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjectXXXX)->_XValue = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CScaleField__YValue( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CScaleField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_YValue;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CScaleField__YValue( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjectXXXX)->_YValue = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CScaleField__ZValue( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CScaleField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_ZValue;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CScaleField__ZValue( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjectXXXX)->_ZValue = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CScaleField__fieldX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CScaleField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldX;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CScaleField__fieldX( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjectXXXX)->_fieldX = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CScaleField__fieldY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CScaleField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldY;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CScaleField__fieldY( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjectXXXX)->_fieldY = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CScaleField__fieldZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CScaleField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldZ;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CScaleField__fieldZ( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CScaleField*)pObjectXXXX)->_fieldZ = value1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CScaleField_OperatorAssign_CScaleField_CScaleField(void *pObjXXXX, _in const void* rObj )
				{
					EarthView::World::Spatial3D::DataExchange::CScaleField& objXXXX = *((EarthView::World::Spatial3D::DataExchange::CScaleField*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::DataExchange::CScaleField*)rObj;
					EarthView::World::Spatial3D::DataExchange::CScaleField *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__XValue( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_XValue;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__XValue( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_XValue = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__YValue( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_YValue;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__YValue( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_YValue = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__ZValue( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_ZValue;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__ZValue( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_ZValue = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldQuaternionX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldQuaternionX;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldQuaternionX( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_fieldQuaternionX = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldQuaternionY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldQuaternionY;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldQuaternionY( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_fieldQuaternionY = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldQuaternionZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldQuaternionZ;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldQuaternionZ( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_fieldQuaternionZ = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldQuaternionW( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldQuaternionW;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldQuaternionW( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_fieldQuaternionW = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationAxisX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldRotationAxisX;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationAxisX( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_fieldRotationAxisX = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationAxisY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldRotationAxisY;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationAxisY( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_fieldRotationAxisY = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationAxisZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldRotationAxisZ;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationAxisZ( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_fieldRotationAxisZ = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationVectorX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldRotationVectorX;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationVectorX( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_fieldRotationVectorX = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationVectorY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldRotationVectorY;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationVectorY( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_fieldRotationVectorY = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationVectorZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldRotationVectorZ;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationVectorZ( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_fieldRotationVectorZ = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationAngle( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_fieldRotationAngle;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__fieldRotationAngle( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_fieldRotationAngle = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CQuationField__RadianOrDegree( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_RadianOrDegree;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CQuationField__RadianOrDegree( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CQuationField*)pObjectXXXX)->_RadianOrDegree = value1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CQuationField_OperatorAssign_CQuationField_CQuationField(void *pObjXXXX, _in const void* rObj )
				{
					EarthView::World::Spatial3D::DataExchange::CQuationField& objXXXX = *((EarthView::World::Spatial3D::DataExchange::CQuationField*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::DataExchange::CQuationField*)rObj;
					EarthView::World::Spatial3D::DataExchange::CQuationField *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CSkewField__skewAxisX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CSkewField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_skewAxisX;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CSkewField__skewAxisX( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjectXXXX)->_skewAxisX = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CSkewField__skewAxisY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CSkewField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_skewAxisY;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CSkewField__skewAxisY( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjectXXXX)->_skewAxisY = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CSkewField__skewAxisZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CSkewField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_skewAxisZ;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CSkewField__skewAxisZ( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjectXXXX)->_skewAxisZ = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CSkewField__skewAngle( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CSkewField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_skewAngle;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CSkewField__skewAngle( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjectXXXX)->_skewAngle = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CSkewField__RadianOrDegree( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CSkewField*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_RadianOrDegree;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CSkewField__RadianOrDegree( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CSkewField*)pObjectXXXX)->_RadianOrDegree = value1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CSkewField_OperatorAssign_CSkewField_CSkewField(void *pObjXXXX, _in const void* rObj )
				{
					EarthView::World::Spatial3D::DataExchange::CSkewField& objXXXX = *((EarthView::World::Spatial3D::DataExchange::CSkewField*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::DataExchange::CSkewField*)rObj;
					EarthView::World::Spatial3D::DataExchange::CSkewField *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__name( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->_name;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__name( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjectXXXX)->_name = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__srsID( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->_srsID;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__srsID( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjectXXXX)->_srsID = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__isRecursionPath( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->_isRecursionPath;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__isRecursionPath( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjectXXXX)->_isRecursionPath = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__scale( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::CScaleField &objXXXX = ptrNativeObject->_scale;
					EarthView::World::Spatial3D::DataExchange::CScaleField *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__scale( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjectXXXX)->_scale = *(EarthView::World::Spatial3D::DataExchange::CScaleField*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__offset( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::CScaleField &objXXXX = ptrNativeObject->_offset;
					EarthView::World::Spatial3D::DataExchange::CScaleField *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__offset( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjectXXXX)->_offset = *(EarthView::World::Spatial3D::DataExchange::CScaleField*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__quation( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::CQuationField &objXXXX = ptrNativeObject->_quation;
					EarthView::World::Spatial3D::DataExchange::CQuationField *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__quation( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjectXXXX)->_quation = *(EarthView::World::Spatial3D::DataExchange::CQuationField*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__skew( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::CSkewField &objXXXX = ptrNativeObject->_skew;
					EarthView::World::Spatial3D::DataExchange::CSkewField *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields__skew( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)pObjectXXXX)->_skew = *(EarthView::World::Spatial3D::DataExchange::CSkewField*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CShapeAssignedFields_OperatorAssign_CShapeAssignedFields_CShapeAssignedFields(void *pObjXXXX, _in const void* robj )
				{
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields& objXXXX = *((EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)robj;
					EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
		}
	}
}
