package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 属性集合，一般成对出现，Key-Value
 */
public class Ipropertyset extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::IPropertySet", new IpropertysetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JIPropertySetProxy", new IpropertysetClassFactory());
	}

	protected  long getCount_void_callback()
	{
		long returnValue = getCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 获取字段数目
	 * @return 字段个数
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

	protected  boolean exist_EVString_callback(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist(keyParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean exist_EVString(long pNativeObject, String key);
	/**
	 * 是否存在指定Key值
	 * @param key 指定Key值
	 * @return 存在，true；不存在，false
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

	protected  String getKey_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getKey(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getKey_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的Key值
	 * @param key 指定Key值
	 * @return 存在，true；不存在，false
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

	protected  void setProperty_EVString_CVariant_callback(String key, long value)
	{
		String keyParamValue = key;
		com.earthview.world.core.Variant valueParamValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		valueParamValue.setDelegate(true);
		valueParamValue.setInstancePointer(new InstancePointer(value));
		IClassFactory valueParamValueClassFactory = GlobalClassFactoryMap.get(valueParamValue.getCppInstanceTypeName());
		if (valueParamValueClassFactory != null)
		{
			valueParamValue.setDelegate(true);
			valueParamValue = (com.earthview.world.core.Variant)valueParamValueClassFactory.create();
			valueParamValue.setDelegate(true);
			valueParamValue.setInstancePointer(new InstancePointer(value));
		}
		setProperty(keyParamValue, valueParamValue);
	}

	native private void setProperty_EVString_CVariant(long pNativeObject, String key, long value);
	/**
	 * 设置属性值
	 * @param key Key值
	 * @param value value值
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

	protected  long getProperty_EVString_callback(String key)
	{
		String keyParamValue = key;
		com.earthview.world.core.Variant returnValue = getProperty(keyParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getProperty_EVString(long pNativeObject, String key);
	/**
	 * 获取指定Key值的属性值
	 * @param key Key值
	 * @return 属性值
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

	protected  void remove_EVString_callback(String key)
	{
		String keyParamValue = key;
		remove(keyParamValue);
	}

	native private void remove_EVString(long pNativeObject, String key);
	/**
	 * 移除指定Key值的属性值
	 * @param key Key值
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

	protected  void clear_void_callback()
	{
		clear();
	}

	native private void clear_void(long pNativeObject);
	/**
	 * 移除所有属性值
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

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ipropertyset returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆函数
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

	public Ipropertyset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ipropertyset(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Ipropertyset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ipropertyset obj = null;
 		if(baseObj instanceof Ipropertyset)
		{
			obj = (Ipropertyset)baseObj;
		} else {
			obj = new Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IPropertySet");
			obj.increaseCast();
		}

		return obj;
	}
}
