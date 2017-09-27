package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 封装字段信息
 */
public class SqlRecord extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlRecord", new SqlRecordClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public SqlRecord() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSqlRecord", null);
	}

	/**
	 * 拷贝构造函数
	 * @param other EarthView::World::Core::Database::CSqlRecord对象
	 */
	public SqlRecord(com.earthview.world.core.database.SqlRecord other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("CSqlRecord", list);
	}

	native private long OperatorAssign_CSqlRecord(long pNativeObject, long other);
	/**
	 * 重载赋值操作符
	 * @param other EarthView::World::Core::Database::CSqlRecord对象
	 */
	public com.earthview.world.core.database.SqlRecord OperatorAssign(com.earthview.world.core.database.SqlRecord other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CSqlRecord(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.core.database.SqlRecord __returnValue = new com.earthview.world.core.database.SqlRecord(CreatedWhenConstruct.CWC_NotToCreate, "CSqlRecord");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlRecord)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlRecord");
		}
		return __returnValue;
	}
	native private boolean OperatorEquals_CSqlRecord(long pNativeObject, long other);
	/**
	 * 赋值操作符==的重载
	 * @param other EarthView::World::Core::Database::CSqlRecord对象
	 */
	public boolean OperatorEquals(com.earthview.world.core.database.SqlRecord other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CSqlRecord(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CSqlRecord(long pNativeObject, long other);
	/**
	 * 赋值操作符!=的重载
	 * @param other EarthView::World::Core::Database::CSqlRecord对象
	 */
	public boolean OperatorNotEquals(com.earthview.world.core.database.SqlRecord other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CSqlRecord(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private long value_ev_int32(long pNativeObject, int i);
	/**
	 * 当前索引位置的字段值
	 * @param i 字段索引
	 * @return 字段值
	 */
	public com.earthview.world.core.Variant value(int i)
	{
		int iParamValue = i;
		long returnValue = value_ev_int32(this.nativeObject.pointer, iParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long value_ev_wstring(long pNativeObject, String name);
	/**
	 * 字段name的值
	 * @param name 字段名
	 * @return 字段值
	 */
	public com.earthview.world.core.Variant value(String name)
	{
		String nameParamValue = name;
		long returnValue = value_ev_wstring(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private void setValue_ev_int32_CVariant(long pNativeObject, int i, long val);
	/**
	 * 设置在i字段的字段值
	 * @param i 字段索引
	 * @param val 字段值
	 */
	public void setValue(int i, com.earthview.world.core.Variant val)
	{
		int iParamValue = i;
		long valParamValue = val.nativeObject.pointer;
		setValue_ev_int32_CVariant(this.nativeObject.pointer, iParamValue, valParamValue);
	}
	native private void setValue_ev_wstring_CVariant(long pNativeObject, String name, long val);
	/**
	 * 设置name字段的字段值
	 * @param i 字段名
	 * @param val 字段值
	 */
	public void setValue(String name, com.earthview.world.core.Variant val)
	{
		String nameParamValue = name;
		long valParamValue = val.nativeObject.pointer;
		setValue_ev_wstring_CVariant(this.nativeObject.pointer, nameParamValue, valParamValue);
	}
	native private void setNull_ev_int32(long pNativeObject, int i);
	/**
	 * 设置i字段为空
	 * @param i 字段索引
	 */
	public void setNull(int i)
	{
		int iParamValue = i;
		setNull_ev_int32(this.nativeObject.pointer, iParamValue);
	}
	native private void setNull_ev_wstring(long pNativeObject, String name);
	/**
	 * 设置name字段为空
	 * @param name 字段名
	 */
	public void setNull(String name)
	{
		String nameParamValue = name;
		setNull_ev_wstring(this.nativeObject.pointer, nameParamValue);
	}
	native private boolean isNull_ev_int32(long pNativeObject, int i);
	/**
	 * i字段是否为空
	 * @param i 字段索引
	 * @return 为空返回true,否则返回false
	 */
	public boolean isNull(int i)
	{
		int iParamValue = i;
		boolean returnValue = isNull_ev_int32(this.nativeObject.pointer, iParamValue);
		return returnValue;
	}
	native private boolean isNull_ev_wstring(long pNativeObject, String name);
	/**
	 * name字段是否为空
	 * @param name 字段名
	 * @return 为空返回true,否则返回false
	 */
	public boolean isNull(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isNull_ev_wstring(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private int indexOf_ev_wstring(long pNativeObject, String name);
	/**
	 * name字段的索引号
	 * @param name 字段名
	 * @return 索引号
	 */
	public int indexOf(String name)
	{
		String nameParamValue = name;
		int returnValue = indexOf_ev_wstring(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private String fieldName_ev_int32(long pNativeObject, int i);
	/**
	 * 索引为i的字段名
	 * @param i 索引号
	 * @return 字段名
	 */
	public String fieldName(int i)
	{
		int iParamValue = i;
		String returnValue = fieldName_ev_int32(this.nativeObject.pointer, iParamValue);
		return returnValue;
	}
	native private long field_ev_int32(long pNativeObject, int i);
	/**
	 * 索引为i的字段
	 * @param i 索引号
	 * @return 字段
	 */
	public com.earthview.world.core.database.SqlField field(int i)
	{
		int iParamValue = i;
		long returnValue = field_ev_int32(this.nativeObject.pointer, iParamValue);
		com.earthview.world.core.database.SqlField __returnValue = new com.earthview.world.core.database.SqlField(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSqlField");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlField)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSqlField");
		}
		return __returnValue;
	}
	native private long field_ev_wstring(long pNativeObject, String name);
	/**
	 * 获取字段名为name的字段
	 * @param name 字段
	 * @return 字段
	 */
	public com.earthview.world.core.database.SqlField field(String name)
	{
		String nameParamValue = name;
		long returnValue = field_ev_wstring(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.core.database.SqlField __returnValue = new com.earthview.world.core.database.SqlField(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSqlField");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlField)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSqlField");
		}
		return __returnValue;
	}
	native private boolean isGenerated_ev_int32(long pNativeObject, int i);
	public boolean isGenerated(int i)
	{
		int iParamValue = i;
		boolean returnValue = isGenerated_ev_int32(this.nativeObject.pointer, iParamValue);
		return returnValue;
	}
	native private boolean isGenerated_ev_wstring(long pNativeObject, String name);
	public boolean isGenerated(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isGenerated_ev_wstring(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setGenerated_ev_wstring_ev_bool(long pNativeObject, String name, boolean generated);
	public void setGenerated(String name, boolean generated)
	{
		String nameParamValue = name;
		boolean generatedParamValue = generated;
		setGenerated_ev_wstring_ev_bool(this.nativeObject.pointer, nameParamValue, generatedParamValue);
	}
	native private void setGenerated_ev_int32_ev_bool(long pNativeObject, int i, boolean generated);
	public void setGenerated(int i, boolean generated)
	{
		int iParamValue = i;
		boolean generatedParamValue = generated;
		setGenerated_ev_int32_ev_bool(this.nativeObject.pointer, iParamValue, generatedParamValue);
	}
	native private void append_CSqlField(long pNativeObject, long field);
	/**
	 * 最佳字段
	 * @param field 字段
	 */
	public void append(com.earthview.world.core.database.SqlField field)
	{
		long fieldParamValue = field.nativeObject.pointer;
		append_CSqlField(this.nativeObject.pointer, fieldParamValue);
	}
	native private void replace_ev_int32_CSqlField(long pNativeObject, int pos, long field);
	/**
	 * 替换在pos处的字段
	 * @param pos 索引号
	 * @param field 字段
	 */
	public void replace(int pos, com.earthview.world.core.database.SqlField field)
	{
		int posParamValue = pos;
		long fieldParamValue = field.nativeObject.pointer;
		replace_ev_int32_CSqlField(this.nativeObject.pointer, posParamValue, fieldParamValue);
	}
	native private void insert_ev_int32_CSqlField(long pNativeObject, int pos, long field);
	/**
	 * 在pos处插入字段
	 * @param pos 索引号
	 * @param field 字段
	 */
	public void insert(int pos, com.earthview.world.core.database.SqlField field)
	{
		int posParamValue = pos;
		long fieldParamValue = field.nativeObject.pointer;
		insert_ev_int32_CSqlField(this.nativeObject.pointer, posParamValue, fieldParamValue);
	}
	native private void remove_ev_int32(long pNativeObject, int pos);
	/**
	 * 删除在pos处的字段
	 * @param pos 索引号
	 */
	public void remove(int pos)
	{
		int posParamValue = pos;
		remove_ev_int32(this.nativeObject.pointer, posParamValue);
	}
	native private boolean isEmpty_void(long pNativeObject);
	/**
	 * 字段数是否为0
	 * @param  
	 * @return 为0返回true,否则返回false
	 */
	public boolean isEmpty()
	{
		boolean returnValue = isEmpty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean contains_ev_wstring(long pNativeObject, String name);
	/**
	 * 是否包含字段名为name的字段
	 * @param name 字段名
	 * @return 包含返回true,否则返回false
	 */
	public boolean contains(String name)
	{
		String nameParamValue = name;
		boolean returnValue = contains_ev_wstring(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 删除所有字段
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void clearValues_void(long pNativeObject);
	/**
	 * 删除所有字段值并将值设为空
	 * @param  
	 */
	public void clearValues()
	{
		clearValues_void(this.nativeObject.pointer);
	}
	native private int count_void(long pNativeObject);
	/**
	 * 字段数
	 * @param  
	 * @return 字段数
	 */
	public int count()
	{
		int returnValue = count_void(this.nativeObject.pointer);
		return returnValue;
	}
	public SqlRecord(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SqlRecord(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SqlRecord fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SqlRecord obj = null;
 		if(baseObj instanceof SqlRecord)
		{
			obj = (SqlRecord)baseObj;
		} else {
			obj = new SqlRecord(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSqlRecord");
			obj.increaseCast();
		}

		return obj;
	}
}
