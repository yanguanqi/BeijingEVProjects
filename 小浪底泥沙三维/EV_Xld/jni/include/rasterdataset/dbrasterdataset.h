#ifndef _DB_RASTER_DATASET_H_
#define _DB_RASTER_DATASET_H_

#include "core/stdheaders.h"
#include "color/colortable.h"
#include "spatialinterface/idatasource.h"
#include "spatialinterface/irasterdataset.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/ienvelope.h"
#include "rasterdataset/rasterdatasetenume.h"
#include "rasterdataset/rasterhistogram.h"
#include "rasterdataset/rasterparameter.h"
#include "rasterdataset/dbrasterdatasetoperator.h"
#include "rasterattributetable.h"

typedef ev_void RasterDatasetH;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Raster{
				class CBandHistogram;
				class CBandStatisticsInfo;
				class CAffineTransform;
				class CSensorInfo;
				class CReprojectAlg;
				class CProgressInfo;
				class CRasterBlock;
				class CRasterHistogram;
				class CRasterAttributeTable;
				class CDBRasterDatasetOperator;
				class CDBRasterBand;
				/************************************************************************/
				/*     EarthView::World::Spatial2D::Raster::EVRasterAUXDataType         */
				/************************************************************************/
				///<summary>
				///波段统计信息类型枚举
				///</summary>
				enum EVRasterAUXDataType
				{
					AUX_BandHistogram            = 1,  //波段统计直方图
					AUX_RasterHistogram          = 2,  //栅格统计直方图
					AUX_BandStatisticsInfo       = 3,  //波段统计信息
					AUX_ColorTable               = 4,  //颜色表
					AUX_RasterAttributeTable     = 5,  //栅格属性表
					AUX_APPROXBandStatisticsInfo = 6,  //近似波段统计信息
					AUX_NoDataValue              = 7,  //无效值
				};
/************************************************************************/
/*   EarthView::World::Spatial2D::Raster::CDBRasterDataset              */
/************************************************************************/
///<summary>
///EarthView::World::Spatial2D::Raster::CDBRasterDataset
///数据库栅格数据集类
///</summary>
class EV_RASTER_DLL CDBRasterDataset:public EarthView::World::Spatial::GeoDataset::IRasterDataset
{

ev_private:
	///<summary>
	///默认构造函数
	///</summary>
	CDBRasterDataset(CDBRasterDatasetOperator *opr);

public:

	///<summary>
	///默认析构函数
	///</summary>
	~CDBRasterDataset();
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
	/// 获取数据集所在数据源对象，该值为引用对象指针。
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据集所在数据源对象指针</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;
	///<summary>
	///获取栅格数据集的地理范围
	///</summary>
	/// <returns>地理范围</returns>
	const EarthView::World::Spatial::Geometry::IEnvelope* getGeoEnvelope();
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
	///获取传感器信息
	///</summary>
	_extfree const EarthView::World::Spatial2D::Raster::CSensorInfo*getSensorInfo()const;
	///<summary>
	///获取某一波段
	///</summary>
	/// <param name="iband">波段索引 ，从1开始</param>
	///<returns>波段对象指针，外部需释放</returns>
	EarthView::World::Spatial2D::Raster::CDBRasterBand*getRasterBand(_out ev_int32 iband);
	///<summary>
	///获取数据类型
	///</summary>
	EarthView::World::Spatial::GeoDataset::EVRasterDataType getRasterDataType()const;
	///<summary>
	///获取数据集的空间参考
	///</summary>
	/// <param name="strWKT">空间参考的字符串表示</param>
	ev_void getSpatialReferenceWkt(_out EVString&strWKT)const;
	///<summary>
	///获取数据集的空间参考（该接口取代getSpatialReferenceWkt接口）
	///</summary>
	/// <returns>空间参考对象（内部释放）</returns>
	const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference();

	///<summary>
	///获取仿射变换参数
	///</summary>
	const EarthView::World::Spatial2D::Raster::CAffineTransform*getGeoTransform()const;
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
	///<summary>
	///设置传感器信息类
	///</summary>
	/// <param name="objSensorInfo">传感器信息类</param>
	ev_void setSensorInfo(_in const EarthView::World::Spatial2D::Raster::CSensorInfo&objSensorInfo);

	///<summary>
	///设置仿射变换参数
	///</summary>
	/// <param name="objGeoTransForm">仿射变换指针</param>
	ev_void setGeoTransform(_in const EarthView::World::Spatial2D::Raster::CAffineTransform&objGeoTransForm);

	///<summary>
	///设置栅格数据集的空间参考
	///</summary>
	/// <param name="strWKT">空间参考的WKT字符串描述</param>
	ev_void setSpatialReference(_in const EVString&strWKT);
	///<summary>
	///设置栅格数据集的空间参考
	///</summary>
	/// <param name="pSpatialRef">空间参考对象（外部释放）</param>
	ev_void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef);
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
	ev_bool buildOverViews(_in ev_int32 ibandCount,_in ev_int32*piBandIndex,_in ev_int32 nLevelCount,_in ev_int32*piLevelIndex,_inout EarthView::World::Spatial2D::Raster::CProgressInfo*pDataProgress);
	///<summary>
	///获取金子塔的级别数
	///</summary>
	///<returns>金字塔级别数，0表示未有金字塔</summary>
	ev_int32 getOverViewLevels()const;
	///<summary>
	///创建默认级别的金字塔
	///</summary>
	///<param name="pfnProgress">进度条解析函数</param>
	///<param name="pDataProgress">进度条传出类</param>
	///<returns>1,表示成功，0标识失败</returns>
	ev_bool buildDefaultOverViews(_inout EarthView::World::Spatial2D::Raster::CProgressInfo*pDataProgress);
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
	///读写栅格数据集图像数据
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
	virtual ev_bool rasterIO(_in EarthView::World::Spatial2D::Raster::EVIOFlag bflag,_in ev_int32 iOffsetX,
		             _in ev_int32 iOffsetY,_in ev_int32 iImageWidth,_in ev_int32 iImageHeight,
		             _in ev_int32 iBandCount,_in ev_int32*pIbandIndex,_inout ev_void*pDstBuffer,_in ev_int32 iBufferWidth,
		             _in  ev_int32 iBufferHeight,_in EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType);
	/// <summary>
	///从流读取栅格数据集
	/// </summary>
	/// <param name="stream">流</param>
	/// <returns>若成功返回true；否则返回false</returns>
	ev_bool fromStream(EarthView::World::Core::CDataStream &stream);
	///<summary>
	///读取栅格数据
	///</summary>
	/// <param name="pSrcRaster">目标栅格块对象</param>
	/// <param name="level">所读取的金字塔级别</param>
	/// <param name="Row">行号（从0开始）</param>
	/// <param name="Col">列号（从0开始）</param>
	virtual ev_bool readBlock(EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRasterBlock,ev_int32 level,ev_uint32 row,ev_uint32 col);
	///<summary>
	///读取栅格数据
	///</summary>
	/// <param name="pSrcRaster">目标栅格块对象</param>
	/// <param name="bandID">所读取的波段ID</param>
	/// <param name="level">所读取的金字塔级别</param>
	/// <param name="Row">行号（从0开始）</param>
	/// <param name="Col">列号（从0开始）</param>
	virtual ev_bool readBlock(EarthView::World::Core::CDataStream &data,ev_int32 bandID,ev_int32 level,ev_uint32 row,ev_uint32 col);
	///<summary>
	///将栅格块对象中的数据写入栅格数据集
	///</summary>
	/// <param name="pSrcRaster">待写入的栅格块对象</param>
	/// <param name="level">所写入的金字塔级别</param>
	/// <param name="Row">行号（从0开始）</param>
	/// <param name="Col">列号（从0开始）</param>
	virtual ev_bool writeBlock(EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRasterBlock,ev_int32 level,ev_uint32 row,ev_uint32 col);
	///<summary>
	///将栅格块对象中的数据写入栅格数据集
	///</summary>
	/// <param name="pRasterBuffer">待写入的光栅数据</param>
	/// <param name="bandID">所写入的波段ID</param>
	/// <param name="level">所写入的金字塔级别</param>
	/// <param name="Row">行号（从0开始）</param>
	/// <param name="Col">列号（从0开始）</param>
	virtual ev_bool writeBlock(EarthView::World::Core::CDataStream &data,ev_int32 bandID,ev_int32 level,ev_uint32 row,ev_uint32 col);
	ev_private:
	/// <summary>
	/// 键值对构造函数
	/// </summary>
	///<returns></returns>
	CDBRasterDataset(_in EarthView::World::Core::CNameValuePairList* pList);
	private:

		mutable EarthView::World::Spatial2D::Raster::CAffineTransform  *m_pAffineTransform;  ///仿射变换参数
		EarthView::World::Spatial::GeoDataset::IDataSource              *m_pDataSource;///datasrc
		EarthView::World::Spatial2D::Raster::CSensorInfo       *m_objSensorInfo;      ///传感器参数
		ev_int32          m_bandCount;
		ev_int32          m_width;
		ev_int32          m_height;
		ev_vector<EarthView::World::Spatial2D::Raster::CDBRasterBand*>m_listBand;       ///波段列表  

		ev_bool				m_IsEditing;

		ev_int32            m_iReference;          ///引用计数 
		ev_int32            m_overviewLevels;    ///金字塔级别数
		EarthView::World::Spatial::Geometry::IEnvelope * m_pGeoEnv;
		EarthView::World::Spatial::Geometry::ISpatialReference* m_pSpatialRef;

		EVString						m_Name;  ///数据集名字
		EVString						m_Description; 		/// 描述信息
		EarthView::World::Spatial::GeoDataset::EVDatasetType				m_nType;	///数据集类型
		EarthView::World::Spatial::GeoDataset::EVRasterDataType             m_RDataType;
		EarthView::World::Spatial2D::Raster::CDBRasterDatasetOperator     *m_pOpr; ///栅格数据集数据库操作对象
		//				 											       
		friend class CDBRasterBand;
		friend class CReprojectAlg;
		friend class CRasterLayer;

};


