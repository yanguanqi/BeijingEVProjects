package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Evwmsvectortheme extends com.earthview.world.spatial.theme.Itheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CEVWMSVectorTheme", new EvwmsvectorthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCEVWMSVectorThemeProxy", new EvwmsvectorthemeClassFactory());
	}

	public enum EVWMSRequestType implements INativeEnum<EVWMSRequestType> {
		EV_RT_RequestByMap(EVWMSRequestTypeHelper.ENUM_VALUES[0]),
		EV_RT_RequestByTile(EVWMSRequestTypeHelper.ENUM_VALUES[1]);
		private int value;
		EVWMSRequestType(int i) {
			this.value = i;
		}
		public EVWMSRequestType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVWMSRequestType toEnum(int retval) {
			if(retval == EV_RT_RequestByMap.value){
				return EV_RT_RequestByMap;
			}
			else if(retval == EV_RT_RequestByTile.value){
				return EV_RT_RequestByTile;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVWMSRequestTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 */
	public Evwmsvectortheme() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEVWMSVectorThemeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.theme.Evwmsvectortheme".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setBackColor_ev_int32_ev_int32_ev_int32_ev_bool(long pNativeObject, int r, int g, int b, boolean trans);
	/**
	 * 设置图层背景色
	 * @param r r值
	 * @param g g值
	 * @param b b值
	 * @param trans 是否透明
	 */
	public void setBackColor(int r, int g, int b, boolean trans)
	{
		int rParamValue = r;
		int gParamValue = g;
		int bParamValue = b;
		boolean transParamValue = trans;
		setBackColor_ev_int32_ev_int32_ev_int32_ev_bool(this.nativeObject.pointer, rParamValue, gParamValue, bParamValue, transParamValue);
	}
	native private void getBackColor_ev_int32_ev_int32_ev_int32_ev_bool(long pNativeObject, long r, long g, long b, long trans);
	/**
	 * 获取图层背景色
	 * @param r r值
	 * @param g g值
	 * @param b b值
	 * @param trans 是否透明
	 */
	public void getBackColor(IntegerPointer r, IntegerPointer g, IntegerPointer b, BooleanPointer trans)
	{
		long rParamValue = r.nativeObject.pointer;
		long gParamValue = g.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long transParamValue = trans.nativeObject.pointer;
		getBackColor_ev_int32_ev_int32_ev_int32_ev_bool(this.nativeObject.pointer, rParamValue, gParamValue, bParamValue, transParamValue);
	}
	native private void setRequestStyle_EVString(long pNativeObject, String style);
	/**
	 * 设置请求样式
	 * @param style 请求样式
	 */
	public void setRequestStyle(String style)
	{
		String styleParamValue = style;
		setRequestStyle_EVString(this.nativeObject.pointer, styleParamValue);
	}
	native private String getRequestStyle_void(long pNativeObject);
	/**
	 * 获取请求样式
	 */
	public String getRequestStyle()
	{
		String returnValue = getRequestStyle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRequestFormat_EVString(long pNativeObject, String format);
	/**
	 * 设置请求格式
	 * @param style 请求格式
	 */
	public void setRequestFormat(String format)
	{
		String formatParamValue = format;
		setRequestFormat_EVString(this.nativeObject.pointer, formatParamValue);
	}
	native private String getRequestFormat_void(long pNativeObject);
	/**
	 * 获取请求格式
	 */
	public String getRequestFormat()
	{
		String returnValue = getRequestFormat_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.spatial.theme.Itheme ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.Itheme ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}

	native private boolean ev_equals_ITheme(long pNativeObject, long theme);
	/**
	 * 是否与指定专题图相同
	 * @param theme 指定的专题图
	 * @return 如果是返回true；否则返回false
	 */
	public boolean ev_equals(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		boolean returnValue = ev_equals_ITheme(this.nativeObject.pointer, themeParamValue);
		return returnValue;
	}
	native private boolean ev_equals_ITheme_NoVirtual(long pNativeObject, long theme);
	protected boolean ev_equals_NoVirtual(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		boolean returnValue = ev_equals_ITheme_NoVirtual(this.nativeObject.pointer, themeParamValue);
		return returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从EarthView::World::Core::CXmlElement读取专题图
	 * @param element 指定的EarthView::World::Core::CXmlElement
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
	 * 将专题图输出为EarthView::World::Core::CXmlElement
	 * @param  
	 * @return 返回EarthView::World::Core::CXmlElement
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
	 * 从流序列化专题图
	 * @param stream 输出参数，流
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
	 * 从流序列化专题图
	 * @param stream 输出参数，流
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

	protected  void setRequestType_EVWMSRequestType_callback(int requestType)
	{
		com.earthview.world.spatial.theme.Evwmsvectortheme.EVWMSRequestType requestTypeParamValue = com.earthview.world.spatial.theme.Evwmsvectortheme.EVWMSRequestType.toEnum(requestType);
		setRequestType(requestTypeParamValue);
	}

	native private void setRequestType_EVWMSRequestType(long pNativeObject, int requestType);
	public void setRequestType(com.earthview.world.spatial.theme.Evwmsvectortheme.EVWMSRequestType requestType)
	{
		int requestTypeParamValue = requestType.getValue();
		setRequestType_EVWMSRequestType(this.nativeObject.pointer, requestTypeParamValue);
	}
	native private void setRequestType_EVWMSRequestType_NoVirtual(long pNativeObject, int requestType);
	protected void setRequestType_NoVirtual(com.earthview.world.spatial.theme.Evwmsvectortheme.EVWMSRequestType requestType)
	{
		int requestTypeParamValue = requestType.getValue();
		setRequestType_EVWMSRequestType_NoVirtual(this.nativeObject.pointer, requestTypeParamValue);
	}

	protected  int getRequestType_void_callback()
	{
		com.earthview.world.spatial.theme.Evwmsvectortheme.EVWMSRequestType returnValue = getRequestType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getRequestType_void(long pNativeObject);
	public com.earthview.world.spatial.theme.Evwmsvectortheme.EVWMSRequestType getRequestType()
	{
		int returnValue = getRequestType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.Evwmsvectortheme.EVWMSRequestType.toEnum(returnValue);
	}
	native private int getRequestType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.Evwmsvectortheme.EVWMSRequestType getRequestType_NoVirtual()
	{
		int returnValue = getRequestType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.Evwmsvectortheme.EVWMSRequestType.toEnum(returnValue);
	}

	public Evwmsvectortheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evwmsvectortheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 鑾峰彇涓撻鍥剧被鍨�
	 * @param  
	 * @return 杩斿洖涓撻鍥剧被鍨�
	 */
	public com.earthview.world.spatial.theme.EVThemeType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 鑾峰彇鏍囬
	 * @param  
	 * @return 杩斿洖鏍囬
	 */
	public String getCaption()
	{
		return super.getCaption_NoVirtual();
	}
	/**
	 * 璁剧疆鏍囬
	 * @param caption 鏍囬
	 */
	public void setCaption(String caption)
	{
		super.setCaption_NoVirtual(caption);
	}
	/**
	 * 鏄惁涓虹敤鎴疯嚜瀹氫箟绗﹀彿
	 * @param  
	 * @return 濡傛灉鏄繑鍥瀟rue锛涘惁鍒欒繑鍥瀎alse
	 */
	public boolean useDefaultSymbol()
	{
		return super.useDefaultSymbol_NoVirtual();
	}
	/**
	 * 璁剧疆鏄惁涓虹敤鎴疯嚜瀹氫箟绗﹀彿
	 * @param usable 鏄惁鐢ㄦ埛鑷畾涔�
	 */
	public void setUseDefaultSymbol(boolean usable)
	{
		super.setUseDefaultSymbol_NoVirtual(usable);
	}
	/**
	 * 鑾峰彇鑷畾涔夌鍙�
	 * @param  
	 * @return 杩斿洖绗﹀彿
	 */
	public com.earthview.world.spatial.display.Isymbol getDefaultSymbol()
	{
		return super.getDefaultSymbol_NoVirtual();
	}
	/**
	 * 璁剧疆鑷畾涔夌鍙�
	 * @param symbol 鑷畾涔夌鍙�
	 */
	public void setDefaultSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		super.setDefaultSymbol_NoVirtual(symbol);
	}
	public void onBeforeQuery(com.earthview.world.spatial.geodataset.Ifeatureclass fc, com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		super.onBeforeQuery_NoVirtual(fc, filter);
	}
	public void onAfterQuery(com.earthview.world.spatial.geodataset.Ifeatureselection fs, com.earthview.world.spatial.geometry.Igeometry dst)
	{
		super.onAfterQuery_NoVirtual(fs, dst);
	}
	
	native protected void register_setRequestType_EVWMSRequestType(long pNativeObject, String method);
	native protected void register_getRequestType_void(long pNativeObject, String method);
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
			this.register_setRequestType_EVWMSRequestType(this.nativeObject.pointer, "setRequestType_EVWMSRequestType_callback");
			this.register_getRequestType_void(this.nativeObject.pointer, "getRequestType_void_callback");
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
	
	public static Evwmsvectortheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evwmsvectortheme obj = null;
 		if(baseObj instanceof Evwmsvectortheme)
		{
			obj = (Evwmsvectortheme)baseObj;
		} else {
			obj = new Evwmsvectortheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVWMSVectorTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
