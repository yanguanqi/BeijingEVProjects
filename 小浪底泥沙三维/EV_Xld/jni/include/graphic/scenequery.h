#ifndef __SceneQuery_H__
#define __SceneQuery_H__

#include <mathengine/axisalignedbox.h>
#include <mathengine/sphere.h>
#include <mathengine/ray.h>
#include <mathengine/planeboundedvolume.h>
#include <mathengine/vector2.h>
#include <mathengine/vector3.h>
#include <mathengine/plane.h>
#include <mathengine/ev_math.h>

#include "graphic/graphic_config.h"
#include "graphic/common.h"
#include "graphic/colourvalue.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CPlane;
				class Planes;
				class CPlaneBoundedVolume;
				class CAxisAlignedBox;
				class CRay;
				class CSphere;
				class CMath;
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
            class CSceneQueryListener;
            class CRenderOperation;
            class CSceneManager;
            class CMovableObject;
            /// <summary>
            /// 场景查询类
            /// 从场景中得到查询的反馈信息
            /// </summary>
            class EV_GRAPHIC_DLL CSceneQuery : public EarthView::World::Core::CAllocatedObject
            {
            public:
                enum WorldFragmentType
                {
                    WFT_NONE,
                    WFT_PLANE_BOUNDED_REGION,
                    WFT_SINGLE_INTERSECTION,
                    WFT_CUSTOM_GEOMETRY,
                    WFT_RENDER_OPERATION
                };
                /** Represents part of the world geometry that is a result of a EarthView::World::Graphic::CSceneQuery.
                @remarks
                Since world geometry is normally vast and sprawling, we need a way of
                retrieving parts of it based on a query. That is what this struct is for;
                note there are potentially as many data structures for world geometry as there
                are SceneManagers, however this structure includes a few common abstractions as
                well as a more general format.
                @par
                The type of world fragment that is returned from a query depends on the
                You can see what fragment types are supported on the query in question by
                calling CSceneQuery::getSupportedWorldFragmentTypes().
                */
                class EV_GRAPHIC_DLL WorldFragment : public EarthView::World::Core::CBaseObject
                {
                public:
                    //// The type of this world fragment
                    EarthView::World::Graphic::CSceneQuery::WorldFragmentType fragmentType;
                    //// Single intersection point, only applicable for WFT_SINGLE_INTERSECTION
                    EarthView::World::Spatial::Math::CVector3 singleIntersection;
                    //// EarthView::World::Spatial::Math::Planes bounding a convex region, only applicable for WFT_PLANE_BOUNDED_REGION
                    EarthView::World::Spatial::Math::Planes *planes;
                    //// Custom geometry block, only applicable for WFT_CUSTOM_GEOMETRY
                    void *geometry;
                    //// General render operation structure, fallback if nothing else is available
                    EarthView::World::Graphic::CRenderOperation *renderOp;
                    WorldFragment();
                ev_private:
                    WorldFragment(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                class EV_GRAPHIC_DLL WorldFragmentTypeSet : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    WorldFragmentTypeSet(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    WorldFragmentTypeSet();
                    ev_bool push(const EarthView::World::Graphic::CSceneQuery::WorldFragmentType &key);
                    ev_bool exist(const EarthView::World::Graphic::CSceneQuery::WorldFragmentType &key);
                    void erase(const EarthView::World::Graphic::CSceneQuery::WorldFragmentType &key);
                    ev_size_t size() const;
                    void clear();
                    ev_bool empty() const;
                ev_private:
                    typedef set	<EarthView::World::Graphic::CSceneQuery::WorldFragmentType> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    /*typedef InternalList::mapped_type mapped_type;*/
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_SET(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    _Pairib insert(const value_type &val);
                    iterator find(const EarthView::World::Graphic::CSceneQuery::WorldFragmentType &key);
                    const_iterator find(const EarthView::World::Graphic::CSceneQuery::WorldFragmentType &key) const;
                private:
                    InternalList mList;
                };
            protected:
                EarthView::World::Graphic::CSceneManager *mParentSceneMgr;
                ev_uint32 mQueryMask;
                ev_uint32 mQueryTypeMask;
                EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet mSupportedWorldFragments;
                EarthView::World::Graphic::CSceneQuery::WorldFragmentType mWorldFragmentType;

            public:
                /** Standard constructor, should be called by CSceneManager. */
                CSceneQuery(EarthView::World::Graphic::CSceneManager *ref_mgr);
            ev_private:
                CSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CSceneQuery();
                /** Sets the mask for results of this query.
                @remarks
                This method allows you to set a 'mask' to limit the results of this
                query to certain types of result. The actual meaning of this value is
                up to the application; basically EarthView::World::Graphic::CMovableObject instances will only be returned
                from this query if a bitwise AND operation between this mask value and the
                CMovableObject::getQueryFlags value is non-zero. The application will
                have to decide what each of the bits means.
                */
                virtual void setQueryMask(ev_uint32 mask);
                /** Returns the current mask for this query. */
                virtual ev_uint32 getQueryMask() const;
                /** Sets the type mask for results of this query.
                @remarks
                This method allows you to set a 'type mask' to limit the results of this
                query to certain types of objects. Whilst setQueryMask deals with flags
                set per instance of object, this method deals with setting a mask on
                flags set per type of object. Both may exclude an object from query
                results.
                */
                virtual void setQueryTypeMask(ev_uint32 mask);
                /** Returns the current mask for this query. */
                virtual ev_uint32 getQueryTypeMask() const;
                /** Tells the query what kind of world geometry to return from queries;
                often the full renderable geometry is not what is needed.
                @remarks
                The application receiving the world geometry is expected to know
                what to do with it; inevitably this means that the application must
                have knowledge of at least some of the structures
                used by the custom EarthView::World::Graphic::CSceneManager.
                @par
                The default setting is WFT_NONE.
                */
                virtual void setWorldFragmentType(WorldFragmentType wft);
                /** Gets the current world fragment types to be returned from the query. */
                virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const;
                /** Returns the types of world fragments this query supports. */
                /* virtual const set<EarthView::World::Graphic::CSceneQuery::WorldFragmentType>* getSupportedWorldFragmentTypes() const;*/
                virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *getSupportedWorldFragmentTypes() const;

            };
            /** This optional class allows you to receive per-result callbacks from
            EarthView::World::Graphic::CSceneQuery executions instead of a single set of consolidated results.
            @remarks
            You should override this with your own subclass. Note that certain query
            classes may refine this listener interface.
            */
            class EV_GRAPHIC_DLL CSceneQueryListener : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CSceneQueryListener(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CSceneQueryListener();
                virtual ~CSceneQueryListener();
                /** Called when a EarthView::World::Graphic::CMovableObject is returned by a query.
                @remarks
                The implementor should return 'true' to continue returning objects,
                or 'false' to abandon any further results from this query.
                */
                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *object);

                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *object,EarthView::World::Core::IntVector& indexVec);
                /** Called when a WorldFragment is returned by a query.
                @remarks
                The implementor should return 'true' to continue returning objects,
                or 'false' to abandon any further results from this query.
                */
                virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment);
            };
            /*typedef list<EarthView::World::Graphic::CMovableObject*> EarthView::World::Graphic::SceneQueryResultMovableList;*/
            class EV_GRAPHIC_DLL SceneQueryResultMovableList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef list<EarthView::World::Graphic::CMovableObject *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Graphic::CMovableObject *const &ref_t);
            ev_private:
                SceneQueryResultMovableList(_in EarthView::World::Core::CNameValuePairList *pList);
            private:
                InternalList mList;
            public:
                SceneQueryResultMovableList();
                void push_back(EarthView::World::Graphic::CMovableObject *const &ref_t);
                void push_front(EarthView::World::Graphic::CMovableObject *const &ref_t);
                void pop_back();

                void pop_front();

                EarthView::World::Graphic::CMovableObject*& front();
                EarthView::World::Graphic::CMovableObject*& back();
                EarthView::World::Graphic::CMovableObject*& at(ev_uint32 pos);
                void insert(ev_uint32 pos, EarthView::World::Graphic::CMovableObject *const &ref_t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void clear();
            };
            /* typedef list<EarthView::World::Graphic::CSceneQuery::WorldFragment*> EarthView::World::Graphic::SceneQueryResultWorldFragmentList;*/
            class EV_GRAPHIC_DLL SceneQueryResultWorldFragmentList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef list<EarthView::World::Graphic::CSceneQuery::WorldFragment *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Graphic::CSceneQuery::WorldFragment *const &t);
            private:
                InternalList mList;
            ev_private:
                SceneQueryResultWorldFragmentList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                SceneQueryResultWorldFragmentList();
                void push_back(EarthView::World::Graphic::CSceneQuery::WorldFragment *const &ref_t);
                void push_front(EarthView::World::Graphic::CSceneQuery::WorldFragment *const &ref_t);
                void pop_back();

                void pop_front();

                EarthView::World::Graphic::CSceneQuery::WorldFragment*& front();
                EarthView::World::Graphic::CSceneQuery::WorldFragment*& back();
                EarthView::World::Graphic::CSceneQuery::WorldFragment*& at(ev_uint32 pos);
                void insert(ev_uint32 pos, EarthView::World::Graphic::CSceneQuery::WorldFragment *const &ref_t);
                void remove(ev_size_t pos);
                ev_bool empty() const;

                ev_size_t size() const;
                void resize(ev_size_t newSize);

                void clear();
            };
            
            class EV_GRAPHIC_DLL SceneQueryResultEntry : public EarthView::World::Core::CBaseObject
            {
            public:
                SceneQueryResultEntry(EarthView::World::Graphic::CMovableObject* ref_mo,EarthView::World::Core::IntVector indexVec)
                    : movable(ref_mo),objIndexVec(indexVec)
                {
                    
                }

                SceneQueryResultEntry()
                    : movable(NULL)
                {

                }
            ev_private:
                SceneQueryResultEntry(EarthView::World::Core::CNameValuePairList* pList)
                    : movable(pList ? (EarthView::World::Graphic::CMovableObject*)pList->GetAt("ref_mo") : NULL)
                    , objIndexVec(pList ? *(EarthView::World::Core::IntVector*)pList->GetAt("indexVec") : EarthView::World::Core::IntVector())
                {

                }

            
            public:
                EarthView::World::Graphic::CMovableObject* movable;
                EarthView::World::Core::IntVector objIndexVec;

            };
            class EV_GRAPHIC_DLL SceneQueryResultMovableListEx : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef list<EarthView::World::Graphic::SceneQueryResultEntry> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Graphic::SceneQueryResultEntry const &t);
            ev_private:
                SceneQueryResultMovableListEx(_in EarthView::World::Core::CNameValuePairList *pList);
            private:
                InternalList mList;
            public:
                SceneQueryResultMovableListEx();
                void push_back(EarthView::World::Graphic::SceneQueryResultEntry const &t);
                void push_front(EarthView::World::Graphic::SceneQueryResultEntry const   &t);
                void pop_back();

                void pop_front();

                EarthView::World::Graphic::SceneQueryResultEntry& front();
                EarthView::World::Graphic::SceneQueryResultEntry& back();
                EarthView::World::Graphic::SceneQueryResultEntry& at(ev_uint32 pos);
                void insert(ev_uint32 pos, EarthView::World::Graphic::SceneQueryResultEntry const &t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void clear();
            };
            
            /** Holds the results of a scene query. */
            class EV_GRAPHIC_DLL SceneQueryResult : public EarthView::World::Core::CAllocatedObject
            {
            public:
                //// List of movable objects in the query (entities, particle systems etc)
                EarthView::World::Graphic::SceneQueryResultMovableList movables;
                EarthView::World::Graphic::SceneQueryResultMovableListEx movablesEx;
                //// List of world fragments
                EarthView::World::Graphic::SceneQueryResultWorldFragmentList worldFragments;
                SceneQueryResult();
            ev_private:
                SceneQueryResult(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            /** Abstract class defining a query which returns single results from a region.
            @remarks
            This class is simply a generalisation of the subtypes of query that return
            a set of individual results in a region. See the CSceneQuery class for abstract
            information, and subclasses for the detail of each query type.
            */
            class EV_GRAPHIC_DLL CRegionSceneQuery : public EarthView::World::Graphic::CSceneQuery
            {
                friend class CRegionSceneQueryListener;
            public:
                class EV_GRAPHIC_DLL CRegionSceneQueryListener : public EarthView::World::Graphic::CSceneQueryListener
                {
                public:
                    CRegionSceneQueryListener(CRegionSceneQuery *ref_parent);
                    /** Self-callback in order to deal with execute which returns collection. */
                    ev_bool queryResult(EarthView::World::Graphic::CMovableObject *first);

                    ev_bool queryResult(EarthView::World::Graphic::CMovableObject *first,EarthView::World::Core::IntVector& indexVec);

                    /** Self-callback in order to deal with execute which returns collection. */
                    ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment);
                ev_private:
                    CRegionSceneQueryListener(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    EarthView::World::Graphic::CRegionSceneQuery *mParent;
                };
                const EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener *getListenerPtr();
                ///const EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener& getListener();

            private:
                EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener *mpListener;
            protected:
                EarthView::World::Graphic::SceneQueryResult *mLastResult;
            public:
                /** Standard constructor, should be called by CSceneManager. */
                CRegionSceneQuery(EarthView::World::Graphic::CSceneManager *ref_mgr);
            ev_private:
                CRegionSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CRegionSceneQuery();
                /** Executes the query, returning the results back in one list.
                @remarks
                This method executes the scene query as configured, gathers the results
                into one structure and returns a reference to that structure. These
                results will also persist in this query object until the next query is
                executed, or clearResults() is called. An more lightweight version of
                this method that returns results through a listener is also available.
                */
                virtual EarthView::World::Graphic::SceneQueryResult &execute();
                /** Executes the query and returns each match through a listener interface.
                @remarks
                Note that this method does not store the results of the query internally
                so does not update the 'last result' value. This means that this version of
                execute is more lightweight and therefore more efficient than the version
                which returns the results as a collection.
                */
                virtual void execute(EarthView::World::Graphic::CSceneQueryListener *listener);
                
                virtual EarthView::World::Graphic::SceneQueryResult &getLastResults() const;
                /** Clears the results of the last query execution.
                @remarks
                You only need to call this if you specifically want to free up the memory
                used by this object to hold the last query results. This object clears the
                results itself when executing and when destroying itself.
                */
                virtual void clearResults();

                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *first);
                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *first,EarthView::World::Core::IntVector& indexVec);                
                virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment);

            };
            /** Specialises the CSceneQuery class for querying within an axis aligned box. */
            class EV_GRAPHIC_DLL CAxisAlignedBoxSceneQuery : public EarthView::World::Graphic::CRegionSceneQuery
            {
            protected:
                EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
            public:
                CAxisAlignedBoxSceneQuery(EarthView::World::Graphic::CSceneManager *ref_mgr);
            ev_private:
                CAxisAlignedBoxSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CAxisAlignedBoxSceneQuery();
                /** Sets the size of the box you wish to query. */
                void setBox(const EarthView::World::Spatial::Math::CAxisAlignedBox &box);
                /** Gets the box which is being used for this query. */
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getBox() const;
            };
            /** Specialises the CSceneQuery class for querying within a sphere. */
            class EV_GRAPHIC_DLL CSphereSceneQuery : public EarthView::World::Graphic::CRegionSceneQuery
            {
            protected:
                EarthView::World::Spatial::Math::CSphere mSphere;
            public:
                CSphereSceneQuery(EarthView::World::Graphic::CSceneManager *ref_mgr);
            ev_private:
                CSphereSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CSphereSceneQuery();
                /** Sets the sphere which is to be used for this query. */
                void setSphere(const EarthView::World::Spatial::Math::CSphere &sphere);
                /** Gets the sphere which is being used for this query. */
                const EarthView::World::Spatial::Math::CSphere &getSphere() const;
            };
            /** Specialises the CSceneQuery class for querying within a plane-bounded volume.
            */
            class EV_GRAPHIC_DLL CPlaneBoundedVolumeListSceneQuery : public EarthView::World::Graphic::CRegionSceneQuery
            {
            protected:
                EarthView::World::Spatial::Math::PlaneBoundedVolumeList mVolumes;
            public:
                CPlaneBoundedVolumeListSceneQuery(EarthView::World::Graphic::CSceneManager *ref_mgr);
            ev_private:
                CPlaneBoundedVolumeListSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CPlaneBoundedVolumeListSceneQuery();
                /** Sets the volume which is to be used for this query. */
                void setVolumes(const EarthView::World::Spatial::Math::PlaneBoundedVolumeList &volumes);
                /** Gets the volume which is being used for this query. */
                const EarthView::World::Spatial::Math::PlaneBoundedVolumeList &getVolumes() const;
            };
            /** Alternative listener class for dealing with CRaySceneQuery.
            @remarks
            Because the EarthView::World::Graphic::CRaySceneQuery returns results in an extra bit of information, namely
            distance, the listener interface must be customised from the standard EarthView::World::Graphic::CSceneQueryListener.
            */
            class EV_GRAPHIC_DLL CRaySceneQueryListener : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CRaySceneQueryListener(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CRaySceneQueryListener();
                virtual ~CRaySceneQueryListener();
                /** Called when a movable objects intersects the ray.
                @remarks
                As with EarthView::World::Graphic::CSceneQueryListener, the implementor of this method should return 'true'
                if further results are required, or 'false' to abandon any further results from
                the current query.
                */
                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *obj, Real distance);

                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *obj, Real distance,ev_int32 objIndex,ev_int32 submeshIndex,ev_int32 instanceIndex,ev_int32 segmentIndex,EarthView::World::Spatial::Math::CVector3& point,EarthView::World::Spatial::Math::CVector2& pixelpoint);
                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *obj, Real distance,ev_real32 e,ev_uint8 c,ev_uint16 i,ev_uint16 r,CColourValue& cv,EarthView::World::Spatial::Math::CVector3& point,EarthView::World::Spatial::Math::CVector2& pixelpoint);
                /** Called when a world fragment is intersected by the ray.
                @remarks
                As with EarthView::World::Graphic::CSceneQueryListener, the implementor of this method should return 'true'
                if further results are required, or 'false' to abandon any further results from
                the current query.
                */
                virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment, Real distance);
            };
            /** This struct allows a single comparison of result data no matter what the type */
            class EV_GRAPHIC_DLL RaySceneQueryResultEntry : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                RaySceneQueryResultEntry(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                RaySceneQueryResultEntry();
                //// Distance along the ray
                Real distance;
                //// The movable, or NULL if this is not a movable result
                EarthView::World::Graphic::CMovableObject *movable;
                ev_int32 objectIndex;	//对象序号,当选中对象是BillboardSet或者InstanceBatch时有效(其它对象该值为0)
                ev_int32 submeshIndex;	//SubMesh序号,当选中对象是Entity、ManualObject或者InstanceBatch时有效(其它对象该值为-1)            
				ev_int32 instanceIndex;	//Instance序号,当选中对象是Entity(内部Instance)或者InstanceBatch时有效(其它对象该值为-1)
				ev_int32 segmentIndex;	//SubMesh分段序号,当选中对象是Entity时有效(其它对象该值为-1)  

				ev_real32 elevation;
				ev_uint8 classification;
				ev_uint16 intensity;
				ev_uint16 returnNumber;
				CColourValue color;

                EarthView::World::Spatial::Math::CVector3 pointOfIntersection;//交点的三维坐标
				EarthView::World::Spatial::Math::CVector2 pixelPointOfIntersection;//交点的屏幕坐标

                //// The world fragment, or NULL if this is not a fragment result
                EarthView::World::Graphic::CSceneQuery::WorldFragment *worldFragment;
                //// Comparison operator for sorting
                ev_bool operator < (const EarthView::World::Graphic::RaySceneQueryResultEntry &rhs) const;
                ev_bool operator >(const EarthView::World::Graphic::RaySceneQueryResultEntry &rhs) const;
            };
            /* typedef vector<EarthView::World::Graphic::RaySceneQueryResultEntry> RaySceneQueryResult;*/
            class EV_GRAPHIC_DLL RaySceneQueryResult : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::RaySceneQueryResultEntry> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Graphic::RaySceneQueryResultEntry const &t);
            private:
                InternalList mList;
            ev_private:
                RaySceneQueryResult(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                RaySceneQueryResult();
                void push_back(EarthView::World::Graphic::RaySceneQueryResultEntry  const &t);
                void pop_back();

                EarthView::World::Graphic::RaySceneQueryResultEntry &front();
                EarthView::World::Graphic::RaySceneQueryResultEntry &back();
                void insert(ev_uint32 pos, EarthView::World::Graphic::RaySceneQueryResultEntry const &t);
                void remove(ev_size_t pos);
                void swap(EarthView::World::Graphic::RaySceneQueryResult &res);
                ev_bool empty() const;
                EarthView::World::Graphic::RaySceneQueryResultEntry &operator[](ev_size_t n);
                EarthView::World::Graphic::RaySceneQueryResultEntry const &operator[](ev_size_t n) const;
                EarthView::World::Graphic::RaySceneQueryResultEntry &at(ev_size_t n);
                EarthView::World::Graphic::RaySceneQueryResultEntry const &at(ev_size_t n) const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void reserve(ev_size_t count);
                void clear();
            };

            /** Specialises the CSceneQuery class for querying along a ray. */
            class EV_GRAPHIC_DLL CRaySceneQuery : public EarthView::World::Graphic::CSceneQuery
            {
                friend class CRaySceneQueryListener;
            public:
                class EV_GRAPHIC_DLL CRaySceneQueryInternalListener : public EarthView::World::Graphic::CRaySceneQueryListener
                {
                public:
                    CRaySceneQueryInternalListener(CRaySceneQuery *ref_parent);
                    /** Self-callback in order to deal with execute which returns collection. */
                    ev_bool queryResult(EarthView::World::Graphic::CMovableObject *obj, Real distance);
                    /** Self-callback in order to deal with execute which returns collection. */
                    ev_bool queryResult(EarthView::World::Graphic::CMovableObject *obj, Real distance,ev_int32 objIndex,ev_int32 submeshIndex,ev_int32 instanceIndex,ev_int32 segmentIndex,EarthView::World::Spatial::Math::CVector3& point,EarthView::World::Spatial::Math::CVector2& pixelpoint);
					/** Self-callback in order to deal with execute which returns collection. */
					ev_bool queryResult(EarthView::World::Graphic::CMovableObject *obj, Real distance,ev_real32 e,ev_uint8 c,ev_uint16 i,ev_uint16 r,CColourValue& cv,EarthView::World::Spatial::Math::CVector3& point,EarthView::World::Spatial::Math::CVector2& pixelpoint);
					/** Self-callback in order to deal with execute which returns collection. */
                    ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment, Real distance);					
                ev_private:
                    CRaySceneQueryInternalListener(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    EarthView::World::Graphic::CRaySceneQuery *mParent;
                };
                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *obj, Real distance);
                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *obj, Real distance,ev_int32 objIndex,ev_int32 submeshIndex,ev_int32 instanceIndex,ev_int32 segmentIndex,EarthView::World::Spatial::Math::CVector3& point,EarthView::World::Spatial::Math::CVector2& pixelpoint);
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *obj, Real distance,ev_real32 e,ev_uint8 c,ev_uint16 i,ev_uint16 r,CColourValue& cv,EarthView::World::Spatial::Math::CVector3& point,EarthView::World::Spatial::Math::CVector2& pixelpoint);
                virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment, Real distance);
                virtual const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *getListenerPtr();
                ///virtual const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener& getListener();
            private:
                EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *mpListener;
            protected:
                EarthView::World::Spatial::Math::CRay mRay;
                ev_bool mSortByDistance;
                ev_uint16 mMaxResults;
                EarthView::World::Graphic::RaySceneQueryResult mResult;
            public:
                CRaySceneQuery(EarthView::World::Graphic::CSceneManager *ref_mgr);
            ev_private:
                CRaySceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CRaySceneQuery();
                /** Sets the ray which is to be used for this query. */
                virtual void setRay(const EarthView::World::Spatial::Math::CRay &ray);
                /** Gets the ray which is to be used for this query. */
                virtual const EarthView::World::Spatial::Math::CRay &getRay() const;
                /** Sets whether the results of this query will be sorted by distance along the ray.
                @remarks
                Often you want to know what was the first object a ray intersected with, and this
                method allows you to ask the query to sort the results so that the nearest results
                are listed first.
                @par
                Note that because the query returns results based on bounding volumes, the ray may not
                actually intersect the detail of the objects returned from the query, just their
                bounding volumes. For this reason the caller is advised to use more detailed
                intersection tests on the results if a more accurate result is required; EV_World uses
                bounds checking in order to give the most speedy results since not all applications
                need extreme accuracy.
                @param sort If true, results will be sorted.
                @param maxresults If sorting is enabled, this value can be used to constrain the maximum number
                of results that are returned. Please note (as above) that the use of bounding volumes mean that
                accuracy is not guaranteed; if in doubt, allow more results and filter them in more detail.
                0 means unlimited results.
                */
                virtual void setSortByDistance(ev_bool sort, ev_uint16 maxresults);
                /*virtual void setSortByDistance(ev_bool sort, ev_uint16 maxresults = 0);*/
                virtual void setSortByDistance(ev_bool sort);
                /** Gets whether the results are sorted by distance. */
                virtual ev_bool getSortByDistance() const;
                /** Gets the maximum number of results returned from the query (only relevant if
                results are being sorted) */
                virtual ev_uint16 getMaxResults() const;
                /** Executes the query, returning the results back in one list.
                @remarks
                This method executes the scene query as configured, gathers the results
                into one structure and returns a reference to that structure. These
                results will also persist in this query object until the next query is
                executed, or clearResults() is called. An more lightweight version of
                this method that returns results through a listener is also available.
                */
                virtual EarthView::World::Graphic::RaySceneQueryResult &execute();
                /** Executes the query and returns each match through a listener interface.
                @remarks
                Note that this method does not store the results of the query internally
                so does not update the 'last result' value. This means that this version of
                execute is more lightweight and therefore more efficient than the version
                which returns the results as a collection.
                */
                virtual void execute(EarthView::World::Graphic::CRaySceneQueryListener *listener);
                
                virtual EarthView::World::Graphic::RaySceneQueryResult &getLastResults();
                /** Clears the results of the last query execution.
                @remarks
                You only need to call this if you specifically want to free up the memory
                used by this object to hold the last query results. This object clears the
                results itself when executing and when destroying itself.
                */
                virtual void clearResults();

            };
            /** Alternative listener class for dealing with CIntersectionSceneQuery.
            @remarks
            Because the EarthView::World::Graphic::CIntersectionSceneQuery returns results in pairs, rather than singularly,
            the listener interface must be customised from the standard EarthView::World::Graphic::CSceneQueryListener.
            */
            class EV_GRAPHIC_DLL CIntersectionSceneQueryListener : public EarthView::World::Core::CBaseObject
            {
            public:
                CIntersectionSceneQueryListener();
                virtual ~CIntersectionSceneQueryListener();
                /** Called when 2 movable objects intersect one another.
                @remarks
                As with EarthView::World::Graphic::CSceneQueryListener, the implementor of this method should return 'true'
                if further results are required, or 'false' to abandon any further results from
                the current query.
                */
                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *first, EarthView::World::Graphic::CMovableObject *second);
                /** Called when a movable intersects a world fragment.
                @remarks
                As with EarthView::World::Graphic::CSceneQueryListener, the implementor of this method should return 'true'
                if further results are required, or 'false' to abandon any further results from
                the current query.
                */
                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *movable, EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment);
                /* NB there are no results for world fragments intersecting other world fragments;
                it is assumed that world geometry is either static or at least that self-intersections
                are irrelevant or dealt with elsewhere (such as the custom scene manager) */
            ev_private:
                CIntersectionSceneQueryListener(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            ///typedef std::pair<EarthView::World::Graphic::CMovableObject*, EarthView::World::Graphic::CMovableObject*> EarthView::World::Graphic::SceneQueryMovableObjectPair;
            class EV_GRAPHIC_DLL SceneQueryMovableObjectPair : public EarthView::World::Core::CBaseObject
            {
            public:
                EarthView::World::Graphic::CMovableObject *first;
                EarthView::World::Graphic::CMovableObject *second;
                SceneQueryMovableObjectPair();;
                SceneQueryMovableObjectPair(EarthView::World::Graphic::CMovableObject *f, EarthView::World::Graphic::CMovableObject *s);
            ev_private:
                SceneQueryMovableObjectPair(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            ///typedef std::pair<EarthView::World::Graphic::CMovableObject*, EarthView::World::Graphic::CSceneQuery::WorldFragment*> EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair;
            class EV_GRAPHIC_DLL SceneQueryMovableObjectWorldFragmentPair : public EarthView::World::Core::CBaseObject
            {
            public:
                EarthView::World::Graphic::CMovableObject *first;
                EarthView::World::Graphic::CSceneQuery::WorldFragment *second;
                SceneQueryMovableObjectWorldFragmentPair();
                SceneQueryMovableObjectWorldFragmentPair(EarthView::World::Graphic::CMovableObject *f, EarthView::World::Graphic::CSceneQuery::WorldFragment *s);
            ev_private:
                SceneQueryMovableObjectWorldFragmentPair(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            class EV_GRAPHIC_DLL SceneQueryMovableIntersectionList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::SceneQueryMovableObjectPair> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Graphic::SceneQueryMovableObjectPair const &t);
            private:
                InternalList mList;
            ev_private:
                SceneQueryMovableIntersectionList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                SceneQueryMovableIntersectionList();
                void push_back(EarthView::World::Graphic::SceneQueryMovableObjectPair  const &t);
                void pop_back();

                EarthView::World::Graphic::SceneQueryMovableObjectPair &front();
                EarthView::World::Graphic::SceneQueryMovableObjectPair &back();
                void insert(ev_uint32 pos, EarthView::World::Graphic::SceneQueryMovableObjectPair const &t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                EarthView::World::Graphic::SceneQueryMovableObjectPair &operator[](ev_size_t n);
                EarthView::World::Graphic::SceneQueryMovableObjectPair const &operator[](ev_size_t n) const;
                EarthView::World::Graphic::SceneQueryMovableObjectPair &at(ev_size_t n);
                EarthView::World::Graphic::SceneQueryMovableObjectPair const &at(ev_size_t n) const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void reserve(ev_size_t count);
                void clear();
            };
            class EV_GRAPHIC_DLL SceneQueryMovableWorldFragmentIntersectionList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair const &t);
            private:
                InternalList mList;
            ev_private:
                SceneQueryMovableWorldFragmentIntersectionList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                SceneQueryMovableWorldFragmentIntersectionList();
                void push_back(EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair  const &t);
                void pop_back();

                EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair &front();
                EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair &back();
                void insert(ev_uint32 pos, EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair const &t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair &operator[](ev_size_t n);
                EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair const &operator[](ev_size_t n) const;
                EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair &at(ev_size_t n);
                EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair const &at(ev_size_t n) const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void reserve(ev_size_t count);
                void clear();
            };
            /** Holds the results of an intersection scene query (pair values). */
            class EV_GRAPHIC_DLL IntersectionSceneQueryResult : public EarthView::World::Core::CAllocatedObject
            {
            public:
                IntersectionSceneQueryResult();
                //// List of movable / movable intersections (entities, particle systems etc)
                EarthView::World::Graphic::SceneQueryMovableIntersectionList movables2movables;
                //// List of movable / world intersections
                EarthView::World::Graphic::SceneQueryMovableWorldFragmentIntersectionList movables2world;
            ev_private:
                IntersectionSceneQueryResult(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            /** Separate CSceneQuery class to query for pairs of objects which are
            possibly intersecting one another.
            @remarks
            This CSceneQuery subclass considers the whole world and returns pairs of objects
            which are close enough to each other that they may be intersecting. Because of
            this slightly different focus, the return types and listener interface are
            different for this class.
            */
            class EV_GRAPHIC_DLL CIntersectionSceneQuery : public EarthView::World::Graphic::CSceneQuery
            {
                friend class CIntersectionSceneQueryInternalListener;
            public:
                class EV_GRAPHIC_DLL CIntersectionSceneQueryInternalListener : public EarthView::World::Graphic::CIntersectionSceneQueryListener
                {
                public:
                    CIntersectionSceneQueryInternalListener(CIntersectionSceneQuery *ref_parent);
                    /** Self-callback in order to deal with execute which returns collection. */
                    ev_bool queryResult(EarthView::World::Graphic::CMovableObject *first, EarthView::World::Graphic::CMovableObject *second);
                    /** Self-callback in order to deal with execute which returns collection. */
                    ev_bool queryResult(EarthView::World::Graphic::CMovableObject *movable, EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment);
                ev_private:
                    CIntersectionSceneQueryInternalListener(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    EarthView::World::Graphic::CIntersectionSceneQuery *mParent;
                };
                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *first, EarthView::World::Graphic::CMovableObject *second);
                virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject *movable, EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment);
                virtual const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener *getListenerPtr();
                ///virtual const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener& getListener();
            private:
                EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener *mpListener;
            protected:
                EarthView::World::Graphic::IntersectionSceneQueryResult *mLastResult;
            ev_private:
                CIntersectionSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CIntersectionSceneQuery(EarthView::World::Graphic::CSceneManager *ref_mgr);
                virtual ~CIntersectionSceneQuery();
                /** Executes the query, returning the results back in one list.
                @remarks
                This method executes the scene query as configured, gathers the results
                into one structure and returns a reference to that structure. These
                results will also persist in this query object until the next query is
                executed, or clearResults() is called. An more lightweight version of
                this method that returns results through a listener is also available.
                */
                virtual EarthView::World::Graphic::IntersectionSceneQueryResult &execute();
                /** Executes the query and returns each match through a listener interface.
                @remarks
                Note that this method does not store the results of the query internally
                so does not update the 'last result' value. This means that this version of
                execute is more lightweight and therefore more efficient than the version
                which returns the results as a collection.
                */
                virtual void execute(EarthView::World::Graphic::CIntersectionSceneQueryListener *listener);;
                
                virtual EarthView::World::Graphic::IntersectionSceneQueryResult &getLastResults() const;
                /** Clears the results of the last query execution.
                @remarks
                You only need to call this if you specifically want to free up the memory
                used by this object to hold the last query results. This object clears the
                results itself when executing and when destroying itself.
                */
                virtual void clearResults();

            };
            /** @} */
            /** @} */
        }
    }
}


#endif

