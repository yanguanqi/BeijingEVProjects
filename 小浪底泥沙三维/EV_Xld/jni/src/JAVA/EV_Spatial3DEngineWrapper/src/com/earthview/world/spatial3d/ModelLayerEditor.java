package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelLayerEditor extends com.earthview.world.spatial3d.Layer3DEditor {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CModelLayerEditor", new ModelLayerEditorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCModelLayerEditorProxy", new ModelLayerEditorClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ModelLayerEditor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCModelLayerEditorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.ModelLayerEditor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean startEditing_ev_bool(long pNativeObject, boolean withUndo);
	/**
	 * 开始编辑
	 */
	public boolean startEditing(boolean withUndo)
	{
		boolean withUndoParamValue = withUndo;
		boolean returnValue = startEditing_ev_bool(this.nativeObject.pointer, withUndoParamValue);
		return returnValue;
	}
	native private boolean startEditing_ev_bool_NoVirtual(long pNativeObject, boolean withUndo);
	protected boolean startEditing_NoVirtual(boolean withUndo)
	{
		boolean withUndoParamValue = withUndo;
		boolean returnValue = startEditing_ev_bool_NoVirtual(this.nativeObject.pointer, withUndoParamValue);
		return returnValue;
	}

	native private void stopEditing_ev_bool(long pNativeObject, boolean isSave);
	/**
	 * 停止编辑
	 */
	public void stopEditing(boolean isSave)
	{
		boolean isSaveParamValue = isSave;
		stopEditing_ev_bool(this.nativeObject.pointer, isSaveParamValue);
	}
	native private void stopEditing_ev_bool_NoVirtual(long pNativeObject, boolean isSave);
	protected void stopEditing_NoVirtual(boolean isSave)
	{
		boolean isSaveParamValue = isSave;
		stopEditing_ev_bool_NoVirtual(this.nativeObject.pointer, isSaveParamValue);
	}

	native private void saveEditing_void(long pNativeObject);
	/**
	 * 保存
	 */
	public void saveEditing()
	{
		saveEditing_void(this.nativeObject.pointer);
	}
	native private void saveEditing_void_NoVirtual(long pNativeObject);
	protected void saveEditing_NoVirtual()
	{
		saveEditing_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long addLayerObject_ev_uint32_CMatrix4(long pNativeObject, long id, long matrix);
	/**
	 * 添加一个可见对象
	 */
	public long addLayerObject(long id, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long idParamValue = id;
		long matrixParamValue = matrix.nativeObject.pointer;
		long returnValue = addLayerObject_ev_uint32_CMatrix4(this.nativeObject.pointer, idParamValue, matrixParamValue);
		return returnValue;
	}
	native private long addLayerObject_ev_uint32_CMatrix4_NoVirtual(long pNativeObject, long id, long matrix);
	protected long addLayerObject_NoVirtual(long id, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long idParamValue = id;
		long matrixParamValue = matrix.nativeObject.pointer;
		long returnValue = addLayerObject_ev_uint32_CMatrix4_NoVirtual(this.nativeObject.pointer, idParamValue, matrixParamValue);
		return returnValue;
	}

	protected  boolean changeObjectPosition_CVisibleObjectPtr_CMatrix4_ev_real64_callback(long objPtr, long oldMatrix, double oldDem)
	{
		com.earthview.world.geometry3d.VisibleObjectPtr objPtrParamValue = new com.earthview.world.geometry3d.VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
		objPtrParamValue.setDelegate(true);
		objPtrParamValue.setInstancePointer(new InstancePointer(objPtr));
		IClassFactory objPtrParamValueClassFactory = GlobalClassFactoryMap.get(objPtrParamValue.getCppInstanceTypeName());
		if (objPtrParamValueClassFactory != null)
		{
			objPtrParamValue.setDelegate(true);
			objPtrParamValue = (com.earthview.world.geometry3d.VisibleObjectPtr)objPtrParamValueClassFactory.create();
			objPtrParamValue.setDelegate(true);
			objPtrParamValue.setInstancePointer(new InstancePointer(objPtr));
		}
		com.earthview.world.spatial.math.Matrix4 oldMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		oldMatrixParamValue.setDelegate(true);
		oldMatrixParamValue.setInstancePointer(new InstancePointer(oldMatrix));
		IClassFactory oldMatrixParamValueClassFactory = GlobalClassFactoryMap.get(oldMatrixParamValue.getCppInstanceTypeName());
		if (oldMatrixParamValueClassFactory != null)
		{
			oldMatrixParamValue.setDelegate(true);
			oldMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)oldMatrixParamValueClassFactory.create();
			oldMatrixParamValue.setDelegate(true);
			oldMatrixParamValue.setInstancePointer(new InstancePointer(oldMatrix));
		}
		double oldDemParamValue = oldDem;
		boolean returnValue = changeObjectPosition(objPtrParamValue, oldMatrixParamValue, oldDemParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean changeObjectPosition_CVisibleObjectPtr_CMatrix4_ev_real64(long pNativeObject, long objPtr, long oldMatrix, double oldDem);
	/**
	 * 界面上先移动的模型，再修改对象存储2014.1.14修改接口（没有与基类一致），解决模型mesh包围盒中心点不在原点
	 */
	public boolean changeObjectPosition(com.earthview.world.geometry3d.VisibleObjectPtr objPtr, com.earthview.world.spatial.math.Matrix4 oldMatrix, double oldDem)
	{
		long objPtrParamValue = objPtr.nativeObject.pointer;
		long oldMatrixParamValue = oldMatrix.nativeObject.pointer;
		double oldDemParamValue = oldDem;
		boolean returnValue = changeObjectPosition_CVisibleObjectPtr_CMatrix4_ev_real64(this.nativeObject.pointer, objPtrParamValue, oldMatrixParamValue, oldDemParamValue);
		return returnValue;
	}
	native private boolean changeObjectPosition_CVisibleObjectPtr_CMatrix4_ev_real64_NoVirtual(long pNativeObject, long objPtr, long oldMatrix, double oldDem);
	protected boolean changeObjectPosition_NoVirtual(com.earthview.world.geometry3d.VisibleObjectPtr objPtr, com.earthview.world.spatial.math.Matrix4 oldMatrix, double oldDem)
	{
		long objPtrParamValue = objPtr.nativeObject.pointer;
		long oldMatrixParamValue = oldMatrix.nativeObject.pointer;
		double oldDemParamValue = oldDem;
		boolean returnValue = changeObjectPosition_CVisibleObjectPtr_CMatrix4_ev_real64_NoVirtual(this.nativeObject.pointer, objPtrParamValue, oldMatrixParamValue, oldDemParamValue);
		return returnValue;
	}

	native private boolean changeObjectAttribute_IFeature_IFeature(long pNativeObject, long pMeshFeature, long pOldMeshFeature);
	/**
	 * 修改记录表属性（非用户属性(比如内置属性或只读属性)不会被更新）记录表属性：数据集的用户属性，可通过编辑记录表来添加用户属性pMeshFeature=entityDataset->getFeature(id)pMeshFeature->setValue(val,"customFld");注：不可用pMeshFeature=pModel->getMeshFeature，因为模型中的feature的包围盒考虑了高程，而数据库中的包围盒不考虑高程
	 * @param 设置新属性值以后的feature pMeshFeature
	 * @param 设置新属性值之前的 pOldMeshFeature
	 */
	public boolean changeObjectAttribute(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial.geodataset.Ifeature pOldMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long pOldMeshFeatureParamValue = (pOldMeshFeature == null ? 0L : pOldMeshFeature.nativeObject.pointer);
		boolean returnValue = changeObjectAttribute_IFeature_IFeature(this.nativeObject.pointer, pMeshFeatureParamValue, pOldMeshFeatureParamValue);
		return returnValue;
	}
	native private boolean deleteLayerObject_ev_uint32(long pNativeObject, long id);
	/**
	 * 删除对象
	 * @param id 图层中的ID
	 */
	public boolean deleteLayerObject(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteLayerObject_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private boolean deleteLayerObject_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected boolean deleteLayerObject_NoVirtual(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteLayerObject_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}

	public ModelLayerEditor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelLayerEditor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 设置当前正在编辑的图层
	 */
	public void setEditingLayer(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer)
	{
		super.setEditingLayer_NoVirtual(ref_layer);
	}
	/**
	 * 获取当前正在编辑的图层
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer getEditingLayer()
	{
		return super.getEditingLayer_NoVirtual();
	}
	/**
	 * 是否在编辑
	 */
	public boolean isEditing()
	{
		return super.isEditing_NoVirtual();
	}
	/**
	 * 回做
	 */
	public boolean redo()
	{
		return super.redo_NoVirtual();
	}
	/**
	 * 撤消
	 */
	public boolean undo()
	{
		return super.undo_NoVirtual();
	}
	/**
	 * 可否回做
	 */
	public boolean canRedo()
	{
		return super.canRedo_NoVirtual();
	}
	/**
	 * 可否撤消
	 */
	public boolean canUndo()
	{
		return super.canUndo_NoVirtual();
	}
	/**
	 * 修改对象的位置
	 */
	public boolean changeObjectPosition(com.earthview.world.geometry3d.VisibleObjectPtr objPtr, com.earthview.world.spatial.math.Matrix4 nwMatrix)
	{
		return super.changeObjectPosition_NoVirtual(objPtr, nwMatrix);
	}
	/**
	 * 添加监听器
	 * @param lis 添加监听器
	 */
	public void addListener(com.earthview.world.spatial3d.Layer3DEditorListener lis)
	{
		super.addListener_NoVirtual(lis);
	}
	/**
	 * 移除监听器
	 * @param lis 添加监听器
	 */
	public void removeListener(com.earthview.world.spatial3d.Layer3DEditorListener lis)
	{
		super.removeListener_NoVirtual(lis);
	}
	/**
	 * 获取监听器
	 * @param index 下标
	 */
	public com.earthview.world.spatial3d.Layer3DEditorListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 获取监听器个数
	 * @param index 下标
	 */
	public long getNumListener()
	{
		return super.getNumListener_NoVirtual();
	}
	
	native protected void register_changeObjectPosition_CVisibleObjectPtr_CMatrix4_ev_real64(long pNativeObject, String method);
	native protected void register_setEditingLayer_IGlobeLayer(long pNativeObject, String method);
	native protected void register_getEditingLayer_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_bool(long pNativeObject, String method);
	native protected void register_stopEditing_ev_bool(long pNativeObject, String method);
	native protected void register_saveEditing_void(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_redo_void(long pNativeObject, String method);
	native protected void register_undo_void(long pNativeObject, String method);
	native protected void register_canRedo_void(long pNativeObject, String method);
	native protected void register_canUndo_void(long pNativeObject, String method);
	native protected void register_addLayerObject_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_changeObjectPosition_CVisibleObjectPtr_CMatrix4(long pNativeObject, String method);
	native protected void register_deleteLayerObject_ev_uint32(long pNativeObject, String method);
	native protected void register_addListener_CLayer3DEditorListener(long pNativeObject, String method);
	native protected void register_removeListener_CLayer3DEditorListener(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_getNumListener_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_changeObjectPosition_CVisibleObjectPtr_CMatrix4_ev_real64(this.nativeObject.pointer, "changeObjectPosition_CVisibleObjectPtr_CMatrix4_ev_real64_callback");
			this.register_setEditingLayer_IGlobeLayer(this.nativeObject.pointer, "setEditingLayer_IGlobeLayer_callback");
			this.register_getEditingLayer_void(this.nativeObject.pointer, "getEditingLayer_void_callback");
			this.register_startEditing_ev_bool(this.nativeObject.pointer, "startEditing_ev_bool_callback");
			this.register_stopEditing_ev_bool(this.nativeObject.pointer, "stopEditing_ev_bool_callback");
			this.register_saveEditing_void(this.nativeObject.pointer, "saveEditing_void_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_redo_void(this.nativeObject.pointer, "redo_void_callback");
			this.register_undo_void(this.nativeObject.pointer, "undo_void_callback");
			this.register_canRedo_void(this.nativeObject.pointer, "canRedo_void_callback");
			this.register_canUndo_void(this.nativeObject.pointer, "canUndo_void_callback");
			this.register_addLayerObject_ev_uint32_CMatrix4(this.nativeObject.pointer, "addLayerObject_ev_uint32_CMatrix4_callback");
			this.register_changeObjectPosition_CVisibleObjectPtr_CMatrix4(this.nativeObject.pointer, "changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback");
			this.register_deleteLayerObject_ev_uint32(this.nativeObject.pointer, "deleteLayerObject_ev_uint32_callback");
			this.register_addListener_CLayer3DEditorListener(this.nativeObject.pointer, "addListener_CLayer3DEditorListener_callback");
			this.register_removeListener_CLayer3DEditorListener(this.nativeObject.pointer, "removeListener_CLayer3DEditorListener_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_getNumListener_void(this.nativeObject.pointer, "getNumListener_void_callback");
		}
	}
	
	public static ModelLayerEditor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelLayerEditor obj = null;
 		if(baseObj instanceof ModelLayerEditor)
		{
			obj = (ModelLayerEditor)baseObj;
		} else {
			obj = new ModelLayerEditor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelLayerEditor");
			obj.increaseCast();
		}

		return obj;
	}
}
