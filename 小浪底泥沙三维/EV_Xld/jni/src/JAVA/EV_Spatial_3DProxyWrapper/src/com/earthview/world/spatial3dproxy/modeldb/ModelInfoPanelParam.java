package com.earthview.world.spatial3dproxy.modeldb;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelInfoPanelParam extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam", new ModelInfoPanelParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::ModelDB::JCModelInfoPanelParamProxy", new ModelInfoPanelParamClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ModelInfoPanelParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCModelInfoPanelParamProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.modeldb.ModelInfoPanelParam".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置名称
	 * @param name 名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 获取名称
	 * @param  
	 * @return 返回名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setModelLongitude_ev_real64(long pNativeObject, double longdegree);
	/**
	 * 设置经度
	 * @param longdegree 经度
	 */
	public void setModelLongitude(double longdegree)
	{
		double longdegreeParamValue = longdegree;
		setModelLongitude_ev_real64(this.nativeObject.pointer, longdegreeParamValue);
	}
	native private double getModelLongitude_void(long pNativeObject);
	/**
	 * 获取经度
	 * @param  
	 * @return 返回经度
	 */
	public double getModelLongitude()
	{
		double returnValue = getModelLongitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setModelLatitude_ev_real64(long pNativeObject, double ladegree);
	/**
	 * 设置纬度
	 * @param ladegree 纬度
	 */
	public void setModelLatitude(double ladegree)
	{
		double ladegreeParamValue = ladegree;
		setModelLatitude_ev_real64(this.nativeObject.pointer, ladegreeParamValue);
	}
	native private double getModelLatitude_void(long pNativeObject);
	/**
	 * 获取纬度
	 * @param  
	 * @return 返回纬度
	 */
	public double getModelLatitude()
	{
		double returnValue = getModelLatitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAltitude_ev_real64(long pNativeObject, double altitude);
	/**
	 * 设置高程
	 * @param altitude 高程
	 */
	public void setAltitude(double altitude)
	{
		double altitudeParamValue = altitude;
		setAltitude_ev_real64(this.nativeObject.pointer, altitudeParamValue);
	}
	native private double getAltitude_void(long pNativeObject);
	/**
	 * 获取高程
	 * @param  
	 * @return 返回高程
	 */
	public double getAltitude()
	{
		double returnValue = getAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAltitudeMode_ev_int32(long pNativeObject, int mode);
	/**
	 * 设置高度模式
	 * @param mode 高度模式
	 */
	public void setAltitudeMode(int mode)
	{
		int modeParamValue = mode;
		setAltitudeMode_ev_int32(this.nativeObject.pointer, modeParamValue);
	}
	native private int getAltitudeMode_void(long pNativeObject);
	/**
	 * 获取高度模式
	 * @param  
	 * @return 返回高度模式
	 */
	public int getAltitudeMode()
	{
		int returnValue = getAltitudeMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAltitudeValue_ev_real64(long pNativeObject, double alvalue);
	/**
	 * 设置高度模式值
	 * @param alvalue 高度模式值
	 */
	public void setAltitudeValue(double alvalue)
	{
		double alvalueParamValue = alvalue;
		setAltitudeValue_ev_real64(this.nativeObject.pointer, alvalueParamValue);
	}
	native private double getAltitudeValue_void(long pNativeObject);
	/**
	 * 获取高度模式值
	 * @param  
	 * @return 返回高度模式值
	 */
	public double getAltitudeValue()
	{
		double returnValue = getAltitudeValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAngleX_ev_real64(long pNativeObject, double angleX);
	/**
	 * 设置X轴旋转角度
	 * @param angleX X轴旋转角度
	 */
	public void setAngleX(double angleX)
	{
		double angleXParamValue = angleX;
		setAngleX_ev_real64(this.nativeObject.pointer, angleXParamValue);
	}
	native private double getAngleX_void(long pNativeObject);
	/**
	 * 获取X轴旋转角度
	 * @return 返回X轴旋转角度
	 */
	public double getAngleX()
	{
		double returnValue = getAngleX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAngleY_ev_real64(long pNativeObject, double angleY);
	/**
	 * 设置Y轴旋转角度
	 * @param angleY Y轴旋转角度
	 */
	public void setAngleY(double angleY)
	{
		double angleYParamValue = angleY;
		setAngleY_ev_real64(this.nativeObject.pointer, angleYParamValue);
	}
	native private double getAngleY_void(long pNativeObject);
	/**
	 * 获取Y轴旋转角度
	 * @param  
	 * @return 返回Y轴旋转角度
	 */
	public double getAngleY()
	{
		double returnValue = getAngleY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAngleZ_ev_real64(long pNativeObject, double angleZ);
	/**
	 * 设置Z轴旋转角度
	 * @param angleZ Z轴旋转角度
	 */
	public void setAngleZ(double angleZ)
	{
		double angleZParamValue = angleZ;
		setAngleZ_ev_real64(this.nativeObject.pointer, angleZParamValue);
	}
	native private double getAngleZ_void(long pNativeObject);
	/**
	 * 获取Z轴旋转角度
	 * @param  
	 * @return 返回Z轴旋转角度
	 */
	public double getAngleZ()
	{
		double returnValue = getAngleZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setZoomX_ev_real64(long pNativeObject, double zoomX);
	/**
	 * 设置向X轴缩放
	 * @param zoomX 向X轴缩放比例
	 */
	public void setZoomX(double zoomX)
	{
		double zoomXParamValue = zoomX;
		setZoomX_ev_real64(this.nativeObject.pointer, zoomXParamValue);
	}
	native private double getZoomX_void(long pNativeObject);
	/**
	 * 获取向X轴缩放
	 * @return 返回向X轴缩放比例
	 */
	public double getZoomX()
	{
		double returnValue = getZoomX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setZoomY_ev_real64(long pNativeObject, double zoomY);
	/**
	 * 设置向X轴缩放
	 * @param zoomY 向Y轴缩放比例
	 */
	public void setZoomY(double zoomY)
	{
		double zoomYParamValue = zoomY;
		setZoomY_ev_real64(this.nativeObject.pointer, zoomYParamValue);
	}
	native private double getZoomY_void(long pNativeObject);
	/**
	 * 获取向Y轴缩放
	 * @return 返回向Y轴缩放比例
	 */
	public double getZoomY()
	{
		double returnValue = getZoomY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setZoomZ_ev_real64(long pNativeObject, double zoomZ);
	/**
	 * 设置向Z轴缩放
	 * @param zoomZ 向Z轴缩放比例
	 */
	public void setZoomZ(double zoomZ)
	{
		double zoomZParamValue = zoomZ;
		setZoomZ_ev_real64(this.nativeObject.pointer, zoomZParamValue);
	}
	native private double getZoomZ_void(long pNativeObject);
	/**
	 * 获取向Z轴缩放
	 * @return 返回向Z轴缩放比例
	 */
	public double getZoomZ()
	{
		double returnValue = getZoomZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setID_ev_uint32(long pNativeObject, long id);
	/**
	 * 设置id
	 * @param id ID
	 */
	public void setID(long id)
	{
		long idParamValue = id;
		setID_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private long getID_void(long pNativeObject);
	/**
	 * 获取id
	 * @return 返回ID
	 */
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setComponentID_EVString(long pNativeObject, String id);
	/**
	 * 设置选中部件id(名称+id)
	 * @param id ID
	 */
	public void setComponentID(String id)
	{
		String idParamValue = id;
		setComponentID_EVString(this.nativeObject.pointer, idParamValue);
	}
	native private String getComponentID_void(long pNativeObject);
	/**
	 * 获取选中部件id(名称+id)
	 * @return 返回ID
	 */
	public String getComponentID()
	{
		String returnValue = getComponentID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLayer_ILayer(long pNativeObject, long ref_layer);
	/**
	 * 设置图层对象
	 * @param ref_layer 图层指针
	 */
	public void setLayer(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		setLayer_ILayer(this.nativeObject.pointer, ref_layerParamValue);
	}
	native private long getLayer_void(long pNativeObject);
	/**
	 * 获取图层对象
	 * @return 返回图层指针
	 */
	public com.earthview.world.spatial.atlas.Ilayer getLayer()
	{
		long returnValue = getLayer_void(this.nativeObject.pointer);
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
	public ModelInfoPanelParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelInfoPanelParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean setParameter(String name, String value)
	{
		return super.setParameter_NoVirtual(name, value);
	}
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		return super.setParameter_NoVirtual(name, readOnly, enable);
	}
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		super.setParameterList_NoVirtual(paramList);
	}
	public String getParameter(String name)
	{
		return super.getParameter_NoVirtual(name);
	}
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		super.copyParametersTo_NoVirtual(dest);
	}
	
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static ModelInfoPanelParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelInfoPanelParam obj = null;
 		if(baseObj instanceof ModelInfoPanelParam)
		{
			obj = (ModelInfoPanelParam)baseObj;
		} else {
			obj = new ModelInfoPanelParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelInfoPanelParam");
			obj.increaseCast();
		}

		return obj;
	}
}
