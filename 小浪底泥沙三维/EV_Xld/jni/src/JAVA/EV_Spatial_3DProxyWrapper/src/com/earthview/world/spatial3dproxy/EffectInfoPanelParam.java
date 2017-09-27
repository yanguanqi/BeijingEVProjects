package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效属性框类通过接受用户的输入来对特效进行相关的设置
 */
public class EffectInfoPanelParam extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CEffectInfoPanelParam", new EffectInfoPanelParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCEffectInfoPanelParamProxy", new EffectInfoPanelParamClassFactory());
	}

	/**
	 * 构造函数
	 * @param obj 指向特效的指针
	 */
	public EffectInfoPanelParam(com.earthview.world.spatial3d.effectmanager.EffectObject ref_obj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_objPtr = new BasePointer(ref_obj);
		list.add("ref_obj", ref_objPtr.get());
		Create("JCEffectInfoPanelParamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.EffectInfoPanelParam".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setEffectObject_CEffectObject(long pNativeObject, long ref_obj);
	public void setEffectObject(com.earthview.world.spatial3d.effectmanager.EffectObject ref_obj)
	{
		long ref_objParamValue = (ref_obj == null ? 0L : ref_obj.nativeObject.pointer);
		setEffectObject_CEffectObject(this.nativeObject.pointer, ref_objParamValue);
	}
	native private String get_mName_void(long pNativeObject);
	public String get_mName()
	{
		String jniValue = get_mName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mName_EVString (long pNativeObject, String value);
	public void set_mName(String mName)
	{
		String mNameParamValue = mName;
		
		set_mName_EVString(this.nativeObject.pointer, mNameParamValue);
	}
	
	native private long get_mpEffectObject_void(long pNativeObject);
	public com.earthview.world.spatial3d.effectmanager.EffectObject get_mpEffectObject()
	{
		long jniValue = get_mpEffectObject_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.effectmanager.EffectObject __returnValue = new com.earthview.world.spatial3d.effectmanager.EffectObject(CreatedWhenConstruct.CWC_NotToCreate, "CEffectObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.effectmanager.EffectObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffectObject");
		}
		return __returnValue;
	}
	
	native private void set_mpEffectObject_CEffectObject (long pNativeObject, long value);
	public void set_mpEffectObject(com.earthview.world.spatial3d.effectmanager.EffectObject mpEffectObject)
	{
		long mpEffectObjectParamValue = (mpEffectObject == null ? 0L : mpEffectObject.nativeObject.pointer);
		
		set_mpEffectObject_CEffectObject(this.nativeObject.pointer, mpEffectObjectParamValue);
	}
	
	native private long get_mpNode_void(long pNativeObject);
	public com.earthview.world.graphic.SceneNode get_mpNode()
	{
		long jniValue = get_mpNode_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}
	
	native private void set_mpNode_CSceneNode (long pNativeObject, long value);
	public void set_mpNode(com.earthview.world.graphic.SceneNode mpNode)
	{
		long mpNodeParamValue = (mpNode == null ? 0L : mpNode.nativeObject.pointer);
		
		set_mpNode_CSceneNode(this.nativeObject.pointer, mpNodeParamValue);
	}
	
	public EffectInfoPanelParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectInfoPanelParam(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static EffectInfoPanelParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectInfoPanelParam obj = null;
 		if(baseObj instanceof EffectInfoPanelParam)
		{
			obj = (EffectInfoPanelParam)baseObj;
		} else {
			obj = new EffectInfoPanelParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectInfoPanelParam");
			obj.increaseCast();
		}

		return obj;
	}
}
