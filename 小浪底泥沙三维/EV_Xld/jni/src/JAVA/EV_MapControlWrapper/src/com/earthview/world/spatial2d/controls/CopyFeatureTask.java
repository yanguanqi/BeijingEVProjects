package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CopyFeatureTask extends com.earthview.world.spatial2d.controls.EditTask {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CCopyFeatureTask", new CopyFeatureTaskClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCCopyFeatureTaskProxy", new CopyFeatureTaskClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public CopyFeatureTask(com.earthview.world.spatial2d.controls.DataEditor ref_editor, com.earthview.world.spatial2d.controls.MapControl ref_pControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_editorPtr = new BasePointer(ref_editor);
		list.add("ref_editor", ref_editorPtr.get());
		BasePointer ref_pControlPtr = new BasePointer(ref_pControl);
		list.add("ref_pControl", ref_pControlPtr.get());
		Create("JCCopyFeatureTaskProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.CopyFeatureTask".equals(this.getClass().getName()))
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

	native private void copyFeature_IFeature(long pNativeObject, long pFeature);
	/**
	 * 复制要素
	 * @param  
	 */
	public void copyFeature(com.earthview.world.spatial.geodataset.Ifeature pFeature)
	{
		long pFeatureParamValue = (pFeature == null ? 0L : pFeature.nativeObject.pointer);
		copyFeature_IFeature(this.nativeObject.pointer, pFeatureParamValue);
	}
	native private void paste_void(long pNativeObject);
	/**
	 * 粘贴
	 * @param  
	 */
	public void paste()
	{
		paste_void(this.nativeObject.pointer);
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

	native private void clear_void(long pNativeObject);
	/**
	 * 清空复制数据
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean isCopied_void(long pNativeObject);
	/**
	 * 判断容器中是否有拷贝的数据
	 * @param  
	 * @return 有数据返回true,没有返回false
	 */
	public boolean isCopied()
	{
		boolean returnValue = isCopied_void(this.nativeObject.pointer);
		return returnValue;
	}
	public CopyFeatureTask(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CopyFeatureTask(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static CopyFeatureTask fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CopyFeatureTask obj = null;
 		if(baseObj instanceof CopyFeatureTask)
		{
			obj = (CopyFeatureTask)baseObj;
		} else {
			obj = new CopyFeatureTask(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCopyFeatureTask");
			obj.increaseCast();
		}

		return obj;
	}
}
