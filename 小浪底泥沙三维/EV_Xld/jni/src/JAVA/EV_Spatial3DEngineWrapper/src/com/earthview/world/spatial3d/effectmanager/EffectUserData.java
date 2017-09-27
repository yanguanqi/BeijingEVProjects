package com.earthview.world.spatial3d.effectmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CEffect特效类中用户自定义数据对象
 */
public class EffectUserData extends com.earthview.world.spatial3d.FeatureUserData {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::EffectManager::CEffectUserData", new EffectUserDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::EffectManager::JCEffectUserDataProxy", new EffectUserDataClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EffectUserData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEffectUserDataProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.effectmanager.EffectUserData".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆数据
	 * @param  
	 */
	public com.earthview.world.graphic.MovableObject.UserData ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.UserData __returnValue = new com.earthview.world.graphic.MovableObject.UserData(CreatedWhenConstruct.CWC_NotToCreate, "CUserData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.UserData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserData");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MovableObject.UserData ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.UserData __returnValue = new com.earthview.world.graphic.MovableObject.UserData(CreatedWhenConstruct.CWC_NotToCreate, "CUserData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.UserData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserData");
		}
		return __returnValue;
	}

	native private long get_VisibleObject_void(long pNativeObject);
	public com.earthview.world.geometry3d.VisibleObject get_VisibleObject()
	{
		long jniValue = get_VisibleObject_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.VisibleObject __returnValue = new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate, "CVisibleObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObject");
		}
		return __returnValue;
	}
	
	native private void set_VisibleObject_CVisibleObject (long pNativeObject, long value);
	public void set_VisibleObject(com.earthview.world.geometry3d.VisibleObject VisibleObject)
	{
		long VisibleObjectParamValue = (VisibleObject == null ? 0L : VisibleObject.nativeObject.pointer);
		
		set_VisibleObject_CVisibleObject(this.nativeObject.pointer, VisibleObjectParamValue);
	}
	
	public EffectUserData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectUserData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static EffectUserData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectUserData obj = null;
 		if(baseObj instanceof EffectUserData)
		{
			obj = (EffectUserData)baseObj;
		} else {
			obj = new EffectUserData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectUserData");
			obj.increaseCast();
		}

		return obj;
	}
}
