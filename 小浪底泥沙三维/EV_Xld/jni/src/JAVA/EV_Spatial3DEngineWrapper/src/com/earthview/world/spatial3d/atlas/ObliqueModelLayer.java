package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObliqueModelLayer extends com.earthview.world.spatial3d.atlas.Iglobelayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CObliqueModelLayer", new ObliqueModelLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCObliqueModelLayerProxy", new ObliqueModelLayerClassFactory());
	}

	native private boolean isSelectable_void(long pNativeObject);
	/**
	 * 图层是否被选择
	 * @return 被选择返回true，否则返回false
	 */
	public boolean isSelectable()
	{
		boolean returnValue = isSelectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelectable_void_NoVirtual(long pNativeObject);
	protected boolean isSelectable_NoVirtual()
	{
		boolean returnValue = isSelectable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSelectable_ev_bool(long pNativeObject, boolean selectable);
	/**
	 * 设置图层选择状态
	 * @param selectable true被选择，false没有被选择
	 */
	public void setSelectable(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool(this.nativeObject.pointer, selectableParamValue);
	}
	native private void setSelectable_ev_bool_NoVirtual(long pNativeObject, boolean selectable);
	protected void setSelectable_NoVirtual(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool_NoVirtual(this.nativeObject.pointer, selectableParamValue);
	}

	protected  boolean getGotoParam_ev_real64_ev_real64_ev_real64_callback(long latitude, long longitude, long altitude)
	{
		DoublePointer latitudeParamValue = new DoublePointer(new InstancePointer(latitude));
		DoublePointer longitudeParamValue = new DoublePointer(new InstancePointer(longitude));
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		boolean returnValue = getGotoParam(latitudeParamValue, longitudeParamValue, altitudeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getGotoParam_ev_real64_ev_real64_ev_real64(long pNativeObject, long latitude, long longitude, long altitude);
	/// <summary>
	/// 图层定位
	/// <param name="latitude">纬度</param>
	/// <param name="longitude">经度</param>
	/// <param name="altitude">高度</param>
	/// <returns>true跳转成功，false图层无数据</returns>
	public boolean getGotoParam(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		boolean returnValue = getGotoParam_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue);
		return returnValue;
	}
	native private boolean getGotoParam_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long latitude, long longitude, long altitude);
	protected boolean getGotoParam_NoVirtual(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		boolean returnValue = getGotoParam_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue);
		return returnValue;
	}

	native private void setPixelRatio_ev_real32(long pNativeObject, float ratio);
	/**
	 * 设置像素比率
	 */
	public void setPixelRatio(float ratio)
	{
		float ratioParamValue = ratio;
		setPixelRatio_ev_real32(this.nativeObject.pointer, ratioParamValue);
	}
	native private float getPixelRatio_void(long pNativeObject);
	/**
	 * 获取像素比率
	 */
	public float getPixelRatio()
	{
		float returnValue = getPixelRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  double getAltitudeValue_void_callback()
	{
		double returnValue = getAltitudeValue();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getAltitudeValue_void(long pNativeObject);
	/**
	 * 获取高度模式
	 * @return ev_real64,高度值
	 */
	public double getAltitudeValue()
	{
		double returnValue = getAltitudeValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getAltitudeValue_void_NoVirtual(long pNativeObject);
	protected double getAltitudeValue_NoVirtual()
	{
		double returnValue = getAltitudeValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void getPosition_ev_real64_ev_real64_ev_real64_callback(long lat, long lon, long alt)
	{
		DoublePointer latParamValue = new DoublePointer(new InstancePointer(lat));
		DoublePointer lonParamValue = new DoublePointer(new InstancePointer(lon));
		DoublePointer altParamValue = new DoublePointer(new InstancePointer(alt));
		getPosition(latParamValue, lonParamValue, altParamValue);
	}

	native private void getPosition_ev_real64_ev_real64_ev_real64(long pNativeObject, long lat, long lon, long alt);
	/**
	 * 获取位置
	 * @param lat 纬度
	 * @param lon 经度
	 * @param alt 高度
	 */
	public void getPosition(DoublePointer lat, DoublePointer lon, DoublePointer alt)
	{
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long altParamValue = alt.nativeObject.pointer;
		getPosition_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue);
	}
	native private void getPosition_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long lat, long lon, long alt);
	protected void getPosition_NoVirtual(DoublePointer lat, DoublePointer lon, DoublePointer alt)
	{
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long altParamValue = alt.nativeObject.pointer;
		getPosition_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue);
	}

	protected  void getSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(long lat, long lon, long alt, long localScale, long localRotate)
	{
		DoublePointer latParamValue = new DoublePointer(new InstancePointer(lat));
		DoublePointer lonParamValue = new DoublePointer(new InstancePointer(lon));
		DoublePointer altParamValue = new DoublePointer(new InstancePointer(alt));
		com.earthview.world.spatial.math.Vector3 localScaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localScaleParamValue.setDelegate(true);
		localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		IClassFactory localScaleParamValueClassFactory = GlobalClassFactoryMap.get(localScaleParamValue.getCppInstanceTypeName());
		if (localScaleParamValueClassFactory != null)
		{
			localScaleParamValue.setDelegate(true);
			localScaleParamValue = (com.earthview.world.spatial.math.Vector3)localScaleParamValueClassFactory.create();
			localScaleParamValue.setDelegate(true);
			localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		}
		com.earthview.world.spatial.math.Quaternion localRotateParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		localRotateParamValue.setDelegate(true);
		localRotateParamValue.setInstancePointer(new InstancePointer(localRotate));
		IClassFactory localRotateParamValueClassFactory = GlobalClassFactoryMap.get(localRotateParamValue.getCppInstanceTypeName());
		if (localRotateParamValueClassFactory != null)
		{
			localRotateParamValue.setDelegate(true);
			localRotateParamValue = (com.earthview.world.spatial.math.Quaternion)localRotateParamValueClassFactory.create();
			localRotateParamValue.setDelegate(true);
			localRotateParamValue.setInstancePointer(new InstancePointer(localRotate));
		}
		getSpatialInfo(latParamValue, lonParamValue, altParamValue, localScaleParamValue, localRotateParamValue);
	}

	native private void getSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, long lat, long lon, long alt, long localScale, long localRotate);
	/**
	 * 获取空间信息
	 * @param lat 纬度
	 * @param lon 经度
	 * @param alt 高度
	 * @param localScale 局部缩放
	 * @param localRotate 局部旋转
	 */
	public void getSpatialInfo(DoublePointer lat, DoublePointer lon, DoublePointer alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localRotate)
	{
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long altParamValue = alt.nativeObject.pointer;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long localRotateParamValue = localRotate.nativeObject.pointer;
		getSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localRotateParamValue);
	}
	native private void getSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(long pNativeObject, long lat, long lon, long alt, long localScale, long localRotate);
	protected void getSpatialInfo_NoVirtual(DoublePointer lat, DoublePointer lon, DoublePointer alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localRotate)
	{
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long altParamValue = alt.nativeObject.pointer;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long localRotateParamValue = localRotate.nativeObject.pointer;
		getSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localRotateParamValue);
	}

	native private long getDataset_void(long pNativeObject);
	/**
	 * 获取数据集
	 * @param  
	 * @return 数据集指针
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		long returnValue = getDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long getDataset_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idataset getDataset_NoVirtual()
	{
		long returnValue = getDataset_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	native private long getDatasetWrapper_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.ObqDatasetWrapper getDatasetWrapper()
	{
		long returnValue = getDatasetWrapper_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ObqDatasetWrapper __returnValue = new com.earthview.world.spatial3d.modelmanager.ObqDatasetWrapper(CreatedWhenConstruct.CWC_NotToCreate, "CObqDatasetWrapper");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ObqDatasetWrapper)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CObqDatasetWrapper");
		}
		return __returnValue;
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层的类型
	 * @param  
	 * @return 图层的类型
	 */
	public com.earthview.world.spatial.atlas.EVLayerType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVLayerType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 图层克隆
	 */
	public com.earthview.world.spatial.atlas.Ilayer ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayer ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置图层可见性
	 * @param visible 可见性
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	native private void stopRender_ev_bool(long pNativeObject, boolean bClearAllObject);
	/**
	 * 停止渲染
	 * @param bClearAllObject 停止渲染前是否删除当前场景中的模型
	 */
	public void stopRender(boolean bClearAllObject)
	{
		boolean bClearAllObjectParamValue = bClearAllObject;
		stopRender_ev_bool(this.nativeObject.pointer, bClearAllObjectParamValue);
	}
	native private void startRender_void(long pNativeObject);
	/**
	 * 开始渲染
	 */
	public void startRender()
	{
		startRender_void(this.nativeObject.pointer);
	}
	native private void updateSceneGraphic_CCamera(long pNativeObject, long camera);
	/**
	 * 更新场景
	 */
	public void updateSceneGraphic(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		updateSceneGraphic_CCamera(this.nativeObject.pointer, cameraParamValue);
	}
	native private void _notifyLayerAdd_CSceneManager(long pNativeObject, long pSceneMgr);
	/**
	 * Globe加载一个图层之后调用的函数
	 * @param  
	 */
	public void _notifyLayerAdd(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerAdd_CSceneManager(this.nativeObject.pointer, pSceneMgrParamValue);
	}
	native private void _notifyLayerAdd_CSceneManager_NoVirtual(long pNativeObject, long pSceneMgr);
	protected void _notifyLayerAdd_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerAdd_CSceneManager_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue);
	}

	native private void _notifyLayerRemoved_CSceneManager(long pNativeObject, long pSceneMgr);
	/**
	 * Globe卸载一个图层之后调用的函数
	 * @param  
	 */
	public void _notifyLayerRemoved(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerRemoved_CSceneManager(this.nativeObject.pointer, pSceneMgrParamValue);
	}
	native private void _notifyLayerRemoved_CSceneManager_NoVirtual(long pNativeObject, long pSceneMgr);
	protected void _notifyLayerRemoved_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerRemoved_CSceneManager_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue);
	}

	native private void _notifyRefreshed_CCamera_LayerRefreshFactor(long pNativeObject, long camera, int updateType);
	/**
	 * Globe刷新时调用的函数
	 * @param camera 当前的相机
	 * @param level 当前的级别
	 * @param force 是否为强制刷新
	 */
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		int updateTypeParamValue = updateType.getValue();
		_notifyRefreshed_CCamera_LayerRefreshFactor(this.nativeObject.pointer, cameraParamValue, updateTypeParamValue);
	}
	native private void _notifyRefreshed_CCamera_LayerRefreshFactor_NoVirtual(long pNativeObject, long camera, int updateType);
	protected void _notifyRefreshed_NoVirtual(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		int updateTypeParamValue = updateType.getValue();
		_notifyRefreshed_CCamera_LayerRefreshFactor_NoVirtual(this.nativeObject.pointer, cameraParamValue, updateTypeParamValue);
	}

	native private void _notifyDataChanged_EVString_EVString_CEvent(long pNativeObject, String strDataSourceName, String strDatasetName, long pEvent);
	/**
	 * 数据集更新事件的通知
	 * @param strDatasetName 数据集名称
	 */
	public void _notifyDataChanged(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		String strDataSourceNameParamValue = strDataSourceName;
		String strDatasetNameParamValue = strDatasetName;
		long pEventParamValue = (pEvent == null ? 0L : pEvent.nativeObject.pointer);
		_notifyDataChanged_EVString_EVString_CEvent(this.nativeObject.pointer, strDataSourceNameParamValue, strDatasetNameParamValue, pEventParamValue);
	}
	native private void _notifyDataChanged_EVString_EVString_CEvent_NoVirtual(long pNativeObject, String strDataSourceName, String strDatasetName, long pEvent);
	protected void _notifyDataChanged_NoVirtual(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		String strDataSourceNameParamValue = strDataSourceName;
		String strDatasetNameParamValue = strDatasetName;
		long pEventParamValue = (pEvent == null ? 0L : pEvent.nativeObject.pointer);
		_notifyDataChanged_EVString_EVString_CEvent_NoVirtual(this.nativeObject.pointer, strDataSourceNameParamValue, strDatasetNameParamValue, pEventParamValue);
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * xml反序列化
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

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 序列化成xml元素
	 * @return xml元素
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
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
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
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

	native private String toXML_void(long pNativeObject);
	/**
	 * 序列化成xml文本
	 * @return xml文本
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

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 序列化成流
	 * @param  
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	protected  boolean selectBy_CRay_CViewport_CVector3_callback(long ray, long viewport, long point)
	{
		com.earthview.world.spatial.math.Ray rayParamValue = new com.earthview.world.spatial.math.Ray(CreatedWhenConstruct.CWC_NotToCreate);
		rayParamValue.setDelegate(true);
		rayParamValue.setInstancePointer(new InstancePointer(ray));
		IClassFactory rayParamValueClassFactory = GlobalClassFactoryMap.get(rayParamValue.getCppInstanceTypeName());
		if (rayParamValueClassFactory != null)
		{
			rayParamValue.setDelegate(true);
			rayParamValue = (com.earthview.world.spatial.math.Ray)rayParamValueClassFactory.create();
			rayParamValue.setDelegate(true);
			rayParamValue.setInstancePointer(new InstancePointer(ray));
		}
		com.earthview.world.graphic.Viewport viewportParamValue = (viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportParamValue != null)
		{
		viewportParamValue.setDelegate(true);
		viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		IClassFactory viewportParamValueClassFactory = GlobalClassFactoryMap.get(viewportParamValue.getCppInstanceTypeName());
		if (viewportParamValueClassFactory != null)
		{
			viewportParamValue.setDelegate(true);
			viewportParamValue = (com.earthview.world.graphic.Viewport)viewportParamValueClassFactory.create();
			viewportParamValue.setDelegate(true);
			viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		}
		}
		com.earthview.world.spatial.math.Vector3 pointParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.math.Vector3)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		boolean returnValue = selectBy(rayParamValue, viewportParamValue, pointParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean selectBy_CRay_CViewport_CVector3(long pNativeObject, long ray, long viewport, long point);
	/**
	 * 射线选择
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param point 交点
	 * @return true:与射线相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectBy_CRay_CViewport_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, long point);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, pointParamValue);
		return returnValue;
	}

	protected  void setEnvParam_CColourValue_CColourValue_CColourValue_callback(long ambient, long diffuse, long specular)
	{
		com.earthview.world.graphic.ColourValue ambientParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		ambientParamValue.setDelegate(true);
		ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		IClassFactory ambientParamValueClassFactory = GlobalClassFactoryMap.get(ambientParamValue.getCppInstanceTypeName());
		if (ambientParamValueClassFactory != null)
		{
			ambientParamValue.setDelegate(true);
			ambientParamValue = (com.earthview.world.graphic.ColourValue)ambientParamValueClassFactory.create();
			ambientParamValue.setDelegate(true);
			ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		}
		com.earthview.world.graphic.ColourValue diffuseParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		diffuseParamValue.setDelegate(true);
		diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		IClassFactory diffuseParamValueClassFactory = GlobalClassFactoryMap.get(diffuseParamValue.getCppInstanceTypeName());
		if (diffuseParamValueClassFactory != null)
		{
			diffuseParamValue.setDelegate(true);
			diffuseParamValue = (com.earthview.world.graphic.ColourValue)diffuseParamValueClassFactory.create();
			diffuseParamValue.setDelegate(true);
			diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		}
		com.earthview.world.graphic.ColourValue specularParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		specularParamValue.setDelegate(true);
		specularParamValue.setInstancePointer(new InstancePointer(specular));
		IClassFactory specularParamValueClassFactory = GlobalClassFactoryMap.get(specularParamValue.getCppInstanceTypeName());
		if (specularParamValueClassFactory != null)
		{
			specularParamValue.setDelegate(true);
			specularParamValue = (com.earthview.world.graphic.ColourValue)specularParamValueClassFactory.create();
			specularParamValue.setDelegate(true);
			specularParamValue.setInstancePointer(new InstancePointer(specular));
		}
		setEnvParam(ambientParamValue, diffuseParamValue, specularParamValue);
	}

	native private void setEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, long ambient, long diffuse, long specular);
	/**
	 * 设置某个图层反射光系数增益
	 * @param ambient 环境光增益
	 * @param diffuse 漫反射增益
	 * @param specular 镜面反射增益
	 */
	public void setEnvParam(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		setEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}
	native private void setEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(long pNativeObject, long ambient, long diffuse, long specular);
	protected void setEnvParam_NoVirtual(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		setEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}

	protected  void getEnvParam_CColourValue_CColourValue_CColourValue_callback(long ambient, long diffuse, long specular)
	{
		com.earthview.world.graphic.ColourValue ambientParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		ambientParamValue.setDelegate(true);
		ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		IClassFactory ambientParamValueClassFactory = GlobalClassFactoryMap.get(ambientParamValue.getCppInstanceTypeName());
		if (ambientParamValueClassFactory != null)
		{
			ambientParamValue.setDelegate(true);
			ambientParamValue = (com.earthview.world.graphic.ColourValue)ambientParamValueClassFactory.create();
			ambientParamValue.setDelegate(true);
			ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		}
		com.earthview.world.graphic.ColourValue diffuseParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		diffuseParamValue.setDelegate(true);
		diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		IClassFactory diffuseParamValueClassFactory = GlobalClassFactoryMap.get(diffuseParamValue.getCppInstanceTypeName());
		if (diffuseParamValueClassFactory != null)
		{
			diffuseParamValue.setDelegate(true);
			diffuseParamValue = (com.earthview.world.graphic.ColourValue)diffuseParamValueClassFactory.create();
			diffuseParamValue.setDelegate(true);
			diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		}
		com.earthview.world.graphic.ColourValue specularParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		specularParamValue.setDelegate(true);
		specularParamValue.setInstancePointer(new InstancePointer(specular));
		IClassFactory specularParamValueClassFactory = GlobalClassFactoryMap.get(specularParamValue.getCppInstanceTypeName());
		if (specularParamValueClassFactory != null)
		{
			specularParamValue.setDelegate(true);
			specularParamValue = (com.earthview.world.graphic.ColourValue)specularParamValueClassFactory.create();
			specularParamValue.setDelegate(true);
			specularParamValue.setInstancePointer(new InstancePointer(specular));
		}
		getEnvParam(ambientParamValue, diffuseParamValue, specularParamValue);
	}

	native private void getEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, long ambient, long diffuse, long specular);
	/**
	 * 获取图层反射光系数增益
	 * @return ambient环境光增益，diffuse漫反射增益，specular镜面反射增益
	 */
	public void getEnvParam(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		getEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}
	native private void getEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(long pNativeObject, long ambient, long diffuse, long specular);
	protected void getEnvParam_NoVirtual(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		getEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}

	native private void addModelStateListener_COBQModelStateListener(long pNativeObject, long listener);
	/**
	 * 添加模型状态监听
	 * @param listener 模型监听
	 */
	public void addModelStateListener(com.earthview.world.spatial3d.atlas.Obqmodelstatelistener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		addModelStateListener_COBQModelStateListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void removeModelStateListener_COBQModelStateListener(long pNativeObject, long listener);
	/**
	 * 移除模型状态监听
	 * @param listener 模型监听
	 */
	public void removeModelStateListener(com.earthview.world.spatial3d.atlas.Obqmodelstatelistener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeModelStateListener_COBQModelStateListener(this.nativeObject.pointer, listenerParamValue);
	}
	public ObliqueModelLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ObliqueModelLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/// <summary>
	/// 获得场景名称
	/// </summary>
	/// <returns>场景名称</return>
	public String getSceneName()
	{
		return super.getSceneName_NoVirtual();
	}
	/**
	 * 获取包围盒在X轴上最小值
	 * @param  
	 * @return 包围盒在X轴上最小值
	 */
	public double getMinX()
	{
		return super.getMinX_NoVirtual();
	}
	/**
	 * 获取包围盒在X轴上最大值
	 * @param  
	 * @return 包围盒在X轴上最大值
	 */
	public double getMaxX()
	{
		return super.getMaxX_NoVirtual();
	}
	/**
	 * 获取包围盒在Y轴上最小值
	 * @param  
	 * @return 包围盒在Y轴上最小值
	 */
	public double getMinY()
	{
		return super.getMinY_NoVirtual();
	}
	/**
	 * 获取包围盒在Y轴上最大值
	 * @param  
	 * @return 包围盒在Y轴上最大值
	 */
	public double getMaxY()
	{
		return super.getMaxY_NoVirtual();
	}
	/**
	 * 根据经纬度和级别获取高程
	 * @param lat 纬度
	 * @param lon 经度
	 * @param targetSamplesPerDegrees 每度采样数，-1表示最高精度
	 */
	public boolean getHeightAt(float lat, float lon, float targetSamplesPerDegrees, FloatPointer height)
	{
		return super.getHeightAt_NoVirtual(lat, lon, targetSamplesPerDegrees, height);
	}
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera)
	{
		super._notifyRefreshed_NoVirtual(camera);
	}
	/// <summary>
	/// 获得场景管理器
	/// </summary>
	/// <returns>场景管理器</return>
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		return super.getSceneManager_NoVirtual();
	}
	/**
	 * 获取数据集的名称
	 * @param  
	 */
	public String getDatasetName()
	{
		return super.getDatasetName_NoVirtual();
	}
	/**
	 * 获取数据集所在的数据源
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSource()
	{
		return super.getDataSource_NoVirtual();
	}
	/**
	 * 图层选择
	 * @param filter 选择过滤条件
	 * @param type 选择类型
	 */
	public void select(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		super.select_NoVirtual(filter, type);
	}
	/**
	 * 清空图层选择
	 * @param  
	 */
	public void clearSelection()
	{
		super.clearSelection_NoVirtual();
	}
	/**
	 * 设置图层的选择集
	 * @param selection 图层的选择集
	 */
	public void setLayerSelection(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		super.setLayerSelection_NoVirtual(selection);
	}
	/**
	 * 获取图层选择
	 * @param  
	 * @return 图层选择
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection()
	{
		return super.getLayerSelection_NoVirtual();
	}
	/**
	 * 获取图层的名称
	 * @param  
	 * @return 图层名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置图层的名称
	 * @param name 图层名称
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
	}
	/**
	 * 获取图层的描述信息
	 * @param  
	 * @return 描述信息
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
	}
	/**
	 * 设置图层的描述信息
	 * @param value 描述信息
	 */
	public void setDescription(String value)
	{
		super.setDescription_NoVirtual(value);
	}
	/**
	 * 检测图层图层是否可以编辑
	 * @param  
	 * @return 如果图层可以编辑,则返回true,反之则否
	 */
	public boolean canEdit()
	{
		return super.canEdit_NoVirtual();
	}
	/**
	 * 设置图层是否可以支持编辑
	 * @param can 如果为true,则图层可以编辑,反之则否
	 */
	public void setCanEdit(boolean can)
	{
		super.setCanEdit_NoVirtual(can);
	}
	/**
	 * 检测图层是否正在被编辑
	 * @param  
	 * @return 如果图层正在编辑则返回true,反之则否
	 */
	public boolean isEditing()
	{
		return super.isEditing_NoVirtual();
	}
	/**
	 * 设置图层是否正在编辑
	 * @param editing 如果为true,则设置图层正在编辑,反之则否
	 */
	public void setEditing(boolean editing)
	{
		super.setEditing_NoVirtual(editing);
	}
	/**
	 * 检测图层是否可视
	 * @param  
	 * @return 如果图层可视则返回true,反之则否
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 检测图层是否有效
	 * @param  
	 * @return 如果有效则返回true,反之则否
	 */
	public boolean isValid()
	{
		return super.isValid_NoVirtual();
	}
	/**
	 * 检测图层绘制时是否忽略比例尺的因素
	 * @param  
	 * @return 如果忽略,则返回true,反之则否
	 */
	public boolean ignoreScale()
	{
		return super.ignoreScale_NoVirtual();
	}
	/**
	 * 设置图层的绘制是否忽略比例尺的因素
	 * @param bIgnore 是否忽略
	 */
	public void setIgnoreScale(boolean bIgnore)
	{
		super.setIgnoreScale_NoVirtual(bIgnore);
	}
	/**
	 * 获取最大显示比例尺
	 * @param  
	 * @return 比例尺
	 */
	public double getDisplayMaxScale()
	{
		return super.getDisplayMaxScale_NoVirtual();
	}
	/**
	 * 设置最大显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMaxScale(double scale)
	{
		super.setDisplayMaxScale_NoVirtual(scale);
	}
	/**
	 * 获取最小显示比例尺
	 * @param  
	 * @return 比例尺
	 */
	public double getDisplayMinScale()
	{
		return super.getDisplayMinScale_NoVirtual();
	}
	/**
	 * 设置最小显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMinScale(double scale)
	{
		super.setDisplayMinScale_NoVirtual(scale);
	}
	/**
	 * 获取图层的坐标系统
	 * @param  
	 * @return 坐标系统
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		return super.getSpatialReference_NoVirtual();
	}
	/**
	 * 设置图层的坐标系统
	 * @param sr 坐标系统
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		super.setSpatialReference_NoVirtual(ref_sr);
	}
	/**
	 * 设置图层的透明度
	 * @param transparent 透明值
	 */
	public void setTransparentValue(short transparent)
	{
		super.setTransparentValue_NoVirtual(transparent);
	}
	/**
	 * 获取图层的透明值
	 * @param  
	 * @return 透明值
	 */
	public short getTransparentValue()
	{
		return super.getTransparentValue_NoVirtual();
	}
	/**
	 * 获取图层的范围
	 * @param  
	 * @return 图层范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getExtent()
	{
		return super.getExtent_NoVirtual();
	}
	/**
	 * 绘制图层
	 * @param display 空间显示参数
	 * @param type 绘制类型
	 */
	public boolean draw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		return super.draw_NoVirtual(display, type);
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_getGotoParam_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getAltitudeValue_void(long pNativeObject, String method);
	native protected void register_getPosition_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_selectBy_CRay_CViewport_CVector3(long pNativeObject, String method);
	native protected void register_setEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, String method);
	native protected void register_getEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, String method);
	native protected void register_getSceneName_void(long pNativeObject, String method);
	native protected void register_getMinX_void(long pNativeObject, String method);
	native protected void register_getMaxX_void(long pNativeObject, String method);
	native protected void register_getMinY_void(long pNativeObject, String method);
	native protected void register_getMaxY_void(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register__notifyLayerAdd_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyLayerRemoved_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera_LayerRefreshFactor(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera(long pNativeObject, String method);
	native protected void register__notifyDataChanged_EVString_EVString_CEvent(long pNativeObject, String method);
	native protected void register_getSceneManager_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getDataset_void(long pNativeObject, String method);
	native protected void register_getDatasetName_void(long pNativeObject, String method);
	native protected void register_getDataSource_void(long pNativeObject, String method);
	native protected void register_select_IQueryFilter_EVSelectionResultType(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_setLayerSelection_ILayerSelection(long pNativeObject, String method);
	native protected void register_getLayerSelection_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_setDescription_EVString(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_setCanEdit_ev_bool(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_setEditing_ev_bool(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_isSelectable_void(long pNativeObject, String method);
	native protected void register_setSelectable_ev_bool(long pNativeObject, String method);
	native protected void register_ignoreScale_void(long pNativeObject, String method);
	native protected void register_setIgnoreScale_ev_bool(long pNativeObject, String method);
	native protected void register_getDisplayMaxScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMaxScale_ev_real64(long pNativeObject, String method);
	native protected void register_getDisplayMinScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMinScale_ev_real64(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_setTransparentValue_ev_uint8(long pNativeObject, String method);
	native protected void register_getTransparentValue_void(long pNativeObject, String method);
	native protected void register_getExtent_void(long pNativeObject, String method);
	native protected void register_draw_ISpatialDisplay_EVVectorLayerRendererType(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getGotoParam_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getGotoParam_ev_real64_ev_real64_ev_real64_callback");
			this.register_getAltitudeValue_void(this.nativeObject.pointer, "getAltitudeValue_void_callback");
			this.register_getPosition_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getPosition_ev_real64_ev_real64_ev_real64_callback");
			this.register_getSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, "getSpatialInfo_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
			this.register_selectBy_CRay_CViewport_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_CVector3_callback");
			this.register_setEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, "setEnvParam_CColourValue_CColourValue_CColourValue_callback");
			this.register_getEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, "getEnvParam_CColourValue_CColourValue_CColourValue_callback");
			this.register_getSceneName_void(this.nativeObject.pointer, "getSceneName_void_callback");
			this.register_getMinX_void(this.nativeObject.pointer, "getMinX_void_callback");
			this.register_getMaxX_void(this.nativeObject.pointer, "getMaxX_void_callback");
			this.register_getMinY_void(this.nativeObject.pointer, "getMinY_void_callback");
			this.register_getMaxY_void(this.nativeObject.pointer, "getMaxY_void_callback");
			this.register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register__notifyLayerAdd_CSceneManager(this.nativeObject.pointer, "_notifyLayerAdd_CSceneManager_callback");
			this.register__notifyLayerRemoved_CSceneManager(this.nativeObject.pointer, "_notifyLayerRemoved_CSceneManager_callback");
			this.register__notifyRefreshed_CCamera_LayerRefreshFactor(this.nativeObject.pointer, "_notifyRefreshed_CCamera_LayerRefreshFactor_callback");
			this.register__notifyRefreshed_CCamera(this.nativeObject.pointer, "_notifyRefreshed_CCamera_callback");
			this.register__notifyDataChanged_EVString_EVString_CEvent(this.nativeObject.pointer, "_notifyDataChanged_EVString_EVString_CEvent_callback");
			this.register_getSceneManager_void(this.nativeObject.pointer, "getSceneManager_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getDataset_void(this.nativeObject.pointer, "getDataset_void_callback");
			this.register_getDatasetName_void(this.nativeObject.pointer, "getDatasetName_void_callback");
			this.register_getDataSource_void(this.nativeObject.pointer, "getDataSource_void_callback");
			this.register_select_IQueryFilter_EVSelectionResultType(this.nativeObject.pointer, "select_IQueryFilter_EVSelectionResultType_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_setLayerSelection_ILayerSelection(this.nativeObject.pointer, "setLayerSelection_ILayerSelection_callback");
			this.register_getLayerSelection_void(this.nativeObject.pointer, "getLayerSelection_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_setDescription_EVString(this.nativeObject.pointer, "setDescription_EVString_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_setCanEdit_ev_bool(this.nativeObject.pointer, "setCanEdit_ev_bool_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_setEditing_ev_bool(this.nativeObject.pointer, "setEditing_ev_bool_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_isSelectable_void(this.nativeObject.pointer, "isSelectable_void_callback");
			this.register_setSelectable_ev_bool(this.nativeObject.pointer, "setSelectable_ev_bool_callback");
			this.register_ignoreScale_void(this.nativeObject.pointer, "ignoreScale_void_callback");
			this.register_setIgnoreScale_ev_bool(this.nativeObject.pointer, "setIgnoreScale_ev_bool_callback");
			this.register_getDisplayMaxScale_void(this.nativeObject.pointer, "getDisplayMaxScale_void_callback");
			this.register_setDisplayMaxScale_ev_real64(this.nativeObject.pointer, "setDisplayMaxScale_ev_real64_callback");
			this.register_getDisplayMinScale_void(this.nativeObject.pointer, "getDisplayMinScale_void_callback");
			this.register_setDisplayMinScale_ev_real64(this.nativeObject.pointer, "setDisplayMinScale_ev_real64_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_setTransparentValue_ev_uint8(this.nativeObject.pointer, "setTransparentValue_ev_uint8_callback");
			this.register_getTransparentValue_void(this.nativeObject.pointer, "getTransparentValue_void_callback");
			this.register_getExtent_void(this.nativeObject.pointer, "getExtent_void_callback");
			this.register_draw_ISpatialDisplay_EVVectorLayerRendererType(this.nativeObject.pointer, "draw_ISpatialDisplay_EVVectorLayerRendererType_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static ObliqueModelLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ObliqueModelLayer obj = null;
 		if(baseObj instanceof ObliqueModelLayer)
		{
			obj = (ObliqueModelLayer)baseObj;
		} else {
			obj = new ObliqueModelLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CObliqueModelLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
