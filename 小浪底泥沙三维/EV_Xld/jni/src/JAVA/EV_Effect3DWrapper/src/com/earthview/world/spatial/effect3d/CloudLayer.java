package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 云层类
 */
public class CloudLayer extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CCloudLayer", new CloudLayerClassFactory());
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private int getCloudType_void(long pNativeObject);
	/**
	 * 获取类型
	 */
	public com.earthview.world.spatial.effect3d.EVCloudType getCloudType()
	{
		int returnValue = getCloudType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.effect3d.EVCloudType.toEnum(returnValue);
	}
	native private void setCloudType_EVCloudType(long pNativeObject, int type);
	/**
	 * 设置类型
	 * @param type 天气类型
	 */
	public void setCloudType(com.earthview.world.spatial.effect3d.EVCloudType type)
	{
		int typeParamValue = type.getValue();
		setCloudType_EVCloudType(this.nativeObject.pointer, typeParamValue);
	}
	native private long getHeightRange_void(long pNativeObject);
	/**
	 * 获取高度范围
	 * @return 高度范围
	 */
	public com.earthview.world.spatial.effect3d.HeightRange getHeightRange()
	{
		long returnValue = getHeightRange_void(this.nativeObject.pointer);
		com.earthview.world.spatial.effect3d.HeightRange __returnValue = new com.earthview.world.spatial.effect3d.HeightRange(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHeightRange");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.HeightRange)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHeightRange");
		}
		return __returnValue;
	}
	native private void setHeightRange_CHeightRange(long pNativeObject, long heightRange);
	/**
	 * 设置高度范围
	 * @param heightRange 高度范围
	 */
	public void setHeightRange(com.earthview.world.spatial.effect3d.HeightRange heightRange)
	{
		long heightRangeParamValue = heightRange.nativeObject.pointer;
		setHeightRange_CHeightRange(this.nativeObject.pointer, heightRangeParamValue);
	}
	native private void setArea_CEnvelope(long pNativeObject, long envelope);
	/**
	 * 设置范围
	 * @param index 子高度范围序号
	 */
	public void setArea(com.earthview.world.spatial.geometry.Envelope envelope)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		setArea_CEnvelope(this.nativeObject.pointer, envelopeParamValue);
	}
	native private long getArea_void(long pNativeObject);
	/**
	 * 获取范围
	 * @return 范围
	 */
	public com.earthview.world.spatial.geometry.Envelope getArea()
	{
		long returnValue = getArea_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Envelope __returnValue = new com.earthview.world.spatial.geometry.Envelope(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Envelope)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		}
		return __returnValue;
	}
	native private void setDensity_Real(long pNativeObject, double density);
	/**
	 * 设置密度
	 * @param density 密度
	 */
	public void setDensity(double density)
	{
		double densityParamValue = density;
		setDensity_Real(this.nativeObject.pointer, densityParamValue);
	}
	native private double getDensity_void(long pNativeObject);
	/**
	 * 获取密度
	 * @return 密度
	 */
	public double getDensity()
	{
		double returnValue = getDensity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置显隐
	 * @param visible 可见性
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 获取显隐
	 * @return 可见性
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String cloudTypeToString_EVCloudType(long pNativeObject, int type);
	/**
	 * 类型转字符串
	 * @param type 天气类型
	 * @return 字符串
	 */
	public String cloudTypeToString(com.earthview.world.spatial.effect3d.EVCloudType type)
	{
		int typeParamValue = type.getValue();
		String returnValue = cloudTypeToString_EVCloudType(this.nativeObject.pointer, typeParamValue);
		return returnValue;
	}
	native private int stringToCloudType_EVString(long pNativeObject, String type);
	/**
	 * 字符串转类型
	 * @param type 类型字符串
	 * @return 类型枚举
	 */
	public com.earthview.world.spatial.effect3d.EVCloudType stringToCloudType(String type)
	{
		String typeParamValue = type;
		int returnValue = stringToCloudType_EVString(this.nativeObject.pointer, typeParamValue);
		return com.earthview.world.spatial.effect3d.EVCloudType.toEnum(returnValue);
	}
	native private long getLightningManagersCount_void(long pNativeObject);
	/**
	 * 获取闪电数量
	 * @return 数量
	 */
	public long getLightningManagersCount()
	{
		long returnValue = getLightningManagersCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLightningManager_ev_int32(long pNativeObject, int index);
	/**
	 * 根据索引获取闪电对象
	 * @param index 索引号
	 */
	public com.earthview.world.spatial.effect3d.LightningManager getLightningManager(int index)
	{
		int indexParamValue = index;
		long returnValue = getLightningManager_ev_int32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.LightningManager __returnValue = new com.earthview.world.spatial.effect3d.LightningManager(CreatedWhenConstruct.CWC_NotToCreate, "CLightningManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.LightningManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLightningManager");
		}
		return __returnValue;
	}
	native private void clearLightning_void(long pNativeObject);
	/**
	 * 清空闪电
	 */
	public void clearLightning()
	{
		clearLightning_void(this.nativeObject.pointer);
	}
	native private long createLightningManager_CHeightRange(long pNativeObject, long range);
	/**
	 * 添加闪电
	 * @param rage 闪电大小
	 * @return 新建闪电对象
	 */
	public com.earthview.world.spatial.effect3d.LightningManager createLightningManager(com.earthview.world.spatial.effect3d.HeightRange range)
	{
		long rangeParamValue = range.nativeObject.pointer;
		long returnValue = createLightningManager_CHeightRange(this.nativeObject.pointer, rangeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.LightningManager __returnValue = new com.earthview.world.spatial.effect3d.LightningManager(CreatedWhenConstruct.CWC_NotToCreate, "CLightningManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.LightningManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLightningManager");
		}
		return __returnValue;
	}
	native private void destroyLightningManager_CLightningManager(long pNativeObject, long lightning);
	/**
	 * 销毁闪电
	 * @param lightning 闪电对象
	 */
	public void destroyLightningManager(com.earthview.world.spatial.effect3d.LightningManager lightning)
	{
		long lightningParamValue = (lightning == null ? 0L : lightning.nativeObject.pointer);
		destroyLightningManager_CLightningManager(this.nativeObject.pointer, lightningParamValue);
	}
	native private void updateToRender_CLightningManager(long pNativeObject, long ref_lightning);
	/**
	 * 刷新渲染对象(即渲染闪电）
	 * @param lightning 闪电对象
	 */
	public void updateToRender(com.earthview.world.spatial.effect3d.LightningManager ref_lightning)
	{
		long ref_lightningParamValue = (ref_lightning == null ? 0L : ref_lightning.nativeObject.pointer);
		updateToRender_CLightningManager(this.nativeObject.pointer, ref_lightningParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆云图层
	 */
	public com.earthview.world.spatial.effect3d.CloudLayer ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.CloudLayer __returnValue = new com.earthview.world.spatial.effect3d.CloudLayer(CreatedWhenConstruct.CWC_NotToCreate, "CCloudLayer");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.CloudLayer)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCloudLayer");
		}
		return __returnValue;
	}
	native private void setAllowVolumeCloudMove_ev_bool(long pNativeObject, boolean bol);
	public void setAllowVolumeCloudMove(boolean bol)
	{
		boolean bolParamValue = bol;
		setAllowVolumeCloudMove_ev_bool(this.nativeObject.pointer, bolParamValue);
	}
	native private boolean getAllowVolumeCloudMove_void(long pNativeObject);
	public boolean getAllowVolumeCloudMove()
	{
		boolean returnValue = getAllowVolumeCloudMove_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getParent_void(long pNativeObject);
	/**
	 * 获取父环境对象
	 * @return 环境对象
	 */
	public com.earthview.world.spatial.effect3d.RegionAtmosphere getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.RegionAtmosphere __returnValue = new com.earthview.world.spatial.effect3d.RegionAtmosphere(CreatedWhenConstruct.CWC_NotToCreate, "CRegionAtmosphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.RegionAtmosphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRegionAtmosphere");
		}
		return __returnValue;
	}
	public CloudLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CloudLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CloudLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CloudLayer obj = null;
 		if(baseObj instanceof CloudLayer)
		{
			obj = (CloudLayer)baseObj;
		} else {
			obj = new CloudLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCloudLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
