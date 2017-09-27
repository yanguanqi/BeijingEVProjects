package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScutcheonMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap", new ScutcheonMapClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public ScutcheonMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CScutcheonMap", null);
	}

	native private boolean push_EVString_CScreenScutcheon(long pNativeObject, String key, long val);
	/**
	 * 添加图元
	 * @param key 键
	 * @param val 图元
	 */
	public boolean push(String key, NativeObjectPointer<com.earthview.industryengine.industrygraphic.ScreenScutcheon> val)
	{
		String keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_EVString_CScreenScutcheon(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_EVString(long pNativeObject, String key);
	/**
	 * 是否存在指定键的图元
	 * @param key 键
	 * @return 是否存在
	 */
	public boolean exist(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_EVString(long pNativeObject, String key);
	/// </summary>
	/// 获取图元
	/// </summary>
	/// <param name="key">键</param>
	/// <returns>图元的引用</returns>
	public NativeObjectPointer<com.earthview.industryengine.industrygraphic.ScreenScutcheon> OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.industryengine.industrygraphic.ScreenScutcheon> __returnValue = new NativeObjectPointer<com.earthview.industryengine.industrygraphic.ScreenScutcheon>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	/// </summary>
	/// 获取图元
	/// </summary>
	/// <param name="key">键</param>
	/// <returns>图元的引用</returns>
	public NativeObjectPointer<com.earthview.industryengine.industrygraphic.ScreenScutcheon> get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.industryengine.industrygraphic.ScreenScutcheon> __returnValue = new NativeObjectPointer<com.earthview.industryengine.industrygraphic.ScreenScutcheon>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	/// </summary>
	/// 删除指定键的图元
	/// </summary>
	/// <param name="key">键</param>
	public void erase(String key)
	{
		String keyParamValue = key;
		erase_EVString(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/// </summary>
	/// 获取元素数目
	/// </summary>
	/// <returns>元素数目</returns>
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/// </summary>
	/// 清空元素
	/// </summary>
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	/// </summary>
	/// 获取是否为空
	/// </summary>
	/// <returns>是否为空</returns>
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ScutcheonMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScutcheonMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScutcheonMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScutcheonMap obj = null;
 		if(baseObj instanceof ScutcheonMap)
		{
			obj = (ScutcheonMap)baseObj;
		} else {
			obj = new ScutcheonMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScutcheonMap");
			obj.increaseCast();
		}

		return obj;
	}
}
