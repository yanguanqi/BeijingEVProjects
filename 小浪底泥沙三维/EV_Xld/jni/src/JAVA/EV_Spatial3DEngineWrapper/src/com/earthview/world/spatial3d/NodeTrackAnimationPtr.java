package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 节点动画类的智能指针
 */
public class NodeTrackAnimationPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CNodeTrackAnimationPtr", new NodeTrackAnimationPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public NodeTrackAnimationPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CNodeTrackAnimationPtr", null);
	}

	public NodeTrackAnimationPtr(com.earthview.world.spatial3d.NodeTrackAnimation rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CNodeTrackAnimationPtr", list);
	}

	public NodeTrackAnimationPtr(com.earthview.world.spatial3d.NodeTrackAnimationPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CNodeTrackAnimationPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.NodeTrackAnimation get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.NodeTrackAnimation __returnValue = new com.earthview.world.spatial3d.NodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate, "CNodeTrackAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.NodeTrackAnimation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNodeTrackAnimation");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CNodeTrackAnimationPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.NodeTrackAnimationPtr OperatorAssign(com.earthview.world.spatial3d.NodeTrackAnimationPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CNodeTrackAnimationPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.NodeTrackAnimationPtr __returnValue = new com.earthview.world.spatial3d.NodeTrackAnimationPtr(CreatedWhenConstruct.CWC_NotToCreate, "CNodeTrackAnimationPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.NodeTrackAnimationPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNodeTrackAnimationPtr");
		}
		return __returnValue;
	}
	public NodeTrackAnimationPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NodeTrackAnimationPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static NodeTrackAnimationPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NodeTrackAnimationPtr obj = null;
 		if(baseObj instanceof NodeTrackAnimationPtr)
		{
			obj = (NodeTrackAnimationPtr)baseObj;
		} else {
			obj = new NodeTrackAnimationPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNodeTrackAnimationPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
