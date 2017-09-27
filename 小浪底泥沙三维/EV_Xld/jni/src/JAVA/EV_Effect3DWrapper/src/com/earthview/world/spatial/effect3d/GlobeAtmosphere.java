package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 全局环境类
 */
public class GlobeAtmosphere extends com.earthview.world.spatial.effect3d.RegionAtmosphere {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CGlobeAtmosphere", new GlobeAtmosphereClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::JCGlobeAtmosphereProxy", new GlobeAtmosphereClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeAtmosphere(com.earthview.world.graphic.SceneManager ref_sceneMgr, double cloudVisibilityAlt, com.earthview.world.spatial.effect3d.EVWeatherType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_sceneMgrPtr = new BasePointer(ref_sceneMgr);
		list.add("ref_sceneMgr", ref_sceneMgrPtr.get());
		BasePointer cloudVisibilityAltPtr = new BasePointer(cloudVisibilityAlt);
		list.add("cloudVisibilityAlt", cloudVisibilityAltPtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("JCGlobeAtmosphereProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.effect3d.GlobeAtmosphere".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setOriginLonLat_CDegree_CDegree(long pNativeObject, long lon, long lat);
	/**
	 * 设置源点经纬度
	 */
	public void setOriginLonLat(com.earthview.world.spatial.math.Degree lon, com.earthview.world.spatial.math.Degree lat)
	{
		long lonParamValue = lon.nativeObject.pointer;
		long latParamValue = lat.nativeObject.pointer;
		setOriginLonLat_CDegree_CDegree(this.nativeObject.pointer, lonParamValue, latParamValue);
	}
	native private boolean frameStarted_FrameEvent(long pNativeObject, long evt);
	/**
	 * 帧监听
	 */
	public boolean frameStarted(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameStarted_FrameEvent(this.nativeObject.pointer, evtParamValue);
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

	native private long createRegionAtmosphere_CEnvelope_EVWeatherType(long pNativeObject, long envelope, int type);
	/**
	 * 创建区域节点
	 * @param envelope 范围
	 * @param type 天气类别
	 */
	public com.earthview.world.spatial.effect3d.RegionAtmosphere createRegionAtmosphere(com.earthview.world.spatial.geometry.Envelope envelope, com.earthview.world.spatial.effect3d.EVWeatherType type)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		int typeParamValue = type.getValue();
		long returnValue = createRegionAtmosphere_CEnvelope_EVWeatherType(this.nativeObject.pointer, envelopeParamValue, typeParamValue);
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
	native private void destroyRegionAtmosphere_CRegionAtmosphere(long pNativeObject, long regionatmosphere);
	/**
	 * 销毁区域
	 * @param regionatmosphere 区域
	 */
	public void destroyRegionAtmosphere(com.earthview.world.spatial.effect3d.RegionAtmosphere regionatmosphere)
	{
		long regionatmosphereParamValue = (regionatmosphere == null ? 0L : regionatmosphere.nativeObject.pointer);
		destroyRegionAtmosphere_CRegionAtmosphere(this.nativeObject.pointer, regionatmosphereParamValue);
	}
	native private long getRegionAtmospheresCount_void(long pNativeObject);
	/**
	 * 获取局部区域总数
	 */
	public long getRegionAtmospheresCount()
	{
		long returnValue = getRegionAtmospheresCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRegionAtmosphere_ev_uint32(long pNativeObject, long index);
	/**
	 * 根据索引获取区域
	 * @param index 索引
	 */
	public com.earthview.world.spatial.effect3d.RegionAtmosphere getRegionAtmosphere(long index)
	{
		long indexParamValue = index;
		long returnValue = getRegionAtmosphere_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private void setAerosphereThickness_Real(long pNativeObject, double thickness);
	/**
	 * 设置大气层厚度
	 * @param thickness 大小
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

	native private void fromXML_CXmlElement(long pNativeObject, long element);
	/**
	 * 读取xml文本
	 * @param  
	 */
	public void fromXML(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXML_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXML_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXML_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXML_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	native private String toXML_void(long pNativeObject);
	/**
	 * 序列化成xml文本
	 * @return 字符串
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toXML_void_NoVirtual(long pNativeObject);
	protected String toXML_NoVirtual()
	{
		String returnValue = toXML_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setRealCloudMap_CImage(long pNativeObject, long img);
	/**
	 * 更新云图图片
	 * @param img 云图图片,图片的groupname为"Caelum"
	 */
	public void setRealCloudMap(com.earthview.world.graphic.Image img)
	{
		long imgParamValue = img.nativeObject.pointer;
		setRealCloudMap_CImage(this.nativeObject.pointer, imgParamValue);
	}
	native private void setRealCloudMapAlpha_ev_real32(long pNativeObject, float alpha);
	/**
	 * 设置云图的alpha值
	 * @param alpha alpha值
	 */
	public void setRealCloudMapAlpha(float alpha)
	{
		float alphaParamValue = alpha;
		setRealCloudMapAlpha_ev_real32(this.nativeObject.pointer, alphaParamValue);
	}
	native private void setRegionCloudMapAlpha_EVString_ev_real32(long pNativeObject, String name, float alpha);
	/**
	 * 设置局部云图的alpha值
	 * @param name 局部云的名字
	 * @param alpha alpha值
	 */
	public void setRegionCloudMapAlpha(String name, float alpha)
	{
		String nameParamValue = name;
		float alphaParamValue = alpha;
		setRegionCloudMapAlpha_EVString_ev_real32(this.nativeObject.pointer, nameParamValue, alphaParamValue);
	}
	native private void addRegionCloudMap_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String name, long img, double north, double west, double south, double east);
	/**
	 * 添加局部云图.(必须在调用了CRegionAtmosphere::enableRealCloud后再调用才有效)
	 * @param name 局部云的名字
	 * @param img 图片
	 * @param north 局部区域的北边界。(度为单位)
	 * @param west 局部区域的西边界。(度为单位)
	 * @param south 局部区域的南边界。(度为单位)
	 * @param east 局部区域的东边界。(度为单位)
	 */
	public void addRegionCloudMap(String name, com.earthview.world.graphic.Image img, double north, double west, double south, double east)
	{
		String nameParamValue = name;
		long imgParamValue = img.nativeObject.pointer;
		double northParamValue = north;
		double westParamValue = west;
		double southParamValue = south;
		double eastParamValue = east;
		addRegionCloudMap_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, nameParamValue, imgParamValue, northParamValue, westParamValue, southParamValue, eastParamValue);
	}
	native private void addRegionCloudMap_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String name, long img, double north, double west, double south, double east, double height);
	/**
	 * 添加局部云图.(必须在调用了CRegionAtmosphere::enableRealCloud后再调用才有效)
	 * @param name 局部云的名字
	 * @param img 图片
	 * @param north 局部区域的北边界。(度为单位)
	 * @param west 局部区域的西边界。(度为单位)
	 * @param south 局部区域的南边界。(度为单位)
	 * @param east 局部区域的东边界。(度为单位)
	 * @param height 局部云的高度。(度为米)
	 */
	public void addRegionCloudMap(String name, com.earthview.world.graphic.Image img, double north, double west, double south, double east, double height)
	{
		String nameParamValue = name;
		long imgParamValue = img.nativeObject.pointer;
		double northParamValue = north;
		double westParamValue = west;
		double southParamValue = south;
		double eastParamValue = east;
		double heightParamValue = height;
		addRegionCloudMap_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, nameParamValue, imgParamValue, northParamValue, westParamValue, southParamValue, eastParamValue, heightParamValue);
	}
	native private void removeRegionCloudMap_EVString(long pNativeObject, String name);
	/**
	 * 移除局部云图
	 * @param name 局部云的名字
	 */
	public void removeRegionCloudMap(String name)
	{
		String nameParamValue = name;
		removeRegionCloudMap_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setRegionCloudMapVisible_EVString_bool(long pNativeObject, String name, boolean visible);
	/**
	 * 设置局部云图的可见性
	 * @param name 局部云的名字
	 * @param visible 可见性
	 */
	public void setRegionCloudMapVisible(String name, boolean visible)
	{
		String nameParamValue = name;
		boolean visibleParamValue = visible;
		setRegionCloudMapVisible_EVString_bool(this.nativeObject.pointer, nameParamValue, visibleParamValue);
	}
	native private boolean getRegionCloudMapVisible_EVString(long pNativeObject, String name);
	/**
	 * 获取局部云图的可见性
	 * @param name 局部云的名字
	 */
	public boolean getRegionCloudMapVisible(String name)
	{
		String nameParamValue = name;
		boolean returnValue = getRegionCloudMapVisible_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void enableGetCloudColorFromImage_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置体积云的颜色与图片一致
	 * @param ev_bool 是否一致
	 */
	public void enableGetCloudColorFromImage(boolean enable)
	{
		boolean enableParamValue = enable;
		enableGetCloudColorFromImage_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setWindSpeedForRealCloudMap_CVector2(long pNativeObject, long speed);
	/**
	 * 设置风速.（默认速度为（-0.00000015，0.00000015），速度不宜设的过大）
	 * @param speed 风速
	 */
	public void setWindSpeedForRealCloudMap(com.earthview.world.spatial.math.Vector2 speed)
	{
		long speedParamValue = speed.nativeObject.pointer;
		setWindSpeedForRealCloudMap_CVector2(this.nativeObject.pointer, speedParamValue);
	}
	native private void setRegionCloudRotationInfomation_EVString_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String name, double centerLat, double centerLon, double rotationAngleVelocity, double rotationRegionRadius);
	/**
	 * 设置局部云图的旋转信息
	 * @param name 局部云的名字
	 * @param centerLat 中心点外的纬度
	 * @param centerLon 中心点外的经度
	 * @param rotationAngleVelocity 旋转的角速度，以度为单位
	 * @param rotationRegionRadius 旋转范围的半径，以米为单位
	 */
	public void setRegionCloudRotationInfomation(String name, double centerLat, double centerLon, double rotationAngleVelocity, double rotationRegionRadius)
	{
		String nameParamValue = name;
		double centerLatParamValue = centerLat;
		double centerLonParamValue = centerLon;
		double rotationAngleVelocityParamValue = rotationAngleVelocity;
		double rotationRegionRadiusParamValue = rotationRegionRadius;
		setRegionCloudRotationInfomation_EVString_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, nameParamValue, centerLatParamValue, centerLonParamValue, rotationAngleVelocityParamValue, rotationRegionRadiusParamValue);
	}
	native private void enableRotateRegionCloud_EVString(long pNativeObject, String name);
	/**
	 * 允许旋转局部云
	 * @param name 局部云的名字
	 */
	public void enableRotateRegionCloud(String name)
	{
		String nameParamValue = name;
		enableRotateRegionCloud_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void disableRotateRegionCloud_EVString(long pNativeObject, String name);
	/**
	 * 禁止转动局部云
	 * @param name 局部云的名字
	 */
	public void disableRotateRegionCloud(String name)
	{
		String nameParamValue = name;
		disableRotateRegionCloud_EVString(this.nativeObject.pointer, nameParamValue);
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

	native private long getWeatherTransformer_void(long pNativeObject);
	/**
	 * /获取天气转换对象/
	 * @return 天气控制对象
	 */
	public com.earthview.world.spatial.effect3d.WeatherTransformation getWeatherTransformer()
	{
		long returnValue = getWeatherTransformer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.WeatherTransformation __returnValue = new com.earthview.world.spatial.effect3d.WeatherTransformation(CreatedWhenConstruct.CWC_NotToCreate, "CWeatherTransformation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.WeatherTransformation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWeatherTransformation");
		}
		return __returnValue;
	}
	native private void startWeatherTransform_void(long pNativeObject);
	/**
	 * 开始天气转换
	 */
	public void startWeatherTransform()
	{
		startWeatherTransform_void(this.nativeObject.pointer);
	}
	native private void stopWeatherTransform_void(long pNativeObject);
	/**
	 * 停止天气转换
	 */
	public void stopWeatherTransform()
	{
		stopWeatherTransform_void(this.nativeObject.pointer);
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

	native private void setWeatherTransitionTime_ev_uint32(long pNativeObject, long seconds);
	/**
	 * 设置转换时间
	 */
	public void setWeatherTransitionTime(long seconds)
	{
		long secondsParamValue = seconds;
		setWeatherTransitionTime_ev_uint32(this.nativeObject.pointer, secondsParamValue);
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

	public GlobeAtmosphere(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeAtmosphere(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获得属性字符界面类的指针
	 * @param  
	 * @return 返回内部类的指针
	 */
	public com.earthview.world.core.StringInterface getStringInterfacePtr()
	{
		return super.getStringInterfacePtr_NoVirtual();
	}
	/**
	 * /根据视口创建/
	 */
	public void create(com.earthview.world.graphic.Viewport ref_viewport)
	{
		super.create_NoVirtual(ref_viewport);
	}
	/**
	 * 设置大气云高度
	 */
	public void setRealCloudHeight(double height)
	{
		super.setRealCloudHeight_NoVirtual(height);
	}
	public com.earthview.world.graphic.ColourValue calcAmbientLightMultiplier()
	{
		return super.calcAmbientLightMultiplier_NoVirtual();
	}
	/**
	 * 获取名称
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 　设置名称
	 * @param name 名称
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
	}
	/**
	 * 从xml元素读取
	 * @param  
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		super.fromXmlElement_NoVirtual(element);
	}
	/**
	 * 　序列化xml元素
	 */
	public com.earthview.world.core.XmlElement toXmlElement(com.earthview.world.core.XmlElement element)
	{
		return super.toXmlElement_NoVirtual(element);
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
	
	public static GlobeAtmosphere fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeAtmosphere obj = null;
 		if(baseObj instanceof GlobeAtmosphere)
		{
			obj = (GlobeAtmosphere)baseObj;
		} else {
			obj = new GlobeAtmosphere(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeAtmosphere");
			obj.increaseCast();
		}

		return obj;
	}
}
