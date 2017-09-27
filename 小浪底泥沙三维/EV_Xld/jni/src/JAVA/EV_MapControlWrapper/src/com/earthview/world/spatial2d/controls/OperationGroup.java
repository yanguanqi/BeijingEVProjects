package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 操作组
 */
public class OperationGroup extends com.earthview.world.spatial2d.controls.Operation {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::COperationGroup", new OperationGroupClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCOperationGroupProxy", new OperationGroupClassFactory());
	}

	public OperationGroup() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCOperationGroupProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.OperationGroup".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String getName_void(long pNativeObject);
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 获取子操作的个数
	 * @return 操作的个数
	 */
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getChild_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的子操作
	 * @param index 索引
	 * @return 子操作
	 */
	public com.earthview.world.spatial2d.controls.Operation getChild(long index)
	{
		long indexParamValue = index;
		long returnValue = getChild_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.Operation __returnValue = new com.earthview.world.spatial2d.controls.Operation(CreatedWhenConstruct.CWC_NotToCreate, "COperation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.Operation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COperation");
		}
		return __returnValue;
	}
	native private void addChild_COperation(long pNativeObject, long child);
	/**
	 * 添加子操作
	 * @param child 子操作
	 * @return 子操作
	 */
	public void addChild(com.earthview.world.spatial2d.controls.Operation child)
	{
		long childParamValue = (child == null ? 0L : child.nativeObject.pointer);
		addChild_COperation(this.nativeObject.pointer, childParamValue);
	}
	native private void removeChild_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引处的子操作
	 * @param index 待移除的子操作的索引
	 */
	public void removeChild(long index)
	{
		long indexParamValue = index;
		removeChild_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	public OperationGroup(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public OperationGroup(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
		}
	}
	
	public static OperationGroup fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		OperationGroup obj = null;
 		if(baseObj instanceof OperationGroup)
		{
			obj = (OperationGroup)baseObj;
		} else {
			obj = new OperationGroup(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COperationGroup");
			obj.increaseCast();
		}

		return obj;
	}
}
