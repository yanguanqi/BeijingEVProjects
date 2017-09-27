package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 键值对类
 */
public class PropertySet extends com.earthview.world.spatial.geodataset.Ipropertyset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CPropertySet", new PropertySetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCPropertySetProxy", new PropertySetClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public PropertySet() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPropertySetProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geodataset.PropertySet".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 获取键值对的个数
	 * @param  
	 * @return 键值对的个数
	 */
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCount_void_NoVirtual(long pNativeObject);
	protected long getCount_NoVirtual()
	{
		long returnValue = getCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean exist_EVString(long pNativeObject, String key);
	/**
	 * 是否存在键值
	 * @param key 键值对标示
	 * @return 存在返回true,否则返回false
	 */
	public boolean exist(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private boolean exist_EVString_NoVirtual(long pNativeObject, String key);
	protected boolean exist_NoVirtual(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString_NoVirtual(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}

	native private String getKey_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取索引位置的键值标示
	 * @param index 索引号
	 * @return 键值标示
	 */
	public String getKey(long index)
	{
		long indexParamValue = index;
		String returnValue = getKey_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getKey_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getKey_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getKey_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private void setProperty_EVString_CVariant(long pNativeObject, String key, long value);
	/**
	 * 设置键值属性
	 * @param key 键值标示
	 * @param value 键值
	 */
	public void setProperty(String key, com.earthview.world.core.Variant value)
	{
		String keyParamValue = key;
		long valueParamValue = value.nativeObject.pointer;
		setProperty_EVString_CVariant(this.nativeObject.pointer, keyParamValue, valueParamValue);
	}
	native private void setProperty_EVString_CVariant_NoVirtual(long pNativeObject, String key, long value);
	protected void setProperty_NoVirtual(String key, com.earthview.world.core.Variant value)
	{
		String keyParamValue = key;
		long valueParamValue = value.nativeObject.pointer;
		setProperty_EVString_CVariant_NoVirtual(this.nativeObject.pointer, keyParamValue, valueParamValue);
	}

	native private long getProperty_EVString(long pNativeObject, String key);
	/**
	 * 获取键值属性
	 * @param key 键值标示
	 * @return 键值
	 */
	public com.earthview.world.core.Variant getProperty(String key)
	{
		String keyParamValue = key;
		long returnValue = getProperty_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate, "CVariant");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long getProperty_EVString_NoVirtual(long pNativeObject, String key);
	protected com.earthview.world.core.Variant getProperty_NoVirtual(String key)
	{
		String keyParamValue = key;
		long returnValue = getProperty_EVString_NoVirtual(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate, "CVariant");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}

	native private void remove_EVString(long pNativeObject, String key);
	/**
	 * 删除键值key处的键值对
	 * @param key 键值标示
	 */
	public void remove(String key)
	{
		String keyParamValue = key;
		remove_EVString(this.nativeObject.pointer, keyParamValue);
	}
	native private void remove_EVString_NoVirtual(long pNativeObject, String key);
	protected void remove_NoVirtual(String key)
	{
		String keyParamValue = key;
		remove_EVString_NoVirtual(this.nativeObject.pointer, keyParamValue);
	}

	native private void clear_void(long pNativeObject);
	/**
	 * 删除所有的值
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void clear_void_NoVirtual(long pNativeObject);
	protected void clear_NoVirtual()
	{
		clear_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @param  
	 * @return 新的键值对类对象
	 */
	public com.earthview.world.spatial.geodataset.Ipropertyset ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ipropertyset __returnValue = new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate, "IPropertySet");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ipropertyset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IPropertySet");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ipropertyset ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ipropertyset __returnValue = new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate, "IPropertySet");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ipropertyset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IPropertySet");
		}
		return __returnValue;
	}

	public PropertySet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PropertySet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getCount_void(long pNativeObject, String method);
	native protected void register_exist_EVString(long pNativeObject, String method);
	native protected void register_getKey_ev_uint32(long pNativeObject, String method);
	native protected void register_setProperty_EVString_CVariant(long pNativeObject, String method);
	native protected void register_getProperty_EVString(long pNativeObject, String method);
	native protected void register_remove_EVString(long pNativeObject, String method);
	native protected void register_clear_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getCount_void(this.nativeObject.pointer, "getCount_void_callback");
			this.register_exist_EVString(this.nativeObject.pointer, "exist_EVString_callback");
			this.register_getKey_ev_uint32(this.nativeObject.pointer, "getKey_ev_uint32_callback");
			this.register_setProperty_EVString_CVariant(this.nativeObject.pointer, "setProperty_EVString_CVariant_callback");
			this.register_getProperty_EVString(this.nativeObject.pointer, "getProperty_EVString_callback");
			this.register_remove_EVString(this.nativeObject.pointer, "remove_EVString_callback");
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static PropertySet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PropertySet obj = null;
 		if(baseObj instanceof PropertySet)
		{
			obj = (PropertySet)baseObj;
		} else {
			obj = new PropertySet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPropertySet");
			obj.increaseCast();
		}

		return obj;
	}
}
