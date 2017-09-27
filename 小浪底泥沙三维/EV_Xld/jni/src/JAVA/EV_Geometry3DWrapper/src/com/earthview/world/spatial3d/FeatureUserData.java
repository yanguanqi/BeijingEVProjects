package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 用户数据记录
 */
public class FeatureUserData extends com.earthview.world.graphic.MovableObject.UserData {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CFeatureUserData", new FeatureUserDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCFeatureUserDataProxy", new FeatureUserDataClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public FeatureUserData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFeatureUserDataProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.FeatureUserData".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制用户数据
	 */
	public com.earthview.world.graphic.MovableObject.UserData ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.UserData __returnValue = new com.earthview.world.graphic.MovableObject.UserData(CreatedWhenConstruct.CWC_NotToCreate, "CUserData");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.UserData)__returnValueClassFactory.create();
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
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.UserData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CUserData");
		}
		return __returnValue;
	}

	native private long get_OwnerLayer_void(long pNativeObject);
	public com.earthview.world.spatial3d.atlas.Iglobelayer get_OwnerLayer()
	{
		long jniValue = get_OwnerLayer_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeLayer");
		}
		return __returnValue;
	}
	
	native private void set_OwnerLayer_IGlobeLayer (long pNativeObject, long value);
	public void set_OwnerLayer(com.earthview.world.spatial3d.atlas.Iglobelayer OwnerLayer)
	{
		long OwnerLayerParamValue = (OwnerLayer == null ? 0L : OwnerLayer.nativeObject.pointer);
		
		set_OwnerLayer_IGlobeLayer(this.nativeObject.pointer, OwnerLayerParamValue);
	}
	
	native private long get_IDs_void(long pNativeObject);
	public com.earthview.world.core.IntVector get_IDs()
	{
		long jniValue = get_IDs_void(this.nativeObject.pointer);
		
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	
	native private void set_IDs_IntVector (long pNativeObject, long value);
	public void set_IDs(com.earthview.world.core.IntVector IDs)
	{
		long IDsParamValue = IDs.nativeObject.pointer;
		
		set_IDs_IntVector(this.nativeObject.pointer, IDsParamValue);
	}
	
	public FeatureUserData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FeatureUserData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static FeatureUserData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FeatureUserData obj = null;
 		if(baseObj instanceof FeatureUserData)
		{
			obj = (FeatureUserData)baseObj;
		} else {
			obj = new FeatureUserData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFeatureUserData");
			obj.increaseCast();
		}

		return obj;
	}
}
