package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.atlas.*;
import com.earthview.world.spatial.display.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.core.*;

/**
 * 数据编辑器
 */
public class DataEditor extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CDataEditor", new DataEditorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCDataEditorProxy", new DataEditorClassFactory());
	}

	/**
	 * 数据编辑器构造函数
	 * @param ctrl mapcontrol指针
	 */
	public DataEditor(com.earthview.world.spatial2d.controls.MapControl ref_ctrl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ctrlPtr = new BasePointer(ref_ctrl);
		list.add("ref_ctrl", ref_ctrlPtr.get());
		Create("JCDataEditorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.DataEditor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long parent_void(long pNativeObject);
	/**
	 * 获取与之关联的控件
	 * @param  
	 * @return mapcontrol指针
	 */
	public com.earthview.world.spatial2d.controls.MapControl parent()
	{
		long returnValue = parent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.MapControl __returnValue = new com.earthview.world.spatial2d.controls.MapControl(CreatedWhenConstruct.CWC_NotToCreate, "CMapControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.MapControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMapControl");
		}
		return __returnValue;
	}
	native private boolean startEditing_void(long pNativeObject);
	/**
	 * 开始编辑
	 * @param  
	 * @return 如果开始编辑成功则返回true,反之则否
	 */
	public boolean startEditing()
	{
		boolean returnValue = startEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEditing_void(long pNativeObject);
	/**
	 * 检测是否正在编辑
	 * @param  
	 * @return 如果正在编辑则返回true,反之则否
	 */
	public boolean isEditing()
	{
		boolean returnValue = isEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void stopEditing_void(long pNativeObject);
	/**
	 * 停止编辑
	 * @param  
	 */
	public void stopEditing()
	{
		stopEditing_void(this.nativeObject.pointer);
	}
	native private boolean hasEdits_void(long pNativeObject);
	/**
	 * 检测是否有过编辑操作
	 * @param  
	 * @return 如果有编辑操作则返回true,反之则否
	 */
	public boolean hasEdits()
	{
		boolean returnValue = hasEdits_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void saveEdits_void(long pNativeObject);
	/**
	 * 保存所有的编辑修改
	 * @param  
	 */
	public void saveEdits()
	{
		saveEdits_void(this.nativeObject.pointer);
	}
	native private long getMapSnapper_void(long pNativeObject);
	/**
	 * 获取地图捕捉器
	 * @param  
	 * @return 地图捕捉器
	 */
	public com.earthview.world.spatial2d.controls.MapSnapper getMapSnapper()
	{
		long returnValue = getMapSnapper_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.MapSnapper __returnValue = new com.earthview.world.spatial2d.controls.MapSnapper(CreatedWhenConstruct.CWC_NotToCreate, "CMapSnapper");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.MapSnapper)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMapSnapper");
		}
		return __returnValue;
	}
	native private long getEditingLayer_void(long pNativeObject);
	/**
	 * 获取正在编辑的图层
	 * @param  
	 * @return 图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer getEditingLayer()
	{
		long returnValue = getEditingLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long getVectorLayer_void(long pNativeObject);
	/**
	 * 获取正在编辑的图层的矢量类型
	 * @param  
	 * @return 矢量类型图层
	 */
	public com.earthview.world.spatial.atlas.Ivectorlayer getVectorLayer()
	{
		long returnValue = getVectorLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ivectorlayer __returnValue = new com.earthview.world.spatial.atlas.Ivectorlayer(CreatedWhenConstruct.CWC_NotToCreate, "IVectorLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ivectorlayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IVectorLayer");
		}
		return __returnValue;
	}
	native private long getFeatureClass_void(long pNativeObject);
	/**
	 * 获取正在编辑的图层的数据集
	 * @param  
	 * @return 数据集
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureclass getFeatureClass()
	{
		long returnValue = getFeatureClass_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureclass __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureClass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureclass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeatureClass");
		}
		return __returnValue;
	}
	native private void setEditingLayer_ILayer(long pNativeObject, long ref_layer);
	/**
	 * 设置新的编辑图层
	 * @param layer 待编辑的图层
	 */
	public void setEditingLayer(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		setEditingLayer_ILayer(this.nativeObject.pointer, ref_layerParamValue);
	}
	native private int getDataType_void(long pNativeObject);
	/**
	 * 获取数据类型
	 * @param  
	 * @return 数据类型
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getDataType()
	{
		int returnValue = getDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}
	native private long getCurrentTask_void(long pNativeObject);
	/**
	 * 获取当前的编辑任务
	 * @param  
	 * @return 编辑任务
	 */
	public com.earthview.world.spatial2d.controls.EditTask getCurrentTask()
	{
		long returnValue = getCurrentTask_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.EditTask __returnValue = new com.earthview.world.spatial2d.controls.EditTask(CreatedWhenConstruct.CWC_NotToCreate, "CEditTask");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.EditTask)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditTask");
		}
		return __returnValue;
	}
	native private void setCurrentTask_CEditTask(long pNativeObject, long ref_task);
	/**
	 * 设置当前的编辑任务
	 * @param task 编辑任务
	 */
	public void setCurrentTask(com.earthview.world.spatial2d.controls.EditTask ref_task)
	{
		long ref_taskParamValue = (ref_task == null ? 0L : ref_task.nativeObject.pointer);
		setCurrentTask_CEditTask(this.nativeObject.pointer, ref_taskParamValue);
	}
	native private long getTaskCount_void(long pNativeObject);
	/**
	 * 获取编辑的任务个数
	 * @param  
	 * @return 任务个数
	 */
	public long getTaskCount()
	{
		long returnValue = getTaskCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTask_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的编辑任务
	 * @param index 索引
	 */
	public com.earthview.world.spatial2d.controls.EditTask getTask(long index)
	{
		long indexParamValue = index;
		long returnValue = getTask_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.EditTask __returnValue = new com.earthview.world.spatial2d.controls.EditTask(CreatedWhenConstruct.CWC_NotToCreate, "CEditTask");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.EditTask)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditTask");
		}
		return __returnValue;
	}
	native private long getGeometryEditor_void(long pNativeObject);
	/**
	 * 获取几何编辑器
	 * @param  
	 * @return 几何编辑器
	 */
	public com.earthview.world.spatial2d.controls.GeometryEditor getGeometryEditor()
	{
		long returnValue = getGeometryEditor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.GeometryEditor __returnValue = new com.earthview.world.spatial2d.controls.GeometryEditor(CreatedWhenConstruct.CWC_NotToCreate, "CGeometryEditor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.GeometryEditor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeometryEditor");
		}
		return __returnValue;
	}
	native private int getSelectedCount_void(long pNativeObject);
	/**
	 * 获取正在编辑的图层中选中要素个数
	 * @param  
	 * @return 返回选中的要素个数
	 */
	public int getSelectedCount()
	{
		int returnValue = getSelectedCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void deleteSelected_void(long pNativeObject);
	/**
	 * 删除选中所有要素
	 * @param  
	 */
	public void deleteSelected()
	{
		deleteSelected_void(this.nativeObject.pointer);
	}
	native private long getOperationManager_void(long pNativeObject);
	public com.earthview.world.spatial2d.controls.OperationManager getOperationManager()
	{
		long returnValue = getOperationManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.OperationManager __returnValue = new com.earthview.world.spatial2d.controls.OperationManager(CreatedWhenConstruct.CWC_NotToCreate, "COperationManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.OperationManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COperationManager");
		}
		return __returnValue;
	}
	protected  boolean onKeyDown_ev_int32_ev_int32_callback(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyDown(keyCodeParamValue, shiftParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onKeyDown_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	public boolean onKeyDown(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}
	native private boolean onKeyDown_ev_int32_ev_int32_NoVirtual(long pNativeObject, int keyCode, int shift);
	protected boolean onKeyDown_NoVirtual(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyDown_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}

	protected  boolean onKeyUp_ev_int32_ev_int32_callback(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyUp(keyCodeParamValue, shiftParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onKeyUp_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	public boolean onKeyUp(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}
	native private boolean onKeyUp_ev_int32_ev_int32_NoVirtual(long pNativeObject, int keyCode, int shift);
	protected boolean onKeyUp_NoVirtual(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyUp_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}

	public DataEditor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataEditor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onKeyDown_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onKeyUp_ev_int32_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyDown_ev_int32_ev_int32_callback");
			this.register_onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyUp_ev_int32_ev_int32_callback");
		}
	}
	
	public static DataEditor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataEditor obj = null;
 		if(baseObj instanceof DataEditor)
		{
			obj = (DataEditor)baseObj;
		} else {
			obj = new DataEditor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataEditor");
			obj.increaseCast();
		}

		return obj;
	}
}
