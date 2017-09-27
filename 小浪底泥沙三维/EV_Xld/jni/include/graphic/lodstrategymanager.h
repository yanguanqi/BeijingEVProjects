#ifndef __Lod_Strategy_Manager_H__
#define __Lod_Strategy_Manager_H__
#include <core/memoryallocatedobject.h>
#include <core/stringdefines.h>
#include "graphic_config.h"
#include <core/iteratorwrapper.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CLodStrategy;

            /***** Manager for lod strategies. ****/
            class EV_GRAPHIC_DLL CLodStrategyManager : public EarthView::World::Core::CAllocatedObject/**** ,public CSingleton<EarthView::World::Graphic::CLodStrategyManager> ****/
            {
            private:
                /***** Map of strategies. ****/
                typedef map<EVString, EarthView::World::Graphic::CLodStrategy *> StrategyMap;
                /***** Internal map of strategies. ****/
                StrategyMap mStrategies;
                /***** Default strategy. ****/
                EarthView::World::Graphic::CLodStrategy *mDefaultStrategy;
				/***** Get an iterator for all contained strategies. ****/
				EarthView::World::Core::CMapIterator<StrategyMap> getIterator();
            private:
                static EarthView::World::Graphic::CLodStrategyManager *ms_Singleton;
            ev_private:
                CLodStrategyManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /***** Default constructor. ****/
                CLodStrategyManager();
                /***** Destructor. ****/
                ~CLodStrategyManager();
                /***** Add a strategy to the manager. ****/
                void addStrategy(EarthView::World::Graphic::CLodStrategy *ref_strategy);
                /***** Remove a strategy from the manager with a specified name.
                @remarks
                    The removed strategy is returned so the user can control
                    how it is destroyed.
                ****/
                EarthView::World::Graphic::CLodStrategy *removeStrategy(const EVString &name);
                /***** Remove and delete all strategies from the manager.
                @remarks
                    All strategies are deleted.  If finer control is required
                    over strategy destruction, use removeStrategy.
                ****/
                void removeAllStrategies();
                /***** Get the strategy with the specified name. ****/
                EarthView::World::Graphic::CLodStrategy *getStrategy(const EVString &name);
                /***** Set the default strategy. ****/
                void setDefaultStrategy(EarthView::World::Graphic::CLodStrategy *ref_strategy);
                /***** Set the default strategy by name. ****/
                void setDefaultStrategy(const EVString &name);
                /***** Get the current default strategy. ****/
                EarthView::World::Graphic::CLodStrategy *getDefaultStrategy();
                
                /***** Override standard CSingleton retrieval.
                @remarks
                Why do we do this? Well, it's because the CSingleton
                implementation is in a .h file, which means it gets compiled
                into anybody who includes it. This is needed for the
                CSingleton template to work, but we actually only want it
                compiled into the implementation of the class based on the
                CSingleton, not all of them. If we don't change this, we get
                link errors when trying to use the CSingleton-based class from
                an outside dll.
                @par
                This method just delegates to the template version anyway,
                but the implementation stays in this single compilation unit,
                preventing link errors.
                ****/
                static EarthView::World::Graphic::CLodStrategyManager &getSingleton();
                /***** Override standard CSingleton retrieval.
                @remarks
                Why do we do this? Well, it's because the CSingleton
                implementation is in a .h file, which means it gets compiled
                into anybody who includes it. This is needed for the
                CSingleton template to work, but we actually only want it
                compiled into the implementation of the class based on the
                CSingleton, not all of them. If we don't change this, we get
                link errors when trying to use the CSingleton-based class from
                an outside dll.
                @par
                This method just delegates to the template version anyway,
                but the implementation stays in this single compilation unit,
                preventing link errors.
                ****/
                static EarthView::World::Graphic::CLodStrategyManager *getSingletonPtr();
            };
        }
    }
}

#endif

