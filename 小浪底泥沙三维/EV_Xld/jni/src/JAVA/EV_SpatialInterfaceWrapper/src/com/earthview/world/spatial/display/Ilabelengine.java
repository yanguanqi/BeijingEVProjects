package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ilabelengine extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::ILabelEngine", new IlabelengineClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JILabelEngineProxy", new IlabelengineClassFactory());
	}

	protected  void addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_callback(int classID, long labelProperty, long geo, long label, int featureID)
	{
		int classIDParamValue = classID;
		com.earthview.world.spatial.display.Ilabelproperty labelPropertyParamValue = (labelProperty == 0L ? null : new com.earthview.world.spatial.display.Ilabelproperty(CreatedWhenConstruct.CWC_NotToCreate));
		if(labelPropertyParamValue != null)
		{
		labelPropertyParamValue.setDelegate(true);
		labelPropertyParamValue.setInstancePointer(new InstancePointer(labelProperty));
		IClassFactory labelPropertyParamValueClassFactory = GlobalClassFactoryMap.get(labelPropertyParamValue.getCppInstanceTypeName());
		if (labelPropertyParamValueClassFactory != null)
		{
			labelPropertyParamValue.setDelegate(true);
			labelPropertyParamValue = (com.earthview.world.spatial.display.Ilabelproperty)labelPropertyParamValueClassFactory.create();
			labelPropertyParamValue.setDelegate(true);
			labelPropertyParamValue.setInstancePointer(new InstancePointer(labelProperty));
		}
		}
		com.earthview.world.spatial.geometry.Igeometry geoParamValue = (geo == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geoParamValue != null)
		{
		geoParamValue.setDelegate(true);
		geoParamValue.setInstancePointer(new InstancePointer(geo));
		IClassFactory geoParamValueClassFactory = GlobalClassFactoryMap.get(geoParamValue.getCppInstanceTypeName());
		if (geoParamValueClassFactory != null)
		{
			geoParamValue.setDelegate(true);
			geoParamValue = (com.earthview.world.spatial.geometry.Igeometry)geoParamValueClassFactory.create();
			geoParamValue.setDelegate(true);
			geoParamValue.setInstancePointer(new InstancePointer(geo));
		}
		}
		StringPointer labelParamValue = new StringPointer(new InstancePointer(label));
		int featureIDParamValue = featureID;
		addFeature(classIDParamValue, labelPropertyParamValue, geoParamValue, labelParamValue, featureIDParamValue);
	}

	native private void addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32(long pNativeObject, int classID, long labelProperty, long geo, long label, int featureID);
	/**
	 * 添加要素
	 */
	public void addFeature(int classID, com.earthview.world.spatial.display.Ilabelproperty labelProperty, com.earthview.world.spatial.geometry.Igeometry geo, StringPointer label, int featureID)
	{
		int classIDParamValue = classID;
		long labelPropertyParamValue = (labelProperty == null ? 0L : labelProperty.nativeObject.pointer);
		long geoParamValue = (geo == null ? 0L : geo.nativeObject.pointer);
		long labelParamValue = label.nativeObject.pointer;
		int featureIDParamValue = featureID;
		addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32(this.nativeObject.pointer, classIDParamValue, labelPropertyParamValue, geoParamValue, labelParamValue, featureIDParamValue);
	}
	native private void addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_NoVirtual(long pNativeObject, int classID, long labelProperty, long geo, long label, int featureID);
	protected void addFeature_NoVirtual(int classID, com.earthview.world.spatial.display.Ilabelproperty labelProperty, com.earthview.world.spatial.geometry.Igeometry geo, StringPointer label, int featureID)
	{
		int classIDParamValue = classID;
		long labelPropertyParamValue = (labelProperty == null ? 0L : labelProperty.nativeObject.pointer);
		long geoParamValue = (geo == null ? 0L : geo.nativeObject.pointer);
		long labelParamValue = label.nativeObject.pointer;
		int featureIDParamValue = featureID;
		addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_NoVirtual(this.nativeObject.pointer, classIDParamValue, labelPropertyParamValue, geoParamValue, labelParamValue, featureIDParamValue);
	}

	protected  void addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_callback(int classID, long labelProperty, long geo, long label_numerator, long label_denominator, int featureID)
	{
		int classIDParamValue = classID;
		com.earthview.world.spatial.display.Ilabelproperty labelPropertyParamValue = (labelProperty == 0L ? null : new com.earthview.world.spatial.display.Ilabelproperty(CreatedWhenConstruct.CWC_NotToCreate));
		if(labelPropertyParamValue != null)
		{
		labelPropertyParamValue.setDelegate(true);
		labelPropertyParamValue.setInstancePointer(new InstancePointer(labelProperty));
		IClassFactory labelPropertyParamValueClassFactory = GlobalClassFactoryMap.get(labelPropertyParamValue.getCppInstanceTypeName());
		if (labelPropertyParamValueClassFactory != null)
		{
			labelPropertyParamValue.setDelegate(true);
			labelPropertyParamValue = (com.earthview.world.spatial.display.Ilabelproperty)labelPropertyParamValueClassFactory.create();
			labelPropertyParamValue.setDelegate(true);
			labelPropertyParamValue.setInstancePointer(new InstancePointer(labelProperty));
		}
		}
		com.earthview.world.spatial.geometry.Igeometry geoParamValue = (geo == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geoParamValue != null)
		{
		geoParamValue.setDelegate(true);
		geoParamValue.setInstancePointer(new InstancePointer(geo));
		IClassFactory geoParamValueClassFactory = GlobalClassFactoryMap.get(geoParamValue.getCppInstanceTypeName());
		if (geoParamValueClassFactory != null)
		{
			geoParamValue.setDelegate(true);
			geoParamValue = (com.earthview.world.spatial.geometry.Igeometry)geoParamValueClassFactory.create();
			geoParamValue.setDelegate(true);
			geoParamValue.setInstancePointer(new InstancePointer(geo));
		}
		}
		StringPointer label_numeratorParamValue = new StringPointer(new InstancePointer(label_numerator));
		StringPointer label_denominatorParamValue = new StringPointer(new InstancePointer(label_denominator));
		int featureIDParamValue = featureID;
		addFeature(classIDParamValue, labelPropertyParamValue, geoParamValue, label_numeratorParamValue, label_denominatorParamValue, featureIDParamValue);
	}

	native private void addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32(long pNativeObject, int classID, long labelProperty, long geo, long label_numerator, long label_denominator, int featureID);
	/**
	 * 添加要素(分数注记)
	 */
	public void addFeature(int classID, com.earthview.world.spatial.display.Ilabelproperty labelProperty, com.earthview.world.spatial.geometry.Igeometry geo, StringPointer label_numerator, StringPointer label_denominator, int featureID)
	{
		int classIDParamValue = classID;
		long labelPropertyParamValue = (labelProperty == null ? 0L : labelProperty.nativeObject.pointer);
		long geoParamValue = (geo == null ? 0L : geo.nativeObject.pointer);
		long label_numeratorParamValue = label_numerator.nativeObject.pointer;
		long label_denominatorParamValue = label_denominator.nativeObject.pointer;
		int featureIDParamValue = featureID;
		addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32(this.nativeObject.pointer, classIDParamValue, labelPropertyParamValue, geoParamValue, label_numeratorParamValue, label_denominatorParamValue, featureIDParamValue);
	}
	native private void addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_NoVirtual(long pNativeObject, int classID, long labelProperty, long geo, long label_numerator, long label_denominator, int featureID);
	protected void addFeature_NoVirtual(int classID, com.earthview.world.spatial.display.Ilabelproperty labelProperty, com.earthview.world.spatial.geometry.Igeometry geo, StringPointer label_numerator, StringPointer label_denominator, int featureID)
	{
		int classIDParamValue = classID;
		long labelPropertyParamValue = (labelProperty == null ? 0L : labelProperty.nativeObject.pointer);
		long geoParamValue = (geo == null ? 0L : geo.nativeObject.pointer);
		long label_numeratorParamValue = label_numerator.nativeObject.pointer;
		long label_denominatorParamValue = label_denominator.nativeObject.pointer;
		int featureIDParamValue = featureID;
		addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_NoVirtual(this.nativeObject.pointer, classIDParamValue, labelPropertyParamValue, geoParamValue, label_numeratorParamValue, label_denominatorParamValue, featureIDParamValue);
	}

	protected  long getLabelElements_void_callback()
	{
		com.earthview.world.spatial.display.LabelElements returnValue = getLabelElements();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLabelElements_void(long pNativeObject);
	/**
	 * 获取标注元素集
	 */
	public com.earthview.world.spatial.display.LabelElements getLabelElements()
	{
		long returnValue = getLabelElements_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.LabelElements __returnValue = new com.earthview.world.spatial.display.LabelElements(CreatedWhenConstruct.CWC_NotToCreate, "CLabelElements");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.LabelElements)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLabelElements");
		}
		return __returnValue;
	}
	native private long getLabelElements_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.LabelElements getLabelElements_NoVirtual()
	{
		long returnValue = getLabelElements_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.LabelElements __returnValue = new com.earthview.world.spatial.display.LabelElements(CreatedWhenConstruct.CWC_NotToCreate, "CLabelElements");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.LabelElements)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLabelElements");
		}
		return __returnValue;
	}

	protected  void initialize_ISpatialDisplay_IEnvelope_callback(long display, long extent)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		com.earthview.world.spatial.geometry.Ienvelope extentParamValue = (extent == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(extentParamValue != null)
		{
		extentParamValue.setDelegate(true);
		extentParamValue.setInstancePointer(new InstancePointer(extent));
		IClassFactory extentParamValueClassFactory = GlobalClassFactoryMap.get(extentParamValue.getCppInstanceTypeName());
		if (extentParamValueClassFactory != null)
		{
			extentParamValue.setDelegate(true);
			extentParamValue = (com.earthview.world.spatial.geometry.Ienvelope)extentParamValueClassFactory.create();
			extentParamValue.setDelegate(true);
			extentParamValue.setInstancePointer(new InstancePointer(extent));
		}
		}
		initialize(displayParamValue, extentParamValue);
	}

	native private void initialize_ISpatialDisplay_IEnvelope(long pNativeObject, long display, long extent);
	/**
	 * 初始化
	 */
	public void initialize(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.geometry.Ienvelope extent)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long extentParamValue = (extent == null ? 0L : extent.nativeObject.pointer);
		initialize_ISpatialDisplay_IEnvelope(this.nativeObject.pointer, displayParamValue, extentParamValue);
	}
	native private void initialize_ISpatialDisplay_IEnvelope_NoVirtual(long pNativeObject, long display, long extent);
	protected void initialize_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.geometry.Ienvelope extent)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long extentParamValue = (extent == null ? 0L : extent.nativeObject.pointer);
		initialize_ISpatialDisplay_IEnvelope_NoVirtual(this.nativeObject.pointer, displayParamValue, extentParamValue);
	}

	protected  boolean isInitialized_void_callback()
	{
		boolean returnValue = isInitialized();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isInitialized_void(long pNativeObject);
	/**
	 * 是否初始化
	 */
	public boolean isInitialized()
	{
		boolean returnValue = isInitialized_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isInitialized_void_NoVirtual(long pNativeObject);
	protected boolean isInitialized_NoVirtual()
	{
		boolean returnValue = isInitialized_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void releaseResources_void_callback()
	{
		releaseResources();
	}

	native private void releaseResources_void(long pNativeObject);
	/**
	 * 释放资源
	 */
	public void releaseResources()
	{
		releaseResources_void(this.nativeObject.pointer);
	}
	native private void releaseResources_void_NoVirtual(long pNativeObject);
	protected void releaseResources_NoVirtual()
	{
		releaseResources_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  String getEngineName_void_callback()
	{
		String returnValue = getEngineName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getEngineName_void(long pNativeObject);
	/**
	 * 获取引擎名
	 */
	public String getEngineName()
	{
		String returnValue = getEngineName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getEngineName_void_NoVirtual(long pNativeObject);
	protected String getEngineName_NoVirtual()
	{
		String returnValue = getEngineName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void addBarriers_IGeometry_callback(long geo)
	{
		com.earthview.world.spatial.geometry.Igeometry geoParamValue = (geo == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geoParamValue != null)
		{
		geoParamValue.setDelegate(true);
		geoParamValue.setInstancePointer(new InstancePointer(geo));
		IClassFactory geoParamValueClassFactory = GlobalClassFactoryMap.get(geoParamValue.getCppInstanceTypeName());
		if (geoParamValueClassFactory != null)
		{
			geoParamValue.setDelegate(true);
			geoParamValue = (com.earthview.world.spatial.geometry.Igeometry)geoParamValueClassFactory.create();
			geoParamValue.setDelegate(true);
			geoParamValue.setInstancePointer(new InstancePointer(geo));
		}
		}
		addBarriers(geoParamValue);
	}

	native private void addBarriers_IGeometry(long pNativeObject, long geo);
	/**
	 * 添加障碍区域
	 */
	public void addBarriers(com.earthview.world.spatial.geometry.Igeometry geo)
	{
		long geoParamValue = (geo == null ? 0L : geo.nativeObject.pointer);
		addBarriers_IGeometry(this.nativeObject.pointer, geoParamValue);
	}
	native private void addBarriers_IGeometry_NoVirtual(long pNativeObject, long geo);
	protected void addBarriers_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geo)
	{
		long geoParamValue = (geo == null ? 0L : geo.nativeObject.pointer);
		addBarriers_IGeometry_NoVirtual(this.nativeObject.pointer, geoParamValue);
	}

	public Ilabelengine(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ilabelengine(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32(long pNativeObject, String method);
	native protected void register_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32(long pNativeObject, String method);
	native protected void register_getLabelElements_void(long pNativeObject, String method);
	native protected void register_initialize_ISpatialDisplay_IEnvelope(long pNativeObject, String method);
	native protected void register_isInitialized_void(long pNativeObject, String method);
	native protected void register_releaseResources_void(long pNativeObject, String method);
	native protected void register_getEngineName_void(long pNativeObject, String method);
	native protected void register_addBarriers_IGeometry(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32(this.nativeObject.pointer, "addFeature_ev_int32_ILabelProperty_IGeometry_EVString_ev_int32_callback");
			this.register_addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32(this.nativeObject.pointer, "addFeature_ev_int32_ILabelProperty_IGeometry_EVString_EVString_ev_int32_callback");
			this.register_getLabelElements_void(this.nativeObject.pointer, "getLabelElements_void_callback");
			this.register_initialize_ISpatialDisplay_IEnvelope(this.nativeObject.pointer, "initialize_ISpatialDisplay_IEnvelope_callback");
			this.register_isInitialized_void(this.nativeObject.pointer, "isInitialized_void_callback");
			this.register_releaseResources_void(this.nativeObject.pointer, "releaseResources_void_callback");
			this.register_getEngineName_void(this.nativeObject.pointer, "getEngineName_void_callback");
			this.register_addBarriers_IGeometry(this.nativeObject.pointer, "addBarriers_IGeometry_callback");
		}
	}
	
	public static Ilabelengine fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ilabelengine obj = null;
 		if(baseObj instanceof Ilabelengine)
		{
			obj = (Ilabelengine)baseObj;
		} else {
			obj = new Ilabelengine(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ILabelEngine");
			obj.increaseCast();
		}

		return obj;
	}
}
