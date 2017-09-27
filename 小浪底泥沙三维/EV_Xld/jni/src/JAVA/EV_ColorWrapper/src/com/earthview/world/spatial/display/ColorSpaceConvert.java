package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 颜色空间进行转换类提供方法如下：设置转换参数、查找“显示参数文件”的路径、是否能转换Lab转成RGB、RGB转换Lab、Lab转成HSV、Hsv转成Lab、RGB转成Hsv、HSV转成RGB计算三色刺激值、初始化矩阵、从CIERGB中获取RGB值CIEYxy转成CIEXYZ、CIERGB转成CIEXYZ、CIEXYZ转成CIELab、CIELab转成CIEXYZ、CIEXYZ转成CIERGBrgb转成CIERGB、CIERGB转成rgb、rgb转成hsv、hsv转成rgb
 */
public class ColorSpaceConvert extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColorSpaceConvert", new ColorSpaceConvertClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ColorSpaceConvert() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CColorSpaceConvert", null);
	}

	/**
	 * 构造函数
	 * @param param 显示器参数
	 */
	public ColorSpaceConvert(com.earthview.world.spatial.display.MonitorParameter param) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer paramPtr = new BasePointer(param);
		list.add("param", paramPtr.get());
		Create("CColorSpaceConvert", list);
	}

	native private void setMonitorParameter_CMonitorParameter(long pNativeObject, long param);
	/**
	 * 设置转换参数
	 * @param param 显示参数类对象
	 */
	public void setMonitorParameter(com.earthview.world.spatial.display.MonitorParameter param)
	{
		long paramParamValue = (param == null ? 0L : param.nativeObject.pointer);
		setMonitorParameter_CMonitorParameter(this.nativeObject.pointer, paramParamValue);
	}
	native private long getMonitorParameter_void(long pNativeObject);
	/**
	 * 查找“显示参数文件”的路径内存需要外部释放
	 * @param param 显示参数类对象
	 * @return EarthView::World::Spatial::Display::CMonitorParameter类型指针
	 */
	public com.earthview.world.spatial.display.MonitorParameter getMonitorParameter()
	{
		long returnValue = getMonitorParameter_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.MonitorParameter __returnValue = new com.earthview.world.spatial.display.MonitorParameter(CreatedWhenConstruct.CWC_NotToCreate, "CMonitorParameter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.MonitorParameter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMonitorParameter");
		}
		return __returnValue;
	}
	native private void CIELabToRGB_ev_real64_ev_real64_ev_real64_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, double CIELab_L, double CIELab_a, double CIELab_b, long RGB_r, long RGB_g, long RGB_b);
	/**
	 * Lab转成RGB
	 * @param CIELab_L L值
	 * @param CIELab_a a值
	 * @param CIELab_b b值
	 * @param RGB_r r值
	 * @param RGB_g g值
	 * @param RGB_b b值
	 */
	public void CIELabToRGB(double CIELab_L, double CIELab_a, double CIELab_b, UBytePointer RGB_r, UBytePointer RGB_g, UBytePointer RGB_b)
	{
		double CIELab_LParamValue = CIELab_L;
		double CIELab_aParamValue = CIELab_a;
		double CIELab_bParamValue = CIELab_b;
		long RGB_rParamValue = RGB_r.nativeObject.pointer;
		long RGB_gParamValue = RGB_g.nativeObject.pointer;
		long RGB_bParamValue = RGB_b.nativeObject.pointer;
		CIELabToRGB_ev_real64_ev_real64_ev_real64_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, CIELab_LParamValue, CIELab_aParamValue, CIELab_bParamValue, RGB_rParamValue, RGB_gParamValue, RGB_bParamValue);
	}
	native private void rgbToCIELab_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(long pNativeObject, int RGB_r, int RGB_g, int RGB_b, long CIELab_L, long CIELab_a, long CIELab_b);
	/**
	 * RGB转换Lab
	 * @param RGB_r r值
	 * @param RGB_g g值
	 * @param RGB_b b值
	 * @param CIELab_L L值
	 * @param CIELab_a a值
	 * @param CIELab_b b值
	 */
	public void rgbToCIELab(int RGB_r, int RGB_g, int RGB_b, DoublePointer CIELab_L, DoublePointer CIELab_a, DoublePointer CIELab_b)
	{
		int RGB_rParamValue = RGB_r;
		int RGB_gParamValue = RGB_g;
		int RGB_bParamValue = RGB_b;
		long CIELab_LParamValue = CIELab_L.nativeObject.pointer;
		long CIELab_aParamValue = CIELab_a.nativeObject.pointer;
		long CIELab_bParamValue = CIELab_b.nativeObject.pointer;
		rgbToCIELab_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, RGB_rParamValue, RGB_gParamValue, RGB_bParamValue, CIELab_LParamValue, CIELab_aParamValue, CIELab_bParamValue);
	}
	native private void CIELabToHsv_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double L, double a, double b, long h, long s, long v);
	/**
	 * Lab转成HSV
	 * @param L L值
	 * @param a a值
	 * @param b b值
	 * @param h h值
	 * @param s s值
	 * @param v v值
	 */
	public void CIELabToHsv(double L, double a, double b, DoublePointer h, DoublePointer s, DoublePointer v)
	{
		double LParamValue = L;
		double aParamValue = a;
		double bParamValue = b;
		long hParamValue = h.nativeObject.pointer;
		long sParamValue = s.nativeObject.pointer;
		long vParamValue = v.nativeObject.pointer;
		CIELabToHsv_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, LParamValue, aParamValue, bParamValue, hParamValue, sParamValue, vParamValue);
	}
	native private void hsvToCIELab_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double h, double s, double v, long L, long a, long b);
	/**
	 * Hsv转成Lab
	 * @param h h值
	 * @param s s值
	 * @param v v值
	 * @param L L值
	 * @param a a值
	 * @param b b值
	 */
	public void hsvToCIELab(double h, double s, double v, DoublePointer L, DoublePointer a, DoublePointer b)
	{
		double hParamValue = h;
		double sParamValue = s;
		double vParamValue = v;
		long LParamValue = L.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		hsvToCIELab_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, hParamValue, sParamValue, vParamValue, LParamValue, aParamValue, bParamValue);
	}
	native private void rgbToHsv_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(long pNativeObject, int RGB_r, int RGB_g, int RGB_b, long Hsv_h, long Hsv_s, long Hsv_v);
	/**
	 * RGB转成Hsv
	 * @param RGB_r r值
	 * @param RGB_g g值
	 * @param RGB_b b值
	 * @param Hsv_h h值
	 * @param Hsv_s s值
	 * @param Hsv_v v值
	 */
	public void rgbToHsv(int RGB_r, int RGB_g, int RGB_b, DoublePointer Hsv_h, DoublePointer Hsv_s, DoublePointer Hsv_v)
	{
		int RGB_rParamValue = RGB_r;
		int RGB_gParamValue = RGB_g;
		int RGB_bParamValue = RGB_b;
		long Hsv_hParamValue = Hsv_h.nativeObject.pointer;
		long Hsv_sParamValue = Hsv_s.nativeObject.pointer;
		long Hsv_vParamValue = Hsv_v.nativeObject.pointer;
		rgbToHsv_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, RGB_rParamValue, RGB_gParamValue, RGB_bParamValue, Hsv_hParamValue, Hsv_sParamValue, Hsv_vParamValue);
	}
	native private void hsvToRGB_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_int32(long pNativeObject, double Hsv_h, double Hsv_s, double Hsv_v, long RGB_r, long RGB_g, long RGB_b);
	/**
	 * HSV转成RGB
	 * @param Hsv_h h值
	 * @param Hsv_s s值
	 * @param Hsv_v v值
	 * @param RGB_r r值
	 * @param RGB_g g值
	 * @param RGB_b b值
	 */
	public void hsvToRGB(double Hsv_h, double Hsv_s, double Hsv_v, IntegerPointer RGB_r, IntegerPointer RGB_g, IntegerPointer RGB_b)
	{
		double Hsv_hParamValue = Hsv_h;
		double Hsv_sParamValue = Hsv_s;
		double Hsv_vParamValue = Hsv_v;
		long RGB_rParamValue = RGB_r.nativeObject.pointer;
		long RGB_gParamValue = RGB_g.nativeObject.pointer;
		long RGB_bParamValue = RGB_b.nativeObject.pointer;
		hsvToRGB_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, Hsv_hParamValue, Hsv_sParamValue, Hsv_vParamValue, RGB_rParamValue, RGB_gParamValue, RGB_bParamValue);
	}
	native private boolean canConvert_void(long pNativeObject);
	/**
	 * 是否能转换
	 * @param  
	 */
	public boolean canConvert()
	{
		boolean returnValue = canConvert_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ColorSpaceConvert(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ColorSpaceConvert(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ColorSpaceConvert fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ColorSpaceConvert obj = null;
 		if(baseObj instanceof ColorSpaceConvert)
		{
			obj = (ColorSpaceConvert)baseObj;
		} else {
			obj = new ColorSpaceConvert(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CColorSpaceConvert");
			obj.increaseCast();
		}

		return obj;
	}
}
