#ifndef _DBRASTERDATASETOPERATOR_H_H_
#define _DBRASTERDATASETOPERATOR_H_H_

#include "spatialinterface/idatasource.h"
#include "rasterdataset/rasterparameter.h"
#include "spatialinterface/irasterdataset.h"
#include "spatialinterface/idatasetoperator.h"
#include "databaseutility/sqldatabase.h"
#include "spatialinterface/idatasource.h"
#include "spatialdatabase/sqlstandardization.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ispatialreference.h"
#include "rasterdataset/dbrasterdataset.h"
#include "core/unicodestring.h"

using namespace EarthView::World::Spatial::GeoDataset;
using namespace EarthView::World::Spatial2D::Raster;
using namespace EarthView::World::Core::Database;
using namespace EarthView::World::Spatial::Geometry;
using namespace EarthView::World::Core;

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
class CDBRasterBand;
class CDBRasterDatasetOperator : public EarthView::World::Spatial::GeoDataset::IDatasetOperator
{
public:
	CDBRasterDatasetOperator(EarthView::World::Core::Database::CSqlDatabase db,
		                     EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource,
							 const EVString& dbType);
	virtual ~CDBRasterDatasetOperator();
public:
	virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() {return m_pDataSource;}
	virtual ev_bool openDataset(EarthView::World::Core::CDataStream &stream,const EVString &name);
	virtual ev_bool createDataset(_in EarthView::World::Core::CDataStream &stream);
	virtual ev_bool deleteDataset(const EVString &name);
	ev_bool executeMultiSQL(ev_wstring sql);
	///<summary>
	///获取栅格之宽度
	///</summary>
	const ev_int32 getRasterWidth()const;
	///<summary>
	///获取栅格之高度
	///</summary>
	const ev_int32 getRasterHeight()const;
	///<summary>
	///获取波段数
	///</summary>
	const ev_int32 getBandCount()const;
	///<summary>
	///获取分块数
	///</summary>
	const ev_int32 getBlockCount()const;
	///<summary>
	///获取分块大小
	///</summary>
	const ev_int32 getBlockSize()const;
	///<summary>
	///获取压缩方式
	///</summary>
	const ev_int32 getCompressType()const;
	///<summary>
	///获取包围盒
	///</summary>
	const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope()const;
	///<summary>
	///获取仿射变换参数
	///</summary>
	const EarthView::World::Spatial2D::Raster::CAffineTransform* getTransform()const;
	///<summary>
	///获取传感器信息
	///</summary>
	const EarthView::World::Spatial2D::Raster::CSensorInfo* getSensorInfo()const;
	///<summary>
	///获取某一波段
	///</summary>
	/// <param name="iband">波段索引 ，从1开始</param>
	///<returns>波段对象指针,外部需释放</returns>
	_extfree EarthView::World::Spatial2D::Raster::CDBRasterBand* getRasterBand(_out ev_int32 iband);
	///<summary>
	///获取数据类型
	///</summary>
	EarthView::World::Spatial::GeoDataset::EVRasterDataType getRasterDataType()const;
	///<summary>
	///获取数据集的空间参考
	///</summary>
	/// <param name="strWKT">空间参考的字符串表示</param>
	void getSpatialReferenceWkt(_out EVString&strWKT)const;

