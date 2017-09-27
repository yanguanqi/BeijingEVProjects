package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效的图层编辑器
 */
public class EffectLayerEditor extends com.earthview.world.spatial3d.Layer3DEditor {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CEffectLayerEditor", new EffectLayerEditorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCEffectLayerEditorProxy", new EffectLayerEditorClassFactory());
	}

	/**
	 * 构造函数
	 */
	public EffectLayerEditor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEffectLayerEditorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.EffectLayerEditor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void saveEditing_void(long pNativeObject);
	/**
	 * 保存编辑
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

	native private boolean startEditing_ev_bool(long pNativeObject, boolean withUndo);
	/**
	 * 开始编辑
	 * @param withUndo 是否开启回退
	 * @return 开始编辑是否操作成功，成功为true
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
	 * @param isSave 是否保存修改的内容，true为保存
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

	native private long addLayerObject_ev_uint32_CMatrix4(long pNativeObject, long id, long matrix);
	/**
	 * 往图层上添加特效
	 * @param id 所添加的特效ID
	 * @param matrix 特效所在的全局变换矩阵
	 * @return 添加是否成功，true代表成功
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

	native private boolean changeObjectPosition_CVisibleObjectPtr_CMatrix4(long pNativeObject, long objPtr, long nwMatrix);
	/**
	 * 编辑图层上特效
	 * @param objPtr 所编辑的特效显示对象
	 * @param nwMatrix 特效修改后的全局变换矩阵
	 * @return 编辑是否成功，true代表成功
	 */
	public boolean changeObjectPosition(com.earthview.world.geometry3d.VisibleObjectPtr objPtr, com.earthview.world.spatial.math.Matrix4 nwMatrix)
	{
		long objPtrParamValue = objPtr.nativeObject.pointer;
		long nwMatrixParamValue = nwMatrix.nativeObject.pointer;
		boolean returnValue = changeObjectPosition_CVisibleObjectPtr_CMatrix4(this.nativeObject.pointer, objPtrParamValue, nwMatrixParamValue);
		return returnValue;
	}
	native private boolean changeObjectPosition_CVisibleObjectPtr_CMatrix4_NoVirtual(long pNativeObject, long objPtr, long nwMatrix);
	protected boolean changeObjectPosition_NoVirtual(com.earthview.world.geometry3d.VisibleObjectPtr objPtr, com.earthview.world.spatial.math.Matrix4 nwMatrix)
	{
		long objPtrParamValue = objPtr.nativeObject.pointer;
		long nwMatrixParamValue = nwMatrix.nativeObject.pointer;
		boolean returnValue = changeObjectPosition_CVisibleObjectPtr_CMatrix4_NoVirtual(this.nativeObject.pointer, objPtrParamValue, nwMatrixParamValue);
		return returnValue;
	}

	native private boolean deleteLayerObject_ev_uint32(long pNativeObject, long objId);
	/**
	 * 删除图层上的特效
	 * @param objId 所删除的特效的ID
	 * @return 编辑是否成功，true代表成功
	 */
	public boolean deleteLayerObject(long objId)
	{
		long objIdParamValue = objId;
		boolean returnValue = deleteLayerObject_ev_uint32(this.nativeObject.pointer, objIdParamValue);
		return returnValue;
	}
	native private boolean deleteLayerObject_ev_uint32_NoVirtual(long pNativeObject, long objId);
	protected boolean deleteLayerObject_NoVirtual(long objId)
	{
		long objIdParamValue = objId;
		boolean returnValue = deleteLayerObject_ev_uint32_NoVirtual(this.nativeObject.pointer, objIdParamValue);
		return returnValue;
	}

	native private void setSelectedObject_CEffectObject(long pNativeObject, long ref_obj);
	/**
	 * 将图层上的特效设置为选择状态
	 * @param obj 特效的可视化对象
	 */
	public void setSelectedObject(com.earthview.world.spatial3d.effectmanager.EffectObject ref_obj)
	{
		long ref_objParamValue = (ref_obj == null ? 0L : ref_obj.nativeObject.pointer);
		setSelectedObject_CEffectObject(this.nativeObject.pointer, ref_objParamValue);
	}
	native private long getSelectedObject_void(long pNativeObject);
	/**
	 * 获得图层上当前点选的特效
	 * @return 特效的可视化对象
	 */
	public com.earthview.world.spatial3d.effectmanager.EffectObject getSelectedObject()
	{
		long returnValue = getSelectedObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.effectmanager.EffectObject __returnValue = new com.earthview.world.spatial3d.effectmanager.EffectObject(CreatedWhenConstruct.CWC_NotToCreate, "CEffectObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.effectmanager.EffectObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffectObject");
		}
		return __returnValue;
	}
	public EffectLayerEditor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectLayerEditor(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static EffectLayerEditor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectLayerEditor obj = null;
 		if(baseObj instanceof EffectLayerEditor)
		{
			obj = (EffectLayerEditor)baseObj;
		} else {
			obj = new EffectLayerEditor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectLayerEditor");
			obj.increaseCast();
		}

		return obj;
	}
}
