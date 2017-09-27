/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/editingpath.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef EarthView::World::Spatial2D::Controls::CEditingObject*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool_Callback)(_in ev_int32 index, _in ev_bool& ok);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint_Callback)(_in const void* pnt);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint_Callback)(_in const void* from, _in const void* to);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint_Callback)(_in void* point);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64_Callback)(_in ev_real64 radius);
				class CEditingPathProxy : public EarthView::World::Spatial2D::Controls::CEditingPath
				{
				private:
					EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64_Callback;
				public:
					CEditingPathProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingPath(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject(EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString(EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType(EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry(EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32(EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool(EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint(EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint(EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool(EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool(EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint(EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditingPath::getName();
					}
					virtual EarthView::World::Spatial2D::Controls::EditingObjectType getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::EditingObjectType returnValue = (EarthView::World::Spatial2D::Controls::EditingObjectType)m_EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType_Callback();
							return returnValue;
						}
						else
							return this->CEditingPath::getType();
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CEditingPath::getGeometry();
					}
					virtual ev_int32 getPointCount() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CEditingPath::getPointCount();
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getPoint(_in ev_int32 index, _in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool_Callback(index, ok);
							return returnValue;
						}
						else
							return this->CEditingPath::getPoint(index, ok);
					}
					virtual ev_int32 indexForPoint(_in const EarthView::World::Spatial::Geometry::CPoint& pnt) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint_Callback(&pnt);
							return returnValue;
						}
						else
							return this->CEditingPath::indexForPoint(pnt);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* makeSample(_in const EarthView::World::Spatial::Geometry::CPoint& from, _in const EarthView::World::Spatial::Geometry::CPoint& to) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint_Callback(&from, &to);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEditingPath::makeSample(from, to);
					}
					virtual ev_bool isFine() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingPath::isFine();
					}
					virtual ev_bool isExcellent() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingPath::isExcellent();
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getFirstPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingPath::getFirstPoint(ok);
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getLastPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingPath::getLastPoint(ok);
					}
					virtual EarthView::World::Spatial2D::Controls::CEditingObject* newObject() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::CEditingObject* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject_Callback();
							return returnValue;
						}
						else
							return this->CEditingPath::newObject();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getCenterPoint(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingPath::getCenterPoint(ok);
					}
					virtual void setCenterPoint(_in EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint_Callback(&point);
						}
						else
							return this->CEditingPath::setCenterPoint(point);
					}
					virtual ev_real64 getCentralAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingPath::getCentralAngle(ok);
					}
					virtual void setCentralAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingPath::setCentralAngle(angle);
					}
					virtual ev_real64 getStartAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingPath::getStartAngle(ok);
					}
					virtual void setStartAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingPath::setStartAngle(angle);
					}
					virtual ev_real64 getRotateAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingPath::getRotateAngle(ok);
					}
					virtual ev_real64 getRadius(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingPath::getRadius(ok);
					}
					virtual void setRadius(_in ev_real64 radius)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64_Callback(radius);
						}
						else
							return this->CEditingPath::setRadius(radius);
					}
				};
				REGISTER_FACTORY_CLASS(CEditingPathProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					if (dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					if (dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getType_EditingObjectType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					if (dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getGeometry();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometry();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getGeometry_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getGeometry();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					if (dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getPointCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getPointCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getPointCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getPointCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 index, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					if (dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getPoint(index, ok);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getPoint_CPoint_ev_int32_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_int32 index, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getPoint(index, ok);
					const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint(void *pObjectXXXX, _in const void* pnt )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					if (dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::indexForPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->indexForPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_indexForPoint_ev_int32_CPoint_NoVirtual(void *pObjectXXXX, _in const void* pnt )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::indexForPoint(*(EarthView::World::Spatial::Geometry::CPoint*)pnt);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint(void *pObjectXXXX, _in const void* from, _in const void* to )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					if (dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::makeSample(*(EarthView::World::Spatial::Geometry::CPoint*)from, *(EarthView::World::Spatial::Geometry::CPoint*)to);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_makeSample_IGeometry_CPoint_CPoint_NoVirtual(void *pObjectXXXX, _in const void* from, _in const void* to )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::makeSample(*(EarthView::World::Spatial::Geometry::CPoint*)from, *(EarthView::World::Spatial::Geometry::CPoint*)to);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					if (dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::isFine();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isFine();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_isFine_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::isFine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					if (dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::isExcellent();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExcellent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_isExcellent_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::isExcellent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool(void *pObjectXXXX, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					if (dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getFirstPoint(ok);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getFirstPoint_CPoint_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getFirstPoint(ok);
					const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool(void *pObjectXXXX, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					if (dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getLastPoint(ok);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getLastPoint_CPoint_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool& ok )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingPath::getLastPoint(ok);
					const EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getCurveCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getCurveCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingCurve*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getCurve_CEditingCurve_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingCurve* objXXXX = ptrNativeObject->getCurve(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingCurve*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getFirstCurve_CEditingCurve(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingCurve* objXXXX = ptrNativeObject->getFirstCurve();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingCurve*  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_getLastCurve_CEditingCurve(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingCurve* objXXXX = ptrNativeObject->getLastCurve();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_indexForCurve_ev_int32_CEditingCurve(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CEditingCurve* curve )
				{
					const EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->indexForCurve(curve);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_insertCurve_ev_bool_CEditingCurve_ev_int32(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CEditingCurve* curve, _in ev_int32 index )
				{
					EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->insertCurve(curve, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_removeCurve_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeCurve(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingPath_removeCurve_ev_bool_CEditingCurve(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CEditingCurve* curve )
				{
					EarthView::World::Spatial2D::Controls::CEditingPath* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeCurve(curve);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_newObject_CEditingObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getCenterPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setCenterPoint_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getCentralAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setCentralAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getStartAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setStartAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getRotateAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_getRadius_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64_Callback* pCallback )
				{
					CEditingPathProxy* ptr = dynamic_cast<CEditingPathProxy*>((EarthView::World::Spatial2D::Controls::CEditingPath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingPath_setRadius_void_ev_real64(pCallback);
					}
				}
				typedef EarthView::World::Spatial2D::Controls::CEditingObject*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool_Callback)(_in ev_int32 index, _in ev_bool& ok);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint_Callback)(_in const void* pnt);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint_Callback)(_in const void* from, _in const void* to);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint_Callback)(_in void* point);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64_Callback)(_in ev_real64 radius);
				class CEditingRingProxy : public EarthView::World::Spatial2D::Controls::CEditingRing
				{
				private:
					EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64_Callback;
				public:
					CEditingRingProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingRing(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject(EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString(EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType(EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry(EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32(EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool(EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint(EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint(EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool(EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool(EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint(EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditingRing::getName();
					}
					virtual EarthView::World::Spatial2D::Controls::EditingObjectType getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::EditingObjectType returnValue = (EarthView::World::Spatial2D::Controls::EditingObjectType)m_EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType_Callback();
							return returnValue;
						}
						else
							return this->CEditingRing::getType();
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CEditingRing::getGeometry();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* makeSample(_in const EarthView::World::Spatial::Geometry::CPoint& from, _in const EarthView::World::Spatial::Geometry::CPoint& to) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint_Callback(&from, &to);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEditingRing::makeSample(from, to);
					}
					virtual ev_bool isFine() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingRing::isFine();
					}
					virtual ev_bool isExcellent() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingRing::isExcellent();
					}
					virtual ev_int32 getPointCount() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CEditingRing::getPointCount();
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getPoint(_in ev_int32 index, _in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool_Callback(index, ok);
							return returnValue;
						}
						else
							return this->CEditingRing::getPoint(index, ok);
					}
					virtual ev_int32 indexForPoint(_in const EarthView::World::Spatial::Geometry::CPoint& pnt) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint_Callback(&pnt);
							return returnValue;
						}
						else
							return this->CEditingRing::indexForPoint(pnt);
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getFirstPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingRing::getFirstPoint(ok);
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getLastPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingRing::getLastPoint(ok);
					}
					virtual EarthView::World::Spatial2D::Controls::CEditingObject* newObject() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::CEditingObject* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject_Callback();
							return returnValue;
						}
						else
							return this->CEditingRing::newObject();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getCenterPoint(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingRing::getCenterPoint(ok);
					}
					virtual void setCenterPoint(_in EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint_Callback(&point);
						}
						else
							return this->CEditingRing::setCenterPoint(point);
					}
					virtual ev_real64 getCentralAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingRing::getCentralAngle(ok);
					}
					virtual void setCentralAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingRing::setCentralAngle(angle);
					}
					virtual ev_real64 getStartAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingRing::getStartAngle(ok);
					}
					virtual void setStartAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingRing::setStartAngle(angle);
					}
					virtual ev_real64 getRotateAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingRing::getRotateAngle(ok);
					}
					virtual ev_real64 getRadius(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingRing::getRadius(ok);
					}
					virtual void setRadius(_in ev_real64 radius)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64_Callback(radius);
						}
						else
							return this->CEditingRing::setRadius(radius);
					}
				};
				REGISTER_FACTORY_CLASS(CEditingRingProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					if (dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					if (dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getType_EditingObjectType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					if (dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::getGeometry();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometry();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_getGeometry_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::getGeometry();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint(void *pObjectXXXX, _in const void* from, _in const void* to )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					if (dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::makeSample(*(EarthView::World::Spatial::Geometry::CPoint*)from, *(EarthView::World::Spatial::Geometry::CPoint*)to);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_makeSample_IGeometry_CPoint_CPoint_NoVirtual(void *pObjectXXXX, _in const void* from, _in const void* to )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::makeSample(*(EarthView::World::Spatial::Geometry::CPoint*)from, *(EarthView::World::Spatial::Geometry::CPoint*)to);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					if (dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::isFine();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isFine();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_isFine_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::isFine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					if (dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::isExcellent();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExcellent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingRing_isExcellent_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingRing* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingRing::isExcellent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_newObject_CEditingObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getPointCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getPoint_CPoint_ev_int32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_indexForPoint_ev_int32_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getFirstPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getLastPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getCenterPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setCenterPoint_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getCentralAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setCentralAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getStartAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setStartAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getRotateAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_getRadius_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64_Callback* pCallback )
				{
					CEditingRingProxy* ptr = dynamic_cast<CEditingRingProxy*>((EarthView::World::Spatial2D::Controls::CEditingRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingRing_setRadius_void_ev_real64(pCallback);
					}
				}
			}
		}
	}
}
