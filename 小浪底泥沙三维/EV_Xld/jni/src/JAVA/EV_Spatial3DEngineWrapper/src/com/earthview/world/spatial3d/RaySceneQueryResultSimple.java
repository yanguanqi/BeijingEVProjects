package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.graphic.*;
import com.earthview.world.core.*;
import com.earthview.world.spatial.atlas.*;

/**
 * 派生自RaySceneQueryResult，只用于提供一个函数传给给外部objID和component值,无其他用处;
 */
public class RaySceneQueryResultSimple extends com.earthview.world.graphic.RaySceneQueryResult {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::RaySceneQueryResultSimple", new RaySceneQueryResultSimpleClassFactory());
	}

	public RaySceneQueryResultSimple() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RaySceneQueryResultSimple", null);
	}

	public RaySceneQueryResultSimple(com.earthview.world.graphic.RaySceneQueryResult pParentRaySceneQueryResult) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pParentRaySceneQueryResultPtr = new BasePointer(pParentRaySceneQueryResult);
		list.add("pParentRaySceneQueryResult", pParentRaySceneQueryResultPtr.get());
		Create("RaySceneQueryResultSimple", list);
	}

	native private boolean queryObjIDAndComponent_void(long pNativeObject);
	/**
	 * 通过RaySceneQueryResult的指针去获取对应的objectID和component然后保存到vector中，供外部使用;
	 * @return 返回false表示操作失败
	 */
	public boolean queryObjIDAndComponent()
	{
		boolean returnValue = queryObjIDAndComponent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getComponent_ev_uint32_ev_uint32_CComponent(long pNativeObject, long index, long objID, long component);
	/**
	 * 根据index获取objID和component
	 * @return 返回false表示不存在
	 */
	public boolean getComponent(long index, UIntegerPointer objID, com.earthview.world.spatial3d.Component component)
	{
		long indexParamValue = index;
		long objIDParamValue = objID.nativeObject.pointer;
		long componentParamValue = component.nativeObject.pointer;
		boolean returnValue = getComponent_ev_uint32_ev_uint32_CComponent(this.nativeObject.pointer, indexParamValue, objIDParamValue, componentParamValue);
		return returnValue;
	}
	native private long getComponentsSize_void(long pNativeObject);
	public long getComponentsSize()
	{
		long returnValue = getComponentsSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	public RaySceneQueryResultSimple(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RaySceneQueryResultSimple(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RaySceneQueryResultSimple fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RaySceneQueryResultSimple obj = null;
 		if(baseObj instanceof RaySceneQueryResultSimple)
		{
			obj = (RaySceneQueryResultSimple)baseObj;
		} else {
			obj = new RaySceneQueryResultSimple(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RaySceneQueryResultSimple");
			obj.increaseCast();
		}

		return obj;
	}
}
