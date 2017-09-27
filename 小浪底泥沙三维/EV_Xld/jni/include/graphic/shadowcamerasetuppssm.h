#ifndef __ShadowCameraSetupPSSM_H__
#define __ShadowCameraSetupPSSM_H__
#include "graphic/graphic_config.h"
#include "shadowcamerasetuplispsm.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


            /***** Parallel Split Shadow Map (PSSM) shadow camera setup.
            @remarks
            	A PSSM shadow system uses multiple shadow maps per light and maps each
            	texture into a region of space, progressing away from the camera. As such
            	it is most appropriate for directional light setups. This particular version
            	also uses LiSPSM projection for each split to maximise the quality.
            @note
            	Because PSSM uses multiple shadow maps per light, you will need to increase
            	the number of shadow textures available (via EarthView::World::Graphic::CSceneManager) to match the
            	number of shadow maps required (default is 3 per light).
            ****/
            class EV_GRAPHIC_DLL CPSSMShadowCameraSetup : public EarthView::World::Graphic::CLiSPSMShadowCameraSetup
            {
            public:
                class EV_GRAPHIC_DLL CPSSMShadowCameraSetupSplitPointList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<Real> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, Real const &t);
                private:
                    InternalList mList;
                ev_private:
                    CPSSMShadowCameraSetupSplitPointList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CPSSMShadowCameraSetupSplitPointList();
                    void push_back(Real  const &t);
                    void pop_back();

                    Real &front();
                    Real &back();
                    void insert(ev_uint32 pos, Real const &t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    Real &operator[](ev_size_t n);
                    Real const &operator[](ev_size_t n) const;
                    Real &at(ev_size_t n);
                    Real const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };
                class EV_GRAPHIC_DLL OptimalAdjustFactorList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<Real> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			////保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, Real const &t);
                private:
                    InternalList mList;
                ev_private:
                    OptimalAdjustFactorList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    OptimalAdjustFactorList();
                    void push_back(Real  const &t);
                    void pop_back();

                    Real &front();
                    Real &back();
                    void insert(ev_uint32 pos, Real const &t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    Real &operator[](ev_size_t n);
                    Real const &operator[](ev_size_t n) const;
                    Real &at(ev_size_t n);
                    Real const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };
            protected:
                ev_size_t mSplitCount;
                EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList mSplitPoints;
                OptimalAdjustFactorList mOptimalAdjustFactors;
                Real mSplitPadding;
                mutable ev_size_t mCurrentIteration;
            ev_private:
                CPSSMShadowCameraSetup(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// Constructor, defaults to 3 splits
                CPSSMShadowCameraSetup();
                ~CPSSMShadowCameraSetup();
                /***** Calculate a new splitting scheme.
                @param splitCount The number of splits to use
                @param nearDist The near plane to use for the first split
                @param farDist The far plane to use for the last split
                @param lambda Factor to use to reduce the split size
                ****/
                void calculateSplitPoints(ev_size_t splitCount, Real nearDist, Real farDist, Real lambda );
                /****void calculateSplitPoints(ev_size_t splitCount, Real nearDist, Real farDist, Real lambda = 0.95);****/
                void calculateSplitPoints(ev_size_t splitCount, Real nearDist, Real farDist);
                /***** Manually configure a new splitting scheme.
                @param newSplitPoints A list which is splitCount + 1 entries ev_int32, containing the
                	split points. The first value is the near point, the last value is the
                	far point, and each value in between is both a far point of the previous
                	split, and a near point for the next one.
                ****/
                void setSplitPoints(const EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList &newSplitPoints);
                /***** Set the LiSPSM optimal adjust factor for a given split (call after
                	configuring splits).
                ****/
                virtual void setOptimalAdjustFactor(ev_size_t splitIndex, Real factor);
                /***** Set the padding factor to apply to the near & far distances when matching up
                	splits to one another, to avoid 'cracks'.
                ****/
                void setSplitPadding(Real pad);
                /***** Get the padding factor to apply to the near & far distances when matching up
                	splits to one another, to avoid 'cracks'.
                ****/
                Real getSplitPadding() const;
                //// Get the number of splits.
                ev_size_t getSplitCount() const;
                //// Returns a LiSPSM shadow camera with PSSM splits base on iteration.
                virtual void getShadowCamera(const EarthView::World::Graphic::CSceneManager *sm, const EarthView::World::Graphic::CCamera *cam,
                                             const EarthView::World::Graphic::CViewport *vp, const EarthView::World::Graphic::CLight *light, EarthView::World::Graphic::CCamera *texCam, ev_size_t iteration) const;
                //// Returns the calculated split points.
                const EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList &getSplitPoints() const;
                //// Returns the optimal adjust factor for a given split.
                Real getOptimalAdjustFactor(ev_size_t splitIndex) const;
                //// Overridden, recommended internal use only since depends on current iteration
                Real getOptimalAdjustFactor() const;
            };
        }
    }
}

#endif

