package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 可见对象信息类原为struct类型，管理场景中被发现的可见对象
 */
public class VisibleObjectsBoundsInfo extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::VisibleObjectsBoundsInfo", new VisibleObjectsBoundsInfoClassFactory());
	}

	native private long get_aabb_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox get_aabb()
	{
		long jniValue = get_aabb_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	
	native private void set_aabb_CAxisAlignedBox (long pNativeObject, long value);
	public void set_aabb(com.earthview.world.spatial.math.AxisAlignedBox aabb)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		
		set_aabb_CAxisAlignedBox(this.nativeObject.pointer, aabbParamValue);
	}
	
	native private long get_receiverAabb_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox get_receiverAabb()
	{
		long jniValue = get_receiverAabb_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	
	native private void set_receiverAabb_CAxisAlignedBox (long pNativeObject, long value);
	public void set_receiverAabb(com.earthview.world.spatial.math.AxisAlignedBox receiverAabb)
	{
		long receiverAabbParamValue = receiverAabb.nativeObject.pointer;
		
		set_receiverAabb_CAxisAlignedBox(this.nativeObject.pointer, receiverAabbParamValue);
	}
	
	native private double get_minDistance_void(long pNativeObject);
	public double get_minDistance()
	{
		double jniValue = get_minDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_minDistance_Real (long pNativeObject, double value);
	public void set_minDistance(double minDistance)
	{
		double minDistanceParamValue = minDistance;
		
		set_minDistance_Real(this.nativeObject.pointer, minDistanceParamValue);
	}
	
	native private double get_maxDistance_void(long pNativeObject);
	public double get_maxDistance()
	{
		double jniValue = get_maxDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_maxDistance_Real (long pNativeObject, double value);
	public void set_maxDistance(double maxDistance)
	{
		double maxDistanceParamValue = maxDistance;
		
		set_maxDistance_Real(this.nativeObject.pointer, maxDistanceParamValue);
	}
	
	native private double get_minDistanceInFrustum_void(long pNativeObject);
	public double get_minDistanceInFrustum()
	{
		double jniValue = get_minDistanceInFrustum_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_minDistanceInFrustum_Real (long pNativeObject, double value);
	public void set_minDistanceInFrustum(double minDistanceInFrustum)
	{
		double minDistanceInFrustumParamValue = minDistanceInFrustum;
		
		set_minDistanceInFrustum_Real(this.nativeObject.pointer, minDistanceInFrustumParamValue);
	}
	
	native private double get_maxDistanceInFrustum_void(long pNativeObject);
	public double get_maxDistanceInFrustum()
	{
		double jniValue = get_maxDistanceInFrustum_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_maxDistanceInFrustum_Real (long pNativeObject, double value);
	public void set_maxDistanceInFrustum(double maxDistanceInFrustum)
	{
		double maxDistanceInFrustumParamValue = maxDistanceInFrustum;
		
		set_maxDistanceInFrustum_Real(this.nativeObject.pointer, maxDistanceInFrustumParamValue);
	}
	
	public VisibleObjectsBoundsInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("VisibleObjectsBoundsInfo", null);
	}

	native private void reset_void(long pNativeObject);
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void merge_CAxisAlignedBox_CSphere_CCamera_ev_bool(long pNativeObject, long boxBounds, long sphereBounds, long cam, boolean receiver);
	public void merge(com.earthview.world.spatial.math.AxisAlignedBox boxBounds, com.earthview.world.spatial.math.Sphere sphereBounds, com.earthview.world.graphic.Camera cam, boolean receiver)
	{
		long boxBoundsParamValue = boxBounds.nativeObject.pointer;
		long sphereBoundsParamValue = sphereBounds.nativeObject.pointer;
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		boolean receiverParamValue = receiver;
		merge_CAxisAlignedBox_CSphere_CCamera_ev_bool(this.nativeObject.pointer, boxBoundsParamValue, sphereBoundsParamValue, camParamValue, receiverParamValue);
	}
	native private void merge_CAxisAlignedBox_CSphere_CCamera(long pNativeObject, long boxBounds, long sphereBounds, long cam);
	public void merge(com.earthview.world.spatial.math.AxisAlignedBox boxBounds, com.earthview.world.spatial.math.Sphere sphereBounds, com.earthview.world.graphic.Camera cam)
	{
		long boxBoundsParamValue = boxBounds.nativeObject.pointer;
		long sphereBoundsParamValue = sphereBounds.nativeObject.pointer;
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		merge_CAxisAlignedBox_CSphere_CCamera(this.nativeObject.pointer, boxBoundsParamValue, sphereBoundsParamValue, camParamValue);
	}
	native private void mergeNonRenderedButInFrustum_CAxisAlignedBox_CSphere_CCamera(long pNativeObject, long boxBounds, long sphereBounds, long cam);
	public void mergeNonRenderedButInFrustum(com.earthview.world.spatial.math.AxisAlignedBox boxBounds, com.earthview.world.spatial.math.Sphere sphereBounds, com.earthview.world.graphic.Camera cam)
	{
		long boxBoundsParamValue = boxBounds.nativeObject.pointer;
		long sphereBoundsParamValue = sphereBounds.nativeObject.pointer;
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		mergeNonRenderedButInFrustum_CAxisAlignedBox_CSphere_CCamera(this.nativeObject.pointer, boxBoundsParamValue, sphereBoundsParamValue, camParamValue);
	}
	public VisibleObjectsBoundsInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VisibleObjectsBoundsInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VisibleObjectsBoundsInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VisibleObjectsBoundsInfo obj = null;
 		if(baseObj instanceof VisibleObjectsBoundsInfo)
		{
			obj = (VisibleObjectsBoundsInfo)baseObj;
		} else {
			obj = new VisibleObjectsBoundsInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "VisibleObjectsBoundsInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
