

#if !defined (_RECTIFICSTION_H_)
#define _RECTIFICSTION_H_


#include "dataanalystenum.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
           namespace GeoCorretion
			{
class Transformer;

class EV_DataAnalyst_DLL CRectification:public EarthView::World::Core::CAllocatedObject
{   
	ev_private:
	     CRectification( EarthView::World::Core::CNameValuePairList *pList );
	     
public:
	///<summary>
	///构造函数
	///</summary>
	/// <param name="eModel">数学模型</param> 
	CRectification(_in EarthView::World::Spatial2D::GeoCorretion::RectifyModelType eModel);
	
	///<summary>
	///构造函数
	///</summary>
	CRectification();
	///<summary>
	///析构函数
	///</summary>
	~CRectification();
	///<summary>
	///设置待纠正影像空间参考,与标准影像同一参考时
	///可以为空
	///外部创建与释放
	///</summary>
	/// <param name="pref">空间参考</param> 
	
	ev_void setRectifySpatialRef(_in SpatialRefH* ref_pRef);

	///<summary>
	///设置标准影像的空间参考,可为NULL
	///为空时表示，待配准影像与标准影像是同
	///外部创建与释放
	///</summary>
	/// <param name="pRef">空间参考</param> 

	ev_void setStdImgSpatialRef(_in SpatialRefH* ref_pRef);
	///<summary>
	///设置纠正选用数学模型
	///</summary>
	/// <param name="eModel">数学模型</param> 
	ev_void setRectifyModel(_in EarthView::World::Spatial2D::GeoCorretion::RectifyModelType eModel);
	///<summary>
	///设置纠正选用数学模型
	///</summary>
	/// <returns>数学模型</returns> 
	
	EarthView::World::Spatial2D::GeoCorretion::RectifyModelType getRectifyModel()const;

	///<summary>
	///设置坐标数据，用于建立误差矩阵
	///外部数据在该对象作用域结束后不会被释放
	///</summary>
	/// <param name="pts">坐标点对数</param>
	/// <param name="pSrcCrd">源坐标</param>
	/// <param name="pDstCrd">目标坐标</param>
	/// <param name="nCrdSpace">目标坐标维度循环间隔标记，例如XYXY标记1，XXX...YYYY...标记0</param>
	/// <param name="pProcessFlag">标记某对点是否被使用，0表示被使用，1表示丢弃</param>
	/// <returns>0计算失败；1计算成功,-1内存错误，-2未设置数学模型</returns>
	
	ev_int32 setDataToCompute(_in ev_int32 nPts,_in ev_real64*pSrcCrd,_in ev_real64 *pDstCrd,
		                  _in ev_int32 nCrdSpace,_in ev_int32*pProcessFlag);
	///<summary>
	///获取数学模型所用参数,外部不能释放指针
	///</summary>
	/// <param name = "idimension">模型参数维度</param>
	/// <returns>模型参数,与X维在前，Y维在后</returns>
	const ev_real64* getParameter(_out ev_int32&idimension)const;
	///<summary>
	///算过程残差，外部不能释放指针
	///</summary>
	/// <param name = "idimension">模型参数维度</param>
	/// <returns>模型残差,与X维在前，Y维在后</returns>
	const ev_real64* getBias(_out ev_int32&idimension)const;
	
	///<summary>
	///获取变换参数
	///</summary>
	///<returns>变换参数</returns>

	const TransformH*getTransformer()const ;
	///<summary>
	///正解计算
	///</summary>
	///<returns>1，变换成功，0变换失败</returns>
	ev_bool transformForward(_in ev_int32 nPts,_inout ev_real64*pDfX,_inout ev_real64*pDfY);
	///<summary>
	///反解计算
	///</summary>
	///<returns>1，变换成功，0变换失败</returns>
	ev_bool transformInverse(_in ev_int32 nPts,_inout ev_real64*pDfX,_inout ev_real64*pDfY);

private:
	CRectification(const CRectification&other);
private:
	
	ev_real64*          m_pBias;        ///残差数
	ev_int32              m_nBiasDim;     ///残差数维度
	EarthView::World::Spatial2D::GeoCorretion::RectifyModelType m_eModel;      ///数学模型

	Transformer     *m_pTransformer;  ///变换模型
};

}}}}////namespace

#endif//_RECTIFICSTION_H_

