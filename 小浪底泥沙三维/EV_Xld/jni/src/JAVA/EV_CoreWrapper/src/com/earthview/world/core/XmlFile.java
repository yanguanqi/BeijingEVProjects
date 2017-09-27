package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 文件类对各种文件的操作
 */
public class XmlFile extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CXmlFile", new XmlFileClassFactory());
	}

	public enum enumXmlEncodingType implements INativeEnum<enumXmlEncodingType> {
		xmlEncodingUnknown(enumXmlEncodingTypeHelper.ENUM_VALUES[0]),
		xmlEncodingUtf8(enumXmlEncodingTypeHelper.ENUM_VALUES[1]),
		xmlEncodingLegacy(enumXmlEncodingTypeHelper.ENUM_VALUES[2]),
		xmlEncodingDefault(enumXmlEncodingTypeHelper.ENUM_VALUES[3]),
		xmlEncodingGB2312(enumXmlEncodingTypeHelper.ENUM_VALUES[4]);
		private int value;
		enumXmlEncodingType(int i) {
			this.value = i;
		}
		public enumXmlEncodingType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final enumXmlEncodingType toEnum(int retval) {
			if(retval == xmlEncodingUnknown.value){
				return xmlEncodingUnknown;
			}
			else if(retval == xmlEncodingUtf8.value){
				return xmlEncodingUtf8;
			}
			else if(retval == xmlEncodingLegacy.value){
				return xmlEncodingLegacy;
			}
			else if(retval == xmlEncodingDefault.value){
				return xmlEncodingDefault;
			}
			else if(retval == xmlEncodingGB2312.value){
				return xmlEncodingGB2312;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class enumXmlEncodingTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public XmlFile() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CXmlFile", null);
	}

	/**
	 * 构造函数
	 * @param strFilename 文件名
	 * @param encodingType 编码类型
	 */
	public XmlFile(String strFilename, com.earthview.world.core.XmlFile.enumXmlEncodingType encodingType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer strFilenamePtr = new BasePointer(strFilename);
		list.add("strFilename", strFilenamePtr.get());
		BasePointer encodingTypePtr = new BasePointer(encodingType);
		list.add("encodingType", encodingTypePtr.get());
		Create("CXmlFile", list);
	}

	/**
	 * 构造函数
	 * @param buffer 缓冲区
	 * @param size 大小
	 * @param encodingType 编码类型
	 */
	public XmlFile(String buffer, long size, com.earthview.world.core.XmlFile.enumXmlEncodingType encodingType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer bufferPtr = new BasePointer(buffer);
		list.add("buffer", bufferPtr.get());
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		BasePointer encodingTypePtr = new BasePointer(encodingType);
		list.add("encodingType", encodingTypePtr.get());
		Create("CXmlFile", list);
	}

	native private boolean createXml_ev_string(long pNativeObject, String strRootName);
	/**
	 * 使用指定的根结点名称创建新的XML数据
	 * @param strRootName XML数据根结点的名称
	 * @return 有返回值true，否则返回false
	 */
	public boolean createXml(String strRootName)
	{
		String strRootNameParamValue = strRootName;
		boolean returnValue = createXml_ev_string(this.nativeObject.pointer, strRootNameParamValue);
		return returnValue;
	}
	native private boolean createXml_ev_string_enumXmlEncodingType(long pNativeObject, String strRootName, int encodingType);
	/**
	 * 使用指定的根结点名称创建新的XML数据
	 * @param strRootName 根节点名称
	 * @param encodingType 编码类型
	 * @return 有返回值true，否则返回false
	 */
	public boolean createXml(String strRootName, com.earthview.world.core.XmlFile.enumXmlEncodingType encodingType)
	{
		String strRootNameParamValue = strRootName;
		int encodingTypeParamValue = encodingType.getValue();
		boolean returnValue = createXml_ev_string_enumXmlEncodingType(this.nativeObject.pointer, strRootNameParamValue, encodingTypeParamValue);
		return returnValue;
	}
	native private boolean loadFile_enumXmlEncodingType(long pNativeObject, int encodingType);
	/**
	 * 读取并解析XML文件
	 * @param encodingType 编码类型
	 * @return 有返回值true，否则返回false
	 */
	public boolean loadFile(com.earthview.world.core.XmlFile.enumXmlEncodingType encodingType)
	{
		int encodingTypeParamValue = encodingType.getValue();
		boolean returnValue = loadFile_enumXmlEncodingType(this.nativeObject.pointer, encodingTypeParamValue);
		return returnValue;
	}
	native private boolean loadFile_ev_string_enumXmlEncodingType(long pNativeObject, String strFilename, int encodingType);
	/**
	 * 读取并解析XML文件
	 * @param strFilename 文件名
	 * @param encodingType 类型
	 * @return 有返回值true，否则返回false
	 */
	public boolean loadFile(String strFilename, com.earthview.world.core.XmlFile.enumXmlEncodingType encodingType)
	{
		String strFilenameParamValue = strFilename;
		int encodingTypeParamValue = encodingType.getValue();
		boolean returnValue = loadFile_ev_string_enumXmlEncodingType(this.nativeObject.pointer, strFilenameParamValue, encodingTypeParamValue);
		return returnValue;
	}
	native private boolean loadString_ev_string_enumXmlEncodingType(long pNativeObject, String strXmlString, int encodingType);
	/**
	 * 读取并解析XML字符串
	 * @param strXmlString XML字符串
	 * @param encodingType 编码类型
	 * @return 有返回值true，否则返回false
	 */
	public boolean loadString(String strXmlString, com.earthview.world.core.XmlFile.enumXmlEncodingType encodingType)
	{
		String strXmlStringParamValue = strXmlString;
		int encodingTypeParamValue = encodingType.getValue();
		boolean returnValue = loadString_ev_string_enumXmlEncodingType(this.nativeObject.pointer, strXmlStringParamValue, encodingTypeParamValue);
		return returnValue;
	}
	native private String ev_toString_void(long pNativeObject);
	/**
	 * 将当前的XML数据转换为EVString
	 * @param  
	 * @return XML字符串
	 */
	public String ev_toString()
	{
		String returnValue = ev_toString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean saveFile_ev_int32(long pNativeObject, int iUnbuffered);
	/**
	 * 将当前的XML数据存储到文件
	 * @param iUnbuffered 
	 * @return 有返回值true，否则返回false
	 */
	public boolean saveFile(int iUnbuffered)
	{
		int iUnbufferedParamValue = iUnbuffered;
		boolean returnValue = saveFile_ev_int32(this.nativeObject.pointer, iUnbufferedParamValue);
		return returnValue;
	}
	native private boolean saveFile_ev_string_ev_int32(long pNativeObject, String strFilename, int iUnbuffered);
	/**
	 * 将当前的XML数据存储到文件
	 * @param strFilename 文件名
	 * @param iUnbuffered 
	 * @return 有返回值true，否则返回false
	 */
	public boolean saveFile(String strFilename, int iUnbuffered)
	{
		String strFilenameParamValue = strFilename;
		int iUnbufferedParamValue = iUnbuffered;
		boolean returnValue = saveFile_ev_string_ev_int32(this.nativeObject.pointer, strFilenameParamValue, iUnbufferedParamValue);
		return returnValue;
	}
	native private boolean isLoaded_void(long pNativeObject);
	/**
	 * 判断当前对象是否已经读取了XML数据
	 * @param  
	 * @return 已经打开返回true，否则返回false
	 */
	public boolean isLoaded()
	{
		boolean returnValue = isLoaded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void unload_void(long pNativeObject);
	/**
	 * 关闭当前打开的XML解析内容
	 * @param  
	 */
	public void unload()
	{
		unload_void(this.nativeObject.pointer);
	}
	native private long getRoot_void(long pNativeObject);
	/**
	 * 获取XML文档的根元素结点
	 * @param  
	 * @return 根节点对象
	 */
	public com.earthview.world.core.XmlElement getRoot()
	{
		long returnValue = getRoot_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private boolean getRoot_CXmlElement(long pNativeObject, long rootElement);
	/**
	 * 获取XML文档的根元素结点
	 * @param rootElement 根结点对象
	 * @return 获取成功返回true，否则返回false
	 */
	public boolean getRoot(com.earthview.world.core.XmlElement rootElement)
	{
		long rootElementParamValue = rootElement.nativeObject.pointer;
		boolean returnValue = getRoot_CXmlElement(this.nativeObject.pointer, rootElementParamValue);
		return returnValue;
	}
	native private String getVersion_void(long pNativeObject);
	/**
	 * 获取声明信息中的版本信息
	 * @param  
	 * @return 字符串形式的版本信息
	 */
	public String getVersion()
	{
		String returnValue = getVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getEncoding_void(long pNativeObject);
	/**
	 * 获取声明信息中的编码信息
	 * @param  
	 * @return 字符串形式的编码信息
	 */
	public String getEncoding()
	{
		String returnValue = getEncoding_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getLastErrorDescript_void(long pNativeObject);
	/**
	 * 获取最后一条错误描述信息
	 * @param  
	 * @return 错误描述信息
	 */
	public String getLastErrorDescript()
	{
		String returnValue = getLastErrorDescript_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean setVersion_ev_string(long pNativeObject, String strVersion);
	/**
	 * 设置声明信息中的版本信息
	 * @param  strVersion 版本信息的值
	 */
	public boolean setVersion(String strVersion)
	{
		String strVersionParamValue = strVersion;
		boolean returnValue = setVersion_ev_string(this.nativeObject.pointer, strVersionParamValue);
		return returnValue;
	}
	public XmlFile(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public XmlFile(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static XmlFile fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		XmlFile obj = null;
 		if(baseObj instanceof XmlFile)
		{
			obj = (XmlFile)baseObj;
		} else {
			obj = new XmlFile(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CXmlFile");
			obj.increaseCast();
		}

		return obj;
	}
}
