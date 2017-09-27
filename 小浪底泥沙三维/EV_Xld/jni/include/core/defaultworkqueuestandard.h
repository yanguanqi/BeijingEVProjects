#ifndef __DefaultWorkQueueStandard_H__
#define __DefaultWorkQueueStandard_H__
#include "core/workqueue.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /** Implementation of a general purpose request / response style background work queue.
            @remarks
            	This default implementation of a work queue starts a thread pool and
            	provides queues to process requests.
            */
            class EV_CORE_DLL CDefaultWorkQueue : public EarthView::World::Core::CDefaultWorkQueueBase
            {
            ev_private:
                CDefaultWorkQueue(EarthView::World::Core::CNameValuePairList *pList);
            public:
                CDefaultWorkQueue(const EVString &name);
                CDefaultWorkQueue();
                virtual ~CDefaultWorkQueue();
            public:
                //static CDefaultWorkQueue* getSingletonPtr();
                //static CDefaultWorkQueue& getSingleton();
                
            protected:
                //static CDefaultWorkQueue* mpSingleton;    
                void init();
				
            public:
                //// Main function for each thread spawned.
                virtual void _threadMain();
                //// @copydoc CWorkQueue::shutdown
                virtual void shutdown();
                //// @copydoc CWorkQueue::startup
                virtual void startup(ev_bool forceRestart);
                virtual void startup();

				virtual ev_bool isQueueRunningByFilter(ev_uint16 channel,ev_uint64 filter);
            ev_internal:
                /** To be called by a separate thread; will return immediately if there
                	are items in the queue, or suspend the thread until new items are added
                	otherwise.
                */
                virtual void waitForNextRequest();
                //// Notify that a thread has registered itself with the render system
                virtual void notifyThreadRegistered();
                virtual void notifyWorkers();
            protected:
                ev_size_t mNumThreadsRegisteredWithRS;
                //// Init notification mutex (must lock before waiting on initCondition)
                EV_MUTEX(mInitMutex)
                //// Synchroniser token to wait / notify on thread init
                EV_THREAD_SYNCHRONISER(mInitSync)
                EV_THREAD_SYNCHRONISER(mRequestCondition)
#if EV_THREAD_SUPPORT
                typedef vector<EV_THREAD_TYPE *> WorkerThreadList;
                WorkerThreadList mWorkers;
#endif
            };
        }
    }
}

#endif

