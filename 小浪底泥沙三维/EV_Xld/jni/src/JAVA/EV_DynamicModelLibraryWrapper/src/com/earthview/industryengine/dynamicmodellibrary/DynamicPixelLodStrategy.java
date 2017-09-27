package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 基于像素投影的LOD策略
 */
public class DynamicPixelLodStrategy extends com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy", new DynamicPixelLodStrategyClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCDynamicPixelLodStrategyProxy", new DynamicPixelLodStrategyClassFactory());
	}

	/**
	 * 像素LOD策略构造函数
	 */
	public DynamicPixelLodStrategy() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDynamicPixelLodStrategyProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicPixelLodStrategy".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getLodValue_CDynamicModelObject_CGlobeCamera(long pNativeObject, long modelObject, long camera);
	/**
	 * 计算动态目标对象当前的LOD值
	 * @param modelObject 动态目标对象
	 * @param camera 相机对象
	 * @return 动态目标对象当前的LOD值
	 */
	public double getLodValue(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObject, com.earthview.world.spatial3d.GlobeCamera camera)
	{
		long modelObjectParamValue = (modelObject == null ? 0L : modelObject.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		double returnValue = getLodValue_CDynamicModelObject_CGlobeCamera(this.nativeObject.pointer, modelObjectParamValue, cameraParamValue);
		return returnValue;
	}
	native private double getLodValue_CDynamicModelObject_CGlobeCamera_NoVirtual(long pNativeObject, long modelObject, long camera);
	protected double getLodValue_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObject, com.earthview.world.spatial3d.GlobeCamera camera)
	{
		long modelObjectParamValue = (modelObject == null ? 0L : modelObject.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		double returnValue = getLodValue_CDynamicModelObject_CGlobeCamera_NoVirtual(this.nativeObject.pointer, modelObjectParamValue, cameraParamValue);
		return returnValue;
	}

	public DynamicPixelLodStrategy(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynamicPixelLodStrategy(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 判断动态目标是否通过LOD验证
	 * @param modelObject 动态目标
	 * @param lodStrategyItemName 子LOD项目名称
	 * @param camera 相机
	 * @return 是否通过验证
	 */
	public boolean isPassed(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObject, String lodStrategyItemName, com.earthview.world.spatial3d.GlobeCamera camera)
	{
		return super.isPassed_NoVirtual(modelObject, lodStrategyItemName, camera);
	}
	/**
	 * 设置最大可见值
	 * @param name lod子项名称
	 * @param maxVisibleValue 最大可见值
	 */
	public void setMaxVisibleValue(String name, double maxVisibleValue)
	{
		super.setMaxVisibleValue_NoVirtual(name, maxVisibleValue);
	}
	/**
	 * 设置最小可见值
	 * @param name lod子项名称
	 * @param minVisibleValue 最小可见值
	 */
	public void setMinVisibleValue(String name, double minVisibleValue)
	{
		super.setMinVisibleValue_NoVirtual(name, minVisibleValue);
	}
	/**
	 * 获取最大可见值
	 * @param name lod子项名称
	 * @return 最大可见值
	 */
	public double getMaxVisibleValue(String name)
	{
		return super.getMaxVisibleValue_NoVirtual(name);
	}
	/**
	 * 获取最小可见值
	 * @param name lod子项名称
	 * @return 最小可见值
	 */
	public double getMinVisibleValue(String name)
	{
		return super.getMinVisibleValue_NoVirtual(name);
	}
	/**
	 * 注册子LOD项目
	 * @param ref_lodStrategyItem 子LOD项目,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void registerLodStrategyItem(com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyItem ref_lodStrategyItem)
	{
		super.registerLodStrategyItem_NoVirtual(ref_lodStrategyItem);
	}
	/**
	 * 反注册LOD项目
	 * @param name lod子项名称
	 */
	public void unregisterLodStrategyItem(String name)
	{
		super.unregisterLodStrategyItem_NoVirtual(name);
	}
	/**
	 * 添加LOD策略监听
	 * @param ref_lodStrategyListener LOD策略监听,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void addLodStrategyListener(com.earthview.industryengine.dynamicmodellibrary.DynamicLodStrategy.DynamicLodStrategyListener ref_lodStrategyListener)
	{
		super.addLodStrategyListener_NoVirtual(ref_lodStrategyListener);
	}
	/**
	 * 删除LOD策略监听
	 * @param name lod监听名称
	 */
	public void removeLodStrategyListener(String name)
	{
		super.removeLodStrategyListener_NoVirtual(name);
	}
	/**
	 * 触发lod策略响应
	 * @param modelObject 动态目标对象
	 * @param camera 相机对象
	 */
	public void fireLodStrategyListener(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject modelObject, com.earthview.world.spatial3d.GlobeCamera camera)
	{
		super.fireLodStrategyListener_NoVirtual(modelObject, camera);
	}
	
	native protected void register_isPassed_CDynamicModelObject_EVString_CGlobeCamera(long pNativeObject, String method);
	native protected void register_setMaxVisibleValue_EVString_Real(long pNativeObject, String method);
	native protected void register_setMinVisibleValue_EVString_Real(long pNativeObject, String method);
	native protected void register_getMaxVisibleValue_EVString(long pNativeObject, String method);
	native protected void register_getMinVisibleValue_EVString(long pNativeObject, String method);
	native protected void register_registerLodStrategyItem_CDynamicLodStrategyItem(long pNativeObject, String method);
	native protected void register_unregisterLodStrategyItem_EVString(long pNativeObject, String method);
	native protected void register_addLodStrategyListener_CDynamicLodStrategyListener(long pNativeObject, String method);
	native protected void register_removeLodStrategyListener_EVString(long pNativeObject, String method);
	native protected void register_getLodValue_CDynamicModelObject_CGlobeCamera(long pNativeObject, String method);
	native protected void register_fireLodStrategyListener_CDynamicModelObject_CGlobeCamera(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isPassed_CDynamicModelObject_EVString_CGlobeCamera(this.nativeObject.pointer, "isPassed_CDynamicModelObject_EVString_CGlobeCamera_callback");
			this.register_setMaxVisibleValue_EVString_Real(this.nativeObject.pointer, "setMaxVisibleValue_EVString_Real_callback");
			this.register_setMinVisibleValue_EVString_Real(this.nativeObject.pointer, "setMinVisibleValue_EVString_Real_callback");
			this.register_getMaxVisibleValue_EVString(this.nativeObject.pointer, "getMaxVisibleValue_EVString_callback");
			this.register_getMinVisibleValue_EVString(this.nativeObject.pointer, "getMinVisibleValue_EVString_callback");
			this.register_registerLodStrategyItem_CDynamicLodStrategyItem(this.nativeObject.pointer, "registerLodStrategyItem_CDynamicLodStrategyItem_callback");
			this.register_unregisterLodStrategyItem_EVString(this.nativeObject.pointer, "unregisterLodStrategyItem_EVString_callback");
			this.register_addLodStrategyListener_CDynamicLodStrategyListener(this.nativeObject.pointer, "addLodStrategyListener_CDynamicLodStrategyListener_callback");
			this.register_removeLodStrategyListener_EVString(this.nativeObject.pointer, "removeLodStrategyListener_EVString_callback");
			this.register_getLodValue_CDynamicModelObject_CGlobeCamera(this.nativeObject.pointer, "getLodValue_CDynamicModelObject_CGlobeCamera_callback");
			this.register_fireLodStrategyListener_CDynamicModelObject_CGlobeCamera(this.nativeObject.pointer, "fireLodStrategyListener_CDynamicModelObject_CGlobeCamera_callback");
		}
	}
	
	public static DynamicPixelLodStrategy fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynamicPixelLodStrategy obj = null;
 		if(baseObj instanceof DynamicPixelLodStrategy)
		{
			obj = (DynamicPixelLodStrategy)baseObj;
		} else {
			obj = new DynamicPixelLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynamicPixelLodStrategy");
			obj.increaseCast();
		}

		return obj;
	}
}
