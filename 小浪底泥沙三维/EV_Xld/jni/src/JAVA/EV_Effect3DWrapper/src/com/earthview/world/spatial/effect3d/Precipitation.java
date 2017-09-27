package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 降水控制类
 */
public class Precipitation extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CPrecipitation", new PrecipitationClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Precipitation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPrecipitation", null);
	}

	/**
	 * 构造函数
	 */
	public Precipitation(com.earthview.world.spatial.effect3d.EVPrecipitationType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CPrecipitation", list);
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setPresetType_EVPrecipitationType(long pNativeObject, int type);
	/**
	 * 设置降水类型
	 */
	public void setPresetType(com.earthview.world.spatial.effect3d.EVPrecipitationType type)
	{
		int typeParamValue = type.getValue();
		setPresetType_EVPrecipitationType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getPresetType_void(long pNativeObject);
	/**
	 * 获取降水类型
	 */
	public com.earthview.world.spatial.effect3d.EVPrecipitationType getPresetType()
	{
		int returnValue = getPresetType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.effect3d.EVPrecipitationType.toEnum(returnValue);
	}
	native private void setSpeed_Real(long pNativeObject, double value);
	/**
	 * 设置速度
	 */
	public void setSpeed(double value)
	{
		double valueParamValue = value;
		setSpeed_Real(this.nativeObject.pointer, valueParamValue);
	}
	native private double getSpeed_void(long pNativeObject);
	/**
	 * 获取速度
	 */
	public double getSpeed()
	{
		double returnValue = getSpeed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIntensity_Real(long pNativeObject, double value);
	/**
	 * 设置密度
	 */
	public void setIntensity(double value)
	{
		double valueParamValue = value;
		setIntensity_Real(this.nativeObject.pointer, valueParamValue);
	}
	native private double getIntensity_void(long pNativeObject);
	/**
	 * 获取密度
	 */
	public double getIntensity()
	{
		double returnValue = getIntensity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFallingHeight_Real(long pNativeObject, double height);
	/**
	 * 设置降雨高度
	 */
	public void setFallingHeight(double height)
	{
		double heightParamValue = height;
		setFallingHeight_Real(this.nativeObject.pointer, heightParamValue);
	}
	native private double getFallingHeight_void(long pNativeObject);
	/**
	 * 获取降雨高度
	 */
	public double getFallingHeight()
	{
		double returnValue = getFallingHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置可见性
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 返回可见性
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean OperatorEquals_CPrecipitation(long pNativeObject, long other);
	public boolean OperatorEquals(com.earthview.world.spatial.effect3d.Precipitation other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CPrecipitation(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CPrecipitation(long pNativeObject, long other);
	public boolean OperatorNotEquals(com.earthview.world.spatial.effect3d.Precipitation other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CPrecipitation(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private static String EVPrecipitationTypeToString_EVPrecipitationType(int type);
	/**
	 * 降雨类型到英文字符串的转换
	 */
	public static String EVPrecipitationTypeToString(com.earthview.world.spatial.effect3d.EVPrecipitationType type)
	{
		int typeParamValue = type.getValue();
		String returnValue = EVPrecipitationTypeToString_EVPrecipitationType(typeParamValue);
		return returnValue;
	}
	native private static String EVPrecipitationTypeToStringCHS_EVPrecipitationType(int type);
	/**
	 * 降雨类型到中文字符串的转换
	 */
	public static String EVPrecipitationTypeToStringCHS(com.earthview.world.spatial.effect3d.EVPrecipitationType type)
	{
		int typeParamValue = type.getValue();
		String returnValue = EVPrecipitationTypeToStringCHS_EVPrecipitationType(typeParamValue);
		return returnValue;
	}
	native private static int StringtoEVPrecipitationType_EVString(String type);
	/**
	 * 英文字符串到降雨类型的转换
	 */
	public static com.earthview.world.spatial.effect3d.EVPrecipitationType StringtoEVPrecipitationType(String type)
	{
		String typeParamValue = type;
		int returnValue = StringtoEVPrecipitationType_EVString(typeParamValue);
		return com.earthview.world.spatial.effect3d.EVPrecipitationType.toEnum(returnValue);
	}
	native private static int StringtoEVPrecipitationTypeCHS_EVString(String type);
	/**
	 * 中文字符串到类型的转换
	 */
	public static com.earthview.world.spatial.effect3d.EVPrecipitationType StringtoEVPrecipitationTypeCHS(String type)
	{
		String typeParamValue = type;
		int returnValue = StringtoEVPrecipitationTypeCHS_EVString(typeParamValue);
		return com.earthview.world.spatial.effect3d.EVPrecipitationType.toEnum(returnValue);
	}
	public Precipitation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Precipitation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Precipitation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Precipitation obj = null;
 		if(baseObj instanceof Precipitation)
		{
			obj = (Precipitation)baseObj;
		} else {
			obj = new Precipitation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPrecipitation");
			obj.increaseCast();
		}

		return obj;
	}
}
