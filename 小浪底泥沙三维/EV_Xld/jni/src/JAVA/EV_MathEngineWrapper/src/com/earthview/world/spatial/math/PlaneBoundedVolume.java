package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 凸多面体定义了射线操作
 */
public class PlaneBoundedVolume extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CPlaneBoundedVolume", new PlaneBoundedVolumeClassFactory());
	}

	native private long get_planes_void(long pNativeObject);
	public com.earthview.world.spatial.math.PlaneList get_planes()
	{
		long jniValue = get_planes_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.PlaneList __returnValue = new com.earthview.world.spatial.math.PlaneList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "PlaneList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.PlaneList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "PlaneList");
		}
		return __returnValue;
	}
	
	native private void set_planes_PlaneList (long pNativeObject, long value);
	public void set_planes(com.earthview.world.spatial.math.PlaneList planes)
	{
		long planesParamValue = planes.nativeObject.pointer;
		
		set_planes_PlaneList(this.nativeObject.pointer, planesParamValue);
	}
	
	native private int get_outside_void(long pNativeObject);
	public com.earthview.world.spatial.math.Plane.Side get_outside()
	{
		int jniValue = get_outside_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.math.Plane.Side.toEnum(jniValue);
	}
	
	native private void set_outside_Side (long pNativeObject, int value);
	public void set_outside(com.earthview.world.spatial.math.Plane.Side outside)
	{
		int outsideParamValue = outside.getValue();
		
		set_outside_Side(this.nativeObject.pointer, outsideParamValue);
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public PlaneBoundedVolume() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPlaneBoundedVolume", null);
	}

	/**
	 * 构造函数
	 * @param theOutside 外向面类型
	 */
	public PlaneBoundedVolume(com.earthview.world.spatial.math.Plane.Side theOutside) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer theOutsidePtr = new BasePointer(theOutside);
		list.add("theOutside", theOutsidePtr.get());
		Create("CPlaneBoundedVolume", list);
	}

	native private boolean intersects_CAxisAlignedBox(long pNativeObject, long box);
	/**
	 * 判断是否与平行轴线框盒相交
	 * @param box 线框盒对像
	 * @return 返回是否相交，和若相交其距离
	 */
	public boolean intersects(com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long boxParamValue = box.nativeObject.pointer;
		boolean returnValue = intersects_CAxisAlignedBox(this.nativeObject.pointer, boxParamValue);
		return returnValue;
	}
	native private boolean intersects_CSphere(long pNativeObject, long sphere);
	/**
	 * 判断是否与球体相交
	 * @param sphere 球体对像
	 * @return 返回是否相交，和若相交其距离
	 */
	public boolean intersects(com.earthview.world.spatial.math.Sphere sphere)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean returnValue = intersects_CSphere(this.nativeObject.pointer, sphereParamValue);
		return returnValue;
	}
	native private long intersects_CRay(long pNativeObject, long ray);
	/**
	 * 判断是否与射线相交
	 * @param ray 射线对像
	 * @return 返回是否相交，和若相交其距离
	 */
	public com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long returnValue = intersects_CRay(this.nativeObject.pointer, rayParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	public PlaneBoundedVolume(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PlaneBoundedVolume(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PlaneBoundedVolume fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PlaneBoundedVolume obj = null;
 		if(baseObj instanceof PlaneBoundedVolume)
		{
			obj = (PlaneBoundedVolume)baseObj;
		} else {
			obj = new PlaneBoundedVolume(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPlaneBoundedVolume");
			obj.increaseCast();
		}

		return obj;
	}
}
