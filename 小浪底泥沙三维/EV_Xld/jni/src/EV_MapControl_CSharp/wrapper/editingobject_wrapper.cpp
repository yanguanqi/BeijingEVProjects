/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/editingobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef EarthView::World::Spatial2D::Controls::CEditingObject*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool_Callback)(_in ev_int32 index, _in ev_bool& ok);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint_Callback)(_in const void* pnt);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint_Callback)(_in const void* from, _in const void* to);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint_Callback)(_in void* point);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64_Callback)(_in ev_real64 radius);
				class CEditingObjectProxy : public EarthView::World::Spatial2D::Controls::CEditingObject
				{
				private:
					EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64_Callback;
				public:
					CEditingObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingObject(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject(EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString(EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType(EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry(EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32(EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool(EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint(EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint(EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool(EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool(EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint(EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::Controls::CEditingObject* newObject() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::CEditingObject* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject_Callback();
							return returnValue;
						}
						else
							return this->CEditingObject::newObject();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditingObject::getName();
					}
					virtual EarthView::World::Spatial2D::Controls::EditingObjectType getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::EditingObjectType returnValue = (EarthView::World::Spatial2D::Controls::EditingObjectType)m_EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType_Callback();
							return returnValue;
						}
						else
							return this->CEditingObject::getType();
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CEditingObject::getGeometry();
					}
					virtual ev_int32 getPointCount() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CEditingObject::getPointCount();
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getPoint(_in ev_int32 index, _in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool_Callback(index, ok);
							return returnValue;
						}
						else
							return this->CEditingObject::getPoint(index, ok);
					}
					virtual ev_int32 indexForPoint(_in const EarthView::World::Spatial::Geometry::CPoint& pnt) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint_Callback(&pnt);
							return returnValue;
						}
						else
							return this->CEditingObject::indexForPoint(pnt);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* makeSample(_in const EarthView::World::Spatial::Geometry::CPoint& from, _in const EarthView::World::Spatial::Geometry::CPoint& to) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint_Callback(&from, &to);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEditingObject::makeSample(from, to);
					}
					virtual ev_bool isFine() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingObject::isFine();
					}
					virtual ev_bool isExcellent() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingObject::isExcellent();
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getFirstPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingObject::getFirstPoint(ok);
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getLastPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingObject::getLastPoint(ok);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getCenterPoint(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingObject::getCenterPoint(ok);
					}
					virtual void setCenterPoint(_in EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint_Callback(&point);
						}
						else
							return this->CEditingObject::setCenterPoint(point);
					}
					virtual ev_real64 getCentralAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingObject::getCentralAngle(ok);
					}
					virtual void setCentralAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingObject::setCentralAngle(angle);
					}
					virtual ev_real64 getStartAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingObject::getStartAngle(ok);
					}
					virtual void setStartAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingObject::setStartAngle(angle);
					}
					virtual ev_real64 getRotateAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingObject::getRotateAngle(ok);
					}
					virtual ev_real64 getRadius(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingObject::getRadius(ok);
					}
					virtual void setRadius(_in ev_real64 radius)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64_Callback(radius);
						}
						else
							return this->CEditingObject::setRadius(radius);
					}
				};
				REGISTER_FACTORY_CLASS(CEditingObjectProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_insertPoint_void_CPoint_ev_int32(void *pObjectXXXX, _in const void* pnt, _in ev_int32 index )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ptrNativeObject->insertPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt, index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_removePoint_void_CPoint(void *pObjectXXXX, _in const void* pnt )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ptrNativeObject->removePoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_movePoint_void_CPoint_CPoint(void *pObjectXXXX, _in const void* src, _in const void* dest )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ptrNativeObject->movePoint(*(EarthView::World::Spatial::Geometry::CPoint*)src, *(EarthView::World::Spatial::Geometry::CPoint*)dest);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_translate_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 dx, _in ev_real64 dy )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ptrNativeObject->translate(dx, dy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_rotate_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 ref_x, _in ev_real64 ref_y, _in ev_real64 angle )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ptrNativeObject->rotate(ref_x, ref_y, angle);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::newObject();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->newObject();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_newObject_CEditingObject_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::newObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getType_EditingObjectType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getGeometry();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometry();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getGeometry_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getGeometry();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getPointCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getPointCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getPointCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getPointCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 index, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getPoint(index, ok);
						const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->getPoint(index, ok);
						const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getPoint_CPoint_ev_int32_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_int32 index, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getPoint(index, ok);
					const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint(void *pObjectXXXX, _in const void* pnt )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::indexForPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->indexForPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_indexForPoint_ev_int32_CPoint_NoVirtual(void *pObjectXXXX, _in const void* pnt )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::indexForPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint(void *pObjectXXXX, _in const void* from, _in const void* to )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::makeSample(*(EarthView::World::Spatial::Geometry::CPoint*)from, *(EarthView::World::Spatial::Geometry::CPoint*)to);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_makeSample_IGeometry_CPoint_CPoint_NoVirtual(void *pObjectXXXX, _in const void* from, _in const void* to )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::makeSample(*(EarthView::World::Spatial::Geometry::CPoint*)from, *(EarthView::World::Spatial::Geometry::CPoint*)to);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::isFine();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isFine();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_isFine_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::isFine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::isExcellent();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExcellent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_isExcellent_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::isExcellent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool(void *pObjectXXXX, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getFirstPoint(ok);
						const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->getFirstPoint(ok);
						const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getFirstPoint_CPoint_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getFirstPoint(ok);
					const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool(void *pObjectXXXX, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getLastPoint(ok);
						const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->getLastPoint(ok);
						const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getLastPoint_CPoint_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getLastPoint(ok);
					const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getCenterPoint(ok);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getCenterPoint_CPoint_ev_bool_NoVirtual(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getCenterPoint(ok);
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint(void *pObjectXXXX, _in void* point )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::setCenterPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
					else
						ptrNativeObject->setCenterPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setCenterPoint_void_CPoint_NoVirtual(void *pObjectXXXX, _in void* point )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::setCenterPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getCentralAngle(ok);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getCentralAngle(ok);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getCentralAngle_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getCentralAngle(ok);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::setCentralAngle(angle);
					else
						ptrNativeObject->setCentralAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setCentralAngle_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::setCentralAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getStartAngle(ok);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getStartAngle(ok);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getStartAngle_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getStartAngle(ok);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::setStartAngle(angle);
					else
						ptrNativeObject->setStartAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setStartAngle_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::setStartAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getRotateAngle(ok);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getRotateAngle(ok);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getRotateAngle_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getRotateAngle(ok);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getRadius(ok);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getRadius(ok);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_getRadius_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _out ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::getRadius(ok);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64(void *pObjectXXXX, _in ev_real64 radius )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					if (dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::setRadius(radius);
					else
						ptrNativeObject->setRadius(radius);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64_Callback* pCallback )
				{
					CEditingObjectProxy* ptr = dynamic_cast<CEditingObjectProxy*>((EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_setRadius_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 radius )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingObject::setRadius(radius);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CEditingObject_makeObjectFromGeometry_CEditingObject_IGeometry(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry )
				{
					EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = EarthView::World::Spatial2D::Controls::CEditingObject::makeObjectFromGeometry(geometry);
					return objXXXX;
				}
				typedef EarthView::World::Spatial2D::Controls::CEditingObject*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool_Callback)(_in ev_int32 index, _in ev_bool& ok);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint_Callback)(_in const void* pnt);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint_Callback)(_in const void* from, _in const void* to);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint_Callback)(_in void* point);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64_Callback)(_in ev_real64 radius);
				class CEditingCurveProxy : public EarthView::World::Spatial2D::Controls::CEditingCurve
				{
				private:
					EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64_Callback;
				public:
					CEditingCurveProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingCurve(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject(EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString(EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType(EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry(EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32(EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint(EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint(EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint(EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::Controls::CEditingObject* newObject() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::CEditingObject* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject_Callback();
							return returnValue;
						}
						else
							return this->CEditingCurve::newObject();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditingCurve::getName();
					}
					virtual EarthView::World::Spatial2D::Controls::EditingObjectType getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::EditingObjectType returnValue = (EarthView::World::Spatial2D::Controls::EditingObjectType)m_EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType_Callback();
							return returnValue;
						}
						else
							return this->CEditingCurve::getType();
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CEditingCurve::getGeometry();
					}
					virtual ev_int32 getPointCount() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CEditingCurve::getPointCount();
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getPoint(_in ev_int32 index, _in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool_Callback(index, ok);
							return returnValue;
						}
						else
							return this->CEditingCurve::getPoint(index, ok);
					}
					virtual ev_int32 indexForPoint(_in const EarthView::World::Spatial::Geometry::CPoint& pnt) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint_Callback(&pnt);
							return returnValue;
						}
						else
							return this->CEditingCurve::indexForPoint(pnt);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* makeSample(_in const EarthView::World::Spatial::Geometry::CPoint& from, _in const EarthView::World::Spatial::Geometry::CPoint& to) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint_Callback(&from, &to);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEditingCurve::makeSample(from, to);
					}
					virtual ev_bool isFine() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingCurve::isFine();
					}
					virtual ev_bool isExcellent() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingCurve::isExcellent();
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getFirstPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCurve::getFirstPoint(ok);
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getLastPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCurve::getLastPoint(ok);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getCenterPoint(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCurve::getCenterPoint(ok);
					}
					virtual void setCenterPoint(_in EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint_Callback(&point);
						}
						else
							return this->CEditingCurve::setCenterPoint(point);
					}
					virtual ev_real64 getCentralAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCurve::getCentralAngle(ok);
					}
					virtual void setCentralAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingCurve::setCentralAngle(angle);
					}
					virtual ev_real64 getStartAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCurve::getStartAngle(ok);
					}
					virtual void setStartAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingCurve::setStartAngle(angle);
					}
					virtual ev_real64 getRotateAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCurve::getRotateAngle(ok);
					}
					virtual ev_real64 getRadius(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingCurve::getRadius(ok);
					}
					virtual void setRadius(_in ev_real64 radius)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64_Callback(radius);
						}
						else
							return this->CEditingCurve::setRadius(radius);
					}
				};
				REGISTER_FACTORY_CLASS(CEditingCurveProxy);
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_newObject_CEditingObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getType_EditingObjectType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getPointCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getPoint_CPoint_ev_int32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_indexForPoint_ev_int32_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_makeSample_IGeometry_CPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_isFine_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_isExcellent_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getFirstPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getLastPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getCenterPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setCenterPoint_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getCentralAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setCentralAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getStartAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setStartAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getRotateAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_getRadius_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64_Callback* pCallback )
				{
					CEditingCurveProxy* ptr = dynamic_cast<CEditingCurveProxy*>((EarthView::World::Spatial2D::Controls::CEditingCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingCurve_setRadius_void_ev_real64(pCallback);
					}
				}
			}
		}
	}
}
