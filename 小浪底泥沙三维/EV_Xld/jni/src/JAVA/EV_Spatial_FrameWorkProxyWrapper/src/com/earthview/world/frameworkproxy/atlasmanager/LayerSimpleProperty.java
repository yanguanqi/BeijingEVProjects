package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerSimpleProperty extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty", new LayerSimplePropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::JCLayerSimplePropertyProxy", new LayerSimplePropertyClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_layer 关联图层
	 */
	public LayerSimpleProperty(com.earthview.world.spatial.atlas.Ilayer ref_layer) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_layerPtr = new BasePointer(ref_layer);
		list.add("ref_layer", ref_layerPtr.get());
		Create("JCLayerSimplePropertyProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.frameworkproxy.atlasmanager.LayerSimpleProperty".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void updateLayerVisible_void(long pNativeObject);
	/**
	 * 更新图层可见性
	 * @param  
	 */
	public void updateLayerVisible()
	{
		updateLayerVisible_void(this.nativeObject.pointer);
	}
	native private long getLayer_void(long pNativeObject);
	/**
	 * 获取图层
	 * @param  
	 * @return 返回图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer getLayer()
	{
		long returnValue = getLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private void setLayer_ILayer(long pNativeObject, long ref_layer);
	public void setLayer(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		setLayer_ILayer(this.nativeObject.pointer, ref_layerParamValue);
	}
	public LayerSimpleProperty(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayerSimpleProperty(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static LayerSimpleProperty fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayerSimpleProperty obj = null;
 		if(baseObj instanceof LayerSimpleProperty)
		{
			obj = (LayerSimpleProperty)baseObj;
		} else {
			obj = new LayerSimpleProperty(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayerSimpleProperty");
			obj.increaseCast();
		}

		return obj;
	}
}
