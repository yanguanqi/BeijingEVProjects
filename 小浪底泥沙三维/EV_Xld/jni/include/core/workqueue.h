#ifndef __WorkQueue_H__
#define __WorkQueue_H__

#include "core/sharedptr.h"
#include "core/stringvector.h"
#include "core/graphic_exception.h"
#include "core/threaddefines.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /** Interface to a general purpose request / response style background work queue.
            @remarks
            	A work queue is a simple structure, where requests for work are placed
            	onto the queue, then removed by a worker for processing, then finally
            	a response is placed on the result queue for the originator to pick up
            	at their leisure. The typical use for this is in a threaded environment,
            	although any kind of deferred processing could use this approach to
            	decouple and distribute work over a period of time even
            	if it was single threaded.
            @par
            	WorkQueues also incorporate thread pools. One or more background worker threads
            	can wait on the queue and be notified when a request is waiting to be
            	processed. For maximal thread usage, a EarthView::World::Core::CWorkQueue instance should be shared
            	among many sources of work, rather than many work queues being created.
            	This way, you can share a small number of hardware threads among a large
            	number of background tasks. This doesn't mean you have to implement all the
            	request processing in one class, you can plug in many handlers in order to
            	process the requests.
            @par
            	This is an abstract interface definition; users can subclass this and
            	provide their own implementation if required to centralise task management
            	in their own subsystems. We also provide a default implementation in the
            	form of CDefaultWorkQueue.
            */

            enum WorkQueuePriority
            {
                Work_Queue_Tile    = 100,
                Work_Queue_Vector  = 200,
                Work_Queue_Model   = 300,
                Work_Queue_Effect  = 400,
				Work_Queue_Kml     = 500,
                Work_Queue_Default = 600,
                Work_Queue_Custom  = 1000
            };  
            
            class EV_CORE_DLL CWorkQueueChannelListener : public EarthView::World::Core::CAllocatedObject
            {
ev_private:
				CWorkQueueChannelListener(_in EarthView::World::Core::CNameValuePairList *pList){}
            public:
                CWorkQueueChannelListener(){}
                ~CWorkQueueChannelListener(){}
            public:
                //
                virtual ev_bool preRequestSorted(ev_uint16 channelID){return false;}
                virtual ev_void postRequestSorted(ev_uint16 channelID){}
            };


            class EV_CORE_DLL CWorkQueue : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                typedef std::pair<ev_uint32,EarthView::World::Core::CWorkQueueChannelListener*> PriorityListenerPair;
                typedef map<ev_uint16,PriorityListenerPair> ChannelMap;
                ChannelMap mChannelMap;
                ev_uint16 mNextChannel;
                EV_MUTEX(mChannelMapMutex)
            public:
				class CRequest;
				class CResponse;
				class EV_CORE_DLL RequestPara : public EarthView::World::Core::CBaseObject
				{
				public:
					RequestPara(): mParent(NULL){}
					virtual ~RequestPara(){}                

				ev_private:
					RequestPara(EarthView::World::Core::CNameValuePairList* pList): mParent(NULL){}
					virtual EarthView::World::Core::CWorkQueue::RequestPara& operator=(const EarthView::World::Core::CWorkQueue::RequestPara& rhs){ this->mParent = rhs.mParent;return *this;}
					virtual ev_bool operator<(const EarthView::World::Core::CWorkQueue::RequestPara& rhs) const;
					
				public:
					virtual _extfree EarthView::World::Core::CWorkQueue::RequestPara* clone()const {EV_EXCEPT(CException::ERR_NOT_IMPLEMENTED,"The method is not implemented","EarthView::World::Core::CWorkQueue::RequestPara::clone");}
					EarthView::World::Core::CWorkQueue::CRequest* getRequest()const{return mParent;}
					ev_void setRequest(EarthView::World::Core::CWorkQueue::CRequest* parent)const {mParent = parent;}
				private:
					mutable EarthView::World::Core::CWorkQueue::CRequest* mParent;
				};

				class EV_CORE_DLL ResponsePara : public EarthView::World::Core::CBaseObject
				{
				public:
					ResponsePara(): mParent(NULL){}
					virtual ~ResponsePara(){}

				ev_private:
					ResponsePara(EarthView::World::Core::CNameValuePairList* pList): mParent(NULL){}
					virtual EarthView::World::Core::CWorkQueue::ResponsePara& operator=(const EarthView::World::Core::CWorkQueue::ResponsePara& rhs){ this->mParent = rhs.mParent;return *this;}
				public:
					virtual _extfree EarthView::World::Core::CWorkQueue::ResponsePara* clone()const {EV_EXCEPT(CException::ERR_NOT_IMPLEMENTED,"The method is not implemented","EarthView::World::Core::CWorkQueue::ResponsePara::clone");}
					EarthView::World::Core::CWorkQueue::CResponse* getResponse()const{return mParent;}
					ev_void setResponse(EarthView::World::Core::CWorkQueue::CResponse* parent)const {mParent = parent;}
				private:
					mutable EarthView::World::Core::CWorkQueue::CResponse* mParent;
				};

                //// Numeric identifier for a request
                typedef ev_uint64 RequestID;
                /** General purpose request structure.
                */
                class EV_CORE_DLL CRequest : public EarthView::World::Core::CAllocatedObject
                {
                    friend class CWorkQueue;                    
                protected:
                    //// The request channel, as an integer
                    ev_uint16 mChannel;                    
                    //// The request type, as an integer within the channel (user can define enumerations on this)
                    ev_uint16 mType;
                    //// The details of the request (user defined)
                    EarthView::World::Core::CWorkQueue::RequestPara* mData;
                    //// Retry count - set this to non-zero to have the request try again on failure
                    ev_uint8 mRetryCount;
                    //// Identifier (assigned by the system)
				public:
                    RequestID mID;
				protected:
                    //// Abort Flag
                    mutable ev_bool mAborted;

					ev_uint64 mFilter;

                ev_private:
                    CRequest(_in EarthView::World::Core::CNameValuePairList *pList);

                public:
                    //// Constructor
                    CRequest(ev_uint16 channel, ev_uint16 rtype, const EarthView::World::Core::CWorkQueue::RequestPara &rData, ev_uint8 retry, RequestID rid);                  
					CRequest(ev_uint16 channel, ev_uint16 rtype, const EarthView::World::Core::CWorkQueue::RequestPara &rData, ev_uint8 retry, RequestID rid,ev_uint64 filter);                  

                    virtual ~CRequest();
                public: 
                    //// Set the abort flag
                    void abortRequest() const;
                    //// Get the request channel (top level categorisation)
                    ev_uint16 getChannel() const;
                    //// Get the type of this request within the given channel
                    ev_uint16 getType() const;
                    //// Get the user details of this request
                    const EarthView::World::Core::CWorkQueue::RequestPara& getData() const;
                    //// Get the remaining retry count
                    ev_uint8 getRetryCount() const;
                    //// Get the identifier of this request
                    RequestID getID() const;
                    //// Get the abort flag
                    ev_bool getAborted() const;

					ev_uint64 getFilter()const;
					

                };
                /** General purpose response structure.
                */
                class EV_CORE_DLL CResponse : public EarthView::World::Core::CAllocatedObject
                {
                private:
                    //// Pointer to the request that this response is in relation to
                    const EarthView::World::Core::CWorkQueue::CRequest *mRequest;
                    //// Whether the work item succeeded or not
                    ev_bool mSuccess;
                    //// CAny diagnostic messages
                    EVString mMessages;
                    //// Data associated with the result of the process                
                    EarthView::World::Core::CWorkQueue::ResponsePara* mData;

                ev_private:
                    CResponse(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CResponse(const EarthView::World::Core::CWorkQueue::CRequest *rq, ev_bool success, const EarthView::World::Core::CWorkQueue::ResponsePara &data, const EVString &msg);
                    CResponse(const EarthView::World::Core::CWorkQueue::CRequest *rq, ev_bool success, const EarthView::World::Core::CWorkQueue::ResponsePara &data);
                public:
                    
                    virtual ~CResponse();
                    //// Get the request that this is a response to (NB destruction destroys this)
                    const EarthView::World::Core::CWorkQueue::CRequest *getRequest() const;
                    //// Return whether this is a successful response
                    ev_bool succeeded() const;
                    //// Get any diagnostic messages about the process
                    const EVString &getMessages() const;
                    //// Abort the request
                    void abortRequest();                
                    //// Return the response data (user defined, only valid on success)
                    const EarthView::World::Core::CWorkQueue::ResponsePara &getData() const;
                };
                /** Interface definition for a handler of requests.
                @remarks
                User classes are expected to implement this interface in order to
                process requests on the queue. It's important to realise that
                the calls to this class may be in a separate thread to the main
                render context, and as such it may not be possible to make
                rendersystem or other GPU-dependent calls in this handler. You can only
                do so if the queue was created with 'workersCanAccessRenderSystem'
                set to true, and EV_THREAD_SUPPORT=1, but this puts extra strain
                on the thread safety of the render system and is not recommended.
                It is best to perform CPU-side work in these handlers and let the
                response handler transfer results to the GPU in the main render thread.
                */
                class EV_CORE_DLL CRequestHandler : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CRequestHandler(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CRequestHandler();
                    virtual ~CRequestHandler();
                    /** Return whether this handler can process a given request.
                    @remarks
                    Defaults to true, but if you wish to add several handlers each of
                    which deal with different types of request, you can override
                    this method.
                    */
                    virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const CWorkQueue *srcQ);
                    /** The handler method every subclass must implement.
                    If a failure is encountered, return a Response with a failure
                    result rather than raise an exception.
                    @param req The CRequest structure, which is effectively owned by the
                    handler during this call. It must be attached to the returned
                    Response regardless of success or failure.
                    @param srcQ The work queue that this request originated from
                    @return Pointer to a Response object - the caller is responsible
                    for deleting the object.
                    */
                    virtual EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const CWorkQueue *srcQ);
                };
                /** Interface definition for a handler of responses.
                @remarks
                User classes are expected to implement this interface in order to
                process responses from the queue. All calls to this class will be
                in the main render thread and thus all GPU resources will be
                available.
                */
                class EV_CORE_DLL CResponseHandler : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CResponseHandler(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CResponseHandler();
                    virtual ~CResponseHandler();
                    /** Return whether this handler can process a given response.
                    @remarks
                    Defaults to true, but if you wish to add several handlers each of
                    which deal with different types of response, you can override
                    this method.
                    */
                    virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const CWorkQueue *srcQ);
                    /** The handler method every subclass must implement.
                    @param res The Response structure. The caller is responsible for
                    deleting this after the call is made, none of the data contained
                    (except pointers to structures in user CAny data) will persist
                    after this call is returned.
                    @param srcQ The work queue that this request originated from
                    */
                    virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const CWorkQueue *srcQ);
                };
                CWorkQueue();
                virtual ~CWorkQueue();
            ev_private:
                CWorkQueue(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /** Start up the queue with the options that have been set.
                @param forceRestart If the queue is already running, whether to shut it
                	down and restart.
                */
                /*virtual void startup(ev_bool forceRestart = true);*/
                virtual void startup(ev_bool forceRestart);
                virtual void startup();
                /** Add a request handler instance to the queue.
                @remarks
                	Every queue must have at least one request handler instance for each
                	channel in which requests are raised. If you
                	add more than one handler per channel, then you must implement canHandleRequest
                	differently	in each if you wish them to respond to different requests.
                @param channel The channel for requests you want to handle
                @param rh Your handler
                */
                virtual void addRequestHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CRequestHandler *rh);
                /** Remove a request handler. */
                virtual void removeRequestHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CRequestHandler *rh);
                /** Add a response handler instance to the queue.
                @remarks
                	Every queue must have at least one response handler instance for each
                	channel in which requests are raised. If you add more than one, then you
                	must implement canHandleResponse differently in each if you wish them
                	to respond to different responses.
                @param channel The channel for responses you want to handle
                @param rh Your handler
                */
                virtual void addResponseHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CResponseHandler *rh);
                /** Remove a Response handler. */
                virtual void removeResponseHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CResponseHandler *rh);
            
                /** Add a new request to the queue.
                @param channel The channel this request will go into = 0; the channel is the top-level
                	categorisation of the request
                @param requestType An identifier that's unique within this queue which
                	identifies the type of the request (user decides the actual value)
                @param rData The data required by the request process.
                @param retryCount The number of times the request should be retried
                	if it fails.
                @param forceSynchronous Forces the request to be processed immediately
                	even if threading is enabled.
                @returns The ID of the request that has been added
                *//*
                virtual RequestID addRequest(ev_uint16 channel, ev_uint16 requestType, const CAny& rData,
                ev_uint8 retryCount = 0, ev_bool forceSynchronous = false);*/
				virtual RequestID addRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara &rData, ev_uint8 retryCount, ev_bool forceSynchronous,ev_uint64 filter);
                virtual RequestID addRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara &rData, ev_uint8 retryCount, ev_bool forceSynchronous);
                virtual RequestID addRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara &rData, ev_uint8 retryCount);
                virtual RequestID addRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara &rData);
				virtual RequestID addRequest(CRequest *request);

				virtual RequestID addOrReplaceRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara &rData, ev_uint8 retryCount, ev_bool forceSynchronous, ev_uint64 filter);
            public:
                /** Abort a previously issued request.
                If the request is still waiting to be processed, it will be
                removed from the queue.
                @param id The ID of the previously issued request.
                */
                virtual void abortRequest(RequestID id);
                /** Abort all previously issued requests in a given channel.
                CAny requests still waiting to be processed of the given channel, will be
                removed from the queue.
                @param channel The type of request to be aborted
                */
                virtual void abortRequestsByChannel(ev_uint16 channel);
				virtual void abortRequestsByFilter(ev_uint16 channel,ev_uint64 filter);
                /** Abort all previously issued requests.
                CAny requests still waiting to be processed will be removed from the queue.
                CAny requests that are being processed will still complete.
                */
                virtual void abortAllRequests();

                /** Set whether to pause further processing of any requests.
                If true, any further requests will simply be queued and not processed until
                setPaused(false) is called. CAny requests which are in the process of being
                worked on already will still continue.
                */
                virtual void setPaused(ev_bool pause);
                //// Return whether the queue is paused ie not sending more work to workers
                virtual ev_bool isPaused() const;
                /** Set whether to accept new requests or not.
                If true, requests are added to the queue as usual. If false, requests
                are silently ignored until setRequestsAccepted(true) is called.
                */
                virtual void setRequestsAccepted(ev_bool accept);
                //// Returns whether requests are being accepted right now
                virtual ev_bool getRequestsAccepted() const;
                /** Process the responses in the queue.
                @remarks
                	This method is public, and must be called from the main render
                	thread to 'pump' responses through the system. The method will usually
                	try to clear all responses before returning = 0; however, you can specify
                	a time limit on the response processing to limit the impact of
                	spikes in demand by calling setResponseProcessingTimeLimit.
                */
                virtual void processResponses();
                /** Get the time limit imposed on the processing of responses in a
                	single frame, in milliseconds (0 indicates no limit).
                */
                virtual ev_uint32 getResponseProcessingTimeLimit() const;
                /** Set the time limit imposed on the processing of responses in a
                	single frame, in milliseconds (0 indicates no limit).
                	This sets the maximum time that will be spent in processResponses() in
                	a single frame. The default is 8ms.
                */
                virtual void setResponseProcessingTimeLimit(ev_uint32 ms);
                /** Shut down the queue.
                */
                virtual void shutdown();
                /** Get a channel ID for a given channel priority.
                @remarks
                	Channels are assigned on a first-come, first-served basis and are
                	not persistent across application instances. This method allows
                	applications to not worry about channel clashes through manually
                	assigned channel numbers.
                */
                virtual ev_uint16 getChannel(ev_uint32 priority = Work_Queue_Default);

                virtual ev_bool setChannelListener(ev_uint16 channelID,EarthView::World::Core::CWorkQueueChannelListener* pListener);
                virtual EarthView::World::Core::CWorkQueueChannelListener* getChannelListener(ev_uint16 channelID)const;
            };
            /** Base for a general purpose request / response style background work queue.
            */
            class EV_CORE_DLL CDefaultWorkQueueBase : public EarthView::World::Core::CWorkQueue
            {
                /**
                 *  在EV_Graphic里面的时候掉用了CRoot::getSingleton().getRenderSystem()->func()，
                 *  移植到Core后，不能使用这些函数，但这些函数是用来确保OpenGl渲染系统在多线程下能正常工作的，
                 *  所以采用注册回调函数的方式，在三维里使用注册回调(已经在EV_Graphic里实现)，如不使用，直接
                 *  取消注册即可。
                 */
            protected:
                typedef void (*pfpreExtraThreadsStartedFunc)();
                typedef void (*pfpostExtraThreadsStartedFunc)();
                typedef void (*pfregisterThreadFunc)();
				typedef void (*pfunregisterThreadFunc)();
                typedef void (*pfflushRenderSystemFunc)();
                pfpreExtraThreadsStartedFunc   mppreExtraThreadsStartedCallBack;
                pfpostExtraThreadsStartedFunc  mppostExtraThreadsStartedsCallBack;
                pfregisterThreadFunc           mpregisterThreadCallBack;
				pfunregisterThreadFunc			mpunregisterThreadCallBack;
                pfflushRenderSystemFunc           mpflushRenderSystemCallBack;
				
            public:
                void registerPreExtraThreadsStartedFunc(void *preExtraThreadsStartedFunc);
                void registerPostExtraThreadsStartedFunc(void *postExtraThreadsStartedFunc);
                void registerThreadFunc (void *pThreadFunc);
				void registerThreadFunc2 (void *pThreadFunc);
                void registerflushRenderSystemFunc (void *pflushRenderSystemFunc);
                void unregisterPreExtraThreadsStartedFunc();
                void unregisterPostExtraThreadsStartedFunc();
                void unregisterThreadFunc();
				void unregisterThreadFunc2();
                void unregisterflushRenderSystemFunc();

            ev_private:
                CDefaultWorkQueueBase(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /** Constructor.
                	Call startup() to initialise.
                @param name Optional name, just helps to identify logging output
                */
                CDefaultWorkQueueBase(const EVString &name);
                CDefaultWorkQueueBase();
                virtual ~CDefaultWorkQueueBase();
                //// Get the name of the work queue
                const EVString &getName() const;
                /** Get the number of worker threads that this queue will start when
                	startup() is called.
                */
                virtual ev_size_t getWorkerThreadCount() const;
                /** Set the number of worker threads that this queue will start
                	when startup() is called (default 1).
                	Calling this will have no effect unless the queue is shut down and
                	restarted.
                */
                virtual void setWorkerThreadCount(ev_size_t c);
                /** Get whether worker threads will be allowed to access render system
                	resources.
                	Accessing render system resources from a separate thread can require that
                	a context is maintained for that thread. Also, it requires that the
                	render system is running in threadsafe mode, which only happens
                	when EV_THREAD_SUPPORT=1. This option defaults to false, which means
                	that threads can not use GPU resources, and the render system can
                	work in non-threadsafe mode, which is more efficient.
                */
                virtual ev_bool getWorkersCanAccessRenderSystem() const;

                /** Set whether worker threads will be allowed to access render system
                	resources.
                	Accessing render system resources from a separate thread can require that
                	a context is maintained for that thread. Also, it requires that the
                	render system is running in threadsafe mode, which only happens
                	when EV_THREAD_SUPPORT=1. This option defaults to false, which means
                	that threads can not use GPU resources, and the render system can
                	work in non-threadsafe mode, which is more efficient.
                	Calling this will have no effect unless the queue is shut down and
                	restarted.
                */
                virtual void setWorkersCanAccessRenderSystem(ev_bool access);
                /** Process the next request on the queue.
                @remarks
                	This method is public, but only intended for advanced users to call.
                	own thread to drive the worker processing. The thread calling this
                	method will be the thread used to call the EarthView::World::Core::CWorkQueue::CRequestHandler.
                */
                virtual void _processNextRequest();
                //// Main function for each thread spawned.
                virtual void _threadMain();
                /** Returns whether the queue is trying to shut down. */
                virtual ev_bool isShuttingDown() const;
                //// @copydoc CWorkQueue::addRequestHandler
                virtual void addRequestHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CRequestHandler *rh);
                //// @copydoc CWorkQueue::removeRequestHandler
                virtual void removeRequestHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CRequestHandler *rh);
                //// @copydoc CWorkQueue::addResponseHandler
                virtual void addResponseHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CResponseHandler *rh);
                //// @copydoc CWorkQueue::removeResponseHandler
                virtual void removeResponseHandler(ev_uint16 channel, EarthView::World::Core::CWorkQueue::CResponseHandler *rh);
            
                //// @copydoc CWorkQueue::addRequest
                ///virtual RequestID addRequest(ev_uint16 channel, ev_uint16 requestType, const CAny& rData, ev_uint8 retryCount = 0,
                ///	ev_bool forceSynchronous = false);
				virtual RequestID addRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara &rData, ev_uint8 retryCount, ev_bool forceSynchronous, ev_uint64 filter);
				virtual RequestID addRequest(CRequest *request);
               
				virtual RequestID addOrReplaceRequest(ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara &rData, ev_uint8 retryCount, ev_bool forceSynchronous, ev_uint64 filter);
            public:
                //// @copydoc CWorkQueue::abortRequest
                virtual void abortRequest(RequestID id);
                //// @copydoc CWorkQueue::abortRequestsByChannel
                virtual void abortRequestsByChannel(ev_uint16 channel);
				virtual void abortRequestsByFilter(ev_uint16 channel,ev_uint64 filter);
                //// @copydoc CWorkQueue::abortAllRequests
                virtual void abortAllRequests();
                //// @copydoc CWorkQueue::setPaused
                virtual void setPaused(ev_bool pause);
                //// @copydoc CWorkQueue::isPaused
                virtual ev_bool isPaused() const;
                //// @copydoc CWorkQueue::setRequestsAccepted
                virtual void setRequestsAccepted(ev_bool accept);
                //// @copydoc CWorkQueue::getRequestsAccepted
                virtual ev_bool getRequestsAccepted() const;
                //// @copydoc CWorkQueue::processResponses
                virtual void processResponses();
                //// @copydoc CWorkQueue::getResponseProcessingTimeLimit
                virtual ev_uint32 getResponseProcessingTimeLimit() const;
                //// @copydoc CWorkQueue::setResponseProcessingTimeLimit
                virtual void setResponseProcessingTimeLimit(ev_uint32 ms);
            protected:
                EVString mName;
                ev_size_t mWorkerThreadCount;
                ev_bool mWorkerRenderSystemAccess;
                ev_bool mIsRunning;
                ev_uint32 mResposeTimeLimitMS;

                typedef deque<EarthView::World::Core::CWorkQueue::CRequest *> RequestQueue;
                typedef deque<EarthView::World::Core::CWorkQueue::CResponse *> ResponseQueue;
                typedef map<ev_uint32,RequestQueue> RequestQueueMap;
                typedef map<ev_uint32,ResponseQueue> ResponseQueueMap;
                RequestQueueMap mRequestQueueMap;
                RequestQueue mProcessQueue;
                ResponseQueueMap mResponseQueueMap;

                //// Thread function
                struct WorkerFunc EV_THREAD_WORKER_INHERIT
                {
                    CDefaultWorkQueueBase *mQueue;
                    WorkerFunc(CDefaultWorkQueueBase *q)
                        : mQueue(q) {}
                    void run();
                };

                WorkerFunc *mWorkerFunc;
                /** Intermediate structure to hold a pointer to a request handler which
                	provides insurance against the handler itself being disconnected
                	while the list remains unchanged.
                */
            ev_internal:
                class EV_CORE_DLL CRequestHandlerHolder : public EarthView::World::Core::CAllocatedObject
                {
                protected:
                    EV_RW_MUTEX(mRWMutex);
                    EarthView::World::Core::CWorkQueue::CRequestHandler *mHandler;
                ev_private:
                    CRequestHandlerHolder(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CRequestHandlerHolder(CRequestHandler *handler);
                    /// Disconnect the handler to allow it to be destroyed
                    void disconnectHandler();
                    /** Get handler pointer - note, only use this for == comparison or similar,
                    	do not attempt to call it as it is not thread safe.
                    */
                    EarthView::World::Core::CWorkQueue::CRequestHandler *getHandler();
                    /** Process a request if possible.
                    @return Valid response if processed, null otherwise
                    */
                    EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const CWorkQueue *srcQ);
                };
            protected:

                /// Hold these by shared pointer so they can be copied keeping same instance
                typedef CSharedPtr<CRequestHandlerHolder> RequestHandlerHolderPtr;
                typedef list<RequestHandlerHolderPtr> RequestHandlerList;
                typedef list<EarthView::World::Core::CWorkQueue::CResponseHandler *> ResponseHandlerList;
                typedef map<ev_uint16, RequestHandlerList> RequestHandlerListByChannel;
                typedef map<ev_uint16, ResponseHandlerList> ResponseHandlerListByChannel;
                RequestHandlerListByChannel mRequestHandlers;
                ResponseHandlerListByChannel mResponseHandlers;
                RequestID mRequestCount;
                ev_bool mPaused;
                ev_bool mAcceptRequests;
                ev_bool mShuttingDown;
                EV_MUTEX(mRequestMutex)
                EV_MUTEX(mProcessMutex)
                EV_MUTEX(mResponseMutex)
                EV_RW_MUTEX(mRequestHandlerMutex);

				EarthView::World::Core::CWorkQueue::CRequest* takeoutRequest(RequestQueue& queue);

                void processRequestResponse(EarthView::World::Core::CWorkQueue::CRequest *r, ev_bool synchronous);
                EarthView::World::Core::CWorkQueue::CResponse *processRequest(EarthView::World::Core::CWorkQueue::CRequest *r);
                void processResponse(EarthView::World::Core::CWorkQueue::CResponse *r);
                //// Put a EarthView::World::Core::CWorkQueue::CRequest on the queue with a specific RequestID.
                void addRequestWithRID(RequestID rid, ev_uint16 channel, ev_uint16 requestType, const EarthView::World::Core::CWorkQueue::RequestPara &rData, ev_uint8 retryCount,ev_uint64 filter);
            ev_internal:
                //// Notify workers about a new request.
                virtual void notifyWorkers();
            };

            class EV_CORE_DLL CBackgroundQueue : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CBackgroundQueue(EarthView::World::Core::CNameValuePairList *pList);
            public:
                CBackgroundQueue() {}
            public:
                /// </summary>
                /// 初始化这个BackgroundQueue
                /// </summary>
                /// <returns>None</returns>
                virtual void initialise() ; 			///PURE function
                /// </summary>
                /// 卸载这个BackgroundQueue
                /// </summary>
                /// <returns>None</returns>
                virtual void shutdown() ;         			///PURE function
                /// </summary>
                /// 获取BackgroundQueue所在的组
                /// </summary>
                /// <returns>组名</returns>
                virtual EVString getGroupName() const;			///PURE function
                /// </summary>
                /// 获取BackgroundQueue的名字，唯一标识
                /// </summary>
                /// <returns>BackgroundQueue的名字</returns>
                virtual EVString getName() const;			///PURE function
            };

            class EV_CORE_DLL CBackgroundQueueManager : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CBackgroundQueueManager(EarthView::World::Core::CNameValuePairList *pList);

            public:  
                CBackgroundQueueManager();
                virtual ~CBackgroundQueueManager();

            protected:
                static EarthView::World::Core::CBackgroundQueueManager* msSingleton;

            public:
                static EarthView::World::Core::CBackgroundQueueManager *getSingletonPtr();
                static EarthView::World::Core::CBackgroundQueueManager &getSingleton();  

                /// </summary>
                /// 注册一个BackgroundQueue
                /// </summary>
                /// <returns>None</returns>
                void registerBackgroundQueue(EarthView::World::Core::CBackgroundQueue *queue);
                /// </summary>
                /// 卸载一个BackgroundQueue
                /// </summary>
                /// <returns>None</returns>
                void unregisterBackgroundQueue(EarthView::World::Core::CBackgroundQueue *queue);
                /// </summary>
                /// 通过名字获取BackgroundQueue
                /// </summary>
                /// <returns>BackgroundQueue实例</returns>
                EarthView::World::Core::CBackgroundQueue   *getBackgroundQueue(const EVString &name) const;
                /// </summary>
                /// 获取已经存在的BackgroundQueue的所有组名
                /// </summary>
                /// <returns>已经存在的BackgroundQueue的所有组名</returns>
                EarthView::World::Core::StringVector		getRegisterBackgroundQueueNames() const;
                /// </summary>
                /// 获取已经存在的BackgroundQueue的所有名称
                /// </summary>
                /// <returns>已经存在的BackgroundQueue的所有名称</returns>
                EarthView::World::Core::StringVector		getRegisterBackgroundGroupNames() const;

                /// </summary>
                /// 清空BackgroundQueue
                /// </summary>
                /// <returns>None</returns>
                void clearBackgroundQueues();

                /// </summary>
                /// 初始化所有BackgroundQueue
                /// </summary>
                /// <returns>None</returns>
                void initialiseAllGroups();
                /// </summary>
                /// 初始化组名里得所有BackgroundQueue
                /// </summary>
                /// <returns>None</returns>
                void initialise( EVString groupName);
                /// </summary>
                /// 卸载所有BackgroundQueue
                /// </summary>
                /// <returns>None</returns>
                void shutdownAllGroups();
                /// </summary>
                /// 卸载组名里得所有BackgroundQueue
                /// </summary>
                /// <returns>None</returns>
                void shutdown( EVString groupName) ;
            private:
                typedef vector<EarthView::World::Core::CBackgroundQueue *> BackgroundQueues;
            protected:
                BackgroundQueues  mWorkQueues;
                
            };
        }
    }
}

#endif

