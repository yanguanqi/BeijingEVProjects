package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///<summary>
///CCoordinateTransformation
///同一椭球基准的投影正反算
///不同椭球基准之间的转换，需要设置转换参数，否者可能
///结果不能满足精度要求
public class CoordinateTransformation extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CCoordinateTransformation", new CoordinateTransformationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::JCCoordinateTransformationProxy", new CoordinateTransformationClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public CoordinateTransformation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCoordinateTransformationProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.utility.CoordinateTransformation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setSourceCS_CSpatialReference_callback(long ref_objSrcCrdSys)
	{
		com.earthview.world.spatial.utility.SpatialReference ref_objSrcCrdSysParamValue = (ref_objSrcCrdSys == 0L ? null : new com.earthview.world.spatial.utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_objSrcCrdSysParamValue != null)
		{
		ref_objSrcCrdSysParamValue.setDelegate(true);
		ref_objSrcCrdSysParamValue.setInstancePointer(new InstancePointer(ref_objSrcCrdSys));
		IClassFactory ref_objSrcCrdSysParamValueClassFactory = GlobalClassFactoryMap.get(ref_objSrcCrdSysParamValue.getCppInstanceTypeName());
		if (ref_objSrcCrdSysParamValueClassFactory != null)
		{
			ref_objSrcCrdSysParamValue.setDelegate(true);
			ref_objSrcCrdSysParamValue = (com.earthview.world.spatial.utility.SpatialReference)ref_objSrcCrdSysParamValueClassFactory.create();
			ref_objSrcCrdSysParamValue.setDelegate(true);
			ref_objSrcCrdSysParamValue.setInstancePointer(new InstancePointer(ref_objSrcCrdSys));
		}
		}
		setSourceCS(ref_objSrcCrdSysParamValue);
	}

	native private void setSourceCS_CSpatialReference(long pNativeObject, long ref_objSrcCrdSys);
	/**
	 * 设置源坐标参考,；坐标转换结束，外边释放
	 * @param objSrcCrdSys 源坐标空间参考指针
	 */
	public void setSourceCS(com.earthview.world.spatial.utility.SpatialReference ref_objSrcCrdSys)
	{
		long ref_objSrcCrdSysParamValue = (ref_objSrcCrdSys == null ? 0L : ref_objSrcCrdSys.nativeObject.pointer);
		setSourceCS_CSpatialReference(this.nativeObject.pointer, ref_objSrcCrdSysParamValue);
	}
	native private void setSourceCS_CSpatialReference_NoVirtual(long pNativeObject, long ref_objSrcCrdSys);
	protected void setSourceCS_NoVirtual(com.earthview.world.spatial.utility.SpatialReference ref_objSrcCrdSys)
	{
		long ref_objSrcCrdSysParamValue = (ref_objSrcCrdSys == null ? 0L : ref_objSrcCrdSys.nativeObject.pointer);
		setSourceCS_CSpatialReference_NoVirtual(this.nativeObject.pointer, ref_objSrcCrdSysParamValue);
	}

	protected  void setTargetCS_CSpatialReference_callback(long ref_objDstCrdSys)
	{
		com.earthview.world.spatial.utility.SpatialReference ref_objDstCrdSysParamValue = (ref_objDstCrdSys == 0L ? null : new com.earthview.world.spatial.utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_objDstCrdSysParamValue != null)
		{
		ref_objDstCrdSysParamValue.setDelegate(true);
		ref_objDstCrdSysParamValue.setInstancePointer(new InstancePointer(ref_objDstCrdSys));
		IClassFactory ref_objDstCrdSysParamValueClassFactory = GlobalClassFactoryMap.get(ref_objDstCrdSysParamValue.getCppInstanceTypeName());
		if (ref_objDstCrdSysParamValueClassFactory != null)
		{
			ref_objDstCrdSysParamValue.setDelegate(true);
			ref_objDstCrdSysParamValue = (com.earthview.world.spatial.utility.SpatialReference)ref_objDstCrdSysParamValueClassFactory.create();
			ref_objDstCrdSysParamValue.setDelegate(true);
			ref_objDstCrdSysParamValue.setInstancePointer(new InstancePointer(ref_objDstCrdSys));
		}
		}
		setTargetCS(ref_objDstCrdSysParamValue);
	}

	native private void setTargetCS_CSpatialReference(long pNativeObject, long ref_objDstCrdSys);
	/**
	 * 设置目标坐标参考，坐标转换结束，外边释放
	 * @param objDstCrdSys 目标坐标参考指针
	 */
	public void setTargetCS(com.earthview.world.spatial.utility.SpatialReference ref_objDstCrdSys)
	{
		long ref_objDstCrdSysParamValue = (ref_objDstCrdSys == null ? 0L : ref_objDstCrdSys.nativeObject.pointer);
		setTargetCS_CSpatialReference(this.nativeObject.pointer, ref_objDstCrdSysParamValue);
	}
	native private void setTargetCS_CSpatialReference_NoVirtual(long pNativeObject, long ref_objDstCrdSys);
	protected void setTargetCS_NoVirtual(com.earthview.world.spatial.utility.SpatialReference ref_objDstCrdSys)
	{
		long ref_objDstCrdSysParamValue = (ref_objDstCrdSys == null ? 0L : ref_objDstCrdSys.nativeObject.pointer);
		setTargetCS_CSpatialReference_NoVirtual(this.nativeObject.pointer, ref_objDstCrdSysParamValue);
	}

	protected  void setTransParameter_CTransParameter_callback(long objTransParameter)
	{
		com.earthview.world.spatial.utility.TransParameter objTransParameterParamValue = (objTransParameter == 0L ? null : new com.earthview.world.spatial.utility.TransParameter(CreatedWhenConstruct.CWC_NotToCreate));
		if(objTransParameterParamValue != null)
		{
		objTransParameterParamValue.setDelegate(true);
		objTransParameterParamValue.setInstancePointer(new InstancePointer(objTransParameter));
		IClassFactory objTransParameterParamValueClassFactory = GlobalClassFactoryMap.get(objTransParameterParamValue.getCppInstanceTypeName());
		if (objTransParameterParamValueClassFactory != null)
		{
			objTransParameterParamValue.setDelegate(true);
			objTransParameterParamValue = (com.earthview.world.spatial.utility.TransParameter)objTransParameterParamValueClassFactory.create();
			objTransParameterParamValue.setDelegate(true);
			objTransParameterParamValue.setInstancePointer(new InstancePointer(objTransParameter));
		}
		}
		setTransParameter(objTransParameterParamValue);
	}

	native private void setTransParameter_CTransParameter(long pNativeObject, long objTransParameter);
	/**
	 * 设置基准转换参数，坐标转换结束，外边释放
	 * @param objTransParameter 转换参数指针
	 */
	public void setTransParameter(com.earthview.world.spatial.utility.TransParameter objTransParameter)
	{
		long objTransParameterParamValue = (objTransParameter == null ? 0L : objTransParameter.nativeObject.pointer);
		setTransParameter_CTransParameter(this.nativeObject.pointer, objTransParameterParamValue);
	}
	native private void setTransParameter_CTransParameter_NoVirtual(long pNativeObject, long objTransParameter);
	protected void setTransParameter_NoVirtual(com.earthview.world.spatial.utility.TransParameter objTransParameter)
	{
		long objTransParameterParamValue = (objTransParameter == null ? 0L : objTransParameter.nativeObject.pointer);
		setTransParameter_CTransParameter_NoVirtual(this.nativeObject.pointer, objTransParameterParamValue);
	}

	native private long getSourceCS_void(long pNativeObject);
	/**
	 * 获取源坐标参考
	 * @return 源坐标空间参考指针
	 */
	public com.earthview.world.spatial.utility.SpatialReference getSourceCS()
	{
		long returnValue = getSourceCS_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.SpatialReference __returnValue = new com.earthview.world.spatial.utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.SpatialReference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialReference");
		}
		return __returnValue;
	}
	native private long getTargetCS_void(long pNativeObject);
	/**
	 * 获取目标坐标参考
	 * @return 目标坐标参考指针
	 */
	public com.earthview.world.spatial.utility.SpatialReference getTargetCS()
	{
		long returnValue = getTargetCS_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.SpatialReference __returnValue = new com.earthview.world.spatial.utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate, "CSpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.SpatialReference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSpatialReference");
		}
		return __returnValue;
	}
	native private long getTransParameter_void(long pNativeObject);
	/**
	 * 获取基准转换参数
	 * @return 转换参数指针
	 */
	public com.earthview.world.spatial.utility.TransParameter getTransParameter()
	{
		long returnValue = getTransParameter_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.TransParameter __returnValue = new com.earthview.world.spatial.utility.TransParameter(CreatedWhenConstruct.CWC_NotToCreate, "CTransParameter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.TransParameter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTransParameter");
		}
		return __returnValue;
	}
	protected  int transform_ev_int32_ev_real64_ev_real64_ev_real64_callback(int nCount, long pdfX, long pdfY, long pdfZ)
	{
		int nCountParamValue = nCount;
		DoublePointer pdfXParamValue = (pdfX == 0L ? null : new DoublePointer(new InstancePointer(pdfX)));
		DoublePointer pdfYParamValue = (pdfY == 0L ? null : new DoublePointer(new InstancePointer(pdfY)));
		DoublePointer pdfZParamValue = (pdfZ == 0L ? null : new DoublePointer(new InstancePointer(pdfZ)));
		int returnValue = transform(nCountParamValue, pdfXParamValue, pdfYParamValue, pdfZParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int transform_ev_int32_ev_real64_ev_real64_ev_real64(long pNativeObject, int nCount, long pdfX, long pdfY, long pdfZ);
	/**
	 * 坐标转换
	 * @param nCount 坐标个数
	 * @param pdfX X坐标指针,东坐标(m)或经度(°)
	 * @param pdfY Y坐标指针,北坐标(m)或纬度(°)
	 * @param pdfZ Z坐标指针,椭球高度（m）
	 * @return 0表示成功正常
	 */
	public int transform(int nCount, DoublePointer pdfX, DoublePointer pdfY, DoublePointer pdfZ)
	{
		int nCountParamValue = nCount;
		long pdfXParamValue = (pdfX == null ? 0L : pdfX.nativeObject.pointer);
		long pdfYParamValue = (pdfY == null ? 0L : pdfY.nativeObject.pointer);
		long pdfZParamValue = (pdfZ == null ? 0L : pdfZ.nativeObject.pointer);
		int returnValue = transform_ev_int32_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, nCountParamValue, pdfXParamValue, pdfYParamValue, pdfZParamValue);
		return returnValue;
	}
	native private int transform_ev_int32_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, int nCount, long pdfX, long pdfY, long pdfZ);
	protected int transform_NoVirtual(int nCount, DoublePointer pdfX, DoublePointer pdfY, DoublePointer pdfZ)
	{
		int nCountParamValue = nCount;
		long pdfXParamValue = (pdfX == null ? 0L : pdfX.nativeObject.pointer);
		long pdfYParamValue = (pdfY == null ? 0L : pdfY.nativeObject.pointer);
		long pdfZParamValue = (pdfZ == null ? 0L : pdfZ.nativeObject.pointer);
		int returnValue = transform_ev_int32_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, nCountParamValue, pdfXParamValue, pdfYParamValue, pdfZParamValue);
		return returnValue;
	}

	protected  int transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_callback(int nCount, long pdfX, long pdfY, long pdfZ, long pBSuccesss)
	{
		int nCountParamValue = nCount;
		DoublePointer pdfXParamValue = (pdfX == 0L ? null : new DoublePointer(new InstancePointer(pdfX)));
		DoublePointer pdfYParamValue = (pdfY == 0L ? null : new DoublePointer(new InstancePointer(pdfY)));
		DoublePointer pdfZParamValue = (pdfZ == 0L ? null : new DoublePointer(new InstancePointer(pdfZ)));
		BooleanPointer pBSuccesssParamValue = (pBSuccesss == 0L ? null : new BooleanPointer(new InstancePointer(pBSuccesss)));
		int returnValue = transfromEx(nCountParamValue, pdfXParamValue, pdfYParamValue, pdfZParamValue, pBSuccesssParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(long pNativeObject, int nCount, long pdfX, long pdfY, long pdfZ, long pBSuccesss);
	/**
	 * 坐标转换
	 * @param nCount 坐标个数
	 * @param pdfX X坐标指针,东坐标(m)或经度(°)
	 * @param pdfY Y坐标指针，北坐标(m)或纬度(°)
	 * @param pdfZ Z坐标指针，椭球高度（m）
	 * @param pBSuccesss 每个坐标点转换成功标记
	 * @return 0表示成功正常,-1至少一个投影参考为空
	 */
	public int transfromEx(int nCount, DoublePointer pdfX, DoublePointer pdfY, DoublePointer pdfZ, BooleanPointer pBSuccesss)
	{
		int nCountParamValue = nCount;
		long pdfXParamValue = (pdfX == null ? 0L : pdfX.nativeObject.pointer);
		long pdfYParamValue = (pdfY == null ? 0L : pdfY.nativeObject.pointer);
		long pdfZParamValue = (pdfZ == null ? 0L : pdfZ.nativeObject.pointer);
		long pBSuccesssParamValue = (pBSuccesss == null ? 0L : pBSuccesss.nativeObject.pointer);
		int returnValue = transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(this.nativeObject.pointer, nCountParamValue, pdfXParamValue, pdfYParamValue, pdfZParamValue, pBSuccesssParamValue);
		return returnValue;
	}
	native private int transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_NoVirtual(long pNativeObject, int nCount, long pdfX, long pdfY, long pdfZ, long pBSuccesss);
	protected int transfromEx_NoVirtual(int nCount, DoublePointer pdfX, DoublePointer pdfY, DoublePointer pdfZ, BooleanPointer pBSuccesss)
	{
		int nCountParamValue = nCount;
		long pdfXParamValue = (pdfX == null ? 0L : pdfX.nativeObject.pointer);
		long pdfYParamValue = (pdfY == null ? 0L : pdfY.nativeObject.pointer);
		long pdfZParamValue = (pdfZ == null ? 0L : pdfZ.nativeObject.pointer);
		long pBSuccesssParamValue = (pBSuccesss == null ? 0L : pBSuccesss.nativeObject.pointer);
		int returnValue = transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_NoVirtual(this.nativeObject.pointer, nCountParamValue, pdfXParamValue, pdfYParamValue, pdfZParamValue, pBSuccesssParamValue);
		return returnValue;
	}

	native private static int transform_CSpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(long objSrcCrdSys, int nCount, long pdfX, long pdfY, boolean pForwardFlag);
	/**
	 * 提供某个投影坐标系下椭球面经纬度坐标和投影坐标之间的转换
	 * @param objSrcCrdSys 坐标空间参考指针，如果传入地理坐标系则不进行转换
	 * @param nCount 坐标个数
	 * @param pdfX X坐标指针,东坐标(m)或经度(°)
	 * @param pdfY Y坐标指针,北坐标(m)或纬度(°)
	 * @param pForwardFlag 正算标记,true表示从球面坐标到投影平面坐标
	 * @return 0表示成功正常
	 */
	public static int transform(com.earthview.world.spatial.utility.SpatialReference objSrcCrdSys, int nCount, DoublePointer pdfX, DoublePointer pdfY, boolean pForwardFlag)
	{
		long objSrcCrdSysParamValue = (objSrcCrdSys == null ? 0L : objSrcCrdSys.nativeObject.pointer);
		int nCountParamValue = nCount;
		long pdfXParamValue = (pdfX == null ? 0L : pdfX.nativeObject.pointer);
		long pdfYParamValue = (pdfY == null ? 0L : pdfY.nativeObject.pointer);
		boolean pForwardFlagParamValue = pForwardFlag;
		int returnValue = transform_CSpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(objSrcCrdSysParamValue, nCountParamValue, pdfXParamValue, pdfYParamValue, pForwardFlagParamValue);
		return returnValue;
	}
	public CoordinateTransformation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CoordinateTransformation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setSourceCS_CSpatialReference(long pNativeObject, String method);
	native protected void register_setTargetCS_CSpatialReference(long pNativeObject, String method);
	native protected void register_setTransParameter_CTransParameter(long pNativeObject, String method);
	native protected void register_transform_ev_int32_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setSourceCS_CSpatialReference(this.nativeObject.pointer, "setSourceCS_CSpatialReference_callback");
			this.register_setTargetCS_CSpatialReference(this.nativeObject.pointer, "setTargetCS_CSpatialReference_callback");
			this.register_setTransParameter_CTransParameter(this.nativeObject.pointer, "setTransParameter_CTransParameter_callback");
			this.register_transform_ev_int32_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "transform_ev_int32_ev_real64_ev_real64_ev_real64_callback");
			this.register_transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(this.nativeObject.pointer, "transfromEx_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_callback");
		}
	}
	
	public static CoordinateTransformation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CoordinateTransformation obj = null;
 		if(baseObj instanceof CoordinateTransformation)
		{
			obj = (CoordinateTransformation)baseObj;
		} else {
			obj = new CoordinateTransformation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCoordinateTransformation");
			obj.increaseCast();
		}

		return obj;
	}
}
