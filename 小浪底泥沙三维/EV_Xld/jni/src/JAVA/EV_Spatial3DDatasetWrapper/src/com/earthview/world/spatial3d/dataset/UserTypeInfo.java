package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///数据集信息类
public class UserTypeInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CUserTypeInfo", new UserTypeInfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public UserTypeInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CUserTypeInfo", null);
	}

	native private void setNodeCode_EVString(long pNativeObject, String nodeCode);
	/**
	 * 设置节点编码
	 * @param nodeCode 节点编码
	 */
	public void setNodeCode(String nodeCode)
	{
		String nodeCodeParamValue = nodeCode;
		setNodeCode_EVString(this.nativeObject.pointer, nodeCodeParamValue);
	}
	native private String getNodeCode_void(long pNativeObject);
	/**
	 * 获取节点编码
	 * @param  
	 * @return 节点编码
	 */
	public String getNodeCode()
	{
		String returnValue = getNodeCode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUserType_EVString(long pNativeObject, String userType);
	/**
	 * 设置用户类型
	 * @param userType 用户类型
	 */
	public void setUserType(String userType)
	{
		String userTypeParamValue = userType;
		setUserType_EVString(this.nativeObject.pointer, userTypeParamValue);
	}
	native private String getUserType_void(long pNativeObject);
	/**
	 * 获取用户类型
	 * @param  
	 * @return 用户类型
	 */
	public String getUserType()
	{
		String returnValue = getUserType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDescript_EVString(long pNativeObject, String desc);
	/**
	 * 设置类型描述
	 * @param desc 类型描述
	 */
	public void setDescript(String desc)
	{
		String descParamValue = desc;
		setDescript_EVString(this.nativeObject.pointer, descParamValue);
	}
	native private String getDescript_void(long pNativeObject);
	/**
	 * 获取类型描述
	 * @param  
	 * @return 类型描述
	 */
	public String getDescript()
	{
		String returnValue = getDescript_void(this.nativeObject.pointer);
		return returnValue;
	}
	public UserTypeInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UserTypeInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static UserTypeInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UserTypeInfo obj = null;
 		if(baseObj instanceof UserTypeInfo)
		{
			obj = (UserTypeInfo)baseObj;
		} else {
			obj = new UserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CUserTypeInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
