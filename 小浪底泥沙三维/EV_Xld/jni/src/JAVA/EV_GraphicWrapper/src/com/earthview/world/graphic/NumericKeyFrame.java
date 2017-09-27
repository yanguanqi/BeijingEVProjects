package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数字关键帧类管理数字关键帧
 */
public class NumericKeyFrame extends com.earthview.world.graphic.KeyFrame {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CNumericKeyFrame", new NumericKeyFrameClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCNumericKeyFrameProxy", new NumericKeyFrameClassFactory());
	}

	/**
	 * 构造函数
	 * @param parent 动画轨迹对象
	 * @param time 数字关键帧时间点
	 */
	public NumericKeyFrame(com.earthview.world.graphic.AnimationTrack ref_parent, double time) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer timePtr = new BasePointer(time);
		list.add("time", timePtr.get());
		Create("JCNumericKeyFrameProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.NumericKeyFrame".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long _clone_CAnimationTrack(long pNativeObject, long ref_newParent);
	/**
	 * clone当前数字关键帧
	 * @param newParent 数字关键帧所属动画轨迹
	 * @return 复制的数字关键帧
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

	public NumericKeyFrame(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NumericKeyFrame(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register__clone_CAnimationTrack(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register__clone_CAnimationTrack(this.nativeObject.pointer, "_clone_CAnimationTrack_callback");
		}
	}
	
	public static NumericKeyFrame fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NumericKeyFrame obj = null;
 		if(baseObj instanceof NumericKeyFrame)
		{
			obj = (NumericKeyFrame)baseObj;
		} else {
			obj = new NumericKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNumericKeyFrame");
			obj.increaseCast();
		}

		return obj;
	}
}
