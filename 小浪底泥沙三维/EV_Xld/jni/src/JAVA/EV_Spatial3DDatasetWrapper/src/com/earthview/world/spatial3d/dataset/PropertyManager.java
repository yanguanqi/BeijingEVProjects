package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PropertyManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CPropertyManager", new PropertyManagerClassFactory());
	}

	native private boolean createType_EVString_ModelPropertyType_IFields(long pNativeObject, String typeName, int type, long ptFieldset);
	/**
	 * 创建一个模板库模型类别
	 * @param typeName 类别名称（属性表名），不可重名
	 * @param type 属性表的类别，主要分为“模型属性”，“实体业务属性”
	 * @param ptFieldset 类别属性字段结构
	 * @return ev_bool
	 */
	public boolean createType(String typeName, com.earthview.world.spatial3d.dataset.ModelPropertyType type, com.earthview.world.spatial.geodataset.Ifields ptFieldset)
	{
		String typeNameParamValue = typeName;
		int typeParamValue = type.getValue();
		long ptFieldsetParamValue = (ptFieldset == null ? 0L : ptFieldset.nativeObject.pointer);
		boolean returnValue = createType_EVString_ModelPropertyType_IFields(this.nativeObject.pointer, typeNameParamValue, typeParamValue, ptFieldsetParamValue);
		return returnValue;
	}
	native private boolean updateType_EVString_ModelPropertyType_IFields(long pNativeObject, String typeName, int type, long ptFieldset);
	/**
	 * 更新模板库模型类别字段结构
	 * @param typeName 类别名称（属性表名），不可重名
	 * @param type 属性表的类别，主要分为“模型属性”，“实体业务属性”
	 * @param ptFieldset 类别属性字段结构
	 * @return ev_bool
	 */
	public boolean updateType(String typeName, com.earthview.world.spatial3d.dataset.ModelPropertyType type, com.earthview.world.spatial.geodataset.Ifields ptFieldset)
	{
		String typeNameParamValue = typeName;
		int typeParamValue = type.getValue();
		long ptFieldsetParamValue = (ptFieldset == null ? 0L : ptFieldset.nativeObject.pointer);
		boolean returnValue = updateType_EVString_ModelPropertyType_IFields(this.nativeObject.pointer, typeNameParamValue, typeParamValue, ptFieldsetParamValue);
		return returnValue;
	}
	native private boolean deleteType_EVString_ModelPropertyType(long pNativeObject, String typeName, int type);
	/**
	 * 删除模板库模型类别，对应的表被删除，模型转入“未分类属性类别”
	 * @param typeName 类别名称（属性表名），不可重名
	 * @param type 属性表的类别，主要分为“模型属性”，“实体业务属性”
	 * @return ev_bool
	 */
	public boolean deleteType(String typeName, com.earthview.world.spatial3d.dataset.ModelPropertyType type)
	{
		String typeNameParamValue = typeName;
		int typeParamValue = type.getValue();
		boolean returnValue = deleteType_EVString_ModelPropertyType(this.nativeObject.pointer, typeNameParamValue, typeParamValue);
		return returnValue;
	}
	native private boolean renameType_EVString_EVString_ModelPropertyType(long pNativeObject, long oldtypename, long newtypename, int type);
	public boolean renameType(StringPointer oldtypename, StringPointer newtypename, com.earthview.world.spatial3d.dataset.ModelPropertyType type)
	{
		long oldtypenameParamValue = oldtypename.nativeObject.pointer;
		long newtypenameParamValue = newtypename.nativeObject.pointer;
		int typeParamValue = type.getValue();
		boolean returnValue = renameType_EVString_EVString_ModelPropertyType(this.nativeObject.pointer, oldtypenameParamValue, newtypenameParamValue, typeParamValue);
		return returnValue;
	}
	native private boolean moveModelToType_ev_int32_EVString_ModelPropertyType(long pNativeObject, int id, String typeName, int type);
	/**
	 * 将分类中的一个模型移动到某一个分类中
	 * @param id 模型id号
	 * @param typeName 类别名称（属性表名），不可重名
	 * @param type 属性表的类别，主要分为“模型属性”，“实体业务属性”
	 * @return ev_bool
	 */
	public boolean moveModelToType(int id, String typeName, com.earthview.world.spatial3d.dataset.ModelPropertyType type)
	{
		int idParamValue = id;
		String typeNameParamValue = typeName;
		int typeParamValue = type.getValue();
		boolean returnValue = moveModelToType_ev_int32_EVString_ModelPropertyType(this.nativeObject.pointer, idParamValue, typeNameParamValue, typeParamValue);
		return returnValue;
	}
	native private boolean deleteModelID_ev_int32_EVString_ModelPropertyType(long pNativeObject, int id, String typeName, int type);
	public boolean deleteModelID(int id, String typeName, com.earthview.world.spatial3d.dataset.ModelPropertyType type)
	{
		int idParamValue = id;
		String typeNameParamValue = typeName;
		int typeParamValue = type.getValue();
		boolean returnValue = deleteModelID_ev_int32_EVString_ModelPropertyType(this.nativeObject.pointer, idParamValue, typeNameParamValue, typeParamValue);
		return returnValue;
	}
	native private void getTypeList_ModelPropertyType_StringVector(long pNativeObject, int type, long typeNames);
	/**
	 * 获取模板库模型类别列表
	 * @param typeName 类别名称（属性表名），不可重名
	 * @param type 属性表的类别，主要分为“模型属性”，“实体业务属性”
	 * @return void
	 */
	public void getTypeList(com.earthview.world.spatial3d.dataset.ModelPropertyType type, com.earthview.world.core.StringVector typeNames)
	{
		int typeParamValue = type.getValue();
		long typeNamesParamValue = typeNames.nativeObject.pointer;
		getTypeList_ModelPropertyType_StringVector(this.nativeObject.pointer, typeParamValue, typeNamesParamValue);
	}
	native private long getFieldSet_EVString_ModelPropertyType(long pNativeObject, String typeName, int type);
	///ev_void getTypeList(EarthView::World::Spatial3D::Dataset::ModelPropertyType type, vector<EVString>& typeNames);
	//// <summary>
	//// 获取某个模型类别属性表字段结构
	//// </summary>
	//// <param name="typeName">类别名称（属性表名），不可重名</param>
	//// <param name="type">属性表的类别，主要分为“模型属性”，“实体业务属性”</param>
	//// <param name="ptFieldset">类别属性字段结构</param>
	//// <returns>void</returns>
	public com.earthview.world.spatial.geodataset.Ifields getFieldSet(String typeName, com.earthview.world.spatial3d.dataset.ModelPropertyType type)
	{
		String typeNameParamValue = typeName;
		int typeParamValue = type.getValue();
		long returnValue = getFieldSet_EVString_ModelPropertyType(this.nativeObject.pointer, typeNameParamValue, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}
	native private boolean addObjectID_EVString_ev_int32(long pNativeObject, String typeName, int id);
	public boolean addObjectID(String typeName, int id)
	{
		String typeNameParamValue = typeName;
		int idParamValue = id;
		boolean returnValue = addObjectID_EVString_ev_int32(this.nativeObject.pointer, typeNameParamValue, idParamValue);
		return returnValue;
	}
	native private boolean deleteObjectID_EVString_ev_int32(long pNativeObject, String typeName, int id);
	public boolean deleteObjectID(String typeName, int id)
	{
		String typeNameParamValue = typeName;
		int idParamValue = id;
		boolean returnValue = deleteObjectID_EVString_ev_int32(this.nativeObject.pointer, typeNameParamValue, idParamValue);
		return returnValue;
	}
	native private void getObjectsByType_EVString_ModelPropertyType_CObjectIDList(long pNativeObject, String typeName, int type, long objectIDs);
	/// <summary>
	/// 获取某个模型类别下的模型集合
	/// </summary>
	/// <param name="typeName">类别名称（属性表名），不可重名</param>
	/// <param name="type">属性表的类别，主要分为“模型属性”，“实体业务属性”</param>
	/// <param name="objectIDs">模型ID集</param>
	/// <returns>void</returns>
	//ev_void getObjectsByType(EVString typeName, EarthView::World::Spatial3D::Dataset::ModelPropertyType type,_inout vector<ev_uint32>& objectIDs);
	public void getObjectsByType(String typeName, com.earthview.world.spatial3d.dataset.ModelPropertyType type, com.earthview.world.spatial3d.dataset.ObjectIDList objectIDs)
	{
		String typeNameParamValue = typeName;
		int typeParamValue = type.getValue();
		long objectIDsParamValue = objectIDs.nativeObject.pointer;
		getObjectsByType_EVString_ModelPropertyType_CObjectIDList(this.nativeObject.pointer, typeNameParamValue, typeParamValue, objectIDsParamValue);
	}
	public PropertyManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PropertyManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PropertyManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PropertyManager obj = null;
 		if(baseObj instanceof PropertyManager)
		{
			obj = (PropertyManager)baseObj;
		} else {
			obj = new PropertyManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPropertyManager");
			obj.increaseCast();
		}

		return obj;
	}
}
