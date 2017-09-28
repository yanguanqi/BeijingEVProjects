
#if !defined(_RASTER_DATA_SET_H)
#define _RASTER_DATA_SET_H


#include "core/stdheaders.h"

#include "spatialinterface/idatasource.h"
#include "spatialinterface/irasterdataset.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/ienvelope.h"
#include "color/colortable.h"
#include "rasterdatasetenume.h"

typedef ev_void RasterDatasetH;

namespace EarthView
{
	namespace World
	{   
		namespace Spatial2D
		{ 
		namespace Raster
		{       
				 //////
			    class CBandHistogram;
				class CBandStatisticsInfo;
				class CAffineTransform;
				class CSensorInfo;
				class CRasterDataSet;
				class CReprojectAlg;
				class CProgressInfo;
				class CRasterBlock;
				class CRasterHistogram;
				class CRasterAttributeTable;

                /************************************************************************/
				/*   EarthView::World::Spatial2D::Raster::CRasterBand                                                       */
				/************************************************************************/
				///<summary>
				///EarthView::World::Spatial2D::Raster::CRasterBand
				///波段对象
				///</summary>
			   class EV_RASTER_DLL CRasterBand: public EarthView::World::Core::CAllocatedObject
			   {
				 ev_private:
				/// <summary>
				/// 键值对构造函数
				/// </summary>
				///<returns></returns>
		        CRasterBand(_in EarthView::World::Core::CNameValuePairList* pList);
			   public:

					///<summary>
				   ///默认析构函数
				   ///</summary>
					virtual ~CRasterBand();
                    ///<summary>
				   ///获取波段统计直方图
					///<returns>波段统计对象指针</returns>
				   ///</summary>
					virtual const EarthView::World::Spatial2D::Raster::CBandHistogram*getBandHistogram();

					virtual const EarthView::World::Spatial2D::Raster::CRasterHistogram* getHistogram();

					virtual const EarthView::World::Spatial::Display::CColorTable* getColorTable();

					virtual const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* getAttributeTable();
					 ///<summary>
				    ///获取波段统计参数
					///</summary>
					///<returns>波段统计参数对象指针</returns>
				   
					virtual const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*getBandStatistics(ev_bool isApprox);

                    ///<summary>
				    ///读写图像数据指针
					///</summary>
					/// <param name="bFlag">0表示读，1表示写</param>
					/// <param name="pDstBuffer">外部开辟的内存块</param>
					/// <param name="iOffsetX">x方向 像素坐标偏移</param>
					/// <param name="iOffsetY">y方向 像素坐标偏移</param>
					/// <param name="iWidth">x方向 宽度</param>
					/// <param name="iHeight">y方向 高度</param>
					/// <param name="eDataType">数据类型</param>
				    ///<returns>0失败，1成功</returns>
				   
					virtual ev_bool iRasterIO(_in EarthView::World::Spatial2D::Raster::EVIOFlag bFlag,_inout ev_void*pDstBuffer,_in ev_int32 iOffsetX,_in ev_int32 iOffsetY,_in ev_int32 iWidth,_in ev_int32 iHeight,_in EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType,
						              _in ev_int32 iBufferX,_in ev_int32 iBufferY);
                   ///<summary>
				   ///栅格数据集,外部不能释放这个指针
					///</summary>
				   ///<returns>EarthView::World::Spatial2D::Raster::CRasterDataSet*dataset</returns>
				   
					virtual EarthView::World::Spatial2D::Raster::CRasterDataSet*asDataset();
                   
					///<summary>
					///设置NodataValue
					///</summary>
					/// <param name="dfNodataValue">影像数据的无效值</param>
					
					virtual ev_void setNodatavalue(_in ev_real64 dfNodataValue);
                    
					///<summary>
					///获取NodataValue
					///</summary>
					/// <param name="dfNodataValue">影像数据的无效值,-1表示获取失败</param>
					///<returns>影像的无效值</returns>
					
