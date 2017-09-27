#ifndef __LodListener_H__
#define __LodListener_H__
#include "graphic/graphic_config.h"
#include <mathengine/ev_math.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CMovableObject;
            class CCamera;
            class CEntity;
            class CSubEntity;
            //// Struct containing information about a lod change event for movable objects.
            class EV_GRAPHIC_DLL MovableObjectLodChangedEvent : public EarthView::World::Core::CBaseObject
            {

            ev_private:
                MovableObjectLodChangedEvent(_in EarthView::World::Core::CNameValuePairList *pList) {};
            public:
                MovableObjectLodChangedEvent() {}
                //// The movable object whose level of detail has changed.
                EarthView::World::Graphic::CMovableObject *movableObject;
                //// The camera with respect to which the level of detail has changed.
                EarthView::World::Graphic::CCamera *camera;
            };
            //// Struct containing information about a mesh lod change event for entities.
            class EV_GRAPHIC_DLL EntityMeshLodChangedEvent : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                EntityMeshLodChangedEvent(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                EntityMeshLodChangedEvent() {}
                //// The entity whose level of detail has changed.
                EarthView::World::Graphic::CEntity *entity;
                //// The camera with respect to which the level of detail has changed.
                EarthView::World::Graphic::CCamera *camera;
                //// Lod value as determined by lod strategy.
                Real lodValue;
                //// Previous level of detail index.
                ev_uint16 previousLodIndex;
                //// New level of detail index.
                ev_uint16 newLodIndex;
            };
            //// Struct containing information about a material lod change event for entities.
            class EV_GRAPHIC_DLL EntityMaterialLodChangedEvent : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                EntityMaterialLodChangedEvent(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                EntityMaterialLodChangedEvent() {}
                //// The sub-entity whose material's level of detail has changed.
                EarthView::World::Graphic::CSubEntity *subEntity;
                //// The camera with respect to which the level of detail has changed.
                EarthView::World::Graphic::CCamera *camera;
                //// Lod value as determined by lod strategy.
                Real lodValue;
                //// Previous level of detail index.
                ev_uint16 previousLodIndex;
                //// New level of detail index.
                ev_uint16 newLodIndex;
            };

            /** A interface class defining a listener which can be used to receive
                notifications of lod events.
                @remarks
                    A 'listener' is an interface designed to be called back when
                    particular events are called. This class defines the
                    interface relating to lod events. In order to receive
                    notifications of lod events, you should create a subclass of
                    CLodListener and override the methods for which you would like
                    to customise the resulting processing. You should then call
                    CSceneManager::addLodListener passing an instance of this class.
                    There is no limit to the number of lod listeners you can register,
                    allowing you to register multiple listeners for different purposes.

                    For some uses, it may be advantageous to also subclass
                    CRenderQueueListener as this interface makes available information
                    regarding render queue invocations.

                    It is important not to modify the scene graph during rendering, so,
                    for each event, there are two methods, a prequeue method and a
                    postqueue method.  The prequeue method is invoked during rendering,
                    and as such should not perform any changes, but if the event is
                    relevant, it may return true indicating the postqueue method should
                    also be called.  The postqueue method is invoked at an appropriate
                    time after rendering and scene changes may be safely made there.
            */
            class EV_GRAPHIC_DLL CLodListener : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CLodListener(EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                CLodListener() {}
                virtual ~CLodListener() {}
                /**
                Called before a movable object's lod has changed.
                @remarks
                    Do not change the EV_World state from this method,
                    instead return true and perform changes in
                    postqueueMovableObjectLodChanged.
                @return
                    True to indicate the event should be queued and
                    postqueueMovableObjectLodChanged called after
                    rendering is complete.
                */
                virtual ev_bool prequeueMovableObjectLodChanged(const EarthView::World::Graphic::MovableObjectLodChangedEvent &evt)
                {
                    // evt;
                    return false;
                }
                /**
                Called after a movable object's lod has changed.
                @remarks
                    May be called even if not requested from prequeueMovableObjectLodChanged
                    as only one event queue is maintained per SceneManger instance.
                */
                virtual void postqueueMovableObjectLodChanged(const EarthView::World::Graphic::MovableObjectLodChangedEvent &evt)
                {
                    // evt;
                }
                /**
                Called before an entity's mesh lod has changed.
                @remarks
                    Do not change the EV_World state from this method,
                    instead return true and perform changes in
                    postqueueEntityMeshLodChanged.

                    It is possible to change the event notification
                    and even alter the newLodIndex field (possibly to
                    prevent the lod from changing, or to skip an
                    index).
                @return
                    True to indicate the event should be queued and
                    postqueueEntityMeshLodChanged called after
                    rendering is complete.
                */
                virtual ev_bool prequeueEntityMeshLodChanged(EarthView::World::Graphic::EntityMeshLodChangedEvent &evt)
                {
                    // evt;
                    return false;
                }
                /**
                Called after an entity's mesh lod has changed.
                @remarks
                    May be called even if not requested from prequeueEntityMeshLodChanged
                    as only one event queue is maintained per SceneManger instance.
                */
                virtual void postqueueEntityMeshLodChanged(const EarthView::World::Graphic::EntityMeshLodChangedEvent &evt)
                {
                    // evt;
                }
                /**
                Called before an entity's material lod has changed.
                @remarks
                    Do not change the EV_World state from this method,
                    instead return true and perform changes in
                    postqueueMaterialLodChanged.

                    It is possible to change the event notification
                    and even alter the newLodIndex field (possibly to
                    prevent the lod from changing, or to skip an
                    index).
                @return
                    True to indicate the event should be queued and
                    postqueueMaterialLodChanged called after
                    rendering is complete.
                */
                virtual ev_bool prequeueEntityMaterialLodChanged(EarthView::World::Graphic::EntityMaterialLodChangedEvent &evt)
                {
                   // evt;
                    return false;
                }
                /**
                Called after an entity's material lod has changed.
                @remarks
                    May be called even if not requested from prequeueEntityMaterialLodChanged
                    as only one event queue is maintained per SceneManger instance.
                */
                virtual void postqueueEntityMaterialLodChanged(const EarthView::World::Graphic::EntityMaterialLodChangedEvent &evt)
                {
                    //evt;
                }
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

