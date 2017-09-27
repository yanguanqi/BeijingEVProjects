package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 字段序列类
 */
public class Fields extends com.earthview.world.spatial.geodataset.Ifields {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CFields", new FieldsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCFieldsProxy", new FieldsClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public Fields() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFieldsProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geodataset.Fields".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 获取字段总数
	 * @param  
	 * @return 字段总数
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

	native private long getFieldRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取索引index处的字段
	 * @param index 索引号
	 * @return 字段
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

	native private int findField_EVString(long pNativeObject, String fieldName);
	/**
	 * 查询字段
	 * @param fieldName 字段名
	 * @return 成功返回字段索引号，失败返回-1
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

	native private long addField_IField(long pNativeObject, long field);
	/**
	 * 添加字段
	 * @param field 字段
	 * @return 字段总数
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

	native private long removeField_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除索引index处的字段
	 * @param index 索引号
	 * @return 成功返回0，索引号小于0或者大于字段总数返回-1
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

	native private long clear_void(long pNativeObject);
	/**
	 * 删除所有字段
	 * @param  
	 * @return 0
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

	native private boolean moveField_ev_uint32_ev_uint32(long pNativeObject, long srcIndex, long destIndex);
	/**
	 * 移动字段
	 * @param srcIndex 原索引位置
	 * @param srcIndex 目标索引位置
	 * @return 成功返回true,失败返回false
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @param  
	 * @return 拷贝对象
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

	public Fields(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Fields(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Fields fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Fields obj = null;
 		if(baseObj instanceof Fields)
		{
			obj = (Fields)baseObj;
		} else {
			obj = new Fields(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFields");
			obj.increaseCast();
		}

		return obj;
	}
}
