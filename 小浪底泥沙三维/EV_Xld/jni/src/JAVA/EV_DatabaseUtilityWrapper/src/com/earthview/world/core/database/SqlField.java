package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 包含数据库某一表或者视图所有的字段
 */
public class SqlField extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlField", new SqlFieldClassFactory());
	}

	public enum EVRequiredStatus implements INativeEnum<EVRequiredStatus> {
		RS_Unknown(EVRequiredStatusHelper.ENUM_VALUES[0]),
		RS_Optional(EVRequiredStatusHelper.ENUM_VALUES[1]),
		RS_Required(EVRequiredStatusHelper.ENUM_VALUES[2]);
		private int value;
		EVRequiredStatus(int i) {
			this.value = i;
		}
		public EVRequiredStatus getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVRequiredStatus toEnum(int retval) {
			if(retval == RS_Unknown.value){
				return RS_Unknown;
			}
			else if(retval == RS_Optional.value){
				return RS_Optional;
			}
			else if(retval == RS_Required.value){
				return RS_Required;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVRequiredStatusHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public SqlField() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSqlField", null);
	}

	/**
	 * 默认构造函数
	 * @param fieldName 字段名
	 */
	public SqlField(String fieldName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fieldNamePtr = new BasePointer(fieldName);
		list.add("fieldName", fieldNamePtr.get());
		Create("CSqlField", list);
	}

	/**
	 * 默认构造函数
	 * @param fieldName 字段名
	 * @param type 字段类型
	 */
	public SqlField(String fieldName, com.earthview.world.core.Variant.EVDataType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fieldNamePtr = new BasePointer(fieldName);
		list.add("fieldName", fieldNamePtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CSqlField", list);
	}

	/**
	 * 拷贝构造函数
	 * @param other EarthView::World::Core::Database::CSqlField对象
	 */
	public SqlField(com.earthview.world.core.database.SqlField other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("CSqlField", list);
	}

	native private long OperatorAssign_CSqlField(long pNativeObject, long other);
	/**
	 * 赋值操作符的重载
	 * @param other EarthView::World::Core::Database::CSqlField对象
	 */
	public com.earthview.world.core.database.SqlField OperatorAssign(com.earthview.world.core.database.SqlField other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CSqlField(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.core.database.SqlField __returnValue = new com.earthview.world.core.database.SqlField(CreatedWhenConstruct.CWC_NotToCreate, "CSqlField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlField)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlField");
		}
		return __returnValue;
	}
	native private boolean OperatorEquals_CSqlField(long pNativeObject, long other);
	/**
	 * 操作符==的重载
	 * @param other EarthView::World::Core::Database::CSqlField对象
	 */
	public boolean OperatorEquals(com.earthview.world.core.database.SqlField other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CSqlField(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CSqlField(long pNativeObject, long other);
	/**
	 * 操作符!=的重载
	 * @param other EarthView::World::Core::Database::CSqlField对象
	 */
	public boolean OperatorNotEquals(com.earthview.world.core.database.SqlField other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CSqlField(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private void setValue_CVariant(long pNativeObject, long value);
	/**
	 * 设置字段值
	 * @param value 字段值
	 */
	public void setValue(com.earthview.world.core.Variant value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setValue_CVariant(this.nativeObject.pointer, valueParamValue);
	}
	native private long value_void(long pNativeObject);
	/**
	 * 获取字段值
	 * @param  
	 * @return 字段值
	 */
	public com.earthview.world.core.Variant value()
	{
		long returnValue = value_void(this.nativeObject.pointer);
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
	native private void setName_ev_wstring(long pNativeObject, String name);
	/**
	 * 设置字段名
	 * @param name 字段名
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_ev_wstring(this.nativeObject.pointer, nameParamValue);
	}
	native private long name_void(long pNativeObject);
	/**
	 * 获取字段名
	 * @param  
	 * @return 字段名
	 */
	public WideStringPointer name()
	{
		long returnValue = name_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean isNull_void(long pNativeObject);
	/**
	 * 字段是否为空
	 * @param  
	 * @return 为空返回true,否则返回false
	 */
	public boolean isNull()
	{
		boolean returnValue = isNull_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setReadOnly_ev_bool(long pNativeObject, boolean readOnly);
	/**
	 * 设置字段是否只读
	 * @param readOnly 是否只读
	 */
	public void setReadOnly(boolean readOnly)
	{
		boolean readOnlyParamValue = readOnly;
		setReadOnly_ev_bool(this.nativeObject.pointer, readOnlyParamValue);
	}
	native private boolean isReadOnly_void(long pNativeObject);
	/**
	 * 获取字段是否只读
	 * @param  
	 */
	public boolean isReadOnly()
	{
		boolean returnValue = isReadOnly_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清除字段值并设置为空
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private int type_void(long pNativeObject);
	/**
	 * 获取字段类型
	 * @param  
	 * @return 字段类型
	 */
	public com.earthview.world.core.Variant.EVDataType type()
	{
		int returnValue = type_void(this.nativeObject.pointer);
		return com.earthview.world.core.Variant.EVDataType.toEnum(returnValue);
	}
	native private boolean isAutoValue_void(long pNativeObject);
	/**
	 * 字段值是否是由数据库自动生成的
	 * @param  
	 * @return 是自动生成的返回true,否则返回false
	 */
	public boolean isAutoValue()
	{
		boolean returnValue = isAutoValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setType_EVDataType(long pNativeObject, int type);
	/**
	 * 设置字段类型
	 * @param type 字段类型
	 */
	public void setType(com.earthview.world.core.Variant.EVDataType type)
	{
		int typeParamValue = type.getValue();
		setType_EVDataType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setRequiredStatus_EVRequiredStatus(long pNativeObject, int status);
	/**
	 * 设置字段要求状态（有符号型还是无符号型）
	 * @param status 字段要求状态
	 */
	public void setRequiredStatus(com.earthview.world.core.database.SqlField.EVRequiredStatus status)
	{
		int statusParamValue = status.getValue();
		setRequiredStatus_EVRequiredStatus(this.nativeObject.pointer, statusParamValue);
	}
	native private void setRequired_ev_bool(long pNativeObject, boolean required);
	/**
	 * 设置字段要求状态（有符号型还是无符号型）
	 * @param required 是否
	 */
	public void setRequired(boolean required)
	{
		boolean requiredParamValue = required;
		setRequired_ev_bool(this.nativeObject.pointer, requiredParamValue);
	}
	native private void setLength_ev_int32(long pNativeObject, int fieldLength);
	/**
	 * 设置字段长度
	 * @param fieldLength 字段长度
	 */
	public void setLength(int fieldLength)
	{
		int fieldLengthParamValue = fieldLength;
		setLength_ev_int32(this.nativeObject.pointer, fieldLengthParamValue);
	}
	native private void setPrecision_ev_int32(long pNativeObject, int precision);
	/**
	 * 设置字段精度
	 * @param precision 字段精度
	 */
	public void setPrecision(int precision)
	{
		int precisionParamValue = precision;
		setPrecision_ev_int32(this.nativeObject.pointer, precisionParamValue);
	}
	native private void setDefaultValue_CVariant(long pNativeObject, long value);
	/**
	 * 设置字段默认值
	 * @param value 字段默认值
	 */
	public void setDefaultValue(com.earthview.world.core.Variant value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setDefaultValue_CVariant(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSqlType_ev_int32(long pNativeObject, int type);
	/**
	 * 设置字段的sql类型
	 * @param type 类型
	 */
	public void setSqlType(int type)
	{
		int typeParamValue = type;
		setSqlType_ev_int32(this.nativeObject.pointer, typeParamValue);
	}
	native private void setGenerated_ev_bool(long pNativeObject, boolean gen);
	/**
	 * 设置字段的生成状态
	 * @param gen 是否生成此字段
	 */
	public void setGenerated(boolean gen)
	{
		boolean genParamValue = gen;
		setGenerated_ev_bool(this.nativeObject.pointer, genParamValue);
	}
	native private void setAutoValue_ev_bool(long pNativeObject, boolean autoVal);
	/**
	 * 设置字段值是否是由数据库自动生成的
	 * @param autoVal 是否
	 */
	public void setAutoValue(boolean autoVal)
	{
		boolean autoValParamValue = autoVal;
		setAutoValue_ev_bool(this.nativeObject.pointer, autoValParamValue);
	}
	native private int RequiredStatus_void(long pNativeObject);
	/**
	 * 获取字段要求状态（有符号型还是无符号型）
	 * @param status 
	 * @return 字段要求状态
	 */
	public com.earthview.world.core.database.SqlField.EVRequiredStatus RequiredStatus()
	{
		int returnValue = RequiredStatus_void(this.nativeObject.pointer);
		return com.earthview.world.core.database.SqlField.EVRequiredStatus.toEnum(returnValue);
	}
	native private int length_void(long pNativeObject);
	/**
	 * 获取字段长度
	 * @param  
	 * @return 字段长度
	 */
	public int length()
	{
		int returnValue = length_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int precision_void(long pNativeObject);
	/**
	 * 设置字段精度
	 * @param  
	 * @return 字段精度
	 */
	public int precision()
	{
		int returnValue = precision_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long defaultValue_void(long pNativeObject);
	/**
	 * 获取字段默认值
	 * @param  
	 * @return 字段默认值
	 */
	public com.earthview.world.core.Variant defaultValue()
	{
		long returnValue = defaultValue_void(this.nativeObject.pointer);
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
	native private boolean isGenerated_void(long pNativeObject);
	/**
	 * 获取字段的生成状态
	 * @param  
	 * @return 如果此字段能被生成返回true,否则返回false
	 */
	public boolean isGenerated()
	{
		boolean returnValue = isGenerated_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void(long pNativeObject);
	/**
	 * 字段的EarthView::World::Core::CVariant类型是否有效
	 * @param  
	 * @return 有效返回true
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	public SqlField(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SqlField(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SqlField fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SqlField obj = null;
 		if(baseObj instanceof SqlField)
		{
			obj = (SqlField)baseObj;
		} else {
			obj = new SqlField(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSqlField");
			obj.increaseCast();
		}

		return obj;
	}
}
