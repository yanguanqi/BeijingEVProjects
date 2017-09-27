package com.earthview.world.spatial3d.effectmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效对象类
 */
public class EffectObject extends com.earthview.world.geometry3d.VisibleObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::EffectManager::CEffectObject", new EffectObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::EffectManager::JCEffectObjectProxy", new EffectObjectClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_f 要素指针
	 * @param ref_layer 三维图层指针
	 */
	public EffectObject(com.earthview.world.spatial.geodataset.Ifeature ref_f, com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_fPtr = new BasePointer(ref_f);
		list.add("ref_f", ref_fPtr.get());
		BasePointer ref_layerPtr = new BasePointer(ref_layer);
		list.add("ref_layer", ref_layerPtr.get());
		Create("JCEffectObjectProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.effectmanager.EffectObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param id 要素id
	 * @param ref_layer 三维图层指针
	 */
	public EffectObject(long id, com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer idPtr = new BasePointer(id);
		list.add("id", idPtr.get());
		BasePointer ref_layerPtr = new BasePointer(ref_layer);
		list.add("ref_layer", ref_layerPtr.get());
		Create("JCEffectObjectProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.effectmanager.EffectObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getEffect_void(long pNativeObject);
	/**
	 * 得到特效
	 * @return 返回特效指针
	 */
	public com.earthview.world.spatial3d.effectmanager.Effect getEffect()
	{
		long returnValue = getEffect_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.effectmanager.Effect __returnValue = new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate, "CEffect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.effectmanager.Effect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffect");
		}
		return __returnValue;
	}
	native private boolean load_void(long pNativeObject);
	/**
	 * 加载资源
	 * @return 加载成功返回true否则返回false
	 */
	public boolean load()
	{
		boolean returnValue = load_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean load_void_NoVirtual(long pNativeObject);
	protected boolean load_NoVirtual()
	{
		boolean returnValue = load_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean unload_void(long pNativeObject);
	/**
	 * 卸载资源
	 * @return 卸载成功返回true否则返回false
	 */
	public boolean unload()
	{
		boolean returnValue = unload_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean unload_void_NoVirtual(long pNativeObject);
	protected boolean unload_NoVirtual()
	{
		boolean returnValue = unload_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isLoaded_void(long pNativeObject);
	/**
	 * 判断资源是否被加载
	 * @return 已加载返回true否则返回false
	 */
	public boolean isLoaded()
	{
		boolean returnValue = isLoaded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isLoaded_void_NoVirtual(long pNativeObject);
	protected boolean isLoaded_NoVirtual()
	{
		boolean returnValue = isLoaded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean attachToNode_CNode(long pNativeObject, long n);
	/**
	 * 将特效绑定到渲染节点
	 * @return true成功，false失败
	 */
	public boolean attachToNode(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		boolean returnValue = attachToNode_CNode(this.nativeObject.pointer, nParamValue);
		return returnValue;
	}
	native private boolean attachToNode_CNode_NoVirtual(long pNativeObject, long n);
	protected boolean attachToNode_NoVirtual(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		boolean returnValue = attachToNode_CNode_NoVirtual(this.nativeObject.pointer, nParamValue);
		return returnValue;
	}

	native private long detachFromNode_void(long pNativeObject);
	/**
	 * 从节点上卸载模型
	 * @return 成功返回被挂接的父节点，失败返回NULL
	 */
	public com.earthview.world.graphic.Node detachFromNode()
	{
		long returnValue = detachFromNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long detachFromNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node detachFromNode_NoVirtual()
	{
		long returnValue = detachFromNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	native private void setPosition_CVector3_CVector3_CQuaternion(long pNativeObject, long pos, long scale, long qua);
	/**
	 * 设置特效位置
	 * @param pos 特效位置
	 * @param scale 缩放比例
	 * @param qua 四元数
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		long posParamValue = pos.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		setPosition_CVector3_CVector3_CQuaternion(this.nativeObject.pointer, posParamValue, scaleParamValue, quaParamValue);
	}
	native private void getPosition_CVector3_CVector3_CQuaternion(long pNativeObject, long pos, long scale, long qua);
	/**
	 * 得到特效位置
	 * @param pos 特效位置
	 * @param scale 缩放比例
	 * @param qua 四元数
	 */
	public void getPosition(com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		long posParamValue = pos.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		getPosition_CVector3_CVector3_CQuaternion(this.nativeObject.pointer, posParamValue, scaleParamValue, quaParamValue);
	}
	native private void setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, double latitude, double longitude, double altitude, long scale, long qua);
	/**
	 * 设置特效位置
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param altitude 高度
	 * @param scale 缩放比例
	 * @param qua 四元数
	 */
	public void setPosition(double latitude, double longitude, double altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double altitudeParamValue = altitude;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}
	native private void setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(long pNativeObject, double latitude, double longitude, double altitude, long scale, long qua);
	protected void setPosition_NoVirtual(double latitude, double longitude, double altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double altitudeParamValue = altitude;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}

	native private void getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, long latitude, long longitude, long altitude, long scale, long qua);
	/**
	 * 得到特效位置
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param altitude 高度
	 * @param scale 缩放比例
	 * @param qua 四元数
	 */
	public void getPosition(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}
	native private void getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(long pNativeObject, long latitude, long longitude, long altitude, long scale, long qua);
	protected void getPosition_NoVirtual(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}

	native private void setAlt_EVAltitudeMode_ev_real64(long pNativeObject, int altMode, double altValue);
	/**
	 * 设置高度
	 * @param altMode 高度模式
	 * @param altValue 高度值
	 */
	public void setAlt(com.earthview.world.spatial.utility.EVAltitudeMode altMode, double altValue)
	{
		int altModeParamValue = altMode.getValue();
		double altValueParamValue = altValue;
		setAlt_EVAltitudeMode_ev_real64(this.nativeObject.pointer, altModeParamValue, altValueParamValue);
	}
	native private void getAlt_EVAltitudeMode_ev_real64(long pNativeObject, long altMode, long altValue);
	/**
	 * 获取高度
	 * @param altMode 高度模式
	 * @param altValue 高度值
	 */
	public void getAlt(EnumPointer altMode, DoublePointer altValue)
	{
		long altModeParamValue = altMode.nativeObject.pointer;
		long altValueParamValue = altValue.nativeObject.pointer;
		getAlt_EVAltitudeMode_ev_real64(this.nativeObject.pointer, altModeParamValue, altValueParamValue);
	}
	protected  long getFeature_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifeature returnValue = getFeature();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFeature_void(long pNativeObject);
	/**
	 * 得到要素指针
	 * @return 返回要素指针
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getFeature()
	{
		long returnValue = getFeature_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long getFeature_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeature getFeature_NoVirtual()
	{
		long returnValue = getFeature_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}

	native private long getLayer_void(long pNativeObject);
	/**
	 * 得到三维图层指针
	 * @return 返回三维图层指针
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer getLayer()
	{
		long returnValue = getLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeLayer");
		}
		return __returnValue;
	}
	native private long getLayer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.atlas.Iglobelayer getLayer_NoVirtual()
	{
		long returnValue = getLayer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeLayer");
		}
		return __returnValue;
	}

	native private long getID_void(long pNativeObject);
	/**
	 * 得到要素ID
	 * @return 返回要素ID
	 */
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getID_void_NoVirtual(long pNativeObject);
	protected long getID_NoVirtual()
	{
		long returnValue = getID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getBound_void_callback()
	{
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = getBound();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBound_void(long pNativeObject);
	/**
	 * 得到特效的平行轴边框盒
	 * @return 返回特效的平行轴边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getBound()
	{
		long returnValue = getBound_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getBound_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getBound_NoVirtual()
	{
		long returnValue = getBound_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	protected  void setPos_CVector3_callback(long pos)
	{
		com.earthview.world.spatial.math.Vector3 posParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		posParamValue.setDelegate(true);
		posParamValue.setInstancePointer(new InstancePointer(pos));
		IClassFactory posParamValueClassFactory = GlobalClassFactoryMap.get(posParamValue.getCppInstanceTypeName());
		if (posParamValueClassFactory != null)
		{
			posParamValue.setDelegate(true);
			posParamValue = (com.earthview.world.spatial.math.Vector3)posParamValueClassFactory.create();
			posParamValue.setDelegate(true);
			posParamValue.setInstancePointer(new InstancePointer(pos));
		}
		setPos(posParamValue);
	}

	native private void setPos_CVector3(long pNativeObject, long pos);
	/**
	 * 设置位置
	 * @param pos 位置坐标
	 */
	public void setPos(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setPos_CVector3(this.nativeObject.pointer, posParamValue);
	}
	native private void setPos_CVector3_NoVirtual(long pNativeObject, long pos);
	protected void setPos_NoVirtual(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setPos_CVector3_NoVirtual(this.nativeObject.pointer, posParamValue);
	}

	protected  long getPos_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getPos();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPos_void(long pNativeObject);
	/**
	 * 得到位置
	 * @return 位置坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getPos()
	{
		long returnValue = getPos_void(this.nativeObject.pointer);
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
	native private long getPos_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getPos_NoVirtual()
	{
		long returnValue = getPos_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setScale_CVector3_callback(long scale)
	{
		com.earthview.world.spatial.math.Vector3 scaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		scaleParamValue.setDelegate(true);
		scaleParamValue.setInstancePointer(new InstancePointer(scale));
		IClassFactory scaleParamValueClassFactory = GlobalClassFactoryMap.get(scaleParamValue.getCppInstanceTypeName());
		if (scaleParamValueClassFactory != null)
		{
			scaleParamValue.setDelegate(true);
			scaleParamValue = (com.earthview.world.spatial.math.Vector3)scaleParamValueClassFactory.create();
			scaleParamValue.setDelegate(true);
			scaleParamValue.setInstancePointer(new InstancePointer(scale));
		}
		setScale(scaleParamValue);
	}

	native private void setScale_CVector3(long pNativeObject, long scale);
	/**
	 * 设置缩放
	 * @param pos 缩放值
	 */
	public void setScale(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		setScale_CVector3(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setScale_CVector3_NoVirtual(long pNativeObject, long scale);
	protected void setScale_NoVirtual(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		setScale_CVector3_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	protected  long getScale_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getScale();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getScale_void(long pNativeObject);
	/**
	 * 得到缩放值
	 * @return 得到缩放值
	 */
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		long returnValue = getScale_void(this.nativeObject.pointer);
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
	native private long getScale_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getScale_NoVirtual()
	{
		long returnValue = getScale_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setQua_CQuaternion_callback(long qua)
	{
		com.earthview.world.spatial.math.Quaternion quaParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		quaParamValue.setDelegate(true);
		quaParamValue.setInstancePointer(new InstancePointer(qua));
		IClassFactory quaParamValueClassFactory = GlobalClassFactoryMap.get(quaParamValue.getCppInstanceTypeName());
		if (quaParamValueClassFactory != null)
		{
			quaParamValue.setDelegate(true);
			quaParamValue = (com.earthview.world.spatial.math.Quaternion)quaParamValueClassFactory.create();
			quaParamValue.setDelegate(true);
			quaParamValue.setInstancePointer(new InstancePointer(qua));
		}
		setQua(quaParamValue);
	}

	native private void setQua_CQuaternion(long pNativeObject, long qua);
	/**
	 * 设置四元数
	 * @param qua 四元数
	 */
	public void setQua(com.earthview.world.spatial.math.Quaternion qua)
	{
		long quaParamValue = qua.nativeObject.pointer;
		setQua_CQuaternion(this.nativeObject.pointer, quaParamValue);
	}
	native private void setQua_CQuaternion_NoVirtual(long pNativeObject, long qua);
	protected void setQua_NoVirtual(com.earthview.world.spatial.math.Quaternion qua)
	{
		long quaParamValue = qua.nativeObject.pointer;
		setQua_CQuaternion_NoVirtual(this.nativeObject.pointer, quaParamValue);
	}

	protected  long getQua_void_callback()
	{
		com.earthview.world.spatial.math.Quaternion returnValue = getQua();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getQua_void(long pNativeObject);
	/**
	 * 得到四元数
	 * @return 得到四元数
	 */
	public com.earthview.world.spatial.math.Quaternion getQua()
	{
		long returnValue = getQua_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long getQua_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Quaternion getQua_NoVirtual()
	{
		long returnValue = getQua_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}

	protected  void setVisiable_ev_bool_callback(boolean isVisiable)
	{
		boolean isVisiableParamValue = isVisiable;
		setVisiable(isVisiableParamValue);
	}

	native private void setVisiable_ev_bool(long pNativeObject, boolean isVisiable);
	/**
	 * 设置是否可见
	 * @param isVisiable 是否可见
	 */
	public void setVisiable(boolean isVisiable)
	{
		boolean isVisiableParamValue = isVisiable;
		setVisiable_ev_bool(this.nativeObject.pointer, isVisiableParamValue);
	}
	native private void setVisiable_ev_bool_NoVirtual(long pNativeObject, boolean isVisiable);
	protected void setVisiable_NoVirtual(boolean isVisiable)
	{
		boolean isVisiableParamValue = isVisiable;
		setVisiable_ev_bool_NoVirtual(this.nativeObject.pointer, isVisiableParamValue);
	}

	protected  boolean getVisiable_void_callback()
	{
		boolean returnValue = getVisiable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getVisiable_void(long pNativeObject);
	/**
	 * 得到是否可见
	 * @return 返回是否可见
	 */
	public boolean getVisiable()
	{
		boolean returnValue = getVisiable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getVisiable_void_NoVirtual(long pNativeObject);
	protected boolean getVisiable_NoVirtual()
	{
		boolean returnValue = getVisiable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean attachObject_void_callback()
	{
		boolean returnValue = attachObject();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean attachObject_void(long pNativeObject);
	/**
	 * 挂载特效
	 */
	public boolean attachObject()
	{
		boolean returnValue = attachObject_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean attachObject_void_NoVirtual(long pNativeObject);
	protected boolean attachObject_NoVirtual()
	{
		boolean returnValue = attachObject_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean detachObject_void_callback()
	{
		boolean returnValue = detachObject();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean detachObject_void(long pNativeObject);
	/**
	 * 反挂载特效
	 */
	public boolean detachObject()
	{
		boolean returnValue = detachObject_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean detachObject_void_NoVirtual(long pNativeObject);
	protected boolean detachObject_NoVirtual()
	{
		boolean returnValue = detachObject_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isAttached_void(long pNativeObject);
	/**
	 * 判断是否挂载
	 * @return 返回是否挂载
	 */
	public boolean isAttached()
	{
		boolean returnValue = isAttached_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAttached_void_NoVirtual(long pNativeObject);
	protected boolean isAttached_NoVirtual()
	{
		boolean returnValue = isAttached_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setMatrix_CMatrix4(long pNativeObject, long matrix);
	/**
	 * 设置世界变换矩阵
	 */
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		setMatrix_CMatrix4(this.nativeObject.pointer, matrixParamValue);
	}
	native private void setMatrix_CMatrix4_NoVirtual(long pNativeObject, long matrix);
	protected void setMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		setMatrix_CMatrix4_NoVirtual(this.nativeObject.pointer, matrixParamValue);
	}

	native private long getMatrix_void(long pNativeObject);
	/**
	 * 得到世界变换矩阵
	 * @param matrix 变换矩阵
	 * @return 世界变换矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getMatrix()
	{
		long returnValue = getMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long getMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getMatrix_NoVirtual()
	{
		long returnValue = getMatrix_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	public EffectObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取节点
	 * @return true成功，false失败
	 */
	public com.earthview.world.graphic.Node getNode()
	{
		return super.getNode_NoVirtual();
	}
	/**
	 * 直接挂到场景，******选择重写******
	 * @return true成功，false失败
	 */
	public boolean attachToScene()
	{
		return super.attachToScene_NoVirtual();
	}
	/**
	 * 从场景反挂接，******选择重写******
	 * @return true成功，false失败
	 */
	public boolean detachFromScene()
	{
		return super.detachFromScene_NoVirtual();
	}
	/**
	 * 设置用户数据
	 * @param userData 用户数据
	 */
	public void setUserData(com.earthview.world.spatial3d.FeatureUserData userData)
	{
		super.setUserData_NoVirtual(userData);
	}
	public void setSelectable(boolean selectable)
	{
		super.setSelectable_NoVirtual(selectable);
	}
	public boolean getSelectable()
	{
		return super.getSelectable_NoVirtual();
	}
	public boolean update()
	{
		return super.update_NoVirtual();
	}
	/**
	 * 获取可见对象所在数据集
	 * @return 数据集对象
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		return super.getDataset_NoVirtual();
	}
	/**
	 * 获取可见对象名称
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	
	native protected void register_getFeature_void(long pNativeObject, String method);
	native protected void register_getBound_void(long pNativeObject, String method);
	native protected void register_setPos_CVector3(long pNativeObject, String method);
	native protected void register_getPos_void(long pNativeObject, String method);
	native protected void register_setScale_CVector3(long pNativeObject, String method);
	native protected void register_getScale_void(long pNativeObject, String method);
	native protected void register_setQua_CQuaternion(long pNativeObject, String method);
	native protected void register_getQua_void(long pNativeObject, String method);
	native protected void register_setVisiable_ev_bool(long pNativeObject, String method);
	native protected void register_getVisiable_void(long pNativeObject, String method);
	native protected void register_attachObject_void(long pNativeObject, String method);
	native protected void register_detachObject_void(long pNativeObject, String method);
	native protected void register_getNode_void(long pNativeObject, String method);
	native protected void register_isLoaded_void(long pNativeObject, String method);
	native protected void register_isAttached_void(long pNativeObject, String method);
	native protected void register_load_void(long pNativeObject, String method);
	native protected void register_unload_void(long pNativeObject, String method);
	native protected void register_attachToNode_CNode(long pNativeObject, String method);
	native protected void register_detachFromNode_void(long pNativeObject, String method);
	native protected void register_attachToScene_void(long pNativeObject, String method);
	native protected void register_detachFromScene_void(long pNativeObject, String method);
	native protected void register_setUserData_CFeatureUserData(long pNativeObject, String method);
	native protected void register_setSelectable_ev_bool(long pNativeObject, String method);
	native protected void register_getSelectable_void(long pNativeObject, String method);
	native protected void register_update_void(long pNativeObject, String method);
	native protected void register_getLayer_void(long pNativeObject, String method);
	native protected void register_getDataset_void(long pNativeObject, String method);
	native protected void register_getID_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_getMatrix_void(long pNativeObject, String method);
	native protected void register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getFeature_void(this.nativeObject.pointer, "getFeature_void_callback");
			this.register_getBound_void(this.nativeObject.pointer, "getBound_void_callback");
			this.register_setPos_CVector3(this.nativeObject.pointer, "setPos_CVector3_callback");
			this.register_getPos_void(this.nativeObject.pointer, "getPos_void_callback");
			this.register_setScale_CVector3(this.nativeObject.pointer, "setScale_CVector3_callback");
			this.register_getScale_void(this.nativeObject.pointer, "getScale_void_callback");
			this.register_setQua_CQuaternion(this.nativeObject.pointer, "setQua_CQuaternion_callback");
			this.register_getQua_void(this.nativeObject.pointer, "getQua_void_callback");
			this.register_setVisiable_ev_bool(this.nativeObject.pointer, "setVisiable_ev_bool_callback");
			this.register_getVisiable_void(this.nativeObject.pointer, "getVisiable_void_callback");
			this.register_attachObject_void(this.nativeObject.pointer, "attachObject_void_callback");
			this.register_detachObject_void(this.nativeObject.pointer, "detachObject_void_callback");
			this.register_getNode_void(this.nativeObject.pointer, "getNode_void_callback");
			this.register_isLoaded_void(this.nativeObject.pointer, "isLoaded_void_callback");
			this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
			this.register_load_void(this.nativeObject.pointer, "load_void_callback");
			this.register_unload_void(this.nativeObject.pointer, "unload_void_callback");
			this.register_attachToNode_CNode(this.nativeObject.pointer, "attachToNode_CNode_callback");
			this.register_detachFromNode_void(this.nativeObject.pointer, "detachFromNode_void_callback");
			this.register_attachToScene_void(this.nativeObject.pointer, "attachToScene_void_callback");
			this.register_detachFromScene_void(this.nativeObject.pointer, "detachFromScene_void_callback");
			this.register_setUserData_CFeatureUserData(this.nativeObject.pointer, "setUserData_CFeatureUserData_callback");
			this.register_setSelectable_ev_bool(this.nativeObject.pointer, "setSelectable_ev_bool_callback");
			this.register_getSelectable_void(this.nativeObject.pointer, "getSelectable_void_callback");
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
			this.register_getLayer_void(this.nativeObject.pointer, "getLayer_void_callback");
			this.register_getDataset_void(this.nativeObject.pointer, "getDataset_void_callback");
			this.register_getID_void(this.nativeObject.pointer, "getID_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setMatrix_CMatrix4(this.nativeObject.pointer, "setMatrix_CMatrix4_callback");
			this.register_getMatrix_void(this.nativeObject.pointer, "getMatrix_void_callback");
			this.register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, "setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
			this.register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, "getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
		}
	}
	
	public static EffectObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectObject obj = null;
 		if(baseObj instanceof EffectObject)
		{
			obj = (EffectObject)baseObj;
		} else {
			obj = new EffectObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectObject");
			obj.increaseCast();
		}

		return obj;
	}
}
