package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 简单专题图基类
 */
public class Isimpletheme extends com.earthview.world.spatial.theme.Itheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::ISimpleTheme", new IsimplethemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JISimpleThemeProxy", new IsimplethemeClassFactory());
	}

	protected  long getSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSymbol_void(long pNativeObject);
	/**
	 * 获取符号
	 * @param  
	 * @return 返回符号
	 */
	public com.earthview.world.spatial.display.Isymbol getSymbol()
	{
		long returnValue = getSymbol_void(this.nativeObject.pointer);
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
	native private long getSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getSymbol_NoVirtual()
	{
		long returnValue = getSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setSymbol_ISymbol_callback(long symbol)
	{
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		setSymbol(symbolParamValue);
	}

	native private void setSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置符号
	 * @param symbol 符号
	 */
	public void setSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	public Isimpletheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Isimpletheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取专题图类型
	 * @param  
	 * @return 返回专题图类型
	 */
	public com.earthview.world.spatial.theme.EVThemeType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取标题
	 * @param  
	 * @return 返回标题
	 */
	public String getCaption()
	{
		return super.getCaption_NoVirtual();
	}
	/**
	 * 设置标题
	 * @param caption 标题
	 */
	public void setCaption(String caption)
	{
		super.setCaption_NoVirtual(caption);
	}
	/**
	 * 是否为用户自定义符号
	 * @param  
	 * @return 如果是返回true；否则返回false
	 */
	public boolean useDefaultSymbol()
	{
		return super.useDefaultSymbol_NoVirtual();
	}
	/**
	 * 设置是否为用户自定义符号
	 * @param usable 是否用户自定义
	 */
	public void setUseDefaultSymbol(boolean usable)
	{
		super.setUseDefaultSymbol_NoVirtual(usable);
	}
	/**
	 * 获取自定义符号
	 * @param  
	 * @return 返回符号
	 */
	public com.earthview.world.spatial.display.Isymbol getDefaultSymbol()
	{
		return super.getDefaultSymbol_NoVirtual();
	}
	/**
	 * 设置自定义符号
	 * @param symbol 自定义符号
	 */
	public void setDefaultSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		super.setDefaultSymbol_NoVirtual(symbol);
	}
	/**
	 * 是否与指定专题图相同
	 * @param theme 指定的专题图
	 * @return 如果是返回true；否则返回false
	 */
	public boolean ev_equals(com.earthview.world.spatial.theme.Itheme theme)
	{
		return super.ev_equals_NoVirtual(theme);
	}
	/**
	 * 复制专题图
	 * @param  
	 * @return 返回复制的专题图
	 */
	public com.earthview.world.spatial.theme.Itheme ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	/**
	 * 将专题图输出到流
	 * @param stream 输出参数，流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	/**
	 * 将专题图输出为EarthView::World::Core::CXmlElement
	 * @param  
	 * @return 返回EarthView::World::Core::CXmlElement
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		return super.toXmlElement_NoVirtual();
	}
	/**
	 * 从EarthView::World::Core::CXmlElement读取专题图
	 * @param element 指定的EarthView::World::Core::CXmlElement
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		super.fromXmlElement_NoVirtual(element);
	}
	public void onBeforeQuery(com.earthview.world.spatial.geodataset.Ifeatureclass fc, com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		super.onBeforeQuery_NoVirtual(fc, filter);
	}
	public void onAfterQuery(com.earthview.world.spatial.geodataset.Ifeatureselection fs, com.earthview.world.spatial.geometry.Igeometry dst)
	{
		super.onAfterQuery_NoVirtual(fs, dst);
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_getSymbol_void(long pNativeObject, String method);
	native protected void register_setSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getCaption_void(long pNativeObject, String method);
	native protected void register_setCaption_EVString(long pNativeObject, String method);
	native protected void register_useDefaultSymbol_void(long pNativeObject, String method);
	native protected void register_setUseDefaultSymbol_ev_bool(long pNativeObject, String method);
	native protected void register_getDefaultSymbol_void(long pNativeObject, String method);
	native protected void register_setDefaultSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_ev_equals_ITheme(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_onBeforeQuery_IFeatureClass_IQueryFilter(long pNativeObject, String method);
	native protected void register_onAfterQuery_IFeatureSelection_IGeometry(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSymbol_void(this.nativeObject.pointer, "getSymbol_void_callback");
			this.register_setSymbol_ISymbol(this.nativeObject.pointer, "setSymbol_ISymbol_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getCaption_void(this.nativeObject.pointer, "getCaption_void_callback");
			this.register_setCaption_EVString(this.nativeObject.pointer, "setCaption_EVString_callback");
			this.register_useDefaultSymbol_void(this.nativeObject.pointer, "useDefaultSymbol_void_callback");
			this.register_setUseDefaultSymbol_ev_bool(this.nativeObject.pointer, "setUseDefaultSymbol_ev_bool_callback");
			this.register_getDefaultSymbol_void(this.nativeObject.pointer, "getDefaultSymbol_void_callback");
			this.register_setDefaultSymbol_ISymbol(this.nativeObject.pointer, "setDefaultSymbol_ISymbol_callback");
			this.register_ev_equals_ITheme(this.nativeObject.pointer, "ev_equals_ITheme_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_onBeforeQuery_IFeatureClass_IQueryFilter(this.nativeObject.pointer, "onBeforeQuery_IFeatureClass_IQueryFilter_callback");
			this.register_onAfterQuery_IFeatureSelection_IGeometry(this.nativeObject.pointer, "onAfterQuery_IFeatureSelection_IGeometry_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Isimpletheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Isimpletheme obj = null;
 		if(baseObj instanceof Isimpletheme)
		{
			obj = (Isimpletheme)baseObj;
		} else {
			obj = new Isimpletheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISimpleTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
