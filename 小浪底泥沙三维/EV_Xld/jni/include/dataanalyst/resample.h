

#if !defined(_Resample_H_RRRR_)
#define _Resample_H_RRRR_

#include "dataanalystenum.h"
#include "spatialinterface/irasterdataset.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
           namespace GeoCorretion
			{
class  CRectification;
///<summary>
///重采样参数结构体
///</summary>
//extern "C" {
	  ///<summary>
	  ///返回推荐的目标图像大小,以及像素坐标系与
	  ///对应坐标系之间的转换 
	  ///</summary>
	  ///<param name ="pTrans">in 变换结构体</param>
	  ///<param name ="nWidth">inout 输入源图像的宽度，返回目标图像的宽度</param>
	  ///<param name ="nHeight">inout 输入源图像的高度，返回目标图像的高度</param>
	  ///<param name = "dfGeoTransform">inout,输入源图像的geotrans，输出目标图像的geotrans</param>
	  
	   RECTIFY_DLL ev_void getSuggestOutPut(_in TransformH* pTrans,_inout ev_int32 &nWidth,_inout ev_int32 &nHeight,_inout ev_real64*dfGeoTransform);
	   /*///<summary>
       ///创建一个常变换句柄，外部不能释放
	   ///</summary>
	   ///<param name ="reftify">纠正对象</param>
	   ///<returns>变换类句柄</returns>
	   RECTIFY_DLL const TransformH* genCreateTransFromRectify(_in const CRectification*reftify);*/
	   ///<summary>
       ///创建一个变换句柄，释放调用destroyTransformH
	   ///</summary>
	   ///<param name ="pRectifyRef">待纠正影像空间参考</param>
	   ///<param name ="pStdImageRef">标准影像的空间参考</param>
	   ///<param name ="pParameter">in 纠正类指针</param>
	   ///<param name ="iCount">参数个数</param>
	   ///<returns>变换类句柄</returns>

	   RECTIFY_DLL _extfree TransformH* genCreateTransformerArg(_in const SpatialRefH* pRectifyRef,
		                                              _in const SpatialRefH* pStdImageRef,
		                                              _in const ev_real64*pParameter,_in ev_int32 iCount);

	    ///<summary>
       ///销毁一个变换句柄
	   ///</summary>
	   ///<param name ="hTrans">in 变换类句柄</param>
	   RECTIFY_DLL ev_void destroyTransformH(_in TransformH* hTrans);
//}///extern "C"

///////////////////////////////////////////////////////////////////////////////////////////////
//class RectifyResampleWarper
//////////////////////////////////////////////////////////////////////////////////////////////
///<summary>
///重采样结构体
///采样间WorkingDataType与 源数据集相同
///</summary>
class RECTIFY_DLL RectifyResampleWarper:public EarthView::World::Core::CAllocatedObject 
{  
	ev_private:
	     RectifyResampleWarper( EarthView::World::Core::CNameValuePairList *pList );
public:
	 ///<summary>
	 ///构造函数
	 ///</summary>
	  RectifyResampleWarper();
	 ///<summary>
	 ///析构函数
	 ///</summary>
	 ~RectifyResampleWarper(){}
	  ///<summary>
	 ///赋值构造函数
	 ///</summary>
	  EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper&operator=(const EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper& other);
public:
	///所有分配释放均由外部进行
	RasterDatasetH  *hSrc;              ///源数据集,必须设置
	//EarthView::World::Spatial::GeoDataset::IRasterDataset* hSrc;
	EarthView::World::Spatial2D::GeoCorretion::ResampleType    resampleMth;       ///重采样方法，默认是最邻近
    ev_void            *hTransformer;     ///变换类,必须设置
    ProgressInfoH*   ProgressArg;       ///进度条类,默认为空
	ev_real64          dfNodatavalue;     ///空影像值,默认为0
	ev_int32             nWorkingBandCount; ///采样波段数，默认为3
	ev_int32*            pWorkingBandIndex; ///采样波段索引，默认为空
private:
	///禁用拷贝构造函数
	RectifyResampleWarper(const RectifyResampleWarper&other);
};

//////////////////////////////////////////////////////////////////////////////////////
//class ResamplerOprator
///////////////////////////////////////////////////////////////////////////////////////
///<summary>
///重采样变换类
///<summary>
class RECTIFY_DLL  ResamplerOprator:public EarthView::World::Core::CAllocatedObject
{    
	ev_private:
	    ResamplerOprator( EarthView::World::Core::CNameValuePairList *pList );
	    
public:
	   ///<summary>
	   ///构造函数
	   ///</summary>
       ResamplerOprator();

       ///<summary>
	   ///析构函数
	   ///</summary>
	   ~ResamplerOprator();

	   ///<summary>
	   ///初始化，resample完成类
	   ///</summary>
	   /// <param name="warper">重采样参数结构体</param> 
	   ///<returns>0标识成功，-1标识参数不完全</returns>
	   ev_int32 inlitialOperator(_in const EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper&warper);

	   ///<summary>
	   ///创建一个数据集，并执行纠正
	   ///</summary>
	   ///<param name="pszFullpath">目标数据集文件路径</param>
	   ///<returns>0,标识成功，1标识失败</returns>
       ev_bool CreateAndResample(_in const ev_char*pszFullpath);
	   ///<summary>
	   ///分块重采样，并返回指定范围的数据
	   ///</summary>
	   ///<param name="pBuffer">指定范围数据，由user分配与释放</param>
	   ///<returns></returns>
	   ev_bool resampleBuffer(_in ev_int32 destOffX,_in ev_int32 destOffY,_in ev_int32 W,
		                     _in ev_int32 H,_out ev_uchar*pBuffer);
protected:
	  ///<summary>
	  ///重采样函数
	  ///</summary>
	  ///<param name="pSrc">源数据指针</param>
	  ///<param name="SrcW">Src宽度</param>
	  ///<param name="SrcH">Src高度</param>
	  ///<param name="nBandCount">波段数</param>
	  ///<param name="pDst">目标数据缓冲</param>
	  ///<param name="W">目标缓冲宽度</param>
	  ///<param name="H">目标缓冲高度</param>
	  ///<param name="pnSrcOff">缓冲区左上角起点，像素单位</param>
	  ///<param name="pdfX">目标缓冲区指定位置对应源图像的坐标X</param>
	  ///<param name="pdfY">目标缓冲区指定位置对应源图像的坐标Y</param>
	  
	  ev_void resampleWarp(ev_uchar*pSrc,ev_int32 SrcW,ev_int32 SrcH,ev_int32 nBandCount,ev_uchar*pDst,
		                 ev_int32 W,ev_int32 H,ev_int32*pnSrcOff,ev_real64*pdfX,ev_real64*pdfY);
private:
	///最邻近重采样
	ev_void NearestResample(ev_uchar*pSrc,ev_int32 SrcW,ev_int32 SrcH,ev_int32 nBandCount,ev_uchar*pDst,
		                 ev_int32 W,ev_int32 H,ev_int32*pnSrcOff,ev_real64*pdfX,ev_real64*pdfY);
	///双线性插值
	ev_void BilinearResample(ev_uchar*pSrc,ev_int32 SrcW,ev_int32 SrcH,ev_int32 nBandCount,ev_uchar*pDst,
		                 ev_int32 W,ev_int32 H,ev_int32*pnSrcOff,ev_real64*pdfX,ev_real64*pdfY);
	
	///立方卷积，边缘处采用双线性插值
	ev_void CubicResample(ev_uchar*pSrc,ev_int32 SrcW,ev_int32 SrcH,ev_int32 nBandCount,ev_uchar*pDst,
		               ev_int32 W,ev_int32 H,ev_int32*pnSrcOff,ev_real64*pdfX,ev_real64*pdfY);
	
	///计算变换参数,调用处显示delete[] 
	ev_void PerformWarp(const ev_real64*dfDestGeotrans,ev_int32 offsetX,ev_int32 offsetY,ev_int32 W, ev_int32 H,ev_real64*&pdfX,ev_real64*&pdfY);

	///获取源图像指定位置像素
	
	ev_real64 GetSrcValue(ev_void*src,ev_uint32 offset);
	
	///设置目标图像指定位置像素的值
	
	ev_void SetDestValue(ev_void*dest,ev_uint32 offset,ev_real64 dfValue);
	
	///反算源图像的外接矩形 
	ev_void GetSrcRect(const ev_real64*dfDestGeotrans,ev_int32 &offsetX,ev_int32&offsetY,ev_int32 &W,ev_int32 &H);

private:
    EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper rspWarper;         ///重采样结构体
	ev_int32                   m_WorkingDataType; ///运行中采用的图像的数据类型
	

	friend  ev_int32 GetBilinearValue(ResamplerOprator& obj,ev_uchar*pSrc, ev_int32 iBand,ev_int32 nSrcW,ev_int32 nSrcH,ev_real64 dfSrcX, 
	                       ev_real64 dfSrcY, ev_real64&dfValue);
};

}}}}///namespace
#endif//_Resample_H_

