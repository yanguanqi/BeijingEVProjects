package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelEffectManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelEffectManager", new ModelEffectManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param pSceneManager 场景管理器
	 * @param pModelDataSource 模型数据源，不能为NULL
	 * @param pEffectDataSource 特效数据源
	 */
	public ModelEffectManager(com.earthview.world.graphic.SceneManager ref_pSceneManager, com.earthview.world.spatial3d.dataset.ModelDataSource ref_pModelDataSource, com.earthview.world.spatial3d.dataset.EffectDataSource ref_pEffectDataSource) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pSceneManagerPtr = new BasePointer(ref_pSceneManager);
		list.add("ref_pSceneManager", ref_pSceneManagerPtr.get());
		BasePointer ref_pModelDataSourcePtr = new BasePointer(ref_pModelDataSource);
		list.add("ref_pModelDataSource", ref_pModelDataSourcePtr.get());
		BasePointer ref_pEffectDataSourcePtr = new BasePointer(ref_pEffectDataSource);
		list.add("ref_pEffectDataSource", ref_pEffectDataSourcePtr.get());
		Create("CModelEffectManager", list);
	}

	native private long getIDNum_void(long pNativeObject);
	/**
	 * 获取模型库中的模型个数
	 * @return 模型的个数
	 */
	public long getIDNum()
	{
		long returnValue = getIDNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getAllIDS_void(long pNativeObject);
	/**
	 * 获取模型库中的所有模型ID存到容器中
	 * @return 记录ID的列表
	 */
	public com.earthview.world.spatial3d.dataset.ObjectIDList getAllIDS()
	{
		long returnValue = getAllIDS_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.ObjectIDList __returnValue = new com.earthview.world.spatial3d.dataset.ObjectIDList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CObjectIDList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ObjectIDList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CObjectIDList");
		}
		return __returnValue;
	}
	native private long getAllUserType_void(long pNativeObject);
	/**
	 * 获取模型库中的所有模型类别
	 * @return 用户类别列表
	 */
	public com.earthview.world.core.StringVector getAllUserType()
	{
		long returnValue = getAllUserType_void(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private long getIDSByUserType_EVString(long pNativeObject, String userType);
	/**
	 * 获取某模型类别下的ID集合
	 * @param userType 模型类别
	 * @return 存储ID的容器
	 */
	public com.earthview.world.spatial3d.dataset.ObjectIDList getIDSByUserType(String userType)
	{
		String userTypeParamValue = userType;
		long returnValue = getIDSByUserType_EVString(this.nativeObject.pointer, userTypeParamValue);
		com.earthview.world.spatial3d.dataset.ObjectIDList __returnValue = new com.earthview.world.spatial3d.dataset.ObjectIDList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CObjectIDList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ObjectIDList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CObjectIDList");
		}
		return __returnValue;
	}
	native private long getIDSByMeshName_EVString(long pNativeObject, String meshName);
	/**
	 * 获取某个mesh名称下对应的ID集合，有可能只有一个
	 * @param meshName 模型类别
	 * @return 存储ID的容器
	 */
	public com.earthview.world.spatial3d.dataset.ObjectIDList getIDSByMeshName(String meshName)
	{
		String meshNameParamValue = meshName;
		long returnValue = getIDSByMeshName_EVString(this.nativeObject.pointer, meshNameParamValue);
		com.earthview.world.spatial3d.dataset.ObjectIDList __returnValue = new com.earthview.world.spatial3d.dataset.ObjectIDList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CObjectIDList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ObjectIDList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CObjectIDList");
		}
		return __returnValue;
	}
	native private String getMeshNameByID_ev_uint32(long pNativeObject, long id);
	/**
	 * 通过模型ID获取模型名称
	 * @param id 模型ID
	 * @return 返回模型名称
	 */
	public String getMeshNameByID(long id)
	{
		long idParamValue = id;
		String returnValue = getMeshNameByID_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private long createModel_ev_uint32_ev_bool(long pNativeObject, long id, boolean bRemoveParentNode);
	/**
	 * 创建模型对象
	 * @param id 模型ID
	 * @param bRemoveParentNode true,返回的对象里边的scenenode没有parentNode|false,返回的对象里边的scenenode有parentNode
	 * @return EarthView::World::Spatial3D::ModelManager::CModelBaseObject*，返回模型对象
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelBaseObject createModel(long id, boolean bRemoveParentNode)
	{
		long idParamValue = id;
		boolean bRemoveParentNodeParamValue = bRemoveParentNode;
		long returnValue = createModel_ev_uint32_ev_bool(this.nativeObject.pointer, idParamValue, bRemoveParentNodeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate, "CModelBaseObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelBaseObject");
		}
		return __returnValue;
	}
	native private boolean destoryModel_CModelBaseObject(long pNativeObject, long pModel);
	/**
	 * 销毁模型对象
	 * @param pModel 模型对象
	 * @return 成功返回true，失败返回false
	 */
	public boolean destoryModel(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		boolean returnValue = destoryModel_CModelBaseObject(this.nativeObject.pointer, pModelParamValue);
		return returnValue;
	}
	native private boolean saveMaterialEditting_CModelBaseObject_CMaterialPtr(long pNativeObject, long pModel, long matPtr);
	/**
	 * 保存材质编辑结果
	 * @param pModel 模型对象
	 * @param matPtr 模型材质
	 * @return 成功返回true，失败返回false
	 */
	public boolean saveMaterialEditting(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel, com.earthview.world.graphic.MaterialPtr matPtr)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		long matPtrParamValue = matPtr.nativeObject.pointer;
		boolean returnValue = saveMaterialEditting_CModelBaseObject_CMaterialPtr(this.nativeObject.pointer, pModelParamValue, matPtrParamValue);
		return returnValue;
	}
	native private long getRootTree_void(long pNativeObject);
	/**
	 * 获取根节点树
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CUserTypeTree*，返回根节点树
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeTree getRootTree()
	{
		long returnValue = getRootTree_void(this.nativeObject.pointer);
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
	public ModelEffectManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelEffectManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelEffectManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelEffectManager obj = null;
 		if(baseObj instanceof ModelEffectManager)
		{
			obj = (ModelEffectManager)baseObj;
		} else {
			obj = new ModelEffectManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelEffectManager");
			obj.increaseCast();
		}

		return obj;
	}
}
