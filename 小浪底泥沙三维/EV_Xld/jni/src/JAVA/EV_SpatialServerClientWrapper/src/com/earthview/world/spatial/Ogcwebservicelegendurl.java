package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGC图例信息类
 */
public class Ogcwebservicelegendurl extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWebServiceLegendURL", new OgcwebservicelegendurlClassFactory());
	}

	native private String get_strFormat_void(long pNativeObject);
	public String get_strFormat()
	{
		String jniValue = get_strFormat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strFormat_EVString (long pNativeObject, String value);
	public void set_strFormat(String strFormat)
	{
		String strFormatParamValue = strFormat;
		
		set_strFormat_EVString(this.nativeObject.pointer, strFormatParamValue);
	}
	
	native private String get_strHref_void(long pNativeObject);
	public String get_strHref()
	{
		String jniValue = get_strHref_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strHref_EVString (long pNativeObject, String value);
	public void set_strHref(String strHref)
	{
		String strHrefParamValue = strHref;
		
		set_strHref_EVString(this.nativeObject.pointer, strHrefParamValue);
	}
	
	native private long get_pdfMinScaleDenominator_void(long pNativeObject);
	public DoublePointer get_pdfMinScaleDenominator()
	{
		long jniValue = get_pdfMinScaleDenominator_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_pdfMinScaleDenominator_ev_real64 (long pNativeObject, long value);
	public void set_pdfMinScaleDenominator(DoublePointer pdfMinScaleDenominator)
	{
		long pdfMinScaleDenominatorParamValue = (pdfMinScaleDenominator == null ? 0L : pdfMinScaleDenominator.nativeObject.pointer);
		
		set_pdfMinScaleDenominator_ev_real64(this.nativeObject.pointer, pdfMinScaleDenominatorParamValue);
	}
	
	native private long get_pdfMaxScaleDenominator_void(long pNativeObject);
	public DoublePointer get_pdfMaxScaleDenominator()
	{
		long jniValue = get_pdfMaxScaleDenominator_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_pdfMaxScaleDenominator_ev_real64 (long pNativeObject, long value);
	public void set_pdfMaxScaleDenominator(DoublePointer pdfMaxScaleDenominator)
	{
		long pdfMaxScaleDenominatorParamValue = (pdfMaxScaleDenominator == null ? 0L : pdfMaxScaleDenominator.nativeObject.pointer);
		
		set_pdfMaxScaleDenominator_ev_real64(this.nativeObject.pointer, pdfMaxScaleDenominatorParamValue);
	}
	
	native private long get_pnWidth_void(long pNativeObject);
	public UIntegerPointer get_pnWidth()
	{
		long jniValue = get_pnWidth_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_pnWidth_ev_uint32 (long pNativeObject, long value);
	public void set_pnWidth(UIntegerPointer pnWidth)
	{
		long pnWidthParamValue = (pnWidth == null ? 0L : pnWidth.nativeObject.pointer);
		
		set_pnWidth_ev_uint32(this.nativeObject.pointer, pnWidthParamValue);
	}
	
	native private long get_pnHeight_void(long pNativeObject);
	public UIntegerPointer get_pnHeight()
	{
		long jniValue = get_pnHeight_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_pnHeight_ev_uint32 (long pNativeObject, long value);
	public void set_pnHeight(UIntegerPointer pnHeight)
	{
		long pnHeightParamValue = (pnHeight == null ? 0L : pnHeight.nativeObject.pointer);
		
		set_pnHeight_ev_uint32(this.nativeObject.pointer, pnHeightParamValue);
	}
	
	native private long getMinScaleDenominator_void(long pNativeObject);
	/**
	 * 获取最小比例尺分母
	 * @return 最小比例尺分母
	 */
	public DoublePointer getMinScaleDenominator()
	{
		long returnValue = getMinScaleDenominator_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getMaxScaleDenominator_void(long pNativeObject);
	/**
	 * 获取最大比例尺分母
	 * @return 最大比例尺分母
	 */
	public DoublePointer getMaxScaleDenominator()
	{
		long returnValue = getMaxScaleDenominator_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getWidth_void(long pNativeObject);
	/**
	 * 获取图片宽
	 * @return 图片宽
	 */
	public UIntegerPointer getWidth()
	{
		long returnValue = getWidth_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getHeight_void(long pNativeObject);
	/**
	 * 获取图片高
	 * @return 图片高
	 */
	public UIntegerPointer getHeight()
	{
		long returnValue = getHeight_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogcwebservicelegendurl() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCWebServiceLegendURL", null);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制
	 * @return 结果对象指针
	 */
	public com.earthview.world.spatial.Ogcwebservicelegendurl ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwebservicelegendurl __returnValue = new com.earthview.world.spatial.Ogcwebservicelegendurl(CreatedWhenConstruct.CWC_NotToCreate, "COGCWebServiceLegendURL");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwebservicelegendurl)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCWebServiceLegendURL");
		}
		return __returnValue;
	}
	public Ogcwebservicelegendurl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwebservicelegendurl(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwebservicelegendurl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwebservicelegendurl obj = null;
 		if(baseObj instanceof Ogcwebservicelegendurl)
		{
			obj = (Ogcwebservicelegendurl)baseObj;
		} else {
			obj = new Ogcwebservicelegendurl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWebServiceLegendURL");
			obj.increaseCast();
		}

		return obj;
	}
}
