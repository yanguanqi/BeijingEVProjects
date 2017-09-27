package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelEffectDBManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CModelEffectDBManager", new ModelEffectDBManagerClassFactory());
	}

	native private long get_mpRenderWindow_void(long pNativeObject);
	public com.earthview.world.graphic.RenderWindow get_mpRenderWindow()
	{
		long jniValue = get_mpRenderWindow_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderWindow __returnValue = new com.earthview.world.graphic.RenderWindow(CreatedWhenConstruct.CWC_NotToCreate, "CRenderWindow");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderWindow)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderWindow");
		}
		return __returnValue;
	}
	
	native private void set_mpRenderWindow_CRenderWindow (long pNativeObject, long value);
	public void set_mpRenderWindow(com.earthview.world.graphic.RenderWindow mpRenderWindow)
	{
		long mpRenderWindowParamValue = (mpRenderWindow == null ? 0L : mpRenderWindow.nativeObject.pointer);
		
		set_mpRenderWindow_CRenderWindow(this.nativeObject.pointer, mpRenderWindowParamValue);
	}
	
	/**
	 * 构造函数
	 * @param ref_pDataSource 数据源句柄
	 */
	public ModelEffectDBManager(com.earthview.world.spatial3d.dataset.ModelDataSource ref_pDataSource) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pDataSourcePtr = new BasePointer(ref_pDataSource);
		list.add("ref_pDataSource", ref_pDataSourcePtr.get());
		Create("CModelEffectDBManager", list);
	}

	native private void setModelDataSource_CModelDataSource(long pNativeObject, long ref_pDatasource);
	/**
	 * 设置模型数据源
	 * @param ref_pDatasource 数据源句柄
	 */
	public void setModelDataSource(com.earthview.world.spatial3d.dataset.ModelDataSource ref_pDatasource)
	{
		long ref_pDatasourceParamValue = (ref_pDatasource == null ? 0L : ref_pDatasource.nativeObject.pointer);
		setModelDataSource_CModelDataSource(this.nativeObject.pointer, ref_pDatasourceParamValue);
	}
	native private boolean ev_import_CModelDataSource_CModelDataSource_CModelPublishToolListener_ev_bool_ev_bool(long pNativeObject, long src, long dest, long listener, boolean bClear, boolean bCoverOrInstead);
	/**
	 * 模型导入函数
	 * @param src 源数据源
	 * @param dest 目标数据源
	 * @param listener 过程监听器
	 * @param bClear 是否清空原有数据
	 * @param bCoverOrInstead 覆盖或是替换
	 */
	public boolean ev_import(com.earthview.world.spatial3d.dataset.ModelDataSource src, com.earthview.world.spatial3d.dataset.ModelDataSource dest, com.earthview.world.spatial3d.ModelPublishToolListener listener, boolean bClear, boolean bCoverOrInstead)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean bClearParamValue = bClear;
		boolean bCoverOrInsteadParamValue = bCoverOrInstead;
		boolean returnValue = ev_import_CModelDataSource_CModelDataSource_CModelPublishToolListener_ev_bool_ev_bool(this.nativeObject.pointer, srcParamValue, destParamValue, listenerParamValue, bClearParamValue, bCoverOrInsteadParamValue);
		return returnValue;
	}
	native private boolean ev_import_CModelDataSource_CModelDataSource_CModelPublishToolListener_ev_bool_ev_bool_ModelIdAndNameMap(long pNativeObject, long src, long dest, long listener, boolean bClear, boolean bCoverOrInstead, long idAndNameMap);
	/**
	 * 模型导入函数
	 * @param src 源数据源
	 * @param dest 目标数据源
	 * @param listener 过程监听器
	 * @param bClear 是否清空原有数据
	 * @param bCoverOrInstead 覆盖或是替换
	 * @param idAndNameMap 返回导入成功的模型id及其名称
	 */
	public boolean ev_import(com.earthview.world.spatial3d.dataset.ModelDataSource src, com.earthview.world.spatial3d.dataset.ModelDataSource dest, com.earthview.world.spatial3d.ModelPublishToolListener listener, boolean bClear, boolean bCoverOrInstead, com.earthview.world.spatial3d.ModelIdAndNameMap idAndNameMap)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean bClearParamValue = bClear;
		boolean bCoverOrInsteadParamValue = bCoverOrInstead;
		long idAndNameMapParamValue = idAndNameMap.nativeObject.pointer;
		boolean returnValue = ev_import_CModelDataSource_CModelDataSource_CModelPublishToolListener_ev_bool_ev_bool_ModelIdAndNameMap(this.nativeObject.pointer, srcParamValue, destParamValue, listenerParamValue, bClearParamValue, bCoverOrInsteadParamValue, idAndNameMapParamValue);
		return returnValue;
	}
	native private boolean ev_import_CModelDataSource_CModelDataSource_CModelPublishToolListener_IntVector_StringVector_CEffectInfoVector_ev_bool_ev_bool(long pNativeObject, long src, long dest, long listener, long modelIDVec, long typeCodesVec, long effectInfoVec, boolean bClear, boolean bCoverOrInstead);
	/**
	 * 模型导入函数
	 * @param src 源数据源
	 * @param dest 目标数据源
	 * @param listener 过程监听器
	 * @param modelIDVec 需要导出的模型ID集合
	 * @param typeCodesVec 需要导出的模型分类编码集合
	 * @param effectInfoVec 需要导出的特效信息集合
	 * @param bClear 是否清空原有数据
	 * @param bCoverOrInstead 覆盖或是替换
	 */
	public boolean ev_import(com.earthview.world.spatial3d.dataset.ModelDataSource src, com.earthview.world.spatial3d.dataset.ModelDataSource dest, com.earthview.world.spatial3d.ModelPublishToolListener listener, com.earthview.world.core.IntVector modelIDVec, com.earthview.world.core.StringVector typeCodesVec, com.earthview.world.spatial3d.dataset.EffectInfoVector effectInfoVec, boolean bClear, boolean bCoverOrInstead)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		long modelIDVecParamValue = modelIDVec.nativeObject.pointer;
		long typeCodesVecParamValue = typeCodesVec.nativeObject.pointer;
		long effectInfoVecParamValue = effectInfoVec.nativeObject.pointer;
		boolean bClearParamValue = bClear;
		boolean bCoverOrInsteadParamValue = bCoverOrInstead;
		boolean returnValue = ev_import_CModelDataSource_CModelDataSource_CModelPublishToolListener_IntVector_StringVector_CEffectInfoVector_ev_bool_ev_bool(this.nativeObject.pointer, srcParamValue, destParamValue, listenerParamValue, modelIDVecParamValue, typeCodesVecParamValue, effectInfoVecParamValue, bClearParamValue, bCoverOrInsteadParamValue);
		return returnValue;
	}
	native private boolean ev_import_CModelDataSource_CModelDataSource_CModelPublishToolListener_IntVector_StringVector_CEffectInfoVector_ev_bool_ev_bool_ModelIdAndNameMap(long pNativeObject, long src, long dest, long listener, long modelIDVec, long typeCodesVec, long effectInfoVec, boolean bClear, boolean bCoverOrInstead, long idAndNameMap);
	/**
	 * 模型导入函数
	 * @param src 源数据源
	 * @param dest 目标数据源
	 * @param listener 过程监听器
	 * @param modelIDVec 需要导出的模型ID集合
	 * @param typeCodesVec 需要导出的模型分类编码集合
	 * @param effectInfoVec 需要导出的特效信息集合
	 * @param bClear 是否清空原有数据
	 * @param bCoverOrInstead 覆盖或是替换
	 * @param idAndNameMap 返回导入成功的模型id及其名称
	 */
	public boolean ev_import(com.earthview.world.spatial3d.dataset.ModelDataSource src, com.earthview.world.spatial3d.dataset.ModelDataSource dest, com.earthview.world.spatial3d.ModelPublishToolListener listener, com.earthview.world.core.IntVector modelIDVec, com.earthview.world.core.StringVector typeCodesVec, com.earthview.world.spatial3d.dataset.EffectInfoVector effectInfoVec, boolean bClear, boolean bCoverOrInstead, com.earthview.world.spatial3d.ModelIdAndNameMap idAndNameMap)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		long modelIDVecParamValue = modelIDVec.nativeObject.pointer;
		long typeCodesVecParamValue = typeCodesVec.nativeObject.pointer;
		long effectInfoVecParamValue = effectInfoVec.nativeObject.pointer;
		boolean bClearParamValue = bClear;
		boolean bCoverOrInsteadParamValue = bCoverOrInstead;
		long idAndNameMapParamValue = idAndNameMap.nativeObject.pointer;
		boolean returnValue = ev_import_CModelDataSource_CModelDataSource_CModelPublishToolListener_IntVector_StringVector_CEffectInfoVector_ev_bool_ev_bool_ModelIdAndNameMap(this.nativeObject.pointer, srcParamValue, destParamValue, listenerParamValue, modelIDVecParamValue, typeCodesVecParamValue, effectInfoVecParamValue, bClearParamValue, bCoverOrInsteadParamValue, idAndNameMapParamValue);
		return returnValue;
	}
	native private boolean importModelDBFromLocalFiles_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool(long pNativeObject, String dataFolder, long pModelDBDataSource, long mgr, long listener, boolean bClear, boolean bCoverOrInstead, boolean bCompositorSubmesh, String userTypeNodecode, boolean isLeftHand);
	/**
	 * 从文件导入
	 * @param dataFolder 模型文件根目录
	 * @param pModelDBDataSource 目标数据源
	 * @param mgr 场景管理器
	 * @param listener 过程监听器
	 * @param bClear 是否清空原有数据
	 * @param bCoverOrInstead 覆盖或是替换
	 * @param userTypeNodecode 用户类别编码
	 */
	public boolean importModelDBFromLocalFiles(String dataFolder, com.earthview.world.spatial3d.dataset.ModelDataSource pModelDBDataSource, com.earthview.world.graphic.SceneManager mgr, com.earthview.world.spatial3d.ModelPublishToolListener listener, boolean bClear, boolean bCoverOrInstead, boolean bCompositorSubmesh, String userTypeNodecode, boolean isLeftHand)
	{
		String dataFolderParamValue = dataFolder;
		long pModelDBDataSourceParamValue = (pModelDBDataSource == null ? 0L : pModelDBDataSource.nativeObject.pointer);
		long mgrParamValue = (mgr == null ? 0L : mgr.nativeObject.pointer);
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean bClearParamValue = bClear;
		boolean bCoverOrInsteadParamValue = bCoverOrInstead;
		boolean bCompositorSubmeshParamValue = bCompositorSubmesh;
		String userTypeNodecodeParamValue = userTypeNodecode;
		boolean isLeftHandParamValue = isLeftHand;
		boolean returnValue = importModelDBFromLocalFiles_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool(this.nativeObject.pointer, dataFolderParamValue, pModelDBDataSourceParamValue, mgrParamValue, listenerParamValue, bClearParamValue, bCoverOrInsteadParamValue, bCompositorSubmeshParamValue, userTypeNodecodeParamValue, isLeftHandParamValue);
		return returnValue;
	}
	native private boolean importModelDBFromLocalFiles_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool_ev_bool(long pNativeObject, String dataFolder, long pModelDBDataSource, long mgr, long listener, boolean bClear, boolean bCoverOrInstead, boolean bCompositorSubmesh, String userTypeNodecode, boolean isLeftHand, boolean doubleSideLight);
	/**
	 * 从文件导入
	 * @param dataFolder 模型文件根目录
	 * @param pModelDBDataSource 目标数据源
	 * @param mgr 场景管理器
	 * @param listener 过程监听器
	 * @param bClear 是否清空原有数据
	 * @param bCoverOrInstead 覆盖或是替换
	 * @param userTypeNodecode 用户类别编码
	 */
	public boolean importModelDBFromLocalFiles(String dataFolder, com.earthview.world.spatial3d.dataset.ModelDataSource pModelDBDataSource, com.earthview.world.graphic.SceneManager mgr, com.earthview.world.spatial3d.ModelPublishToolListener listener, boolean bClear, boolean bCoverOrInstead, boolean bCompositorSubmesh, String userTypeNodecode, boolean isLeftHand, boolean doubleSideLight)
	{
		String dataFolderParamValue = dataFolder;
		long pModelDBDataSourceParamValue = (pModelDBDataSource == null ? 0L : pModelDBDataSource.nativeObject.pointer);
		long mgrParamValue = (mgr == null ? 0L : mgr.nativeObject.pointer);
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean bClearParamValue = bClear;
		boolean bCoverOrInsteadParamValue = bCoverOrInstead;
		boolean bCompositorSubmeshParamValue = bCompositorSubmesh;
		String userTypeNodecodeParamValue = userTypeNodecode;
		boolean isLeftHandParamValue = isLeftHand;
		boolean doubleSideLightParamValue = doubleSideLight;
		boolean returnValue = importModelDBFromLocalFiles_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool_ev_bool(this.nativeObject.pointer, dataFolderParamValue, pModelDBDataSourceParamValue, mgrParamValue, listenerParamValue, bClearParamValue, bCoverOrInsteadParamValue, bCompositorSubmeshParamValue, userTypeNodecodeParamValue, isLeftHandParamValue, doubleSideLightParamValue);
		return returnValue;
	}
	native private boolean importModelDBFromLocalFiles_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool_ModelIdAndNameMap(long pNativeObject, String dataFolder, long pModelDBDataSource, long mgr, long listener, boolean bClear, boolean bCoverOrInstead, boolean bCompositorSubmesh, String userTypeNodecode, boolean isLeftHand, long idAndNameMap);
	/**
	 * 从文件导入
	 * @param dataFolder 模型文件根目录
	 * @param pModelDBDataSource 目标数据源
	 * @param mgr 场景管理器
	 * @param listener 过程监听器
	 * @param bClear 是否清空原有数据
	 * @param bCoverOrInstead 覆盖或是替换
	 * @param userTypeNodecode 用户类别编码
	 * @param idAndNameMap 返回导入成功的模型id及其名称
	 */
	public boolean importModelDBFromLocalFiles(String dataFolder, com.earthview.world.spatial3d.dataset.ModelDataSource pModelDBDataSource, com.earthview.world.graphic.SceneManager mgr, com.earthview.world.spatial3d.ModelPublishToolListener listener, boolean bClear, boolean bCoverOrInstead, boolean bCompositorSubmesh, String userTypeNodecode, boolean isLeftHand, com.earthview.world.spatial3d.ModelIdAndNameMap idAndNameMap)
	{
		String dataFolderParamValue = dataFolder;
		long pModelDBDataSourceParamValue = (pModelDBDataSource == null ? 0L : pModelDBDataSource.nativeObject.pointer);
		long mgrParamValue = (mgr == null ? 0L : mgr.nativeObject.pointer);
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean bClearParamValue = bClear;
		boolean bCoverOrInsteadParamValue = bCoverOrInstead;
		boolean bCompositorSubmeshParamValue = bCompositorSubmesh;
		String userTypeNodecodeParamValue = userTypeNodecode;
		boolean isLeftHandParamValue = isLeftHand;
		long idAndNameMapParamValue = idAndNameMap.nativeObject.pointer;
		boolean returnValue = importModelDBFromLocalFiles_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool_ModelIdAndNameMap(this.nativeObject.pointer, dataFolderParamValue, pModelDBDataSourceParamValue, mgrParamValue, listenerParamValue, bClearParamValue, bCoverOrInsteadParamValue, bCompositorSubmeshParamValue, userTypeNodecodeParamValue, isLeftHandParamValue, idAndNameMapParamValue);
		return returnValue;
	}
	native private void clearModelTemplDataSource_void(long pNativeObject);
	/**
	 * 清除模板数据源
	 * @param  
	 */
	public void clearModelTemplDataSource()
	{
		clearModelTemplDataSource_void(this.nativeObject.pointer);
	}
	native private void stopImport_void(long pNativeObject);
	/**
	 * 停止导入(从数据源导入的时候停止)
	 * @param  
	 */
	public void stopImport()
	{
		stopImport_void(this.nativeObject.pointer);
	}
	native private void stopModelFileImport_void(long pNativeObject);
	/**
	 * 停止模型文件导入
	 * @param  
	 */
	public void stopModelFileImport()
	{
		stopModelFileImport_void(this.nativeObject.pointer);
	}
	native private void destroyModelFileImport_void(long pNativeObject);
	/**
	 * 销毁文件导入库工具对象
	 * @param  
	 */
	public void destroyModelFileImport()
	{
		destroyModelFileImport_void(this.nativeObject.pointer);
	}
	native private long getRootUserType_void(long pNativeObject);
	/**
	 * 获取根用户类型信息
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CUserTypeInfo，根节点信息
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeInfo getRootUserType()
	{
		long returnValue = getRootUserType_void(this.nativeObject.pointer);
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
	native private boolean getEffectRootUserType_CEffectUserTypeInfo(long pNativeObject, long rootUserTypeInfo);
	/**
	 * 获取根用户类型信息
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo，根节点信息
	 */
	public boolean getEffectRootUserType(com.earthview.world.spatial3d.dataset.EffectUserTypeInfo rootUserTypeInfo)
	{
		long rootUserTypeInfoParamValue = rootUserTypeInfo.nativeObject.pointer;
		boolean returnValue = getEffectRootUserType_CEffectUserTypeInfo(this.nativeObject.pointer, rootUserTypeInfoParamValue);
		return returnValue;
	}
	native private boolean getChildUserType_EVString_CUserTypeInfoList(long pNativeObject, String nodeCode, long typeList);
	/**
	 * 获取指定节点的子用户类型信息
	 * @param nodeCode 父节点编码
	 * @param typeList 子节点信息存储对象
	 * @return 是返回ture，否则返回false
	 */
	public boolean getChildUserType(String nodeCode, com.earthview.world.spatial3d.dataset.UserTypeInfoList typeList)
	{
		String nodeCodeParamValue = nodeCode;
		long typeListParamValue = typeList.nativeObject.pointer;
		boolean returnValue = getChildUserType_EVString_CUserTypeInfoList(this.nativeObject.pointer, nodeCodeParamValue, typeListParamValue);
		return returnValue;
	}
	native private boolean getEffectInfos_CEffectInfoVector(long pNativeObject, long vec);
	/**
	 * 获取EV_EFFECT表里所有的特效信息。
	 * @param vec 传出的特效信息集合
	 * @return 操作是否成功
	 */
	public boolean getEffectInfos(com.earthview.world.spatial3d.dataset.EffectInfoVector vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		boolean returnValue = getEffectInfos_CEffectInfoVector(this.nativeObject.pointer, vecParamValue);
		return returnValue;
	}
	native private boolean getEffectChildUserType_EVString_CEffectUserTypeInfoVector(long pNativeObject, String nodeCode, long typeList);
	/**
	 * 获取指定节点的子用户类型信息
	 * @param nodeCode 父节点编码
	 * @param typeList 子节点信息存储对象
	 * @return 是返回ture，否则返回false
	 */
	public boolean getEffectChildUserType(String nodeCode, com.earthview.world.spatial3d.dataset.EffectUserTypeInfoVector typeList)
	{
		String nodeCodeParamValue = nodeCode;
		long typeListParamValue = typeList.nativeObject.pointer;
		boolean returnValue = getEffectChildUserType_EVString_CEffectUserTypeInfoVector(this.nativeObject.pointer, nodeCodeParamValue, typeListParamValue);
		return returnValue;
	}
	native private long createUserType_EVString_EVString_IFields(long pNativeObject, String parentnodeCode, String nwType, long pFilds);
	/**
	 * 在指定节点下创建新的用户信息
	 * @param parentnodeCode 父节点编码
	 * @param nwType 新类型名称
	 * @param pFilds 创建新类型的字段集
	 * @return EarthView::World::Spatial3D::Dataset::CUserTypeInfo，返回创建出来的类型信息
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeInfo createUserType(String parentnodeCode, String nwType, com.earthview.world.spatial.geodataset.Ifields pFilds)
	{
		String parentnodeCodeParamValue = parentnodeCode;
		String nwTypeParamValue = nwType;
		long pFildsParamValue = (pFilds == null ? 0L : pFilds.nativeObject.pointer);
		long returnValue = createUserType_EVString_EVString_IFields(this.nativeObject.pointer, parentnodeCodeParamValue, nwTypeParamValue, pFildsParamValue);
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
	native private boolean deleteUserType_EVString(long pNativeObject, String nodeCode);
	/**
	 * 删除指定节点的用户信息(该节点下的子节点都会被删除)
	 * @param nodeCode 节点编码
	 * @return 成功返回true，失败返回false
	 */
	public boolean deleteUserType(String nodeCode)
	{
		String nodeCodeParamValue = nodeCode;
		boolean returnValue = deleteUserType_EVString(this.nativeObject.pointer, nodeCodeParamValue);
		return returnValue;
	}
	native private boolean clearUserType_EVString(long pNativeObject, String nodeCode);
	/**
	 * 清除指定节点下模型(子节点信息不清除)
	 * @param nodeCode 节点编码
	 * @return 成功返回true，失败返回false
	 */
	public boolean clearUserType(String nodeCode)
	{
		String nodeCodeParamValue = nodeCode;
		boolean returnValue = clearUserType_EVString(this.nativeObject.pointer, nodeCodeParamValue);
		return returnValue;
	}
	native private boolean deleteMesh_ev_int32(long pNativeObject, int MeshID);
	/**
	 * 删除给定id的mesh文件及相关资源
	 * @param MeshID 模型的InstID值
	 * @return 成功返回true，失败返回false
	 */
	public boolean deleteMesh(int MeshID)
	{
		int MeshIDParamValue = MeshID;
		boolean returnValue = deleteMesh_ev_int32(this.nativeObject.pointer, MeshIDParamValue);
		return returnValue;
	}
	native private long findUserType_EVString(long pNativeObject, String nodeCode);
	/**
	 * 查找是否有给定节点的用户信息
	 * @param nodeCode 节点编码
	 * @return EarthView::World::Spatial3D::Dataset::CUserTypeInfo，返回查找出来的节点信息
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeInfo findUserType(String nodeCode)
	{
		String nodeCodeParamValue = nodeCode;
		long returnValue = findUserType_EVString(this.nativeObject.pointer, nodeCodeParamValue);
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
	native private boolean changeType_EVString_ev_uint32_EVString(long pNativeObject, String nodeCode, long id, String nwNodeCode);
	/**
	 * 更新节点(将一个节点下的模型移动到另一个节点下)
	 * @param nodeCode 源节点
	 * @param id 模型ID
	 * @param nwNodeCode 需要更新为的节点
	 * @return 成功返回true，失败返回false
	 */
	public boolean changeType(String nodeCode, long id, String nwNodeCode)
	{
		String nodeCodeParamValue = nodeCode;
		long idParamValue = id;
		String nwNodeCodeParamValue = nwNodeCode;
		boolean returnValue = changeType_EVString_ev_uint32_EVString(this.nativeObject.pointer, nodeCodeParamValue, idParamValue, nwNodeCodeParamValue);
		return returnValue;
	}
	native private boolean isExist_EVString(long pNativeObject, String typeName);
	/**
	 * 判断用户类型是否存在
	 * @param typeName 用户类型名称
	 * @return 存在返回true，不存在返回false
	 */
	public boolean isExist(String typeName)
	{
		String typeNameParamValue = typeName;
		boolean returnValue = isExist_EVString(this.nativeObject.pointer, typeNameParamValue);
		return returnValue;
	}
	native private String getMeshName_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 通过模型ID获取mesh文件的名字
	 * @param meshID 模型ID
	 * @return 返回模型名称
	 */
	public String getMeshName(long meshID)
	{
		long meshIDParamValue = meshID;
		String returnValue = getMeshName_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		return returnValue;
	}
	native private String getMeshTemplateName_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 通过模型ID获取模型Template文件的名字
	 * @param meshID 模型ID
	 * @return 返回模型Template名称
	 */
	public String getMeshTemplateName(long meshID)
	{
		long meshIDParamValue = meshID;
		String returnValue = getMeshTemplateName_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		return returnValue;
	}
	native private boolean renameType_EVString_EVString(long pNativeObject, long nodecode, long nwTypename);
	/**
	 * 修改节点对应的属性表描述
	 * @param nodecode 节点编码
	 * @param nwTypename 新的属性表名称描述
	 * @return 成功返回true，失败返回false
	 */
	public boolean renameType(StringPointer nodecode, StringPointer nwTypename)
	{
		long nodecodeParamValue = nodecode.nativeObject.pointer;
		long nwTypenameParamValue = nwTypename.nativeObject.pointer;
		boolean returnValue = renameType_EVString_EVString(this.nativeObject.pointer, nodecodeParamValue, nwTypenameParamValue);
		return returnValue;
	}
	native private boolean renameMeshName_ev_int32_EVString(long pNativeObject, int meshID, long nwMeshname);
	/**
	 * 修改模型名称
	 * @param meshID 模型ID
	 * @param nwMeshname 新的模型名称
	 * @return 成功返回true，失败返回false
	 */
	public boolean renameMeshName(int meshID, StringPointer nwMeshname)
	{
		int meshIDParamValue = meshID;
		long nwMeshnameParamValue = nwMeshname.nativeObject.pointer;
		boolean returnValue = renameMeshName_ev_int32_EVString(this.nativeObject.pointer, meshIDParamValue, nwMeshnameParamValue);
		return returnValue;
	}
	native private boolean renameAttachComponent_ev_int32_ev_int32_EVString(long pNativeObject, int evid, int mainModelId, String nwComponentName);
	/**
	 * 修改组件名称
	 * @param evid 组件主键
	 * @param mainModelId 主模型ID
	 * @param nwMeshname 新的组件名称
	 * @return 成功返回true，失败返回false
	 */
	public boolean renameAttachComponent(int evid, int mainModelId, String nwComponentName)
	{
		int evidParamValue = evid;
		int mainModelIdParamValue = mainModelId;
		String nwComponentNameParamValue = nwComponentName;
		boolean returnValue = renameAttachComponent_ev_int32_ev_int32_EVString(this.nativeObject.pointer, evidParamValue, mainModelIdParamValue, nwComponentNameParamValue);
		return returnValue;
	}
	native private long getObjectIDs_EVString(long pNativeObject, String nodecode);
	/**
	 * 获取给定节点下的所有模型id
	 * @param nodecode 节点编码
	 * @return EarthView::World::Core::IntVector，返回模型ID集
	 */
	public com.earthview.world.core.IntVector getObjectIDs(String nodecode)
	{
		String nodecodeParamValue = nodecode;
		long returnValue = getObjectIDs_EVString(this.nativeObject.pointer, nodecodeParamValue);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private void getObjectIDAndNames_EVString_ModelIdAndNameMap(long pNativeObject, String nodecode, long idAndNameMap);
	/**
	 * 获取给定节点下的所有模型id与名称
	 * @param nodecode 节点编码
	 * @param idAndNameMap ID与名称
	 */
	public void getObjectIDAndNames(String nodecode, com.earthview.world.spatial3d.ModelIdAndNameMap idAndNameMap)
	{
		String nodecodeParamValue = nodecode;
		long idAndNameMapParamValue = idAndNameMap.nativeObject.pointer;
		getObjectIDAndNames_EVString_ModelIdAndNameMap(this.nativeObject.pointer, nodecodeParamValue, idAndNameMapParamValue);
	}
	native private long getEffectObjectIDs_EVString(long pNativeObject, String nodecode);
	/**
	 * /获取给定节点下的所有特效id/
	 * @param nodecode 节点编码
	 * @return EarthView::World::Core::IntVector，返回特效ID集
	 */
	public com.earthview.world.core.IntVector getEffectObjectIDs(String nodecode)
	{
		String nodecodeParamValue = nodecode;
		long returnValue = getEffectObjectIDs_EVString(this.nativeObject.pointer, nodecodeParamValue);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private void getEffectObjectIDs_EVString_CEffectInfoVector(long pNativeObject, String nodecode, long vec);
	/**
	 * /获取给定节点下的所有特效id与名称/
	 * @param nodecode 节点编码
	 * @param vec 特效信息集合
	 */
	public void getEffectObjectIDs(String nodecode, com.earthview.world.spatial3d.dataset.EffectInfoVector vec)
	{
		String nodecodeParamValue = nodecode;
		long vecParamValue = vec.nativeObject.pointer;
		getEffectObjectIDs_EVString_CEffectInfoVector(this.nativeObject.pointer, nodecodeParamValue, vecParamValue);
	}
	native private int getMeshID_EVString(long pNativeObject, String meshName);
	/**
	 * 通过模型别名名获取模型对应的instance的ID
	 * @param meshName 模型别名
	 * @return 模型instance的ID
	 */
	public int getMeshID(String meshName)
	{
		String meshNameParamValue = meshName;
		int returnValue = getMeshID_EVString(this.nativeObject.pointer, meshNameParamValue);
		return returnValue;
	}
	native private long getModelUserTypeByNodeDesc_EVString(long pNativeObject, String desc);
	/**
	 * 通过分类描述获取模型分类对象
	 * @param meshName 模型别名
	 * @return 模型instance的ID
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeInfo getModelUserTypeByNodeDesc(String desc)
	{
		String descParamValue = desc;
		long returnValue = getModelUserTypeByNodeDesc_EVString(this.nativeObject.pointer, descParamValue);
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
	native private long getModelUserTypeByNodeCode_EVString(long pNativeObject, String nodeCode);
	/**
	 * 通过分类编码获得分类对象
	 * @param meshName 模型别名
	 * @return 模型instance的ID
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeInfo getModelUserTypeByNodeCode(String nodeCode)
	{
		String nodeCodeParamValue = nodeCode;
		long returnValue = getModelUserTypeByNodeCode_EVString(this.nativeObject.pointer, nodeCodeParamValue);
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
	native private boolean getAttrTypeFields_EVString_CFields(long pNativeObject, String nodeCode, long flds);
	/**
	 * 获取指定节点所对应的属性表字段结构
	 * @param nodeCode 节点编码
	 * @param flds 传出的属性表字段结构
	 * @return 成功返回true，失败返回false
	 */
	public boolean getAttrTypeFields(String nodeCode, com.earthview.world.spatial.geodataset.Fields flds)
	{
		String nodeCodeParamValue = nodeCode;
		long fldsParamValue = (flds == null ? 0L : flds.nativeObject.pointer);
		boolean returnValue = getAttrTypeFields_EVString_CFields(this.nativeObject.pointer, nodeCodeParamValue, fldsParamValue);
		return returnValue;
	}
	native private long getMeshAttr_EVString_ev_uint32(long pNativeObject, String nodeCode, long meshID);
	/**
	 * 获取指定节点下面给定模型id的属性信息
	 * @param nodeCode 节点编码
	 * @param meshID 模型ID
	 * @return EarthView::World::Spatial::GeoDataset::CPropertySet，模型的属性信息
	 */
	public com.earthview.world.spatial.geodataset.PropertySet getMeshAttr(String nodeCode, long meshID)
	{
		String nodeCodeParamValue = nodeCode;
		long meshIDParamValue = meshID;
		long returnValue = getMeshAttr_EVString_ev_uint32(this.nativeObject.pointer, nodeCodeParamValue, meshIDParamValue);
		com.earthview.world.spatial.geodataset.PropertySet __returnValue = new com.earthview.world.spatial.geodataset.PropertySet(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPropertySet");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.PropertySet)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPropertySet");
		}
		return __returnValue;
	}
	native private boolean updateAttrTypeFields_EVString_CFields(long pNativeObject, String typeName, long flds);
	/**
	 * 更新属性表字段
	 * @param typeName 属性表名称
	 * @param flds 属性表新的字段结构
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateAttrTypeFields(String typeName, com.earthview.world.spatial.geodataset.Fields flds)
	{
		String typeNameParamValue = typeName;
		long fldsParamValue = (flds == null ? 0L : flds.nativeObject.pointer);
		boolean returnValue = updateAttrTypeFields_EVString_CFields(this.nativeObject.pointer, typeNameParamValue, fldsParamValue);
		return returnValue;
	}
	native private boolean updateMeshAttr_EVString_ev_uint32_CPropertySet(long pNativeObject, String nodeCode, long meshID, long vals);
	/**
	 * 更新模型属性信息
	 * @param nodeCode 模型所在的节点编码
	 * @param meshID 模型ID
	 * @param vals 模型属性信息
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateMeshAttr(String nodeCode, long meshID, com.earthview.world.spatial.geodataset.PropertySet vals)
	{
		String nodeCodeParamValue = nodeCode;
		long meshIDParamValue = meshID;
		long valsParamValue = (vals == null ? 0L : vals.nativeObject.pointer);
		boolean returnValue = updateMeshAttr_EVString_ev_uint32_CPropertySet(this.nativeObject.pointer, nodeCodeParamValue, meshIDParamValue, valsParamValue);
		return returnValue;
	}
	native private boolean getModelInfoFromDB_ev_uint32_CVector3_CVector3_CVector3_EVString(long pNativeObject, long id, long quater, long position, long scale, long nodeCode);
	/**
	 * 从数据库获取模型信息
	 * @param id 模型ID
	 * @param quater 模型旋转信息
	 * @param position 模型位置信息
	 * @param scale 模型缩放信息
	 * @param nodeCode 模型所在节点编码
	 * @return 成功返回true，失败返回false
	 */
	public boolean getModelInfoFromDB(long id, com.earthview.world.spatial.math.Vector3 quater, com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Vector3 scale, StringPointer nodeCode)
	{
		long idParamValue = id;
		long quaterParamValue = quater.nativeObject.pointer;
		long positionParamValue = position.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long nodeCodeParamValue = nodeCode.nativeObject.pointer;
		boolean returnValue = getModelInfoFromDB_ev_uint32_CVector3_CVector3_CVector3_EVString(this.nativeObject.pointer, idParamValue, quaterParamValue, positionParamValue, scaleParamValue, nodeCodeParamValue);
		return returnValue;
	}
	native private boolean getAttachInfoFromDB_ev_uint32_CVector3_CVector3_CVector3(long pNativeObject, long id, long quater, long position, long scale);
	/**
	 * 获取绑定对象信息
	 * @param id 该绑定的ID值
	 * @param quater 绑定对象的旋转信息
	 * @param position 绑定对象的位置信息
	 * @param scale 绑定对象的缩放信息
	 * @return 成功返回true，失败返回false
	 */
	public boolean getAttachInfoFromDB(long id, com.earthview.world.spatial.math.Vector3 quater, com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Vector3 scale)
	{
		long idParamValue = id;
		long quaterParamValue = quater.nativeObject.pointer;
		long positionParamValue = position.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		boolean returnValue = getAttachInfoFromDB_ev_uint32_CVector3_CVector3_CVector3(this.nativeObject.pointer, idParamValue, quaterParamValue, positionParamValue, scaleParamValue);
		return returnValue;
	}
	native private boolean isExistBindID_ev_int32_ev_int32(long pNativeObject, int mainID, int BindID);
	/**
	 * 判断是否存在绑定关系
	 * @param mainID 主模型ID
	 * @param BindID 被绑定对象的ID
	 * @return 存在返回true，不存在返回false
	 */
	public boolean isExistBindID(int mainID, int BindID)
	{
		int mainIDParamValue = mainID;
		int BindIDParamValue = BindID;
		boolean returnValue = isExistBindID_ev_int32_ev_int32(this.nativeObject.pointer, mainIDParamValue, BindIDParamValue);
		return returnValue;
	}
	native private boolean copyModel_EVString_ev_int32(long pNativeObject, String nodeCode, int copyID);
	/**
	 * 仅仅拷贝模型，不传出拷贝之后的模型信息
	 * @param nodeCode 节点编码
	 * @param copyID 需要拷贝的模型ID
	 * @return 成功返回true，失败返回false
	 */
	public boolean copyModel(String nodeCode, int copyID)
	{
		String nodeCodeParamValue = nodeCode;
		int copyIDParamValue = copyID;
		boolean returnValue = copyModel_EVString_ev_int32(this.nativeObject.pointer, nodeCodeParamValue, copyIDParamValue);
		return returnValue;
	}
	native private boolean copyModel_EVString_ev_int32_ev_int32_EVString(long pNativeObject, String nodeCode, int copyID, long newID, long newName);
	/**
	 * 仅仅拷贝模型，并传出拷贝之后的模型信息
	 * @param nodeCode 节点编码
	 * @param copyID 需要拷贝的模型ID
	 * @param nodeCode 传出新的ID
	 * @param copyID 传出拷贝模型别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean copyModel(String nodeCode, int copyID, IntegerPointer newID, StringPointer newName)
	{
		String nodeCodeParamValue = nodeCode;
		int copyIDParamValue = copyID;
		long newIDParamValue = newID.nativeObject.pointer;
		long newNameParamValue = newName.nativeObject.pointer;
		boolean returnValue = copyModel_EVString_ev_int32_ev_int32_EVString(this.nativeObject.pointer, nodeCodeParamValue, copyIDParamValue, newIDParamValue, newNameParamValue);
		return returnValue;
	}
	native private boolean copyModelAndBindInfo_EVString_ev_int32(long pNativeObject, String nodeCode, int copyID);
	/**
	 * 拷贝模型及其绑定信息，不传出拷贝之后模型信息
	 * @param nodeCode 节点编码
	 * @param copyID 需要拷贝的模型ID
	 * @return 成功返回true，失败返回false
	 */
	public boolean copyModelAndBindInfo(String nodeCode, int copyID)
	{
		String nodeCodeParamValue = nodeCode;
		int copyIDParamValue = copyID;
		boolean returnValue = copyModelAndBindInfo_EVString_ev_int32(this.nativeObject.pointer, nodeCodeParamValue, copyIDParamValue);
		return returnValue;
	}
	native private boolean copyModelAndBindInfo_EVString_ev_int32_ev_int32_EVString(long pNativeObject, String nodeCode, int copyID, long newID, long newName);
	/**
	 * 拷贝模型及其绑定信息，并传出拷贝之后模型信息
	 * @param nodeCode 节点编码
	 * @param copyID 需要拷贝的模型ID
	 * @param nodeCode 新的ID
	 * @param copyID 拷贝模型别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean copyModelAndBindInfo(String nodeCode, int copyID, IntegerPointer newID, StringPointer newName)
	{
		String nodeCodeParamValue = nodeCode;
		int copyIDParamValue = copyID;
		long newIDParamValue = newID.nativeObject.pointer;
		long newNameParamValue = newName.nativeObject.pointer;
		boolean returnValue = copyModelAndBindInfo_EVString_ev_int32_ev_int32_EVString(this.nativeObject.pointer, nodeCodeParamValue, copyIDParamValue, newIDParamValue, newNameParamValue);
		return returnValue;
	}
	native private long getAttrTableNames_void(long pNativeObject);
	/**
	 * 获取关系表名称
	 * @param  
	 * @return EarthView::World::Core::StringVector，返回关系表的集合
	 */
	public com.earthview.world.core.StringVector getAttrTableNames()
	{
		long returnValue = getAttrTableNames_void(this.nativeObject.pointer);
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
	native private void getAttrTableFileds_EVString_CFields(long pNativeObject, String typeName, long flds);
	/**
	 * 获取关联表字段信息
	 * @param typeName 属性关联表表名
	 * @param flds 传出的属性关联表字段结构
	 */
	public void getAttrTableFileds(String typeName, com.earthview.world.spatial.geodataset.Fields flds)
	{
		String typeNameParamValue = typeName;
		long fldsParamValue = (flds == null ? 0L : flds.nativeObject.pointer);
		getAttrTableFileds_EVString_CFields(this.nativeObject.pointer, typeNameParamValue, fldsParamValue);
	}
	native private long createModelObject_ModelType_CSceneManager_EVString(long pNativeObject, int modelType, long pSceneManager, String meshName);
	/**
	 * 创建模型库中的一个模型对象
	 * @param modelType 创建模型的类型(MT_MODEL或者MT_INSTANCE)
	 * @param pSceneManager 场景管理器对象
	 * @param meshName 模型名称
	 * @return 传入MT_MODEL，创建成功则返回CManualModelObject;传入MT_INSTANCE，创建成功则返回CManualInstanceObject;失败则返回NULL
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelBaseObject createModelObject(com.earthview.world.spatial3d.ModelType modelType, com.earthview.world.graphic.SceneManager pSceneManager, String meshName)
	{
		int modelTypeParamValue = modelType.getValue();
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String meshNameParamValue = meshName;
		long returnValue = createModelObject_ModelType_CSceneManager_EVString(this.nativeObject.pointer, modelTypeParamValue, pSceneManagerParamValue, meshNameParamValue);
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
	native private long createModelObject_ModelType_CSceneManager_ev_uint32(long pNativeObject, int modelType, long pSceneManager, long meshID);
	/**
	 * 创建模型库中的一个模型对象
	 * @param modelType 创建模型的类型(MT_MODEL或者MT_INSTANCE)
	 * @param pSceneManager 场景管理器对象
	 * @param meshID 模型id
	 * @return 传入MT_MODEL，创建成功则返回CManualModelObject;传入MT_INSTANCE，创建成功则返回CManualInstanceObject;失败则返回NULL
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelBaseObject createModelObject(com.earthview.world.spatial3d.ModelType modelType, com.earthview.world.graphic.SceneManager pSceneManager, long meshID)
	{
		int modelTypeParamValue = modelType.getValue();
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long meshIDParamValue = meshID;
		long returnValue = createModelObject_ModelType_CSceneManager_ev_uint32(this.nativeObject.pointer, modelTypeParamValue, pSceneManagerParamValue, meshIDParamValue);
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
	native private boolean destroyModelObject_CModelBaseObject(long pNativeObject, long pModel);
	/**
	 * 销毁模型库中的一个模型对象
	 * @param pModel 模型对象
	 * @return 失败则返回false
	 */
	public boolean destroyModelObject(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		boolean returnValue = destroyModelObject_CModelBaseObject(this.nativeObject.pointer, pModelParamValue);
		return returnValue;
	}
	native private long createEffect_CSceneManager_EVString(long pNativeObject, long pSceneManager, String effectName);
	/**
	 * 通过特效名字创建一个特效
	 * @param pSceneManager 场景管理器对象
	 * @param effectName 特效名字
	 * @return 返回创建成功的特效对象
	 */
	public com.earthview.world.spatial3d.effectmanager.Effect createEffect(com.earthview.world.graphic.SceneManager pSceneManager, String effectName)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String effectNameParamValue = effectName;
		long returnValue = createEffect_CSceneManager_EVString(this.nativeObject.pointer, pSceneManagerParamValue, effectNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.effectmanager.Effect __returnValue = new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate, "CEffect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.effectmanager.Effect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffect");
		}
		return __returnValue;
	}
	native private long createEffect_CSceneManager_ev_uint32(long pNativeObject, long pSceneManager, long effectId);
	/**
	 * 通过特效ID创建一个特效
	 * @param pSceneManager 场景管理器对象
	 * @param effectId 特效ID
	 * @return 返回创建成功的特效对象
	 */
	public com.earthview.world.spatial3d.effectmanager.Effect createEffect(com.earthview.world.graphic.SceneManager pSceneManager, long effectId)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long effectIdParamValue = effectId;
		long returnValue = createEffect_CSceneManager_ev_uint32(this.nativeObject.pointer, pSceneManagerParamValue, effectIdParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.effectmanager.Effect __returnValue = new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate, "CEffect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.effectmanager.Effect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffect");
		}
		return __returnValue;
	}
	native private boolean destroyEffect_CEffect(long pNativeObject, long effect);
	/**
	 * 销毁一个特效
	 * @param effect 需要销毁的特效对象
	 * @return 成功返回true，失败返回false
	 */
	public boolean destroyEffect(com.earthview.world.spatial3d.effectmanager.Effect effect)
	{
		long effectParamValue = (effect == null ? 0L : effect.nativeObject.pointer);
		boolean returnValue = destroyEffect_CEffect(this.nativeObject.pointer, effectParamValue);
		return returnValue;
	}
	native private long getBindedInfo_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 获取模型的绑定信息
	 * @param meshID 该模型ID
	 * @return EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合
	 */
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector getBindedInfo(long meshID)
	{
		long meshIDParamValue = meshID;
		long returnValue = getBindedInfo_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
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
	native private long getBindedModelInfo_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 获取模型绑定子模型信息
	 * @param meshID 该模型ID
	 * @return EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合
	 */
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector getBindedModelInfo(long meshID)
	{
		long meshIDParamValue = meshID;
		long returnValue = getBindedModelInfo_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
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
	native private long getBindedEffectInfo_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 获取模型绑定特效信息
	 * @param meshID 该模型ID
	 * @return EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合
	 */
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector getBindedEffectInfo(long meshID)
	{
		long meshIDParamValue = meshID;
		long returnValue = getBindedEffectInfo_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
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
	native private long getBindedLightInfo_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 获取模型绑定光源信息
	 * @param meshID 该模型ID
	 * @return EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合
	 */
	public com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVector getBindedLightInfo(long meshID)
	{
		long meshIDParamValue = meshID;
		long returnValue = getBindedLightInfo_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
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
	native private boolean insertBindedInfo_ev_uint32_CMeshEffectRefInfo(long pNativeObject, long meshID, long info);
	/**
	 * 插入模型绑定信息
	 * @param meshID 主模型ID
	 * @param meshID 绑定信息位置名称
	 * @param meshID 需要绑定的信息
	 * @return 成功返回true，失败返回false
	 */
	public boolean insertBindedInfo(long meshID, com.earthview.world.spatial3d.dataset.MeshEffectRefInfo info)
	{
		long meshIDParamValue = meshID;
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		boolean returnValue = insertBindedInfo_ev_uint32_CMeshEffectRefInfo(this.nativeObject.pointer, meshIDParamValue, infoParamValue);
		return returnValue;
	}
	native private boolean deleteBindedInfoByEVID_ev_uint32(long pNativeObject, long evID);
	/**
	 * 根据主键删除一条模型绑定信息
	 * @param meshID 主键ID
	 * @return 成功返回true，失败返回false
	 */
	public boolean deleteBindedInfoByEVID(long evID)
	{
		long evIDParamValue = evID;
		boolean returnValue = deleteBindedInfoByEVID_ev_uint32(this.nativeObject.pointer, evIDParamValue);
		return returnValue;
	}
	native private boolean deleteBindedInfo_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 根据主模型ID删除模型绑定信息
	 * @param meshID 主模型ID
	 * @return 成功返回true，失败返回false
	 */
	public boolean deleteBindedInfo(long meshID)
	{
		long meshIDParamValue = meshID;
		boolean returnValue = deleteBindedInfo_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		return returnValue;
	}
	native private boolean deleteBindedModelInfo_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 删除模型绑定仅子模型信息
	 * @param meshID 主模型ID
	 * @return 成功返回true，失败返回false
	 */
	public boolean deleteBindedModelInfo(long meshID)
	{
		long meshIDParamValue = meshID;
		boolean returnValue = deleteBindedModelInfo_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		return returnValue;
	}
	native private boolean deleteBindedEffectInfo_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 删除模型绑定特效信息
	 * @param meshID 主模型ID
	 * @return 成功返回true，失败返回false
	 */
	public boolean deleteBindedEffectInfo(long meshID)
	{
		long meshIDParamValue = meshID;
		boolean returnValue = deleteBindedEffectInfo_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		return returnValue;
	}
	native private long bindModelAtSubEntity_CModelBaseObject_ev_uint32_ev_uint32_CMatrix4(long pNativeObject, long pMainObj, long bindedMeshID, long subEntityIndex, long mat4);
	/**
	 * 在subentity上绑定一个模型
	 * @param pMainObj 主模型对象
	 * @param bindedMeshID 需要绑定的模型ID
	 * @param subEntityIndex 主模型对象中的subEntity的索引
	 * @param mat4 绑定模型相对主模型的矩阵
	 * @return EarthView::World::Spatial3D::ModelManager::CModelBaseObject，返回创建绑定的模型
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelBaseObject bindModelAtSubEntity(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, long bindedMeshID, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 mat4)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long bindedMeshIDParamValue = bindedMeshID;
		long subEntityIndexParamValue = subEntityIndex;
		long mat4ParamValue = mat4.nativeObject.pointer;
		long returnValue = bindModelAtSubEntity_CModelBaseObject_ev_uint32_ev_uint32_CMatrix4(this.nativeObject.pointer, pMainObjParamValue, bindedMeshIDParamValue, subEntityIndexParamValue, mat4ParamValue);
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
	native private long bindModelAtBone_CModelBaseObject_ev_uint32_EVString_CMatrix4(long pNativeObject, long pMainObj, long bindedMeshID, String boneName, long mat4);
	/**
	 * 在模型骨头上进行绑定一个模型
	 * @param pMainObj 主模型对象
	 * @param bindedMeshID 需要绑定的模型ID
	 * @param boneName 主模型对象中的骨头名称
	 * @param mat4 绑定模型相对主模型的矩阵
	 * @return EarthView::World::Spatial3D::ModelManager::CModelBaseObject，返回创建绑定的模型
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelBaseObject bindModelAtBone(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, long bindedMeshID, String boneName, com.earthview.world.spatial.math.Matrix4 mat4)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long bindedMeshIDParamValue = bindedMeshID;
		String boneNameParamValue = boneName;
		long mat4ParamValue = mat4.nativeObject.pointer;
		long returnValue = bindModelAtBone_CModelBaseObject_ev_uint32_EVString_CMatrix4(this.nativeObject.pointer, pMainObjParamValue, bindedMeshIDParamValue, boneNameParamValue, mat4ParamValue);
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
	native private long bindModelAtNode_CModelBaseObject_ev_uint32_EVString_CMatrix4(long pNativeObject, long pMainObj, long bindedMeshID, String nodeName, long mat4);
	/**
	 * 在模型节点上进行绑定一个模型
	 * @param pMainObj 主模型对象
	 * @param bindedMeshID 需要绑定的模型ID
	 * @param nodeName 主模型对象中的节点名称
	 * @param mat4 绑定模型相对主模型的矩阵
	 * @return EarthView::World::Spatial3D::ModelManager::CModelBaseObject，返回创建绑定的模型
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelBaseObject bindModelAtNode(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, long bindedMeshID, String nodeName, com.earthview.world.spatial.math.Matrix4 mat4)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long bindedMeshIDParamValue = bindedMeshID;
		String nodeNameParamValue = nodeName;
		long mat4ParamValue = mat4.nativeObject.pointer;
		long returnValue = bindModelAtNode_CModelBaseObject_ev_uint32_EVString_CMatrix4(this.nativeObject.pointer, pMainObjParamValue, bindedMeshIDParamValue, nodeNameParamValue, mat4ParamValue);
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
	native private long bindEffectAtSubEntity_CModelBaseObject_ev_uint32_ev_uint32_CMatrix4(long pNativeObject, long pMainObj, long bindedEffectID, long subEntityIndex, long mat4);
	/**
	 * 在模型subentity上绑定特效
	 * @param pMainObj 主模型对象
	 * @param bindedEffectID 需要绑定的特效ID
	 * @param subEntityIndex 主模型对象中的subEntity的索引
	 * @param mat4 绑定模型相对主模型的矩阵
	 * @return EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效
	 */
	public com.earthview.world.spatial3d.effectmanager.Effect bindEffectAtSubEntity(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, long bindedEffectID, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 mat4)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long bindedEffectIDParamValue = bindedEffectID;
		long subEntityIndexParamValue = subEntityIndex;
		long mat4ParamValue = mat4.nativeObject.pointer;
		long returnValue = bindEffectAtSubEntity_CModelBaseObject_ev_uint32_ev_uint32_CMatrix4(this.nativeObject.pointer, pMainObjParamValue, bindedEffectIDParamValue, subEntityIndexParamValue, mat4ParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.effectmanager.Effect __returnValue = new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate, "CEffect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.effectmanager.Effect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffect");
		}
		return __returnValue;
	}
	native private int bindLightAtSubEntity_CModelBaseObject_CLight_ev_uint32_ev_uint32_CMatrix4(long pNativeObject, long pMainObj, long l, long bindedLightID, long subEntityIndex, long mat4);
	/**
	 * 在模型subentity上绑定光源
	 * @param pMainObj 主模型对象
	 * @param l 需绑定的光源对象
	 * @param bindedEffectID 需要绑定的特效ID
	 * @param subEntityIndex 主模型对象中的subEntity的索引
	 * @param mat4 绑定模型相对主模型的矩阵
	 * @return EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效
	 */
	public int bindLightAtSubEntity(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, com.earthview.world.graphic.Light l, long bindedLightID, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 mat4)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		long bindedLightIDParamValue = bindedLightID;
		long subEntityIndexParamValue = subEntityIndex;
		long mat4ParamValue = mat4.nativeObject.pointer;
		int returnValue = bindLightAtSubEntity_CModelBaseObject_CLight_ev_uint32_ev_uint32_CMatrix4(this.nativeObject.pointer, pMainObjParamValue, lParamValue, bindedLightIDParamValue, subEntityIndexParamValue, mat4ParamValue);
		return returnValue;
	}
	native private long bindEffectAtBone_CModelBaseObject_ev_uint32_EVString_CMatrix4(long pNativeObject, long pMainObj, long bindedEffectID, String boneName, long mat4);
	/**
	 * 在模型骨头上绑定特效
	 * @param pMainObj 主模型对象
	 * @param bindedEffectID 需要绑定的特效ID
	 * @param boneName 主模型对象中的骨头名称
	 * @param mat4 绑定模型相对主模型的矩阵
	 * @return EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效
	 */
	public com.earthview.world.spatial3d.effectmanager.Effect bindEffectAtBone(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, long bindedEffectID, String boneName, com.earthview.world.spatial.math.Matrix4 mat4)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long bindedEffectIDParamValue = bindedEffectID;
		String boneNameParamValue = boneName;
		long mat4ParamValue = mat4.nativeObject.pointer;
		long returnValue = bindEffectAtBone_CModelBaseObject_ev_uint32_EVString_CMatrix4(this.nativeObject.pointer, pMainObjParamValue, bindedEffectIDParamValue, boneNameParamValue, mat4ParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.effectmanager.Effect __returnValue = new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate, "CEffect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.effectmanager.Effect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffect");
		}
		return __returnValue;
	}
	native private long bindEffectAtNode_CModelBaseObject_ev_uint32_EVString_CMatrix4(long pNativeObject, long pMainObj, long bindedEffectID, String nodeName, long mat4);
	/**
	 * 在模型骨头上绑定特效
	 * @param pMainObj 主模型对象
	 * @param bindedEffectID 需要绑定的特效ID
	 * @param nodeName 主模型对象中的节点名称
	 * @param mat4 绑定模型相对主模型的矩阵
	 * @return EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效
	 */
	public com.earthview.world.spatial3d.effectmanager.Effect bindEffectAtNode(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, long bindedEffectID, String nodeName, com.earthview.world.spatial.math.Matrix4 mat4)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long bindedEffectIDParamValue = bindedEffectID;
		String nodeNameParamValue = nodeName;
		long mat4ParamValue = mat4.nativeObject.pointer;
		long returnValue = bindEffectAtNode_CModelBaseObject_ev_uint32_EVString_CMatrix4(this.nativeObject.pointer, pMainObjParamValue, bindedEffectIDParamValue, nodeNameParamValue, mat4ParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.effectmanager.Effect __returnValue = new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate, "CEffect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.effectmanager.Effect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffect");
		}
		return __returnValue;
	}
	native private boolean unBindAndDestoryModel_CModelBaseObject_CModelBaseObject(long pNativeObject, long pMainObj, long pBindedObj);
	/**
	 * 取消绑定的模型并销毁
	 * @param pMainObj 主模型对象
	 * @param pBindedObj 绑定模型对象
	 * @return 成功返回true，失败返回false
	 */
	public boolean unBindAndDestoryModel(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, com.earthview.world.spatial3d.modelmanager.ModelBaseObject pBindedObj)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long pBindedObjParamValue = (pBindedObj == null ? 0L : pBindedObj.nativeObject.pointer);
		boolean returnValue = unBindAndDestoryModel_CModelBaseObject_CModelBaseObject(this.nativeObject.pointer, pMainObjParamValue, pBindedObjParamValue);
		return returnValue;
	}
	native private boolean unBindAndDestoryEffect_CModelBaseObject_CEffect(long pNativeObject, long pMainObj, long pBindedObj);
	/**
	 * 取消绑定的特效并销毁
	 * @param pMainObj 主模型对象
	 * @param pBindedObj 绑定特效对象
	 * @return 成功返回true，失败返回false
	 */
	public boolean unBindAndDestoryEffect(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, com.earthview.world.spatial3d.effectmanager.Effect pBindedObj)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long pBindedObjParamValue = (pBindedObj == null ? 0L : pBindedObj.nativeObject.pointer);
		boolean returnValue = unBindAndDestoryEffect_CModelBaseObject_CEffect(this.nativeObject.pointer, pMainObjParamValue, pBindedObjParamValue);
		return returnValue;
	}
	native private boolean unBindAndDestoryLight_CModelBaseObject_CLight_ev_uint32(long pNativeObject, long pMainObj, long pBindedObj, long bindID);
	/**
	 * 取消绑定的光源并销毁
	 * @param pMainObj 主模型对象
	 * @param pBindedObj 绑定光源对象
	 * @return 成功返回true，失败返回false
	 */
	public boolean unBindAndDestoryLight(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, com.earthview.world.graphic.Light pBindedObj, long bindID)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long pBindedObjParamValue = (pBindedObj == null ? 0L : pBindedObj.nativeObject.pointer);
		long bindIDParamValue = bindID;
		boolean returnValue = unBindAndDestoryLight_CModelBaseObject_CLight_ev_uint32(this.nativeObject.pointer, pMainObjParamValue, pBindedObjParamValue, bindIDParamValue);
		return returnValue;
	}
	native private boolean updateBindedModelPosition_CModelBaseObject_CModelBaseObject_CVector3_CVector3_CVector3(long pNativeObject, long pMainObj, long pBindedObj, long pos, long scale, long rotate);
	/**
	 * 更新绑定的模型的姿态
	 * @param pMainObj 主模型对象
	 * @param pBindedObj 绑定模型对象
	 * @param pos 绑定模型位置信息
	 * @param scale 绑定模型缩放信息
	 * @param rotate 绑定模型旋转信息
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateBindedModelPosition(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, com.earthview.world.spatial3d.modelmanager.ModelBaseObject pBindedObj, com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Vector3 rotate)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long pBindedObjParamValue = (pBindedObj == null ? 0L : pBindedObj.nativeObject.pointer);
		long posParamValue = pos.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		boolean returnValue = updateBindedModelPosition_CModelBaseObject_CModelBaseObject_CVector3_CVector3_CVector3(this.nativeObject.pointer, pMainObjParamValue, pBindedObjParamValue, posParamValue, scaleParamValue, rotateParamValue);
		return returnValue;
	}
	native private boolean updateBindedEffectPosition_CModelBaseObject_CEffect_CVector3_CVector3_CVector3(long pNativeObject, long pMainObj, long pBindedObj, long pos, long scale, long rotate);
	/**
	 * 更新绑定的特效的姿态
	 * @param pMainObj 主模型对象
	 * @param pBindedObj 绑定特效对象
	 * @param pos 绑定特效位置信息
	 * @param scale 绑定特效缩放信息
	 * @param rotate 绑定特效旋转信息
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateBindedEffectPosition(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, com.earthview.world.spatial3d.effectmanager.Effect pBindedObj, com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Vector3 rotate)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long pBindedObjParamValue = (pBindedObj == null ? 0L : pBindedObj.nativeObject.pointer);
		long posParamValue = pos.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		boolean returnValue = updateBindedEffectPosition_CModelBaseObject_CEffect_CVector3_CVector3_CVector3(this.nativeObject.pointer, pMainObjParamValue, pBindedObjParamValue, posParamValue, scaleParamValue, rotateParamValue);
		return returnValue;
	}
	native private boolean updateBindedLightPosition_CModelBaseObject_ev_uint32_CVector3_CVector3_CVector3(long pNativeObject, long pMainObj, long bindID, long pos, long scale, long rotate);
	/**
	 * 更新绑定的光源的姿态
	 * @param pMainObj 主模型对象
	 * @param pBindedObj 绑定光源对象
	 * @param pos 绑定光源位置信息
	 * @param scale 绑定光源缩放信息
	 * @param rotate 绑定光源旋转信息
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateBindedLightPosition(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, long bindID, com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Vector3 rotate)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long bindIDParamValue = bindID;
		long posParamValue = pos.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		boolean returnValue = updateBindedLightPosition_CModelBaseObject_ev_uint32_CVector3_CVector3_CVector3(this.nativeObject.pointer, pMainObjParamValue, bindIDParamValue, posParamValue, scaleParamValue, rotateParamValue);
		return returnValue;
	}
	native private boolean updateBindedLightProperty_ev_uint32_CLight(long pNativeObject, long bindID, long l);
	/**
	 * 更新绑定的光源的属性
	 * @param pMainObj 主模型对象
	 * @param pBindedObj 绑定光源对象
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateBindedLightProperty(long bindID, com.earthview.world.graphic.Light l)
	{
		long bindIDParamValue = bindID;
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		boolean returnValue = updateBindedLightProperty_ev_uint32_CLight(this.nativeObject.pointer, bindIDParamValue, lParamValue);
		return returnValue;
	}
	native private boolean updateMainModelLocalMatrix_CModelBaseObject_CVector3_CVector3_CVector3(long pNativeObject, long pMainObj, long pos, long scale, long rotate);
	/**
	 * 更新主模型的姿态
	 * @param pMainObj 主模型对象
	 * @param pos 模型位置信息
	 * @param scale 模型缩放信息
	 * @param rotate 模型旋转信息
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateMainModelLocalMatrix(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pMainObj, com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Vector3 rotate)
	{
		long pMainObjParamValue = (pMainObj == null ? 0L : pMainObj.nativeObject.pointer);
		long posParamValue = pos.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long rotateParamValue = rotate.nativeObject.pointer;
		boolean returnValue = updateMainModelLocalMatrix_CModelBaseObject_CVector3_CVector3_CVector3(this.nativeObject.pointer, pMainObjParamValue, posParamValue, scaleParamValue, rotateParamValue);
		return returnValue;
	}
	native private boolean updateMaterial_CModelBaseObject_CMaterialPtr_StringVector_StringVector(long pNativeObject, long pModel, long matPtr, long replacedTextures, long newTextureFilesPath);
	/**
	 * 更新模型材质
	 * @param pModel 模型对象
	 * @param matPtr 需要更新的模型材质
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateMaterial(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel, com.earthview.world.graphic.MaterialPtr matPtr, com.earthview.world.core.StringVector replacedTextures, com.earthview.world.core.StringVector newTextureFilesPath)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		long matPtrParamValue = matPtr.nativeObject.pointer;
		long replacedTexturesParamValue = replacedTextures.nativeObject.pointer;
		long newTextureFilesPathParamValue = newTextureFilesPath.nativeObject.pointer;
		boolean returnValue = updateMaterial_CModelBaseObject_CMaterialPtr_StringVector_StringVector(this.nativeObject.pointer, pModelParamValue, matPtrParamValue, replacedTexturesParamValue, newTextureFilesPathParamValue);
		return returnValue;
	}
	public ModelEffectDBManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelEffectDBManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelEffectDBManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelEffectDBManager obj = null;
 		if(baseObj instanceof ModelEffectDBManager)
		{
			obj = (ModelEffectDBManager)baseObj;
		} else {
			obj = new ModelEffectDBManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelEffectDBManager");
			obj.increaseCast();
		}

		return obj;
	}
}
