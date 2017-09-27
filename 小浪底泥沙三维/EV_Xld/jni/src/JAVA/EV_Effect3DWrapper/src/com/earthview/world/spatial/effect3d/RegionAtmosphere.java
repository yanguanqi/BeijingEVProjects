package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 局部自然环境类
 */
public class RegionAtmosphere extends com.earthview.world.spatial.spatial3d.Iatmosphere {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CRegionAtmosphere", new RegionAtmosphereClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::JCRegionAtmosphereProxy", new RegionAtmosphereClassFactory());
	}

	protected  long getStringInterfacePtr_void_callback()
	{
		com.earthview.world.core.StringInterface returnValue = getStringInterfacePtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getStringInterfacePtr_void(long pNativeObject);
	/**
	 * 获得属性字符界面类的指针
	 * @param  
	 * @return 返回内部类的指针
	 */
	public com.earthview.world.core.StringInterface getStringInterfacePtr()
	{
		long returnValue = getStringInterfacePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.StringInterface __returnValue = new com.earthview.world.core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStringInterface");
		}
		return __returnValue;
	}
	native private long getStringInterfacePtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.StringInterface getStringInterfacePtr_NoVirtual()
	{
		long returnValue = getStringInterfacePtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.StringInterface __returnValue = new com.earthview.world.core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStringInterface");
		}
		return __returnValue;
	}

	native private long getSceneManager_void(long pNativeObject);
	/**
	 * 获取场景管理器
	 */
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		long returnValue = getSceneManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private boolean frameStarted_FrameEvent(long pNativeObject, long evt);
	/**
	 * 帧监听开始
	 */
	public boolean frameStarted(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameStarted_FrameEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private void setEnvelope_CEnvelope(long pNativeObject, long envelope);
	/**
	 * 设置区域范围
	 */
	public void setEnvelope(com.earthview.world.spatial.geometry.Envelope envelope)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		setEnvelope_CEnvelope(this.nativeObject.pointer, envelopeParamValue);
	}
	native private long getEnvelope_void(long pNativeObject);
	/**
	 * 获取范围
	 */
	public com.earthview.world.spatial.geometry.Envelope getEnvelope()
	{
		long returnValue = getEnvelope_void(this.nativeObject.pointer);
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
	protected  void setWeather_EVWeatherType_callback(int type)
	{
		com.earthview.world.spatial.effect3d.EVWeatherType typeParamValue = com.earthview.world.spatial.effect3d.EVWeatherType.toEnum(type);
		setWeather(typeParamValue);
	}

	native private void setWeather_EVWeatherType(long pNativeObject, int type);
	/**
	 * 设置天气
	 */
	public void setWeather(com.earthview.world.spatial.effect3d.EVWeatherType type)
	{
		int typeParamValue = type.getValue();
		setWeather_EVWeatherType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setWeather_EVWeatherType_NoVirtual(long pNativeObject, int type);
	protected void setWeather_NoVirtual(com.earthview.world.spatial.effect3d.EVWeatherType type)
	{
		int typeParamValue = type.getValue();
		setWeather_EVWeatherType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	native private int getWeather_void(long pNativeObject);
	/**
	 * 获取天气
	 */
	public com.earthview.world.spatial.effect3d.EVWeatherType getWeather()
	{
		int returnValue = getWeather_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.effect3d.EVWeatherType.toEnum(returnValue);
	}
	native private void setMinimumAmbientLight_CColourValue(long pNativeObject, long colour);
	/**
	 * 设置最小环境光
	 */
	public void setMinimumAmbientLight(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setMinimumAmbientLight_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private long getMinimumAmbientLight_void(long pNativeObject);
	/**
	 * 获取最小环境光
	 */
	public com.earthview.world.graphic.ColourValue getMinimumAmbientLight()
	{
		long returnValue = getMinimumAmbientLight_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setManageAmbientLight_ev_bool(long pNativeObject, boolean manage);
	/**
	 * 设置最小环境光是否可用
	 */
	public void setManageAmbientLight(boolean manage)
	{
		boolean manageParamValue = manage;
		setManageAmbientLight_ev_bool(this.nativeObject.pointer, manageParamValue);
	}
	native private boolean getManageAmbientLight_void(long pNativeObject);
	/**
	 * 返回环境光可用性
	 */
	public boolean getManageAmbientLight()
	{
		boolean returnValue = getManageAmbientLight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAmbientMultiplier_CColourValue(long pNativeObject, long colour);
	/**
	 * 设置环境光颜色
	 */
	public void setAmbientMultiplier(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setAmbientMultiplier_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private long getAmbientMultiplier_void(long pNativeObject);
	/**
	 * 获取环境光颜色
	 */
	public com.earthview.world.graphic.ColourValue getAmbientMultiplier()
	{
		long returnValue = getAmbientMultiplier_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long createCloudLayer_EVCloudType_CHeightRange(long pNativeObject, int type, long height);
	/**
	 * 在高度范围内创建云层
	 * @param type 类型
	 * @param height 云层高度
	 * @return 新建云层对象
	 */
	public com.earthview.world.spatial.effect3d.CloudLayer createCloudLayer(com.earthview.world.spatial.effect3d.EVCloudType type, com.earthview.world.spatial.effect3d.HeightRange height)
	{
		int typeParamValue = type.getValue();
		long heightParamValue = height.nativeObject.pointer;
		long returnValue = createCloudLayer_EVCloudType_CHeightRange(this.nativeObject.pointer, typeParamValue, heightParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.CloudLayer __returnValue = new com.earthview.world.spatial.effect3d.CloudLayer(CreatedWhenConstruct.CWC_NotToCreate, "CCloudLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.CloudLayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCloudLayer");
		}
		return __returnValue;
	}
	native private void destroyCloudLayer_CCloudLayer(long pNativeObject, long cloudlayer);
	/**
	 * 销毁云层
	 */
	public void destroyCloudLayer(com.earthview.world.spatial.effect3d.CloudLayer cloudlayer)
	{
		long cloudlayerParamValue = (cloudlayer == null ? 0L : cloudlayer.nativeObject.pointer);
		destroyCloudLayer_CCloudLayer(this.nativeObject.pointer, cloudlayerParamValue);
	}
	native private long createWind_void(long pNativeObject);
	/**
	 * 创建风
	 * @return 新建风对象
	 */
	public com.earthview.world.spatial.effect3d.Wind createWind()
	{
		long returnValue = createWind_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.Wind __returnValue = new com.earthview.world.spatial.effect3d.Wind(CreatedWhenConstruct.CWC_NotToCreate, "CWind");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.Wind)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWind");
		}
		return __returnValue;
	}
	native private void destroyWind_CWind(long pNativeObject, long wind);
	/**
	 * 销毁风
	 * @param wind 风对象
	 */
	public void destroyWind(com.earthview.world.spatial.effect3d.Wind wind)
	{
		long windParamValue = (wind == null ? 0L : wind.nativeObject.pointer);
		destroyWind_CWind(this.nativeObject.pointer, windParamValue);
	}
	native private long createLightningManager_CHeightRange(long pNativeObject, long range);
	/**
	 * 创建闪电
	 * @param range 闪电大小
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
	native private long getCloudLayersCount_void(long pNativeObject);
	/**
	 * 获取云层数量
	 */
	public long getCloudLayersCount()
	{
		long returnValue = getCloudLayersCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCloudLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 根据索引获取云层
	 */
	public com.earthview.world.spatial.effect3d.CloudLayer getCloudLayer(long index)
	{
		long indexParamValue = index;
		long returnValue = getCloudLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.CloudLayer __returnValue = new com.earthview.world.spatial.effect3d.CloudLayer(CreatedWhenConstruct.CWC_NotToCreate, "CCloudLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.CloudLayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCloudLayer");
		}
		return __returnValue;
	}
	native private void setGroundFog_CGroundFog(long pNativeObject, long ref_fog);
	/**
	 * 设置雾
	 */
	public void setGroundFog(com.earthview.world.spatial.effect3d.GroundFog ref_fog)
	{
		long ref_fogParamValue = (ref_fog == null ? 0L : ref_fog.nativeObject.pointer);
		setGroundFog_CGroundFog(this.nativeObject.pointer, ref_fogParamValue);
	}
	native private long getGroundFog_void(long pNativeObject);
	/**
	 * 获取雾
	 */
	public com.earthview.world.spatial.effect3d.GroundFog getGroundFog()
	{
		long returnValue = getGroundFog_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.GroundFog __returnValue = new com.earthview.world.spatial.effect3d.GroundFog(CreatedWhenConstruct.CWC_NotToCreate, "CGroundFog");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.GroundFog)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGroundFog");
		}
		return __returnValue;
	}
	native private long getWindsCount_void(long pNativeObject);
	/**
	 * 获取风数量
	 */
	public long getWindsCount()
	{
		long returnValue = getWindsCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getWind_ev_uint32(long pNativeObject, long index);
	/**
	 * 根据索引获取风对象
	 */
	public com.earthview.world.spatial.effect3d.Wind getWind(long index)
	{
		long indexParamValue = index;
		long returnValue = getWind_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.Wind __returnValue = new com.earthview.world.spatial.effect3d.Wind(CreatedWhenConstruct.CWC_NotToCreate, "CWind");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.Wind)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWind");
		}
		return __returnValue;
	}
	native private long getLightningManagersCount_void(long pNativeObject);
	/**
	 * 获取闪电管理对象数量
	 */
	public long getLightningManagersCount()
	{
		long returnValue = getLightningManagersCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLightningManager_ev_uint32(long pNativeObject, long index);
	/**
	 * 根据索引获取闪电管理对象
	 */
	public com.earthview.world.spatial.effect3d.LightningManager getLightningManager(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightningManager_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private void setSun_CSun(long pNativeObject, long ref_sun);
	/**
	 * 设置太阳
	 */
	public void setSun(com.earthview.world.spatial.effect3d.Sun ref_sun)
	{
		long ref_sunParamValue = (ref_sun == null ? 0L : ref_sun.nativeObject.pointer);
		setSun_CSun(this.nativeObject.pointer, ref_sunParamValue);
	}
	native private long getSun_void(long pNativeObject);
	/**
	 * 获取太阳
	 */
	public com.earthview.world.spatial.effect3d.Sun getSun()
	{
		long returnValue = getSun_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.Sun __returnValue = new com.earthview.world.spatial.effect3d.Sun(CreatedWhenConstruct.CWC_NotToCreate, "CSun");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.Sun)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSun");
		}
		return __returnValue;
	}
	native private void setMoon_CMoon(long pNativeObject, long ref_moon);
	/**
	 * 设置月亮
	 */
	public void setMoon(com.earthview.world.spatial.effect3d.Moon ref_moon)
	{
		long ref_moonParamValue = (ref_moon == null ? 0L : ref_moon.nativeObject.pointer);
		setMoon_CMoon(this.nativeObject.pointer, ref_moonParamValue);
	}
	native private long getMoon_void(long pNativeObject);
	/**
	 * 获取月亮
	 */
	public com.earthview.world.spatial.effect3d.Moon getMoon()
	{
		long returnValue = getMoon_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.Moon __returnValue = new com.earthview.world.spatial.effect3d.Moon(CreatedWhenConstruct.CWC_NotToCreate, "CMoon");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.Moon)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMoon");
		}
		return __returnValue;
	}
	native private void setStars_CStars(long pNativeObject, long stars);
	/**
	 * 设置星空
	 */
	public void setStars(com.earthview.world.spatial.effect3d.Stars stars)
	{
		long starsParamValue = (stars == null ? 0L : stars.nativeObject.pointer);
		setStars_CStars(this.nativeObject.pointer, starsParamValue);
	}
	native private long getStars_void(long pNativeObject);
	/**
	 * 获取星空
	 */
	public com.earthview.world.spatial.effect3d.Stars getStars()
	{
		long returnValue = getStars_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.Stars __returnValue = new com.earthview.world.spatial.effect3d.Stars(CreatedWhenConstruct.CWC_NotToCreate, "CStars");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.Stars)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStars");
		}
		return __returnValue;
	}
	native private void setPrecipitation_CPrecipitation(long pNativeObject, long ref_precipitation);
	/**
	 * 设置降水
	 */
	public void setPrecipitation(com.earthview.world.spatial.effect3d.Precipitation ref_precipitation)
	{
		long ref_precipitationParamValue = (ref_precipitation == null ? 0L : ref_precipitation.nativeObject.pointer);
		setPrecipitation_CPrecipitation(this.nativeObject.pointer, ref_precipitationParamValue);
	}
	native private long getPrecipitation_void(long pNativeObject);
	/**
	 * 获取降水
	 */
	public com.earthview.world.spatial.effect3d.Precipitation getPrecipitation()
	{
		long returnValue = getPrecipitation_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.Precipitation __returnValue = new com.earthview.world.spatial.effect3d.Precipitation(CreatedWhenConstruct.CWC_NotToCreate, "CPrecipitation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.Precipitation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPrecipitation");
		}
		return __returnValue;
	}
	native private static void shutdown_void();
	/**
	 * 关闭
	 */
	public static void shutdown()
	{
		shutdown_void();
	}
	native private void setRainSnowSystem_CRainSnowSystem(long pNativeObject, long ref_rainSnowSystem);
	/**
	 * 设置雨雪系统(粒子系统)
	 */
	public void setRainSnowSystem(com.earthview.world.spatial.effect3d.RainSnowSystem ref_rainSnowSystem)
	{
		long ref_rainSnowSystemParamValue = (ref_rainSnowSystem == null ? 0L : ref_rainSnowSystem.nativeObject.pointer);
		setRainSnowSystem_CRainSnowSystem(this.nativeObject.pointer, ref_rainSnowSystemParamValue);
	}
	native private long getRainSnowSystem_void(long pNativeObject);
	/**
	 * 获取雨雪系统(粒子系统)
	 */
	public com.earthview.world.spatial.effect3d.RainSnowSystem getRainSnowSystem()
	{
		long returnValue = getRainSnowSystem_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.RainSnowSystem __returnValue = new com.earthview.world.spatial.effect3d.RainSnowSystem(CreatedWhenConstruct.CWC_NotToCreate, "CRainSnowSystem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.RainSnowSystem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRainSnowSystem");
		}
		return __returnValue;
	}
	native private void removeRainSnowSystem_void(long pNativeObject);
	/**
	 * 移除雨雪系统
	 */
	public void removeRainSnowSystem()
	{
		removeRainSnowSystem_void(this.nativeObject.pointer);
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
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setObserverParam_CDegree_CDegree_ev_real64_CVector3(long pNativeObject, long lon, long lat, double alt, long cameraLookDir);
	/**
	 * 设置观察者参数
	 */
	public void setObserverParam(com.earthview.world.spatial.math.Degree lon, com.earthview.world.spatial.math.Degree lat, double alt, com.earthview.world.spatial.math.Vector3 cameraLookDir)
	{
		long lonParamValue = lon.nativeObject.pointer;
		long latParamValue = lat.nativeObject.pointer;
		double altParamValue = alt;
		long cameraLookDirParamValue = cameraLookDir.nativeObject.pointer;
		setObserverParam_CDegree_CDegree_ev_real64_CVector3(this.nativeObject.pointer, lonParamValue, latParamValue, altParamValue, cameraLookDirParamValue);
	}
	native private void setDateTime_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_int8(long pNativeObject, int year, int month, int day, int hour, int minute, double second, byte time_zone);
	/**
	 * 设置时间
	 */
	public void setDateTime(int year, int month, int day, int hour, int minute, double second, byte time_zone)
	{
		int yearParamValue = year;
		int monthParamValue = month;
		int dayParamValue = day;
		int hourParamValue = hour;
		int minuteParamValue = minute;
		double secondParamValue = second;
		byte time_zoneParamValue = time_zone;
		setDateTime_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_int8(this.nativeObject.pointer, yearParamValue, monthParamValue, dayParamValue, hourParamValue, minuteParamValue, secondParamValue, time_zoneParamValue);
	}
	native private void setUseSystemTime_ev_bool(long pNativeObject, boolean system_time);
	/**
	 * 是否启用系统时间
	 */
	public void setUseSystemTime(boolean system_time)
	{
		boolean system_timeParamValue = system_time;
		setUseSystemTime_ev_bool(this.nativeObject.pointer, system_timeParamValue);
	}
	native private boolean getUseSystemTime_void(long pNativeObject);
	/**
	 * 获取是否启用系统时间
	 */
	public boolean getUseSystemTime()
	{
		boolean returnValue = getUseSystemTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDateTime_void(long pNativeObject);
	/**
	 * 获取时间
	 */
	public com.earthview.world.core.CoreTime getDateTime()
	{
		long returnValue = getDateTime_void(this.nativeObject.pointer);
		com.earthview.world.core.CoreTime __returnValue = new com.earthview.world.core.CoreTime(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.CoreTime)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
		}
		return __returnValue;
	}
	native private byte getTimeZone_void(long pNativeObject);
	/**
	 * 获取时区
	 */
	public byte getTimeZone()
	{
		byte returnValue = getTimeZone_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTimeScale_Real(long pNativeObject, double scale);
	/**
	 * 设置时间流速
	 */
	public void setTimeScale(double scale)
	{
		double scaleParamValue = scale;
		setTimeScale_Real(this.nativeObject.pointer, scaleParamValue);
	}
	native private double getTimeScale_void(long pNativeObject);
	/**
	 * 获取时间流速
	 */
	public double getTimeScale()
	{
		double returnValue = getTimeScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void create_CViewport_callback(long ref_viewport)
	{
		com.earthview.world.graphic.Viewport ref_viewportParamValue = (ref_viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_viewportParamValue != null)
		{
		ref_viewportParamValue.setDelegate(true);
		ref_viewportParamValue.setInstancePointer(new InstancePointer(ref_viewport));
		IClassFactory ref_viewportParamValueClassFactory = GlobalClassFactoryMap.get(ref_viewportParamValue.getCppInstanceTypeName());
		if (ref_viewportParamValueClassFactory != null)
		{
			ref_viewportParamValue.setDelegate(true);
			ref_viewportParamValue = (com.earthview.world.graphic.Viewport)ref_viewportParamValueClassFactory.create();
			ref_viewportParamValue.setDelegate(true);
			ref_viewportParamValue.setInstancePointer(new InstancePointer(ref_viewport));
		}
		}
		create(ref_viewportParamValue);
	}

	native private void create_CViewport(long pNativeObject, long ref_viewport);
	/**
	 * /根据视口创建/
	 */
	public void create(com.earthview.world.graphic.Viewport ref_viewport)
	{
		long ref_viewportParamValue = (ref_viewport == null ? 0L : ref_viewport.nativeObject.pointer);
		create_CViewport(this.nativeObject.pointer, ref_viewportParamValue);
	}
	native private void create_CViewport_NoVirtual(long pNativeObject, long ref_viewport);
	protected void create_NoVirtual(com.earthview.world.graphic.Viewport ref_viewport)
	{
		long ref_viewportParamValue = (ref_viewport == null ? 0L : ref_viewport.nativeObject.pointer);
		create_CViewport_NoVirtual(this.nativeObject.pointer, ref_viewportParamValue);
	}

	protected  void destroy_void_callback()
	{
		destroy();
	}

	native private void destroy_void(long pNativeObject);
	/**
	 * 销毁
	 */
	public void destroy()
	{
		destroy_void(this.nativeObject.pointer);
	}
	native private void destroy_void_NoVirtual(long pNativeObject);
	protected void destroy_NoVirtual()
	{
		destroy_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void pause_void(long pNativeObject);
	/**
	 * 暂停
	 */
	public void pause()
	{
		pause_void(this.nativeObject.pointer);
	}
	native private void resume_void(long pNativeObject);
	/**
	 * 重置状态
	 */
	public void resume()
	{
		resume_void(this.nativeObject.pointer);
	}
	protected  void setAerosphereThickness_Real_callback(double thickness)
	{
		double thicknessParamValue = thickness;
		setAerosphereThickness(thicknessParamValue);
	}

	native private void setAerosphereThickness_Real(long pNativeObject, double thickness);
	/**
	 * 设置大气圈厚度
	 */
	public void setAerosphereThickness(double thickness)
	{
		double thicknessParamValue = thickness;
		setAerosphereThickness_Real(this.nativeObject.pointer, thicknessParamValue);
	}
	native private void setAerosphereThickness_Real_NoVirtual(long pNativeObject, double thickness);
	protected void setAerosphereThickness_NoVirtual(double thickness)
	{
		double thicknessParamValue = thickness;
		setAerosphereThickness_Real_NoVirtual(this.nativeObject.pointer, thicknessParamValue);
	}

	native private double getAerosphereThickness_void(long pNativeObject);
	/**
	 * 获取大气圈厚度
	 */
	public double getAerosphereThickness()
	{
		double returnValue = getAerosphereThickness_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setRealCloudHeight_Real_callback(double height)
	{
		double heightParamValue = height;
		setRealCloudHeight(heightParamValue);
	}

	native private void setRealCloudHeight_Real(long pNativeObject, double height);
	/**
	 * 设置大气云高度
	 */
	public void setRealCloudHeight(double height)
	{
		double heightParamValue = height;
		setRealCloudHeight_Real(this.nativeObject.pointer, heightParamValue);
	}
	native private void setRealCloudHeight_Real_NoVirtual(long pNativeObject, double height);
	protected void setRealCloudHeight_NoVirtual(double height)
	{
		double heightParamValue = height;
		setRealCloudHeight_Real_NoVirtual(this.nativeObject.pointer, heightParamValue);
	}

	native private double getRealCloudHeight_void(long pNativeObject);
	/**
	 * 获取全球云高度
	 */
	public double getRealCloudHeight()
	{
		double returnValue = getRealCloudHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String EVWeatherTypeToString_EVWeatherType(long pNativeObject, int type);
	/**
	 * 天气类型到英文字符串转换
	 */
	public String EVWeatherTypeToString(com.earthview.world.spatial.effect3d.EVWeatherType type)
	{
		int typeParamValue = type.getValue();
		String returnValue = EVWeatherTypeToString_EVWeatherType(this.nativeObject.pointer, typeParamValue);
		return returnValue;
	}
	native private String EVWeatherTypeToStringCHS_EVWeatherType(long pNativeObject, int type);
	/**
	 * 天气类型到中文字符串转换
	 */
	public String EVWeatherTypeToStringCHS(com.earthview.world.spatial.effect3d.EVWeatherType type)
	{
		int typeParamValue = type.getValue();
		String returnValue = EVWeatherTypeToStringCHS_EVWeatherType(this.nativeObject.pointer, typeParamValue);
		return returnValue;
	}
	native private int toEVWeatherType_EVString(long pNativeObject, String type);
	/**
	 * 英文字符串到天气类型的转换
	 */
	public com.earthview.world.spatial.effect3d.EVWeatherType toEVWeatherType(String type)
	{
		String typeParamValue = type;
		int returnValue = toEVWeatherType_EVString(this.nativeObject.pointer, typeParamValue);
		return com.earthview.world.spatial.effect3d.EVWeatherType.toEnum(returnValue);
	}
	native private int toEVWeatherTypeCHS_EVString(long pNativeObject, String type);
	/**
	 * 中文字符串到天气类型转换
	 */
	public com.earthview.world.spatial.effect3d.EVWeatherType toEVWeatherTypeCHS(String type)
	{
		String typeParamValue = type;
		int returnValue = toEVWeatherTypeCHS_EVString(this.nativeObject.pointer, typeParamValue);
		return com.earthview.world.spatial.effect3d.EVWeatherType.toEnum(returnValue);
	}
	native private boolean enableSkyDome_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭天空盒
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableSkyDome(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableSkyDome_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isSkyDomeEnabled_void(long pNativeObject);
	/**
	 * 获取天空盒开启状态
	 * @return 开启状态
	 */
	public boolean isSkyDomeEnabled()
	{
		boolean returnValue = isSkyDomeEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableSkyDomeRefractable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置天空盒折射状态
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableSkyDomeRefractable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableSkyDomeRefractable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isSkyDomeRefractable_void(long pNativeObject);
	/**
	 * 获取天空盒折射状态
	 * @return 开启状态
	 */
	public boolean isSkyDomeRefractable()
	{
		boolean returnValue = isSkyDomeRefractable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableSkyDomeReflectable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭天空盒反射效果
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableSkyDomeReflectable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableSkyDomeReflectable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isSkyDomeReflectable_void(long pNativeObject);
	/**
	 * 获取天空和反射状态
	 * @return 开启状态
	 */
	public boolean isSkyDomeReflectable()
	{
		boolean returnValue = isSkyDomeReflectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRealCloudVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置全球云显隐
	 * @param enable 是否显示
	 */
	public void setRealCloudVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setRealCloudVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean isRealCloudVisible_void(long pNativeObject);
	public boolean isRealCloudVisible()
	{
		boolean returnValue = isRealCloudVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableRealCloud_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭全球云
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableRealCloud(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableRealCloud_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isRealCloudEnabled_void(long pNativeObject);
	public boolean isRealCloudEnabled()
	{
		boolean returnValue = isRealCloudEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableRealCloudFlow_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭全球云飘动
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableRealCloudFlow(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableRealCloudFlow_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isRealCloudFlowEnabled_void(long pNativeObject);
	public boolean isRealCloudFlowEnabled()
	{
		boolean returnValue = isRealCloudFlowEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableFlatCloud_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭平面云
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableFlatCloud(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableFlatCloud_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isFlatCloudEnabled_void(long pNativeObject);
	public boolean isFlatCloudEnabled()
	{
		boolean returnValue = isFlatCloudEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableVolumeCloud_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭体积云
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableVolumeCloud(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableVolumeCloud_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isVolumeCloudEnabled_void(long pNativeObject);
	public boolean isVolumeCloudEnabled()
	{
		boolean returnValue = isVolumeCloudEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableSun_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭太阳
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableSun(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableSun_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isSunEnabled_void(long pNativeObject);
	public boolean isSunEnabled()
	{
		boolean returnValue = isSunEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableSunLight_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭太阳光
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableSunLight(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableSunLight_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isSunLightEnabled_void(long pNativeObject);
	public boolean isSunLightEnabled()
	{
		boolean returnValue = isSunLightEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableMoon_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭月亮
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableMoon(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableMoon_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isMoonEnabled_void(long pNativeObject);
	public boolean isMoonEnabled()
	{
		boolean returnValue = isMoonEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableMoonLight_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭月光
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableMoonLight(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableMoonLight_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isMoonLightEnabled_void(long pNativeObject);
	public boolean isMoonLightEnabled()
	{
		boolean returnValue = isMoonLightEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableStars_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭星空
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableStars(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableStars_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isStarsEnabled_void(long pNativeObject);
	public boolean isStarsEnabled()
	{
		boolean returnValue = isStarsEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableLightning_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭闪电
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableLightning(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableLightning_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isLightningEnabled_void(long pNativeObject);
	public boolean isLightningEnabled()
	{
		boolean returnValue = isLightningEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enablePrecipitation_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 开启关闭降水效果
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enablePrecipitation(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enablePrecipitation_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isPrecipitationEnabled_void(long pNativeObject);
	public boolean isPrecipitationEnabled()
	{
		boolean returnValue = isPrecipitationEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 返回可见性
	 * @param visible 是否显示
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableSunReflectable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置太阳反射状态
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableSunReflectable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableSunReflectable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isSunReflectable_void(long pNativeObject);
	public boolean isSunReflectable()
	{
		boolean returnValue = isSunReflectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableSunRefractable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置太阳折射状态
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableSunRefractable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableSunRefractable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isSunRefractable_void(long pNativeObject);
	public boolean isSunRefractable()
	{
		boolean returnValue = isSunRefractable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableMoonReflectable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置月亮反射状态
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableMoonReflectable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableMoonReflectable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isMoonReflectable_void(long pNativeObject);
	public boolean isMoonReflectable()
	{
		boolean returnValue = isMoonReflectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableMoonRefractable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置月亮折射状态
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableMoonRefractable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableMoonRefractable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isMoonRefractable_void(long pNativeObject);
	public boolean isMoonRefractable()
	{
		boolean returnValue = isMoonRefractable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableLightningReflectable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置闪电反射状态
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableLightningReflectable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableLightningReflectable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isLightningReflectable_void(long pNativeObject);
	public boolean isLightningReflectable()
	{
		boolean returnValue = isLightningReflectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableLightningRefractable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置闪电折射状态
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableLightningRefractable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableLightningRefractable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isLightningRefractable_void(long pNativeObject);
	public boolean isLightningRefractable()
	{
		boolean returnValue = isLightningRefractable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableCloudReflectable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置云层反射状态
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableCloudReflectable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableCloudReflectable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isCloudReflectable_void(long pNativeObject);
	public boolean isCloudReflectable()
	{
		boolean returnValue = isCloudReflectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableCloudRefractable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置云层折射状态
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableCloudRefractable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableCloudRefractable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isCloudRefractable_void(long pNativeObject);
	public boolean isCloudRefractable()
	{
		boolean returnValue = isCloudRefractable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableStarsReflectable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置星空反射状态
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableStarsReflectable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableStarsReflectable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isStarsReflectable_void(long pNativeObject);
	public boolean isStarsReflectable()
	{
		boolean returnValue = isStarsReflectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean enableStarsRefractable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置星空折射状态
	 * @param enable 是否开启
	 * @return 之前的开启关闭状态
	 */
	public boolean enableStarsRefractable(boolean enable)
	{
		boolean enableParamValue = enable;
		boolean returnValue = enableStarsRefractable_ev_bool(this.nativeObject.pointer, enableParamValue);
		return returnValue;
	}
	native private boolean isStarsRefractable_void(long pNativeObject);
	public boolean isStarsRefractable()
	{
		boolean returnValue = isStarsRefractable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * xml读取
	 * @param element xml元素
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	native private long toXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * /写入xml/
	 * @param element xml元素
	 */
	public com.earthview.world.core.XmlElement toXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = toXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = toXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	native private void clear_ev_bool(long pNativeObject, boolean completely);
	/**
	 * 清空
	 * @param completely 是否完全销毁
	 */
	public void clear(boolean completely)
	{
		boolean completelyParamValue = completely;
		clear_ev_bool(this.nativeObject.pointer, completelyParamValue);
	}
	native private void setDefaultWindSpeed_Real(long pNativeObject, double speed);
	/**
	 * 设置默认风速
	 */
	public void setDefaultWindSpeed(double speed)
	{
		double speedParamValue = speed;
		setDefaultWindSpeed_Real(this.nativeObject.pointer, speedParamValue);
	}
	native private double getDefaultWindSpeed_void(long pNativeObject);
	/**
	 * 获取默认风俗
	 */
	public double getDefaultWindSpeed()
	{
		double returnValue = getDefaultWindSpeed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSunPosition_void(long pNativeObject);
	/**
	 * 获取太阳位置
	 */
	public com.earthview.world.spatial.math.Vector3 getSunPosition()
	{
		long returnValue = getSunPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getMoonPosition_void(long pNativeObject);
	/**
	 * 获取月亮位置
	 */
	public com.earthview.world.spatial.math.Vector3 getMoonPosition()
	{
		long returnValue = getMoonPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setRadius_int(long pNativeObject, int radius);
	/**
	 * 设置区域半径大小
	 * @param radius 半径
	 */
	public void setRadius(int radius)
	{
		int radiusParamValue = radius;
		setRadius_int(this.nativeObject.pointer, radiusParamValue);
	}
	native private int getRadius_void(long pNativeObject);
	/**
	 * 获取区域半径
	 * @return 半径大小
	 */
	public int getRadius()
	{
		int returnValue = getRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCloudLayerExist_CCloudLayer(long pNativeObject, long layer);
	/**
	 * 判断区域内是否存在云层节点
	 * @param layer 云层节点
	 * @return 是否存在
	 */
	public boolean isCloudLayerExist(com.earthview.world.spatial.effect3d.CloudLayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = isCloudLayerExist_CCloudLayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private void clearLightning_void(long pNativeObject);
	/**
	 * 清理闪电效果(主要用于区域切换)
	 */
	public void clearLightning()
	{
		clearLightning_void(this.nativeObject.pointer);
	}
	native private void updateToRender_CBaseObject(long pNativeObject, long ref_obj);
	/**
	 * 刷新环境效果对象（调用后渲染效果对象）
	 * @param obj 效果对象
	 */
	public void updateToRender(com.earthview.world.core.BaseObject ref_obj)
	{
		long ref_objParamValue = (ref_obj == null ? 0L : ref_obj.nativeObject.pointer);
		updateToRender_CBaseObject(this.nativeObject.pointer, ref_objParamValue);
	}
	native private void setFogParameters_FogMode_Real(long pNativeObject, int fogmode, double density);
	///<summary>
	///设置雾参数
	///<param name="fogmode">雾类型(主要是FOG_EXP(远近雾过渡平滑)、FOG_EXP2(远处雾较浓))</param>
	///<param name="density">雾浓度(0.0~1.0)</param>
	///<summary>
	///<return></return>
	public void setFogParameters(com.earthview.world.graphic.FogMode fogmode, double density)
	{
		int fogmodeParamValue = fogmode.getValue();
		double densityParamValue = density;
		setFogParameters_FogMode_Real(this.nativeObject.pointer, fogmodeParamValue, densityParamValue);
	}
	native private int getFogMode_void(long pNativeObject);
	///<summary>
	///获取雾类型
	///<summary>
	///<return></return>
	public com.earthview.world.graphic.FogMode getFogMode()
	{
		int returnValue = getFogMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.FogMode.toEnum(returnValue);
	}
	native private double getFogDensity_void(long pNativeObject);
	///<summary>
	///获取雾浓度
	///<summary>
	///<return>雾浓度</return>
	public double getFogDensity()
	{
		double returnValue = getFogDensity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setStarsBrightness_ev_real32(long pNativeObject, float brightness);
	/**
	 * 设置星空亮度
	 */
	public void setStarsBrightness(float brightness)
	{
		float brightnessParamValue = brightness;
		setStarsBrightness_ev_real32(this.nativeObject.pointer, brightnessParamValue);
	}
	native private float getStarsBrightness_void(long pNativeObject);
	/**
	 * 获取星空亮度
	 * @return 亮度值
	 */
	public float getStarsBrightness()
	{
		float returnValue = getStarsBrightness_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAerosphereTransRate_ev_real32(long pNativeObject, float rate);
	/**
	 * 设置过渡层所占大气厚度的比率(0.0~1.0）
	 * @return 高度
	 */
	public void setAerosphereTransRate(float rate)
	{
		float rateParamValue = rate;
		setAerosphereTransRate_ev_real32(this.nativeObject.pointer, rateParamValue);
	}
	native private float getAerophereTransRate_void(long pNativeObject);
	/**
	 * 获取过渡层所占大气厚度比率(0.0~1.0)
	 * @return 高度
	 */
	public float getAerophereTransRate()
	{
		float returnValue = getAerophereTransRate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsUseCameraLightMode_ev_bool(long pNativeObject, boolean isUse);
	/**
	 * 设置是否使用镜头光照模式
	 */
	public void setIsUseCameraLightMode(boolean isUse)
	{
		boolean isUseParamValue = isUse;
		setIsUseCameraLightMode_ev_bool(this.nativeObject.pointer, isUseParamValue);
	}
	native private boolean getIsUseCameraLightMode_void(long pNativeObject);
	public boolean getIsUseCameraLightMode()
	{
		boolean returnValue = getIsUseCameraLightMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void postUpdateSceneGraph_CSceneManager_CCamera(long pNativeObject, long source, long camera);
	public void postUpdateSceneGraph(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.Camera camera)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		postUpdateSceneGraph_CSceneManager_CCamera(this.nativeObject.pointer, sourceParamValue, cameraParamValue);
	}
	native private void postUpdateSceneGraph_CSceneManager_CCamera_NoVirtual(long pNativeObject, long source, long camera);
	protected void postUpdateSceneGraph_NoVirtual(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.Camera camera)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		postUpdateSceneGraph_CSceneManager_CCamera_NoVirtual(this.nativeObject.pointer, sourceParamValue, cameraParamValue);
	}

	protected  void update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_callback(long lon, long lat, double alt, long cameraLookDir, long cameraPos, float timeSinceLastFrame, long viewPort, boolean mainCamera)
	{
		com.earthview.world.spatial.math.Degree lonParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		lonParamValue.setDelegate(true);
		lonParamValue.setInstancePointer(new InstancePointer(lon));
		IClassFactory lonParamValueClassFactory = GlobalClassFactoryMap.get(lonParamValue.getCppInstanceTypeName());
		if (lonParamValueClassFactory != null)
		{
			lonParamValue.setDelegate(true);
			lonParamValue = (com.earthview.world.spatial.math.Degree)lonParamValueClassFactory.create();
			lonParamValue.setDelegate(true);
			lonParamValue.setInstancePointer(new InstancePointer(lon));
		}
		com.earthview.world.spatial.math.Degree latParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		latParamValue.setDelegate(true);
		latParamValue.setInstancePointer(new InstancePointer(lat));
		IClassFactory latParamValueClassFactory = GlobalClassFactoryMap.get(latParamValue.getCppInstanceTypeName());
		if (latParamValueClassFactory != null)
		{
			latParamValue.setDelegate(true);
			latParamValue = (com.earthview.world.spatial.math.Degree)latParamValueClassFactory.create();
			latParamValue.setDelegate(true);
			latParamValue.setInstancePointer(new InstancePointer(lat));
		}
		double altParamValue = alt;
		com.earthview.world.spatial.math.Vector3 cameraLookDirParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		cameraLookDirParamValue.setDelegate(true);
		cameraLookDirParamValue.setInstancePointer(new InstancePointer(cameraLookDir));
		IClassFactory cameraLookDirParamValueClassFactory = GlobalClassFactoryMap.get(cameraLookDirParamValue.getCppInstanceTypeName());
		if (cameraLookDirParamValueClassFactory != null)
		{
			cameraLookDirParamValue.setDelegate(true);
			cameraLookDirParamValue = (com.earthview.world.spatial.math.Vector3)cameraLookDirParamValueClassFactory.create();
			cameraLookDirParamValue.setDelegate(true);
			cameraLookDirParamValue.setInstancePointer(new InstancePointer(cameraLookDir));
		}
		com.earthview.world.spatial.math.Vector3 cameraPosParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		cameraPosParamValue.setDelegate(true);
		cameraPosParamValue.setInstancePointer(new InstancePointer(cameraPos));
		IClassFactory cameraPosParamValueClassFactory = GlobalClassFactoryMap.get(cameraPosParamValue.getCppInstanceTypeName());
		if (cameraPosParamValueClassFactory != null)
		{
			cameraPosParamValue.setDelegate(true);
			cameraPosParamValue = (com.earthview.world.spatial.math.Vector3)cameraPosParamValueClassFactory.create();
			cameraPosParamValue.setDelegate(true);
			cameraPosParamValue.setInstancePointer(new InstancePointer(cameraPos));
		}
		float timeSinceLastFrameParamValue = timeSinceLastFrame;
		com.earthview.world.graphic.Viewport viewPortParamValue = (viewPort == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewPortParamValue != null)
		{
		viewPortParamValue.setDelegate(true);
		viewPortParamValue.setInstancePointer(new InstancePointer(viewPort));
		IClassFactory viewPortParamValueClassFactory = GlobalClassFactoryMap.get(viewPortParamValue.getCppInstanceTypeName());
		if (viewPortParamValueClassFactory != null)
		{
			viewPortParamValue.setDelegate(true);
			viewPortParamValue = (com.earthview.world.graphic.Viewport)viewPortParamValueClassFactory.create();
			viewPortParamValue.setDelegate(true);
			viewPortParamValue.setInstancePointer(new InstancePointer(viewPort));
		}
		}
		boolean mainCameraParamValue = mainCamera;
		update(lonParamValue, latParamValue, altParamValue, cameraLookDirParamValue, cameraPosParamValue, timeSinceLastFrameParamValue, viewPortParamValue, mainCameraParamValue);
	}

	native private void update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(long pNativeObject, long lon, long lat, double alt, long cameraLookDir, long cameraPos, float timeSinceLastFrame, long viewPort, boolean mainCamera);
	public void update(com.earthview.world.spatial.math.Degree lon, com.earthview.world.spatial.math.Degree lat, double alt, com.earthview.world.spatial.math.Vector3 cameraLookDir, com.earthview.world.spatial.math.Vector3 cameraPos, float timeSinceLastFrame, com.earthview.world.graphic.Viewport viewPort, boolean mainCamera)
	{
		long lonParamValue = lon.nativeObject.pointer;
		long latParamValue = lat.nativeObject.pointer;
		double altParamValue = alt;
		long cameraLookDirParamValue = cameraLookDir.nativeObject.pointer;
		long cameraPosParamValue = cameraPos.nativeObject.pointer;
		float timeSinceLastFrameParamValue = timeSinceLastFrame;
		long viewPortParamValue = (viewPort == null ? 0L : viewPort.nativeObject.pointer);
		boolean mainCameraParamValue = mainCamera;
		update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(this.nativeObject.pointer, lonParamValue, latParamValue, altParamValue, cameraLookDirParamValue, cameraPosParamValue, timeSinceLastFrameParamValue, viewPortParamValue, mainCameraParamValue);
	}
	native private void update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_NoVirtual(long pNativeObject, long lon, long lat, double alt, long cameraLookDir, long cameraPos, float timeSinceLastFrame, long viewPort, boolean mainCamera);
	protected void update_NoVirtual(com.earthview.world.spatial.math.Degree lon, com.earthview.world.spatial.math.Degree lat, double alt, com.earthview.world.spatial.math.Vector3 cameraLookDir, com.earthview.world.spatial.math.Vector3 cameraPos, float timeSinceLastFrame, com.earthview.world.graphic.Viewport viewPort, boolean mainCamera)
	{
		long lonParamValue = lon.nativeObject.pointer;
		long latParamValue = lat.nativeObject.pointer;
		double altParamValue = alt;
		long cameraLookDirParamValue = cameraLookDir.nativeObject.pointer;
		long cameraPosParamValue = cameraPos.nativeObject.pointer;
		float timeSinceLastFrameParamValue = timeSinceLastFrame;
		long viewPortParamValue = (viewPort == null ? 0L : viewPort.nativeObject.pointer);
		boolean mainCameraParamValue = mainCamera;
		update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_NoVirtual(this.nativeObject.pointer, lonParamValue, latParamValue, altParamValue, cameraLookDirParamValue, cameraPosParamValue, timeSinceLastFrameParamValue, viewPortParamValue, mainCameraParamValue);
	}

	protected  void onChildAtmosphereCloudLayerAdded_CCloudLayer_callback(long layer)
	{
		com.earthview.world.spatial.effect3d.CloudLayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.effect3d.CloudLayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.effect3d.CloudLayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		onChildAtmosphereCloudLayerAdded(layerParamValue);
	}

	native private void onChildAtmosphereCloudLayerAdded_CCloudLayer(long pNativeObject, long layer);
	public void onChildAtmosphereCloudLayerAdded(com.earthview.world.spatial.effect3d.CloudLayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onChildAtmosphereCloudLayerAdded_CCloudLayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void onChildAtmosphereCloudLayerAdded_CCloudLayer_NoVirtual(long pNativeObject, long layer);
	protected void onChildAtmosphereCloudLayerAdded_NoVirtual(com.earthview.world.spatial.effect3d.CloudLayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onChildAtmosphereCloudLayerAdded_CCloudLayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	protected  void onChildAtmosphereCloudLayerRemoved_CCloudLayer_callback(long layer)
	{
		com.earthview.world.spatial.effect3d.CloudLayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.effect3d.CloudLayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.effect3d.CloudLayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		onChildAtmosphereCloudLayerRemoved(layerParamValue);
	}

	native private void onChildAtmosphereCloudLayerRemoved_CCloudLayer(long pNativeObject, long layer);
	public void onChildAtmosphereCloudLayerRemoved(com.earthview.world.spatial.effect3d.CloudLayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onChildAtmosphereCloudLayerRemoved_CCloudLayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void onChildAtmosphereCloudLayerRemoved_CCloudLayer_NoVirtual(long pNativeObject, long layer);
	protected void onChildAtmosphereCloudLayerRemoved_NoVirtual(com.earthview.world.spatial.effect3d.CloudLayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onChildAtmosphereCloudLayerRemoved_CCloudLayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	protected  long calcAmbientLightMultiplier_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = calcAmbientLightMultiplier();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long calcAmbientLightMultiplier_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue calcAmbientLightMultiplier()
	{
		long returnValue = calcAmbientLightMultiplier_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long calcAmbientLightMultiplier_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue calcAmbientLightMultiplier_NoVirtual()
	{
		long returnValue = calcAmbientLightMultiplier_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	native private long getRealCloudLayer_void(long pNativeObject);
	/**
	 * 获取全球云
	 */
	public com.earthview.world.spatial.effect3d.RealCloudLayer getRealCloudLayer()
	{
		long returnValue = getRealCloudLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.RealCloudLayer __returnValue = new com.earthview.world.spatial.effect3d.RealCloudLayer(CreatedWhenConstruct.CWC_NotToCreate, "CRealCloudLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.RealCloudLayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRealCloudLayer");
		}
		return __returnValue;
	}
	public RegionAtmosphere(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RegionAtmosphere(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 　序列化xml文本
	 */
	public void fromXML(com.earthview.world.core.XmlElement element)
	{
		super.fromXML_NoVirtual(element);
	}
	/**
	 * 　存储为xml文本
	 */
	public String toXML()
	{
		return super.toXML_NoVirtual();
	}
	/**
	 * 在每帧更新场景图前触发			
	 */
	public void preUpdateSceneGraph(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.Camera camera)
	{
		super.preUpdateSceneGraph_NoVirtual(source, camera);
	}
	/**
	 * 在场景中搜索可见对象之前触发
	 * @param source 场景管理实例
	 * @param irs 渲染阶段
	 * @param v 视口
	 */
	public void preFindVisibleObjects(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.SceneManager.IlluminationRenderStage irs, com.earthview.world.graphic.Viewport v)
	{
		super.preFindVisibleObjects_NoVirtual(source, irs, v);
	}
	/**
	 * 在场景中搜索可见对象之后触发
	 * @param source 场景管理实例
	 * @param irs 渲染阶段
	 * @param v 视口
	 */
	public void postFindVisibleObjects(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.SceneManager.IlluminationRenderStage irs, com.earthview.world.graphic.Viewport v)
	{
		super.postFindVisibleObjects_NoVirtual(source, irs, v);
	}
	/**
	 * 阴影纹理更新时调用只有阴影纹理被使用的时候，这个事件才触发
	 * @param numberOfShadowTextures 阴影纹理使用中的数量
	 */
	public void shadowTexturesUpdated(long numberOfShadowTextures)
	{
		super.shadowTexturesUpdated_NoVirtual(numberOfShadowTextures);
	}
	/**
	 * 在为纹理阴影投射者设置观察投影矩阵前触发
	 * @param light 阴影纹理的光源
	 * @param camera 摄像机
	 * @param iteration 迭代次数
	 */
	public void shadowTextureCasterPreViewProj(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera camera, long iteration)
	{
		super.shadowTextureCasterPreViewProj_NoVirtual(light, camera, iteration);
	}
	/**
	 * 在为纹理阴影接收者设置观察投影矩阵前触发
	 * @param light 阴影纹理的光源
	 * @param frustum 视椎体
	 */
	public void shadowTextureReceiverPreViewProj(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Frustum frustum)
	{
		super.shadowTextureReceiverPreViewProj_NoVirtual(light, frustum);
	}
	/**
	 * 对影响视椎体的光源进行排序
	 * @param lightList 光源列表
	 * @return 为true，已排序
	 */
	public boolean sortLightsAffectingFrustum(com.earthview.world.graphic.LightList lightList)
	{
		return super.sortLightsAffectingFrustum_NoVirtual(lightList);
	}
	/**
	 * 场景管理器销毁时触发
	 * @param source 场景管理器
	 */
	public void sceneManagerDestroyed(com.earthview.world.graphic.SceneManager source)
	{
		super.sceneManagerDestroyed_NoVirtual(source);
	}
	
	native protected void register_getStringInterfacePtr_void(long pNativeObject, String method);
	native protected void register_setWeather_EVWeatherType(long pNativeObject, String method);
	native protected void register_create_CViewport(long pNativeObject, String method);
	native protected void register_destroy_void(long pNativeObject, String method);
	native protected void register_setAerosphereThickness_Real(long pNativeObject, String method);
	native protected void register_setRealCloudHeight_Real(long pNativeObject, String method);
	native protected void register_update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(long pNativeObject, String method);
	native protected void register_onChildAtmosphereCloudLayerAdded_CCloudLayer(long pNativeObject, String method);
	native protected void register_onChildAtmosphereCloudLayerRemoved_CCloudLayer(long pNativeObject, String method);
	native protected void register_calcAmbientLightMultiplier_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_fromXML_CXmlElement(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_preUpdateSceneGraph_CSceneManager_CCamera(long pNativeObject, String method);
	native protected void register_postUpdateSceneGraph_CSceneManager_CCamera(long pNativeObject, String method);
	native protected void register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(long pNativeObject, String method);
	native protected void register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(long pNativeObject, String method);
	native protected void register_shadowTexturesUpdated_ev_size_t(long pNativeObject, String method);
	native protected void register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t(long pNativeObject, String method);
	native protected void register_shadowTextureReceiverPreViewProj_CLight_CFrustum(long pNativeObject, String method);
	native protected void register_sortLightsAffectingFrustum_LightList(long pNativeObject, String method);
	native protected void register_sceneManagerDestroyed_CSceneManager(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getStringInterfacePtr_void(this.nativeObject.pointer, "getStringInterfacePtr_void_callback");
			this.register_setWeather_EVWeatherType(this.nativeObject.pointer, "setWeather_EVWeatherType_callback");
			this.register_create_CViewport(this.nativeObject.pointer, "create_CViewport_callback");
			this.register_destroy_void(this.nativeObject.pointer, "destroy_void_callback");
			this.register_setAerosphereThickness_Real(this.nativeObject.pointer, "setAerosphereThickness_Real_callback");
			this.register_setRealCloudHeight_Real(this.nativeObject.pointer, "setRealCloudHeight_Real_callback");
			this.register_update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(this.nativeObject.pointer, "update_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_callback");
			this.register_onChildAtmosphereCloudLayerAdded_CCloudLayer(this.nativeObject.pointer, "onChildAtmosphereCloudLayerAdded_CCloudLayer_callback");
			this.register_onChildAtmosphereCloudLayerRemoved_CCloudLayer(this.nativeObject.pointer, "onChildAtmosphereCloudLayerRemoved_CCloudLayer_callback");
			this.register_calcAmbientLightMultiplier_void(this.nativeObject.pointer, "calcAmbientLightMultiplier_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_CXmlElement(this.nativeObject.pointer, "toXmlElement_CXmlElement_callback");
			this.register_fromXML_CXmlElement(this.nativeObject.pointer, "fromXML_CXmlElement_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_preUpdateSceneGraph_CSceneManager_CCamera(this.nativeObject.pointer, "preUpdateSceneGraph_CSceneManager_CCamera_callback");
			this.register_postUpdateSceneGraph_CSceneManager_CCamera(this.nativeObject.pointer, "postUpdateSceneGraph_CSceneManager_CCamera_callback");
			this.register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(this.nativeObject.pointer, "preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
			this.register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(this.nativeObject.pointer, "postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
			this.register_shadowTexturesUpdated_ev_size_t(this.nativeObject.pointer, "shadowTexturesUpdated_ev_size_t_callback");
			this.register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t(this.nativeObject.pointer, "shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback");
			this.register_shadowTextureReceiverPreViewProj_CLight_CFrustum(this.nativeObject.pointer, "shadowTextureReceiverPreViewProj_CLight_CFrustum_callback");
			this.register_sortLightsAffectingFrustum_LightList(this.nativeObject.pointer, "sortLightsAffectingFrustum_LightList_callback");
			this.register_sceneManagerDestroyed_CSceneManager(this.nativeObject.pointer, "sceneManagerDestroyed_CSceneManager_callback");
		}
	}
	
	public static RegionAtmosphere fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RegionAtmosphere obj = null;
 		if(baseObj instanceof RegionAtmosphere)
		{
			obj = (RegionAtmosphere)baseObj;
		} else {
			obj = new RegionAtmosphere(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRegionAtmosphere");
			obj.increaseCast();
		}

		return obj;
	}
}
