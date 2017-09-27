package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据集节点树类
 */
public class EffectUserTypeTree extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree", new EffectUserTypeTreeClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EffectUserTypeTree() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEffectUserTypeTree", null);
	}

	/**
	 * 构造函数
	 * @param code 用户自定义特效分类编码
	 * @param name 名称
	 */
	public EffectUserTypeTree(String code, String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer codePtr = new BasePointer(code);
		list.add("code", codePtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("CEffectUserTypeTree", list);
	}

	native private long getChildNum_void(long pNativeObject);
	/**
	 * 获取子节点数目
	 * @param  
	 * @return 节点数目
	 */
	public long getChildNum()
	{
		long returnValue = getChildNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getChild_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取子节点
	 * @param index 索引值
	 * @return 子节点
	 */
	public com.earthview.world.spatial3d.dataset.EffectUserTypeTree getChild(long index)
	{
		long indexParamValue = index;
		long returnValue = getChild_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.EffectUserTypeTree __returnValue = new com.earthview.world.spatial3d.dataset.EffectUserTypeTree(CreatedWhenConstruct.CWC_NotToCreate, "CEffectUserTypeTree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EffectUserTypeTree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffectUserTypeTree");
		}
		return __returnValue;
	}
	native private long getEffectInfoNum_void(long pNativeObject);
	/**
	 * 获取特效数目
	 * @param  
	 * @return 特效数目
	 */
	public long getEffectInfoNum()
	{
		long returnValue = getEffectInfoNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getEffectInfo_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取特效信息
	 * @param index 索引值
	 * @return 特效信息
	 */
	public com.earthview.world.spatial3d.dataset.EffectInfo getEffectInfo(long index)
	{
		long indexParamValue = index;
		long returnValue = getEffectInfo_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial3d.dataset.EffectInfo __returnValue = new com.earthview.world.spatial3d.dataset.EffectInfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CEffectInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EffectInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEffectInfo");
		}
		return __returnValue;
	}
	native private long getInfo_void(long pNativeObject);
	/**
	 * 获取节点信息
	 * @param  
	 * @return 节点信息
	 */
	public com.earthview.world.spatial3d.dataset.EffectUserTypeInfo getInfo()
	{
		long returnValue = getInfo_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.EffectUserTypeInfo __returnValue = new com.earthview.world.spatial3d.dataset.EffectUserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CEffectUserTypeInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EffectUserTypeInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEffectUserTypeInfo");
		}
		return __returnValue;
	}
	native private void setInfo_CEffectUserTypeInfo(long pNativeObject, long typeInfo);
	/**
	 * 设置类型信息
	 * @param typeInfo 类型信息
	 */
	public void setInfo(com.earthview.world.spatial3d.dataset.EffectUserTypeInfo typeInfo)
	{
		long typeInfoParamValue = typeInfo.nativeObject.pointer;
		setInfo_CEffectUserTypeInfo(this.nativeObject.pointer, typeInfoParamValue);
	}
	native private void addChild_CEffectUserTypeTree(long pNativeObject, long ref_node);
	/**
	 * 添加子节点
	 * @param ref_node 子节点
	 */
	public void addChild(com.earthview.world.spatial3d.dataset.EffectUserTypeTree ref_node)
	{
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		addChild_CEffectUserTypeTree(this.nativeObject.pointer, ref_nodeParamValue);
	}
	public EffectUserTypeTree(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectUserTypeTree(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectUserTypeTree fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectUserTypeTree obj = null;
 		if(baseObj instanceof EffectUserTypeTree)
		{
			obj = (EffectUserTypeTree)baseObj;
		} else {
			obj = new EffectUserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectUserTypeTree");
			obj.increaseCast();
		}

		return obj;
	}
}
