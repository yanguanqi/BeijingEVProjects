package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 节点动画类的智能指针
 */
public class GlobeNodeTrackAnimationPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeNodeTrackAnimationPtr", new GlobeNodeTrackAnimationPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeNodeTrackAnimationPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeNodeTrackAnimationPtr", null);
	}

	public GlobeNodeTrackAnimationPtr(com.earthview.world.spatial3d.GlobeNodeTrackAnimation rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CGlobeNodeTrackAnimationPtr", list);
	}

	public GlobeNodeTrackAnimationPtr(com.earthview.world.spatial3d.GlobeNodeTrackAnimationPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CGlobeNodeTrackAnimationPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.GlobeNodeTrackAnimation get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.GlobeNodeTrackAnimation __returnValue = new com.earthview.world.spatial3d.GlobeNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeNodeTrackAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeNodeTrackAnimation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeNodeTrackAnimation");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CGlobeNodeTrackAnimationPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.GlobeNodeTrackAnimationPtr OperatorAssign(com.earthview.world.spatial3d.GlobeNodeTrackAnimationPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CGlobeNodeTrackAnimationPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.GlobeNodeTrackAnimationPtr __returnValue = new com.earthview.world.spatial3d.GlobeNodeTrackAnimationPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeNodeTrackAnimationPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeNodeTrackAnimationPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeNodeTrackAnimationPtr");
		}
		return __returnValue;
	}
	public GlobeNodeTrackAnimationPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeNodeTrackAnimationPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeNodeTrackAnimationPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeNodeTrackAnimationPtr obj = null;
 		if(baseObj instanceof GlobeNodeTrackAnimationPtr)
		{
			obj = (GlobeNodeTrackAnimationPtr)baseObj;
		} else {
			obj = new GlobeNodeTrackAnimationPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeNodeTrackAnimationPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
