package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureUnionTask extends com.earthview.world.spatial2d.controls.EditTask {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CFeatureUnionTask", new FeatureUnionTaskClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCFeatureUnionTaskProxy", new FeatureUnionTaskClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public FeatureUnionTask(com.earthview.world.spatial2d.controls.DataEditor ref_editor, com.earthview.world.spatial2d.controls.MapControl ref_pControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_editorPtr = new BasePointer(ref_editor);
		list.add("ref_editor", ref_editorPtr.get());
		BasePointer ref_pControlPtr = new BasePointer(ref_pControl);
		list.add("ref_pControl", ref_pControlPtr.get());
		Create("JCFeatureUnionTaskProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.FeatureUnionTask".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getTaskType_void(long pNativeObject);
	/**
	 * 获取任务的名称
	 * @param  
	 * @return 名称
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

	native private String getName_void(long pNativeObject);
	/**
	 * 获取任务的类型
	 * @param  
	 * @return 任务类型
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

	native private void setGeometry_IGeometry(long pNativeObject, long pGeometry);
	/**
	 * 联合
	 * @param  
	 */
	public void setGeometry(com.earthview.world.spatial.geometry.Igeometry pGeometry)
	{
		long pGeometryParamValue = (pGeometry == null ? 0L : pGeometry.nativeObject.pointer);
		setGeometry_IGeometry(this.nativeObject.pointer, pGeometryParamValue);
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

	public FeatureUnionTask(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FeatureUnionTask(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static FeatureUnionTask fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FeatureUnionTask obj = null;
 		if(baseObj instanceof FeatureUnionTask)
		{
			obj = (FeatureUnionTask)baseObj;
		} else {
			obj = new FeatureUnionTask(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFeatureUnionTask");
			obj.increaseCast();
		}

		return obj;
	}
}
