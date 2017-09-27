package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshxgLayerEditor extends com.earthview.world.spatial3d.Layer3DEditor {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CMeshxgLayerEditor", new MeshxgLayerEditorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCMeshxgLayerEditorProxy", new MeshxgLayerEditorClassFactory());
	}

	/**
	 * 构造函数
	 */
	public MeshxgLayerEditor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMeshxgLayerEditorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.MeshxgLayerEditor".equals(this.getClass().getName()))
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

	protected  long addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback(String meshxfile, double lat, double lon, double alt, long localScale, long localOrientation, long propertyVal)
	{
		String meshxfileParamValue = meshxfile;
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		com.earthview.world.spatial.math.Vector3 localScaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localScaleParamValue.setDelegate(true);
		localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		IClassFactory localScaleParamValueClassFactory = GlobalClassFactoryMap.get(localScaleParamValue.getCppInstanceTypeName());
		if (localScaleParamValueClassFactory != null)
		{
			localScaleParamValue.setDelegate(true);
			localScaleParamValue = (com.earthview.world.spatial.math.Vector3)localScaleParamValueClassFactory.create();
			localScaleParamValue.setDelegate(true);
			localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		}
		com.earthview.world.spatial.math.Quaternion localOrientationParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		localOrientationParamValue.setDelegate(true);
		localOrientationParamValue.setInstancePointer(new InstancePointer(localOrientation));
		IClassFactory localOrientationParamValueClassFactory = GlobalClassFactoryMap.get(localOrientationParamValue.getCppInstanceTypeName());
		if (localOrientationParamValueClassFactory != null)
		{
			localOrientationParamValue.setDelegate(true);
			localOrientationParamValue = (com.earthview.world.spatial.math.Quaternion)localOrientationParamValueClassFactory.create();
			localOrientationParamValue.setDelegate(true);
			localOrientationParamValue.setInstancePointer(new InstancePointer(localOrientation));
		}
		com.earthview.world.spatial.geodataset.PropertySet propertyValParamValue = new com.earthview.world.spatial.geodataset.PropertySet(CreatedWhenConstruct.CWC_NotToCreate);
		propertyValParamValue.setDelegate(true);
		propertyValParamValue.setInstancePointer(new InstancePointer(propertyVal));
		IClassFactory propertyValParamValueClassFactory = GlobalClassFactoryMap.get(propertyValParamValue.getCppInstanceTypeName());
		if (propertyValParamValueClassFactory != null)
		{
			propertyValParamValue.setDelegate(true);
			propertyValParamValue = (com.earthview.world.spatial.geodataset.PropertySet)propertyValParamValueClassFactory.create();
			propertyValParamValue.setDelegate(true);
			propertyValParamValue.setInstancePointer(new InstancePointer(propertyVal));
		}
		long returnValue = addLayerObject(meshxfileParamValue, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localOrientationParamValue, propertyValParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(long pNativeObject, String meshxfile, double lat, double lon, double alt, long localScale, long localOrientation, long propertyVal);
	/**
	 * 添加一个可见对象
	 * @return 返回ID是临时ID，与该模型保存后的ID不同，可以通过监听器CLayer3DEditorListener监听(onInsertMeshxg)提交后ID与这个ID关系
	 */
	public long addLayerObject(String meshxfile, double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localOrientation, com.earthview.world.spatial.geodataset.PropertySet propertyVal)
	{
		String meshxfileParamValue = meshxfile;
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long localOrientationParamValue = localOrientation.nativeObject.pointer;
		long propertyValParamValue = propertyVal.nativeObject.pointer;
		long returnValue = addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(this.nativeObject.pointer, meshxfileParamValue, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localOrientationParamValue, propertyValParamValue);
		return returnValue;
	}
	native private long addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_NoVirtual(long pNativeObject, String meshxfile, double lat, double lon, double alt, long localScale, long localOrientation, long propertyVal);
	protected long addLayerObject_NoVirtual(String meshxfile, double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localOrientation, com.earthview.world.spatial.geodataset.PropertySet propertyVal)
	{
		String meshxfileParamValue = meshxfile;
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long localOrientationParamValue = localOrientation.nativeObject.pointer;
		long propertyValParamValue = propertyVal.nativeObject.pointer;
		long returnValue = addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_NoVirtual(this.nativeObject.pointer, meshxfileParamValue, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localOrientationParamValue, propertyValParamValue);
		return returnValue;
	}

	protected  long addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback(String meshxfile, double lat, double lon, double alt, long localScale, long localOrientation, long propertyVal)
	{
		String meshxfileParamValue = meshxfile;
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		com.earthview.world.spatial.math.Vector3 localScaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localScaleParamValue.setDelegate(true);
		localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		IClassFactory localScaleParamValueClassFactory = GlobalClassFactoryMap.get(localScaleParamValue.getCppInstanceTypeName());
		if (localScaleParamValueClassFactory != null)
		{
			localScaleParamValue.setDelegate(true);
			localScaleParamValue = (com.earthview.world.spatial.math.Vector3)localScaleParamValueClassFactory.create();
			localScaleParamValue.setDelegate(true);
			localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		}
		com.earthview.world.spatial.math.Quaternion localOrientationParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		localOrientationParamValue.setDelegate(true);
		localOrientationParamValue.setInstancePointer(new InstancePointer(localOrientation));
		IClassFactory localOrientationParamValueClassFactory = GlobalClassFactoryMap.get(localOrientationParamValue.getCppInstanceTypeName());
		if (localOrientationParamValueClassFactory != null)
		{
			localOrientationParamValue.setDelegate(true);
			localOrientationParamValue = (com.earthview.world.spatial.math.Quaternion)localOrientationParamValueClassFactory.create();
			localOrientationParamValue.setDelegate(true);
			localOrientationParamValue.setInstancePointer(new InstancePointer(localOrientation));
		}
		com.earthview.world.spatial.geodataset.PropertySet propertyValParamValue = new com.earthview.world.spatial.geodataset.PropertySet(CreatedWhenConstruct.CWC_NotToCreate);
		propertyValParamValue.setDelegate(true);
		propertyValParamValue.setInstancePointer(new InstancePointer(propertyVal));
		IClassFactory propertyValParamValueClassFactory = GlobalClassFactoryMap.get(propertyValParamValue.getCppInstanceTypeName());
		if (propertyValParamValueClassFactory != null)
		{
			propertyValParamValue.setDelegate(true);
			propertyValParamValue = (com.earthview.world.spatial.geodataset.PropertySet)propertyValParamValueClassFactory.create();
			propertyValParamValue.setDelegate(true);
			propertyValParamValue.setInstancePointer(new InstancePointer(propertyVal));
		}
		long returnValue = addInstanceObject(meshxfileParamValue, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localOrientationParamValue, propertyValParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(long pNativeObject, String meshxfile, double lat, double lon, double alt, long localScale, long localOrientation, long propertyVal);
	/**
	 * 添加复用对象，同样的meshx放在不同位置，最后数据集存储只有一份
	 * @return 返回ID是临时ID，与该模型保存后的ID不同，可以通过监听器CLayer3DEditorListener监听(onInsertMeshxg)提交后ID与这个ID关系
	 */
	public long addInstanceObject(String meshxfile, double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localOrientation, com.earthview.world.spatial.geodataset.PropertySet propertyVal)
	{
		String meshxfileParamValue = meshxfile;
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long localOrientationParamValue = localOrientation.nativeObject.pointer;
		long propertyValParamValue = propertyVal.nativeObject.pointer;
		long returnValue = addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(this.nativeObject.pointer, meshxfileParamValue, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localOrientationParamValue, propertyValParamValue);
		return returnValue;
	}
	native private long addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_NoVirtual(long pNativeObject, String meshxfile, double lat, double lon, double alt, long localScale, long localOrientation, long propertyVal);
	protected long addInstanceObject_NoVirtual(String meshxfile, double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localOrientation, com.earthview.world.spatial.geodataset.PropertySet propertyVal)
	{
		String meshxfileParamValue = meshxfile;
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long localOrientationParamValue = localOrientation.nativeObject.pointer;
		long propertyValParamValue = propertyVal.nativeObject.pointer;
		long returnValue = addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_NoVirtual(this.nativeObject.pointer, meshxfileParamValue, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localOrientationParamValue, propertyValParamValue);
		return returnValue;
	}

	protected  boolean changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(long id, double lat, double lon, double alt, long localScale, long localOrientation)
	{
		long idParamValue = id;
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		com.earthview.world.spatial.math.Vector3 localScaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localScaleParamValue.setDelegate(true);
		localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		IClassFactory localScaleParamValueClassFactory = GlobalClassFactoryMap.get(localScaleParamValue.getCppInstanceTypeName());
		if (localScaleParamValueClassFactory != null)
		{
			localScaleParamValue.setDelegate(true);
			localScaleParamValue = (com.earthview.world.spatial.math.Vector3)localScaleParamValueClassFactory.create();
			localScaleParamValue.setDelegate(true);
			localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		}
		com.earthview.world.spatial.math.Quaternion localOrientationParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		localOrientationParamValue.setDelegate(true);
		localOrientationParamValue.setInstancePointer(new InstancePointer(localOrientation));
		IClassFactory localOrientationParamValueClassFactory = GlobalClassFactoryMap.get(localOrientationParamValue.getCppInstanceTypeName());
		if (localOrientationParamValueClassFactory != null)
		{
			localOrientationParamValue.setDelegate(true);
			localOrientationParamValue = (com.earthview.world.spatial.math.Quaternion)localOrientationParamValueClassFactory.create();
			localOrientationParamValue.setDelegate(true);
			localOrientationParamValue.setInstancePointer(new InstancePointer(localOrientation));
		}
		boolean returnValue = changeObjectPosition(idParamValue, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localOrientationParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, long id, double lat, double lon, double alt, long localScale, long localOrientation);
	/**
	 * 改变模型姿态
	 */
	public boolean changeObjectPosition(long id, double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localOrientation)
	{
		long idParamValue = id;
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long localOrientationParamValue = localOrientation.nativeObject.pointer;
		boolean returnValue = changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, idParamValue, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localOrientationParamValue);
		return returnValue;
	}
	native private boolean changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(long pNativeObject, long id, double lat, double lon, double alt, long localScale, long localOrientation);
	protected boolean changeObjectPosition_NoVirtual(long id, double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Quaternion localOrientation)
	{
		long idParamValue = id;
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long localOrientationParamValue = localOrientation.nativeObject.pointer;
		boolean returnValue = changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, idParamValue, latParamValue, lonParamValue, altParamValue, localScaleParamValue, localOrientationParamValue);
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

	public MeshxgLayerEditor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshxgLayerEditor(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 添加一个可见对象
	 */
	public long addLayerObject(long id, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		return super.addLayerObject_NoVirtual(id, matrix);
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
	
	native protected void register_addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(long pNativeObject, String method);
	native protected void register_addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(long pNativeObject, String method);
	native protected void register_changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, String method);
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
			this.register_addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(this.nativeObject.pointer, "addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback");
			this.register_addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet(this.nativeObject.pointer, "addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback");
			this.register_changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, "changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
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
	
	public static MeshxgLayerEditor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshxgLayerEditor obj = null;
 		if(baseObj instanceof MeshxgLayerEditor)
		{
			obj = (MeshxgLayerEditor)baseObj;
		} else {
			obj = new MeshxgLayerEditor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshxgLayerEditor");
			obj.increaseCast();
		}

		return obj;
	}
}
