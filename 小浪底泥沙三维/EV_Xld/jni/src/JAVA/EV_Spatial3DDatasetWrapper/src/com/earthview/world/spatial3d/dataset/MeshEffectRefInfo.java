package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///模型特效绑定信息类
public class MeshEffectRefInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo", new MeshEffectRefInfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public MeshEffectRefInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshEffectRefInfo", null);
	}

	native private void setAliasName_EVString(long pNativeObject, String aliasName);
	/**
	 * 设置绑定的别名
	 * @param aliasName 别名
	 */
	public void setAliasName(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		setAliasName_EVString(this.nativeObject.pointer, aliasNameParamValue);
	}
	native private String getAliasName_void(long pNativeObject);
	/**
	 * 获取绑定的别名
	 * @param  
	 * @return 绑定对象的别名
	 */
	public String getAliasName()
	{
		String returnValue = getAliasName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInfoID_ev_uint32(long pNativeObject, long infoID);
	/**
	 * 设置绑定的ID
	 * @param pList 关联表ID
	 */
	public void setInfoID(long infoID)
	{
		long infoIDParamValue = infoID;
		setInfoID_ev_uint32(this.nativeObject.pointer, infoIDParamValue);
	}
	native private long getInfoID_void(long pNativeObject);
	/**
	 * 获取绑定的ID
	 * @param pList 
	 * @return 获取绑定ID
	 */
	public long getInfoID()
	{
		long returnValue = getInfoID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMeshID_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 设置模型的ID
	 * @param meshID 模型的ID
	 */
	public void setMeshID(long meshID)
	{
		long meshIDParamValue = meshID;
		setMeshID_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
	}
	native private long getMeshID_void(long pNativeObject);
	/**
	 * 获取模型ID
	 * @param  
	 * @return 返回模型ID
	 */
	public long getMeshID()
	{
		long returnValue = getMeshID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEffectID_ev_uint32(long pNativeObject, long effectID);
	/**
	 * 设置特效的ID
	 * @param effectID 特效的ID
	 */
	public void setEffectID(long effectID)
	{
		long effectIDParamValue = effectID;
		setEffectID_ev_uint32(this.nativeObject.pointer, effectIDParamValue);
	}
	native private long getEffectID_void(long pNativeObject);
	/**
	 * 获取特效的ID
	 * @param  
	 * @return 返回特效ID
	 */
	public long getEffectID()
	{
		long returnValue = getEffectID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setType_EVMeshAttachMentType(long pNativeObject, int type);
	/**
	 * 设置绑定对象的类型
	 * @param type 类型
	 */
	public void setType(com.earthview.world.spatial3d.dataset.EVMeshAttachMentType type)
	{
		int typeParamValue = type.getValue();
		setType_EVMeshAttachMentType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取绑定对象的类型
	 * @param  
	 * @return 返回绑定对象的类型
	 */
	public com.earthview.world.spatial3d.dataset.EVMeshAttachMentType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.dataset.EVMeshAttachMentType.toEnum(returnValue);
	}
	native private void setBoneName_EVString(long pNativeObject, String boneName);
	/**
	 * 设置骨骼的名称
	 * @param boneName 骨骼名称
	 */
	public void setBoneName(String boneName)
	{
		String boneNameParamValue = boneName;
		setBoneName_EVString(this.nativeObject.pointer, boneNameParamValue);
	}
	native private String getBoneName_void(long pNativeObject);
	/**
	 * 获取骨骼的名称
	 * @param pList 骨骼名称
	 */
	public String getBoneName()
	{
		String returnValue = getBoneName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getOffSetPosition_void(long pNativeObject);
	/**
	 * 获取偏移量
	 * @param  
	 * @return 返回位置偏移量信息
	 */
	public com.earthview.world.spatial.math.Vector3 getOffSetPosition()
	{
		long returnValue = getOffSetPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setOffSetPosition_CVector3(long pNativeObject, long offSetPosition);
	/**
	 * 设置位置偏移量
	 * @param offSetPosition 位置偏移量
	 */
	public void setOffSetPosition(com.earthview.world.spatial.math.Vector3 offSetPosition)
	{
		long offSetPositionParamValue = offSetPosition.nativeObject.pointer;
		setOffSetPosition_CVector3(this.nativeObject.pointer, offSetPositionParamValue);
	}
	native private long getRotate_void(long pNativeObject);
	/**
	 * 获取旋转四元数
	 * @param  
	 * @return 返回旋转四元数
	 */
	public com.earthview.world.spatial.math.Quaternion getRotate()
	{
		long returnValue = getRotate_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private void setRotate_CQuaternion(long pNativeObject, long val);
	/**
	 * 设置旋转四元数
	 * @param val 四元数
	 */
	public void setRotate(com.earthview.world.spatial.math.Quaternion val)
	{
		long valParamValue = val.nativeObject.pointer;
		setRotate_CQuaternion(this.nativeObject.pointer, valParamValue);
	}
	native private long getScale_void(long pNativeObject);
	/**
	 * 获取缩放
	 * @param  
	 * @return 返回缩放信息
	 */
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		long returnValue = getScale_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setScale_CVector3(long pNativeObject, long scale);
	/**
	 * 设置缩放信息
	 * @param scale 缩放信息
	 */
	public void setScale(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		setScale_CVector3(this.nativeObject.pointer, scaleParamValue);
	}
	public MeshEffectRefInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshEffectRefInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshEffectRefInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshEffectRefInfo obj = null;
 		if(baseObj instanceof MeshEffectRefInfo)
		{
			obj = (MeshEffectRefInfo)baseObj;
		} else {
			obj = new MeshEffectRefInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshEffectRefInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