	virtual bool Lock();
	virtual bool UnLock();
	///<summary>
	///设置传感器信息类
	///</summary>
	/// <param name="objSensorInfo">传感器信息类</param>
	bool setSensorInfo(_in const EarthView::World::Spatial2D::Raster::CSensorInfo& objSensorInfo);
	///<summary>
	///设置栅格数据集的空间参考
	///</summary>
	/// <param name="strWKT">空间参考的WKT字符串描述</param>
	bool setSpatialReference(_in const EVString&strWKT);
	///<summary>
	///设置栅格数据集的空间参考
	///</summary>
	/// <param name="pSpatialRef">空间参考</param>
	bool setSpatialReference(_in const ISpatialReference* pSpatialRef);
	///<summary>
	///设置栅格数据集的变换参数
	///</summary>
	/// <param name="objGeoTransForm">变换参数</param>
	bool setTransform(_in const CAffineTransform&objGeoTransForm);
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
	ev_bool buildOverViews(_in ev_int32 ibandCount,_in ev_int32*piBandIndex,_in ev_int32 nLevelCount,_in ev_int32*piLevelIndex,
		                   _inout EarthView::World::Spatial2D::Raster::CProgressInfo*pDataProgress);
	///<summary>
	///获取金子塔的级别数
	///</summary>
	///<returns>金字塔级别数，0表示未有金字塔</summary>
	ev_int32 getOverViewLevels()const;
	///<summary>
	///创建默认级别的金字塔，默认最高级别大小为256*256
	///图像小于256 不创建金字塔
	///</summary>
	///<param name="pfnProgress">进度条解析函数</param>
	///<param name="pDataProgress">进度条传出类</param>
	///<returns>1,表示成功，0标识失败</returns>
	bool buildDefaultOverViews(_inout EarthView::World::Spatial2D::Raster::CProgressInfo*pDataProgress);
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
	ev_bool rasterIO(_in EarthView::World::Spatial2D::Raster::EVIOFlag bflag,_in ev_int32 iOffsetX,
		             _in ev_int32 iOffsetY,_in ev_int32 iImageWidth,_in ev_int32 iImageHeight,
		             _in ev_int32 iBandCount,_in ev_int32*pIbandIndex,_inout ev_void*pDstBuffer,_in ev_int32 iBufferWidth,
		             _in  ev_int32 iBufferHeight,_in EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType);
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
	///将栅格块对象中的数据写入栅格数据集
	///</summary>
	/// <param name="pSrcRaster">待写入的栅格块对象</param>
	/// <param name="level">所写入的金字塔级别</param>
	/// <param name="Row">行号（从0开始）</param>
	/// <param name="Col">列号（从0开始）</param>
	virtual ev_bool writeBlock(const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster,ev_int32 level,ev_uint32 Row, ev_uint32 Col);
	///<summary>
	///将栅格块对象中的数据写入栅格数据集
	///</summary>
	/// <param name="pRasterBuffer">待写入的光栅数据</param>
	/// <param name="bandID">所写入的波段ID</param>
	/// <param name="level">所写入的金字塔级别</param>
	/// <param name="Row">行号（从0开始）</param>
	/// <param name="Col">列号（从0开始）</param>
	virtual ev_bool writeBlock(EarthView::World::Core::CDataStream& data,ev_int32 bandID,ev_int32 level,ev_uint32 Row, ev_uint32 Col);
	///<summary>
	///读取栅格数据
	///</summary>
	/// <param name="pSrcRaster">目标栅格块对象</param>
	/// <param name="level">所读取的金字塔级别</param>
	/// <param name="Row">行号（从0开始）</param>
	/// <param name="Col">列号（从0开始）</param>
	virtual ev_bool readBlock(EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster,ev_int32 level,ev_uint32 Row, ev_uint32 Col);
	///<summary>
	///读取栅格数据
	///</summary>
	/// <param name="pRasterBuffer">目标栅格块对象</param>
	/// <param name="bandID">所读取的波段ID</param>
	/// <param name="level">所读取的金字塔级别</param>
	/// <param name="Row">行号（从0开始）</param>
	/// <param name="Col">列号（从0开始）</param>
	virtual ev_bool readBlock(EarthView::World::Core::CDataStream& data,ev_int32 bandID,ev_int32 level,ev_uint32 Row, ev_uint32 Col);
	EarthView::World::Core::MemoryDataStreamPtr compressData(_in EarthView::World::Core::MemoryDataStreamPtr& data);
	EarthView::World::Core::MemoryDataStreamPtr deCompressData(_in EarthView::World::Core::MemoryDataStreamPtr& data);

private:
	EarthView::World::Core::Database::CSqlDatabase					m_db;
	EVString							                            m_strDBType;
	EarthView::World::Spatial::GeoDataset::EVRasterDataType         m_RDataType;
	EarthView::World::Spatial::GeoDataset::CSqlstandardization*     sqlStd;
	EVString							                            m_Name;
	EarthView::World::Spatial::GeoDataset::IDataSource*			    m_pDataSource;
	//数据集表名序列
	EVString                                                        m_tableSerialNum;
	EarthView::World::Core::CReadWriteLock                          mLock;
	ev_int32                                                        m_overviewLevels;    ///金字塔级别数
	ev_int32                                                        m_datasetWidth;
	ev_int32                                                        m_datasetHeight;
	ev_int32                                                        m_datasetBandCount;
	ev_int32                                                        m_datasetBlockSize;
	ev_int32                                                        m_compressType;
	EVString                                                        m_strWKT;
	EarthView::World::Spatial::Geometry::IEnvelope*                 m_pGeoEnv;
	EarthView::World::Spatial2D::Raster::CAffineTransform*          m_trans;
	ev_int32						m_nID;
friend class CDBRasterBand;
};

			}
		}
	}
}



#endif