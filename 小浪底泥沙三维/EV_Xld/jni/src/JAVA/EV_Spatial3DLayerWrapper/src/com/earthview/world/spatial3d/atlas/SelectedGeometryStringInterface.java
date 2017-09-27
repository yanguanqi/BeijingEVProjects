package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SelectedGeometryStringInterface extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface", new SelectedGeometryStringInterfaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCSelectedGeometryStringInterfaceProxy", new SelectedGeometryStringInterfaceClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_geoent 地理实体对象
	 */
	public SelectedGeometryStringInterface() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSelectedGeometryStringInterfaceProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.SelectedGeometryStringInterface".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_geoent 地理实体对象
	 */
	public SelectedGeometryStringInterface(com.earthview.world.geometry3d.GeoEntity ref_geoent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_geoentPtr = new BasePointer(ref_geoent);
		list.add("ref_geoent", ref_geoentPtr.get());
		Create("JCSelectedGeometryStringInterfaceProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.SelectedGeometryStringInterface".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_layer 三维数据库型矢量图层
	 * @param id 记录ID
	 */
	public SelectedGeometryStringInterface(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer, long id) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_layerPtr = new BasePointer(ref_layer);
		list.add("ref_layer", ref_layerPtr.get());
		BasePointer idPtr = new BasePointer(id);
		list.add("id", idPtr.get());
		Create("JCSelectedGeometryStringInterfaceProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.SelectedGeometryStringInterface".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getLayerName_void(long pNativeObject);
	/**
	 * 获取图层名
	 * @param  
	 * @return 返回图层名
	 */
	public StringPointer getLayerName()
	{
		long returnValue = getLayerName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getName_void(long pNativeObject);
	/**
	 * 获取对象名
	 * @param  
	 * @return 返回对象名
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean updateParams_CGeoEntity(long pNativeObject, long ref_geoent);
	/**
	 * 获取图层名
	 * @param ref_geoent 扩展实体
	 * @return 返回是否成功
	 */
	public boolean updateParams(com.earthview.world.geometry3d.GeoEntity ref_geoent)
	{
		long ref_geoentParamValue = (ref_geoent == null ? 0L : ref_geoent.nativeObject.pointer);
		boolean returnValue = updateParams_CGeoEntity(this.nativeObject.pointer, ref_geoentParamValue);
		return returnValue;
	}
	native private boolean updateParams_IGlobeLayer_ev_uint32(long pNativeObject, long ref_layer, long id);
	/**
	 * 获取图层名
	 * @param ref_layer 图层
	 * @param id 元素id
	 * @return 返回是否成功
	 */
	public boolean updateParams(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer, long id)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		long idParamValue = id;
		boolean returnValue = updateParams_IGlobeLayer_ev_uint32(this.nativeObject.pointer, ref_layerParamValue, idParamValue);
		return returnValue;
	}
	public SelectedGeometryStringInterface(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SelectedGeometryStringInterface(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static SelectedGeometryStringInterface fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SelectedGeometryStringInterface obj = null;
 		if(baseObj instanceof SelectedGeometryStringInterface)
		{
			obj = (SelectedGeometryStringInterface)baseObj;
		} else {
			obj = new SelectedGeometryStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSelectedGeometryStringInterface");
			obj.increaseCast();
		}

		return obj;
	}
}
