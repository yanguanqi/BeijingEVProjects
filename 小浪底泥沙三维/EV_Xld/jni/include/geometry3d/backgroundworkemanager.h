#ifndef EARTHVIEW_WORLD_GEOMETRY3D_MODELBACKGROUNDWORKER_H
#define EARTHVIEW_WORLD_GEOMETRY3D_MODELBACKGROUNDWORKER_H

#include "geometry3d/geometry3d_config.h"
#include "core/workqueue.h"
#include "core/memoryallocatedobject.h"
#include "graphic/resourcebackgroundqueue.h"
#include "graphic/framelistener.h"
#include "geometry3d/visibleobject.h"
#include "core/mutex.h"

namespace EarthView{
	namespace World{
		namespace Geometry3D{

			class CBackgroundWorkManager;

			enum BackgroundRequestType
			{
				BGRT_LOAD=1,
				BGRT_UNLOAD=2,
				BGRT_ATTACHTONODE=3,
				BGRT_DETACHFROMNODE=4,
				BGRT_ATTACHTOSCENE=5,
				BGRT_DETACHFROMSCENE=6,
				BGRT_RELEASEOBJECT=8
			};

			class EV_GEOMETRY3D_DLL CBackgroundWorkQueue : public EarthView::World::Core::CBackgroundQueue
			{
				friend class CBackgroundRequestHandler;
				friend class CBackgroundResponseHandler;
			public:
				class  EV_GEOMETRY3D_DLL BackgroundResponse : public EarthView::World::Core::CWorkQueue::ResponsePara
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					BackgroundResponse(EarthView::World::Core::CNameValuePairList* pList){}
					BackgroundResponse(){}
					virtual ~BackgroundResponse(){}
				ev_private:
					friend std::ostream &operator <<( std::ostream &o, const BackgroundResponse &res )
					{
						o << "loadentity response" <<endl;
						return o;
					}
				public:
					virtual _extfree EarthView::World::Core::CWorkQueue::ResponsePara* clone() const
					{
						BackgroundResponse* rsp = new BackgroundResponse();
						*rsp = *this;
						return rsp;
					}
				};

				class  EV_GEOMETRY3D_DLL BackgroundRequest : public EarthView::World::Core::CWorkQueue::RequestPara
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					BackgroundRequest(EarthView::World::Core::CNameValuePairList* pList){}
				public:
					CVisibleObject* mpObj;
					BackgroundRequestType mReqType;
					EarthView::World::Graphic::CNode* mpNode;
				public:
					BackgroundRequest()
					{
						mpNode = NULL;
						mpObj = NULL;
					}
					virtual ~BackgroundRequest()
					{

					}
				ev_private:
					friend std::ostream &operator <<( std::ostream &o, const BackgroundRequest &res )
					{
						o << "loadentity request" <<endl;
						return o;
					}
					virtual ev_bool operator<(const EarthView::World::Core::CWorkQueue::RequestPara& rhs) const;
				public:
					virtual _extfree EarthView::World::Core::CWorkQueue::RequestPara* clone()const
					{
						BackgroundRequest* req = new BackgroundRequest();
						*req = *this;
						return req;
					}
				};

				class  EV_GEOMETRY3D_DLL CBackgroundRequestHandler : public EarthView::World::Core::CWorkQueue::CRequestHandler
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CBackgroundRequestHandler(EarthView::World::Core::CNameValuePairList* pList){}
				private:
					EarthView::World::Geometry3D::CBackgroundWorkQueue* mpParent;
				public:
					CBackgroundRequestHandler(EarthView::World::Geometry3D::CBackgroundWorkQueue* parent);
					virtual ~CBackgroundRequestHandler();

					/// <summary>
					/// 处理当前的请求，具体请求模型数据+模型关联资源数据
					/// </summary>
					/// <param name="workqueue">当前的队列</param>
					/// <param name="request">传递的请求</param>
					/// <returns>响应</returns>
					virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);

