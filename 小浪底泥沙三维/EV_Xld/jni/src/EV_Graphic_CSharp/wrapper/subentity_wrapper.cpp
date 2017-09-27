/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/subentity.h"
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
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point, _in void* segmentVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point, _in void* segmentVec, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_renderAsSelected_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32_Callback)(_in ev_int32 segmentIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool_Callback)();
			class CSubEntityProxy : public EarthView::World::Graphic::CSubEntity
			{
			private:
				EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CSubEntity_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_CSubEntity_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* m_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_Callback;
				EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback;
				EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback;
				EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_Callback* m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_Callback;
				EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_Callback;
				EarthView_World_Graphic_CSubEntity_renderAsSelected_void_Callback* m_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_Callback;
				EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32_Callback* m_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32_Callback;
				EarthView_World_Graphic_CSubEntity_clearSelection_void_Callback* m_EarthView_World_Graphic_CSubEntity_clearSelection_void_Callback;
				EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool_Callback* m_EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool_Callback;
			public:
				CSubEntityProxy(EarthView::World::Core::CNameValuePairList *pList) : CSubEntity(pList)
				{
					m_EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_clearSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool(EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_isVisible_ev_bool(EarthView_World_Graphic_CSubEntity_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3(EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3(EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector(EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_renderAsSelected_void(EarthView_World_Graphic_CSubEntity_renderAsSelected_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32(EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_clearSelection_void(EarthView_World_Graphic_CSubEntity_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool(EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool_Callback = pCallback;
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CSubEntity::setVisible(visible);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSubEntity::isVisible();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CSubEntity::setCustomAmbient(ambient);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_Callback(&ray, viewport, &point);
						return returnValue;
					}
					else
						return this->CSubEntity::selectBy(ray, viewport, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _out EarthView::World::Spatial::Math::CVector3& point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3)
				{
					if(m_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback(&ray, viewport, &point, index1, index2, index3);
						return returnValue;
					}
					else
						return this->CSubEntity::selectBy(ray, viewport, point, index1, index2, index3);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CSubEntity::selectComponentBy(ray, viewport, instanceIndex, segmentIndex, point);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3)
				{
					if(m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback(&ray, viewport, instanceIndex, segmentIndex, &point, index1, index2, index3);
						return returnValue;
					}
					else
						return this->CSubEntity::selectComponentBy(ray, viewport, instanceIndex, segmentIndex, point, index1, index2, index3);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point, _in EarthView::World::Core::IntVector& segmentVec)
				{
					if(m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_Callback(&ray, viewport, instanceIndex, segmentIndex, &point, &segmentVec);
						return returnValue;
					}
					else
						return this->CSubEntity::selectComponentBy(ray, viewport, instanceIndex, segmentIndex, point, segmentVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point, _in EarthView::World::Core::IntVector& segmentVec, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3)
				{
					if(m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_Callback(&ray, viewport, instanceIndex, segmentIndex, &point, &segmentVec, index1, index2, index3);
						return returnValue;
					}
					else
						return this->CSubEntity::selectComponentBy(ray, viewport, instanceIndex, segmentIndex, point, segmentVec, index1, index2, index3);
				}
				virtual void renderAsSelected()
				{
					if(m_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_Callback();
					}
					else
						return this->CSubEntity::renderAsSelected();
				}
				virtual void renderAsSelected(_in ev_int32 segmentIndex)
				{
					if(m_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32_Callback(segmentIndex);
					}
					else
						return this->CSubEntity::renderAsSelected(segmentIndex);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Graphic_CSubEntity_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_clearSelection_void_Callback();
					}
					else
						return this->CSubEntity::clearSelection();
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CSubEntity::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CSubEntity::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CSubEntity::getRenderQueueGroup();
				}
				virtual ev_bool isRenderQueueGroupSet() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSubEntity::isRenderQueueGroupSet();
				}
			};
			REGISTER_FACTORY_CLASS(CSubEntityProxy);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr_Callback)();
			typedef EarthView::World::Graphic::CTechnique*  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback)(_in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool override);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CRenderable::CRenderableListener*  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef EarthView::World::Graphic::CRenderable::CRenderSystemData*  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val);
			class CSubEntityRenderableProxy : public EarthView::World::Graphic::CSubEntity::CSubEntityRenderable
			{
			private:
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData_Callback;
				EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData_Callback* m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData_Callback;
			public:
				CSubEntityRenderableProxy(EarthView::World::Core::CNameValuePairList *pList) : CSubEntityRenderable(pList)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData_Callback = NULL;
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData(EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData_Callback = pCallback;
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CSubEntityRenderable::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CSubEntityRenderable::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getRenderQueueGroup();
				}
				virtual ev_uint16 getRenderQueuePriority() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getRenderQueuePriority();
				}
				virtual ev_bool isRenderQueueGroupSet() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::isRenderQueueGroupSet();
				}
				virtual ev_bool isRenderQueuePrioritySet() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::isRenderQueuePrioritySet();
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getMovableObject();
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getMaterial();
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTechnique* returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getTechnique();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CSubEntityRenderable::getRenderOperation(op);
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CSubEntityRenderable::getWorldTransforms(xform);
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getNumWorldTransforms();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getLights();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getCastsShadows();
				}
				virtual void _updateCustomGpuParameter(_in const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback(&constantEntry, params);
					}
					else
						return this->CSubEntityRenderable::_updateCustomGpuParameter(constantEntry, params);
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback(sm, rsys);
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::preRender(sm, rsys);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem_Callback(sm, rsys);
					}
					else
						return this->CSubEntityRenderable::postRender(sm, rsys);
				}
				virtual void setPolygonModeOverrideable(_in ev_bool override)
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool_Callback(override);
					}
					else
						return this->CSubEntityRenderable::setPolygonModeOverrideable(override);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getPolygonModeOverrideable();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CSubEntityRenderable::setCustomAmbient(ambient);
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getCustomAmbient();
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getCustomAmbientEnabled();
				}
				virtual void setCustomAmbientEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CSubEntityRenderable::setCustomAmbientEnabled(enabled);
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener_Callback(ref_listener);
					}
					else
						return this->CSubEntityRenderable::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener_Callback(listener);
					}
					else
						return this->CSubEntityRenderable::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getListenerCount();
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderableListener* returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getListener(index);
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderSystemData* returnValue = m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData_Callback();
						return returnValue;
					}
					else
						return this->CSubEntityRenderable::getRenderSystemData();
				}
				virtual void setRenderSystemData(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if(m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData_Callback(ref_val);
					}
					else
						return this->CSubEntityRenderable::setRenderSystemData(ref_val);
				}
			};
			REGISTER_FACTORY_CLASS(CSubEntityRenderableProxy);
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterialName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getMaterialName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setMaterialName_void_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* groupName )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->setMaterialName(name1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setMaterialName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->setMaterialName(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setMaterial_void_CMaterialPtr(void *pObjectXXXX, _in const void* material )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->setMaterial(*(EarthView::World::Graphic::CMaterialPtr*)material);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::setRenderQueueGroup(queueID);
				else
					ptrNativeObject->setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroup_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(void *pObjectXXXX, _in ev_uint8 queueID, _in ev_uint16 priority )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::setRenderQueueGroupAndPriority(queueID, priority);
				else
					ptrNativeObject->setRenderQueueGroupAndPriority(queueID, priority);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint8 queueID, _in ev_uint16 priority )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::setRenderQueueGroupAndPriority(queueID, priority);
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
				{
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getRenderQueueGroup();
					return objXXXX;
				}
				else
				{
					ev_uint8 objXXXX = ptrNativeObject->getRenderQueueGroup();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueueGroup_ev_uint8_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getRenderQueueGroup();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getRenderQueuePriority();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getRenderQueuePriority();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderQueuePriority_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getRenderQueuePriority();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::isRenderQueueGroupSet();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isRenderQueueGroupSet();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueueGroupSet_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::isRenderQueueGroupSet();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::isRenderQueuePrioritySet();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isRenderQueuePrioritySet();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_isRenderQueuePrioritySet_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::isRenderQueuePrioritySet();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSelectionRenderable*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSelectionRenderable_CSelectionRenderable(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CSelectionRenderable* objXXXX = ptrNativeObject->getSelectionRenderable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getMovableObject();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getMovableObject();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMovableObject_CMovableObject_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getMovableObject();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getMaterial();
					const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getMaterial();
					const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getMaterial_CMaterialPtr_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getTechnique();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getTechnique();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getTechnique_CTechnique_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderOperation_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getNumWorldTransforms();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNumWorldTransforms();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getNumWorldTransforms_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getNumWorldTransforms();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getLights();
					const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->getLights();
					const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getLights_LightList_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getCastsShadows();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getCastsShadows();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCastsShadows_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::getCastsShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__getSkelAnimVertexData_CVertexData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->_getSkelAnimVertexData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__getSoftwareVertexAnimVertexData_CVertexData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->_getSoftwareVertexAnimVertexData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__getHardwareVertexAnimVertexData_CVertexData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->_getHardwareVertexAnimVertexData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTempBlendedBufferInfo*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__getSkelAnimTempBufferInfo_CTempBlendedBufferInfo(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CTempBlendedBufferInfo* objXXXX = ptrNativeObject->_getSkelAnimTempBufferInfo();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTempBlendedBufferInfo*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__getVertexAnimTempBufferInfo_CTempBlendedBufferInfo(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CTempBlendedBufferInfo* objXXXX = ptrNativeObject->_getVertexAnimTempBufferInfo();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getVertexDataForBinding_CVertexData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->getVertexDataForBinding();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__markBuffersUnusedForAnimation_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->_markBuffersUnusedForAnimation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__markBuffersUsedForAnimation_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->_markBuffersUsedForAnimation();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__getBuffersMarkedForAnimation_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_getBuffersMarkedForAnimation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__restoreBuffersForUnusedAnimation_void_ev_bool(void *pObjectXXXX, _in ev_bool hardwareAnimation )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->_restoreBuffersForUnusedAnimation(hardwareAnimation);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(void *pObjectXXXX, _in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				if (dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::_updateCustomGpuParameter(*(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)constantEntry, params);
				else
					ptrNativeObject->_updateCustomGpuParameter(*(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)constantEntry, params);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(void *pObjectXXXX, _in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params )
			{
				const EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::CSubEntityRenderable::_updateCustomGpuParameter(*(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)constantEntry, params);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_CSubEntityRenderable__invalidateCameraCache_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* ptrNativeObject = (EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX;
				ptrNativeObject->_invalidateCameraCache();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_postRender_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbient_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getCustomAmbientEnabled_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setCustomAmbientEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_addListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_removeListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_existListener_ev_bool_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getListener_CRenderableListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_getRenderSystemData_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback )
			{
				CSubEntityRenderableProxy* ptr = dynamic_cast<CSubEntityRenderableProxy*>((EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_CSubEntityRenderable_setRenderSystemData_void_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::setVisible(visible);
				else
					ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_isVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::isVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_isVisible_ev_bool_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::isVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CSubEntity_getSubMesh_CSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->getSubMesh();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEntity*  _stdcall EarthView_World_Graphic_CSubEntity_getParent_CEntity(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				EarthView::World::Graphic::CEntity* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubEntity::CSubEntityRenderable*  _stdcall EarthView_World_Graphic_CSubEntity_getRenderble_CSubEntityRenderable(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				EarthView::World::Graphic::CSubEntity::CSubEntityRenderable* objXXXX = ptrNativeObject->getRenderble();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CSubEntity_getInstanceEntity_CInstancedEntity(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->getInstanceEntity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSubEntity_getNumWorldTransforms_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumWorldTransforms();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue(void *pObjectXXXX, _in const void* ambient )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::setCustomAmbient(*(EarthView::World::Graphic::CColourValue*)ambient);
				else
					ptrNativeObject->setCustomAmbient(*(EarthView::World::Graphic::CColourValue*)ambient);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setCustomAmbient_void_CColourValue_NoVirtual(void *pObjectXXXX, _in const void* ambient )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::setCustomAmbient(*(EarthView::World::Graphic::CColourValue*)ambient);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubEntity_getCustomAmbient_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getCustomAmbient();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setCustomProjection_void_ev_bool(void *pObjectXXXX, _in ev_bool customProjection )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->setCustomProjection(customProjection);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_getCustomProjection_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getCustomProjection();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CVector3*)point);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3 )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3 )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3 )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3 )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point, _in void* segmentVec )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Core::IntVector*)segmentVec);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Core::IntVector*)segmentVec);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point, _in void* segmentVec )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Core::IntVector*)segmentVec);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point, _in void* segmentVec, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3 )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Core::IntVector*)segmentVec, index1, index2, index3);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Core::IntVector*)segmentVec, index1, index2, index3);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectComponentBy_ev_bool_CRay_CViewport_ev_int32_ev_int32_CVector3_IntVector_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point, _in void* segmentVec, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3 )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Core::IntVector*)segmentVec, index1, index2, index3);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_selectBy_ev_bool_CRay_CViewport_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3, _in void* segmentIndex )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3, *(EarthView::World::Core::IntVector*)segmentIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setSelectionColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubEntity_getSelectionColour_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getSelectionColour();
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_renderAsSelected_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::renderAsSelected();
				else
					ptrNativeObject->renderAsSelected();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_renderAsSelected_void( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_renderAsSelected_void_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_renderAsSelected_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_renderAsSelected_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::renderAsSelected();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32(void *pObjectXXXX, _in ev_int32 segmentIndex )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::renderAsSelected(segmentIndex);
				else
					ptrNativeObject->renderAsSelected(segmentIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_renderAsSelected_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 segmentIndex )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::renderAsSelected(segmentIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_clearSelection_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::clearSelection();
				else
					ptrNativeObject->clearSelection();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_clearSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_clearSelection_void_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_clearSelection_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::clearSelection();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CSubEntity_getMaterialName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getMaterialName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setMaterialName_void_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* groupName )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->setMaterialName(name1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setMaterialName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->setMaterialName(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setMaterial_void_CMaterialPtr(void *pObjectXXXX, _in const void* material )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->setMaterial(*(EarthView::World::Graphic::CMaterialPtr*)material);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubEntity_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::setRenderQueueGroup(queueID);
				else
					ptrNativeObject->setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setRenderQueueGroup_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(void *pObjectXXXX, _in ev_uint8 queueID, _in ev_uint16 priority )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubEntity::setRenderQueueGroupAndPriority(queueID, priority);
				else
					ptrNativeObject->setRenderQueueGroupAndPriority(queueID, priority);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubEntity_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint8 queueID, _in ev_uint16 priority )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubEntity::setRenderQueueGroupAndPriority(queueID, priority);
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
				{
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::getRenderQueueGroup();
					return objXXXX;
				}
				else
				{
					ev_uint8 objXXXX = ptrNativeObject->getRenderQueueGroup();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CSubEntity_getRenderQueueGroup_ev_uint8_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::getRenderQueueGroup();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				if (dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::isRenderQueueGroupSet();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isRenderQueueGroupSet();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool_Callback* pCallback )
			{
				CSubEntityProxy* ptr = dynamic_cast<CSubEntityProxy*>((EarthView::World::Graphic::CSubEntity*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_isRenderQueueGroupSet_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSubEntity::isRenderQueueGroupSet();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_setSegmentVisible_ev_bool_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 segmentIndex, _in ev_bool visible )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setSegmentVisible(segmentIndex, visible);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_getSegmentVisible_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 segmentIndex )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSegmentVisible(segmentIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_setSegmentHighlight_ev_bool_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 segmentIndex, _in ev_bool highlight )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setSegmentHighlight(segmentIndex, highlight);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_getSegmentHighlight_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 segmentIndex )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSegmentHighlight(segmentIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_setSegmentTransparency_ev_bool_ev_uint32_ev_uint8(void *pObjectXXXX, _in ev_uint32 segmentIndex, _in ev_uint8 alpha )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setSegmentTransparency(segmentIndex, alpha);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CSubEntity_getSegmentTransparency_ev_uint8_ev_uint32(void *pObjectXXXX, _in ev_uint32 segmentIndex )
			{
				const EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->getSegmentTransparency(segmentIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_resetSegmentsHighlight_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->resetSegmentsHighlight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_resetSegmentsVisible_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->resetSegmentsVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubEntity_resetSegmentsTransparency_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubEntity* ptrNativeObject = (EarthView::World::Graphic::CSubEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->resetSegmentsTransparency();
				return objXXXX;
			}
		}
	}
}
