package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维图层注记属性类管理三维图层注记属性
 */
public class Layer3DLabelProperty extends com.earthview.world.spatial.display.Ilabelproperty {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty", new Layer3DLabelPropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCLayer3DLabelPropertyProxy", new Layer3DLabelPropertyClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Layer3DLabelProperty() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLayer3DLabelPropertyProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.Layer3DLabelProperty".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 图层注记是否可见
	 * @param  
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisible_void_NoVirtual(long pNativeObject);
	protected boolean isVisible_NoVirtual()
	{
		boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean bVisible);
	/**
	 * 设置图层注记是否可见
	 * @param bVisible 是否可见
	 */
	public void setVisible(boolean bVisible)
	{
		boolean bVisibleParamValue = bVisible;
		setVisible_ev_bool(this.nativeObject.pointer, bVisibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean bVisible);
	protected void setVisible_NoVirtual(boolean bVisible)
	{
		boolean bVisibleParamValue = bVisible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, bVisibleParamValue);
	}

	native private void setTextSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置图层注记风格
	 * @param pSymbol 注记风格
	 */
	public void setTextSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setTextSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private void setTextSymbol_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected void setTextSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setTextSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
	}

	native private long getTextSymbol_void(long pNativeObject);
	/**
	 * 返回图层注记风格
	 * @param  
	 * @return 注记风格
	 */
	public com.earthview.world.spatial.display.Isymbol getTextSymbol()
	{
		long returnValue = getTextSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private long getTextSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getTextSymbol_NoVirtual()
	{
		long returnValue = getTextSymbol_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}

	native private void setField_EVString(long pNativeObject, String field);
	/**
	 * 设置图层注记字段
	 * @param field 注记字段
	 */
	public void setField(String field)
	{
		String fieldParamValue = field;
		setField_EVString(this.nativeObject.pointer, fieldParamValue);
	}
	native private void setField_EVString_NoVirtual(long pNativeObject, String field);
	protected void setField_NoVirtual(String field)
	{
		String fieldParamValue = field;
		setField_EVString_NoVirtual(this.nativeObject.pointer, fieldParamValue);
	}

	native private String getField_void(long pNativeObject);
	/**
	 * 返回图层注记字段
	 * @param  
	 * @return 注记字段
	 */
	public String getField()
	{
		String returnValue = getField_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getField_void_NoVirtual(long pNativeObject);
	protected String getField_NoVirtual()
	{
		String returnValue = getField_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setLineLabel_ev_bool(long pNativeObject, boolean bLineLabel);
	/**
	 * 设置是否启用沿线注记，针对线图层
	 * @param bLineLabel 是否沿线注记
	 */
	public void setLineLabel(boolean bLineLabel)
	{
		boolean bLineLabelParamValue = bLineLabel;
		setLineLabel_ev_bool(this.nativeObject.pointer, bLineLabelParamValue);
	}
	native private boolean getLineLabel_void(long pNativeObject);
	/**
	 * 返回是否沿线注记，针对线图层
	 * @param  
	 * @return 是否沿线注记
	 */
	public boolean getLineLabel()
	{
		boolean returnValue = getLineLabel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLabelShadowEnabled_ev_bool(long pNativeObject, boolean hasShadow);
	/**
	 * 设置注记是否开启阴影
	 * @param hasShadow 是否启用阴影
	 */
	public void setLabelShadowEnabled(boolean hasShadow)
	{
		boolean hasShadowParamValue = hasShadow;
		setLabelShadowEnabled_ev_bool(this.nativeObject.pointer, hasShadowParamValue);
	}
	native private boolean getLabelShadowEnabled_void(long pNativeObject);
	/**
	 * 获取注记阴影是否开启
	 * @return 阴影是否开启
	 */
	public boolean getLabelShadowEnabled()
	{
		boolean returnValue = getLabelShadowEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAntiAliasEnabled_ev_bool(long pNativeObject, boolean isAntiAlias);
	/**
	 * 反走样
	 * @param isBold 是否启用反走样
	 */
	public void setAntiAliasEnabled(boolean isAntiAlias)
	{
		boolean isAntiAliasParamValue = isAntiAlias;
		setAntiAliasEnabled_ev_bool(this.nativeObject.pointer, isAntiAliasParamValue);
	}
	native private boolean getAntiAliasEnabled_void(long pNativeObject);
	/**
	 * 获取是否反走样
	 * @param  
	 */
	public boolean getAntiAliasEnabled()
	{
		boolean returnValue = getAntiAliasEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOverlapCheckEnabled_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否进行字体压盖测试,目前主要是对贴地沿线注记有效
	 * @param enable 是否进行字体压盖测试
	 */
	public void setOverlapCheckEnabled(boolean enable)
	{
		boolean enableParamValue = enable;
		setOverlapCheckEnabled_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getOverlapCheckEnabled_void(long pNativeObject);
	/**
	 * 获取是否进行字体压盖测试
	 * @param  
	 * @return 是否进行字体压盖测试
	 */
	public boolean getOverlapCheckEnabled()
	{
		boolean returnValue = getOverlapCheckEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * clone
	 * @param  
	 */
	public com.earthview.world.spatial.display.Ilabelproperty ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ilabelproperty __returnValue = new com.earthview.world.spatial.display.Ilabelproperty(CreatedWhenConstruct.CWC_NotToCreate, "ILabelProperty");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ilabelproperty)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILabelProperty");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Ilabelproperty ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ilabelproperty __returnValue = new com.earthview.world.spatial.display.Ilabelproperty(CreatedWhenConstruct.CWC_NotToCreate, "ILabelProperty");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ilabelproperty)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILabelProperty");
		}
		return __returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml恢复图层参数
	 * @param element xml
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
	 * 序列化成xml文本
	 * @param  
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

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 序列化成流
	 * @param stream 流
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

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从流恢复图层参数
	 * @param stream 流
	 */
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public Layer3DLabelProperty(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Layer3DLabelProperty(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 是否按比例尺显示
	 * @param  
	 */
	public boolean ignoreScale()
	{
		return super.ignoreScale_NoVirtual();
	}
	/**
	 * 设置是否按比例尺显示
	 * @param bIgnore 是否忽略
	 */
	public void setIgnoreScale(boolean bIgnore)
	{
		super.setIgnoreScale_NoVirtual(bIgnore);
	}
	/**
	 * 获取最小比例尺
	 * @param  
	 */
	public double getMinScale()
	{
		return super.getMinScale_NoVirtual();
	}
	/**
	 * 设置最小比例尺
	 * @param dMinScale 最小比例尺
	 */
	public void setMinScale(double dMinScale)
	{
		super.setMinScale_NoVirtual(dMinScale);
	}
	/**
	 * 获取最大比例尺
	 * @param  
	 */
	public double getMaxScale()
	{
		return super.getMaxScale_NoVirtual();
	}
	/**
	 * 设置最大比例尺
	 * @param dMaxScale 最大比例尺
	 */
	public void setMaxScale(double dMaxScale)
	{
		super.setMaxScale_NoVirtual(dMaxScale);
	}
	///点类型的函数
	public boolean isOnTopOfFeature()
	{
		return super.isOnTopOfFeature_NoVirtual();
	}
	public void setOnTopOfFeature(boolean bOnTop)
	{
		super.setOnTopOfFeature_NoVirtual(bOnTop);
	}
	///线类型的函数
	public boolean isParallelToLineAlways()
	{
		return super.isParallelToLineAlways_NoVirtual();
	}
	public void setParallelToLineAlways(boolean bParallel)
	{
		super.setParallelToLineAlways_NoVirtual(bParallel);
	}
	///面类型的函数
	public boolean isHorizontalAlways()
	{
		return super.isHorizontalAlways_NoVirtual();
	}
	public void setHorizontalAlways(boolean bHorizontal)
	{
		super.setHorizontalAlways_NoVirtual(bHorizontal);
	}
	public boolean isInPolygon()
	{
		return super.isInPolygon_NoVirtual();
	}
	public void setInPolygon(boolean bIn)
	{
		super.setInPolygon_NoVirtual(bIn);
	}
	///线和面的共同属性
	public com.earthview.world.spatial.display.EVFontAndAxisRelationType getRelationOfFontAndAxis()
	{
		return super.getRelationOfFontAndAxis_NoVirtual();
	}
	public void setRelationOfFontAndAxis(com.earthview.world.spatial.display.EVFontAndAxisRelationType type)
	{
		super.setRelationOfFontAndAxis_NoVirtual(type);
	}
	///分数注记
	public void setFractionLabel(boolean fraction)
	{
		super.setFractionLabel_NoVirtual(fraction);
	}
	public boolean getIsFractionLabel()
	{
		return super.getIsFractionLabel_NoVirtual();
	}
	public void setNumeratorField(String field)
	{
		super.setNumeratorField_NoVirtual(field);
	}
	public String getNumeratorField()
	{
		return super.getNumeratorField_NoVirtual();
	}
	
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_ignoreScale_void(long pNativeObject, String method);
	native protected void register_setIgnoreScale_ev_bool(long pNativeObject, String method);
	native protected void register_getMinScale_void(long pNativeObject, String method);
	native protected void register_setMinScale_ev_real64(long pNativeObject, String method);
	native protected void register_getMaxScale_void(long pNativeObject, String method);
	native protected void register_setMaxScale_ev_real64(long pNativeObject, String method);
	native protected void register_isOnTopOfFeature_void(long pNativeObject, String method);
	native protected void register_setOnTopOfFeature_ev_bool(long pNativeObject, String method);
	native protected void register_isParallelToLineAlways_void(long pNativeObject, String method);
	native protected void register_setParallelToLineAlways_ev_bool(long pNativeObject, String method);
	native protected void register_isHorizontalAlways_void(long pNativeObject, String method);
	native protected void register_setHorizontalAlways_ev_bool(long pNativeObject, String method);
	native protected void register_isInPolygon_void(long pNativeObject, String method);
	native protected void register_setInPolygon_ev_bool(long pNativeObject, String method);
	native protected void register_getRelationOfFontAndAxis_void(long pNativeObject, String method);
	native protected void register_setRelationOfFontAndAxis_EVFontAndAxisRelationType(long pNativeObject, String method);
	native protected void register_setTextSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getTextSymbol_void(long pNativeObject, String method);
	native protected void register_setField_EVString(long pNativeObject, String method);
	native protected void register_getField_void(long pNativeObject, String method);
	native protected void register_setFractionLabel_ev_bool(long pNativeObject, String method);
	native protected void register_getIsFractionLabel_void(long pNativeObject, String method);
	native protected void register_setNumeratorField_EVString(long pNativeObject, String method);
	native protected void register_getNumeratorField_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_ignoreScale_void(this.nativeObject.pointer, "ignoreScale_void_callback");
			this.register_setIgnoreScale_ev_bool(this.nativeObject.pointer, "setIgnoreScale_ev_bool_callback");
			this.register_getMinScale_void(this.nativeObject.pointer, "getMinScale_void_callback");
			this.register_setMinScale_ev_real64(this.nativeObject.pointer, "setMinScale_ev_real64_callback");
			this.register_getMaxScale_void(this.nativeObject.pointer, "getMaxScale_void_callback");
			this.register_setMaxScale_ev_real64(this.nativeObject.pointer, "setMaxScale_ev_real64_callback");
			this.register_isOnTopOfFeature_void(this.nativeObject.pointer, "isOnTopOfFeature_void_callback");
			this.register_setOnTopOfFeature_ev_bool(this.nativeObject.pointer, "setOnTopOfFeature_ev_bool_callback");
			this.register_isParallelToLineAlways_void(this.nativeObject.pointer, "isParallelToLineAlways_void_callback");
			this.register_setParallelToLineAlways_ev_bool(this.nativeObject.pointer, "setParallelToLineAlways_ev_bool_callback");
			this.register_isHorizontalAlways_void(this.nativeObject.pointer, "isHorizontalAlways_void_callback");
			this.register_setHorizontalAlways_ev_bool(this.nativeObject.pointer, "setHorizontalAlways_ev_bool_callback");
			this.register_isInPolygon_void(this.nativeObject.pointer, "isInPolygon_void_callback");
			this.register_setInPolygon_ev_bool(this.nativeObject.pointer, "setInPolygon_ev_bool_callback");
			this.register_getRelationOfFontAndAxis_void(this.nativeObject.pointer, "getRelationOfFontAndAxis_void_callback");
			this.register_setRelationOfFontAndAxis_EVFontAndAxisRelationType(this.nativeObject.pointer, "setRelationOfFontAndAxis_EVFontAndAxisRelationType_callback");
			this.register_setTextSymbol_ISymbol(this.nativeObject.pointer, "setTextSymbol_ISymbol_callback");
			this.register_getTextSymbol_void(this.nativeObject.pointer, "getTextSymbol_void_callback");
			this.register_setField_EVString(this.nativeObject.pointer, "setField_EVString_callback");
			this.register_getField_void(this.nativeObject.pointer, "getField_void_callback");
			this.register_setFractionLabel_ev_bool(this.nativeObject.pointer, "setFractionLabel_ev_bool_callback");
			this.register_getIsFractionLabel_void(this.nativeObject.pointer, "getIsFractionLabel_void_callback");
			this.register_setNumeratorField_EVString(this.nativeObject.pointer, "setNumeratorField_EVString_callback");
			this.register_getNumeratorField_void(this.nativeObject.pointer, "getNumeratorField_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Layer3DLabelProperty fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Layer3DLabelProperty obj = null;
 		if(baseObj instanceof Layer3DLabelProperty)
		{
			obj = (Layer3DLabelProperty)baseObj;
		} else {
			obj = new Layer3DLabelProperty(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayer3DLabelProperty");
			obj.increaseCast();
		}

		return obj;
	}
}
