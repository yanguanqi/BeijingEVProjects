package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasMerge extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLasMerge", new LasMergeClassFactory());
	}

	/**
	 * 构造函数
	 */
	public LasMerge() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLasMerge", null);
	}

	native private void setParam_CLasMergeQuadTreeParam(long pNativeObject, long param);
	/**
	 * 设置参数
	 */
	public void setParam(LasMergeQuadTreeParam param)
	{
		long paramParamValue = param.nativeObject.pointer;
		setParam_CLasMergeQuadTreeParam(this.nativeObject.pointer, paramParamValue);
	}
	native private long getParam_void(long pNativeObject);
	/**
	 * 获取参数
	 */
	public LasMergeQuadTreeParam getParam()
	{
		long returnValue = getParam_void(this.nativeObject.pointer);
		LasMergeQuadTreeParam __returnValue = new LasMergeQuadTreeParam(CreatedWhenConstruct.CWC_NotToCreate, "CLasMergeQuadTreeParam");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (LasMergeQuadTreeParam)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLasMergeQuadTreeParam");
		}
		return __returnValue;
	}
	native private void merge_EVString_LasRecordInfoList(long pNativeObject, String srcFolder, long lasRecordInfoList);
	/**
	 * 合并多个.evlas数据集生成.evlasxg数据集
	 */
	public void merge(String srcFolder, LasRecordInfoList lasRecordInfoList)
	{
		String srcFolderParamValue = srcFolder;
		long lasRecordInfoListParamValue = lasRecordInfoList.nativeObject.pointer;
		merge_EVString_LasRecordInfoList(this.nativeObject.pointer, srcFolderParamValue, lasRecordInfoListParamValue);
	}
	public LasMerge(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LasMerge(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LasMerge fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LasMerge obj = null;
 		if(baseObj instanceof LasMerge)
		{
			obj = (LasMerge)baseObj;
		} else {
			obj = new LasMerge(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLasMerge");
			obj.increaseCast();
		}

		return obj;
	}
}
