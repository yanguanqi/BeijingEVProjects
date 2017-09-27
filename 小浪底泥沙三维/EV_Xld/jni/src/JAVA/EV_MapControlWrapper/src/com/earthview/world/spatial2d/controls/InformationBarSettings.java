package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地图控件信息栏设置类
 */
public class InformationBarSettings extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CInformationBarSettings", new InformationBarSettingsClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public InformationBarSettings() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CInformationBarSettings", null);
	}

	native private boolean get_m_Visible_void(long pNativeObject);
	public boolean get_m_Visible()
	{
		boolean jniValue = get_m_Visible_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_Visible_ev_bool (long pNativeObject, boolean value);
	public void set_m_Visible(boolean m_Visible)
	{
		boolean m_VisibleParamValue = m_Visible;
		
		set_m_Visible_ev_bool(this.nativeObject.pointer, m_VisibleParamValue);
	}
	
	native private long get_m_R_void(long pNativeObject);
	public long get_m_R()
	{
		long jniValue = get_m_R_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_R_ev_uint32 (long pNativeObject, long value);
	public void set_m_R(long m_R)
	{
		long m_RParamValue = m_R;
		
		set_m_R_ev_uint32(this.nativeObject.pointer, m_RParamValue);
	}
	
	native private long get_m_G_void(long pNativeObject);
	public long get_m_G()
	{
		long jniValue = get_m_G_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_G_ev_uint32 (long pNativeObject, long value);
	public void set_m_G(long m_G)
	{
		long m_GParamValue = m_G;
		
		set_m_G_ev_uint32(this.nativeObject.pointer, m_GParamValue);
	}
	
	native private long get_m_B_void(long pNativeObject);
	public long get_m_B()
	{
		long jniValue = get_m_B_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_B_ev_uint32 (long pNativeObject, long value);
	public void set_m_B(long m_B)
	{
		long m_BParamValue = m_B;
		
		set_m_B_ev_uint32(this.nativeObject.pointer, m_BParamValue);
	}
	
	native private long get_m_A_void(long pNativeObject);
	public long get_m_A()
	{
		long jniValue = get_m_A_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_A_ev_uint32 (long pNativeObject, long value);
	public void set_m_A(long m_A)
	{
		long m_AParamValue = m_A;
		
		set_m_A_ev_uint32(this.nativeObject.pointer, m_AParamValue);
	}
	
	native private String get_m_Font_void(long pNativeObject);
	public String get_m_Font()
	{
		String jniValue = get_m_Font_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_Font_EVString (long pNativeObject, String value);
	public void set_m_Font(String m_Font)
	{
		String m_FontParamValue = m_Font;
		
		set_m_Font_EVString(this.nativeObject.pointer, m_FontParamValue);
	}
	
	native private boolean get_m_IsBold_void(long pNativeObject);
	public boolean get_m_IsBold()
	{
		boolean jniValue = get_m_IsBold_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_IsBold_ev_bool (long pNativeObject, boolean value);
	public void set_m_IsBold(boolean m_IsBold)
	{
		boolean m_IsBoldParamValue = m_IsBold;
		
		set_m_IsBold_ev_bool(this.nativeObject.pointer, m_IsBoldParamValue);
	}
	
	native private long get_m_FontColor_R_void(long pNativeObject);
	public long get_m_FontColor_R()
	{
		long jniValue = get_m_FontColor_R_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_FontColor_R_ev_uint32 (long pNativeObject, long value);
	public void set_m_FontColor_R(long m_FontColor_R)
	{
		long m_FontColor_RParamValue = m_FontColor_R;
		
		set_m_FontColor_R_ev_uint32(this.nativeObject.pointer, m_FontColor_RParamValue);
	}
	
	native private long get_m_FontColor_G_void(long pNativeObject);
	public long get_m_FontColor_G()
	{
		long jniValue = get_m_FontColor_G_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_FontColor_G_ev_uint32 (long pNativeObject, long value);
	public void set_m_FontColor_G(long m_FontColor_G)
	{
		long m_FontColor_GParamValue = m_FontColor_G;
		
		set_m_FontColor_G_ev_uint32(this.nativeObject.pointer, m_FontColor_GParamValue);
	}
	
	native private long get_m_FontColor_B_void(long pNativeObject);
	public long get_m_FontColor_B()
	{
		long jniValue = get_m_FontColor_B_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_FontColor_B_ev_uint32 (long pNativeObject, long value);
	public void set_m_FontColor_B(long m_FontColor_B)
	{
		long m_FontColor_BParamValue = m_FontColor_B;
		
		set_m_FontColor_B_ev_uint32(this.nativeObject.pointer, m_FontColor_BParamValue);
	}
	
	native private long get_m_FontColor_A_void(long pNativeObject);
	public long get_m_FontColor_A()
	{
		long jniValue = get_m_FontColor_A_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_FontColor_A_ev_uint32 (long pNativeObject, long value);
	public void set_m_FontColor_A(long m_FontColor_A)
	{
		long m_FontColor_AParamValue = m_FontColor_A;
		
		set_m_FontColor_A_ev_uint32(this.nativeObject.pointer, m_FontColor_AParamValue);
	}
	
	public InformationBarSettings(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public InformationBarSettings(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static InformationBarSettings fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		InformationBarSettings obj = null;
 		if(baseObj instanceof InformationBarSettings)
		{
			obj = (InformationBarSettings)baseObj;
		} else {
			obj = new InformationBarSettings(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CInformationBarSettings");
			obj.increaseCast();
		}

		return obj;
	}
}
