package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapSimpleProperty extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty", new MapSimplePropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::JCMapSimplePropertyProxy", new MapSimplePropertyClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_map 关联地图
	 */
	public MapSimpleProperty(com.earthview.world.spatial.atlas.Imap ref_map) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mapPtr = new BasePointer(ref_map);
		list.add("ref_map", ref_mapPtr.get());
		Create("JCMapSimplePropertyProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.frameworkproxy.atlasmanager.MapSimpleProperty".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getMap_void(long pNativeObject);
	/**
	 * 获取地图
	 * @param  
	 * @return 返回地图
	 */
	public com.earthview.world.spatial.atlas.Imap getMap()
	{
		long returnValue = getMap_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private void setMap_IMap(long pNativeObject, long ref_map);
	public void setMap(com.earthview.world.spatial.atlas.Imap ref_map)
	{
		long ref_mapParamValue = (ref_map == null ? 0L : ref_map.nativeObject.pointer);
		setMap_IMap(this.nativeObject.pointer, ref_mapParamValue);
	}
	public MapSimpleProperty(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapSimpleProperty(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static MapSimpleProperty fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapSimpleProperty obj = null;
 		if(baseObj instanceof MapSimpleProperty)
		{
			obj = (MapSimpleProperty)baseObj;
		} else {
			obj = new MapSimpleProperty(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapSimpleProperty");
			obj.increaseCast();
		}

		return obj;
	}
}
