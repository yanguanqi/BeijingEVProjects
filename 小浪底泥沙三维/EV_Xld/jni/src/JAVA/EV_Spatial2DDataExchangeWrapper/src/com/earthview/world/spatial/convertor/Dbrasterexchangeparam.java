package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 栅格数据交换参数类
 */
public class Dbrasterexchangeparam extends com.earthview.world.spatial.convertor.DataExchangeParam {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDBRasterExchangeParam", new DbrasterexchangeparamClassFactory());
	}

	///<summary>
	///默认构造函数
	///<summary>
	public Dbrasterexchangeparam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDBRasterExchangeParam", null);
	}

	native private boolean isBuildOverView_void(long pNativeObject);
	/**
	 * 是否创建金字塔
	 */
	public boolean isBuildOverView()
	{
		boolean returnValue = isBuildOverView_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBuildOverView_bool(long pNativeObject, boolean bValue);
	/**
	 * 设置是否创建金字塔
	 */
	public void setBuildOverView(boolean bValue)
	{
		boolean bValueParamValue = bValue;
		setBuildOverView_bool(this.nativeObject.pointer, bValueParamValue);
	}
	native private int getMaxOverViewLevel_void(long pNativeObject);
	/**
	 * 获取最高金字塔等级
	 */
	public int getMaxOverViewLevel()
	{
		int returnValue = getMaxOverViewLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxOverViewLevel_int(long pNativeObject, int nValue);
	/**
	 * 设置最高金字塔等级
	 */
	public void setMaxOverViewLevel(int nValue)
	{
		int nValueParamValue = nValue;
		setMaxOverViewLevel_int(this.nativeObject.pointer, nValueParamValue);
	}
	native private int getCompressType_void(long pNativeObject);
	/**
	 * 获取压缩方式
	 */
	public int getCompressType()
	{
		int returnValue = getCompressType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCompressType_int(long pNativeObject, int nValue);
	/**
	 * 设置压缩方式
	 */
	public void setCompressType(int nValue)
	{
		int nValueParamValue = nValue;
		setCompressType_int(this.nativeObject.pointer, nValueParamValue);
	}
	native private int getBlockSize_void(long pNativeObject);
	/**
	 * 获取分块大小
	 */
	public int getBlockSize()
	{
		int returnValue = getBlockSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBlockSize_int(long pNativeObject, int nValue);
	/**
	 * 设置分块大小
	 */
	public void setBlockSize(int nValue)
	{
		int nValueParamValue = nValue;
		setBlockSize_int(this.nativeObject.pointer, nValueParamValue);
	}
	public Dbrasterexchangeparam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Dbrasterexchangeparam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Dbrasterexchangeparam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Dbrasterexchangeparam obj = null;
 		if(baseObj instanceof Dbrasterexchangeparam)
		{
			obj = (Dbrasterexchangeparam)baseObj;
		} else {
			obj = new Dbrasterexchangeparam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDBRasterExchangeParam");
			obj.increaseCast();
		}

		return obj;
	}
}
