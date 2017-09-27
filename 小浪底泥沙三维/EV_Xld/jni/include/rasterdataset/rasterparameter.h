#ifndef _RASTER_PARAMETTER_H
#define _RASTER_PARAMETTER_H


#include "rasterdatasetenume.h"
#include "core/datastream.h"
#include "core/xml.h"
////#include "evgs_TypeConfig.h"
namespace EarthView
{
	namespace World
	{    
		namespace Spatial2D
		{ 
		namespace Raster
		{        
			    class CRasterBand;
			     /************************************************************************/
				/*   CBandHistogram                                                       */
				/************************************************************************/
				///<summary>
				///CBandHistogram
				///波段统计直方图
				///</summary>
			    class EV_RASTER_DLL CBandHistogram: public EarthView::World::Core::CAllocatedObject
				{
				ev_private:
				/// <summary>
				/// 键值对构造函数
				/// </summary>
				///<returns></returns>
				CBandHistogram(_in EarthView::World::Core::CNameValuePairList* pList)
				{
					m_pdfFraquaency = 0;
					m_iMax          = 0;  
					m_iMin          = 0; 
				}
				public:

					 ///<summary>
					 ///析构函数
					 ///</summary>
					 virtual ~CBandHistogram();
                     
					 ///<summary>
					 ///获取相应指针频率指针
					 ///</summary>
					 virtual const ev_int32*getGrayFraquaency() const;
					 /// <summary>
				    /// 转为流
				    /// </summary>
				    /// <param name="stream">流对象</param>
				    /// <returns></returns>
				    ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
					/// <summary>
				    /// 从数据流恢复
				    /// </summary>
				    /// <param name="stream">流对象</param>
				    /// <returns></returns>
				    ev_void fromStream( EarthView::World::Core::CDataStream& stream );
					EarthView::World::Core::CXmlElement toXmlElement() const; 
					ev_void fromXmlElement(_in EarthView::World::Core::CXmlElement& element);
				protected:
                      ///<summary>
					 ///默认构造函数
					 ///</summary>
					 CBandHistogram();
				private:
					 /// <summary>
				     /// 赋值构造函数
				     /// </summary>
				     /// <param name="iMax">灰度最带值</param>
				     /// <param name="iMin">灰度最小值</param>
                     CBandHistogram(_in ev_int32 iMax,_in ev_int32 iMin);
                     
					 /// <summary>
				     /// 等于操作符,没有实现相应的功能
				     /// </summary>
					 CBandHistogram &operator=(const CBandHistogram &objHistogram);
					 /// <summary>
				     /// 拷贝构造函数,没有实现相应的功能
				     /// </summary>
					 CBandHistogram(const CBandHistogram &objHistogram);
				 protected:
					ev_int32 *m_pdfFraquaency; ///记录灰度频率的指针，维度为Max - min+1
					ev_int32  m_iMax;      ///灰度的最大值
					ev_int32  m_iMin;      ///灰度的最小值
                    friend class CRasterBand;
					friend class CDBRasterBand;

				};
                
				 /************************************************************************/
				/*   CBandStatisticsInfo                                                  */
				/************************************************************************/
                 ///<summary>
				///CBandStatisticsInfo
				///波段统计信息 最大值 最小值 均值 方差
				///</summary>
				class EV_RASTER_DLL CBandStatisticsInfo: public EarthView::World::Core::CAllocatedObject
				{
					ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CBandStatisticsInfo(_in EarthView::World::Core::CNameValuePairList* pList)
					{
						m_dfmax  = 0;  
					    m_dfmin  = 0;   
                        m_dfmean = 0;   
					    m_dfstddev = 0; 
					}
				public:

					 ///<summary>
					 ///默认析构函数
					 ///</summary>
					virtual ~CBandStatisticsInfo();
                     
					 ///<summary>
					 ///获取最大值
					 ///</summary>
					 ///<returns>灰度最大值</returns>
					
					virtual const ev_real64 getMax()const;

					 ///<summary>
					 ///获取最小值
					 ///</summary>
					 ///<returns>灰度最小值</returns>
					  
					virtual const ev_real64 getMin()const;

					 ///<summary>
					 ///获取最平均值
					 ///</summary>
					 ///<returns>平均值</returns>
					  
                    virtual const ev_real64 getMean() const;

					 ///<summary>
					 ///获取最标准差
					 ///</summary>
					 ///<returns>标准差</returns>
					  
					virtual const ev_real64 getStdDev()const;
					/// <summary>
				    /// 转为流
				    /// </summary>
				    /// <param name="stream">流对象</param>
				    /// <returns></returns>
				    ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
					/// <summary>
				    /// 从数据流恢复
				    /// </summary>
				    /// <param name="stream">流对象</param>
				    /// <returns></returns>
				    ev_void fromStream( EarthView::World::Core::CDataStream& stream );
					EarthView::World::Core::CXmlElement toXmlElement() const; 
					ev_void fromXmlElement(_in EarthView::World::Core::CXmlElement& element);
				protected:
                      ///<summary>
					 ///默认构造函数
					 ///</summary>
					CBandStatisticsInfo();
				private:
					 ///<summary>
					 ///赋值构造函数
					 ///</summary>
					 /// <param name="dfMax">灰度最带值</param>
				     /// <param name="dfMin">灰度最小值</param>
					 /// <param name="dfMean">灰度均值</param>
					 /// <param name="stdDev">标准差</param>
					  