					virtual const ev_real64 getNodatavalue()const;
			   private:
				   ///<summary>
				   ///计算波段的直方图
				  ///</summary>
				   ev_void computeStatisticsAndHistogram();
				   ///<summary>
				   ///赋值构造函数
				   ///</summary>
                    CRasterBand(RasterDatasetH*dataset,ev_int32 iband);
				protected:
					///<summary>
					///默认构造函数
					///</summary>
					CRasterBand();
				   EarthView::World::Spatial2D::Raster::CBandHistogram     *m_pObjhistogram; ///频率直方图
				   EarthView::World::Spatial2D::Raster::CRasterHistogram*      m_pHistogram;
                   EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*   m_pObjStatistics;///统计信息类
				   EarthView::World::Spatial::Display::CColorTable*           m_pColorTable;
				   EarthView::World::Spatial2D::Raster::CRasterAttributeTable*  m_pAttributeTable;
				   EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*    m_pApproxStatistics;  //近似统计值
				   RasterDatasetH*     m_pDataSet;      ///波段数据指针
				   ev_int32            m_iBand;          ///该波段之波段索引
                   EarthView::World::Spatial2D::Raster::CRasterDataSet     *m_prasterDataset; ///栅格数据集对象
				   friend class CRasterDataSet;///
			   };

			   /************************************************************************/
				/*   EarthView::World::Spatial2D::Raster::CRasterDataSet                                                     */
				/************************************************************************/
				///<summary>
				///EarthView::World::Spatial2D::Raster::CRasterDataSet
				///栅格数据集对象
				///</summary>
                class EV_RASTER_DLL CRasterDataSet: public EarthView::World::Spatial::GeoDataset::IRasterDataset
				{
					ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CRasterDataSet(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
                    ///<summary>
					///默认析构函数
					///</summary>
                    ~CRasterDataSet();
					/////////////////////////////////////////////////////////////////////
					///virtual
					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取数据集版本号，该方法是确认数据变更情况。
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集版本号</returns>
					virtual ev_uint64 getDataVersion() const;
					/// <summary>
					/// 获取数据集描述
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集描述</returns>
					virtual EVString getDescription() const;
					/// <summary>
					/// 获取数据集更新时间
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集更新时间</returns>
					virtual EVString getUpdateTime() const;
					/// <summary>
					/// 判断是否包含子数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool hasSubDataset() const;
					/// <summary>
					/// 获取数据集所在数据源对象，该值为引用对象指针。
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集所在数据源对象指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;
					/// <summary>
					/// 设置数据源指针
					/// </summary>
					virtual void setDataSourceRef(EarthView::World::Spatial::GeoDataset::IDataSource*ref_pDataSrc);
					/// <summary>
					/// 判断数据集是否具有编辑能力
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool canEdit() const;
					/// <summary>
					/// 判断数据集是否处在编辑状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool isEditing() const;
					/// <summary>
					/// 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
					/// </summary>
					/// <param name="withUndo">确定是否开启Undo功能</param>
					/// <returns>开启编辑成功，返回true；否则，返回false</returns>
					virtual ev_bool startEditing(ev_bool withUndo);
					/// <summary>
					/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
					/// </summary>
					/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
					/// <returns>结束编辑成功，返回true;否则，返回false</returns>
					virtual ev_bool stopEditing(ev_bool isSave);
					/// <summary>
					/// 判断数据集是否处在编辑操作状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool isBeginEditingOperation();
					/// <summary>
					/// 开启编辑操作，用于标识数据集编辑操作。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <param name=""></param>
					/// <returns>开启编辑操作成功，返回true;否则，返回false</returns>
					virtual ev_bool beginEditingOperation();
					/// <summary>
					/// 结束编辑操作，用于标识数据集编辑操作结束。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <param name="isConfirm">提交操作，设置true;否则，设置false</param>
					/// <returns>结束编辑操作成功，返回true;否则，返回false</returns>
					virtual ev_bool endEditingOperation(ev_bool isConfirm);
					/////////////////////////////////////////////////////////////////////
					///<summary>
					///获取栅格数据集的地理矩形
					///</summary>
					/// <param name="dfUpleftX">左上角X坐标</param>
					/// <param name="dfUpleftY">左上角Y坐标</param>
					/// <param name="dfDownRightX">左上角X坐标</param>
					/// <param name="dfDownRightY">左上角Y坐标</param>
					
					virtual ev_void getRasterRect(_out ev_real64 &dfUpleftX,_out ev_real64 &dfUpleftY,_out ev_real64&dfDownRightX,
						                  _out ev_real64&dfDownRightY)const;
					///<summary>
					///获取栅格数据集的地理范围（该接口取代getRasterRect接口）
					///</summary>
					/// <returns>地理范围</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getGeoEnvelope();
					 ///<summary>
				    ///获取栅格之宽度
				    ///</summary>
					virtual const ev_int32 getRasterWidth()const;
					 ///<summary>
				    ///获取栅格之高度
				    ///</summary>
					virtual const ev_int32 getRasterHeight()const;

					///<summary>
				    ///获取波段数
				    ///</summary>
					virtual const ev_int32 getBandCount()const;
                    ///<summary>
				    ///获取传感器信息
				    ///</summary>
					virtual const EarthView::World::Spatial2D::Raster::CSensorInfo*getSensorInfo()const;
					///<summary>
				    ///获取某一波段
					///</summary>
					/// <param name="iband">波段索引 ，从1开始</param>
					///<returns>波段对象指针</returns>
				    
					 virtual EarthView::World::Spatial2D::Raster::CRasterBand*getRasterBand(_out ev_int32 iband);
                    ///<summary>
					///获取数据类型
				    ///</summary>
					virtual EarthView::World::Spatial::GeoDataset::EVRasterDataType getRasterDataType()const;

					///<summary>
				    ///获取数据类型所占字节数
					///</summary>
					static ev_int32 getDataTypeSize(EarthView::World::Spatial::GeoDataset::EVRasterDataType dataType);

					///<summary>
					///获取数据集的空间参考
					///</summary>
					/// <param name="strWKT">空间参考的字符串表示</param>
					virtual ev_void getSpatialReferenceWkt(_out EVString&strWKT)const;

					///<summary>
					///获取数据集的空间参考（该接口取代getSpatialReferenceWkt接口）
					///</summary>
					/// <returns>空间参考对象（内部释放）</returns>
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference();
                    
					///<summary>
					///获取仿射变换参数
				    ///</summary>
					virtual const EarthView::World::Spatial2D::Raster::CAffineTransform*getGeoTransform()const;
                    
                    ///<summary>
					///设置传感器信息类
					///</summary>
	                /// <param name="objSensorInfo">传感器信息类</param>
					virtual ev_void setSensorInfo(_in const EarthView::World::Spatial2D::Raster::CSensorInfo&objSensorInfo);
                    
					///<summary>
					///设置仿射变换参数
					///</summary>
	                /// <param name="objGeoTransForm">仿射变换指针</param>
					virtual ev_void setGeoTransform(_in const EarthView::World::Spatial2D::Raster::CAffineTransform&objGeoTransForm);

					///<summary>
					///设置栅格数据集的空间参考
					///</summary>
	                /// <param name="strWKT">空间参考的WKT字符串描述</param>
					virtual ev_void setSpatialReference(_in const EVString&strWKT);

					///<summary>
					///设置栅格数据集的空间参考
					///</summary>
	                /// <param name="pSpatialRef">空间参考对象（外部释放）</param>
					virtual ev_void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef);