					/// <summary>
					/// 这个hanler是否能处理当前传过来的响应
					/// </summary>
					/// <param name="workqueue">当前的队列</param>
					/// <param name="request">传递的请求</param>
					/// <returns>能否响应</returns>
					virtual EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);

				};

				class  EV_GEOMETRY3D_DLL CBackgroundResponseHandler : public EarthView::World::Core::CWorkQueue::CResponseHandler
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CBackgroundResponseHandler(EarthView::World::Core::CNameValuePairList* pList){}
				private:
					EarthView::World::Geometry3D::CBackgroundWorkQueue* mpParent;
				public:
					CBackgroundResponseHandler(EarthView::World::Geometry3D::CBackgroundWorkQueue* parent);
					virtual ~CBackgroundResponseHandler();

					/// <summary>
					/// 这个hanler是否能处理当前传过来的响应
					/// </summary>
					/// <param name="workqueue">当前的队列</param>
					/// <param name="response">传递的响应</param>
					/// <returns>是否能处理</returns>
					virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);

					/// <summary>
					/// 处理当前的响应，具体请求模型数据+模型关联资源数据
					/// </summary>
					/// <param name="workqueue">当前的队列</param>
					/// <param name="response">传递的响应</param>
					/// <returns></returns>
					virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
				};

			protected:
				virtual ev_bool canHandleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
				virtual ev_bool canHandleRequest(const EarthView::World::Core::CWorkQueue::CRequest *res, const EarthView::World::Core::CWorkQueue *srcQ);

				virtual void handleResponse(const EarthView::World::Core::CWorkQueue::CResponse *res, const EarthView::World::Core::CWorkQueue *srcQ);
				virtual EarthView::World::Core::CWorkQueue::CResponse *handleRequest(const EarthView::World::Core::CWorkQueue::CRequest *req, const EarthView::World::Core::CWorkQueue *srcQ);

			private:
				static EVString msBackgroundQueueGroupName;
				static EVString msBackgroundQueueName;

				CBackgroundRequestHandler* mpRequestHandle;
				CBackgroundResponseHandler* mpResponseHandle;

				static EarthView::World::Geometry3D::CBackgroundWorkQueue* mpSingletonPtr;

				ev_uint32 mChannel;

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CBackgroundWorkQueue();
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CBackgroundWorkQueue(EarthView::World::Core::CNameValuePairList* pList){}
			public:
				/// <summary>
				/// 获取单例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static EarthView::World::Geometry3D::CBackgroundWorkQueue* getSingletonPtr();

				/// <summary>
				/// 析构
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static void releaseSingleton();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CBackgroundWorkQueue();

				/// <summary>
				///向队列里增加一个数据的请求
				/// </summary>
				/// <param name="request">请求的内容</param>
				/// <returns>请求的结果</returns>
				virtual EarthView::World::Graphic::BackgroundProcessTicket addRequest(BackgroundRequest& request);

				/// <summary>
				/// 获取线程队列的组名
				/// </summary>
				/// <param name=""></param>
				/// <returns>线程队列的组名</returns>
				virtual EVString getGroupName() const;

				/// <summary>
				///获取线程队列的名字，不可重复
				/// </summary>
				/// <param name=""></param>
				/// <returns>线程队列的名字</returns>
				virtual EVString getName() const;

				/// <summary>
				///启动线程队列，针对同类型的channel可能有多个，所以手动指定优先级
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void initialise();

				/// <summary>
				///关闭线程队列
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void shutdown();

				/// <summary>
				///中断请求
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void abortRequest(EarthView::World::Graphic::BackgroundProcessTicket ticket);
			};

			class EV_GEOMETRY3D_DLL CBackgroundQueueListener : public EarthView::World::Graphic::CFrameListener
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CBackgroundQueueListener(EarthView::World::Core::CNameValuePairList* pList);
			private:
				CBackgroundWorkManager* mpParent;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pParent">模型管理器对象</param>
				/// <returns></returns>

				CBackgroundQueueListener(CBackgroundWorkManager* ref_pParent);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				virtual ~CBackgroundQueueListener();

				/// <summary>
				/// 帧渲染之后被调用
				/// </summary>
				/// <param name="evt">帧事件</param>
				/// <returns>成功返回true否则返回false</returns>
				virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);
			};

			class EV_GEOMETRY3D_DLL CBackgroundWorkManager : public EarthView::World::Core::CAllocatedObject
			{
				friend class CBackgroundWorkQueue;
				friend class CBackgroundQueueListener;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CBackgroundWorkManager(EarthView::World::Core::CNameValuePairList* pList){}
			private:
				CBackgroundWorkManager();

				static CBackgroundWorkManager* mpSingletonPtr;
				EarthView::World::Core::CWorkQueue* mpWorkQueue;
				CBackgroundQueueListener* mpListener;

				ev_bool mbInit;

				typedef vector<CBackgroundWorkQueue::BackgroundRequest*> RequestList;
				typedef map<CVisibleObject*, RequestList> ObjectRequestMap;
				ObjectRequestMap mObjectRequestMap;
				EarthView::World::Core::CRecursiveMutex mMtx;
			public:
				virtual ~CBackgroundWorkManager();

				static CBackgroundWorkManager* getSingletonPtr();

				static void releaseSingleton();

				void init();

				void addReqeust(CBackgroundWorkQueue::BackgroundRequest* req);

				void abortRequest(CVisibleObject* pObj);

				void syncAbortRequest(CVisibleObject* pObj);

				EarthView::World::Core::CWorkQueue* getWorkQuque();

			protected:
				ev_bool _filterRequest(CBackgroundWorkQueue::BackgroundRequest* req);
				void _removeRequest(CBackgroundWorkQueue::BackgroundRequest* req);
			};

			
		}//end namespace
	}
}
#endif