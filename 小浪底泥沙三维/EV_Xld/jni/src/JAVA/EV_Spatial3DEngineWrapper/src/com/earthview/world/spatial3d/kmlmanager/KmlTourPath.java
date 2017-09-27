package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * kml飞行游览路径
 */
public class KmlTourPath extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::CKmlTourPath", new KmlTourPathClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlTourPath() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlTourPath", null);
	}

	native private void initializeFlyToMap_CTour(long pNativeObject, long ref_tour);
	/**
	 * 初始化flyto容器
	 * @param tour 游览
	 */
	public void initializeFlyToMap(com.earthview.world.spatial.kml.Tour ref_tour)
	{
		long ref_tourParamValue = (ref_tour == null ? 0L : ref_tour.nativeObject.pointer);
		initializeFlyToMap_CTour(this.nativeObject.pointer, ref_tourParamValue);
	}
	native private void initializeKmlTour_CTour(long pNativeObject, long ref_tour);
	/**
	 * 初始化kml游览
	 * @param tour 游览
	 */
	public void initializeKmlTour(com.earthview.world.spatial.kml.Tour ref_tour)
	{
		long ref_tourParamValue = (ref_tour == null ? 0L : ref_tour.nativeObject.pointer);
		initializeKmlTour_CTour(this.nativeObject.pointer, ref_tourParamValue);
	}
	native private double getAltitude_EVAltitudeMode_ev_real64_ev_real64_ev_real64(long pNativeObject, int altitudeMode, double latitude, double longitude, double originalAltitude);
	/**
	 * 获取高程值
	 * @param altitudeMode 高程模式
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param originalAltitude 起始高度
	 * @return 返回高度值
	 */
	public double getAltitude(com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode, double latitude, double longitude, double originalAltitude)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double originalAltitudeParamValue = originalAltitude;
		double returnValue = getAltitude_EVAltitudeMode_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, altitudeModeParamValue, latitudeParamValue, longitudeParamValue, originalAltitudeParamValue);
		return returnValue;
	}
	native private void setSceneManager_CSceneManager(long pNativeObject, long ref_sceneManager);
	/**
	 * 设置场景管理
	 * @param sceneManager 场景管理器
	 */
	public void setSceneManager(com.earthview.world.graphic.SceneManager ref_sceneManager)
	{
		long ref_sceneManagerParamValue = (ref_sceneManager == null ? 0L : ref_sceneManager.nativeObject.pointer);
		setSceneManager_CSceneManager(this.nativeObject.pointer, ref_sceneManagerParamValue);
	}
	native private long convertToKmlFlyTo_CFlyTo(long pNativeObject, long flyTo);
	/**
	 * 转换为flyto
	 * @param flyTo flyto对象
	 * @return 返回对象
	 */
	public com.earthview.world.spatial3d.kmlmanager.KmlFlyTo convertToKmlFlyTo(com.earthview.world.spatial.kml.FlyTo flyTo)
	{
		long flyToParamValue = (flyTo == null ? 0L : flyTo.nativeObject.pointer);
		long returnValue = convertToKmlFlyTo_CFlyTo(this.nativeObject.pointer, flyToParamValue);
		com.earthview.world.spatial3d.kmlmanager.KmlFlyTo __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CKmlFlyTo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlFlyTo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKmlFlyTo");
		}
		return __returnValue;
	}
	native private long getInterpolaterdFlyTo_ev_real64(long pNativeObject, double time);
	/**
	 * 内插
	 * @param time 飞行的时间
	 */
	public com.earthview.world.spatial3d.kmlmanager.KmlFlyTo getInterpolaterdFlyTo(double time)
	{
		double timeParamValue = time;
		long returnValue = getInterpolaterdFlyTo_ev_real64(this.nativeObject.pointer, timeParamValue);
		com.earthview.world.spatial3d.kmlmanager.KmlFlyTo __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CKmlFlyTo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlFlyTo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKmlFlyTo");
		}
		return __returnValue;
	}
	native private void setFlyTo_CKmlFlyTo_CKmlFlyTo_CKmlFlyTo_ev_real64(long pNativeObject, long kmlFlyTo, long front, long back, double ratio);
	/**
	 * 设置flyto
	 * @param kmlFlyTo flyto对象
	 * @param front 上一个flyto对象
	 * @param back 下一个flyto对象
	 * @param ratio 速率
	 */
	public void setFlyTo(com.earthview.world.spatial3d.kmlmanager.KmlFlyTo kmlFlyTo, com.earthview.world.spatial3d.kmlmanager.KmlFlyTo front, com.earthview.world.spatial3d.kmlmanager.KmlFlyTo back, double ratio)
	{
		long kmlFlyToParamValue = kmlFlyTo.nativeObject.pointer;
		long frontParamValue = front.nativeObject.pointer;
		long backParamValue = back.nativeObject.pointer;
		double ratioParamValue = ratio;
		setFlyTo_CKmlFlyTo_CKmlFlyTo_CKmlFlyTo_ev_real64(this.nativeObject.pointer, kmlFlyToParamValue, frontParamValue, backParamValue, ratioParamValue);
	}
	native private long calculateFlyTo_CKmlFlyTo_CKmlFlyTo_ev_real64_ev_real64_ev_real64(long pNativeObject, long front, long back, double frontTime, double backTime, double currentTime);
	/**
	 * 计算flyto
	 * @param front 上一个flyto对象
	 * @param back 下一个flyto对象
	 * @param frontTime 开始时间
	 * @param backTime 结束时间
	 * @param currentTime 当前时间
	 * @return 返回飞行对象
	 */
	public com.earthview.world.spatial3d.kmlmanager.KmlFlyTo calculateFlyTo(com.earthview.world.spatial3d.kmlmanager.KmlFlyTo front, com.earthview.world.spatial3d.kmlmanager.KmlFlyTo back, double frontTime, double backTime, double currentTime)
	{
		long frontParamValue = front.nativeObject.pointer;
		long backParamValue = back.nativeObject.pointer;
		double frontTimeParamValue = frontTime;
		double backTimeParamValue = backTime;
		double currentTimeParamValue = currentTime;
		long returnValue = calculateFlyTo_CKmlFlyTo_CKmlFlyTo_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, frontParamValue, backParamValue, frontTimeParamValue, backTimeParamValue, currentTimeParamValue);
		com.earthview.world.spatial3d.kmlmanager.KmlFlyTo __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CKmlFlyTo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlFlyTo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKmlFlyTo");
		}
		return __returnValue;
	}
	native private double getTimeLength_void(long pNativeObject);
	/**
	 * 返回时间长度
	 * @return 返回时间长度
	 */
	public double getTimeLength()
	{
		double returnValue = getTimeLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFlyToNumber_void(long pNativeObject);
	/**
	 * 获取flyto个数
	 * @return 返回flyto的个数
	 */
	public int getFlyToNumber()
	{
		int returnValue = getFlyToNumber_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addKmlFlyTo_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double timeSpan, double latitude, double longitude, double heading, double tilt, double alitude, double moditifAltiude, double distance);
	/**
	 * 获取飞行对象
	 * @param timeSpan 时间
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param heading 相机的heading角
	 * @param tilt 相机的tilt角
	 * @param alitude 高程
	 * @param moditifAltiude 高程修正值
	 * @param distance 距离
	 */
	public void addKmlFlyTo(double timeSpan, double latitude, double longitude, double heading, double tilt, double alitude, double moditifAltiude, double distance)
	{
		double timeSpanParamValue = timeSpan;
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double headingParamValue = heading;
		double tiltParamValue = tilt;
		double alitudeParamValue = alitude;
		double moditifAltiudeParamValue = moditifAltiude;
		double distanceParamValue = distance;
		addKmlFlyTo_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, timeSpanParamValue, latitudeParamValue, longitudeParamValue, headingParamValue, tiltParamValue, alitudeParamValue, moditifAltiudeParamValue, distanceParamValue);
	}
	native private long getTour_void(long pNativeObject);
	/**
	 * 获取游览对象
	 * @return 返回游览对象
	 */
	public com.earthview.world.spatial.kml.Tour getTour()
	{
		long returnValue = getTour_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.Tour __returnValue = new com.earthview.world.spatial.kml.Tour(CreatedWhenConstruct.CWC_NotToCreate, "CTour");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.Tour)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTour");
		}
		return __returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清除列表
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public KmlTourPath(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlTourPath(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlTourPath fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlTourPath obj = null;
 		if(baseObj instanceof KmlTourPath)
		{
			obj = (KmlTourPath)baseObj;
		} else {
			obj = new KmlTourPath(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlTourPath");
			obj.increaseCast();
		}

		return obj;
	}
}
