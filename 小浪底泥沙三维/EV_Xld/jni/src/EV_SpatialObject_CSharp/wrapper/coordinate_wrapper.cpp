/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/coordinate.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate_Callback)(_in const void* coord);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate_Callback)(_in const void* coord);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate_Callback)(_in const void* coord);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64_Callback)(_in const void* coord, _in ev_real64 tolerance);
				typedef EarthView::World::Spatial::Geometry::CCoordinate*  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType_Callback)(_in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef EarthView::World::Spatial::Geometry::CCoordinate*  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate_Callback)(_in const EarthView::World::Spatial::Geometry::CCoordinate* coord1, _in const EarthView::World::Spatial::Geometry::CCoordinate* coord2);
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate_Callback)(_in const void* coord1, _in const void* coord2);
				class CCoordinateProxy : public EarthView::World::Spatial::Geometry::CCoordinate
				{
				private:
					EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate_Callback;
					EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate_Callback* m_EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate_Callback;
				public:
					CCoordinateProxy(EarthView::World::Core::CNameValuePairList *pList) : CCoordinate(pList)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate(EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate(EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate(EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64(EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate(EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate(EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType(EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate(EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate(EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate_Callback = pCallback;
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate_Callback(&coord);
							return returnValue;
						}
						else
							return this->CCoordinate::distance(coord);
					}
					virtual ev_real64 distanceOnPlane(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate_Callback(&coord);
							return returnValue;
						}
						else
							return this->CCoordinate::distanceOnPlane(coord);
					}
					virtual ev_real64 distanceXY(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate_Callback(&coord);
							return returnValue;
						}
						else
							return this->CCoordinate::distanceXY(coord);
					}
					virtual ev_bool equals(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64_Callback(&coord, tolerance);
							return returnValue;
						}
						else
							return this->CCoordinate::equals(coord, tolerance);
					}
					virtual EarthView::World::Spatial::Geometry::CCoordinate* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CCoordinate* returnValue = m_EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCoordinate::clone();
					}
					virtual EarthView::World::Spatial::Geometry::CCoordinate clone2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CCoordinate returnValue = *(EarthView::World::Spatial::Geometry::CCoordinate*)m_EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate_Callback();
							return returnValue;
						}
						else
							return this->CCoordinate::clone2();
					}
					virtual EVString toString(_in EarthView::World::Spatial::Geometry::EVCoordinateType type) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType_Callback((int)type);
							return returnValue;
						}
						else
							return this->CCoordinate::toString(type);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCoordinate::toStream(stream);
					}
					virtual void offset(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CCoordinate::offset(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CCoordinate::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CCoordinate::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual EarthView::World::Spatial::Geometry::CCoordinate* mirror(_in const EarthView::World::Spatial::Geometry::CCoordinate* coord1, _in const EarthView::World::Spatial::Geometry::CCoordinate* coord2) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CCoordinate* returnValue = m_EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate_Callback(coord1, coord2);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCoordinate::mirror(coord1, coord2);
					}
					virtual EarthView::World::Spatial::Geometry::CCoordinate mirror2(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord1, _in const EarthView::World::Spatial::Geometry::CCoordinate& coord2) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CCoordinate returnValue = *(EarthView::World::Spatial::Geometry::CCoordinate*)m_EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate_Callback(&coord1, &coord2);
							return returnValue;
						}
						else
							return this->CCoordinate::mirror2(coord1, coord2);
					}
				};
				REGISTER_FACTORY_CLASS(CCoordinateProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_OperatorAssign_CCoordinate_CCoordinate(void *pObjXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Geometry::CCoordinate& objXXXX = *((EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CCoordinate*)obj;
					EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_getX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_setX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ptrNativeObject->setX(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_getY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_setY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ptrNativeObject->setY(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_getZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_setZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ptrNativeObject->setZ(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_getM_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getM();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_setM_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ptrNativeObject->setM(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate(void *pObjectXXXX, _in const void* coord )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::distance(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->distance(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_distance_ev_real64_CCoordinate_NoVirtual(void *pObjectXXXX, _in const void* coord )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::distance(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate(void *pObjectXXXX, _in const void* coord )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::distanceOnPlane(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->distanceOnPlane(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_distanceOnPlane_ev_real64_CCoordinate_NoVirtual(void *pObjectXXXX, _in const void* coord )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::distanceOnPlane(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate(void *pObjectXXXX, _in const void* coord )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::distanceXY(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->distanceXY(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_distanceXY_ev_real64_CCoordinate_NoVirtual(void *pObjectXXXX, _in const void* coord )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::distanceXY(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64(void *pObjectXXXX, _in const void* coord, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::equals(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, tolerance);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equals(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, tolerance);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_equals_ev_bool_CCoordinate_ev_real64_NoVirtual(void *pObjectXXXX, _in const void* coord, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::equals(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, tolerance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CCoordinate*  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CCoordinate* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CCoordinate* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CCoordinate*  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_clone_CCoordinate_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CCoordinate objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::clone2();
						EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CCoordinate objXXXX = ptrNativeObject->clone2();
						EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_clone2_CCoordinate_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::clone2();
					EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType(void *pObjectXXXX, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::toString((EarthView::World::Spatial::Geometry::EVCoordinateType)type);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toString((EarthView::World::Spatial::Geometry::EVCoordinateType)type);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_toString_EVString_EVCoordinateType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::toString((EarthView::World::Spatial::Geometry::EVCoordinateType)type);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::offset(x, y, z);
					else
						ptrNativeObject->offset(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_offset_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::offset(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					else
						ptrNativeObject->rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::scale(xRef, yRef, zRef, x, y, z);
					else
						ptrNativeObject->scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CCoordinate*  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CCoordinate* coord1, _in const EarthView::World::Spatial::Geometry::CCoordinate* coord2 )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CCoordinate* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::mirror(coord1, coord2);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CCoordinate* objXXXX = ptrNativeObject->mirror(coord1, coord2);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CCoordinate*  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_mirror_CCoordinate_CCoordinate_CCoordinate_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CCoordinate* coord1, _in const EarthView::World::Spatial::Geometry::CCoordinate* coord2 )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::mirror(coord1, coord2);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate(void *pObjectXXXX, _in const void* coord1, _in const void* coord2 )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					if (dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CCoordinate objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::mirror2(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord1, *(EarthView::World::Spatial::Geometry::CCoordinate*)coord2);
						EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CCoordinate objXXXX = ptrNativeObject->mirror2(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord1, *(EarthView::World::Spatial::Geometry::CCoordinate*)coord2);
						EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate_Callback* pCallback )
				{
					CCoordinateProxy* ptr = dynamic_cast<CCoordinateProxy*>((EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCoordinate_mirror2_CCoordinate_CCoordinate_CCoordinate_NoVirtual(void *pObjectXXXX, _in const void* coord1, _in const void* coord2 )
				{
					const EarthView::World::Spatial::Geometry::CCoordinate* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCoordinate::mirror2(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord1, *(EarthView::World::Spatial::Geometry::CCoordinate*)coord2);
					EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
