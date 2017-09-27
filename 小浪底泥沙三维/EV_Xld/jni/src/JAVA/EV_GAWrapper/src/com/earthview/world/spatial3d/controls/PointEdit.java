package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PointEdit extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CPointEdit", new PointEditClassFactory());
	}

	/**
	 * 构造函数
	 * @param sceneManger 场景管理器
	 */
	public PointEdit(com.earthview.world.graphic.SceneManager ref_sceneManger) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_sceneMangerPtr = new BasePointer(ref_sceneManger);
		list.add("ref_sceneManger", ref_sceneMangerPtr.get());
		Create("CPointEdit", list);
	}

	/**
	 * 挎贝函数
	 */
	public PointEdit(com.earthview.world.spatial3d.controls.PointEdit rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CPointEdit", list);
	}

	native private long getNode_void(long pNativeObject);
	/**
	 * 返回场景节点
	 */
	public com.earthview.world.graphic.SceneNode getNode()
	{
		long returnValue = getNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void setPosition_CVector3(long pNativeObject, long position);
	/**
	 * 设置场景节点的位置
	 * @param position 位置
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 position)
	{
		long positionParamValue = position.nativeObject.pointer;
		setPosition_CVector3(this.nativeObject.pointer, positionParamValue);
	}
	native private boolean intersect_CRay(long pNativeObject, long ray);
	/**
	 * 判断射线是否与其相交
	 * @param ray 射线
	 */
	public boolean intersect(com.earthview.world.spatial.math.Ray ray)
	{
		long rayParamValue = ray.nativeObject.pointer;
		boolean returnValue = intersect_CRay(this.nativeObject.pointer, rayParamValue);
		return returnValue;
	}
	public PointEdit(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PointEdit(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PointEdit fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PointEdit obj = null;
 		if(baseObj instanceof PointEdit)
		{
			obj = (PointEdit)baseObj;
		} else {
			obj = new PointEdit(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPointEdit");
			obj.increaseCast();
		}

		return obj;
	}
}
