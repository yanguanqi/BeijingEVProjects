package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Link to another skeleton to share animations
public class LinkedSkeletonAnimationSource extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::LinkedSkeletonAnimationSource", new LinkedSkeletonAnimationSourceClassFactory());
	}

	native private String get_skeletonName_void(long pNativeObject);
	public String get_skeletonName()
	{
		String jniValue = get_skeletonName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_skeletonName_EVString (long pNativeObject, String value);
	public void set_skeletonName(String skeletonName)
	{
		String skeletonNameParamValue = skeletonName;
		
		set_skeletonName_EVString(this.nativeObject.pointer, skeletonNameParamValue);
	}
	
	native private long get_pSkeleton_void(long pNativeObject);
	public com.earthview.world.graphic.SkeletonPtr get_pSkeleton()
	{
		long jniValue = get_pSkeleton_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.SkeletonPtr __returnValue = new com.earthview.world.graphic.SkeletonPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CSkeletonPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SkeletonPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonPtr");
		}
		return __returnValue;
	}
	
	native private void set_pSkeleton_CSkeletonPtr (long pNativeObject, long value);
	public void set_pSkeleton(com.earthview.world.graphic.SkeletonPtr pSkeleton)
	{
		long pSkeletonParamValue = pSkeleton.nativeObject.pointer;
		
		set_pSkeleton_CSkeletonPtr(this.nativeObject.pointer, pSkeletonParamValue);
	}
	
	native private double get_scale_void(long pNativeObject);
	public double get_scale()
	{
		double jniValue = get_scale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_scale_Real (long pNativeObject, double value);
	public void set_scale(double scale)
	{
		double scaleParamValue = scale;
		
		set_scale_Real(this.nativeObject.pointer, scaleParamValue);
	}
	
	public LinkedSkeletonAnimationSource() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("LinkedSkeletonAnimationSource", null);
	}

	public LinkedSkeletonAnimationSource(String skelName, double scl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer skelNamePtr = new BasePointer(skelName);
		list.add("skelName", skelNamePtr.get());
		BasePointer sclPtr = new BasePointer(scl);
		list.add("scl", sclPtr.get());
		Create("LinkedSkeletonAnimationSource", list);
	}

	public LinkedSkeletonAnimationSource(String skelName, double scl, com.earthview.world.graphic.SkeletonPtr skelPtr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer skelNamePtr = new BasePointer(skelName);
		list.add("skelName", skelNamePtr.get());
		BasePointer sclPtr = new BasePointer(scl);
		list.add("scl", sclPtr.get());
		BasePointer skelPtrPtr = new BasePointer(skelPtr);
		list.add("skelPtr", skelPtrPtr.get());
		Create("LinkedSkeletonAnimationSource", list);
	}

	public LinkedSkeletonAnimationSource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LinkedSkeletonAnimationSource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LinkedSkeletonAnimationSource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LinkedSkeletonAnimationSource obj = null;
 		if(baseObj instanceof LinkedSkeletonAnimationSource)
		{
			obj = (LinkedSkeletonAnimationSource)baseObj;
		} else {
			obj = new LinkedSkeletonAnimationSource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "LinkedSkeletonAnimationSource");
			obj.increaseCast();
		}

		return obj;
	}
}
