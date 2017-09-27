package com.earthview.world.spatial2d.geocorretion;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Rectification extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoCorretion::CRectification", new RectificationClassFactory());
	}

	/**
	 * 构造函数
	 * @param eModel 数学模型
	 */
	public Rectification(com.earthview.world.spatial2d.geocorretion.RectifyModelType eModel) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer eModelPtr = new BasePointer(eModel);
		list.add("eModel", eModelPtr.get());
		Create("CRectification", list);
	}

	/**
	 * 构造函数
	 */
	public Rectification() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRectification", null);
	}

	native private void setRectifySpatialRef_void(long pNativeObject, long ref_pRef);
	/**
	 * 设置待纠正影像空间参考,与标准影像同一参考时可以为空外部创建与释放
	 * @param pref 空间参考
	 */
	public void setRectifySpatialRef(VoidPointer ref_pRef)
	{
		long ref_pRefParamValue = (ref_pRef == null ? 0L : ref_pRef.nativeObject.pointer);
		setRectifySpatialRef_void(this.nativeObject.pointer, ref_pRefParamValue);
	}
	native private void setStdImgSpatialRef_void(long pNativeObject, long ref_pRef);
	/**
	 * 设置标准影像的空间参考,可为NULL为空时表示，待配准影像与标准影像是同外部创建与释放
	 * @param pRef 空间参考
	 */
	public void setStdImgSpatialRef(VoidPointer ref_pRef)
	{
		long ref_pRefParamValue = (ref_pRef == null ? 0L : ref_pRef.nativeObject.pointer);
		setStdImgSpatialRef_void(this.nativeObject.pointer, ref_pRefParamValue);
	}
	native private void setRectifyModel_RectifyModelType(long pNativeObject, int eModel);
	/**
	 * 设置纠正选用数学模型
	 * @param eModel 数学模型
	 */
	public void setRectifyModel(com.earthview.world.spatial2d.geocorretion.RectifyModelType eModel)
	{
		int eModelParamValue = eModel.getValue();
		setRectifyModel_RectifyModelType(this.nativeObject.pointer, eModelParamValue);
	}
	native private int getRectifyModel_void(long pNativeObject);
	/**
	 * 设置纠正选用数学模型
	 * @return 数学模型
	 */
	public com.earthview.world.spatial2d.geocorretion.RectifyModelType getRectifyModel()
	{
		int returnValue = getRectifyModel_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.geocorretion.RectifyModelType.toEnum(returnValue);
	}
	native private int setDataToCompute_ev_int32_ev_real64_ev_real64_ev_int32_ev_int32(long pNativeObject, int nPts, long pSrcCrd, long pDstCrd, int nCrdSpace, long pProcessFlag);
	/**
	 * 设置坐标数据，用于建立误差矩阵外部数据在该对象作用域结束后不会被释放
	 * @param pts 坐标点对数
	 * @param pSrcCrd 源坐标
	 * @param pDstCrd 目标坐标
	 * @param nCrdSpace 目标坐标维度循环间隔标记，例如XYXY标记1，XXX...YYYY...标记0
	 * @param pProcessFlag 标记某对点是否被使用，0表示被使用，1表示丢弃
	 * @return 0计算失败；1计算成功,-1内存错误，-2未设置数学模型
	 */
	public int setDataToCompute(int nPts, DoublePointer pSrcCrd, DoublePointer pDstCrd, int nCrdSpace, IntegerPointer pProcessFlag)
	{
		int nPtsParamValue = nPts;
		long pSrcCrdParamValue = (pSrcCrd == null ? 0L : pSrcCrd.nativeObject.pointer);
		long pDstCrdParamValue = (pDstCrd == null ? 0L : pDstCrd.nativeObject.pointer);
		int nCrdSpaceParamValue = nCrdSpace;
		long pProcessFlagParamValue = (pProcessFlag == null ? 0L : pProcessFlag.nativeObject.pointer);
		int returnValue = setDataToCompute_ev_int32_ev_real64_ev_real64_ev_int32_ev_int32(this.nativeObject.pointer, nPtsParamValue, pSrcCrdParamValue, pDstCrdParamValue, nCrdSpaceParamValue, pProcessFlagParamValue);
		return returnValue;
	}
	native private long getParameter_ev_int32(long pNativeObject, long idimension);
	/**
	 * 获取数学模型所用参数,外部不能释放指针
	 * @param idimension 模型参数维度
	 * @return 模型参数,与X维在前，Y维在后
	 */
	public DoublePointer getParameter(IntegerPointer idimension)
	{
		long idimensionParamValue = idimension.nativeObject.pointer;
		long returnValue = getParameter_ev_int32(this.nativeObject.pointer, idimensionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getBias_ev_int32(long pNativeObject, long idimension);
	/**
	 * 算过程残差，外部不能释放指针
	 * @param idimension 模型参数维度
	 * @return 模型残差,与X维在前，Y维在后
	 */
	public DoublePointer getBias(IntegerPointer idimension)
	{
		long idimensionParamValue = idimension.nativeObject.pointer;
		long returnValue = getBias_ev_int32(this.nativeObject.pointer, idimensionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getTransformer_void(long pNativeObject);
	/**
	 * 获取变换参数
	 * @return 变换参数
	 */
	public VoidPointer getTransformer()
	{
		long returnValue = getTransformer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean transformForward_ev_int32_ev_real64_ev_real64(long pNativeObject, int nPts, long pDfX, long pDfY);
	/**
	 * 正解计算
	 * @return 1，变换成功，0变换失败
	 */
	public boolean transformForward(int nPts, DoublePointer pDfX, DoublePointer pDfY)
	{
		int nPtsParamValue = nPts;
		long pDfXParamValue = (pDfX == null ? 0L : pDfX.nativeObject.pointer);
		long pDfYParamValue = (pDfY == null ? 0L : pDfY.nativeObject.pointer);
		boolean returnValue = transformForward_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, nPtsParamValue, pDfXParamValue, pDfYParamValue);
		return returnValue;
	}
	native private boolean transformInverse_ev_int32_ev_real64_ev_real64(long pNativeObject, int nPts, long pDfX, long pDfY);
	/**
	 * 反解计算
	 * @return 1，变换成功，0变换失败
	 */
	public boolean transformInverse(int nPts, DoublePointer pDfX, DoublePointer pDfY)
	{
		int nPtsParamValue = nPts;
		long pDfXParamValue = (pDfX == null ? 0L : pDfX.nativeObject.pointer);
		long pDfYParamValue = (pDfY == null ? 0L : pDfY.nativeObject.pointer);
		boolean returnValue = transformInverse_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, nPtsParamValue, pDfXParamValue, pDfYParamValue);
		return returnValue;
	}
	public Rectification(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Rectification(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Rectification fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Rectification obj = null;
 		if(baseObj instanceof Rectification)
		{
			obj = (Rectification)baseObj;
		} else {
			obj = new Rectification(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRectification");
			obj.increaseCast();
		}

		return obj;
	}
}
