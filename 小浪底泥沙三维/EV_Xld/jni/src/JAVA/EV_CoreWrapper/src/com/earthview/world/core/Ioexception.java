package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 输入输出的异常类跳出输入输出异常信息
 */
public class Ioexception extends com.earthview.world.core.EVException {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CIOException", new IoexceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCIOExceptionProxy", new IoexceptionClassFactory());
	}

	/**
	 * 构造函数
	 * @param inNumber 错误编码
	 * @param inDescription 错误描述
	 * @param inSource 发生错误的函数
	 * @param inFile 错误所在的文件
	 * @param inLine 错误所在的文件的行数
	 */
	public Ioexception(int inNumber, String inDescription, String inSource, BytePointer inFile, int inLine) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer inNumberPtr = new BasePointer(inNumber);
		list.add("inNumber", inNumberPtr.get());
		BasePointer inDescriptionPtr = new BasePointer(inDescription);
		list.add("inDescription", inDescriptionPtr.get());
		BasePointer inSourcePtr = new BasePointer(inSource);
		list.add("inSource", inSourcePtr.get());
		BasePointer inFilePtr = new BasePointer(inFile);
		list.add("inFile", inFilePtr.get());
		BasePointer inLinePtr = new BasePointer(inLine);
		list.add("inLine", inLinePtr.get());
		Create("JCIOExceptionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.Ioexception".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Ioexception(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ioexception(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 得到错误的完整描述，包括错误编码，发生错误的行数以及发生错误的函数
	 * @param  
	 * @return 返回错误描述
	 */
	public String getFullDescription()
	{
		return super.getFullDescription_NoVirtual();
	}
	/**
	 * 得到错误编码
	 * @param  
	 * @return 返回错误编码
	 */
	public int getNumber()
	{
		return super.getNumber_NoVirtual();
	}
	/**
	 * 得到发生错误的函数
	 * @param  
	 * @return 返回错误函数
	 */
	public String getSource()
	{
		return super.getSource_NoVirtual();
	}
	/**
	 * 得到发生错误的文件
	 * @param  
	 * @return 返回错误文件
	 */
	public String getFile()
	{
		return super.getFile_NoVirtual();
	}
	/**
	 * 得到发生错误的行数
	 * @param  
	 * @return 返回错误行数
	 */
	public int getLine()
	{
		return super.getLine_NoVirtual();
	}
	/**
	 * 得到发生错误的描述（只是单纯的描述）
	 * @param  
	 * @return 返回错误描述
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
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
	
	public static Ioexception fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ioexception obj = null;
 		if(baseObj instanceof Ioexception)
		{
			obj = (Ioexception)baseObj;
		} else {
			obj = new Ioexception(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CIOException");
			obj.increaseCast();
		}

		return obj;
	}
}
