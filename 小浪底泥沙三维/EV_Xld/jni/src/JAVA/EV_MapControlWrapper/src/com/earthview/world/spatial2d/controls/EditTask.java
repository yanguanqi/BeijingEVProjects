package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///要素联合
public class EditTask extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEditTask", new EditTaskClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEditTaskProxy", new EditTaskClassFactory());
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取任务的名称
	 * @param  
	 * @return 名称
	 */
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

	protected  int getTaskType_void_callback()
	{
		com.earthview.world.spatial2d.controls.EVEditTaskType returnValue = getTaskType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getTaskType_void(long pNativeObject);
	/**
	 * 获取任务的类型
	 * @param  
	 * @return 任务类型
	 */
	public com.earthview.world.spatial2d.controls.EVEditTaskType getTaskType()
	{
		int returnValue = getTaskType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.controls.EVEditTaskType.toEnum(returnValue);
	}
	native private int getTaskType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.controls.EVEditTaskType getTaskType_NoVirtual()
	{
		int returnValue = getTaskType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.controls.EVEditTaskType.toEnum(returnValue);
	}

	protected  void activate_void_callback()
	{
		activate();
	}

	native private void activate_void(long pNativeObject);
	/**
	 * 激活任务
	 * @param  
	 */
	public void activate()
	{
		activate_void(this.nativeObject.pointer);
	}
	native private void activate_void_NoVirtual(long pNativeObject);
	protected void activate_NoVirtual()
	{
		activate_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void deactivate_void_callback()
	{
		deactivate();
	}

	native private void deactivate_void(long pNativeObject);
	/**
	 * 取消任务的激活状态
	 * @param  
	 */
	public void deactivate()
	{
		deactivate_void(this.nativeObject.pointer);
	}
	native private void deactivate_void_NoVirtual(long pNativeObject);
	protected void deactivate_NoVirtual()
	{
		deactivate_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void finish_void_callback()
	{
		finish();
	}

	native private void finish_void(long pNativeObject);
	/**
	 * 结束任务
	 * @param  
	 */
	public void finish()
	{
		finish_void(this.nativeObject.pointer);
	}
	native private void finish_void_NoVirtual(long pNativeObject);
	protected void finish_NoVirtual()
	{
		finish_void_NoVirtual(this.nativeObject.pointer);
	}

	public EditTask(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EditTask(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getTaskType_void(long pNativeObject, String method);
	native protected void register_activate_void(long pNativeObject, String method);
	native protected void register_deactivate_void(long pNativeObject, String method);
	native protected void register_finish_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getTaskType_void(this.nativeObject.pointer, "getTaskType_void_callback");
			this.register_activate_void(this.nativeObject.pointer, "activate_void_callback");
			this.register_deactivate_void(this.nativeObject.pointer, "deactivate_void_callback");
			this.register_finish_void(this.nativeObject.pointer, "finish_void_callback");
		}
	}
	
	public static EditTask fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EditTask obj = null;
 		if(baseObj instanceof EditTask)
		{
			obj = (EditTask)baseObj;
		} else {
			obj = new EditTask(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEditTask");
			obj.increaseCast();
		}

		return obj;
	}
}
