/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/editinglongcircle.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef EarthView::World::Spatial2D::Controls::CEditingObject*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool_Callback)(_in ev_int32 index, _in ev_bool& ok);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint_Callback)(_in const void* pnt);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint_Callback)(_in const void* from, _in const void* to);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool_Callback)(_in ev_bool& ok);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint_Callback)(_in void* point);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64_Callback)(_in ev_real64 angle);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool_Callback)(_out ev_bool& ok);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64_Callback)(_in ev_real64 radius);
				class CEditingLongCircleProxy : public EarthView::World::Spatial2D::Controls::CEditingLongCircle
				{
				private:
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64_Callback;
				public:
					CEditingLongCircleProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingLongCircle(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject(EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint(EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint(EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool(EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool(EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint(EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool(EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64(EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::Controls::CEditingObject* newObject() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::CEditingObject* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject_Callback();
							return returnValue;
						}
						else
							return this->CEditingLongCircle::newObject();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getName();
					}
					virtual EarthView::World::Spatial2D::Controls::EditingObjectType getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Controls::EditingObjectType returnValue = (EarthView::World::Spatial2D::Controls::EditingObjectType)m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType_Callback();
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getType();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* makeSample(_in const EarthView::World::Spatial::Geometry::CPoint& from, _in const EarthView::World::Spatial::Geometry::CPoint& to) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint_Callback(&from, &to);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEditingLongCircle::makeSample(from, to);
					}
					virtual ev_bool isFine() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingLongCircle::isFine();
					}
					virtual ev_bool isExcellent() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditingLongCircle::isExcellent();
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getGeometry();
					}
					virtual ev_int32 getPointCount() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getPointCount();
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getPoint(_in ev_int32 index, _in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool_Callback(index, ok);
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getPoint(index, ok);
					}
					virtual ev_int32 indexForPoint(_in const EarthView::World::Spatial::Geometry::CPoint& pnt) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint_Callback(&pnt);
							return returnValue;
						}
						else
							return this->CEditingLongCircle::indexForPoint(pnt);
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getFirstPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getFirstPoint(ok);
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getLastPoint(_in ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CPoint& returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getLastPoint(ok);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getCenterPoint(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getCenterPoint(ok);
					}
					virtual void setCenterPoint(_in EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint_Callback(&point);
						}
						else
							return this->CEditingLongCircle::setCenterPoint(point);
					}
					virtual ev_real64 getCentralAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getCentralAngle(ok);
					}
					virtual void setCentralAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingLongCircle::setCentralAngle(angle);
					}
					virtual ev_real64 getStartAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getStartAngle(ok);
					}
					virtual void setStartAngle(_in ev_real64 angle)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64_Callback(angle);
						}
						else
							return this->CEditingLongCircle::setStartAngle(angle);
					}
					virtual ev_real64 getRotateAngle(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getRotateAngle(ok);
					}
					virtual ev_real64 getRadius(_out ev_bool& ok) const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool_Callback(ok);
							return returnValue;
						}
						else
							return this->CEditingLongCircle::getRadius(ok);
					}
					virtual void setRadius(_in ev_real64 radius)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64_Callback(radius);
						}
						else
							return this->CEditingLongCircle::setRadius(radius);
					}
				};
				REGISTER_FACTORY_CLASS(CEditingLongCircleProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					if (dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::newObject();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->newObject();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CEditingObject*  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_newObject_CEditingObject_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::newObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					if (dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					if (dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_getType_EditingObjectType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::EditingObjectType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint(void *pObjectXXXX, _in const void* from, _in const void* to )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					if (dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::makeSample(*(EarthView::World::Spatial::Geometry::CPoint*)from, *(EarthView::World::Spatial::Geometry::CPoint*)to);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_makeSample_IGeometry_CPoint_CPoint_NoVirtual(void *pObjectXXXX, _in const void* from, _in const void* to )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::makeSample(*(EarthView::World::Spatial::Geometry::CPoint*)from, *(EarthView::World::Spatial::Geometry::CPoint*)to);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					if (dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::isFine();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isFine();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_isFine_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::isFine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					if (dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::isExcellent();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExcellent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditingLongCircle_isExcellent_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CEditingLongCircle* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditingLongCircle::isExcellent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPointCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getPoint_CPoint_ev_int32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_indexForPoint_ev_int32_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getFirstPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getLastPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCenterPoint_CPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCenterPoint_void_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getCentralAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setCentralAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getStartAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setStartAngle_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRotateAngle_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_getRadius_ev_real64_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64_Callback* pCallback )
				{
					CEditingLongCircleProxy* ptr = dynamic_cast<CEditingLongCircleProxy*>((EarthView::World::Spatial2D::Controls::CEditingLongCircle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditingLongCircle_setRadius_void_ev_real64(pCallback);
					}
				}
			}
		}
	}
}
