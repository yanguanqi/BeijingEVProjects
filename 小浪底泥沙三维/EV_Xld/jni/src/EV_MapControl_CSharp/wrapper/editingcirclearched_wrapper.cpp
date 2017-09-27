/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/editingcirclearched.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef EarthView::World::Spatial2D::Controls::CEditingObject*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool_Callback)(_in ev_int32 index, _in ev_bool& ok);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint_Callback)(_in const void* pnt);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint_Callback)(_in const void* from, _in const void* to);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint_Callback)(_in void* point);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64_Callback)(_in ev_real64 radius);
				class CEditingCircleArchedProxy : public EarthView::World::Spatial2D::Controls::CEditingCircleArched
				{
				private:
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64_Callback;
				public:
					CEditingCircleArchedProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingCircleArched(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject(EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint(EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint(EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint(EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::Controls::CEditingObject* newObject() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::CEditingObject* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject_Callback();
							return returnValue;
						}
						else
							return this->CEditingCircleArched::newObject();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getName();
					}
					virtual EarthView::World::Spatial2D::Controls::EditingObjectType getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::EditingObjectType returnValue = (EarthView::World::Spatial2D::Controls::EditingObjectType)m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType_Callback();
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getType();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* makeSample(_in const EarthView::World::Spatial::Geometry::CPoint& from, _in const EarthView::World::Spatial::Geometry::CPoint& to) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint_Callback(&from, &to);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEditingCircleArched::makeSample(from, to);
					}
					virtual ev_bool isFine() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingCircleArched::isFine();
					}
					virtual ev_bool isExcellent() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingCircleArched::isExcellent();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getCenterPoint(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getCenterPoint(ok);
					}
					virtual void setCenterPoint(_in EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint_Callback(&point);
						}
						else
							return this->CEditingCircleArched::setCenterPoint(point);
					}
					virtual ev_real64 getCentralAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getCentralAngle(ok);
					}
					virtual void setCentralAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingCircleArched::setCentralAngle(angle);
					}
					virtual ev_real64 getStartAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getStartAngle(ok);
					}
					virtual void setStartAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingCircleArched::setStartAngle(angle);
					}
					virtual ev_real64 getRadius(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getRadius(ok);
					}
					virtual void setRadius(_in ev_real64 radius)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64_Callback(radius);
						}
						else
							return this->CEditingCircleArched::setRadius(radius);
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getGeometry();
					}
					virtual ev_int32 getPointCount() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getPointCount();
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getPoint(_in ev_int32 index, _in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool_Callback(index, ok);
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getPoint(index, ok);
					}
					virtual ev_int32 indexForPoint(_in const EarthView::World::Spatial::Geometry::CPoint& pnt) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint_Callback(&pnt);
							return returnValue;
						}
						else
							return this->CEditingCircleArched::indexForPoint(pnt);
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getFirstPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getFirstPoint(ok);
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getLastPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getLastPoint(ok);
					}
					virtual ev_real64 getRotateAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCircleArched::getRotateAngle(ok);
					}
				};
				REGISTER_FACTORY_CLASS(CEditingCircleArchedProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::newObject();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->newObject();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_newObject_CEditingObject_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::newObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getType_EditingObjectType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint(void *pObjectXXXX, _in const void* from, _in const void* to )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::makeSample(*(EarthView::World::Spatial::Geometry::CPoint*)from, *(EarthView::World::Spatial::Geometry::CPoint*)to);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->makeSample(*(EarthView::World::Spatial::Geometry::CPoint*)from, *(EarthView::World::Spatial::Geometry::CPoint*)to);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_makeSample_IGeometry_CPoint_CPoint_NoVirtual(void *pObjectXXXX, _in const void* from, _in const void* to )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::makeSample(*(EarthView::World::Spatial::Geometry::CPoint*)from, *(EarthView::World::Spatial::Geometry::CPoint*)to);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::isFine();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isFine();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_isFine_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::isFine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::isExcellent();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExcellent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_isExcellent_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::isExcellent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getCenterPoint(ok);
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getCenterPoint(ok);
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCenterPoint_CPoint_ev_bool_NoVirtual(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getCenterPoint(ok);
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint(void *pObjectXXXX, _in void* point )
				{
					EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::setCenterPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
					else
						ptrNativeObject->setCenterPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCenterPoint_void_CPoint_NoVirtual(void *pObjectXXXX, _in void* point )
				{
					EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::setCenterPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getCentralAngle(ok);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getCentralAngle(ok);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getCentralAngle_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getCentralAngle(ok);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::setCentralAngle(angle);
					else
						ptrNativeObject->setCentralAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setCentralAngle_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::setCentralAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getStartAngle(ok);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getStartAngle(ok);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getStartAngle_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getStartAngle(ok);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::setStartAngle(angle);
					else
						ptrNativeObject->setStartAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setStartAngle_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::setStartAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getRadius(ok);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getRadius(ok);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRadius_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::getRadius(ok);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64(void *pObjectXXXX, _in ev_real64 radius )
				{
					EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					if (dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::setRadius(radius);
					else
						ptrNativeObject->setRadius(radius);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingCircleArched_setRadius_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 radius )
				{
					EarthView::World::Spatial2D::Controls::CEditingCircleArched* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingCircleArched::setRadius(radius);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPointCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getPoint_CPoint_ev_int32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_indexForPoint_ev_int32_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getFirstPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getLastPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingCircleArchedProxy* ptr = dynamic_cast<CEditingCircleArchedProxy*>((EarthView::World::Spatial2D::Controls::CEditingCircleArched*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCircleArched_getRotateAngle_ev_real64_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
