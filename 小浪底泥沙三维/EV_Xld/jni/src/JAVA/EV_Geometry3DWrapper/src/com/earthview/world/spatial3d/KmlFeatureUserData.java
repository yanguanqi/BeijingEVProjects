package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlFeatureUserData extends com.earthview.world.spatial3d.FeatureUserData {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CKmlFeatureUserData", new KmlFeatureUserDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCKmlFeatureUserDataProxy", new KmlFeatureUserDataClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public KmlFeatureUserData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCKmlFeatureUserDataProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.KmlFeatureUserData".equals(this.getClass().getName()))
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

	native private long get_pGeoObjectExtension_void(long pNativeObject);
	public com.earthview.world.spatial.kml.GeoObjectExtension get_pGeoObjectExtension()
	{
		long jniValue = get_pGeoObjectExtension_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.GeoObjectExtension __returnValue = new com.earthview.world.spatial.kml.GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObjectExtension");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjectExtension)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtension");
		}
		return __returnValue;
	}
	
	native private void set_pGeoObjectExtension_CGeoObjectExtension (long pNativeObject, long value);
	public void set_pGeoObjectExtension(com.earthview.world.spatial.kml.GeoObjectExtension pGeoObjectExtension)
	{
		long pGeoObjectExtensionParamValue = (pGeoObjectExtension == null ? 0L : pGeoObjectExtension.nativeObject.pointer);
		
		set_pGeoObjectExtension_CGeoObjectExtension(this.nativeObject.pointer, pGeoObjectExtensionParamValue);
	}
	
	public KmlFeatureUserData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlFeatureUserData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static KmlFeatureUserData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlFeatureUserData obj = null;
 		if(baseObj instanceof KmlFeatureUserData)
		{
			obj = (KmlFeatureUserData)baseObj;
		} else {
			obj = new KmlFeatureUserData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlFeatureUserData");
			obj.increaseCast();
		}

		return obj;
	}
}
