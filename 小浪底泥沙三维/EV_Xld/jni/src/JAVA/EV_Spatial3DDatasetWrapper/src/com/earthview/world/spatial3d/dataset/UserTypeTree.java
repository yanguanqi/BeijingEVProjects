package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///数据集节点树类
public class UserTypeTree extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CUserTypeTree", new UserTypeTreeClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public UserTypeTree() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CUserTypeTree", null);
	}

	native private void setParent_CUserTypeTree(long pNativeObject, long ref_parent);
	/**
	 * 设置根节点
	 * @param parent 根节点对象
	 */
	public void setParent(com.earthview.world.spatial3d.dataset.UserTypeTree ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		setParent_CUserTypeTree(this.nativeObject.pointer, ref_parentParamValue);
	}
	native private long getParent_void(long pNativeObject);
	/**
	 * 获取根节点
	 * @param  
	 * @return 根节点
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeTree getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.UserTypeTree __returnValue = new com.earthview.world.spatial3d.dataset.UserTypeTree(CreatedWhenConstruct.CWC_NotToCreate, "CUserTypeTree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.UserTypeTree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserTypeTree");
		}
		return __returnValue;
	}
	native private long addChild_void(long pNativeObject);
	/**
	 * 在节点树上增加一个节点
	 * @param childTree 增加的节点
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeTree addChild()
	{
		long returnValue = addChild_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.UserTypeTree __returnValue = new com.earthview.world.spatial3d.dataset.UserTypeTree(CreatedWhenConstruct.CWC_NotToCreate, "CUserTypeTree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.UserTypeTree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserTypeTree");
		}
		return __returnValue;
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
	 * @param  
	 * @return 子节点
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeTree getChild(long index)
	{
		long indexParamValue = index;
		long returnValue = getChild_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.UserTypeTree __returnValue = new com.earthview.world.spatial3d.dataset.UserTypeTree(CreatedWhenConstruct.CWC_NotToCreate, "CUserTypeTree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.UserTypeTree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserTypeTree");
		}
		return __returnValue;
	}
	native private long getInfo_void(long pNativeObject);
	/**
	 * 获取节点信息
	 * @param  
	 * @return 节点信息
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeInfo getInfo()
	{
		long returnValue = getInfo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.UserTypeInfo __returnValue = new com.earthview.world.spatial3d.dataset.UserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate, "CUserTypeInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.UserTypeInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserTypeInfo");
		}
		return __returnValue;
	}
	native private boolean deleteChild_CUserTypeTree(long pNativeObject, long Child);
	/**
	 * 删除子节点
	 * @param Child 子节点
	 */
	public boolean deleteChild(com.earthview.world.spatial3d.dataset.UserTypeTree Child)
	{
		long ChildParamValue = (Child == null ? 0L : Child.nativeObject.pointer);
		boolean returnValue = deleteChild_CUserTypeTree(this.nativeObject.pointer, ChildParamValue);
		return returnValue;
	}
	public UserTypeTree(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UserTypeTree(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static UserTypeTree fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UserTypeTree obj = null;
 		if(baseObj instanceof UserTypeTree)
		{
			obj = (UserTypeTree)baseObj;
		} else {
			obj = new UserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CUserTypeTree");
			obj.increaseCast();
		}

		return obj;
	}
}
