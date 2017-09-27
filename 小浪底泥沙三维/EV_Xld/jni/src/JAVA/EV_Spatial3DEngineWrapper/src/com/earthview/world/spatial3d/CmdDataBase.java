package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdDataBase extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CCmdDataBase", new CmdDataBaseClassFactory());
	}

	/**
	 * 构造函数
	 * @param layer 图层对象
	 * @param id id
	 * @param operType 操作类型
	 */
	public CmdDataBase(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer, long id, com.earthview.world.spatial3d.CommandOperType operType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_layerPtr = new BasePointer(ref_layer);
		list.add("ref_layer", ref_layerPtr.get());
		BasePointer idPtr = new BasePointer(id);
		list.add("id", idPtr.get());
		BasePointer operTypePtr = new BasePointer(operType);
		list.add("operType", operTypePtr.get());
		Create("CCmdDataBase", list);
	}

	native private long getLayer_void(long pNativeObject);
	/**
	 * 获取图层对象
	 * @param  
	 * @return 图层对象
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer getLayer()
	{
		long returnValue = getLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getID_void(long pNativeObject);
	/**
	 * 获取id
	 * @param  
	 */
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getOperType_void(long pNativeObject);
	/**
	 * 获取操作类型
	 * @param  
	 * @return 操作类型
	 */
	public com.earthview.world.spatial3d.CommandOperType getOperType()
	{
		int returnValue = getOperType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.CommandOperType.toEnum(returnValue);
	}
	native private void setID_ev_uint32(long pNativeObject, long id);
	/**
	 * 设置id
	 * @param  
	 */
	public void setID(long id)
	{
		long idParamValue = id;
		setID_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private void setLayer_IGlobeLayer(long pNativeObject, long ref_pLayer);
	/**
	 * 设置图层对象
	 * @param  
	 * @return 图层对象
	 */
	public void setLayer(com.earthview.world.spatial3d.atlas.Iglobelayer ref_pLayer)
	{
		long ref_pLayerParamValue = (ref_pLayer == null ? 0L : ref_pLayer.nativeObject.pointer);
		setLayer_IGlobeLayer(this.nativeObject.pointer, ref_pLayerParamValue);
	}
	native private void setOperType_CommandOperType(long pNativeObject, int operType);
	/**
	 * 设置操作类型
	 * @param  
	 * @return 操作类型
	 */
	public void setOperType(com.earthview.world.spatial3d.CommandOperType operType)
	{
		int operTypeParamValue = operType.getValue();
		setOperType_CommandOperType(this.nativeObject.pointer, operTypeParamValue);
	}
	public CmdDataBase(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CmdDataBase(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CmdDataBase fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CmdDataBase obj = null;
 		if(baseObj instanceof CmdDataBase)
		{
			obj = (CmdDataBase)baseObj;
		} else {
			obj = new CmdDataBase(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCmdDataBase");
			obj.increaseCast();
		}

		return obj;
	}
}
