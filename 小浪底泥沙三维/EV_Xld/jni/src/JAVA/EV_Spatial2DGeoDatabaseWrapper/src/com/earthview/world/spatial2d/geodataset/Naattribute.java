package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络数据集属性类
 */
public class Naattribute extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CNAAttribute", new NaattributeClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public Naattribute() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CNAAttribute", null);
	}

	native private void SetName_EVString(long pNativeObject, String name);
	/**
	 * 设置属性名称
	 * @param name 名称
	 */
	public void SetName(String name)
	{
		String nameParamValue = name;
		SetName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String GetName_void(long pNativeObject);
	/**
	 * 获取属性名称
	 * @param  
	 * @return 返回属性名
	 */
	public String GetName()
	{
		String returnValue = GetName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void SetDataType_EVDataType(long pNativeObject, int type);
	/**
	 * 设置数据类型
	 * @param type 数据类型
	 */
	public void SetDataType(com.earthview.world.core.Variant.EVDataType type)
	{
		int typeParamValue = type.getValue();
		SetDataType_EVDataType(this.nativeObject.pointer, typeParamValue);
	}
	native private int GetDataType_void(long pNativeObject);
	/**
	 * 获取数据类型
	 * @param  
	 * @return 返回数据类型
	 */
	public com.earthview.world.core.Variant.EVDataType GetDataType()
	{
		int returnValue = GetDataType_void(this.nativeObject.pointer);
		return com.earthview.world.core.Variant.EVDataType.toEnum(returnValue);
	}
	native private void SetUsage_EVUsageType(long pNativeObject, int type);
	/**
	 * 设置单位
	 * @param type 单位
	 */
	public void SetUsage(com.earthview.world.spatial2d.geodataset.EVUsageType type)
	{
		int typeParamValue = type.getValue();
		SetUsage_EVUsageType(this.nativeObject.pointer, typeParamValue);
	}
	native private int GetUsage_void(long pNativeObject);
	/**
	 * 获取用途
	 * @param  
	 * @return 返回用途
	 */
	public com.earthview.world.spatial2d.geodataset.EVUsageType GetUsage()
	{
		int returnValue = GetUsage_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.geodataset.EVUsageType.toEnum(returnValue);
	}
	native private void SetUnit_EVUnitType(long pNativeObject, int unit);
	/**
	 * 设置单位
	 * @param type 单位
	 */
	public void SetUnit(com.earthview.world.spatial2d.geodataset.EVUnitType unit)
	{
		int unitParamValue = unit.getValue();
		SetUnit_EVUnitType(this.nativeObject.pointer, unitParamValue);
	}
	native private int GetUnit_void(long pNativeObject);
	/**
	 * 获取单位
	 * @param  
	 * @return 返回单位
	 */
	public com.earthview.world.spatial2d.geodataset.EVUnitType GetUnit()
	{
		int returnValue = GetUnit_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.geodataset.EVUnitType.toEnum(returnValue);
	}
	native private void SetDefault_ev_bool(long pNativeObject, boolean isDefault);
	/**
	 * 设置为是否默认
	 * @param isDefault 是否默认
	 */
	public void SetDefault(boolean isDefault)
	{
		boolean isDefaultParamValue = isDefault;
		SetDefault_ev_bool(this.nativeObject.pointer, isDefaultParamValue);
	}
	native private boolean IsDefault_void(long pNativeObject);
	/**
	 * 获取是否为默认
	 * @param  
	 * @return 若是返回true；否则返回false
	 */
	public boolean IsDefault()
	{
		boolean returnValue = IsDefault_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int GetSettingCount_void(long pNativeObject);
	/**
	 * 获取设置数量
	 * @param  
	 * @return 返回数量
	 */
	public int GetSettingCount()
	{
		int returnValue = GetSettingCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void ClearSetting_void(long pNativeObject);
	/**
	 * 清空设置
	 * @param  
	 */
	public void ClearSetting()
	{
		ClearSetting_void(this.nativeObject.pointer);
	}
	native private void AddSetting_CNAAttributeSetting(long pNativeObject, long setting);
	/**
	 * 添加设置
	 */
	public void AddSetting(com.earthview.world.spatial2d.geodataset.Naattributesetting setting)
	{
		long settingParamValue = setting.nativeObject.pointer;
		AddSetting_CNAAttributeSetting(this.nativeObject.pointer, settingParamValue);
	}
	native private long GetSettingRef_ev_uint32(long pNativeObject, long idx);
	/**
	 * 获取设置
	 */
	public com.earthview.world.spatial2d.geodataset.Naattributesetting GetSettingRef(long idx)
	{
		long idxParamValue = idx;
		long returnValue = GetSettingRef_ev_uint32(this.nativeObject.pointer, idxParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.geodataset.Naattributesetting __returnValue = new com.earthview.world.spatial2d.geodataset.Naattributesetting(CreatedWhenConstruct.CWC_NotToCreate, "CNAAttributeSetting");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.geodataset.Naattributesetting)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNAAttributeSetting");
		}
		return __returnValue;
	}
	public Naattribute(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Naattribute(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Naattribute fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Naattribute obj = null;
 		if(baseObj instanceof Naattribute)
		{
			obj = (Naattribute)baseObj;
		} else {
			obj = new Naattribute(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNAAttribute");
			obj.increaseCast();
		}

		return obj;
	}
}
