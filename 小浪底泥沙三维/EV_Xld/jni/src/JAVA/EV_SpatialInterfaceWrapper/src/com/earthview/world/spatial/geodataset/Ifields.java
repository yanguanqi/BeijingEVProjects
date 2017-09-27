package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 字段集合，用于存储字段对象
 */
public class Ifields extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::IFields", new IfieldsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JIFieldsProxy", new IfieldsClassFactory());
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

	protected  long getFieldRef_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.geodataset.Ifield returnValue = getFieldRef(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFieldRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的字段
	 * @param index 指定索引
	 * @return 字段对象，内部对象，无需释放
	 */
	public com.earthview.world.spatial.geodataset.Ifield getFieldRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long getFieldRef_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.geodataset.Ifield getFieldRef_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldRef_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	protected  int findField_EVString_callback(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField(fieldNameParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int findField_EVString(long pNativeObject, String fieldName);
	/**
	 * 判断是否可以找到指定字段名称的字段
	 * @param fieldName 字段名称
	 * @return 如果能找到，返回索引；如果找不到，返回-1
	 */
	public int findField(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField_EVString(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}
	native private int findField_EVString_NoVirtual(long pNativeObject, String fieldName);
	protected int findField_NoVirtual(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField_EVString_NoVirtual(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}

	protected  long addField_IField_callback(long field)
	{
		com.earthview.world.spatial.geodataset.Ifield fieldParamValue = (field == 0L ? null : new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate));
		if(fieldParamValue != null)
		{
		fieldParamValue.setDelegate(true);
		fieldParamValue.setInstancePointer(new InstancePointer(field));
		IClassFactory fieldParamValueClassFactory = GlobalClassFactoryMap.get(fieldParamValue.getCppInstanceTypeName());
		if (fieldParamValueClassFactory != null)
		{
			fieldParamValue.setDelegate(true);
			fieldParamValue = (com.earthview.world.spatial.geodataset.Ifield)fieldParamValueClassFactory.create();
			fieldParamValue.setDelegate(true);
			fieldParamValue.setInstancePointer(new InstancePointer(field));
		}
		}
		long returnValue = addField(fieldParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long addField_IField(long pNativeObject, long field);
	/**
	 * 添加指定字段
	 * @param field 字段对象
	 * @return 成功添加的个数，成功为1，不成功为0
	 */
	public long addField(com.earthview.world.spatial.geodataset.Ifield field)
	{
		long fieldParamValue = (field == null ? 0L : field.nativeObject.pointer);
		long returnValue = addField_IField(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}
	native private long addField_IField_NoVirtual(long pNativeObject, long field);
	protected long addField_NoVirtual(com.earthview.world.spatial.geodataset.Ifield field)
	{
		long fieldParamValue = (field == null ? 0L : field.nativeObject.pointer);
		long returnValue = addField_IField_NoVirtual(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}

	protected  long removeField_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		long returnValue = removeField(indexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long removeField_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引的字段
	 * @param index 指定索引
	 * @return 成功移除的个数，成功为1，不成功为0
	 */
	public long removeField(long index)
	{
		long indexParamValue = index;
		long returnValue = removeField_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long removeField_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected long removeField_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = removeField_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  long clear_void_callback()
	{
		long returnValue = clear();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long clear_void(long pNativeObject);
	/**
	 * 清除所有字段
	 */
	public long clear()
	{
		long returnValue = clear_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long clear_void_NoVirtual(long pNativeObject);
	protected long clear_NoVirtual()
	{
		long returnValue = clear_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean moveField_ev_uint32_ev_uint32_callback(long srcIndex, long destIndex)
	{
		long srcIndexParamValue = srcIndex;
		long destIndexParamValue = destIndex;
		boolean returnValue = moveField(srcIndexParamValue, destIndexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean moveField_ev_uint32_ev_uint32(long pNativeObject, long srcIndex, long destIndex);
	/**
	 * 移动指定索引的字段到指定索引处
	 * @param srcIndex 字段索引
	 * @param destIndex 插入索引
	 * @return 成功为true；不成功为false
	 */
	public boolean moveField(long srcIndex, long destIndex)
	{
		long srcIndexParamValue = srcIndex;
		long destIndexParamValue = destIndex;
		boolean returnValue = moveField_ev_uint32_ev_uint32(this.nativeObject.pointer, srcIndexParamValue, destIndexParamValue);
		return returnValue;
	}
	native private boolean moveField_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long srcIndex, long destIndex);
	protected boolean moveField_NoVirtual(long srcIndex, long destIndex)
	{
		long srcIndexParamValue = srcIndex;
		long destIndexParamValue = destIndex;
		boolean returnValue = moveField_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, srcIndexParamValue, destIndexParamValue);
		return returnValue;
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifields returnValue = ev_clone();
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
	 * @return 成功返回对象，不成功返回NULL
	 */
	public com.earthview.world.spatial.geodataset.Ifields ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifields ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}

	public Ifields(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ifields(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getCount_void(long pNativeObject, String method);
	native protected void register_getFieldRef_ev_uint32(long pNativeObject, String method);
	native protected void register_findField_EVString(long pNativeObject, String method);
	native protected void register_addField_IField(long pNativeObject, String method);
	native protected void register_removeField_ev_uint32(long pNativeObject, String method);
	native protected void register_clear_void(long pNativeObject, String method);
	native protected void register_moveField_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getCount_void(this.nativeObject.pointer, "getCount_void_callback");
			this.register_getFieldRef_ev_uint32(this.nativeObject.pointer, "getFieldRef_ev_uint32_callback");
			this.register_findField_EVString(this.nativeObject.pointer, "findField_EVString_callback");
			this.register_addField_IField(this.nativeObject.pointer, "addField_IField_callback");
			this.register_removeField_ev_uint32(this.nativeObject.pointer, "removeField_ev_uint32_callback");
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
			this.register_moveField_ev_uint32_ev_uint32(this.nativeObject.pointer, "moveField_ev_uint32_ev_uint32_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static Ifields fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ifields obj = null;
 		if(baseObj instanceof Ifields)
		{
			obj = (Ifields)baseObj;
		} else {
			obj = new Ifields(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IFields");
			obj.increaseCast();
		}

		return obj;
	}
}
