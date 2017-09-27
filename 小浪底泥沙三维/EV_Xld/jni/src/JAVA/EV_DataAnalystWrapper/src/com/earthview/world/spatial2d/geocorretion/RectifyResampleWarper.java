package com.earthview.world.spatial2d.geocorretion;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * /重采样结构体/采样间WorkingDataType与源数据集相同/
 */
public class RectifyResampleWarper extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper", new RectifyResampleWarperClassFactory());
	}

	/**
	 * 构造函数
	 */
	public RectifyResampleWarper() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RectifyResampleWarper", null);
	}

	native private long OperatorAssign_RectifyResampleWarper(long pNativeObject, long other);
	/**
	 * 赋值构造函数
	 */
	public com.earthview.world.spatial2d.geocorretion.RectifyResampleWarper OperatorAssign(com.earthview.world.spatial2d.geocorretion.RectifyResampleWarper other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_RectifyResampleWarper(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.spatial2d.geocorretion.RectifyResampleWarper __returnValue = new com.earthview.world.spatial2d.geocorretion.RectifyResampleWarper(CreatedWhenConstruct.CWC_NotToCreate, "RectifyResampleWarper");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.geocorretion.RectifyResampleWarper)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RectifyResampleWarper");
		}
		return __returnValue;
	}
	native private long get_hSrc_void(long pNativeObject);
	public VoidPointer get_hSrc()
	{
		long jniValue = get_hSrc_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_hSrc_void (long pNativeObject, long value);
	public void set_hSrc(VoidPointer hSrc)
	{
		long hSrcParamValue = (hSrc == null ? 0L : hSrc.nativeObject.pointer);
		
		set_hSrc_void(this.nativeObject.pointer, hSrcParamValue);
	}
	
	native private int get_resampleMth_void(long pNativeObject);
	public com.earthview.world.spatial2d.geocorretion.ResampleType get_resampleMth()
	{
		int jniValue = get_resampleMth_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial2d.geocorretion.ResampleType.toEnum(jniValue);
	}
	
	native private void set_resampleMth_ResampleType (long pNativeObject, int value);
	public void set_resampleMth(com.earthview.world.spatial2d.geocorretion.ResampleType resampleMth)
	{
		int resampleMthParamValue = resampleMth.getValue();
		
		set_resampleMth_ResampleType(this.nativeObject.pointer, resampleMthParamValue);
	}
	
	native private long get_hTransformer_void(long pNativeObject);
	public VoidPointer get_hTransformer()
	{
		long jniValue = get_hTransformer_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_hTransformer_void (long pNativeObject, long value);
	public void set_hTransformer(VoidPointer hTransformer)
	{
		long hTransformerParamValue = (hTransformer == null ? 0L : hTransformer.nativeObject.pointer);
		
		set_hTransformer_void(this.nativeObject.pointer, hTransformerParamValue);
	}
	
	native private long get_ProgressArg_void(long pNativeObject);
	public VoidPointer get_ProgressArg()
	{
		long jniValue = get_ProgressArg_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_ProgressArg_void (long pNativeObject, long value);
	public void set_ProgressArg(VoidPointer ProgressArg)
	{
		long ProgressArgParamValue = (ProgressArg == null ? 0L : ProgressArg.nativeObject.pointer);
		
		set_ProgressArg_void(this.nativeObject.pointer, ProgressArgParamValue);
	}
	
	native private double get_dfNodatavalue_void(long pNativeObject);
	public double get_dfNodatavalue()
	{
		double jniValue = get_dfNodatavalue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dfNodatavalue_ev_real64 (long pNativeObject, double value);
	public void set_dfNodatavalue(double dfNodatavalue)
	{
		double dfNodatavalueParamValue = dfNodatavalue;
		
		set_dfNodatavalue_ev_real64(this.nativeObject.pointer, dfNodatavalueParamValue);
	}
	
	native private int get_nWorkingBandCount_void(long pNativeObject);
	public int get_nWorkingBandCount()
	{
		int jniValue = get_nWorkingBandCount_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_nWorkingBandCount_ev_int32 (long pNativeObject, int value);
	public void set_nWorkingBandCount(int nWorkingBandCount)
	{
		int nWorkingBandCountParamValue = nWorkingBandCount;
		
		set_nWorkingBandCount_ev_int32(this.nativeObject.pointer, nWorkingBandCountParamValue);
	}
	
	native private long get_pWorkingBandIndex_void(long pNativeObject);
	public IntegerPointer get_pWorkingBandIndex()
	{
		long jniValue = get_pWorkingBandIndex_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		IntegerPointer __returnValue = new IntegerPointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_pWorkingBandIndex_ev_int32 (long pNativeObject, long value);
	public void set_pWorkingBandIndex(IntegerPointer pWorkingBandIndex)
	{
		long pWorkingBandIndexParamValue = (pWorkingBandIndex == null ? 0L : pWorkingBandIndex.nativeObject.pointer);
		
		set_pWorkingBandIndex_ev_int32(this.nativeObject.pointer, pWorkingBandIndexParamValue);
	}
	
	public RectifyResampleWarper(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RectifyResampleWarper(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RectifyResampleWarper fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RectifyResampleWarper obj = null;
 		if(baseObj instanceof RectifyResampleWarper)
		{
			obj = (RectifyResampleWarper)baseObj;
		} else {
			obj = new RectifyResampleWarper(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RectifyResampleWarper");
			obj.increaseCast();
		}

		return obj;
	}
}
