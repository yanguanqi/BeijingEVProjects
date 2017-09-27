package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///用户类别管理类
public class UserTypeManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CUserTypeManager", new UserTypeManagerClassFactory());
	}

	public UserTypeManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CUserTypeManager", null);
	}

	native private long createType_EVString_EVString_IFields(long pNativeObject, String parentNodeCode, String newType, long pFlds);
	/**
	 * 为用户类别树添加节点
	 * @param nodeCode 节点编码
	 * @param typeInfo 节点信息
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeInfo createType(String parentNodeCode, String newType, com.earthview.world.spatial.geodataset.Ifields pFlds)
	{
		String parentNodeCodeParamValue = parentNodeCode;
		String newTypeParamValue = newType;
		long pFldsParamValue = (pFlds == null ? 0L : pFlds.nativeObject.pointer);
		long returnValue = createType_EVString_EVString_IFields(this.nativeObject.pointer, parentNodeCodeParamValue, newTypeParamValue, pFldsParamValue);
		com.earthview.world.spatial3d.dataset.UserTypeInfo __returnValue = new com.earthview.world.spatial3d.dataset.UserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CUserTypeInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.UserTypeInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CUserTypeInfo");
		}
		return __returnValue;
	}
	native private boolean deleteType_EVString(long pNativeObject, String nodeCode);
	/**
	 * 删除用户类别树节点,只是删除当前节点，子节点不会删除（如果想删除子节点，请遍历到子节点编码，再去删除子节点）
	 * @param nodeCode 节点编码
	 */
	public boolean deleteType(String nodeCode)
	{
		String nodeCodeParamValue = nodeCode;
		boolean returnValue = deleteType_EVString(this.nativeObject.pointer, nodeCodeParamValue);
		return returnValue;
	}
	native private boolean queryByNodeCode_EVString_CUserTypeInfo(long pNativeObject, String nodeCode, long info);
	/**
	 * 根据nodecode查询
	 * @param nodeCode 节点编码
	 */
	public boolean queryByNodeCode(String nodeCode, com.earthview.world.spatial3d.dataset.UserTypeInfo info)
	{
		String nodeCodeParamValue = nodeCode;
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = queryByNodeCode_EVString_CUserTypeInfo(this.nativeObject.pointer, nodeCodeParamValue, infoParamValue);
		return returnValue;
	}
	native private boolean queryByNodeDesc_EVString_CUserTypeInfo(long pNativeObject, String desc, long info);
	/**
	 * 根据分类描述查询
	 * @param desc 节点描述
	 */
	public boolean queryByNodeDesc(String desc, com.earthview.world.spatial3d.dataset.UserTypeInfo info)
	{
		String descParamValue = desc;
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = queryByNodeDesc_EVString_CUserTypeInfo(this.nativeObject.pointer, descParamValue, infoParamValue);
		return returnValue;
	}
	native private boolean queryByType_EVString_CUserTypeInfoList(long pNativeObject, String type, long infos);
	/**
	 * 根据type查询
	 * @param nodeCode 节点编码
	 */
	public boolean queryByType(String type, com.earthview.world.spatial3d.dataset.UserTypeInfoList infos)
	{
		String typeParamValue = type;
		long infosParamValue = infos.nativeObject.pointer;
		boolean returnValue = queryByType_EVString_CUserTypeInfoList(this.nativeObject.pointer, typeParamValue, infosParamValue);
		return returnValue;
	}
	native private long getRootType_void(long pNativeObject);
	/**
	 * 获取用户类别树根节点信息
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CUserTypeInfo*
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeInfo getRootType()
	{
		long returnValue = getRootType_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.UserTypeInfo __returnValue = new com.earthview.world.spatial3d.dataset.UserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CUserTypeInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.UserTypeInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CUserTypeInfo");
		}
		return __returnValue;
	}
	native private void getChildType_EVString_CUserTypeInfoList(long pNativeObject, String nodeCode, long typeInfoList);
	/**
	 * 获取用户类别子树节点信息
	 * @param nodeCode 父节点编码
	 * @param typeInfoList 子节点集信息
	 */
	public void getChildType(String nodeCode, com.earthview.world.spatial3d.dataset.UserTypeInfoList typeInfoList)
	{
		String nodeCodeParamValue = nodeCode;
		long typeInfoListParamValue = typeInfoList.nativeObject.pointer;
		getChildType_EVString_CUserTypeInfoList(this.nativeObject.pointer, nodeCodeParamValue, typeInfoListParamValue);
	}
	native private boolean updateTypeDesc_EVString_EVString(long pNativeObject, String nodeCode, String desc);
	/**
	 * 更新用户类别树节点描述
	 * @param typeInfo 节点信息
	 * @return 更新返回true
	 */
	public boolean updateTypeDesc(String nodeCode, String desc)
	{
		String nodeCodeParamValue = nodeCode;
		String descParamValue = desc;
		boolean returnValue = updateTypeDesc_EVString_EVString(this.nativeObject.pointer, nodeCodeParamValue, descParamValue);
		return returnValue;
	}
	native private boolean getTypeFilds_EVString_CFields(long pNativeObject, String nodecode, long flds);
	/**
	 * 获取用户类别属性结构
	 * @param typeInfo 节点信息
	 * @return 更新返回true
	 */
	public boolean getTypeFilds(String nodecode, com.earthview.world.spatial.geodataset.Fields flds)
	{
		String nodecodeParamValue = nodecode;
		long fldsParamValue = (flds == null ? 0L : flds.nativeObject.pointer);
		boolean returnValue = getTypeFilds_EVString_CFields(this.nativeObject.pointer, nodecodeParamValue, fldsParamValue);
		return returnValue;
	}
	native private boolean isExistType_EVString(long pNativeObject, String type);
	/**
	 * 查询类别表是否存在
	 * @param typeInfo 节点信息
	 * @return 更新返回true
	 */
	public boolean isExistType(String type)
	{
		String typeParamValue = type;
		boolean returnValue = isExistType_EVString(this.nativeObject.pointer, typeParamValue);
		return returnValue;
	}
	native private boolean updateType_EVString_CFields(long pNativeObject, String typeName, long flds);
	/**
	 * 更新类别表
	 * @param typeName 类别表名称
	 * @param flds 类别表字段
	 */
	public boolean updateType(String typeName, com.earthview.world.spatial.geodataset.Fields flds)
	{
		String typeNameParamValue = typeName;
		long fldsParamValue = (flds == null ? 0L : flds.nativeObject.pointer);
		boolean returnValue = updateType_EVString_CFields(this.nativeObject.pointer, typeNameParamValue, fldsParamValue);
		return returnValue;
	}
	native private boolean deleteTypeField_EVString_ev_int32(long pNativeObject, String typeName, int meshID);
	/**
	 * 删除一个类别表记录
	 * @param typeName 类别表名称
	 * @param meshID meshID
	 */
	public boolean deleteTypeField(String typeName, int meshID)
	{
		String typeNameParamValue = typeName;
		int meshIDParamValue = meshID;
		boolean returnValue = deleteTypeField_EVString_ev_int32(this.nativeObject.pointer, typeNameParamValue, meshIDParamValue);
		return returnValue;
	}
	native private boolean addTypeField_EVString_ev_int32(long pNativeObject, String typeName, int meshID);
	/**
	 * 添加一个类别表记录
	 * @param typeName 类别表名称
	 * @param meshID meshID
	 */
	public boolean addTypeField(String typeName, int meshID)
	{
		String typeNameParamValue = typeName;
		int meshIDParamValue = meshID;
		boolean returnValue = addTypeField_EVString_ev_int32(this.nativeObject.pointer, typeNameParamValue, meshIDParamValue);
		return returnValue;
	}
	native private int getTypeTableName_StringVector(long pNativeObject, long tables);
	/**
	 * 获取属性表表名列表
	 * @param  
	 */
	public int getTypeTableName(com.earthview.world.core.StringVector tables)
	{
		long tablesParamValue = tables.nativeObject.pointer;
		int returnValue = getTypeTableName_StringVector(this.nativeObject.pointer, tablesParamValue);
		return returnValue;
	}
	native private int getTableFields_EVString_IFields(long pNativeObject, String tab, long flds);
	/**
	 * 获取属性表结构
	 * @param  
	 */
	public int getTableFields(String tab, com.earthview.world.spatial.geodataset.Ifields flds)
	{
		String tabParamValue = tab;
		long fldsParamValue = (flds == null ? 0L : flds.nativeObject.pointer);
		int returnValue = getTableFields_EVString_IFields(this.nativeObject.pointer, tabParamValue, fldsParamValue);
		return returnValue;
	}
	native private int getNodeCodeAndTypeMap_NodecodeAndTypeMap(long pNativeObject, long nodecodeandtypemap);
	/**
	 * 获取nodecode和type关系列表
	 * @param  
	 */
	public int getNodeCodeAndTypeMap(com.earthview.world.spatial3d.dataset.NodecodeAndTypeMap nodecodeandtypemap)
	{
		long nodecodeandtypemapParamValue = nodecodeandtypemap.nativeObject.pointer;
		int returnValue = getNodeCodeAndTypeMap_NodecodeAndTypeMap(this.nativeObject.pointer, nodecodeandtypemapParamValue);
		return returnValue;
	}
	public UserTypeManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UserTypeManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static UserTypeManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UserTypeManager obj = null;
 		if(baseObj instanceof UserTypeManager)
		{
			obj = (UserTypeManager)baseObj;
		} else {
			obj = new UserTypeManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CUserTypeManager");
			obj.increaseCast();
		}

		return obj;
	}
}