					///<summary>
					///读取栅格数据
					///如果栅格对象设置了地理参数，则根据地理范围读取数据（行列号可设置为0），否则，根据行列号范围读取
					///</summary>
					/// <param name="pDstRaster">目标栅格块对象</param>
	                /// <param name="upRow">左上角像素行号（从0开始）</param>
					/// <param name="leftCol">左上角像素列号（从0开始）</param>
					/// <param name="downRow">右下角行号</param>
					/// <param name="rightCol">右下角列号</param>
					
					virtual ev_bool read(EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster,
						               ev_uint32 upRow, ev_uint32 leftCol, 
						               ev_uint32 downRow, ev_uint32 rightCol);
					///<summary>
					///将栅格块对象中的数据写入栅格数据集
					///</summary>
					/// <param name="pSrcRaster">待写入的栅格块对象</param>
	                /// <param name="upRow">左上角像素行号（从0开始）</param>
					/// <param name="leftCol">左上角像素列号（从0开始）</param>
					/// <param name="downRow">右下角行号</param>
					/// <param name="rightCol">右下角列号</param>
					
					virtual ev_bool write(const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster,
						               ev_uint32 upRow, ev_uint32 leftCol, 
						               ev_uint32 downRow, ev_uint32 rightCol);
					///<summary>
					///创建金字塔影像,img格式影像要求打开时候为Update，否则
					///创建金子塔会失败 
					///</summary>
	                /// <param name="ibandCount">波段数</param>
					/// <param name="piBandIndex">波段索引</param>
					/// <param name="nLevelCount">金字塔级别数</param>
					/// <param name="piLevelIndex">金字塔级别索引</param>
					/// <param name="pfnProgress">函数指针</param>
					/// <param name="pDataProgress">进度相关数据</param>
					/// <returns>1,成功 0，失败</returns>
				    
