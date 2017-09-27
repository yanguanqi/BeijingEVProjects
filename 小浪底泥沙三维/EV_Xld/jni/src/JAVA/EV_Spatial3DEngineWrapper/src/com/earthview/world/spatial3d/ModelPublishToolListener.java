package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelPublishToolListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CModelPublishToolListener", new ModelPublishToolListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCModelPublishToolListenerProxy", new ModelPublishToolListenerClassFactory());
	}

	public ModelPublishToolListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCModelPublishToolListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.ModelPublishToolListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void information_EVString_callback(String info)
	{
		String infoParamValue = info;
		information(infoParamValue);
	}

	native private void information_EVString(long pNativeObject, String info);
	/// <summary>
	/// 消息接收
	/// </summary>
	/// <param name=info"">消息内容</param>
	/// <returns></returns>
	public void information(String info)
	{
		String infoParamValue = info;
		information_EVString(this.nativeObject.pointer, infoParamValue);
	}
	native private void information_EVString_NoVirtual(long pNativeObject, String info);
	protected void information_NoVirtual(String info)
	{
		String infoParamValue = info;
		information_EVString_NoVirtual(this.nativeObject.pointer, infoParamValue);
	}

	protected  void workPercent_ev_int32_callback(int percent)
	{
		int percentParamValue = percent;
		workPercent(percentParamValue);
	}

	native private void workPercent_ev_int32(long pNativeObject, int percent);
	/**
	 * 进度接收
	 * @param percent 进度百分比
	 */
	public void workPercent(int percent)
	{
		int percentParamValue = percent;
		workPercent_ev_int32(this.nativeObject.pointer, percentParamValue);
	}
	native private void workPercent_ev_int32_NoVirtual(long pNativeObject, int percent);
	protected void workPercent_NoVirtual(int percent)
	{
		int percentParamValue = percent;
		workPercent_ev_int32_NoVirtual(this.nativeObject.pointer, percentParamValue);
	}

	protected  void getModelIdAndName_ev_int32_EVString_callback(int id, String name)
	{
		int idParamValue = id;
		String nameParamValue = name;
		getModelIdAndName(idParamValue, nameParamValue);
	}

	native private void getModelIdAndName_ev_int32_EVString(long pNativeObject, int id, String name);
	/**
	 * 获取当前导入完成的模型id与名称
	 * @param id 模型id
	 * @param name 模型名称
	 */
	public void getModelIdAndName(int id, String name)
	{
		int idParamValue = id;
		String nameParamValue = name;
		getModelIdAndName_ev_int32_EVString(this.nativeObject.pointer, idParamValue, nameParamValue);
	}
	native private void getModelIdAndName_ev_int32_EVString_NoVirtual(long pNativeObject, int id, String name);
	protected void getModelIdAndName_NoVirtual(int id, String name)
	{
		int idParamValue = id;
		String nameParamValue = name;
		getModelIdAndName_ev_int32_EVString_NoVirtual(this.nativeObject.pointer, idParamValue, nameParamValue);
	}

	native private void setTotalCount_ev_int32(long pNativeObject, int totalcount);
	/**
	 * 设置模型总数量
	 * @param totalcount 模型总数量
	 */
	public void setTotalCount(int totalcount)
	{
		int totalcountParamValue = totalcount;
		setTotalCount_ev_int32(this.nativeObject.pointer, totalcountParamValue);
	}
	native private void setCurrentCount_ev_int32(long pNativeObject, int currentCount);
	public void setCurrentCount(int currentCount)
	{
		int currentCountParamValue = currentCount;
		setCurrentCount_ev_int32(this.nativeObject.pointer, currentCountParamValue);
	}
	native private void addTotalCount_ev_int32(long pNativeObject, int addcount);
	/**
	 * 添加模型总数量
	 * @param addcount 添加的模型数量
	 */
	public void addTotalCount(int addcount)
	{
		int addcountParamValue = addcount;
		addTotalCount_ev_int32(this.nativeObject.pointer, addcountParamValue);
	}
	native private void addCurrentCount_ev_int32(long pNativeObject, int addCount);
	/**
	 * 添加当前处理的模型数量
	 * @param addCount 处理的模型数量
	 */
	public void addCurrentCount(int addCount)
	{
		int addCountParamValue = addCount;
		addCurrentCount_ev_int32(this.nativeObject.pointer, addCountParamValue);
	}
	native private int getPercent_void(long pNativeObject);
	/**
	 * 获取当前进度百分比
	 * @param  
	 * @return 进度百分比
	 */
	public int getPercent()
	{
		int returnValue = getPercent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getTotalCount_void(long pNativeObject);
	/**
	 * 获取要导入模型的总数量
	 * @param  
	 * @return 要导入模型的总数量
	 */
	public int getTotalCount()
	{
		int returnValue = getTotalCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getCurrentCount_void(long pNativeObject);
	/**
	 * 获取已经导入模型的数量
	 * @param  
	 * @return 已经导入模型的数量
	 */
	public int getCurrentCount()
	{
		int returnValue = getCurrentCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ModelPublishToolListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelPublishToolListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_information_EVString(long pNativeObject, String method);
	native protected void register_workPercent_ev_int32(long pNativeObject, String method);
	native protected void register_getModelIdAndName_ev_int32_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_information_EVString(this.nativeObject.pointer, "information_EVString_callback");
			this.register_workPercent_ev_int32(this.nativeObject.pointer, "workPercent_ev_int32_callback");
			this.register_getModelIdAndName_ev_int32_EVString(this.nativeObject.pointer, "getModelIdAndName_ev_int32_EVString_callback");
		}
	}
	
	public static ModelPublishToolListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelPublishToolListener obj = null;
 		if(baseObj instanceof ModelPublishToolListener)
		{
			obj = (ModelPublishToolListener)baseObj;
		} else {
			obj = new ModelPublishToolListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelPublishToolListener");
			obj.increaseCast();
		}

		return obj;
	}
}
