package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 雾对象
 */
public class GroundFog extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CGroundFog", new GroundFogClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GroundFog() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGroundFog", null);
	}

	/**
	 * 构造函数
	 */
	public GroundFog(String domeMaterialName, String domeEntityName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer domeMaterialNamePtr = new BasePointer(domeMaterialName);
		list.add("domeMaterialName", domeMaterialNamePtr.get());
		BasePointer domeEntityNamePtr = new BasePointer(domeEntityName);
		list.add("domeEntityName", domeEntityNamePtr.get());
		Create("CGroundFog", list);
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
	native private String getDomeMaterialName_void(long pNativeObject);
	/**
	 * 返回材质名称
	 */
	public String getDomeMaterialName()
	{
		String returnValue = getDomeMaterialName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDomeEntityName_void(long pNativeObject);
	/**
	 * 返回实体名称
	 */
	public String getDomeEntityName()
	{
		String returnValue = getDomeEntityName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGroundFogColourMultiplier_CColourValue(long pNativeObject, long colour);
	/**
	 * 设置雾颜色
	 */
	public void setGroundFogColourMultiplier(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setGroundFogColourMultiplier_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private long getGroundFogColourMultiplier_void(long pNativeObject);
	/**
	 * 获取雾颜色
	 */
	public com.earthview.world.graphic.ColourValue getGroundFogColourMultiplier()
	{
		long returnValue = getGroundFogColourMultiplier_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setGroundFogDensityMultiplier_Real(long pNativeObject, double value);
	/**
	 * 设置雾密度
	 */
	public void setGroundFogDensityMultiplier(double value)
	{
		double valueParamValue = value;
		setGroundFogDensityMultiplier_Real(this.nativeObject.pointer, valueParamValue);
	}
	native private double getGroundFogDensityMultiplier_void(long pNativeObject);
	/**
	 * 返回雾密度
	 */
	public double getGroundFogDensityMultiplier()
	{
		double returnValue = getGroundFogDensityMultiplier_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGroundLevel_Real(long pNativeObject, double GroundLevela);
	/**
	 * 设置等级
	 */
	public void setGroundLevel(double GroundLevela)
	{
		double GroundLevelaParamValue = GroundLevela;
		setGroundLevel_Real(this.nativeObject.pointer, GroundLevelaParamValue);
	}
	native private double getGroundLevel_void(long pNativeObject);
	/**
	 * 返回等级
	 */
	public double getGroundLevel()
	{
		double returnValue = getGroundLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean OperatorEquals_CGroundFog(long pNativeObject, long other);
	/**
	 * ==操作符重载
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.effect3d.GroundFog other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CGroundFog(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CGroundFog(long pNativeObject, long other);
	/**
	 * !=操作符重载
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.effect3d.GroundFog other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CGroundFog(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	public GroundFog(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GroundFog(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GroundFog fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GroundFog obj = null;
 		if(baseObj instanceof GroundFog)
		{
			obj = (GroundFog)baseObj;
		} else {
			obj = new GroundFog(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGroundFog");
			obj.increaseCast();
		}

		return obj;
	}
}
