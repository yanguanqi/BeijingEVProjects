package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DRegionFloodParam extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFloodParam", new Analysis3DRegionFloodParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCAnalysis3DRegionFloodParamProxy", new Analysis3DRegionFloodParamClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Analysis3DRegionFloodParam(VoidPointer parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer parentPtr = new BasePointer(parent);
		list.add("parent", parentPtr.get());
		Create("JCAnalysis3DRegionFloodParamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DRegionFloodParam".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setCenter_CVector3(long pNativeObject, long cen);
	/**
	 * 设置淹没源
	 * @param altitude 淹没源
	 */
	public void setCenter(com.earthview.world.spatial.math.Vector3 cen)
	{
		long cenParamValue = cen.nativeObject.pointer;
		setCenter_CVector3(this.nativeObject.pointer, cenParamValue);
	}
	native private long getCenter_void(long pNativeObject);
	/**
	 * 获取淹没源
	 * @param  
	 * @return 返回淹没源
	 */
	public com.earthview.world.spatial.math.Vector3 getCenter()
	{
		long returnValue = getCenter_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	public Analysis3DRegionFloodParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Analysis3DRegionFloodParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean setParameter(String name, String value)
	{
		return super.setParameter_NoVirtual(name, value);
	}
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		return super.setParameter_NoVirtual(name, readOnly, enable);
	}
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		super.setParameterList_NoVirtual(paramList);
	}
	public String getParameter(String name)
	{
		return super.getParameter_NoVirtual(name);
	}
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		super.copyParametersTo_NoVirtual(dest);
	}
	
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static Analysis3DRegionFloodParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Analysis3DRegionFloodParam obj = null;
 		if(baseObj instanceof Analysis3DRegionFloodParam)
		{
			obj = (Analysis3DRegionFloodParam)baseObj;
		} else {
			obj = new Analysis3DRegionFloodParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnalysis3DRegionFloodParam");
			obj.increaseCast();
		}

		return obj;
	}
}
