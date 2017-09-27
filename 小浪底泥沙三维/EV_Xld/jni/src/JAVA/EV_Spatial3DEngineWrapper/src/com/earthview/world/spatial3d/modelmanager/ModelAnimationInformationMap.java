package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelAnimationInformationMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap", new ModelAnimationInformationMapClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ModelAnimationInformationMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelAnimationInformationMap", null);
	}

	native private boolean push_EVString_CModelAnimationInfomation(long pNativeObject, String key, long val);
	/**
	 * 增加动画集合元素
	 * @param key 键
	 * @param val 值
	 * @return 成功增加true，否则false
	 */
	public boolean push(String key, NativeObjectPointer<com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation> val)
	{
		String keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_EVString_CModelAnimationInfomation(this.nativeObject.pointer, keyParamValue, valParamValue);
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
	native private long OperatorIndex_EVString(long pNativeObject, String key);
	/**
	 * 重载[]操作符
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public NativeObjectPointer<com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation> OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	/**
	 * 获得键对应的值
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public NativeObjectPointer<com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation> get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	/**
	 * 删除键对应的键值对
	 * @param key 键
	 */
	public void erase(String key)
	{
		String keyParamValue = key;
		erase_EVString(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回集合的大小
	 * @param  
	 * @return 集合的大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空集合
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断集合是否为空
	 * @param  
	 * @return 集合为空返回true，否则false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getKey_ev_int32_EVString(long pNativeObject, int index, long key);
	public boolean getKey(int index, StringPointer key)
	{
		int indexParamValue = index;
		long keyParamValue = key.nativeObject.pointer;
		boolean returnValue = getKey_ev_int32_EVString(this.nativeObject.pointer, indexParamValue, keyParamValue);
		return returnValue;
	}
	native private long getValue_ev_int32_ev_bool(long pNativeObject, int index, long succes);
	public com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation getValue(int index, BooleanPointer succes)
	{
		int indexParamValue = index;
		long succesParamValue = succes.nativeObject.pointer;
		long returnValue = getValue_ev_int32_ev_bool(this.nativeObject.pointer, indexParamValue, succesParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation(CreatedWhenConstruct.CWC_NotToCreate, "CModelAnimationInfomation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelAnimationInfomation");
		}
		return __returnValue;
	}
	public ModelAnimationInformationMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelAnimationInformationMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelAnimationInformationMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelAnimationInformationMap obj = null;
 		if(baseObj instanceof ModelAnimationInformationMap)
		{
			obj = (ModelAnimationInformationMap)baseObj;
		} else {
			obj = new ModelAnimationInformationMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelAnimationInformationMap");
			obj.increaseCast();
		}

		return obj;
	}
}
