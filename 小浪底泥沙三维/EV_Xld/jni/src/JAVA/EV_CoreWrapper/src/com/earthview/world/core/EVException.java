package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 关于异常类在发生错误时跳出异常信息
 */
public class EVException extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CException", new EVExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCExceptionProxy", new EVExceptionClassFactory());
	}

	public enum ExceptionCodes implements INativeEnum<ExceptionCodes> {
		ERR_CANNOT_WRITE_TO_FILE(ExceptionCodesHelper.ENUM_VALUES[0]),
		ERR_INVALID_STATE(ExceptionCodesHelper.ENUM_VALUES[1]),
		ERR_INVALIDPARAMS(ExceptionCodesHelper.ENUM_VALUES[2]),
		ERR_RENDERINGAPI_ERROR(ExceptionCodesHelper.ENUM_VALUES[3]),
		ERR_DUPLICATE_ITEM(ExceptionCodesHelper.ENUM_VALUES[4]),
		ERR_ITEM_NOT_FOUND(ExceptionCodesHelper.ENUM_VALUES[5]),
		ERR_FILE_NOT_FOUND(ExceptionCodesHelper.ENUM_VALUES[6]),
		ERR_INTERNAL_ERROR(ExceptionCodesHelper.ENUM_VALUES[7]),
		ERR_RT_ASSERTION_FAILED(ExceptionCodesHelper.ENUM_VALUES[8]),
		ERR_NOT_IMPLEMENTED(ExceptionCodesHelper.ENUM_VALUES[9]),
		ERR_NOT_LICENSED(ExceptionCodesHelper.ENUM_VALUES[10]);
		private int value;
		ExceptionCodes(int i) {
			this.value = i;
		}
		public ExceptionCodes getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ExceptionCodes toEnum(int retval) {
			if(retval == ERR_CANNOT_WRITE_TO_FILE.value){
				return ERR_CANNOT_WRITE_TO_FILE;
			}
			else if(retval == ERR_INVALID_STATE.value){
				return ERR_INVALID_STATE;
			}
			else if(retval == ERR_INVALIDPARAMS.value){
				return ERR_INVALIDPARAMS;
			}
			else if(retval == ERR_RENDERINGAPI_ERROR.value){
				return ERR_RENDERINGAPI_ERROR;
			}
			else if(retval == ERR_DUPLICATE_ITEM.value){
				return ERR_DUPLICATE_ITEM;
			}
			else if(retval == ERR_ITEM_NOT_FOUND.value){
				return ERR_ITEM_NOT_FOUND;
			}
			else if(retval == ERR_FILE_NOT_FOUND.value){
				return ERR_FILE_NOT_FOUND;
			}
			else if(retval == ERR_INTERNAL_ERROR.value){
				return ERR_INTERNAL_ERROR;
			}
			else if(retval == ERR_RT_ASSERTION_FAILED.value){
				return ERR_RT_ASSERTION_FAILED;
			}
			else if(retval == ERR_NOT_IMPLEMENTED.value){
				return ERR_NOT_IMPLEMENTED;
			}
			else if(retval == ERR_NOT_LICENSED.value){
				return ERR_NOT_LICENSED;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ExceptionCodesHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param number 错误编码
	 * @param description 错误描述
	 * @param source 发生错误的函数
	 */
	public EVException(int number, String description, String source) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer numberPtr = new BasePointer(number);
		list.add("number", numberPtr.get());
		BasePointer descriptionPtr = new BasePointer(description);
		list.add("description", descriptionPtr.get());
		BasePointer sourcePtr = new BasePointer(source);
		list.add("source", sourcePtr.get());
		Create("JCExceptionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.EVException".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param number 错误编码
	 * @param description 错误描述
	 * @param source 发生错误的函数
	 * @param type 错误的类型
	 * @param file 错误所在的文件
	 * @param line 错误所在的文件的行数
	 */
	public EVException(int number, String description, String source, BytePointer type, BytePointer file, int line) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer numberPtr = new BasePointer(number);
		list.add("number", numberPtr.get());
		BasePointer descriptionPtr = new BasePointer(description);
		list.add("description", descriptionPtr.get());
		BasePointer sourcePtr = new BasePointer(source);
		list.add("source", sourcePtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer filePtr = new BasePointer(file);
		list.add("file", filePtr.get());
		BasePointer linePtr = new BasePointer(line);
		list.add("line", linePtr.get());
		Create("JCExceptionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.EVException".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param rhs EarthView::World::Core::CException类的引用
	 */
	public EVException(com.earthview.world.core.EVException rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("JCExceptionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.EVException".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void OperatorAssign_CException(long pNativeObject, long rhs);
	/**
	 * 赋值符号"="的重载
	 * @param rhs EarthView::World::Core::CException类的引用
	 */
	public void OperatorAssign(com.earthview.world.core.EVException rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CException(this.nativeObject.pointer, rhsParamValue);
	}
	protected  String getFullDescription_void_callback()
	{
		String returnValue = getFullDescription();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFullDescription_void(long pNativeObject);
	/**
	 * 得到错误的完整描述，包括错误编码，发生错误的行数以及发生错误的函数
	 * @param  
	 * @return 返回错误描述
	 */
	public String getFullDescription()
	{
		String returnValue = getFullDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFullDescription_void_NoVirtual(long pNativeObject);
	protected String getFullDescription_NoVirtual()
	{
		String returnValue = getFullDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getNumber_void_callback()
	{
		int returnValue = getNumber();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNumber_void(long pNativeObject);
	/**
	 * 得到错误编码
	 * @param  
	 * @return 返回错误编码
	 */
	public int getNumber()
	{
		int returnValue = getNumber_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumber_void_NoVirtual(long pNativeObject);
	protected int getNumber_NoVirtual()
	{
		int returnValue = getNumber_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getSource_void_callback()
	{
		String returnValue = getSource();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSource_void(long pNativeObject);
	/**
	 * 得到发生错误的函数
	 * @param  
	 * @return 返回错误函数
	 */
	public String getSource()
	{
		String returnValue = getSource_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSource_void_NoVirtual(long pNativeObject);
	protected String getSource_NoVirtual()
	{
		String returnValue = getSource_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getFile_void_callback()
	{
		String returnValue = getFile();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFile_void(long pNativeObject);
	/**
	 * 得到发生错误的文件
	 * @param  
	 * @return 返回错误文件
	 */
	public String getFile()
	{
		String returnValue = getFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFile_void_NoVirtual(long pNativeObject);
	protected String getFile_NoVirtual()
	{
		String returnValue = getFile_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getLine_void_callback()
	{
		int returnValue = getLine();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getLine_void(long pNativeObject);
	/**
	 * 得到发生错误的行数
	 * @param  
	 * @return 返回错误行数
	 */
	public int getLine()
	{
		int returnValue = getLine_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getLine_void_NoVirtual(long pNativeObject);
	protected int getLine_NoVirtual()
	{
		int returnValue = getLine_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getDescription_void_callback()
	{
		String returnValue = getDescription();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * 得到发生错误的描述（只是单纯的描述）
	 * @param  
	 * @return 返回错误描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long what_void(long pNativeObject);
	/**
	 * 跳过标准库中异常类中what函数
	 * @param  
	 * @return 直接返回getFullDescription函数返回值
	 */
	public BytePointer what()
	{
		long returnValue = what_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public EVException(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EVException(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getFullDescription_void(long pNativeObject, String method);
	native protected void register_getNumber_void(long pNativeObject, String method);
	native protected void register_getSource_void(long pNativeObject, String method);
	native protected void register_getFile_void(long pNativeObject, String method);
	native protected void register_getLine_void(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getFullDescription_void(this.nativeObject.pointer, "getFullDescription_void_callback");
			this.register_getNumber_void(this.nativeObject.pointer, "getNumber_void_callback");
			this.register_getSource_void(this.nativeObject.pointer, "getSource_void_callback");
			this.register_getFile_void(this.nativeObject.pointer, "getFile_void_callback");
			this.register_getLine_void(this.nativeObject.pointer, "getLine_void_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
		}
	}
	
	public static EVException fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EVException obj = null;
 		if(baseObj instanceof EVException)
		{
			obj = (EVException)baseObj;
		} else {
			obj = new EVException(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CException");
			obj.increaseCast();
		}

		return obj;
	}
}