					virtual ev_bool buildOverViews(_in ev_int32 ibandCount,_in ev_int32*piBandIndex,_in ev_int32 nLevelCount,_in ev_int32*piLevelIndex,/*_in EVgsProgressFunc pfnProgress,*/_inout EarthView::World::Spatial2D::Raster::CProgressInfo*pDataProgress);
                    
					///<summary>
					///读取栅格数据集图像数据
					///</summary>
	                /// <param name="bflag">0,表示读；1，表示写</param>
					/// <param name="iOffsetX">X方向起点坐标</param>
					/// <param name="iOffsetY">Y方向起点坐标</param>
					/// <param name="iImageWidth">读取图像块的宽度</param>
					/// <param name="iImageHeight">读取图像块的高度</param>
					/// <param name="iBandCount">波段数</param>
					/// <param name="pIbandIndex">波段索引指针</param>
					/// <param name="pDstBuffer">目标缓存，用来存储读取的图像数据</param>
					/// <param name="iBufferWidth">缓存宽度</param>
					/// <param name="iBufferHeight">缓存高度</param>
					/// <param name="eDataType">缓存数据类型</param>
					/// <returns>0，表示失败；1，表示成功</returns>
				    
					virtual ev_bool rasterIO(_in EarthView::World::Spatial2D::Raster::EVIOFlag bflag,_in ev_int32 iOffsetX,_in ev_int32 iOffsetY,_in ev_int32 iImageWidth,_in ev_int32 iImageHeight,
						            _in ev_int32 iBandCount,_in ev_int32*pIbandIndex,_inout ev_void*pDstBuffer,_in ev_int32 iBufferWidth,
									_in  ev_int32 iBufferHeight,_in EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType);
					/// <summary>
					/// 从栅格数据集中读取一块指定坐标系、大小、分辨率、左上角坐标以及波段的数据
					/// </summary>
					/// <param name="spatialRef">目标坐标系的WKT格式字符串</param>
					/// <param name="lefttopX">目标数据的左上角X坐标</param>
					/// <param name="lefttopY">目标数据的左上角Y坐标</param>
					/// <param name="resolutionX">X方向分辨率</param>
					/// <param name="resolutionY">Y方向分辨率</param>
					/// <param name="xSize">X方向大小（宽度）</param>
					/// <param name="ySize">Y方向大小（高度）</param>
					/// <param name="pBuffer">存放读取数据的缓冲区(缓冲区大小为xSize×ySize×像素大小×波段数</param>
					virtual ev_void read(_in EVString& strWKT, 
						               _in ev_real64 lefttopX, 
						               _in ev_real64 lefttopY, 
									   _in ev_real64 resolutionX, 
									   _in ev_real64 resolutionY,
						               _in ev_int32 xSize, 
									   _in ev_int32 ySize, 
									   _inout ev_byte* pBuffer);
					/////<summary>
					/////读取栅格数据集图像数据
					/////</summary>
	    //            /// <param name="bflag">0,表示读；1，表示写</param>
					///// <param name="iOffsetX">X方向起点坐标</param>
					///// <param name="iOffsetY">Y方向起点坐标</param>
					///// <param name="iImageWidth">读取图像块的宽度</param>
					///// <param name="iImageHeight">读取图像块的高度</param>
					///// <param name="iBandCount">波段数</param>
					///// <param name="pIbandIndex">波段索引指针</param>
					///// <param name="pDstBuffer">目标缓存，用来存储读取的图像数据</param>
					///// <param name="iBufferWidth">缓存宽度</param>
					///// <param name="iBufferHeight">缓存高度</param>
					///// <param name="eDataType">缓存数据类型</param>
					///// <returns>0，表示失败；1，表示成功</returns>
				 //   
					//ev_bool iBitMapRGBIO(_in EarthView::World::Spatial2D::Raster::EVIOFlag bflag,_in ev_int32 iOffsetX,_in ev_int32 iOffsetY,_in ev_int32 iImageWidth,_in ev_int32 iImageHeight,
					//	            _in ev_int32 iBandCount,_in ev_int32*pIbandIndex,_inout ev_void*pDstBuffer,_in ev_int32 iBufferWidth,
					//				_in  ev_int32 iBufferHeight,_in EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType);
					///<summary>
					///关联引用，引用计数加一
					///</summary>
					///<returns>引用计数的次数</returns>
					
