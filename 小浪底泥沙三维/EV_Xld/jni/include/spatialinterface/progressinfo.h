#ifndef _PROGRESS_EV_H_
#define _PROGRESS_EV_H_

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"


namespace EarthView
{
	namespace World
	{  
		namespace Spatial2D
		{ 
			namespace Raster
			{    
				//////进度条相关信息函数
#ifdef __cplusplus
		/*		extern "C" 
				{*/
#endif//////__cplusplus
					typedef int(__stdcall *EVgsProgressFunc)(double dfComplete ,const char *pszMessage, void *pProgressArg);
					/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifdef EV_OS_WIN
					ev_int32 __declspec(dllexport) __stdcall EVgsTermProgress( _in ev_real64 dfComplete, _in const ev_char *pszMessage, _inout ev_void *pProgressArg);
#else
					EV_INTERFACE_DLL ev_int32  EVgsTermProgress( _in ev_real64 dfComplete, _in const ev_char *pszMessage, _inout ev_void *pProgressArg);
#endif
#ifdef __cplusplus
				//}
#endif///////__cplusplus


				/************************************************************************/
				/*   CProgressInfo                                                       */
				/************************************************************************/
				///<summary>
				///CProgressInfo
				///进度条对象
				///</summary>
				class EV_INTERFACE_DLL CProgressInfo: public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CProgressInfo(_in EarthView::World::Core::CNameValuePairList* pList)
					{
						m_dfPercent = 0;
						m_strMessage = "";
					}

				public:
					///<summary>
					///默构造函数
					/// </summary>
					CProgressInfo();
					///<summary>
					///默认析构函数
					/// </summary>
					~CProgressInfo();
					///<summary>
					///获取已完成百分比
					/// </summary>
					///<returns>已经完成百分比</returns>
					const ev_real64 getPercent()const;
					///<summary>
					///获取执行期间信息
					/// </summary>
					///<returns>期间信息</returns>
					const EVString    getMessage()const;

					///<summary>
					///设置完成百分比
					/// </summary>
					/// <param name="dfPercent">百分比</param>

					ev_void setPercent(_in ev_real64 dfPercent);
					///<summary>
					///设置执行期间相关信息
					/// </summary>
					/// <param name="dfPercent">期间信息</param>
					ev_void setMessage(_in const EVString &strMessage);
					///<summary>
					///使进度条类回到初始状态
					/// </summary>
					ev_void reset();
				private:
					ev_real64 m_dfPercent; ///百分比
					EVString    m_strMessage;///执行期间相关信息

				};
			}
		}
	}///World
}

#endif//_PROGRESS_EV_H_
