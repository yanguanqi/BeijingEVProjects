package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGC服务提供商信息类
 */
public class Ogcserviceproviderinfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCServiceProviderInfo", new OgcserviceproviderinfoClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Ogcserviceproviderinfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCServiceProviderInfo", null);
	}

	native private long getIndividualPersion_void(long pNativeObject);
	/**
	 * 获取联系人名字
	 * @return 名字
	 */
	public StringPointer getIndividualPersion()
	{
		long returnValue = getIndividualPersion_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getPersionPosition_void(long pNativeObject);
	/**
	 * 获取联系人职位
	 * @return 联系人职位
	 */
	public StringPointer getPersionPosition()
	{
		long returnValue = getPersionPosition_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getProviderName_void(long pNativeObject);
	/**
	 * 获取提供机构名称
	 * @return 提供机构名称
	 */
	public StringPointer getProviderName()
	{
		long returnValue = getProviderName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getProviderSite_void(long pNativeObject);
	/**
	 * 获取提供机构网址
	 * @return 提供机构网址
	 */
	public StringPointer getProviderSite()
	{
		long returnValue = getProviderSite_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getVoiceTelephone_void(long pNativeObject);
	/**
	 * 获取联系电话
	 * @return 联系电话
	 */
	public StringPointer getVoiceTelephone()
	{
		long returnValue = getVoiceTelephone_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getFacsimileTelephone_void(long pNativeObject);
	/**
	 * 获取传真号
	 * @return 传真号
	 */
	public StringPointer getFacsimileTelephone()
	{
		long returnValue = getFacsimileTelephone_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getElectronicMailAddress_void(long pNativeObject);
	/**
	 * 获取电子邮件地址
	 * @return 电子邮件地址
	 */
	public StringPointer getElectronicMailAddress()
	{
		long returnValue = getElectronicMailAddress_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getPostCode_void(long pNativeObject);
	/**
	 * 获取邮编
	 * @return 邮编
	 */
	public StringPointer getPostCode()
	{
		long returnValue = getPostCode_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getCountry_void(long pNativeObject);
	/**
	 * 获取所在国家
	 * @return 国家名
	 */
	public StringPointer getCountry()
	{
		long returnValue = getCountry_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getProvince_void(long pNativeObject);
	/**
	 * 获取所在省份
	 * @return 省份名
	 */
	public StringPointer getProvince()
	{
		long returnValue = getProvince_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getCity_void(long pNativeObject);
	/**
	 * 获取所在城市
	 * @return 城市名
	 */
	public StringPointer getCity()
	{
		long returnValue = getCity_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getAddress_void(long pNativeObject);
	/**
	 * 获取联系地址
	 * @return 地址
	 */
	public StringPointer getAddress()
	{
		long returnValue = getAddress_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getAddressType_void(long pNativeObject);
	/**
	 * 获取地址类型
	 * @return 地址类型
	 */
	public StringPointer getAddressType()
	{
		long returnValue = getAddressType_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setIndividualPersion_EVString(long pNativeObject, String value);
	/**
	 * 设置联系人
	 * @param value 联系人人名
	 */
	public void setIndividualPersion(String value)
	{
		String valueParamValue = value;
		setIndividualPersion_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setPersionPosition_EVString(long pNativeObject, String value);
	/**
	 * 设置联系人职位
	 * @param value 联系人职位
	 */
	public void setPersionPosition(String value)
	{
		String valueParamValue = value;
		setPersionPosition_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setProviderName_EVString(long pNativeObject, String value);
	/**
	 * 获取数据提供机构名称
	 * @param value 机构名称
	 */
	public void setProviderName(String value)
	{
		String valueParamValue = value;
		setProviderName_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setProviderSite_EVString(long pNativeObject, String value);
	/**
	 * 获取数据提供机构网址
	 * @param value 网址
	 */
	public void setProviderSite(String value)
	{
		String valueParamValue = value;
		setProviderSite_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setVoiceTelephone_EVString(long pNativeObject, String value);
	/**
	 * 设置联系电话
	 * @param value 联系电话
	 */
	public void setVoiceTelephone(String value)
	{
		String valueParamValue = value;
		setVoiceTelephone_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setFacsimileTelephone_EVString(long pNativeObject, String value);
	/**
	 * 设置传真地址
	 * @param value 传真地址
	 */
	public void setFacsimileTelephone(String value)
	{
		String valueParamValue = value;
		setFacsimileTelephone_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setElectronicMailAddress_EVString(long pNativeObject, String value);
	/**
	 * 设置电子邮件地址
	 * @param value 电子邮件地址
	 */
	public void setElectronicMailAddress(String value)
	{
		String valueParamValue = value;
		setElectronicMailAddress_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setPostCode_EVString(long pNativeObject, String value);
	/**
	 * 设置邮编
	 * @param value 邮编
	 */
	public void setPostCode(String value)
	{
		String valueParamValue = value;
		setPostCode_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setCountry_EVString(long pNativeObject, String value);
	/**
	 * 设置所在国家
	 * @param value 国家
	 */
	public void setCountry(String value)
	{
		String valueParamValue = value;
		setCountry_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setProvince_EVString(long pNativeObject, String value);
	/**
	 * 设置所在省份
	 * @param value 省份
	 */
	public void setProvince(String value)
	{
		String valueParamValue = value;
		setProvince_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setCity_EVString(long pNativeObject, String value);
	/**
	 * 设置所在城市
	 * @param value 市名
	 */
	public void setCity(String value)
	{
		String valueParamValue = value;
		setCity_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setAddress_EVString(long pNativeObject, String value);
	/**
	 * 设置联系地址
	 * @param value 联系地址
	 */
	public void setAddress(String value)
	{
		String valueParamValue = value;
		setAddress_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setAddressType_EVString(long pNativeObject, String value);
	/**
	 * 设置联系地址类型
	 * @param value 联系地址类型
	 */
	public void setAddressType(String value)
	{
		String valueParamValue = value;
		setAddressType_EVString(this.nativeObject.pointer, valueParamValue);
	}
	public Ogcserviceproviderinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcserviceproviderinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcserviceproviderinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcserviceproviderinfo obj = null;
 		if(baseObj instanceof Ogcserviceproviderinfo)
		{
			obj = (Ogcserviceproviderinfo)baseObj;
		} else {
			obj = new Ogcserviceproviderinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCServiceProviderInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
