package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// Microsoft WARP (Windows Advanced Rasterization Platform) software device - http://msdn.microsoft.com/en-us/library/dd285359.aspx
//// Cplaceholder
public class ShaderProfiles extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ShaderProfiles", new ShaderProfilesClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ShaderProfiles() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ShaderProfiles", null);
	}

	native private boolean push_EVString(long pNativeObject, String key);
	/**
	 * 在map容器中添加元素
	 * @param key 键
	 * @return 成功增加true，否则false
	 */
	public boolean push(String key)
	{
		String keyParamValue = key;
		boolean returnValue = push_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private boolean exist_EVString(long pNativeObject, String key);
	/**
	 * 判断元素是否存在
	 * @param key 键
	 * @return 存在true，否则false
	 */
	public boolean exist(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	/**
	 * 删除元素
	 * @param key 键
	 */
	public void erase(String key)
	{
		String keyParamValue = key;
		erase_EVString(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回容器的大小
	 * @param  
	 * @return 容器的大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空容器
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断容器是否为空
	 * @param  
	 * @return 容器为空返回true，否则false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ShaderProfiles(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShaderProfiles(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ShaderProfiles fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShaderProfiles obj = null;
 		if(baseObj instanceof ShaderProfiles)
		{
			obj = (ShaderProfiles)baseObj;
		} else {
			obj = new ShaderProfiles(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ShaderProfiles");
			obj.increaseCast();
		}

		return obj;
	}
}
