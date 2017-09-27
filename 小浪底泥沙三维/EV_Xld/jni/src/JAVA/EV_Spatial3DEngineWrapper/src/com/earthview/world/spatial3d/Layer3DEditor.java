package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Layer3DEditor extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CLayer3DEditor", new Layer3DEditorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCLayer3DEditorProxy", new Layer3DEditorClassFactory());
	}

	protected  void setEditingLayer_IGlobeLayer_callback(long ref_layer)
	{
		com.earthview.world.spatial3d.atlas.Iglobelayer ref_layerParamValue = (ref_layer == 0L ? null : new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_layerParamValue != null)
		{
		ref_layerParamValue.setDelegate(true);
		ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		IClassFactory ref_layerParamValueClassFactory = GlobalClassFactoryMap.get(ref_layerParamValue.getCppInstanceTypeName());
		if (ref_layerParamValueClassFactory != null)
		{
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)ref_layerParamValueClassFactory.create();
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		}
		}
		setEditingLayer(ref_layerParamValue);
	}

	native private void setEditingLayer_IGlobeLayer(long pNativeObject, long ref_layer);
	/**
	 * 设置当前正在编辑的图层
	 */
	public void setEditingLayer(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		setEditingLayer_IGlobeLayer(this.nativeObject.pointer, ref_layerParamValue);
	}
	native private void setEditingLayer_IGlobeLayer_NoVirtual(long pNativeObject, long ref_layer);
	protected void setEditingLayer_NoVirtual(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		setEditingLayer_IGlobeLayer_NoVirtual(this.nativeObject.pointer, ref_layerParamValue);
	}

	protected  long getEditingLayer_void_callback()
	{
		com.earthview.world.spatial3d.atlas.Iglobelayer returnValue = getEditingLayer();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEditingLayer_void(long pNativeObject);
	/**
	 * 获取当前正在编辑的图层
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer getEditingLayer()
	{
		long returnValue = getEditingLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeLayer");
		}
		return __returnValue;
	}
	native private long getEditingLayer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.atlas.Iglobelayer getEditingLayer_NoVirtual()
	{
		long returnValue = getEditingLayer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeLayer");
		}
		return __returnValue;
	}

	protected  boolean startEditing_ev_bool_callback(boolean withUndo)
	{
		boolean withUndoParamValue = withUndo;
		boolean returnValue = startEditing(withUndoParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  void stopEditing_ev_bool_callback(boolean isSave)
	{
		boolean isSaveParamValue = isSave;
		stopEditing(isSaveParamValue);
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

	protected  void saveEditing_void_callback()
	{
		saveEditing();
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

	protected  boolean isEditing_void_callback()
	{
		boolean returnValue = isEditing();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isEditing_void(long pNativeObject);
	/**
	 * 是否在编辑
	 */
	public boolean isEditing()
	{
		boolean returnValue = isEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEditing_void_NoVirtual(long pNativeObject);
	protected boolean isEditing_NoVirtual()
	{
		boolean returnValue = isEditing_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean redo_void_callback()
	{
		boolean returnValue = redo();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean redo_void(long pNativeObject);
	/**
	 * 回做
	 */
	public boolean redo()
	{
		boolean returnValue = redo_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean redo_void_NoVirtual(long pNativeObject);
	protected boolean redo_NoVirtual()
	{
		boolean returnValue = redo_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean undo_void_callback()
	{
		boolean returnValue = undo();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean undo_void(long pNativeObject);
	/**
	 * 撤消
	 */
	public boolean undo()
	{
		boolean returnValue = undo_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean undo_void_NoVirtual(long pNativeObject);
	protected boolean undo_NoVirtual()
	{
		boolean returnValue = undo_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean canRedo_void_callback()
	{
		boolean returnValue = canRedo();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canRedo_void(long pNativeObject);
	/**
	 * 可否回做
	 */
	public boolean canRedo()
	{
		boolean returnValue = canRedo_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canRedo_void_NoVirtual(long pNativeObject);
	protected boolean canRedo_NoVirtual()
	{
		boolean returnValue = canRedo_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean canUndo_void_callback()
	{
		boolean returnValue = canUndo();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canUndo_void(long pNativeObject);
	/**
	 * 可否撤消
	 */
	public boolean canUndo()
	{
		boolean returnValue = canUndo_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canUndo_void_NoVirtual(long pNativeObject);
	protected boolean canUndo_NoVirtual()
	{
		boolean returnValue = canUndo_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long addLayerObject_ev_uint32_CMatrix4_callback(long id, long matrix)
	{
		long idParamValue = id;
		com.earthview.world.spatial.math.Matrix4 matrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		matrixParamValue.setDelegate(true);
		matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		IClassFactory matrixParamValueClassFactory = GlobalClassFactoryMap.get(matrixParamValue.getCppInstanceTypeName());
		if (matrixParamValueClassFactory != null)
		{
			matrixParamValue.setDelegate(true);
			matrixParamValue = (com.earthview.world.spatial.math.Matrix4)matrixParamValueClassFactory.create();
			matrixParamValue.setDelegate(true);
			matrixParamValue.setInstancePointer(new InstancePointer(matrix));
		}
		long returnValue = addLayerObject(idParamValue, matrixParamValue);
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback(long objPtr, long nwMatrix)
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
		com.earthview.world.spatial.math.Matrix4 nwMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		nwMatrixParamValue.setDelegate(true);
		nwMatrixParamValue.setInstancePointer(new InstancePointer(nwMatrix));
		IClassFactory nwMatrixParamValueClassFactory = GlobalClassFactoryMap.get(nwMatrixParamValue.getCppInstanceTypeName());
		if (nwMatrixParamValueClassFactory != null)
		{
			nwMatrixParamValue.setDelegate(true);
			nwMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)nwMatrixParamValueClassFactory.create();
			nwMatrixParamValue.setDelegate(true);
			nwMatrixParamValue.setInstancePointer(new InstancePointer(nwMatrix));
		}
		boolean returnValue = changeObjectPosition(objPtrParamValue, nwMatrixParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean changeObjectPosition_CVisibleObjectPtr_CMatrix4(long pNativeObject, long objPtr, long nwMatrix);
	/**
	 * 修改对象的位置
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

	protected  boolean deleteLayerObject_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteLayerObject(idParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteLayerObject_ev_uint32(long pNativeObject, long id);
	/**
	 * 删除对象
	 * @param id 对象ID
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

	protected  void addListener_CLayer3DEditorListener_callback(long lis)
	{
		com.earthview.world.spatial3d.Layer3DEditorListener lisParamValue = (lis == 0L ? null : new com.earthview.world.spatial3d.Layer3DEditorListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(lisParamValue != null)
		{
		lisParamValue.setDelegate(true);
		lisParamValue.setInstancePointer(new InstancePointer(lis));
		IClassFactory lisParamValueClassFactory = GlobalClassFactoryMap.get(lisParamValue.getCppInstanceTypeName());
		if (lisParamValueClassFactory != null)
		{
			lisParamValue.setDelegate(true);
			lisParamValue = (com.earthview.world.spatial3d.Layer3DEditorListener)lisParamValueClassFactory.create();
			lisParamValue.setDelegate(true);
			lisParamValue.setInstancePointer(new InstancePointer(lis));
		}
		}
		addListener(lisParamValue);
	}

	native private void addListener_CLayer3DEditorListener(long pNativeObject, long lis);
	/**
	 * 添加监听器
	 * @param lis 添加监听器
	 */
	public void addListener(com.earthview.world.spatial3d.Layer3DEditorListener lis)
	{
		long lisParamValue = (lis == null ? 0L : lis.nativeObject.pointer);
		addListener_CLayer3DEditorListener(this.nativeObject.pointer, lisParamValue);
	}
	native private void addListener_CLayer3DEditorListener_NoVirtual(long pNativeObject, long lis);
	protected void addListener_NoVirtual(com.earthview.world.spatial3d.Layer3DEditorListener lis)
	{
		long lisParamValue = (lis == null ? 0L : lis.nativeObject.pointer);
		addListener_CLayer3DEditorListener_NoVirtual(this.nativeObject.pointer, lisParamValue);
	}

	protected  void removeListener_CLayer3DEditorListener_callback(long lis)
	{
		com.earthview.world.spatial3d.Layer3DEditorListener lisParamValue = (lis == 0L ? null : new com.earthview.world.spatial3d.Layer3DEditorListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(lisParamValue != null)
		{
		lisParamValue.setDelegate(true);
		lisParamValue.setInstancePointer(new InstancePointer(lis));
		IClassFactory lisParamValueClassFactory = GlobalClassFactoryMap.get(lisParamValue.getCppInstanceTypeName());
		if (lisParamValueClassFactory != null)
		{
			lisParamValue.setDelegate(true);
			lisParamValue = (com.earthview.world.spatial3d.Layer3DEditorListener)lisParamValueClassFactory.create();
			lisParamValue.setDelegate(true);
			lisParamValue.setInstancePointer(new InstancePointer(lis));
		}
		}
		removeListener(lisParamValue);
	}

	native private void removeListener_CLayer3DEditorListener(long pNativeObject, long lis);
	/**
	 * 移除监听器
	 * @param lis 添加监听器
	 */
	public void removeListener(com.earthview.world.spatial3d.Layer3DEditorListener lis)
	{
		long lisParamValue = (lis == null ? 0L : lis.nativeObject.pointer);
		removeListener_CLayer3DEditorListener(this.nativeObject.pointer, lisParamValue);
	}
	native private void removeListener_CLayer3DEditorListener_NoVirtual(long pNativeObject, long lis);
	protected void removeListener_NoVirtual(com.earthview.world.spatial3d.Layer3DEditorListener lis)
	{
		long lisParamValue = (lis == null ? 0L : lis.nativeObject.pointer);
		removeListener_CLayer3DEditorListener_NoVirtual(this.nativeObject.pointer, lisParamValue);
	}

	protected  long getListener_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial3d.Layer3DEditorListener returnValue = getListener(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getListener_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取监听器
	 * @param index 下标
	 */
	public com.earthview.world.spatial3d.Layer3DEditorListener getListener(long index)
	{
		long indexParamValue = index;
		long returnValue = getListener_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Layer3DEditorListener __returnValue = new com.earthview.world.spatial3d.Layer3DEditorListener(CreatedWhenConstruct.CWC_NotToCreate, "CLayer3DEditorListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Layer3DEditorListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayer3DEditorListener");
		}
		return __returnValue;
	}
	native private long getListener_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial3d.Layer3DEditorListener getListener_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getListener_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Layer3DEditorListener __returnValue = new com.earthview.world.spatial3d.Layer3DEditorListener(CreatedWhenConstruct.CWC_NotToCreate, "CLayer3DEditorListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Layer3DEditorListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayer3DEditorListener");
		}
		return __returnValue;
	}

	protected  long getNumListener_void_callback()
	{
		long returnValue = getNumListener();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getNumListener_void(long pNativeObject);
	/**
	 * 获取监听器个数
	 * @param index 下标
	 */
	public long getNumListener()
	{
		long returnValue = getNumListener_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNumListener_void_NoVirtual(long pNativeObject);
	protected long getNumListener_NoVirtual()
	{
		long returnValue = getNumListener_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public Layer3DEditor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Layer3DEditor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static Layer3DEditor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Layer3DEditor obj = null;
 		if(baseObj instanceof Layer3DEditor)
		{
			obj = (Layer3DEditor)baseObj;
		} else {
			obj = new Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayer3DEditor");
			obj.increaseCast();
		}

		return obj;
	}
}
