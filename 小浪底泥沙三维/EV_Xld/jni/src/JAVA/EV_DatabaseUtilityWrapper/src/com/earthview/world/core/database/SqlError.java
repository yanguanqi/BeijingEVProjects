package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据库错误信息类
 */
public class SqlError extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlError", new SqlErrorClassFactory());
	}

	public enum EVErrorType implements INativeEnum<EVErrorType> {
		ET_NoError(EVErrorTypeHelper.ENUM_VALUES[0]),
		ET_ConnectionError(EVErrorTypeHelper.ENUM_VALUES[1]),
		ET_StatementError(EVErrorTypeHelper.ENUM_VALUES[2]),
		ET_TransactionError(EVErrorTypeHelper.ENUM_VALUES[3]),
		ET_UnknownError(EVErrorTypeHelper.ENUM_VALUES[4]);
		private int value;
		EVErrorType(int i) {
			this.value = i;
		}
		public EVErrorType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVErrorType toEnum(int retval) {
			if(retval == ET_NoError.value){
				return ET_NoError;
			}
			else if(retval == ET_ConnectionError.value){
				return ET_ConnectionError;
			}
			else if(retval == ET_StatementError.value){
				return ET_StatementError;
			}
			else if(retval == ET_TransactionError.value){
				return ET_TransactionError;
			}
			else if(retval == ET_UnknownError.value){
				return ET_UnknownError;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVErrorTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param  
	 */
	public SqlError() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSqlError", null);
	}

	/**
	 * 构造函数
	 * @param driverText 驱动错误文本
	 */
	public SqlError(String driverText) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer driverTextPtr = new BasePointer(driverText);
		list.add("driverText", driverTextPtr.get());
		Create("CSqlError", list);
	}

	/**
	 * 构造函数
	 * @param driverText 驱动错误文本
	 * @param databaseText 数据库错误文本
	 */
	public SqlError(String driverText, String databaseText) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer driverTextPtr = new BasePointer(driverText);
		list.add("driverText", driverTextPtr.get());
		BasePointer databaseTextPtr = new BasePointer(databaseText);
		list.add("databaseText", databaseTextPtr.get());
		Create("CSqlError", list);
	}

	/**
	 * 构造函数
	 * @param driverText 驱动错误文本
	 * @param databaseText 数据库错误文本
	 * @param type 错误类型
	 */
	public SqlError(String driverText, String databaseText, com.earthview.world.core.database.SqlError.EVErrorType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer driverTextPtr = new BasePointer(driverText);
		list.add("driverText", driverTextPtr.get());
		BasePointer databaseTextPtr = new BasePointer(databaseText);
		list.add("databaseText", databaseTextPtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CSqlError", list);
	}

	/**
	 * 构造函数
	 * @param driverText 驱动错误文本
	 * @param databaseText 数据库错误文本
	 * @param type 错误类型
	 * @param number 错误个数
	 */
	public SqlError(String driverText, String databaseText, com.earthview.world.core.database.SqlError.EVErrorType type, int number) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer driverTextPtr = new BasePointer(driverText);
		list.add("driverText", driverTextPtr.get());
		BasePointer databaseTextPtr = new BasePointer(databaseText);
		list.add("databaseText", databaseTextPtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer numberPtr = new BasePointer(number);
		list.add("number", numberPtr.get());
		Create("CSqlError", list);
	}

	/**
	 * 拷贝构造函数
	 * @param other 错误类
	 */
	public SqlError(com.earthview.world.core.database.SqlError other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("CSqlError", list);
	}

	native private long OperatorAssign_CSqlError(long pNativeObject, long other);
	/**
	 * 赋值操作符的重载
	 * @param other 错误类
	 */
	public com.earthview.world.core.database.SqlError OperatorAssign(com.earthview.world.core.database.SqlError other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CSqlError(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.core.database.SqlError __returnValue = new com.earthview.world.core.database.SqlError(CreatedWhenConstruct.CWC_NotToCreate, "CSqlError");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlError)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlError");
		}
		return __returnValue;
	}
	native private long driverText_void(long pNativeObject);
	/**
	 * 获取驱动错误文本
	 * @param  
	 * @return 驱动错误文本
	 */
	public WideStringPointer driverText()
	{
		long returnValue = driverText_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setDriverText_ev_wstring(long pNativeObject, String driverText);
	/**
	 * 设置驱动错误文本
	 * @param driverText 驱动错误文本
	 */
	public void setDriverText(String driverText)
	{
		String driverTextParamValue = driverText;
		setDriverText_ev_wstring(this.nativeObject.pointer, driverTextParamValue);
	}
	native private long databaseText_void(long pNativeObject);
	/**
	 * 获取数据库错误文本
	 * @param  
	 * @return 数据库错误文本
	 */
	public WideStringPointer databaseText()
	{
		long returnValue = databaseText_void(this.nativeObject.pointer);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setDatabaseText_ev_wstring(long pNativeObject, String databaseText);
	/**
	 * 设置数据库错误文本
	 * @param databaseText 数据库错误文本
	 */
	public void setDatabaseText(String databaseText)
	{
		String databaseTextParamValue = databaseText;
		setDatabaseText_ev_wstring(this.nativeObject.pointer, databaseTextParamValue);
	}
	native private int type_void(long pNativeObject);
	/**
	 * 获取错误类型
	 * @param  
	 * @return 错误类型
	 */
	public com.earthview.world.core.database.SqlError.EVErrorType type()
	{
		int returnValue = type_void(this.nativeObject.pointer);
		return com.earthview.world.core.database.SqlError.EVErrorType.toEnum(returnValue);
	}
	native private void setType_EVErrorType(long pNativeObject, int type);
	/**
	 * 设置错误类型
	 * @param type 错误类型
	 */
	public void setType(com.earthview.world.core.database.SqlError.EVErrorType type)
	{
		int typeParamValue = type.getValue();
		setType_EVErrorType(this.nativeObject.pointer, typeParamValue);
	}
	native private int number_void(long pNativeObject);
	/**
	 * 获取错误个数
	 * @param  
	 * @return 错误个数
	 */
	public int number()
	{
		int returnValue = number_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setNumber_int(long pNativeObject, int number);
	/**
	 * 设置错误个数
	 * @param number 错误个数
	 */
	public void setNumber(int number)
	{
		int numberParamValue = number;
		setNumber_int(this.nativeObject.pointer, numberParamValue);
	}
	native private String text_void(long pNativeObject);
	/**
	 * 获取由驱动错误和数据库错误组成的字符串
	 * @param  
	 * @return 驱动错误和数据库错误组成的字符串
	 */
	public String text()
	{
		String returnValue = text_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void(long pNativeObject);
	/**
	 * 错误是否被设置
	 * @param  
	 * @return 被设置返回true,否则返回false
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	public SqlError(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SqlError(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SqlError fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SqlError obj = null;
 		if(baseObj instanceof SqlError)
		{
			obj = (SqlError)baseObj;
		} else {
			obj = new SqlError(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSqlError");
			obj.increaseCast();
		}

		return obj;
	}
}
