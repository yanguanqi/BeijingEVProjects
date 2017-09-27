#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_MONITORPARAMETER_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_MONITORPARAMETER_H

#include "color/colorexports.h"
#include "core/memoryallocatedobject.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 显示器参数类，用于CIELab颜色空间的转换
			/// 提供方法如下：
			/// 判断是否有效值、判断加载文件是否成功、获取与设置gamma值、深度Copy对象
			/// 获取与设置Red点的X、Y值，获取与设置Green点的X、Y值，获取与设置Blue点的X、Y值，
			///	获取与设置White点的X、Y值
			/// </summary>
			class EV_COLOR_DLL CMonitorParameter:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMonitorParameter();

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="filePath">文件路径</param>
				/// <returns></returns>
				CMonitorParameter( EVString filePath );


				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CMonitorParameter();

				/// <summary>
				/// 判断是否有效值
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回true，则有效；否则无效</returns>
				ev_bool isValid() const;

				/// <summary>
				/// 加载文件
				/// </summary>
				/// <param name="filePath">文件路径</param>
				/// <returns>返回true，则加载成功；否则失败</returns>
				ev_bool load( EVString filePath );

				/*************************************************************
				*  \描述：写入到二进制流
				*  \参数：[ev_void]
				*  \返回：错误类型
				*  \备注: 
				***************************************************************/
				//virtual ev_void toStream(EVDataStream& stream) const;///

				/// <summary>
				/// 获取gamma值
				/// </summary>
				/// <param name=""></param>
				/// <returns>gamma值</returns>
				ev_real64 getGamma() const;

				/// <summary>
				/// 获取Red点的X值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Red点的X值</returns>
				ev_real64 getRedPointX() const;

				/// <summary>
				/// 获取Red点的Y值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Red点的Y值</returns>
				ev_real64 getRedPointY() const;

				/// <summary>
				/// 获取Green点的X值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Green点的X值</returns>
				ev_real64 getGreenPointX() const;

				/// <summary>
				/// 获取Green点的Y值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Green点的Y值</returns>
				ev_real64 getGreenPointY() const;

				/// <summary>
				/// 获取Blue点的X值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Blue点的X值</returns>
				ev_real64 getBluePointX() const;

				/// <summary>
				/// 获取Blue点的Y值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Blue点的Y值</returns>
				ev_real64 getBluePointY() const;

				/// <summary>
				/// 获取White点的X值
				/// </summary>
				/// <param name=""></param>
				/// <returns>White点的X值</returns>
				ev_real64 getWhitePointX() const;

				/// <summary>
				/// 获取White点的Y值
				/// </summary>
				/// <param name=""></param>
				/// <returns>White点的Y值</returns>
				ev_real64 getWhitePointY() const;

				/// <summary>
				/// 设置gamma值
				/// </summary>
				/// <param name="value">gamma值</param>
				/// <returns></returns>
				ev_void setGamma(ev_real64 value);

				/// <summary>
				/// 设置Red点的X值
				/// </summary>
				/// <param name="value">Red点的X值</param>
				/// <returns></returns>
				ev_void setRedPointX(ev_real64 value);

				/// <summary>
				/// 设置Red点的Y值
				/// </summary>
				/// <param name="value">Red点的Y值</param>
				/// <returns></returns>
				ev_void setRedPointY(ev_real64 value);

				/// <summary>
				/// 设置Green点的X值
				/// </summary>
				/// <param name="value">Green点的X值</param>
				/// <returns></returns>
				ev_void setGreenPointX(ev_real64 value);

				/// <summary>
				/// 设置Green点的Y值
				/// </summary>
				/// <param name="value">Green点的Y值</param>
				/// <returns></returns>
				ev_void setGreenPointY(ev_real64 value);

				/// <summary>
				/// 设置Blue点的X值
				/// </summary>
				/// <param name="value">Blue点的X值</param>
				/// <returns></returns>
				ev_void setBluePointX(ev_real64 value);

				/// <summary>
				/// 设置Blue点的Y值
				/// </summary>
				/// <param name="value">Blue点的Y值</param>
				/// <returns></returns>
				ev_void setBluePointY(ev_real64 value);

				/// <summary>
				/// 设置White点的X值
				/// </summary>
				/// <param name="value">White点的X值</param>
				/// <returns></returns>
				ev_void setWhitePointX(ev_real64 value);

				/// <summary>
				/// 设置White点的Y值
				/// </summary>
				/// <param name="value">White点的Y值</param>
				/// <returns></returns>
				ev_void setWhitePointY(ev_real64 value);

				/// <summary>
				/// 深度Copy对象
				/// 内存中不创建对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>EarthView::World::Spatial::Display::CMonitorParameter对象</returns>
				virtual EarthView::World::Spatial::Display::CMonitorParameter* clone() const;
			ev_private:
				CMonitorParameter( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 伽玛值
				/// </summary>
				ev_real64 m_dfGamma;

				/// <summary>
				/// 红点X值
				/// </summary>
				ev_real64 m_dfRedPointX;

				/// <summary>
				/// 红点Y值
				/// </summary>
				ev_real64 m_dfRedPointY;

				/// <summary>
				/// 绿点X值
				/// </summary>
				ev_real64 m_dfGreenPointX;

				/// <summary>
				/// 绿点Y值
				/// </summary>
				ev_real64 m_dfGreenPointY;

				/// <summary>
				/// 蓝点X值
				/// </summary>
				ev_real64 m_dfBluePointX;

				/// <summary>
				/// 蓝点Y值
				/// </summary>
				ev_real64 m_dfBluePointY;

				/// <summary>
				/// 白点X值
				/// </summary>
				ev_real64 m_dfWhitePointX;

				/// <summary>
				/// 白点Y值
				/// </summary>
				ev_real64 m_dfWhitePointY;
			private:
				C_DISABLE_COPY( CMonitorParameter );
			};
		}
		}
	}
}
#endif

