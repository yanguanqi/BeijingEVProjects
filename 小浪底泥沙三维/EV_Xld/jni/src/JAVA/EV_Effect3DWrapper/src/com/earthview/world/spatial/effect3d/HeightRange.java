package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 高度范围类，记录高度范围，并可以将高度范围切分为多份
 */
public class HeightRange extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CHeightRange", new HeightRangeClassFactory());
	}

	/**
	 * 构造函数
	 * @param minHeight 最小高度
	 * @param maxHeight 最大高度
	 */
	public HeightRange() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CHeightRange", null);
	}

	public HeightRange(float minHeight, float maxHeight) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer minHeightPtr = new BasePointer(minHeight);
		list.add("minHeight", minHeightPtr.get());
		BasePointer maxHeightPtr = new BasePointer(maxHeight);
		list.add("maxHeight", maxHeightPtr.get());
		Create("CHeightRange", list);
	}

	native private void splitRandom_ev_int32(long pNativeObject, int levels);
	/**
	 * 将高度范围随机切分为n份
	 * @param levels 份数
	 */
	public void splitRandom(int levels)
	{
		int levelsParamValue = levels;
		splitRandom_ev_int32(this.nativeObject.pointer, levelsParamValue);
	}
	native private int subHeightRangeCount_void(long pNativeObject);
	/**
	 * 获得子高度范围的数量
	 * @return 高度范围的份数
	 */
	public int subHeightRangeCount()
	{
		int returnValue = subHeightRangeCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSubHeightRange_ev_int32(long pNativeObject, int index);
	/**
	 * 获得第n份子高度范围
	 * @param index 子高度范围序号
	 * @return 子高度范围
	 */
	public com.earthview.world.spatial.effect3d.HeightRange getSubHeightRange(int index)
	{
		int indexParamValue = index;
		long returnValue = getSubHeightRange_ev_int32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.effect3d.HeightRange __returnValue = new com.earthview.world.spatial.effect3d.HeightRange(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHeightRange");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.HeightRange)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHeightRange");
		}
		return __returnValue;
	}
	native private float center_void(long pNativeObject);
	/**
	 * 返回范围中心
	 */
	public float center()
	{
		float returnValue = center_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean OperatorEquals_CHeightRange(long pNativeObject, long other);
	/**
	 * 重载==
	 * @return 比较结果
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.effect3d.HeightRange other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CHeightRange(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CHeightRange(long pNativeObject, long other);
	/**
	 * 重载!=
	 * @return 比较结果
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.effect3d.HeightRange other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CHeightRange(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private float get_mfMaxHeight_void(long pNativeObject);
	public float get_mfMaxHeight()
	{
		float jniValue = get_mfMaxHeight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mfMaxHeight_ev_real32 (long pNativeObject, float value);
	public void set_mfMaxHeight(float mfMaxHeight)
	{
		float mfMaxHeightParamValue = mfMaxHeight;
		
		set_mfMaxHeight_ev_real32(this.nativeObject.pointer, mfMaxHeightParamValue);
	}
	
	native private float get_mfMinHeight_void(long pNativeObject);
	public float get_mfMinHeight()
	{
		float jniValue = get_mfMinHeight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mfMinHeight_ev_real32 (long pNativeObject, float value);
	public void set_mfMinHeight(float mfMinHeight)
	{
		float mfMinHeightParamValue = mfMinHeight;
		
		set_mfMinHeight_ev_real32(this.nativeObject.pointer, mfMinHeightParamValue);
	}
	
	native private static long get_ZERO_void();
	public static com.earthview.world.spatial.effect3d.HeightRange get_ZERO()
	{
		long jniValue = get_ZERO_void();
		
		com.earthview.world.spatial.effect3d.HeightRange __returnValue = new com.earthview.world.spatial.effect3d.HeightRange(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CHeightRange");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.HeightRange)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHeightRange");
		}
		return __returnValue;
	}
	
	native private boolean isIntersect_CHeightRange(long pNativeObject, long range);
	public boolean isIntersect(com.earthview.world.spatial.effect3d.HeightRange range)
	{
		long rangeParamValue = range.nativeObject.pointer;
		boolean returnValue = isIntersect_CHeightRange(this.nativeObject.pointer, rangeParamValue);
		return returnValue;
	}
	native private static double get_DEFAULTHEIGHT_void();
	public static double get_DEFAULTHEIGHT()
	{
		double jniValue = get_DEFAULTHEIGHT_void();
		
		return jniValue;
	}
	
	public HeightRange(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HeightRange(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static HeightRange fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HeightRange obj = null;
 		if(baseObj instanceof HeightRange)
		{
			obj = (HeightRange)baseObj;
		} else {
			obj = new HeightRange(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHeightRange");
			obj.increaseCast();
		}

		return obj;
	}
}
