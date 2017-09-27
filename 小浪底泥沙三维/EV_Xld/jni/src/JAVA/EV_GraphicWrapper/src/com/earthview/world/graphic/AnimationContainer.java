package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationContainer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationContainer", new AnimationContainerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAnimationContainerProxy", new AnimationContainerClassFactory());
	}

	public AnimationContainer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAnimationContainerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AnimationContainer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  int getNumAnimations_void_callback()
	{
		int returnValue = getNumAnimations();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNumAnimations_void(long pNativeObject);
	public int getNumAnimations()
	{
		int returnValue = getNumAnimations_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumAnimations_void_NoVirtual(long pNativeObject);
	protected int getNumAnimations_NoVirtual()
	{
		int returnValue = getNumAnimations_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getAnimation_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.Animation returnValue = getAnimation(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAnimation_ev_uint16(long pNativeObject, int index);
	public com.earthview.world.graphic.Animation getAnimation(int index)
	{
		int indexParamValue = index;
		long returnValue = getAnimation_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long getAnimation_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getAnimation_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  long getAnimation_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.Animation returnValue = getAnimation(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAnimation_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Animation getAnimation(String name)
	{
		String nameParamValue = name;
		long returnValue = getAnimation_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long getAnimation_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  long createAnimation_EVString_Real_callback(String name, double length)
	{
		String nameParamValue = name;
		double lengthParamValue = length;
		com.earthview.world.graphic.Animation returnValue = createAnimation(nameParamValue, lengthParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createAnimation_EVString_Real(long pNativeObject, String name, double length);
	public com.earthview.world.graphic.Animation createAnimation(String name, double length)
	{
		String nameParamValue = name;
		double lengthParamValue = length;
		long returnValue = createAnimation_EVString_Real(this.nativeObject.pointer, nameParamValue, lengthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long createAnimation_EVString_Real_NoVirtual(long pNativeObject, String name, double length);
	protected com.earthview.world.graphic.Animation createAnimation_NoVirtual(String name, double length)
	{
		String nameParamValue = name;
		double lengthParamValue = length;
		long returnValue = createAnimation_EVString_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, lengthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  boolean hasAnimation_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasAnimation(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasAnimation_EVString(long pNativeObject, String name);
	public boolean hasAnimation(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasAnimation_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean hasAnimation_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean hasAnimation_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  void removeAnimation_EVString_callback(String name)
	{
		String nameParamValue = name;
		removeAnimation(nameParamValue);
	}

	native private void removeAnimation_EVString(long pNativeObject, String name);
	public void removeAnimation(String name)
	{
		String nameParamValue = name;
		removeAnimation_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeAnimation_EVString_NoVirtual(long pNativeObject, String name);
	protected void removeAnimation_NoVirtual(String name)
	{
		String nameParamValue = name;
		removeAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	public AnimationContainer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationContainer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getNumAnimations_void(long pNativeObject, String method);
	native protected void register_getAnimation_ev_uint16(long pNativeObject, String method);
	native protected void register_getAnimation_EVString(long pNativeObject, String method);
	native protected void register_createAnimation_EVString_Real(long pNativeObject, String method);
	native protected void register_hasAnimation_EVString(long pNativeObject, String method);
	native protected void register_removeAnimation_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getNumAnimations_void(this.nativeObject.pointer, "getNumAnimations_void_callback");
			this.register_getAnimation_ev_uint16(this.nativeObject.pointer, "getAnimation_ev_uint16_callback");
			this.register_getAnimation_EVString(this.nativeObject.pointer, "getAnimation_EVString_callback");
			this.register_createAnimation_EVString_Real(this.nativeObject.pointer, "createAnimation_EVString_Real_callback");
			this.register_hasAnimation_EVString(this.nativeObject.pointer, "hasAnimation_EVString_callback");
			this.register_removeAnimation_EVString(this.nativeObject.pointer, "removeAnimation_EVString_callback");
		}
	}
	
	public static AnimationContainer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationContainer obj = null;
 		if(baseObj instanceof AnimationContainer)
		{
			obj = (AnimationContainer)baseObj;
		} else {
			obj = new AnimationContainer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimationContainer");
			obj.increaseCast();
		}

		return obj;
	}
}