/************************************************************************/
/*   EarthView::World::Spatial2D::Raster::CDBRasterBand                 */
/************************************************************************/
///<summary>
///EarthView::World::Spatial2D::Raster::CDBRasterBand
///波段对象
///</summary>
class EV_RASTER_DLL CDBRasterBand:public EarthView::World::Core::CAllocatedObject
{
public:
	///<summary>
	///赋值构造函数
	///</summary>
	CDBRasterBand(ev_int32 iband);
	///<summary>
	///默认析构函数
	///</summary>
	~CDBRasterBand();
	
	///<summary>
	///获取波段统计直方图
	///<returns>波段统计对象指针</returns>
	///</summary>
	const EarthView::World::Spatial2D::Raster::CBandHistogram* getBandHistogram();

	const EarthView::World::Spatial2D::Raster::CRasterHistogram* getHistogram();

	const EarthView::World::Spatial::Display::CColorTable* getColorTable();

	const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* getAttributeTable();

	_extfree EarthView::World::Spatial2D::Raster::CDBRasterBand* getOverview(ev_int32 level);
	//ev_void setOverviewLevel(ev_int32 level);
	const ev_int32 getBandWidth()const;
	const ev_int32 getBandHeight()const;
	///<summary>
	///获取波段统计参数
	///</summary>
	///<returns>波段统计参数对象指针</returns>
	const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* getBandStatistics(ev_bool isApprox);
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
	ev_bool iRasterIO(_in EarthView::World::Spatial2D::Raster::EVIOFlag bFlag,_inout ev_byte *pDstBuffer,
		              _in ev_int32 iOffsetX,_in ev_int32 iOffsetY,_in ev_int32 iWidth,_in ev_int32 iHeight,
					  _in EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType,_in ev_int32 iBufferX,
					  _in ev_int32 iBufferY);
	///<summary>
	///栅格数据集,外部不能释放这个指针
	///</summary>
	///<returns>EarthView::World::Spatial2D::Raster::CDBRasterDataset*dataset</returns>
	EarthView::World::Spatial2D::Raster::CDBRasterDataset*asDataset();
	///<summary>
	///设置NodataValue
	///</summary>
	/// <param name="dfNodataValue">影像数据的无效值</param>
	ev_void setNodataValue(_in ev_real64 dfNodataValue);
	///<summary>
	///设置金字塔级别
	///</summary>
	/// <param name="dfNodataValue">影像数据的无效值</param>
	ev_void setLevel(_in ev_int32 level){m_level = level;}
	///<summary>
	///获取NodataValue
	///</summary>
	/// <param name="dfNodataValue">影像数据的无效值,-1表示获取失败</param>
	///<returns>影像的无效值</returns>
	const ev_real64 getNodataValue()const;
ev_private:
	/// <summary>
	/// 键值对构造函数
	/// </summary>
	///<returns></returns>
	CDBRasterBand(_in EarthView::World::Core::CNameValuePairList* pList);
private:
	///<summary>
	///默认构造函数
	///</summary>
	CDBRasterBand();

	EarthView::World::Spatial2D::Raster::CRasterAttributeTable* computeRasterAttributeTable();
private:
	EarthView::World::Spatial2D::Raster::CBandHistogram     *m_pObjhistogram; ///频率直方图
	EarthView::World::Spatial2D::Raster::CRasterHistogram*      m_pHistogram;
	EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*   m_pObjStatistics;///统计信息类
	EarthView::World::Spatial::Display::CColorTable*           m_pColorTable;
	EarthView::World::Spatial2D::Raster::CRasterAttributeTable*  m_pAttributeTable;
	EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*    m_pApproxStatistics;  //近似统计值
	ev_int32            m_iBand;          ///该波段之波段索引
	ev_int32            m_level;          ///该波段之金字塔级别
	EarthView::World::Spatial2D::Raster::CDBRasterDataset     *m_pRasterDataset; ///栅格数据集对象
	EarthView::World::Spatial2D::Raster::CDBRasterDatasetOperator     *m_pOpr; ///栅格数据集数据库操作对象
	friend class CDBRasterDataset;///
	friend class CDBRasterDatasetOperator;
};
		}
	}
}}



#endif