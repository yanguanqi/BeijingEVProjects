package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 矢量缓存制作类
 */
public class VectorCacheCreator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CVectorCacheCreator", new VectorCacheCreatorClassFactory());
	}

	/**
	 * 构造函数
	 */
	public VectorCacheCreator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVectorCacheCreator", null);
	}

	native private boolean setBasicParam_CVectorCacheBasicParam(long pNativeObject, long param);
	/**
	 * 设置切割参数
	 * @param param 切割参数对象
	 * @return 成功返回true，否则返回false
	 */
	public boolean setBasicParam(com.earthview.world.spatial.vectorcache.VectorCacheBasicParam param)
	{
		long paramParamValue = (param == null ? 0L : param.nativeObject.pointer);
		boolean returnValue = setBasicParam_CVectorCacheBasicParam(this.nativeObject.pointer, paramParamValue);
		return returnValue;
	}
	native private String nameSwitch_EVString(long pNativeObject, long beforeName);
	/**
	 * 字符转换
	 * @param param 转换之前的字符
	 */
	public String nameSwitch(StringPointer beforeName)
	{
		long beforeNameParamValue = beforeName.nativeObject.pointer;
		String returnValue = nameSwitch_EVString(this.nativeObject.pointer, beforeNameParamValue);
		return returnValue;
	}
	native private long getBasicParamRef_void(long pNativeObject);
	/**
	 * 获取切割参数
	 * @return 切割参数对象指针
	 */
	public com.earthview.world.spatial.vectorcache.VectorCacheBasicParam getBasicParamRef()
	{
		long returnValue = getBasicParamRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.vectorcache.VectorCacheBasicParam __returnValue = new com.earthview.world.spatial.vectorcache.VectorCacheBasicParam(CreatedWhenConstruct.CWC_NotToCreate, "CVectorCacheBasicParam");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.vectorcache.VectorCacheBasicParam)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVectorCacheBasicParam");
		}
		return __returnValue;
	}
	native private boolean addCreateDatasetInfo_IDataset_CCacheProcessInfo(long pNativeObject, long ref_dataset, long info);
	/**
	 * /添加切割信息/
	 * @param dataset 切割数据集
	 * @param info 切割信息
	 * @return 成功返回true，否则返回false
	 */
	public boolean addCreateDatasetInfo(com.earthview.world.spatial.geodataset.Idataset ref_dataset, com.earthview.world.spatial.vectorcache.CacheProcessInfo info)
	{
		long ref_datasetParamValue = (ref_dataset == null ? 0L : ref_dataset.nativeObject.pointer);
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		boolean returnValue = addCreateDatasetInfo_IDataset_CCacheProcessInfo(this.nativeObject.pointer, ref_datasetParamValue, infoParamValue);
		return returnValue;
	}
	native private int makeCache_void(long pNativeObject);
	/**
	 * 生成缓存
	 * @return 处理结果，0正确
	 */
	public com.earthview.world.spatial.vectorcache.EVVectorCacheProcessResult makeCache()
	{
		int returnValue = makeCache_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.vectorcache.EVVectorCacheProcessResult.toEnum(returnValue);
	}
	native private long getProcessMessageRef_void(long pNativeObject);
	/**
	 * 获取切割进程信息
	 * @return 切割进程对象指针
	 */
	public com.earthview.world.spatial.vectorcache.VectorCacheProcessMessage getProcessMessageRef()
	{
		long returnValue = getProcessMessageRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.vectorcache.VectorCacheProcessMessage __returnValue = new com.earthview.world.spatial.vectorcache.VectorCacheProcessMessage(CreatedWhenConstruct.CWC_NotToCreate, "CVectorCacheProcessMessage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.vectorcache.VectorCacheProcessMessage)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVectorCacheProcessMessage");
		}
		return __returnValue;
	}
	native private void stopProcess_void(long pNativeObject);
	/**
	 * 终止程序
	 */
	public void stopProcess()
	{
		stopProcess_void(this.nativeObject.pointer);
	}
	native private static boolean checkValidTableName_StringVector_StringVector(long tableNameList, long errorNameList);
	/**
	 * 检测是否可用传入的名称创建数据库表
	 * @param tableNameList 待检测名称列表
	 * @param errorNameList 错误名称列表
	 * @return 检测成功返回true，否则返回false
	 */
	public static boolean checkValidTableName(com.earthview.world.core.StringVector tableNameList, com.earthview.world.core.StringVector errorNameList)
	{
		long tableNameListParamValue = tableNameList.nativeObject.pointer;
		long errorNameListParamValue = errorNameList.nativeObject.pointer;
		boolean returnValue = checkValidTableName_StringVector_StringVector(tableNameListParamValue, errorNameListParamValue);
		return returnValue;
	}
	public VectorCacheCreator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorCacheCreator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VectorCacheCreator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorCacheCreator obj = null;
 		if(baseObj instanceof VectorCacheCreator)
		{
			obj = (VectorCacheCreator)baseObj;
		} else {
			obj = new VectorCacheCreator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorCacheCreator");
			obj.increaseCast();
		}

		return obj;
	}
}
