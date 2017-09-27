package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 关键帧类管理关键帧
 */
public class KeyFrame extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CKeyFrame", new KeyFrameClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCKeyFrameProxy", new KeyFrameClassFactory());
	}

	/**
	 * 构造函数
	 * @param parent 动画轨迹对象
	 * @param time 关键帧时间点
	 */
	public KeyFrame(com.earthview.world.graphic.AnimationTrack ref_parent, double time) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer timePtr = new BasePointer(time);
		list.add("time", timePtr.get());
		Create("JCKeyFrameProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.KeyFrame".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getTime_void(long pNativeObject);
	/**
	 * 获得关键帧时间点
	 * @param  
	 * @return 关键帧时间点
	 */
	public double getTime()
	{
		double returnValue = getTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long _clone_CAnimationTrack_callback(long ref_newParent)
	{
		com.earthview.world.graphic.AnimationTrack ref_newParentParamValue = (ref_newParent == 0L ? null : new com.earthview.world.graphic.AnimationTrack(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_newParentParamValue != null)
		{
		ref_newParentParamValue.setDelegate(true);
		ref_newParentParamValue.setInstancePointer(new InstancePointer(ref_newParent));
		IClassFactory ref_newParentParamValueClassFactory = GlobalClassFactoryMap.get(ref_newParentParamValue.getCppInstanceTypeName());
		if (ref_newParentParamValueClassFactory != null)
		{
			ref_newParentParamValue.setDelegate(true);
			ref_newParentParamValue = (com.earthview.world.graphic.AnimationTrack)ref_newParentParamValueClassFactory.create();
			ref_newParentParamValue.setDelegate(true);
			ref_newParentParamValue.setInstancePointer(new InstancePointer(ref_newParent));
		}
		}
		com.earthview.world.graphic.KeyFrame returnValue = _clone(ref_newParentParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _clone_CAnimationTrack(long pNativeObject, long ref_newParent);
	/**
	 * clone当前关键帧
	 * @param newParent 关键帧所属动画轨迹
	 * @return 复制的关键帧
	 */
	public com.earthview.world.graphic.KeyFrame _clone(com.earthview.world.graphic.AnimationTrack ref_newParent)
	{
		long ref_newParentParamValue = (ref_newParent == null ? 0L : ref_newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimationTrack(this.nativeObject.pointer, ref_newParentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}
	native private long _clone_CAnimationTrack_NoVirtual(long pNativeObject, long ref_newParent);
	protected com.earthview.world.graphic.KeyFrame _clone_NoVirtual(com.earthview.world.graphic.AnimationTrack ref_newParent)
	{
		long ref_newParentParamValue = (ref_newParent == null ? 0L : ref_newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimationTrack_NoVirtual(this.nativeObject.pointer, ref_newParentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}

	public KeyFrame(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KeyFrame(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register__clone_CAnimationTrack(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register__clone_CAnimationTrack(this.nativeObject.pointer, "_clone_CAnimationTrack_callback");
		}
	}
	
	public static KeyFrame fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KeyFrame obj = null;
 		if(baseObj instanceof KeyFrame)
		{
			obj = (KeyFrame)baseObj;
		} else {
			obj = new KeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKeyFrame");
			obj.increaseCast();
		}

		return obj;
	}
}