					CBandStatisticsInfo(_in ev_real64 dfMax,_in ev_real64 dfMin,_in ev_real64 dfMean,_in ev_real64 dfstdDev);
				protected:
					ev_real64 m_dfmax;    ///最大值
					ev_real64 m_dfmin;    ///最小值
                    ev_real64 m_dfmean;   ///均值
					ev_real64 m_dfstddev; ///标准差

                    friend class CRasterBand;
					friend class CDBRasterBand;

				};
               
                /************************************************************************/
				/*   EarthView::World::Spatial2D::Raster::CDataTime                                                          */
				/************************************************************************/
                 ///<summary>
				///EarthView::World::Spatial2D::Raster::CDataTime
				///时间结构信息 
				///</summary>
				class EV_RASTER_DLL CDataTime: public EarthView::World::Core::CAllocatedObject
				{
					ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CDataTime(_in EarthView::World::Core::CNameValuePairList* pList);
					
				public:
					///<summary>
					///默认构造函数
					///</summary>
					CDataTime();

					///<summary>
					///默认析构函数
					///</summary>
					~CDataTime();

					///<summary>
					///赋值构造函数
					///</summary>
                    /// <param name="iYear">年</param>
				    /// <param name="iMonth">月</param>
					/// <param name="iDate">日</param>
					/// <param name="iHour">时</param>
					/// <param name="iMinute">分</param>
					 
					CDataTime(_in ev_int32 iYear,_in ev_int32 iMonth, _in ev_int32 iDate, _in ev_int32 iHour, _in ev_int32 iMinute);

					///<summary>
					///获取年份
					///</summary>
					///<retrun> 年份</returns>
					 
					const ev_int32 getYear()const;

					///<summary>
					///获取月份
					///</summary>
					///<retrun> 月份</returns>
					
					const ev_int32 getMonth()const;
					///<summary>
					///获取日期
					 ///</summary>
					///<retrun> 日期</returns>
					 
					const ev_int32 getDate()const;

					///<summary>
					///获取小时
					///</summary>
					///<retrun> 分钟</returns>
					
					const ev_int32 getHour()const;

					///<summary>
					///获取分钟
					///</summary>
					///<retrun> 小时</returns>
					
					const ev_int32 getMinute()const;
				private:
					ev_int32 m_nYear;   ///年
					ev_int32 m_nMonth;  ///月
					ev_int32 m_ndate;   ///日
					ev_int32 m_nHour;   ///时
					ev_int32 m_nMinute; ///分
				};
                
				/************************************************************************/
				/*   EarthView::World::Spatial2D::Raster::CSensorInfo                                                          */
				/************************************************************************/
                 ///<summary>
				///EarthView::World::Spatial2D::Raster::CSensorInfo
				///时间结构信息 
				///</summary>
				class EV_RASTER_DLL CSensorInfo: public EarthView::World::Core::CAllocatedObject
				{
					ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CSensorInfo(_in EarthView::World::Core::CNameValuePairList* pList);
					
				public:

					///<summary>
					///默认构造函数
					///</summary>
					CSensorInfo();
                    
					///<summary>
					///默认析构函数
					///</summary>
					virtual ~CSensorInfo();

					///<summary>
					///赋值构造函数
					///</summary>
					/// <param name="strRasterFormat">图像数据的编码格式如JPEG</param>
				    /// <param name="strSensorName">传感器名称</param>
					/// <param name="objdateTime">过境时间</param>
					 
					CSensorInfo(_in EVString strRasterFormat,_in  EVString strSensorName, _in const EarthView::World::Spatial2D::Raster::CDataTime&objdateTime);
                    ///<summary>
					///赋值函数
					///</summary>
					/// <param name="objsensor">传感器信息对象</param>
					///<returns>传感器信息对象</returns>
					
                    EarthView::World::Spatial2D::Raster::CSensorInfo&operator=(const EarthView::World::Spatial2D::Raster::CSensorInfo&objsensor);

					///<summary>
					///拷贝构造函数
					 ///</summary>
					/// <param name="objsensor">传感器信息对象</param>
					 
                    CSensorInfo(const CSensorInfo&objsensor);
                    
					///<summary>
					///获取编码格式字符串 如“JPEG”
					///</summary>
					/// <returns>图像数据的编码格式如JPEG</returns>
					
					virtual const EVString getRasterFormat()const;
					///<summary>
					///获取传感器名称
					///</summary>
					/// <returns>传感器名称</returns>
					
					virtual const EVString getSensorName()const;
					///<summary>
					///获取数据采集时间,外部不能释放
					///</summary>
					/// <returns>传感器采集数据时间</returns>
					
					virtual const EarthView::World::Spatial2D::Raster::CDataTime&getDataTime()const;
				protected:
					EVString m_strRasterFormat; ///图像数据的编码格式 JPEG tif等
					EVString m_strSensorName;   ///传感器名称
					EarthView::World::Spatial2D::Raster::CDataTime m_objDateTime; ///传感器过境时间

				};
               
		}///Raster
		}
	}///
}///EarthView
#endif ///_RASTER_PARAMETTER_H
