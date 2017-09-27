package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CmdDataModel extends com.earthview.world.spatial3d.CmdDataBase {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CCmdDataModel", new CmdDataModelClassFactory());
	}

	/**
	 * 构造函数
	 * @param layer 图层对象
	 * @param id id
	 * @param operType 操作类型
	 */
	public CmdDataModel(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer, long id, com.earthview.world.spatial3d.CommandOperType operType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_layerPtr = new BasePointer(ref_layer);
		list.add("ref_layer", ref_layerPtr.get());
		BasePointer idPtr = new BasePointer(id);
		list.add("id", idPtr.get());
		BasePointer operTypePtr = new BasePointer(operType);
		list.add("operType", operTypePtr.get());
		Create("CCmdDataModel", list);
	}

	native private void setUndoPose_CVector3_CVector3_CQuaternion_ev_real64(long pNativeObject, long pose, long scale, long qua, double demHeight);
	/**
	 * 设置撤销位置
	 * @param  
	 */
	public void setUndoPose(com.earthview.world.spatial.math.Vector3 pose, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua, double demHeight)
	{
		long poseParamValue = pose.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		double demHeightParamValue = demHeight;
		setUndoPose_CVector3_CVector3_CQuaternion_ev_real64(this.nativeObject.pointer, poseParamValue, scaleParamValue, quaParamValue, demHeightParamValue);
	}
	native private void getUndoPose_CVector3_CVector3_CQuaternion_ev_real64(long pNativeObject, long pose, long scale, long qua, long demHeight);
	/**
	 * 获取撤销位置
	 * @param  
	 */
	public void getUndoPose(com.earthview.world.spatial.math.Vector3 pose, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua, DoublePointer demHeight)
	{
		long poseParamValue = pose.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		long demHeightParamValue = demHeight.nativeObject.pointer;
		getUndoPose_CVector3_CVector3_CQuaternion_ev_real64(this.nativeObject.pointer, poseParamValue, scaleParamValue, quaParamValue, demHeightParamValue);
	}
	native private void setRedoPose_CVector3_CVector3_CQuaternion_ev_real64(long pNativeObject, long pose, long scale, long qua, double demHeight);
	/**
	 * 设置重做位置
	 * @param  
	 */
	public void setRedoPose(com.earthview.world.spatial.math.Vector3 pose, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua, double demHeight)
	{
		long poseParamValue = pose.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		double demHeightParamValue = demHeight;
		setRedoPose_CVector3_CVector3_CQuaternion_ev_real64(this.nativeObject.pointer, poseParamValue, scaleParamValue, quaParamValue, demHeightParamValue);
	}
	native private void getRedoPose_CVector3_CVector3_CQuaternion_ev_real64(long pNativeObject, long pose, long scale, long qua, long demHeight);
	/**
	 * 获取重做位置
	 * @param  
	 */
	public void getRedoPose(com.earthview.world.spatial.math.Vector3 pose, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua, DoublePointer demHeight)
	{
		long poseParamValue = pose.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		long demHeightParamValue = demHeight.nativeObject.pointer;
		getRedoPose_CVector3_CVector3_CQuaternion_ev_real64(this.nativeObject.pointer, poseParamValue, scaleParamValue, quaParamValue, demHeightParamValue);
	}
	native private void setMeshItem_IFeature(long pNativeObject, long ref_f);
	/**
	 * 设置要素
	 * @param  f 要素对象
	 */
	public void setMeshItem(com.earthview.world.spatial.geodataset.Ifeature ref_f)
	{
		long ref_fParamValue = (ref_f == null ? 0L : ref_f.nativeObject.pointer);
		setMeshItem_IFeature(this.nativeObject.pointer, ref_fParamValue);
	}
	native private long getMeshItem_void(long pNativeObject);
	/**
	 * 获取要素
	 * @param  
	 * @return 要素对象
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getMeshItem()
	{
		long returnValue = getMeshItem_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private void addResItem_IFeature(long pNativeObject, long ref_f);
	/**
	 * 添加资源要素
	 * @param f 要素对象
	 */
	public void addResItem(com.earthview.world.spatial.geodataset.Ifeature ref_f)
	{
		long ref_fParamValue = (ref_f == null ? 0L : ref_f.nativeObject.pointer);
		addResItem_IFeature(this.nativeObject.pointer, ref_fParamValue);
	}
	native private long getNumResItem_void(long pNativeObject);
	/**
	 * 获取资源要素个数
	 * @param  
	 * @return 要素个数
	 */
	public long getNumResItem()
	{
		long returnValue = getNumResItem_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getResItem_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取资源要素
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getResItem(long index)
	{
		long indexParamValue = index;
		long returnValue = getResItem_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private void setMatrix_CMatrix4(long pNativeObject, long mat);
	/**
	 * 设置矩阵
	 * @param index 序号
	 */
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 mat)
	{
		long matParamValue = mat.nativeObject.pointer;
		setMatrix_CMatrix4(this.nativeObject.pointer, matParamValue);
	}
	native private long getMatrix_void(long pNativeObject);
	/**
	 * 获取矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getMatrix()
	{
		long returnValue = getMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private void setMeshInstID_ev_uint32(long pNativeObject, long id);
	/**
	 * 设置模型库对象ID
	 */
	public void setMeshInstID(long id)
	{
		long idParamValue = id;
		setMeshInstID_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private long getMeshInstID_void(long pNativeObject);
	/**
	 * 获取模型库对象ID
	 */
	public long getMeshInstID()
	{
		long returnValue = getMeshInstID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUndoAttr_IFeature(long pNativeObject, long ref_f);
	/**
	 * 设置撤销属性
	 * @param  
	 */
	public void setUndoAttr(com.earthview.world.spatial.geodataset.Ifeature ref_f)
	{
		long ref_fParamValue = (ref_f == null ? 0L : ref_f.nativeObject.pointer);
		setUndoAttr_IFeature(this.nativeObject.pointer, ref_fParamValue);
	}
	native private long getUndoAttr_void(long pNativeObject);
	/**
	 * 获取撤销属性
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getUndoAttr()
	{
		long returnValue = getUndoAttr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private void setRedoAttr_IFeature(long pNativeObject, long ref_f);
	/**
	 * 设置重做位置
	 * @param  
	 */
	public void setRedoAttr(com.earthview.world.spatial.geodataset.Ifeature ref_f)
	{
		long ref_fParamValue = (ref_f == null ? 0L : ref_f.nativeObject.pointer);
		setRedoAttr_IFeature(this.nativeObject.pointer, ref_fParamValue);
	}
	native private long getRedoAttr_void(long pNativeObject);
	/**
	 * 获取重做位置
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getRedoAttr()
	{
		long returnValue = getRedoAttr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	public CmdDataModel(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CmdDataModel(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CmdDataModel fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CmdDataModel obj = null;
 		if(baseObj instanceof CmdDataModel)
		{
			obj = (CmdDataModel)baseObj;
		} else {
			obj = new CmdDataModel(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCmdDataModel");
			obj.increaseCast();
		}

		return obj;
	}
}