					virtual ev_int32 reference(){ return ++m_iReference;} 
					///<summary>
					///取消关联引用，引用计数减一
					///</summary>
					///<returns>引用计数的次数</returns>
					
					virtual ev_int32 deReference(){ if(m_iReference >0)
					                         --m_iReference;
				                           return m_iReference;}
					///<summary>
					///数据集导出成流
					///</summary>
					///<param name="pBuffer">二进制流，图像数据（包括图像头，像素等信息）
					/// 调用处传入pBuffer= NULL，不是NULL将重新分配内存，由外部free（）</param>
					///<param name="longLenth">二进制流的长度</param>
					virtual ev_void  toStream(_inout ev_uchar*&pBuffer,_inout ev_uint64&longLenth);
					
					///<summary>
					///获取金子塔的级别数
					///</summary>
					///<returns>金字塔级别数，0表示未有金字塔</summary>
					virtual ev_int32 getOverViewLevels()const;
					 ///<summary>
					 ///创建默认级别的金字塔，默认最高级别大小为256*256
					 ///图像小于256 不创建金字塔
					 ///</summary>
					 ///<param name="pfnProgress">进度条解析函数</param>
				     ///<param name="pDataProgress">进度条传出类</param>
					 ///<returns>1,表示成功，0标识失败</returns>
					 
					 virtual ev_bool buildDefaultOverViews(_inout EarthView::World::Spatial2D::Raster::CProgressInfo*pDataProgress);
					 ///<summary>
					 ///获取图像目标路径
					 ///</summary>
					 ///<returns></returns>
					 
					 virtual EVString getDatasetFullpath()const;
					 //获取数据集核心
					virtual RasterDatasetH* getRasterDatasetH();
	


				protected:
					///<summary>
					///默认构造函数
					///</summary>
                    CRasterDataSet();

					///<summary>
					///赋值构造函数,coreDataSet
					///</summary>
                    CRasterDataSet(_in RasterDatasetH* dataset,_in ev_int32 iband);

				protected:
                     mutable EarthView::World::Spatial2D::Raster::CAffineTransform  *m_pAffineTransform;  ///仿射变换参数
					 EarthView::World::Spatial::GeoDataset::IDataSource              *m_pDataSource;///datasrc
					 EarthView::World::Spatial2D::Raster::CSensorInfo       *m_objSensorInfo;      ///传感器参数
	                 RasterDatasetH*    m_hCoreDataSet;        ///栅格数据集核心
                     ev_int32          m_iBand;
					 ev_vector<EarthView::World::Spatial2D::Raster::CRasterBand*>m_listBand;       ///波段列表  
					 ev_int32            m_iReference;          ///引用计数
					 EVString              m_strDatasetName;    ///数据集名称  
					 EVString              m_strFullPath;       ///完整路径

					 ev_int32            m_overviewLevels;    ///金字塔级别数
					 EarthView::World::Spatial::Geometry::IEnvelope * m_pGeoEnv;
					 EarthView::World::Spatial::Geometry::ISpatialReference* m_pSpatialRef;
					 mutable EarthView::World::Core::CRecursiveMutex mLock; // getSpatialReferenceWkt
				//				 											         
				friend class CRasterFileOperator;
				friend class CRasterBand;
				friend class CReprojectAlg;
				friend class CRasterLayer;
				

				};
		}///Raster
		}
	}///
}///EarthView

#endif//_RASTER_DATA_SET_H
