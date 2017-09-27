package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshEffectRefManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager", new MeshEffectRefManagerClassFactory());
	}

	native private long getMeshEffectRefInfos_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 获取绑定信息集合
	 * @param meshID 模型ID
	 * @return EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回绑定信息集合
	 */
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector getMeshEffectRefInfos(long meshID)
	{
		long meshIDParamValue = meshID;
		long returnValue = getMeshEffectRefInfos_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector __returnValue = new com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfoVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfoVector");
		}
		return __returnValue;
	}
	native private long getBindModelMeshEffectRefInfos_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 获取绑定子模型信息集合
	 * @param meshID 模型ID
	 * @return EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回绑定信息集合
	 */
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector getBindModelMeshEffectRefInfos(long meshID)
	{
		long meshIDParamValue = meshID;
		long returnValue = getBindModelMeshEffectRefInfos_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector __returnValue = new com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfoVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfoVector");
		}
		return __returnValue;
	}
	native private long getBindEffectMeshEffectRefInfos_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 获取绑定模型绑定的特效信息集合
	 * @param meshID 模型ID
	 * @return EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回绑定信息集合
	 */
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector getBindEffectMeshEffectRefInfos(long meshID)
	{
		long meshIDParamValue = meshID;
		long returnValue = getBindEffectMeshEffectRefInfos_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector __returnValue = new com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfoVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfoVector");
		}
		return __returnValue;
	}
	native private long getBindLightMeshEffectRefInfos_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 获取绑定模型绑定的光源信息集合
	 * @param meshID 模型ID
	 * @return EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回绑定信息集合
	 */
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector getBindLightMeshEffectRefInfos(long meshID)
	{
		long meshIDParamValue = meshID;
		long returnValue = getBindLightMeshEffectRefInfos_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector __returnValue = new com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfoVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfoVector");
		}
		return __returnValue;
	}
	native private long getMeshEffectRefInfo_ev_uint32(long pNativeObject, long evID);
	/**
	 * 获取绑定信息
	 * @param evID 绑定的InfoID
	 * @return EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo，返回绑定信息
	 */
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfo getMeshEffectRefInfo(long evID)
	{
		long evIDParamValue = evID;
		long returnValue = getMeshEffectRefInfo_ev_uint32(this.nativeObject.pointer, evIDParamValue);
		com.earthview.world.spatial3d.dataset.MeshEffectRefInfo __returnValue = new com.earthview.world.spatial3d.dataset.MeshEffectRefInfo(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfo");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshEffectRefInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefInfo");
		}
		return __returnValue;
	}
	native private long insertMeshEffectRefInfo_CMeshEffectRefInfo(long pNativeObject, long info);
	/**
	 * 插入一条绑定信息
	 * @param info 绑定信息
	 * @return 返回绑定生成的InfoID
	 */
	public long insertMeshEffectRefInfo(com.earthview.world.spatial3d.dataset.MeshEffectRefInfo info)
	{
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		long returnValue = insertMeshEffectRefInfo_CMeshEffectRefInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean deleteMeshEffectRef_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 通过模型ID，删除模型绑定所有信息
	 * @param meshID 模型ID
	 * @return 成功返回true，失败返回false
	 */
	public boolean deleteMeshEffectRef(long meshID)
	{
		long meshIDParamValue = meshID;
		boolean returnValue = deleteMeshEffectRef_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		return returnValue;
	}
	native private boolean deleteBindModelMeshEffectRef_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 通过模型ID，删除模型绑定子模型所有信息
	 * @param meshID 模型ID
	 * @return 成功返回true，失败返回false
	 */
	public boolean deleteBindModelMeshEffectRef(long meshID)
	{
		long meshIDParamValue = meshID;
		boolean returnValue = deleteBindModelMeshEffectRef_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		return returnValue;
	}
	native private boolean deleteBindLightMeshEffectRef_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 通过模型ID，删除模型绑定子光源所有信息
	 * @param meshID 模型ID
	 * @return 成功返回true，失败返回false
	 */
	public boolean deleteBindLightMeshEffectRef(long meshID)
	{
		long meshIDParamValue = meshID;
		boolean returnValue = deleteBindLightMeshEffectRef_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		return returnValue;
	}
	native private boolean deleteBindEffectMeshEffectRef_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 通过模型ID，删除模型绑定特效所有信息
	 * @param meshID 模型ID
	 * @return 成功返回true，失败返回false
	 */
	public boolean deleteBindEffectMeshEffectRef(long meshID)
	{
		long meshIDParamValue = meshID;
		boolean returnValue = deleteBindEffectMeshEffectRef_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		return returnValue;
	}
	native private boolean deleteBindMeshRef_ev_uint32(long pNativeObject, long BindID);
	/**
	 * 通过绑定ID，删除模型绑定信息
	 * @param BindID 绑定ID
	 * @return 成功返回true，失败返回false
	 */
	public boolean deleteBindMeshRef(long BindID)
	{
		long BindIDParamValue = BindID;
		boolean returnValue = deleteBindMeshRef_ev_uint32(this.nativeObject.pointer, BindIDParamValue);
		return returnValue;
	}
	native private boolean deleteRef_ev_uint32(long pNativeObject, long evID);
	/**
	 * 通过InfoID，删除绑定信息
	 * @param evID InfoID
	 */
	public boolean deleteRef(long evID)
	{
		long evIDParamValue = evID;
		boolean returnValue = deleteRef_ev_uint32(this.nativeObject.pointer, evIDParamValue);
		return returnValue;
	}
	native private boolean clearTable_void(long pNativeObject);
	/**
	 * 清除绑定关系表中的信息
	 * @param  
	 * @return 成功返回true，失败返回false
	 */
	public boolean clearTable()
	{
		boolean returnValue = clearTable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean updateMeshEffectRefPosition_ev_uint32_CVector3_CQuaternion_CVector3(long pNativeObject, long evId, long offSetPosition, long rotate, long scale);
	/**
	 * 通过绑定信息ID更新绑定信息
	 * @param evId InfoID
	 * @param offSetPosition 位置偏移量信息
	 * @param rotate 旋转四元数信息
	 * @param scale 缩放信息
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateMeshEffectRefPosition(long evId, com.earthview.world.spatial.math.Vector3 offSetPosition, com.earthview.world.spatial.math.Quaternion rotate, com.earthview.world.spatial.math.Vector3 scale)
	{
		long evIdParamValue = evId;
		long offSetPositionParamValue = offSetPosition.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		boolean returnValue = updateMeshEffectRefPosition_ev_uint32_CVector3_CQuaternion_CVector3(this.nativeObject.pointer, evIdParamValue, offSetPositionParamValue, rotateParamValue, scaleParamValue);
		return returnValue;
	}
	native private long checkAliasName_EVString_ev_uint32(long pNativeObject, String aliasName, long modelId);
	/**
	 * 检查绑定的别名是否存在
	 * @param aliasName 别名
	 * @return 存在返回1，不存在返回0,执行失败返回-1
	 */
	public long checkAliasName(String aliasName, long modelId)
	{
		String aliasNameParamValue = aliasName;
		long modelIdParamValue = modelId;
		long returnValue = checkAliasName_EVString_ev_uint32(this.nativeObject.pointer, aliasNameParamValue, modelIdParamValue);
		return returnValue;
	}
	native private boolean updateMeshEffectRefAliasName_ev_uint32_EVString(long pNativeObject, long evId, String aliasName);
	/**
	 * 通过绑定信息ID更新绑定的别名
	 * @param evId InfoID
	 * @param aliasName 别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateMeshEffectRefAliasName(long evId, String aliasName)
	{
		long evIdParamValue = evId;
		String aliasNameParamValue = aliasName;
		boolean returnValue = updateMeshEffectRefAliasName_ev_uint32_EVString(this.nativeObject.pointer, evIdParamValue, aliasNameParamValue);
		return returnValue;
	}
	native private boolean updateMeshLightRefProperty_ev_uint32_EVString(long pNativeObject, long evId, String propertyStr);
	/**
	 * 通过绑定信息ID更新绑定的别名
	 * @param evId InfoID
	 * @param aliasName 别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateMeshLightRefProperty(long evId, String propertyStr)
	{
		long evIdParamValue = evId;
		String propertyStrParamValue = propertyStr;
		boolean returnValue = updateMeshLightRefProperty_ev_uint32_EVString(this.nativeObject.pointer, evIdParamValue, propertyStrParamValue);
		return returnValue;
	}
	native private void checkMeshEffectRefTable_void(long pNativeObject);
	/**
	 * 检测关系表信息
	 * @param  
	 */
	public void checkMeshEffectRefTable()
	{
		checkMeshEffectRefTable_void(this.nativeObject.pointer);
	}
	native private long getMaxMeshEffectRefID_void(long pNativeObject);
	/**
	 * 获取关系表中的最大ID值
	 * @param  
	 * @return 最大ID值
	 */
	public long getMaxMeshEffectRefID()
	{
		long returnValue = getMaxMeshEffectRefID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean initMeshInsPos_void(long pNativeObject);
	/**
	 * /将EV_MESH_INS表中的位置初始化为0/
	 * @param  
	 * @return 是否操作成功
	 */
	public boolean initMeshInsPos()
	{
		boolean returnValue = initMeshInsPos_void(this.nativeObject.pointer);
		return returnValue;
	}
	public MeshEffectRefManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshEffectRefManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshEffectRefManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshEffectRefManager obj = null;
 		if(baseObj instanceof MeshEffectRefManager)
		{
			obj = (MeshEffectRefManager)baseObj;
		} else {
			obj = new MeshEffectRefManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshEffectRefManager");
			obj.increaseCast();
		}

		return obj;
	}
}
