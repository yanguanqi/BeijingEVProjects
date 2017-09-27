#ifndef EV_SPATIALINTERFACE_RASTERDATASET_H
#define EV_SPATIALINTERFACE_RASTERDATASET_H

#include "spatialinterface/idataset.h"
#include "spatialinterface/progressinfo.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Raster{
				class IRasterBlock;
				/************************************************************************/
				/*    EVIOFlag                                                           */
				/************************************************************************/
				///<summary>
				///EVIOFlag
				///读写枚举
				///</summary>
				enum EVIOFlag
				{  
					IO_READ      = 0,///只读方式
					IO_WRITE     = 1 ///更改方式
				};

				/************************************************************************/
				/*   EarthView::World::Spatial2D::Raster::CAffineTransform              */
				/************************************************************************/
				///<summary>
				///EarthView::World::Spatial2D::Raster::CAffineTransform
				///仿射变换信息 
				///</summary>
				class EV_INTERFACE_DLL CAffineTransform: public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CAffineTransform(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					///<summary>
					///默认构造函数
					///</summary>
					CAffineTransform();
					///<summary>
					///默认析构函数
					///</summary>
					~CAffineTransform();

					///<summary>
					///赋值构造函数
					///</summary>
					/// <param name="dfUpLeftX">左上角起点坐标</param>
					/// <param name="dfResolutionX">X方向分辨率</param>
					/// <param name="dfRotateX">X轴方向旋转量</param>
					/// <param name="dfUpLeftY">左上角起点Y坐标</param>
					/// <param name="dfRotateY">Y轴方向旋转量</param>
					/// <param name="dfResolutionY">Y方向分辨率</param>

					CAffineTransform(_in ev_real64 dfUpLeftX,_in ev_real64 dfResolutionX,_in ev_real64 dfRotateX,
						_in ev_real64 dfUpLeftY,_in ev_real64 dfRotateY,_in ev_real64 dfResolutionY
						);
					///<summary>
					///赋值构造函数
					///</summary>
					CAffineTransform(ev_real64 dfGeoTransform[6]);
					///<summary>
					///获取左上角X坐标
					///</summary>
					///<returns>左上角X坐标</returns>

					const ev_real64 getUpLeftX()const;

					///<summary>
					///获取左上角Y坐标
					///</summary>
					///<returns>左上角Y坐标</returns>
					///</summary>
					const ev_real64 getUpLeftY()const;
					///<summary>
					///获取X方向旋转量
					///</summary>
					///<returns>X方向旋转量</returns>

					const ev_real64 getRotateX()const;
					///<summary>
					///获取Y方向旋转量
					///</summary>
					///<returns>Y方向旋转量</returns>

					const ev_real64 getRotateY()const;
					///<summary>
					///获取X方向分辨率
					///</summary>
					///<returns>X方向分辨率</returns>

					const ev_real64 getResolutionX()const;

					///<summary>
					///获取Y方向分辨率
					///</summary>
					///<returns>Y方向分辨率</returns>

					const ev_real64 getResolutionY()const;

					///<summary>
					///获取仿射变换参数指针
					///</summary>
					///<returns>参数指针,不能在外部释放</returns>

					const ev_real64* getGeoTransFormParameter()const;

					///<summary>
					///赋值操作符
					///</summary>
					const EarthView::World::Spatial2D::Raster::CAffineTransform&operator=(const EarthView::World::Spatial2D::Raster::CAffineTransform&objAffine);

					///<summary>
					///拷贝构造函数
					///</summary>
					CAffineTransform(const CAffineTransform&objAffine);

					///<summary>
					///坐标变换，地理坐标到图像坐标
					///</summary>
					/// <param name="dfX">输入地理坐标X，返回图像坐标X</param>
					/// <param name="dfY">输入地理坐标Y，返回图像坐标Y</param>

					ev_void geoToPixel(_inout ev_real64 &dfX,_inout ev_real64&dfY)const;
					///<summary>
					///坐标变换，图像坐标到地理坐标
					///</summary>
					/// <param name="dfX">输入图像坐标X，返回地理坐标X</param>
					/// <param name="dfY">输入图像坐标Y，返回地理坐标Y</param>

					ev_void pixelToGeo(_inout ev_real64 &dfX,_inout ev_real64&dfY)const;
				private:
					ev_real64 m_pdfParameter[6]; ///仿射变换参数 a0,a1,a2,b0,b1,b2
				};
			}}}}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset
			{
				/************************************************************************/
				/*     EarthView::World::Spatial::GeoDataset::EVRasterDataType                                                   */
				/************************************************************************/
				///<summary>
				///常用的数据的存储精度
				///枚举操作权限
				///</summary>
				enum EVRasterDataType
				{
					RDT_Unknown = 0,
					RDT_Byte    = 1,
					RDT_UInt16  = 2,
					RDT_Int16   = 3,
					RDT_UInt32  = 4,
					RDT_Int32   = 5,
					RDT_Float32 = 6,
					RDT_Float64 = 7,
					RDT_CInt16  = 8,   ///未使用
					RDT_CInt32  = 9,   ///未使用
					RDT_CFloat32 = 10, ///未使用
					RDT_CFloat64 = 11, ///未使用
					RDT_TypeCount = 12 ///未使用         
				};
				///<summary>
				/// 栅格数据集基类
				/// </summary>
				class EV_INTERFACE_DLL IRasterDataset:public EarthView::World::Spatial::GeoDataset::IDataset
				{
				public:
					virtual ~IRasterDataset();
				public:
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
					///获取仿射变换参数
					///</summary>
					virtual const EarthView::World::Spatial2D::Raster::CAffineTransform*getGeoTransform()const;

					///<summary>
					///获取栅格数据类型
				    ///</summary>
					virtual EarthView::World::Spatial::GeoDataset::EVRasterDataType getRasterDataType()const;
					///<summary>
					///获取数据集的空间参考
					///</summary>
					/// <param name="strWKT">空间参考的字符串表示</param>
					virtual ev_void getSpatialReferenceWkt(_out EVString&strWKT)const;
					///<summary>
					///设置栅格数据集的空间参考
					///</summary>
	                /// <param name="strWKT">空间参考的WKT字符串描述</param>
					virtual ev_void setSpatialReference(_in const EVString&strWKT);
					///<summary>
					///读取栅格数据
					///如果栅格对象设置了地理参数，则根据地理范围读取数据（行列号可全部设置为0），
					///否则，根据行列号范围读取
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
					///如果栅格对象设置了地理参数，则根据地理范围写入数据集（行列号可全部设置为0），
					///否则，根据行列号范围写入
					///</summary>
					/// <param name="pSrcRaster">待写入的栅格块对象</param>
	                /// <param name="upRow">左上角像素行号（从0开始）</param>
					/// <param name="leftCol">左上角像素列号（从0开始）</param>
					/// <param name="downRow">右下角行号</param>
					/// <param name="rightCol">右下角列号</param>
					virtual ev_bool write(const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster,
						               ev_uint32 upRow, ev_uint32 leftCol, 
						               ev_uint32 downRow, ev_uint32 rightCol);
					/// <summary>
					/// 从栅格数据集中读取一块指定坐标系、大小、分辨率以及左上角坐标的数据
					/// </summary>
					/// <param name="spatialRef">目标坐标系的WKT字符串</param>
					/// <param name="lefttopX">目标数据的左上角X坐标</param>
					/// <param name="lefttopY">目标数据的左上角Y坐标</param>
					/// <param name="resolutionX">X方向分辨率</param>
					/// <param name="resolutionY">Y方向分辨率</param>
					/// <param name="xSize">X方向大小（宽度）</param>
					/// <param name="ySize">Y方向大小（高度）</param>
					/// <param name="nBands">波段数</param>
					/// <param name="pBandIndex">波段索引数组</param>
					/// <param name="pBuffer">存放读取数据的缓冲区，缓冲区大小为宽度 * 高度 * 像素占字节数 * 波段数</param>
					virtual ev_void read(_in EVString& strWKT, 
						               _in ev_real64 lefttopX, 
						               _in ev_real64 lefttopY, 
									   _in ev_real64 resolutionX, 
									   _in ev_real64 resolutionY,
						               _in ev_int32 xSize, 
									   _in ev_int32 ySize, 
									   _inout ev_byte* pBuffer);
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
					virtual ev_bool buildOverViews(ev_int32 ibandCount, ev_int32 *piBandIndex,
						                           ev_int32 nLevelCount, ev_int32 *piLevelIndex,
						                           EarthView::World::Spatial2D::Raster::CProgressInfo *pDataProgress);
					///<summary>
					///创建默认金字塔影像
					///</summary>
					/// <param name="pDataProgress">进度相关数据</param>
					/// <returns>1,成功 0，失败</returns>
					virtual ev_bool buildDefaultOverViews(EarthView::World::Spatial2D::Raster::CProgressInfo *pDataProgress);

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
				protected:
					IRasterDataset();
				private:
					IRasterDataset& operator=(const IRasterDataset&);
					IRasterDataset(IRasterDataset&);
ev_private:
					IRasterDataset (EarthView::World::Core::CNameValuePairList *pList );
				};
			}
		}
	}
}

#endif
