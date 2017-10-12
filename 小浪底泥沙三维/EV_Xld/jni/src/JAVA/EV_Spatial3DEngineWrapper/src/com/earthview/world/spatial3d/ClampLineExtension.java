package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ClampLineExtension extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CClampLineExtension", new ClampLineExtensionClassFactory());
	}

	public ClampLineExtension(com.earthview.world.graphic.SceneManager sceneMgr, String group) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sceneMgrPtr = new BasePointer(sceneMgr);
		list.add("sceneMgr", sceneMgrPtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		Create("CClampLineExtension", list);
	}

	native private void load_void(long pNativeObject);
	public void load()
	{
		load_void(this.nativeObject.pointer);
	}
	native private void appendGeoObject_CGeoObject(long pNativeObject, long ref_geoObject);
	public void appendGeoObject(com.earthview.world.spatial.GeoObject ref_geoObject)
	{
		long ref_geoObjectParamValue = (ref_geoObject == null ? 0L : ref_geoObject.nativeObject.pointer);
		appendGeoObject_CGeoObject(this.nativeObject.pointer, ref_geoObjectParamValue);
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean getVisible_void(long pNativeObject);
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void destroy_void(long pNativeObject);
	public void destroy()
	{
		destroy_void(this.nativeObject.pointer);
	}
	native private void setRenderingMinDistance_ev_real32(long pNativeObject, float min);
	public void setRenderingMinDistance(float min)
	{
		float minParamValue = min;
		setRenderingMinDistance_ev_real32(this.nativeObject.pointer, minParamValue);
	}
	native private void setRenderingMaxDistance_ev_real32(long pNativeObject, float max);
	public void setRenderingMaxDistance(float max)
	{
		float maxParamValue = max;
		setRenderingMaxDistance_ev_real32(this.nativeObject.pointer, maxParamValue);
	}
	native private float getRenderingMinDistance_void(long pNativeObject);
	public float getRenderingMinDistance()
	{
		float returnValue = getRenderingMinDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getRenderingMaxDistance_void(long pNativeObject);
	public float getRenderingMaxDistance()
	{
		float returnValue = getRenderingMaxDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRealExtension_void(long pNativeObject);
	public com.earthview.world.geometry3d.MultiGeometry3DExtension getRealExtension()
	{
		long returnValue = getRealExtension_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.MultiGeometry3DExtension __returnValue = new com.earthview.world.geometry3d.MultiGeometry3DExtension(CreatedWhenConstruct.CWC_NotToCreate, "CMultiGeometry3DExtension");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.MultiGeometry3DExtension)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMultiGeometry3DExtension");
		}
		return __returnValue;
	}
	native private void setSelectionColor_CColourValue(long pNativeObject, long color);
	public void setSelectionColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setSelectionColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	public ClampLineExtension(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ClampLineExtension(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ClampLineExtension fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ClampLineExtension obj = null;
 		if(baseObj instanceof ClampLineExtension)
		{
			obj = (ClampLineExtension)baseObj;
		} else {
			obj = new ClampLineExtension(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CClampLineExtension");
			obj.increaseCast();
		}

		return obj;
	}
}
