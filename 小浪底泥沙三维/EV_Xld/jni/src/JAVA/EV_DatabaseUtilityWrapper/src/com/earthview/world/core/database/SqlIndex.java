package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 提供生成和描述数据库索引的方法
 */
public class SqlIndex extends com.earthview.world.core.database.SqlRecord {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlIndex", new SqlIndexClassFactory());
	}

	/**
	 * 构造函数
	 */
	public SqlIndex() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSqlIndex", null);
	}

	/**
	 * 构造函数
	 * @param cursorName 游标名
	 */
	public SqlIndex(String cursorName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer cursorNamePtr = new BasePointer(cursorName);
		list.add("cursorName", cursorNamePtr.get());
		Create("CSqlIndex", list);
	}

	/**
	 * 构造函数
	 * @param cursorName 游标名
	 * @param name 索引名
	 */
	public SqlIndex(String cursorName, String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer cursorNamePtr = new BasePointer(cursorName);
		list.add("cursorName", cursorNamePtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("CSqlIndex", list);
	}

	/**
	 * 拷贝构造函数
	 * @param other 索引对象
	 */
	public SqlIndex(com.earthview.world.core.database.SqlIndex other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("CSqlIndex", list);
	}

	native private long OperatorAssign_CSqlIndex(long pNativeObject, long other);
	/**
	 * 赋值操作符的重载
	 * @param other 索引对象
	 */
	public com.earthview.world.core.database.SqlIndex OperatorAssign(com.earthview.world.core.database.SqlIndex other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CSqlIndex(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.core.database.SqlIndex __returnValue = new com.earthview.world.core.database.SqlIndex(CreatedWhenConstruct.CWC_NotToCreate, "CSqlIndex");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlIndex)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlIndex");
		}
		return __returnValue;
	}
	native private void setCursorName_ev_wstring(long pNativeObject, String cursorName);
	/**
	 * 设置当前索引对应的游标名
	 * @param cursorName 游标名
	 */
	public void setCursorName(String cursorName)
	{
		String cursorNameParamValue = cursorName;
		setCursorName_ev_wstring(this.nativeObject.pointer, cursorNameParamValue);
	}
	native private long cursorName_void(long pNativeObject);
	/**
	 * 获取当前索引对应的游标名
	 * @param  
	 * @return 当前索引对应的游标名
	 */
	public WideStringPointer cursorName()
	{
		long returnValue = cursorName_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setName_ev_wstring(long pNativeObject, String name);
	/**
	 * 设置索引名
	 * @param name 索引名
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_ev_wstring(this.nativeObject.pointer, nameParamValue);
	}
	native private long name_void(long pNativeObject);
	/**
	 * 获取当前索引对应的索引名
	 * @param  
	 * @return 当前索引对应的索引名
	 */
	public WideStringPointer name()
	{
		long returnValue = name_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void append_CSqlField(long pNativeObject, long field);
	/**
	 * 有索引的字段链表中追加字段
	 * @param field 字段
	 */
	public void append(com.earthview.world.core.database.SqlField field)
	{
		long fieldParamValue = field.nativeObject.pointer;
		append_CSqlField(this.nativeObject.pointer, fieldParamValue);
	}
	native private void append_CSqlField_ev_bool(long pNativeObject, long field, boolean desc);
	/**
	 * 有索引的字段链表中追加字段
	 * @param field 字段
	 * @param desc 是否为降序
	 */
	public void append(com.earthview.world.core.database.SqlField field, boolean desc)
	{
		long fieldParamValue = field.nativeObject.pointer;
		boolean descParamValue = desc;
		append_CSqlField_ev_bool(this.nativeObject.pointer, fieldParamValue, descParamValue);
	}
	native private boolean isDescending_ev_int32(long pNativeObject, int i);
	/**
	 * 在索引i处的字段是否为降序排列
	 * @param i 索引号
	 * @return 是降序返回true，否则返回false
	 */
	public boolean isDescending(int i)
	{
		int iParamValue = i;
		boolean returnValue = isDescending_ev_int32(this.nativeObject.pointer, iParamValue);
		return returnValue;
	}
	native private void setDescending_ev_int32_ev_bool(long pNativeObject, int i, boolean desc);
	/**
	 * 设置在索引i处的字段是否为降序排列
	 * @param i 索引号
	 * @param desc 是否为降序
	 */
	public void setDescending(int i, boolean desc)
	{
		int iParamValue = i;
		boolean descParamValue = desc;
		setDescending_ev_int32_ev_bool(this.nativeObject.pointer, iParamValue, descParamValue);
	}
	public SqlIndex(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SqlIndex(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SqlIndex fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SqlIndex obj = null;
 		if(baseObj instanceof SqlIndex)
		{
			obj = (SqlIndex)baseObj;
		} else {
			obj = new SqlIndex(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSqlIndex");
			obj.increaseCast();
		}

		return obj;
	}
}
