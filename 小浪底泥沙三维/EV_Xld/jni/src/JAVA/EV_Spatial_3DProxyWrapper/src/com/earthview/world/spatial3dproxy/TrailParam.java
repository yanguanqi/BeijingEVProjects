package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 飘带参数设置类			
 */
public class TrailParam extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CTrailParam", new TrailParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCTrailParamProxy", new TrailParamClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_trail 指向飘带轨迹的指针
	 */
	public TrailParam(com.earthview.world.graphic.RibbonTrail ref_trail) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_trailPtr = new BasePointer(ref_trail);
		list.add("ref_trail", ref_trailPtr.get());
		Create("JCTrailParamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.TrailParam".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getRibbonTrail_void(long pNativeObject);
	/**
	 * 获取飘带轨迹
	 * @param  
	 */
	public com.earthview.world.graphic.RibbonTrail getRibbonTrail()
	{
		long returnValue = getRibbonTrail_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RibbonTrail __returnValue = new com.earthview.world.graphic.RibbonTrail(CreatedWhenConstruct.CWC_NotToCreate, "CRibbonTrail");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RibbonTrail)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRibbonTrail");
		}
		return __returnValue;
	}
	public TrailParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TrailParam(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static TrailParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TrailParam obj = null;
 		if(baseObj instanceof TrailParam)
		{
			obj = (TrailParam)baseObj;
		} else {
			obj = new TrailParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTrailParam");
			obj.increaseCast();
		}

		return obj;
	}
}
