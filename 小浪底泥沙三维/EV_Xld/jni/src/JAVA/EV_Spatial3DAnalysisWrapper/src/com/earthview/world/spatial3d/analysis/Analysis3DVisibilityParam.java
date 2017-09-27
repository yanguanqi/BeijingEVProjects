package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DVisibilityParam extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibilityParam", new Analysis3DVisibilityParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCAnalysis3DVisibilityParamProxy", new Analysis3DVisibilityParamClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Analysis3DVisibilityParam(VoidPointer parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer parentPtr = new BasePointer(parent);
		list.add("parent", parentPtr.get());
		Create("JCAnalysis3DVisibilityParamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DVisibilityParam".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Analysis3DVisibilityParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Analysis3DVisibilityParam(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Analysis3DVisibilityParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Analysis3DVisibilityParam obj = null;
 		if(baseObj instanceof Analysis3DVisibilityParam)
		{
			obj = (Analysis3DVisibilityParam)baseObj;
		} else {
			obj = new Analysis3DVisibilityParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnalysis3DVisibilityParam");
			obj.increaseCast();
		}

		return obj;
	}
}
