package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 切割基础参数信息类
 */
public class VectorCacheBasicParam extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam", new VectorCacheBasicParamClassFactory());
	}

	native private boolean setFirstFolderName_EVString(long pNativeObject, String value);
	/**
	 * 设置首文件夹的名称
	 * @param value 文件夹名称
	 * @return 成功返回true，否则返回false
	 */
	public boolean setFirstFolderName(String value)
	{
		String valueParamValue = value;
		boolean returnValue = setFirstFolderName_EVString(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private boolean setSecondFolderName_EVString(long pNativeObject, String value);
	/**
	 * 设置次文件夹名称
	 * @param value 文件夹名称
	 * @return 成功返回true，否则返回false
	 */
	public boolean setSecondFolderName(String value)
	{
		String valueParamValue = value;
		boolean returnValue = setSecondFolderName_EVString(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private boolean setResultName_EVString(long pNativeObject, String value);
	/**
	 * 设置切割结果名称
	 * @param value 切割结果名称
	 * @return 成功返回true，否则返回false
	 */
	public boolean setResultName(String value)
	{
		String valueParamValue = value;
		boolean returnValue = setResultName_EVString(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private boolean setSavePath_EVString(long pNativeObject, String value);
	/**
	 * 设置切割结果所在绝对路径
	 * @param value 路径
	 * @return 成功返回true，否则返回false
	 */
	public boolean setSavePath(String value)
	{
		String valueParamValue = value;
		boolean returnValue = setSavePath_EVString(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private boolean setCacheType_EVVectorCacheDataFormat(long pNativeObject, int type);
	/**
	 * 设置切割结果的存储格式
	 * @param type 切割结果存储格式
	 * @return 成功返回true，否则返回false
	 */
	public boolean setCacheType(com.earthview.world.spatial.vectorcache.EVVectorCacheDataFormat type)
	{
		int typeParamValue = type.getValue();
		boolean returnValue = setCacheType_EVVectorCacheDataFormat(this.nativeObject.pointer, typeParamValue);
		return returnValue;
	}
	native private boolean setTemplateMode_EVVectorCacheTemplateMode(long pNativeObject, int mode);
	/**
	 * 设置切割模式
	 * @param mode 切割模式
	 * @return 成功返回true，否则返回false
	 */
	public boolean setTemplateMode(com.earthview.world.spatial.vectorcache.EVVectorCacheTemplateMode mode)
	{
		int modeParamValue = mode.getValue();
		boolean returnValue = setTemplateMode_EVVectorCacheTemplateMode(this.nativeObject.pointer, modeParamValue);
		return returnValue;
	}
	native private long getFirstFolderName_void(long pNativeObject);
	/**
	 * 获取首文件夹名称
	 * @return 首文件夹名称
	 */
	public BytePointer getFirstFolderName()
	{
		long returnValue = getFirstFolderName_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getSecondFolderName_void(long pNativeObject);
	/**
	 * 获取次文件夹名称
	 * @return 次文件夹名称
	 */
	public BytePointer getSecondFolderName()
	{
		long returnValue = getSecondFolderName_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getResultName_void(long pNativeObject);
	/**
	 * 获取切割结果名称
	 * @return 切割结果名称
	 */
	public BytePointer getResultName()
	{
		long returnValue = getResultName_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getSavePath_void(long pNativeObject);
	/**
	 * 获取切割结果所在路径
	 * @return 切割结果所在路径
	 */
	public BytePointer getSavePath()
	{
		long returnValue = getSavePath_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getCacheType_void(long pNativeObject);
	/**
	 * 设置切割结果的存储格式
	 * @return 存储格式
	 */
	public com.earthview.world.spatial.vectorcache.EVVectorCacheDataFormat getCacheType()
	{
		int returnValue = getCacheType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.vectorcache.EVVectorCacheDataFormat.toEnum(returnValue);
	}
	native private int getTemplateMode_void(long pNativeObject);
	/**
	 * 获取切割模式
	 * @return 切割模式
	 */
	public com.earthview.world.spatial.vectorcache.EVVectorCacheTemplateMode getTemplateMode()
	{
		int returnValue = getTemplateMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.vectorcache.EVVectorCacheTemplateMode.toEnum(returnValue);
	}
	/**
	 * 构造函数
	 */
	public VectorCacheBasicParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVectorCacheBasicParam", null);
	}

	public VectorCacheBasicParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorCacheBasicParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VectorCacheBasicParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorCacheBasicParam obj = null;
 		if(baseObj instanceof VectorCacheBasicParam)
		{
			obj = (VectorCacheBasicParam)baseObj;
		} else {
			obj = new VectorCacheBasicParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorCacheBasicParam");
			obj.increaseCast();
		}

		return obj;
	}
}
