#ifndef  EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CDATAEXCHANGELISTENER_H
#define  EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CDATAEXCHANGELISTENER_H

#include "spatial2ddataexchange/dataexchange.h"
#include "spatial2ddataexchange/spatial2ddataexchangeexports.h"
#include "spatialinterface/idataexchangelistener.h"
#include "core/readwritelock.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// 数据交换进程监听类
				/// </summary>
				class EV_SPATIAL2DDATAEXCHANGE_DLL CDataExchangeListener
					:public EarthView::World::Spatial::Convertor::IDataExchangeListener
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CDataExchangeListener();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CDataExchangeListener();

					/// <summary>
					/// 获取要素总数
					/// </summary>
					/// <returns>要素总数</returns>
					ev_uint32 getTotalNum();

					/// <summary>
					/// 获取已处理的要素数目
					/// </summary>
					/// <returns>已处理要素数目</returns>
					ev_uint32 getFinishedNum();

					/// <summary>
					/// 已处理的要素数+1
					/// </summary>
					/// <returns></returns>
					ev_void finishedNumAdded();

					/// <summary>
					/// 设置总要素数
					/// </summary>
					/// <param name="totalNum">总要素数</param>
					/// <returns></returns>
					ev_void setTotalNum(_in ev_uint32 totalNum);

					/// <summary>
					/// 初始化总要素数
					/// </summary>
					/// <param name="totalNum">总要素数</param>
					/// <returns></returns>
					ev_void init(_in ev_uint32 totalNum);

					/// <summary>
					/// 获取是否完成操作
					/// </summary>
					/// <returns>true/false</returns>
					ev_bool isFinished();

					/// <summary>
					/// 设置终止操作
					/// </summary>
					/// <returns></returns>
					ev_void stopProcess();

					/// <summary>
					/// 设置暂停操作
					/// </summary>
					/// <param name="value">true表示暂停，false表示继续</param>
					/// <returns>true标识设置成功，否则返回false</returns>
					ev_bool setPause(_in ev_bool value);//只有当运行时此行为才成功，否则失败

					/// <summary>
					/// 获取是否已停止
					/// </summary>
					/// <returns>true表示已停止</returns>
					ev_bool isStopped();

					/// <summary>
					/// 获取是否正在运行
					/// </summary>
					/// <returns>true表示正在运行</returns>
					ev_bool isRunning();

					/// <summary>
					/// 获取是否出错
					/// </summary>
					/// <returns>true表示出错停止</returns>
					ev_bool isError();

					/// <summary>
					/// 获取是否被暂停
					/// </summary>
					/// <returns>true表示被暂停</returns>
					ev_bool isSuspended();
				ev_private:
					CDataExchangeListener(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_void resetListener();
					ev_void setError();
					ev_void startProcess();
					ev_void setMode(ev_int32 mode);
					ev_int32 getMode();
					ev_uint32 mnFinishedNum;
					ev_uint32 mnTotalNum;
					ev_int32 mnMode;///-1 未开始；0 finished；1stopped;2running 3 error 
					volatile ev_bool mbSuspend;
					EarthView::World::Core::CReadWriteLock mLock;
					friend class CDataExchange2D;
				};
			}
		}
	}
}
#endif


