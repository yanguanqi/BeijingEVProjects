#ifndef __ResourceBackgroundQueue_H__
#define __ResourceBackgroundQueue_H__
#include "graphic/graphic_config.h"
#include "resource.h"
#include "core/workqueue.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            //// Identifier of a background process
            typedef ev_uint64 BackgroundProcessTicket;
            /** Encapsulates the result of a background queue request */
            class EV_GRAPHIC_DLL BackgroundProcessResult : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                BackgroundProcessResult(_in EarthView::World::Core::CNameValuePairList *pList) : error(false) {}
                //// Whether an error occurred
                ev_bool error;
                //// EarthView::World::Core::CAny messages from the process
                EVString message;
                BackgroundProcessResult() : error(false) {}
            };

            /** This class is used to perform CResource operations in a
            	background thread.
            @remarks
            	All these requests are now queued via CRoot::getWorkQueue in order
            	to share the thread pool amongst all background tasks. You should therefore
            	refer to that class for configuring the behaviour of the threads
            	themselves, this class merely provides an interface that is specific
            	to resource loading around this common functionality.
            @par
            	The general approach here is that on requesting a background resource
            	process, your request is placed on a queue ready for the background
            	thread to be picked up, and you will get a 'ticket' back, identifying
            	the request. Your call will then return and your thread can
            	proceed, knowing that at some point in the background the operation will
            	be performed. In it's own thread, the resource operation will be
            	performed, and once finished the ticket will be marked as complete.
            	You can check the status of tickets by calling isProcessComplete()
            	from your queueing thread.
            */
            class EV_GRAPHIC_DLL CResourceBackgroundQueue : public EarthView::World::Core::CBackgroundQueue
            {
                friend class CResourceBackgroundQueueInternalRequestHandler;
                friend class CResourceBackgroundQueueInternalResponseHandler;
            public:
                static EVString msBackgroundQueueGroupName;
                static EVString msBackgroundQueueName;
                virtual EVString getGroupName() const;
                virtual EVString getName() const;

            private:
                static EarthView::World::Graphic::CResourceBackgroundQueue *ms_Singleton;
            public:
                static EarthView::World::Graphic::CResourceBackgroundQueue &getSingleton();
                static EarthView::World::Graphic::CResourceBackgroundQueue *getSingletonPtr();
                virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
                virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest *res, const EarthView::World::Core::CWorkQueue *srcQ);
            public:
                class EV_GRAPHIC_DLL CResourceBackgroundQueueInternalRequestHandler : public EarthView::World::Core::CWorkQueue::CRequestHandler
                {
                ev_private:
                    CResourceBackgroundQueueInternalRequestHandler(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    EarthView::World::Graphic::CResourceBackgroundQueue *mParent;
                public:
                    CResourceBackgroundQueueInternalRequestHandler(CResourceBackgroundQueue *parent);
                    ~CResourceBackgroundQueueInternalRequestHandler() {}
                    //// Implementation for EarthView::World::Core::CWorkQueue::CRequestHandler
                    ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest *res, const EarthView::World::Core::CWorkQueue *srcQ);
                    //// Implementation for EarthView::World::Core::CWorkQueue::CRequestHandler
                    EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);

                };
                class EV_GRAPHIC_DLL CResourceBackgroundQueueInternalResponseHandler : public EarthView::World::Core::CWorkQueue::CResponseHandler
                {
                ev_private:
                    CResourceBackgroundQueueInternalResponseHandler(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    EarthView::World::Graphic::CResourceBackgroundQueue *mParent;
                public:
                    CResourceBackgroundQueueInternalResponseHandler(CResourceBackgroundQueue *parent);
                    ~CResourceBackgroundQueueInternalResponseHandler() {}
                    ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
                    //// Implementation for EarthView::World::Core::CWorkQueue::CResponseHandler
                    void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
                };

                virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
                virtual EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);

            protected:
                EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler *m_pRequestHandler;
                EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler *m_pResponseHandler;
            public:
                virtual const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler *getRequestHandlerPtr()
                {
                    return m_pRequestHandler;
                }
                ///virtual const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler& getRequestHandler() {return *m_pRequestHandler;}
                virtual const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler *getResponseHandlerPtr()
                {
                    return m_pResponseHandler;
                }
                ///virtual const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler& getResponseHandler(){return *m_pResponseHandler;}
            public:
                /** This abstract listener interface lets you get notifications of
                completed background processes instead of having to poll ticket
                statuses.
                @note
                For simplicity, these callbacks are not issued direct from the background
                loading thread, they are queued themselves to be sent from the main thread
                so that you don't have to be concerned about thread safety.
                */
                class EV_GRAPHIC_DLL CResourceBackgroundQueueListener : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CResourceBackgroundQueueListener(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    /** Called when a requested operation completes, queued into main thread.
                    @note
                    	For simplicity, this callback is not issued direct from the background
                    	loading thread, it is queued to be sent from the main thread
                    	so that you don't have to be concerned about thread safety.
                    */
                    CResourceBackgroundQueueListener() {}

                    virtual void operationCompleted(BackgroundProcessTicket ticket, const EarthView::World::Graphic::BackgroundProcessResult &result)
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }
                    //// Need virtual destructor in case subclasses use it
                    virtual ~CResourceBackgroundQueueListener() {}
                };
            protected:
                ev_uint16 mWorkQueueChannel;
                /** Enumerates the type of requests */
                enum RequestType
                {
                    RT_INITIALISE_GROUP = 0,
                    RT_INITIALISE_ALL_GROUPS = 1,
                    RT_PREPARE_GROUP = 2,
                    RT_PREPARE_RESOURCE = 3,
                    RT_LOAD_GROUP = 4,
                    RT_LOAD_RESOURCE = 5,
                    RT_UNLOAD_GROUP = 6,
                    RT_UNLOAD_RESOURCE = 7
                };
                /** Encapsulates a queued request for the background queue */
                class ResourceRequest : public EarthView::World::Core::CWorkQueue::RequestPara
                {
                public:
                    RequestType type;
                    EVString resourceName;
                    ResourceHandle resourceHandle;
                    EVString resourceType;
                    EVString groupName;
                    ev_bool isManual;
                    EarthView::World::Graphic::CManualResourceLoader *loader;
                    EarthView::World::Core::NameValuePairList *loadParams;
                    EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener;
                    EarthView::World::Graphic::BackgroundProcessResult result;
                    EV_GRAPHIC_DLL friend std::ostream &operator<<(std::ostream &o, const ResourceRequest &r)
                    {
                        return o;
                    }
                public:
                    virtual EarthView::World::Core::CWorkQueue::RequestPara* clone() const 
                    {
                        ResourceRequest* req = new ResourceRequest();
                        *req = *this;
                        return req;
                    }                    
                };
                typedef set<BackgroundProcessTicket> OutstandingRequestSet;
                OutstandingRequestSet mOutstandingRequestSet;
                //// Struct that holds details of queued notifications
                class ResourceResponse : public EarthView::World::Core::CWorkQueue::ResponsePara
                {
                protected:
                    ResourceResponse()
                    {}
                public:
                    ResourceResponse(ResourcePtr r, const ResourceRequest &req)
                        : resource(r), request(req)
                    {}

                    ResourcePtr resource;
                    ResourceRequest request;
                    EV_GRAPHIC_DLL friend std::ostream &operator<<(std::ostream &o, const ResourceResponse &r)
                    {
                        return o;
                    }

                public:
                    virtual EarthView::World::Core::CWorkQueue::ResponsePara* clone() const 
                    {
                        ResourceResponse* resp = new ResourceResponse();
                        *resp = *this;
                        return resp;
                    }
                };
                BackgroundProcessTicket addRequest(ResourceRequest &req);
            public:
                CResourceBackgroundQueue();
            ev_private:
                CResourceBackgroundQueue(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CResourceBackgroundQueue();
                /** Initialise the background queue system.
                @note Called automatically by CRoot::initialise.
                */
                virtual void initialise();
                /** Shut down the background queue system.
                @note Called automatically by CRoot::shutdown.
                */
                virtual void shutdown();
                /** Initialise a resource group in the background.
                @see CResourceGroupManager::initialiseResourceGroup
                @param name The name of the resource group to initialise
                @param listener Optional callback interface, take note of warnings in
                	the header and only use if you understand them.
                @returns Ticket identifying the request, use isProcessComplete() to
                */
                virtual BackgroundProcessTicket initialiseResourceGroup(
                    const EVString &name, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener);
                virtual BackgroundProcessTicket initialiseResourceGroup(const EVString &name);
                /** Initialise all resource groups which are yet to be initialised in
                	the background.
                @see CResourceGroupManager::intialiseResourceGroup
                @param listener Optional callback interface, take note of warnings in
                	the header and only use if you understand them.
                @returns Ticket identifying the request, use isProcessComplete() to
                */
                virtual BackgroundProcessTicket initialiseAllResourceGroups( EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener);
                virtual BackgroundProcessTicket initialiseAllResourceGroups();
                /** Prepares a resource group in the background.
                @see CResourceGroupManager::prepareResourceGroup
                @param name The name of the resource group to prepare
                @param listener Optional callback interface, take note of warnings in
                	the header and only use if you understand them.
                @returns Ticket identifying the request, use isProcessComplete() to
                */
                virtual BackgroundProcessTicket prepareResourceGroup(const EVString &name, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener );
                virtual BackgroundProcessTicket prepareResourceGroup(const EVString &name);
                /** Loads a resource group in the background.
                @see CResourceGroupManager::loadResourceGroup
                @param name The name of the resource group to load
                @param listener Optional callback interface, take note of warnings in
                	the header and only use if you understand them.
                @returns Ticket identifying the request, use isProcessComplete() to
                */
                virtual BackgroundProcessTicket loadResourceGroup(const EVString &name, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener);
                virtual BackgroundProcessTicket loadResourceGroup(const EVString &name);
                /** Unload a single resource in the background.
                @see CResourceManager::unload
                @param resType The type of the resource
                	(from CResourceManager::getResourceType())
                @param name The name of the CResource
                */
                virtual BackgroundProcessTicket unload(const EVString &resType, const EVString &name, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener);
                virtual BackgroundProcessTicket unload(const EVString &resType, const EVString &name);
                /** Unload a single resource in the background.
                @see CResourceManager::unload
                @param resType The type of the resource
                	(from CResourceManager::getResourceType())
                @param handle Handle to the resource
                */
                virtual BackgroundProcessTicket unload(const EVString &resType, ResourceHandle handle, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener);
                virtual BackgroundProcessTicket unload(const EVString &resType, ResourceHandle handle);
                /** Unloads a resource group in the background.
                @see CResourceGroupManager::unloadResourceGroup
                @param name The name of the resource group to load
                @returns Ticket identifying the request, use isProcessComplete() to
                */
                virtual BackgroundProcessTicket unloadResourceGroup(const EVString &name, EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener );
                virtual BackgroundProcessTicket unloadResourceGroup(const EVString &name);

                /** Prepare a single resource in the background.
                @see CResourceManager::prepare
                @param resType The type of the resource
                	(from CResourceManager::getResourceType())
                @param name The name of the CResource
                @param group The resource group to which this resource will belong
                @param isManual Is the resource to be manually loaded? If so, you should
                	provide a value for the loader parameter
                @param loader The manual loader which is to perform the required actions
                	when this resource is loaded; only applicable when you specify true
                	for the previous parameter. NOTE: must be thread safe!!
                @param loadParams Optional pointer to a list of name/value pairs
                    containing loading parameters for this type of resource. Remember
                	that this must have a lifespan longer than the return of this call!
                */
                virtual BackgroundProcessTicket prepare(
                    const EVString &resType, const EVString &name,
                    const EVString &group, ev_bool isManual ,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                    const EarthView::World::Core::NameValuePairList *loadParams,
                    EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener);
                virtual BackgroundProcessTicket prepare(
                    const EVString &resType, const EVString &name,
                    const EVString &group, ev_bool isManual,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader ,
                    const EarthView::World::Core::NameValuePairList *loadParams);
                virtual BackgroundProcessTicket prepare(
                    const EVString &resType, const EVString &name,
                    const EVString &group, ev_bool isManual ,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader );
                virtual BackgroundProcessTicket prepare(
                    const EVString &resType, const EVString &name,
                    const EVString &group, ev_bool isManual);
                virtual BackgroundProcessTicket prepare(
                    const EVString &resType, const EVString &name,
                    const EVString &group);
                /** Load a single resource in the background.
                @see CResourceManager::load
                @param resType The type of the resource
                	(from CResourceManager::getResourceType())
                @param name The name of the CResource
                @param group The resource group to which this resource will belong
                @param isManual Is the resource to be manually loaded? If so, you should
                	provide a value for the loader parameter
                @param loader The manual loader which is to perform the required actions
                	when this resource is loaded; only applicable when you specify true
                	for the previous parameter. NOTE: must be thread safe!!
                @param loadParams Optional pointer to a list of name/value pairs
                    containing loading parameters for this type of resource. Remember
                	that this must have a lifespan longer than the return of this call!
                */
                virtual BackgroundProcessTicket load(
                    const EVString &resType, const EVString &name,
                    const EVString &group, ev_bool isManual,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                    const EarthView::World::Core::NameValuePairList *loadParams ,
                    EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener *listener);
                virtual BackgroundProcessTicket load(
                    const EVString &resType, const EVString &name,
                    const EVString &group, ev_bool isManual,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader ,
                    const EarthView::World::Core::NameValuePairList *loadParams);
                virtual BackgroundProcessTicket load(
                    const EVString &resType, const EVString &name,
                    const EVString &group, ev_bool isManual ,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                virtual BackgroundProcessTicket load(
                    const EVString &resType, const EVString &name,
                    const EVString &group, ev_bool isManual);
                virtual BackgroundProcessTicket load(
                    const EVString &resType, const EVString &name,
                    const EVString &group);
                /** Returns whether a previously queued process has completed or not.
                @remarks
                	This method of checking that a background process has completed is
                	the 'polling' approach. Each queued method takes an optional listener
                	parameter to allow you to register a callback instead, which is
                	arguably more efficient.
                @param ticket The ticket which was returned when the process was queued
                @returns true if process has completed (or if the ticket is
                	unrecognised), false otherwise
                @note Tickets are not stored once complete so do not accumulate over
                	time.
                This is why a non-existent ticket will return 'true'.
                */
                virtual ev_bool isProcessComplete(BackgroundProcessTicket ticket);
                /** Aborts background process.
                */
                void abortRequest( BackgroundProcessTicket ticket );




            };
            /** @} */
            /** @} */
        }
    }
}

#endif

