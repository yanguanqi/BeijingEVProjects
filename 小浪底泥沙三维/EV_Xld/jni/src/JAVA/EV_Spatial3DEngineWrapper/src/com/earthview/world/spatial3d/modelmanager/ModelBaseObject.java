package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 对象监听类主要在对象销毁之前做一些操作
 */
public class ModelBaseObject extends com.earthview.world.geometry3d.VisibleObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelBaseObject", new ModelBaseObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCModelBaseObjectProxy", new ModelBaseObjectClassFactory());
	}

	native private boolean load_void(long pNativeObject);
	/**
	 * 加载模型资源
	 * @return true成功，false失败
	 */
	public boolean load()
	{
		boolean returnValue = load_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean load_void_NoVirtual(long pNativeObject);
	protected boolean load_NoVirtual()
	{
		boolean returnValue = load_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean load_IntVector_callback(long subEntityIndexs)
	{
		com.earthview.world.core.IntVector subEntityIndexsParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		subEntityIndexsParamValue.setDelegate(true);
		subEntityIndexsParamValue.setInstancePointer(new InstancePointer(subEntityIndexs));
		IClassFactory subEntityIndexsParamValueClassFactory = GlobalClassFactoryMap.get(subEntityIndexsParamValue.getCppInstanceTypeName());
		if (subEntityIndexsParamValueClassFactory != null)
		{
			subEntityIndexsParamValue.setDelegate(true);
			subEntityIndexsParamValue = (com.earthview.world.core.IntVector)subEntityIndexsParamValueClassFactory.create();
			subEntityIndexsParamValue.setDelegate(true);
			subEntityIndexsParamValue.setInstancePointer(new InstancePointer(subEntityIndexs));
		}
		boolean returnValue = load(subEntityIndexsParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean load_IntVector(long pNativeObject, long subEntityIndexs);
	/**
	 * 加载资源，只加载subIndex列表的subEntity
	 * @return 加载成功返回true否则返回false
	 */
	public boolean load(com.earthview.world.core.IntVector subEntityIndexs)
	{
		long subEntityIndexsParamValue = subEntityIndexs.nativeObject.pointer;
		boolean returnValue = load_IntVector(this.nativeObject.pointer, subEntityIndexsParamValue);
		return returnValue;
	}
	native private boolean load_IntVector_NoVirtual(long pNativeObject, long subEntityIndexs);
	protected boolean load_NoVirtual(com.earthview.world.core.IntVector subEntityIndexs)
	{
		long subEntityIndexsParamValue = subEntityIndexs.nativeObject.pointer;
		boolean returnValue = load_IntVector_NoVirtual(this.nativeObject.pointer, subEntityIndexsParamValue);
		return returnValue;
	}

	native private boolean attachToNode_CNode(long pNativeObject, long n);
	/**
	 * 挂接渲染
	 * @return true成功，false失败
	 */
	public boolean attachToNode(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		boolean returnValue = attachToNode_CNode(this.nativeObject.pointer, nParamValue);
		return returnValue;
	}
	native private boolean attachToNode_CNode_NoVirtual(long pNativeObject, long n);
	protected boolean attachToNode_NoVirtual(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		boolean returnValue = attachToNode_CNode_NoVirtual(this.nativeObject.pointer, nParamValue);
		return returnValue;
	}

	native private long detachFromNode_void(long pNativeObject);
	/**
	 * 反挂接
	 * @return 成功返回被反挂接的父节点，失败返回NULL
	 */
	public com.earthview.world.graphic.Node detachFromNode()
	{
		long returnValue = detachFromNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long detachFromNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node detachFromNode_NoVirtual()
	{
		long returnValue = detachFromNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	native private boolean unload_void(long pNativeObject);
	/**
	 * 卸载模型资源
	 * @return true成功，false失败
	 */
	public boolean unload()
	{
		boolean returnValue = unload_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean unload_void_NoVirtual(long pNativeObject);
	protected boolean unload_NoVirtual()
	{
		boolean returnValue = unload_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isLoaded_void(long pNativeObject);
	/**
	 * 是否加载过模型资源
	 * @return true成功，false失败
	 */
	public boolean isLoaded()
	{
		boolean returnValue = isLoaded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isLoaded_void_NoVirtual(long pNativeObject);
	protected boolean isLoaded_NoVirtual()
	{
		boolean returnValue = isLoaded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isAttached_void(long pNativeObject);
	/**
	 * 是否挂接
	 * @return true成功，false失败
	 */
	public boolean isAttached()
	{
		boolean returnValue = isAttached_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAttached_void_NoVirtual(long pNativeObject);
	protected boolean isAttached_NoVirtual()
	{
		boolean returnValue = isAttached_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setMatrix_CMatrix4(long pNativeObject, long m);
	/**
	 * 设置世界变换矩阵
	 * @param m 世界变换矩阵
	 */
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		setMatrix_CMatrix4(this.nativeObject.pointer, mParamValue);
	}
	native private void setMatrix_CMatrix4_NoVirtual(long pNativeObject, long m);
	protected void setMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		setMatrix_CMatrix4_NoVirtual(this.nativeObject.pointer, mParamValue);
	}

	native private long getMatrix_void(long pNativeObject);
	/**
	 * 获取世界变换矩阵
	 * @return 返回世界变换矩阵
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
	native private long getMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getMatrix_NoVirtual()
	{
		long returnValue = getMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setLocalMatrix_CMatrix4_callback(long m)
	{
		com.earthview.world.spatial.math.Matrix4 mParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		mParamValue.setDelegate(true);
		mParamValue.setInstancePointer(new InstancePointer(m));
		IClassFactory mParamValueClassFactory = GlobalClassFactoryMap.get(mParamValue.getCppInstanceTypeName());
		if (mParamValueClassFactory != null)
		{
			mParamValue.setDelegate(true);
			mParamValue = (com.earthview.world.spatial.math.Matrix4)mParamValueClassFactory.create();
			mParamValue.setDelegate(true);
			mParamValue.setInstancePointer(new InstancePointer(m));
		}
		setLocalMatrix(mParamValue);
	}

	native private void setLocalMatrix_CMatrix4(long pNativeObject, long m);
	/**
	 * 设置局部矩阵
	 * @param m 局部矩阵
	 */
	public void setLocalMatrix(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		setLocalMatrix_CMatrix4(this.nativeObject.pointer, mParamValue);
	}
	native private void setLocalMatrix_CMatrix4_NoVirtual(long pNativeObject, long m);
	protected void setLocalMatrix_NoVirtual(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		setLocalMatrix_CMatrix4_NoVirtual(this.nativeObject.pointer, mParamValue);
	}

	protected  long getLocalMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getLocalMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLocalMatrix_void(long pNativeObject);
	/**
	 * 获取局部矩阵
	 * @return 返回局部矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getLocalMatrix()
	{
		long returnValue = getLocalMatrix_void(this.nativeObject.pointer);
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
	native private long getLocalMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getLocalMatrix_NoVirtual()
	{
		long returnValue = getLocalMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, double latitude, double longitude, double altitude, long scale, long qua);
	/**
	 * 设置模型位置
	 * @param latitude 经度
	 * @param longitude 纬度
	 * @param altitude 高程
	 * @param scale 缩放信息
	 * @param qua 旋转四元数信息
	 */
	public void setPosition(double latitude, double longitude, double altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double altitudeParamValue = altitude;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}
	native private void setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(long pNativeObject, double latitude, double longitude, double altitude, long scale, long qua);
	protected void setPosition_NoVirtual(double latitude, double longitude, double altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double altitudeParamValue = altitude;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}

	native private void getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, long latitude, long longitude, long altitude, long scale, long qua);
	/**
	 * 获取模型位置
	 * @param latitude 经度
	 * @param longitude 纬度
	 * @param altitude 高程
	 * @param scale 缩放信息
	 * @param qua 旋转四元数信息
	 */
	public void getPosition(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}
	native private void getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(long pNativeObject, long latitude, long longitude, long altitude, long scale, long qua);
	protected void getPosition_NoVirtual(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue, scaleParamValue, quaParamValue);
	}

	protected  void getModelDBTransform_CVector3_CVector3_CQuaternion_callback(long offPosition, long scale, long qua)
	{
		com.earthview.world.spatial.math.Vector3 offPositionParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		offPositionParamValue.setDelegate(true);
		offPositionParamValue.setInstancePointer(new InstancePointer(offPosition));
		IClassFactory offPositionParamValueClassFactory = GlobalClassFactoryMap.get(offPositionParamValue.getCppInstanceTypeName());
		if (offPositionParamValueClassFactory != null)
		{
			offPositionParamValue.setDelegate(true);
			offPositionParamValue = (com.earthview.world.spatial.math.Vector3)offPositionParamValueClassFactory.create();
			offPositionParamValue.setDelegate(true);
			offPositionParamValue.setInstancePointer(new InstancePointer(offPosition));
		}
		com.earthview.world.spatial.math.Vector3 scaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		scaleParamValue.setDelegate(true);
		scaleParamValue.setInstancePointer(new InstancePointer(scale));
		IClassFactory scaleParamValueClassFactory = GlobalClassFactoryMap.get(scaleParamValue.getCppInstanceTypeName());
		if (scaleParamValueClassFactory != null)
		{
			scaleParamValue.setDelegate(true);
			scaleParamValue = (com.earthview.world.spatial.math.Vector3)scaleParamValueClassFactory.create();
			scaleParamValue.setDelegate(true);
			scaleParamValue.setInstancePointer(new InstancePointer(scale));
		}
		com.earthview.world.spatial.math.Quaternion quaParamValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		quaParamValue.setDelegate(true);
		quaParamValue.setInstancePointer(new InstancePointer(qua));
		IClassFactory quaParamValueClassFactory = GlobalClassFactoryMap.get(quaParamValue.getCppInstanceTypeName());
		if (quaParamValueClassFactory != null)
		{
			quaParamValue.setDelegate(true);
			quaParamValue = (com.earthview.world.spatial.math.Quaternion)quaParamValueClassFactory.create();
			quaParamValue.setDelegate(true);
			quaParamValue.setInstancePointer(new InstancePointer(qua));
		}
		getModelDBTransform(offPositionParamValue, scaleParamValue, quaParamValue);
	}

	native private void getModelDBTransform_CVector3_CVector3_CQuaternion(long pNativeObject, long offPosition, long scale, long qua);
	/**
	 * 获取模型在模型库中的偏移位置
	 * @param offPosition 模型库中的位置
	 * @param offScale 模型库中的缩放
	 * @param qua 模型库中的姿态
	 */
	public void getModelDBTransform(com.earthview.world.spatial.math.Vector3 offPosition, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		long offPositionParamValue = offPosition.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		getModelDBTransform_CVector3_CVector3_CQuaternion(this.nativeObject.pointer, offPositionParamValue, scaleParamValue, quaParamValue);
	}
	native private void getModelDBTransform_CVector3_CVector3_CQuaternion_NoVirtual(long pNativeObject, long offPosition, long scale, long qua);
	protected void getModelDBTransform_NoVirtual(com.earthview.world.spatial.math.Vector3 offPosition, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		long offPositionParamValue = offPosition.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		getModelDBTransform_CVector3_CVector3_CQuaternion_NoVirtual(this.nativeObject.pointer, offPositionParamValue, scaleParamValue, quaParamValue);
	}

	native private long getLayer_void(long pNativeObject);
	/**
	 * 获取可见对象所在图层
	 * @return 图层对象
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer getLayer()
	{
		long returnValue = getLayer_void(this.nativeObject.pointer);
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
	native private long getLayer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.atlas.Iglobelayer getLayer_NoVirtual()
	{
		long returnValue = getLayer_void_NoVirtual(this.nativeObject.pointer);
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

	native private long getDataset_void(long pNativeObject);
	/**
	 * 获取数据集
	 * @return 成功返回数据集，失败返回NULL
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		long returnValue = getDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long getDataset_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idataset getDataset_NoVirtual()
	{
		long returnValue = getDataset_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	native private long getID_void(long pNativeObject);
	/**
	 * 获取ID
	 * @return 返回模型ID
	 */
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getID_void_NoVirtual(long pNativeObject);
	protected long getID_NoVirtual()
	{
		long returnValue = getID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取可见对象名称
	 * @return 名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getFile_void_callback()
	{
		String returnValue = getFile();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFile_void(long pNativeObject);
	/**
	 * 获取文件路径
	 * @return 返回文件路径
	 */
	public String getFile()
	{
		String returnValue = getFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFile_void_NoVirtual(long pNativeObject);
	protected String getFile_NoVirtual()
	{
		String returnValue = getFile_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isFileDirAsGroup_void_callback()
	{
		boolean returnValue = isFileDirAsGroup();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isFileDirAsGroup_void(long pNativeObject);
	/**
	 * 是否以文件目录为分组
	 * @return true是以文件目录为工作组，false使用默认工作组
	 */
	public boolean isFileDirAsGroup()
	{
		boolean returnValue = isFileDirAsGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isFileDirAsGroup_void_NoVirtual(long pNativeObject);
	protected boolean isFileDirAsGroup_NoVirtual()
	{
		boolean returnValue = isFileDirAsGroup_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial3d.ModelType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取模型类别
	 * @return 返回模型类别
	 */
	public com.earthview.world.spatial3d.ModelType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.ModelType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.ModelType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.ModelType.toEnum(returnValue);
	}

	protected  long getSceneManager_void_callback()
	{
		com.earthview.world.graphic.SceneManager returnValue = getSceneManager();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSceneManager_void(long pNativeObject);
	/**
	 * 获取场景管理器
	 * @return 成功返回场景管理器，失败返回NULL
	 */
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		long returnValue = getSceneManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private long getSceneManager_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneManager getSceneManager_NoVirtual()
	{
		long returnValue = getSceneManager_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}

	protected  long getWorldAABB_void_callback()
	{
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = getWorldAABB();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getWorldAABB_void(long pNativeObject);
	/**
	 * 获取世界变换矩阵
	 * @return 返回世界变换矩阵
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldAABB()
	{
		long returnValue = getWorldAABB_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getWorldAABB_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getWorldAABB_NoVirtual()
	{
		long returnValue = getWorldAABB_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	native private long getRootMeshNode_void(long pNativeObject);
	/**
	 * 获取模型内部的根节点
	 * @return MeshNodePtr，返回模型内部的根节点
	 */
	public com.earthview.world.graphic.Mesh.MeshNodePtr getRootMeshNode()
	{
		long returnValue = getRootMeshNode_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Mesh.MeshNodePtr __returnValue = new com.earthview.world.graphic.Mesh.MeshNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh.MeshNodePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MeshNodePtr");
		}
		return __returnValue;
	}
	protected  boolean isVisible_void_callback()
	{
		boolean returnValue = isVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 是否可见
	 * @return true可见，false不可见
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisible_void_NoVirtual(long pNativeObject);
	protected boolean isVisible_NoVirtual()
	{
		boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setVisible_ev_bool_callback(boolean flag)
	{
		boolean flagParamValue = flag;
		setVisible(flagParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置是否可见
	 * @param flag true为可见，false为不可见
	 * @param bRecursive true递归到子模型，false只应用当前主模型。注：没有bRecursive参数的接口是递归子模型
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public void setVisible(boolean flag)
	{
		boolean flagParamValue = flag;
		setVisible_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setVisible_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	protected  void setVisible_ev_bool_ev_bool_callback(boolean flag, boolean bRecursive)
	{
		boolean flagParamValue = flag;
		boolean bRecursiveParamValue = bRecursive;
		setVisible(flagParamValue, bRecursiveParamValue);
	}

	native private void setVisible_ev_bool_ev_bool(long pNativeObject, boolean flag, boolean bRecursive);
	public void setVisible(boolean flag, boolean bRecursive)
	{
		boolean flagParamValue = flag;
		boolean bRecursiveParamValue = bRecursive;
		setVisible_ev_bool_ev_bool(this.nativeObject.pointer, flagParamValue, bRecursiveParamValue);
	}
	native private void setVisible_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean flag, boolean bRecursive);
	protected void setVisible_NoVirtual(boolean flag, boolean bRecursive)
	{
		boolean flagParamValue = flag;
		boolean bRecursiveParamValue = bRecursive;
		setVisible_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue, bRecursiveParamValue);
	}

	protected  void setSubEntityVisibility_ev_uint32_ev_bool_callback(long subEntityIndex, boolean isVisible)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean isVisibleParamValue = isVisible;
		setSubEntityVisibility(subEntityIndexParamValue, isVisibleParamValue);
	}

	native private void setSubEntityVisibility_ev_uint32_ev_bool(long pNativeObject, long subEntityIndex, boolean isVisible);
	/**
	 * 设置模型某部分可见或不可见
	 * @param subEntityIndex subentity标识索引
	 * @param isVisible true为可见，false为不可见
	 * @param bRecursive true递归到子模型，false只应用当前主模型。注：没有bRecursive参数的接口是递归子模型
	 */
	public void setSubEntityVisibility(long subEntityIndex, boolean isVisible)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean isVisibleParamValue = isVisible;
		setSubEntityVisibility_ev_uint32_ev_bool(this.nativeObject.pointer, subEntityIndexParamValue, isVisibleParamValue);
	}
	native private void setSubEntityVisibility_ev_uint32_ev_bool_NoVirtual(long pNativeObject, long subEntityIndex, boolean isVisible);
	protected void setSubEntityVisibility_NoVirtual(long subEntityIndex, boolean isVisible)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean isVisibleParamValue = isVisible;
		setSubEntityVisibility_ev_uint32_ev_bool_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, isVisibleParamValue);
	}

	protected  void setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_callback(long subEntityIndex, boolean isVisible, boolean bRecursive)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean isVisibleParamValue = isVisible;
		boolean bRecursiveParamValue = bRecursive;
		setSubEntityVisibility(subEntityIndexParamValue, isVisibleParamValue, bRecursiveParamValue);
	}

	native private void setSubEntityVisibility_ev_uint32_ev_bool_ev_bool(long pNativeObject, long subEntityIndex, boolean isVisible, boolean bRecursive);
	public void setSubEntityVisibility(long subEntityIndex, boolean isVisible, boolean bRecursive)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean isVisibleParamValue = isVisible;
		boolean bRecursiveParamValue = bRecursive;
		setSubEntityVisibility_ev_uint32_ev_bool_ev_bool(this.nativeObject.pointer, subEntityIndexParamValue, isVisibleParamValue, bRecursiveParamValue);
	}
	native private void setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_NoVirtual(long pNativeObject, long subEntityIndex, boolean isVisible, boolean bRecursive);
	protected void setSubEntityVisibility_NoVirtual(long subEntityIndex, boolean isVisible, boolean bRecursive)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean isVisibleParamValue = isVisible;
		boolean bRecursiveParamValue = bRecursive;
		setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, isVisibleParamValue, bRecursiveParamValue);
	}

	protected  boolean getSubEntityVisibility_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntityVisibility(subEntityIndexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getSubEntityVisibility_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 获取模型某部分可见状态
	 * @param subEntityIndex subentity标识索引
	 * @return true为可见，false为不可见
	 */
	public boolean getSubEntityVisibility(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntityVisibility_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}
	native private boolean getSubEntityVisibility_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected boolean getSubEntityVisibility_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntityVisibility_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}

	protected  void setRenderingMaxDistance_ev_real64_callback(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance(distParamValue);
	}

	native private void setRenderingMaxDistance_ev_real64(long pNativeObject, double dist);
	/**
	 * 设置该对象可渲染的距离上限
	 * @param dist 默认为0
	 */
	public void setRenderingMaxDistance(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance_ev_real64(this.nativeObject.pointer, distParamValue);
	}
	native private void setRenderingMaxDistance_ev_real64_NoVirtual(long pNativeObject, double dist);
	protected void setRenderingMaxDistance_NoVirtual(double dist)
	{
		double distParamValue = dist;
		setRenderingMaxDistance_ev_real64_NoVirtual(this.nativeObject.pointer, distParamValue);
	}

	protected  double getRenderingMaxDistance_void_callback()
	{
		double returnValue = getRenderingMaxDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRenderingMaxDistance_void(long pNativeObject);
	/**
	 * 获取该对象可渲染的距离下限
	 * @param  
	 * @return 获取该对象可渲染的距离下限
	 */
	public double getRenderingMaxDistance()
	{
		double returnValue = getRenderingMaxDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRenderingMaxDistance_void_NoVirtual(long pNativeObject);
	protected double getRenderingMaxDistance_NoVirtual()
	{
		double returnValue = getRenderingMaxDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRenderingMinDistance_ev_real64_callback(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance(distParamValue);
	}

	native private void setRenderingMinDistance_ev_real64(long pNativeObject, double dist);
	/**
	 * 设置该对象可渲染的距离下限
	 * @param dist 默认为0
	 */
	public void setRenderingMinDistance(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance_ev_real64(this.nativeObject.pointer, distParamValue);
	}
	native private void setRenderingMinDistance_ev_real64_NoVirtual(long pNativeObject, double dist);
	protected void setRenderingMinDistance_NoVirtual(double dist)
	{
		double distParamValue = dist;
		setRenderingMinDistance_ev_real64_NoVirtual(this.nativeObject.pointer, distParamValue);
	}

	protected  double getRenderingMinDistance_void_callback()
	{
		double returnValue = getRenderingMinDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRenderingMinDistance_void(long pNativeObject);
	/**
	 * 获取该对象可渲染的距离上限
	 * @param  
	 * @return 获取该对象可渲染的距离上限
	 */
	public double getRenderingMinDistance()
	{
		double returnValue = getRenderingMinDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRenderingMinDistance_void_NoVirtual(long pNativeObject);
	protected double getRenderingMinDistance_NoVirtual()
	{
		double returnValue = getRenderingMinDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int calculateSubEntityIndex_ev_uint16_ev_uint32_callback(int submeshIndex, long instanceIndex)
	{
		int submeshIndexParamValue = submeshIndex;
		long instanceIndexParamValue = instanceIndex;
		int returnValue = calculateSubEntityIndex(submeshIndexParamValue, instanceIndexParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int calculateSubEntityIndex_ev_uint16_ev_uint32(long pNativeObject, int submeshIndex, long instanceIndex);
	/**
	 * 计算subEntity的下标
	 * @param submeshIndex 子部件下标
	 * @param instanceIndex instance下标
	 * @return 返回-1计算失败
	 */
	public int calculateSubEntityIndex(int submeshIndex, long instanceIndex)
	{
		int submeshIndexParamValue = submeshIndex;
		long instanceIndexParamValue = instanceIndex;
		int returnValue = calculateSubEntityIndex_ev_uint16_ev_uint32(this.nativeObject.pointer, submeshIndexParamValue, instanceIndexParamValue);
		return returnValue;
	}
	native private int calculateSubEntityIndex_ev_uint16_ev_uint32_NoVirtual(long pNativeObject, int submeshIndex, long instanceIndex);
	protected int calculateSubEntityIndex_NoVirtual(int submeshIndex, long instanceIndex)
	{
		int submeshIndexParamValue = submeshIndex;
		long instanceIndexParamValue = instanceIndex;
		int returnValue = calculateSubEntityIndex_ev_uint16_ev_uint32_NoVirtual(this.nativeObject.pointer, submeshIndexParamValue, instanceIndexParamValue);
		return returnValue;
	}

	protected  void calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_callback(long subEntityIndex, long submeshIndex, long instanceIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		ShortPointer submeshIndexParamValue = new ShortPointer(new InstancePointer(submeshIndex));
		IntegerPointer instanceIndexParamValue = new IntegerPointer(new InstancePointer(instanceIndex));
		calculateInstanceIndex(subEntityIndexParamValue, submeshIndexParamValue, instanceIndexParamValue);
	}

	native private void calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(long pNativeObject, long subEntityIndex, long submeshIndex, long instanceIndex);
	/**
	 * 计算subEntity的下标属于哪个子部件的哪个instance
	 * @param subEntityIndex subEntity下标
	 * @param submeshIndex 子部件下标
	 * @param instanceIndex instance下标
	 */
	public void calculateInstanceIndex(long subEntityIndex, ShortPointer submeshIndex, IntegerPointer instanceIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(this.nativeObject.pointer, subEntityIndexParamValue, submeshIndexParamValue, instanceIndexParamValue);
	}
	native private void calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_NoVirtual(long pNativeObject, long subEntityIndex, long submeshIndex, long instanceIndex);
	protected void calculateInstanceIndex_NoVirtual(long subEntityIndex, ShortPointer submeshIndex, IntegerPointer instanceIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, submeshIndexParamValue, instanceIndexParamValue);
	}

	protected  int getNumSubEntities_void_callback()
	{
		int returnValue = getNumSubEntities();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNumSubEntities_void(long pNativeObject);
	/**
	 * 获取subEntity个数
	 * @return 返回subentity个数，失败返回-1
	 */
	public int getNumSubEntities()
	{
		int returnValue = getNumSubEntities_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumSubEntities_void_NoVirtual(long pNativeObject);
	protected int getNumSubEntities_NoVirtual()
	{
		int returnValue = getNumSubEntities_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getAliasName_void_callback()
	{
		String returnValue = getAliasName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getAliasName_void(long pNativeObject);
	/**
	 * 获取别名，只有被绑定的模型才有
	 * @return 绑定模型别名
	 */
	public String getAliasName()
	{
		String returnValue = getAliasName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getAliasName_void_NoVirtual(long pNativeObject);
	protected String getAliasName_NoVirtual()
	{
		String returnValue = getAliasName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getBindedState_void_callback()
	{
		com.earthview.world.spatial3d.BindedState returnValue = getBindedState();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getBindedState_void(long pNativeObject);
	/**
	 * 获取模型绑定状态
	 * @return 模型绑定状态
	 */
	public com.earthview.world.spatial3d.BindedState getBindedState()
	{
		int returnValue = getBindedState_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.BindedState.toEnum(returnValue);
	}
	native private int getBindedState_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.BindedState getBindedState_NoVirtual()
	{
		int returnValue = getBindedState_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.BindedState.toEnum(returnValue);
	}

	protected  long getAllBindedEffect_void_callback()
	{
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap returnValue = getAllBindedEffect();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAllBindedEffect_void(long pNativeObject);
	/**
	 * 获取所有绑定的特效
	 * @return 模型绑定状态
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getAllBindedEffect()
	{
		long returnValue = getAllBindedEffect_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}
	native private long getAllBindedEffect_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.modelmanager.EffectObjectMap getAllBindedEffect_NoVirtual()
	{
		long returnValue = getAllBindedEffect_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}

	protected  long getAllBindedLight_void_callback()
	{
		com.earthview.world.spatial3d.modelmanager.LightObjectMap returnValue = getAllBindedLight();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAllBindedLight_void(long pNativeObject);
	/**
	 * 获取所有绑定的光源
	 * @return 模型绑定状态
	 */
	public com.earthview.world.spatial3d.modelmanager.LightObjectMap getAllBindedLight()
	{
		long returnValue = getAllBindedLight_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.LightObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.LightObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LightObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LightObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LightObjectMap");
		}
		return __returnValue;
	}
	native private long getAllBindedLight_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.modelmanager.LightObjectMap getAllBindedLight_NoVirtual()
	{
		long returnValue = getAllBindedLight_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.LightObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.LightObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LightObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LightObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LightObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedEffect_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap returnValue = getBindedEffect(subEntityIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedEffect_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 根据subIndex获取绑定特效
	 * @param subEntityIndex subentity标识索引
	 * @return 绑定特效
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedEffect(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getBindedEffect_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedEffect_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedEffect_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getBindedEffect_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedLight_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.spatial3d.modelmanager.LightObjectMap returnValue = getBindedLight(subEntityIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedLight_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 根据subIndex获取绑定光源
	 * @param subEntityIndex subentity标识索引
	 * @return 绑定光源
	 */
	public com.earthview.world.spatial3d.modelmanager.LightObjectMap getBindedLight(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getBindedLight_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.LightObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.LightObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LightObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LightObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LightObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedLight_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected com.earthview.world.spatial3d.modelmanager.LightObjectMap getBindedLight_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getBindedLight_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.LightObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.LightObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LightObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LightObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LightObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedParticle_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap returnValue = getBindedParticle(subEntityIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedParticle_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 根据subIndex获取绑定粒子
	 * @param subEntityIndex subentity标识索引
	 * @return 绑定粒子
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedParticle(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getBindedParticle_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedParticle_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedParticle_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getBindedParticle_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedRibbonTrail_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap returnValue = getBindedRibbonTrail(subEntityIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedRibbonTrail_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 根据subIndex获取绑定飘带
	 * @param subEntityIndex subentity标识索引
	 * @return 绑定飘带
	 */
	public com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getBindedRibbonTrail(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getBindedRibbonTrail_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedRibbonTrail_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getBindedRibbonTrail_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getBindedRibbonTrail_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedEffect_EVString_callback(String boneName)
	{
		String boneNameParamValue = boneName;
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap returnValue = getBindedEffect(boneNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedEffect_EVString(long pNativeObject, String boneName);
	/**
	 * 根据骨头获取绑定特效
	 * @param boneName 骨骼名称
	 * @return 绑定特效
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedEffect(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBindedEffect_EVString(this.nativeObject.pointer, boneNameParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedEffect_EVString_NoVirtual(long pNativeObject, String boneName);
	protected com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedEffect_NoVirtual(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBindedEffect_EVString_NoVirtual(this.nativeObject.pointer, boneNameParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedEffectByNodeName_EVString_callback(String nodeName)
	{
		String nodeNameParamValue = nodeName;
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap returnValue = getBindedEffectByNodeName(nodeNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedEffectByNodeName_EVString(long pNativeObject, String nodeName);
	/**
	 * 根据节点获取绑定特效
	 * @param boneName 节点名称
	 * @return 绑定特效
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedEffectByNodeName(String nodeName)
	{
		String nodeNameParamValue = nodeName;
		long returnValue = getBindedEffectByNodeName_EVString(this.nativeObject.pointer, nodeNameParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedEffectByNodeName_EVString_NoVirtual(long pNativeObject, String nodeName);
	protected com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedEffectByNodeName_NoVirtual(String nodeName)
	{
		String nodeNameParamValue = nodeName;
		long returnValue = getBindedEffectByNodeName_EVString_NoVirtual(this.nativeObject.pointer, nodeNameParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedParticle_EVString_callback(String boneName)
	{
		String boneNameParamValue = boneName;
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap returnValue = getBindedParticle(boneNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedParticle_EVString(long pNativeObject, String boneName);
	/**
	 * 根据骨头获取绑定粒子
	 * @param boneName 骨骼名称
	 * @return 绑定粒子
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedParticle(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBindedParticle_EVString(this.nativeObject.pointer, boneNameParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedParticle_EVString_NoVirtual(long pNativeObject, String boneName);
	protected com.earthview.world.spatial3d.modelmanager.EffectObjectMap getBindedParticle_NoVirtual(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBindedParticle_EVString_NoVirtual(this.nativeObject.pointer, boneNameParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedRibbonTrail_EVString_callback(String boneName)
	{
		String boneNameParamValue = boneName;
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap returnValue = getBindedRibbonTrail(boneNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedRibbonTrail_EVString(long pNativeObject, String boneName);
	/**
	 * 根据骨头获取绑定飘带
	 * @param boneName 骨骼名称
	 * @return 绑定飘带
	 */
	public com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getBindedRibbonTrail(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBindedRibbonTrail_EVString(this.nativeObject.pointer, boneNameParamValue);
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedRibbonTrail_EVString_NoVirtual(long pNativeObject, String boneName);
	protected com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getBindedRibbonTrail_NoVirtual(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBindedRibbonTrail_EVString_NoVirtual(this.nativeObject.pointer, boneNameParamValue);
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedRibbonTrailByNodeName_EVString_callback(String nodeName)
	{
		String nodeNameParamValue = nodeName;
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap returnValue = getBindedRibbonTrailByNodeName(nodeNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedRibbonTrailByNodeName_EVString(long pNativeObject, String nodeName);
	/**
	 * 根据节点名称获取绑定飘带
	 * @param nodeName 节点名称
	 * @return 绑定飘带
	 */
	public com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getBindedRibbonTrailByNodeName(String nodeName)
	{
		String nodeNameParamValue = nodeName;
		long returnValue = getBindedRibbonTrailByNodeName_EVString(this.nativeObject.pointer, nodeNameParamValue);
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedRibbonTrailByNodeName_EVString_NoVirtual(long pNativeObject, String nodeName);
	protected com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getBindedRibbonTrailByNodeName_NoVirtual(String nodeName)
	{
		String nodeNameParamValue = nodeName;
		long returnValue = getBindedRibbonTrailByNodeName_EVString_NoVirtual(this.nativeObject.pointer, nodeNameParamValue);
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		}
		return __returnValue;
	}

	protected  long getAllBindedModel_void_callback()
	{
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap returnValue = getAllBindedModel();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAllBindedModel_void(long pNativeObject);
	/**
	 * 获取所有绑定的模型
	 * @return 返回模型列表
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelObjectMap getAllBindedModel()
	{
		long returnValue = getAllBindedModel_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		}
		return __returnValue;
	}
	native private long getAllBindedModel_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.modelmanager.ModelObjectMap getAllBindedModel_NoVirtual()
	{
		long returnValue = getAllBindedModel_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedModel_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap returnValue = getBindedModel(subEntityIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedModel_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 根据subIndex获取模型
	 * @param subEntityIndex subentity标识索引
	 * @return 返回模型列表
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelObjectMap getBindedModel(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getBindedModel_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedModel_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected com.earthview.world.spatial3d.modelmanager.ModelObjectMap getBindedModel_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getBindedModel_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedModelByNodeName_EVString_callback(String nodeName)
	{
		String nodeNameParamValue = nodeName;
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap returnValue = getBindedModelByNodeName(nodeNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedModelByNodeName_EVString(long pNativeObject, String nodeName);
	/**
	 * 根据节点名称获取模型
	 * @param nodeName 节点名称
	 * @return 返回模型列表
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelObjectMap getBindedModelByNodeName(String nodeName)
	{
		String nodeNameParamValue = nodeName;
		long returnValue = getBindedModelByNodeName_EVString(this.nativeObject.pointer, nodeNameParamValue);
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedModelByNodeName_EVString_NoVirtual(long pNativeObject, String nodeName);
	protected com.earthview.world.spatial3d.modelmanager.ModelObjectMap getBindedModelByNodeName_NoVirtual(String nodeName)
	{
		String nodeNameParamValue = nodeName;
		long returnValue = getBindedModelByNodeName_EVString_NoVirtual(this.nativeObject.pointer, nodeNameParamValue);
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		}
		return __returnValue;
	}

	protected  long getComponentByName_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.spatial3d.Component returnValue = getComponentByName(nameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getComponentByName_EVString(long pNativeObject, String name);
	/**
	 * 根据名字取组件对象
	 * @param name 组件的名称
	 * @return 组件对象
	 */
	public com.earthview.world.spatial3d.Component getComponentByName(String name)
	{
		String nameParamValue = name;
		long returnValue = getComponentByName_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.spatial3d.Component __returnValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CComponent");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Component)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CComponent");
		}
		return __returnValue;
	}
	native private long getComponentByName_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.spatial3d.Component getComponentByName_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getComponentByName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.spatial3d.Component __returnValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CComponent");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Component)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CComponent");
		}
		return __returnValue;
	}

	protected  long getComponentBySubEntityIndex_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.spatial3d.Component returnValue = getComponentBySubEntityIndex(subEntityIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getComponentBySubEntityIndex_ev_uint32(long pNativeObject, long subEntityIndex);
	public com.earthview.world.spatial3d.Component getComponentBySubEntityIndex(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getComponentBySubEntityIndex_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.Component __returnValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CComponent");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Component)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CComponent");
		}
		return __returnValue;
	}
	native private long getComponentBySubEntityIndex_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected com.earthview.world.spatial3d.Component getComponentBySubEntityIndex_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getComponentBySubEntityIndex_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.Component __returnValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CComponent");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Component)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CComponent");
		}
		return __returnValue;
	}

	protected  long getParentComponentByName_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.spatial3d.Component returnValue = getParentComponentByName(nameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getParentComponentByName_EVString(long pNativeObject, String name);
	public com.earthview.world.spatial3d.Component getParentComponentByName(String name)
	{
		String nameParamValue = name;
		long returnValue = getParentComponentByName_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.spatial3d.Component __returnValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CComponent");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Component)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CComponent");
		}
		return __returnValue;
	}
	native private long getParentComponentByName_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.spatial3d.Component getParentComponentByName_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getParentComponentByName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.spatial3d.Component __returnValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CComponent");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Component)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CComponent");
		}
		return __returnValue;
	}

	protected  long getRootComponent_void_callback()
	{
		com.earthview.world.spatial3d.Component returnValue = getRootComponent();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRootComponent_void(long pNativeObject);
	/**
	 * 获取根组件对象
	 * @return 组件对象
	 */
	public com.earthview.world.spatial3d.Component getRootComponent()
	{
		long returnValue = getRootComponent_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.Component __returnValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CComponent");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Component)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CComponent");
		}
		return __returnValue;
	}
	native private long getRootComponent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.Component getRootComponent_NoVirtual()
	{
		long returnValue = getRootComponent_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.Component __returnValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CComponent");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Component)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CComponent");
		}
		return __returnValue;
	}

	protected  long getBindedModel_EVString_callback(String boneName)
	{
		String boneNameParamValue = boneName;
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap returnValue = getBindedModel(boneNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedModel_EVString(long pNativeObject, String boneName);
	/**
	 * 根据骨头获取模型
	 * @param boneName 骨骼名称
	 * @return 返回模型列表
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelObjectMap getBindedModel(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBindedModel_EVString(this.nativeObject.pointer, boneNameParamValue);
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		}
		return __returnValue;
	}
	native private long getBindedModel_EVString_NoVirtual(long pNativeObject, String boneName);
	protected com.earthview.world.spatial3d.modelmanager.ModelObjectMap getBindedModel_NoVirtual(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBindedModel_EVString_NoVirtual(this.nativeObject.pointer, boneNameParamValue);
		com.earthview.world.spatial3d.modelmanager.ModelObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ModelObjectMap");
		}
		return __returnValue;
	}

	protected  long getBindedParticleByName_EVString_callback(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		com.earthview.world.spatial3d.effectmanager.Effect returnValue = getBindedParticleByName(aliasNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedParticleByName_EVString(long pNativeObject, String aliasName);
	/**
	 * 根据名称取特效
	 * @param aliasName 绑定特效别名
	 * @return 成功返回特效，失败返回NULL
	 */
	public com.earthview.world.spatial3d.effectmanager.Effect getBindedParticleByName(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		long returnValue = getBindedParticleByName_EVString(this.nativeObject.pointer, aliasNameParamValue);
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
	native private long getBindedParticleByName_EVString_NoVirtual(long pNativeObject, String aliasName);
	protected com.earthview.world.spatial3d.effectmanager.Effect getBindedParticleByName_NoVirtual(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		long returnValue = getBindedParticleByName_EVString_NoVirtual(this.nativeObject.pointer, aliasNameParamValue);
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

	protected  long getBindedRibbonTrailByName_EVString_callback(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		com.earthview.world.graphic.RibbonTrail returnValue = getBindedRibbonTrailByName(aliasNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedRibbonTrailByName_EVString(long pNativeObject, String aliasName);
	/**
	 * 根据名称取飘带
	 * @param aliasName 飘带别名
	 * @return 成功返回飘带，失败返回NULL
	 */
	public com.earthview.world.graphic.RibbonTrail getBindedRibbonTrailByName(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		long returnValue = getBindedRibbonTrailByName_EVString(this.nativeObject.pointer, aliasNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RibbonTrail __returnValue = new com.earthview.world.graphic.RibbonTrail(CreatedWhenConstruct.CWC_NotToCreate, "CRibbonTrail");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RibbonTrail)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRibbonTrail");
		}
		return __returnValue;
	}
	native private long getBindedRibbonTrailByName_EVString_NoVirtual(long pNativeObject, String aliasName);
	protected com.earthview.world.graphic.RibbonTrail getBindedRibbonTrailByName_NoVirtual(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		long returnValue = getBindedRibbonTrailByName_EVString_NoVirtual(this.nativeObject.pointer, aliasNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RibbonTrail __returnValue = new com.earthview.world.graphic.RibbonTrail(CreatedWhenConstruct.CWC_NotToCreate, "CRibbonTrail");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RibbonTrail)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRibbonTrail");
		}
		return __returnValue;
	}

	protected  long getBindedModelByName_EVString_callback(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject returnValue = getBindedModelByName(aliasNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedModelByName_EVString(long pNativeObject, String aliasName);
	/**
	 * 根据名称取模型
	 * @param aliasName 模型别名
	 * @return 成功返回模型，失败返回NULL
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelBaseObject getBindedModelByName(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		long returnValue = getBindedModelByName_EVString(this.nativeObject.pointer, aliasNameParamValue);
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
	native private long getBindedModelByName_EVString_NoVirtual(long pNativeObject, String aliasName);
	protected com.earthview.world.spatial3d.modelmanager.ModelBaseObject getBindedModelByName_NoVirtual(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		long returnValue = getBindedModelByName_EVString_NoVirtual(this.nativeObject.pointer, aliasNameParamValue);
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

	protected  long getBindedLightByName_EVString_callback(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		com.earthview.world.graphic.Light returnValue = getBindedLightByName(aliasNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindedLightByName_EVString(long pNativeObject, String aliasName);
	/**
	 * 根据名称取光源
	 * @param aliasName 光源名称
	 * @return 成功返回光源，失败返回NULL
	 */
	public com.earthview.world.graphic.Light getBindedLightByName(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		long returnValue = getBindedLightByName_EVString(this.nativeObject.pointer, aliasNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Light __returnValue = new com.earthview.world.graphic.Light(CreatedWhenConstruct.CWC_NotToCreate, "CLight");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Light)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLight");
		}
		return __returnValue;
	}
	native private long getBindedLightByName_EVString_NoVirtual(long pNativeObject, String aliasName);
	protected com.earthview.world.graphic.Light getBindedLightByName_NoVirtual(String aliasName)
	{
		String aliasNameParamValue = aliasName;
		long returnValue = getBindedLightByName_EVString_NoVirtual(this.nativeObject.pointer, aliasNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Light __returnValue = new com.earthview.world.graphic.Light(CreatedWhenConstruct.CWC_NotToCreate, "CLight");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Light)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLight");
		}
		return __returnValue;
	}

	protected  boolean bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_callback(long ref_pEffect, String boneName, long offMatrix, String aliasName)
	{
		com.earthview.world.spatial3d.effectmanager.Effect ref_pEffectParamValue = (ref_pEffect == 0L ? null : new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pEffectParamValue != null)
		{
		ref_pEffectParamValue.setDelegate(true);
		ref_pEffectParamValue.setInstancePointer(new InstancePointer(ref_pEffect));
		IClassFactory ref_pEffectParamValueClassFactory = GlobalClassFactoryMap.get(ref_pEffectParamValue.getCppInstanceTypeName());
		if (ref_pEffectParamValueClassFactory != null)
		{
			ref_pEffectParamValue.setDelegate(true);
			ref_pEffectParamValue = (com.earthview.world.spatial3d.effectmanager.Effect)ref_pEffectParamValueClassFactory.create();
			ref_pEffectParamValue.setDelegate(true);
			ref_pEffectParamValue.setInstancePointer(new InstancePointer(ref_pEffect));
		}
		}
		String boneNameParamValue = boneName;
		com.earthview.world.spatial.math.Matrix4 offMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		offMatrixParamValue.setDelegate(true);
		offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		IClassFactory offMatrixParamValueClassFactory = GlobalClassFactoryMap.get(offMatrixParamValue.getCppInstanceTypeName());
		if (offMatrixParamValueClassFactory != null)
		{
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)offMatrixParamValueClassFactory.create();
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		}
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindEffectAtBone(ref_pEffectParamValue, boneNameParamValue, offMatrixParamValue, aliasNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean bindEffectAtBone_CEffect_EVString_CMatrix4_EVString(long pNativeObject, long ref_pEffect, String boneName, long offMatrix, String aliasName);
	/**
	 * 在骨头上绑定特效
	 * @param pEffect 特效
	 * @param boneName 模型骨骼名称
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定特效别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindEffectAtBone(com.earthview.world.spatial3d.effectmanager.Effect ref_pEffect, String boneName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pEffectParamValue = (ref_pEffect == null ? 0L : ref_pEffect.nativeObject.pointer);
		String boneNameParamValue = boneName;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindEffectAtBone_CEffect_EVString_CMatrix4_EVString(this.nativeObject.pointer, ref_pEffectParamValue, boneNameParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}
	native private boolean bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_NoVirtual(long pNativeObject, long ref_pEffect, String boneName, long offMatrix, String aliasName);
	protected boolean bindEffectAtBone_NoVirtual(com.earthview.world.spatial3d.effectmanager.Effect ref_pEffect, String boneName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pEffectParamValue = (ref_pEffect == null ? 0L : ref_pEffect.nativeObject.pointer);
		String boneNameParamValue = boneName;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_NoVirtual(this.nativeObject.pointer, ref_pEffectParamValue, boneNameParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}

	protected  boolean bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_callback(long ref_pEffect, String nodeName, long offMatrix, String aliasName)
	{
		com.earthview.world.spatial3d.effectmanager.Effect ref_pEffectParamValue = (ref_pEffect == 0L ? null : new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pEffectParamValue != null)
		{
		ref_pEffectParamValue.setDelegate(true);
		ref_pEffectParamValue.setInstancePointer(new InstancePointer(ref_pEffect));
		IClassFactory ref_pEffectParamValueClassFactory = GlobalClassFactoryMap.get(ref_pEffectParamValue.getCppInstanceTypeName());
		if (ref_pEffectParamValueClassFactory != null)
		{
			ref_pEffectParamValue.setDelegate(true);
			ref_pEffectParamValue = (com.earthview.world.spatial3d.effectmanager.Effect)ref_pEffectParamValueClassFactory.create();
			ref_pEffectParamValue.setDelegate(true);
			ref_pEffectParamValue.setInstancePointer(new InstancePointer(ref_pEffect));
		}
		}
		String nodeNameParamValue = nodeName;
		com.earthview.world.spatial.math.Matrix4 offMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		offMatrixParamValue.setDelegate(true);
		offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		IClassFactory offMatrixParamValueClassFactory = GlobalClassFactoryMap.get(offMatrixParamValue.getCppInstanceTypeName());
		if (offMatrixParamValueClassFactory != null)
		{
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)offMatrixParamValueClassFactory.create();
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		}
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindEffectAtNode(ref_pEffectParamValue, nodeNameParamValue, offMatrixParamValue, aliasNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean bindEffectAtNode_CEffect_EVString_CMatrix4_EVString(long pNativeObject, long ref_pEffect, String nodeName, long offMatrix, String aliasName);
	/**
	 * 在模型节点上绑定特效
	 * @param pEffect 特效
	 * @param nodeName 节点名称
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定特效别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindEffectAtNode(com.earthview.world.spatial3d.effectmanager.Effect ref_pEffect, String nodeName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pEffectParamValue = (ref_pEffect == null ? 0L : ref_pEffect.nativeObject.pointer);
		String nodeNameParamValue = nodeName;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindEffectAtNode_CEffect_EVString_CMatrix4_EVString(this.nativeObject.pointer, ref_pEffectParamValue, nodeNameParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}
	native private boolean bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_NoVirtual(long pNativeObject, long ref_pEffect, String nodeName, long offMatrix, String aliasName);
	protected boolean bindEffectAtNode_NoVirtual(com.earthview.world.spatial3d.effectmanager.Effect ref_pEffect, String nodeName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pEffectParamValue = (ref_pEffect == null ? 0L : ref_pEffect.nativeObject.pointer);
		String nodeNameParamValue = nodeName;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_NoVirtual(this.nativeObject.pointer, ref_pEffectParamValue, nodeNameParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}

	protected  boolean bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_callback(long ref_pEffect, long subEntityIndex, long offMatrix, String aliasName)
	{
		com.earthview.world.spatial3d.effectmanager.Effect ref_pEffectParamValue = (ref_pEffect == 0L ? null : new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pEffectParamValue != null)
		{
		ref_pEffectParamValue.setDelegate(true);
		ref_pEffectParamValue.setInstancePointer(new InstancePointer(ref_pEffect));
		IClassFactory ref_pEffectParamValueClassFactory = GlobalClassFactoryMap.get(ref_pEffectParamValue.getCppInstanceTypeName());
		if (ref_pEffectParamValueClassFactory != null)
		{
			ref_pEffectParamValue.setDelegate(true);
			ref_pEffectParamValue = (com.earthview.world.spatial3d.effectmanager.Effect)ref_pEffectParamValueClassFactory.create();
			ref_pEffectParamValue.setDelegate(true);
			ref_pEffectParamValue.setInstancePointer(new InstancePointer(ref_pEffect));
		}
		}
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.spatial.math.Matrix4 offMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		offMatrixParamValue.setDelegate(true);
		offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		IClassFactory offMatrixParamValueClassFactory = GlobalClassFactoryMap.get(offMatrixParamValue.getCppInstanceTypeName());
		if (offMatrixParamValueClassFactory != null)
		{
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)offMatrixParamValueClassFactory.create();
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		}
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindEffectAtSubEntity(ref_pEffectParamValue, subEntityIndexParamValue, offMatrixParamValue, aliasNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString(long pNativeObject, long ref_pEffect, long subEntityIndex, long offMatrix, String aliasName);
	/**
	 * 在模型子部件上绑定特效
	 * @param pEffect 特效
	 * @param subEntityIndex subentity标识索引
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定特效别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindEffectAtSubEntity(com.earthview.world.spatial3d.effectmanager.Effect ref_pEffect, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pEffectParamValue = (ref_pEffect == null ? 0L : ref_pEffect.nativeObject.pointer);
		long subEntityIndexParamValue = subEntityIndex;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString(this.nativeObject.pointer, ref_pEffectParamValue, subEntityIndexParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}
	native private boolean bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_NoVirtual(long pNativeObject, long ref_pEffect, long subEntityIndex, long offMatrix, String aliasName);
	protected boolean bindEffectAtSubEntity_NoVirtual(com.earthview.world.spatial3d.effectmanager.Effect ref_pEffect, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pEffectParamValue = (ref_pEffect == null ? 0L : ref_pEffect.nativeObject.pointer);
		long subEntityIndexParamValue = subEntityIndex;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_NoVirtual(this.nativeObject.pointer, ref_pEffectParamValue, subEntityIndexParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}

	protected  boolean bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_callback(long l, long subEntityIndex, long offMatrix, String aliasName)
	{
		com.earthview.world.graphic.Light lParamValue = (l == 0L ? null : new com.earthview.world.graphic.Light(CreatedWhenConstruct.CWC_NotToCreate));
		if(lParamValue != null)
		{
		lParamValue.setDelegate(true);
		lParamValue.setInstancePointer(new InstancePointer(l));
		IClassFactory lParamValueClassFactory = GlobalClassFactoryMap.get(lParamValue.getCppInstanceTypeName());
		if (lParamValueClassFactory != null)
		{
			lParamValue.setDelegate(true);
			lParamValue = (com.earthview.world.graphic.Light)lParamValueClassFactory.create();
			lParamValue.setDelegate(true);
			lParamValue.setInstancePointer(new InstancePointer(l));
		}
		}
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.spatial.math.Matrix4 offMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		offMatrixParamValue.setDelegate(true);
		offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		IClassFactory offMatrixParamValueClassFactory = GlobalClassFactoryMap.get(offMatrixParamValue.getCppInstanceTypeName());
		if (offMatrixParamValueClassFactory != null)
		{
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)offMatrixParamValueClassFactory.create();
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		}
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindLightAtSubEntity(lParamValue, subEntityIndexParamValue, offMatrixParamValue, aliasNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString(long pNativeObject, long l, long subEntityIndex, long offMatrix, String aliasName);
	/**
	 * 在模型子部件上绑定光源
	 * @param l 光源
	 * @param subEntityIndex subentity标识索引
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定光源别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindLightAtSubEntity(com.earthview.world.graphic.Light l, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		long subEntityIndexParamValue = subEntityIndex;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString(this.nativeObject.pointer, lParamValue, subEntityIndexParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}
	native private boolean bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_NoVirtual(long pNativeObject, long l, long subEntityIndex, long offMatrix, String aliasName);
	protected boolean bindLightAtSubEntity_NoVirtual(com.earthview.world.graphic.Light l, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		long subEntityIndexParamValue = subEntityIndex;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_NoVirtual(this.nativeObject.pointer, lParamValue, subEntityIndexParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}

	protected  boolean bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_callback(long ref_pModel, String boneName, long offMatrix, String aliasName)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModelParamValue = (ref_pModel == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pModelParamValue != null)
		{
		ref_pModelParamValue.setDelegate(true);
		ref_pModelParamValue.setInstancePointer(new InstancePointer(ref_pModel));
		IClassFactory ref_pModelParamValueClassFactory = GlobalClassFactoryMap.get(ref_pModelParamValue.getCppInstanceTypeName());
		if (ref_pModelParamValueClassFactory != null)
		{
			ref_pModelParamValue.setDelegate(true);
			ref_pModelParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)ref_pModelParamValueClassFactory.create();
			ref_pModelParamValue.setDelegate(true);
			ref_pModelParamValue.setInstancePointer(new InstancePointer(ref_pModel));
		}
		}
		String boneNameParamValue = boneName;
		com.earthview.world.spatial.math.Matrix4 offMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		offMatrixParamValue.setDelegate(true);
		offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		IClassFactory offMatrixParamValueClassFactory = GlobalClassFactoryMap.get(offMatrixParamValue.getCppInstanceTypeName());
		if (offMatrixParamValueClassFactory != null)
		{
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)offMatrixParamValueClassFactory.create();
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		}
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindModelAtBone(ref_pModelParamValue, boneNameParamValue, offMatrixParamValue, aliasNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString(long pNativeObject, long ref_pModel, String boneName, long offMatrix, String aliasName);
	/**
	 * 在骨头上绑定模型
	 * @param pModel 模型
	 * @param boneName 模型骨骼名称
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定模型别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindModelAtBone(com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModel, String boneName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pModelParamValue = (ref_pModel == null ? 0L : ref_pModel.nativeObject.pointer);
		String boneNameParamValue = boneName;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString(this.nativeObject.pointer, ref_pModelParamValue, boneNameParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}
	native private boolean bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_NoVirtual(long pNativeObject, long ref_pModel, String boneName, long offMatrix, String aliasName);
	protected boolean bindModelAtBone_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModel, String boneName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pModelParamValue = (ref_pModel == null ? 0L : ref_pModel.nativeObject.pointer);
		String boneNameParamValue = boneName;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_NoVirtual(this.nativeObject.pointer, ref_pModelParamValue, boneNameParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}

	protected  boolean bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_callback(long ref_pModel, long subEntityIndex, long offMatrix, String aliasName)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModelParamValue = (ref_pModel == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pModelParamValue != null)
		{
		ref_pModelParamValue.setDelegate(true);
		ref_pModelParamValue.setInstancePointer(new InstancePointer(ref_pModel));
		IClassFactory ref_pModelParamValueClassFactory = GlobalClassFactoryMap.get(ref_pModelParamValue.getCppInstanceTypeName());
		if (ref_pModelParamValueClassFactory != null)
		{
			ref_pModelParamValue.setDelegate(true);
			ref_pModelParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)ref_pModelParamValueClassFactory.create();
			ref_pModelParamValue.setDelegate(true);
			ref_pModelParamValue.setInstancePointer(new InstancePointer(ref_pModel));
		}
		}
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.spatial.math.Matrix4 offMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		offMatrixParamValue.setDelegate(true);
		offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		IClassFactory offMatrixParamValueClassFactory = GlobalClassFactoryMap.get(offMatrixParamValue.getCppInstanceTypeName());
		if (offMatrixParamValueClassFactory != null)
		{
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)offMatrixParamValueClassFactory.create();
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		}
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindModelAtSubEntity(ref_pModelParamValue, subEntityIndexParamValue, offMatrixParamValue, aliasNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString(long pNativeObject, long ref_pModel, long subEntityIndex, long offMatrix, String aliasName);
	/**
	 * 在模型子部件上绑定模型
	 * @param pModel 模型
	 * @param subEntityIndex subentity标识索引
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定模型别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindModelAtSubEntity(com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModel, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pModelParamValue = (ref_pModel == null ? 0L : ref_pModel.nativeObject.pointer);
		long subEntityIndexParamValue = subEntityIndex;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString(this.nativeObject.pointer, ref_pModelParamValue, subEntityIndexParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}
	native private boolean bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_NoVirtual(long pNativeObject, long ref_pModel, long subEntityIndex, long offMatrix, String aliasName);
	protected boolean bindModelAtSubEntity_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModel, long subEntityIndex, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pModelParamValue = (ref_pModel == null ? 0L : ref_pModel.nativeObject.pointer);
		long subEntityIndexParamValue = subEntityIndex;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_NoVirtual(this.nativeObject.pointer, ref_pModelParamValue, subEntityIndexParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}

	protected  boolean bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_callback(long ref_pModel, String nodeName, long offMatrix, String aliasName)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModelParamValue = (ref_pModel == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pModelParamValue != null)
		{
		ref_pModelParamValue.setDelegate(true);
		ref_pModelParamValue.setInstancePointer(new InstancePointer(ref_pModel));
		IClassFactory ref_pModelParamValueClassFactory = GlobalClassFactoryMap.get(ref_pModelParamValue.getCppInstanceTypeName());
		if (ref_pModelParamValueClassFactory != null)
		{
			ref_pModelParamValue.setDelegate(true);
			ref_pModelParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)ref_pModelParamValueClassFactory.create();
			ref_pModelParamValue.setDelegate(true);
			ref_pModelParamValue.setInstancePointer(new InstancePointer(ref_pModel));
		}
		}
		String nodeNameParamValue = nodeName;
		com.earthview.world.spatial.math.Matrix4 offMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		offMatrixParamValue.setDelegate(true);
		offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		IClassFactory offMatrixParamValueClassFactory = GlobalClassFactoryMap.get(offMatrixParamValue.getCppInstanceTypeName());
		if (offMatrixParamValueClassFactory != null)
		{
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)offMatrixParamValueClassFactory.create();
			offMatrixParamValue.setDelegate(true);
			offMatrixParamValue.setInstancePointer(new InstancePointer(offMatrix));
		}
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindModelAtNode(ref_pModelParamValue, nodeNameParamValue, offMatrixParamValue, aliasNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString(long pNativeObject, long ref_pModel, String nodeName, long offMatrix, String aliasName);
	/**
	 * 在模型节点上绑定模型
	 * @param pModel 模型
	 * @param nodeName 模型名称
	 * @param offMatrix 偏移矩阵
	 * @param aliasName 绑定模型别名
	 * @return 成功返回true，失败返回false
	 */
	public boolean bindModelAtNode(com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModel, String nodeName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pModelParamValue = (ref_pModel == null ? 0L : ref_pModel.nativeObject.pointer);
		String nodeNameParamValue = nodeName;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString(this.nativeObject.pointer, ref_pModelParamValue, nodeNameParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}
	native private boolean bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_NoVirtual(long pNativeObject, long ref_pModel, String nodeName, long offMatrix, String aliasName);
	protected boolean bindModelAtNode_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_pModel, String nodeName, com.earthview.world.spatial.math.Matrix4 offMatrix, String aliasName)
	{
		long ref_pModelParamValue = (ref_pModel == null ? 0L : ref_pModel.nativeObject.pointer);
		String nodeNameParamValue = nodeName;
		long offMatrixParamValue = offMatrix.nativeObject.pointer;
		String aliasNameParamValue = aliasName;
		boolean returnValue = bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_NoVirtual(this.nativeObject.pointer, ref_pModelParamValue, nodeNameParamValue, offMatrixParamValue, aliasNameParamValue);
		return returnValue;
	}

	protected  boolean unBindEffect_CEffect_callback(long pEffect)
	{
		com.earthview.world.spatial3d.effectmanager.Effect pEffectParamValue = (pEffect == 0L ? null : new com.earthview.world.spatial3d.effectmanager.Effect(CreatedWhenConstruct.CWC_NotToCreate));
		if(pEffectParamValue != null)
		{
		pEffectParamValue.setDelegate(true);
		pEffectParamValue.setInstancePointer(new InstancePointer(pEffect));
		IClassFactory pEffectParamValueClassFactory = GlobalClassFactoryMap.get(pEffectParamValue.getCppInstanceTypeName());
		if (pEffectParamValueClassFactory != null)
		{
			pEffectParamValue.setDelegate(true);
			pEffectParamValue = (com.earthview.world.spatial3d.effectmanager.Effect)pEffectParamValueClassFactory.create();
			pEffectParamValue.setDelegate(true);
			pEffectParamValue.setInstancePointer(new InstancePointer(pEffect));
		}
		}
		boolean returnValue = unBindEffect(pEffectParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean unBindEffect_CEffect(long pNativeObject, long pEffect);
	/**
	 * 解除模型上绑定的特效
	 * @param pEffect 特效
	 * @return 成功返回true，失败返回false
	 */
	public boolean unBindEffect(com.earthview.world.spatial3d.effectmanager.Effect pEffect)
	{
		long pEffectParamValue = (pEffect == null ? 0L : pEffect.nativeObject.pointer);
		boolean returnValue = unBindEffect_CEffect(this.nativeObject.pointer, pEffectParamValue);
		return returnValue;
	}
	native private boolean unBindEffect_CEffect_NoVirtual(long pNativeObject, long pEffect);
	protected boolean unBindEffect_NoVirtual(com.earthview.world.spatial3d.effectmanager.Effect pEffect)
	{
		long pEffectParamValue = (pEffect == null ? 0L : pEffect.nativeObject.pointer);
		boolean returnValue = unBindEffect_CEffect_NoVirtual(this.nativeObject.pointer, pEffectParamValue);
		return returnValue;
	}

	protected  boolean unBindLight_CLight_callback(long pLight)
	{
		com.earthview.world.graphic.Light pLightParamValue = (pLight == 0L ? null : new com.earthview.world.graphic.Light(CreatedWhenConstruct.CWC_NotToCreate));
		if(pLightParamValue != null)
		{
		pLightParamValue.setDelegate(true);
		pLightParamValue.setInstancePointer(new InstancePointer(pLight));
		IClassFactory pLightParamValueClassFactory = GlobalClassFactoryMap.get(pLightParamValue.getCppInstanceTypeName());
		if (pLightParamValueClassFactory != null)
		{
			pLightParamValue.setDelegate(true);
			pLightParamValue = (com.earthview.world.graphic.Light)pLightParamValueClassFactory.create();
			pLightParamValue.setDelegate(true);
			pLightParamValue.setInstancePointer(new InstancePointer(pLight));
		}
		}
		boolean returnValue = unBindLight(pLightParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean unBindLight_CLight(long pNativeObject, long pLight);
	/**
	 * 解除模型上绑定的光源
	 * @param pLight 光源
	 * @return 成功返回true，失败返回false
	 */
	public boolean unBindLight(com.earthview.world.graphic.Light pLight)
	{
		long pLightParamValue = (pLight == null ? 0L : pLight.nativeObject.pointer);
		boolean returnValue = unBindLight_CLight(this.nativeObject.pointer, pLightParamValue);
		return returnValue;
	}
	native private boolean unBindLight_CLight_NoVirtual(long pNativeObject, long pLight);
	protected boolean unBindLight_NoVirtual(com.earthview.world.graphic.Light pLight)
	{
		long pLightParamValue = (pLight == null ? 0L : pLight.nativeObject.pointer);
		boolean returnValue = unBindLight_CLight_NoVirtual(this.nativeObject.pointer, pLightParamValue);
		return returnValue;
	}

	protected  boolean unBindModel_CModelBaseObject_callback(long pModel)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModelParamValue = (pModel == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pModelParamValue != null)
		{
		pModelParamValue.setDelegate(true);
		pModelParamValue.setInstancePointer(new InstancePointer(pModel));
		IClassFactory pModelParamValueClassFactory = GlobalClassFactoryMap.get(pModelParamValue.getCppInstanceTypeName());
		if (pModelParamValueClassFactory != null)
		{
			pModelParamValue.setDelegate(true);
			pModelParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)pModelParamValueClassFactory.create();
			pModelParamValue.setDelegate(true);
			pModelParamValue.setInstancePointer(new InstancePointer(pModel));
		}
		}
		boolean returnValue = unBindModel(pModelParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean unBindModel_CModelBaseObject(long pNativeObject, long pModel);
	/**
	 * 解除模型上绑定的模型
	 * @param pModel 模型
	 * @return 成功返回true，失败返回false
	 */
	public boolean unBindModel(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		boolean returnValue = unBindModel_CModelBaseObject(this.nativeObject.pointer, pModelParamValue);
		return returnValue;
	}
	native private boolean unBindModel_CModelBaseObject_NoVirtual(long pNativeObject, long pModel);
	protected boolean unBindModel_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModel)
	{
		long pModelParamValue = (pModel == null ? 0L : pModel.nativeObject.pointer);
		boolean returnValue = unBindModel_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pModelParamValue);
		return returnValue;
	}

	protected  long getBindedID_void_callback()
	{
		long returnValue = getBindedID();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getBindedID_void(long pNativeObject);
	/**
	 * 获取绑定的ID
	 */
	public long getBindedID()
	{
		long returnValue = getBindedID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getBindedID_void_NoVirtual(long pNativeObject);
	protected long getBindedID_NoVirtual()
	{
		long returnValue = getBindedID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setBindedID_ev_uint32_callback(long bindedID)
	{
		long bindedIDParamValue = bindedID;
		setBindedID(bindedIDParamValue);
	}

	native private void setBindedID_ev_uint32(long pNativeObject, long bindedID);
	/**
	 * 设置绑定的ID
	 * @param bindedID 绑定ID
	 */
	public void setBindedID(long bindedID)
	{
		long bindedIDParamValue = bindedID;
		setBindedID_ev_uint32(this.nativeObject.pointer, bindedIDParamValue);
	}
	native private void setBindedID_ev_uint32_NoVirtual(long pNativeObject, long bindedID);
	protected void setBindedID_NoVirtual(long bindedID)
	{
		long bindedIDParamValue = bindedID;
		setBindedID_ev_uint32_NoVirtual(this.nativeObject.pointer, bindedIDParamValue);
	}

	protected  void setBindedEffectVisibility_ev_bool_callback(boolean isVisible)
	{
		boolean isVisibleParamValue = isVisible;
		setBindedEffectVisibility(isVisibleParamValue);
	}

	native private void setBindedEffectVisibility_ev_bool(long pNativeObject, boolean isVisible);
	/**
	 * 设置被绑定所有特效可见性
	 * @param isVisible 可见性
	 */
	public void setBindedEffectVisibility(boolean isVisible)
	{
		boolean isVisibleParamValue = isVisible;
		setBindedEffectVisibility_ev_bool(this.nativeObject.pointer, isVisibleParamValue);
	}
	native private void setBindedEffectVisibility_ev_bool_NoVirtual(long pNativeObject, boolean isVisible);
	protected void setBindedEffectVisibility_NoVirtual(boolean isVisible)
	{
		boolean isVisibleParamValue = isVisible;
		setBindedEffectVisibility_ev_bool_NoVirtual(this.nativeObject.pointer, isVisibleParamValue);
	}

	protected  boolean updateMaterial_CMaterialPtr_StringVector_StringVector_callback(long matPtr, long replacedTextures, long newTextureFilesPath)
	{
		com.earthview.world.graphic.MaterialPtr matPtrParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		matPtrParamValue.setDelegate(true);
		matPtrParamValue.setInstancePointer(new InstancePointer(matPtr));
		IClassFactory matPtrParamValueClassFactory = GlobalClassFactoryMap.get(matPtrParamValue.getCppInstanceTypeName());
		if (matPtrParamValueClassFactory != null)
		{
			matPtrParamValue.setDelegate(true);
			matPtrParamValue = (com.earthview.world.graphic.MaterialPtr)matPtrParamValueClassFactory.create();
			matPtrParamValue.setDelegate(true);
			matPtrParamValue.setInstancePointer(new InstancePointer(matPtr));
		}
		com.earthview.world.core.StringVector replacedTexturesParamValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		replacedTexturesParamValue.setDelegate(true);
		replacedTexturesParamValue.setInstancePointer(new InstancePointer(replacedTextures));
		IClassFactory replacedTexturesParamValueClassFactory = GlobalClassFactoryMap.get(replacedTexturesParamValue.getCppInstanceTypeName());
		if (replacedTexturesParamValueClassFactory != null)
		{
			replacedTexturesParamValue.setDelegate(true);
			replacedTexturesParamValue = (com.earthview.world.core.StringVector)replacedTexturesParamValueClassFactory.create();
			replacedTexturesParamValue.setDelegate(true);
			replacedTexturesParamValue.setInstancePointer(new InstancePointer(replacedTextures));
		}
		com.earthview.world.core.StringVector newTextureFilesPathParamValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		newTextureFilesPathParamValue.setDelegate(true);
		newTextureFilesPathParamValue.setInstancePointer(new InstancePointer(newTextureFilesPath));
		IClassFactory newTextureFilesPathParamValueClassFactory = GlobalClassFactoryMap.get(newTextureFilesPathParamValue.getCppInstanceTypeName());
		if (newTextureFilesPathParamValueClassFactory != null)
		{
			newTextureFilesPathParamValue.setDelegate(true);
			newTextureFilesPathParamValue = (com.earthview.world.core.StringVector)newTextureFilesPathParamValueClassFactory.create();
			newTextureFilesPathParamValue.setDelegate(true);
			newTextureFilesPathParamValue.setInstancePointer(new InstancePointer(newTextureFilesPath));
		}
		boolean returnValue = updateMaterial(matPtrParamValue, replacedTexturesParamValue, newTextureFilesPathParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean updateMaterial_CMaterialPtr_StringVector_StringVector(long pNativeObject, long matPtr, long replacedTextures, long newTextureFilesPath);
	/**
	 * 更新模型的材质
	 * @param matPtr 新的模型材质
	 * @param replacedTextures 被替换的纹理名称
	 * @param newTextureFilesPath 替换的纹理文件路径
	 * @return 成功返回true，失败返回false
	 */
	public boolean updateMaterial(com.earthview.world.graphic.MaterialPtr matPtr, com.earthview.world.core.StringVector replacedTextures, com.earthview.world.core.StringVector newTextureFilesPath)
	{
		long matPtrParamValue = matPtr.nativeObject.pointer;
		long replacedTexturesParamValue = replacedTextures.nativeObject.pointer;
		long newTextureFilesPathParamValue = newTextureFilesPath.nativeObject.pointer;
		boolean returnValue = updateMaterial_CMaterialPtr_StringVector_StringVector(this.nativeObject.pointer, matPtrParamValue, replacedTexturesParamValue, newTextureFilesPathParamValue);
		return returnValue;
	}
	native private boolean updateMaterial_CMaterialPtr_StringVector_StringVector_NoVirtual(long pNativeObject, long matPtr, long replacedTextures, long newTextureFilesPath);
	protected boolean updateMaterial_NoVirtual(com.earthview.world.graphic.MaterialPtr matPtr, com.earthview.world.core.StringVector replacedTextures, com.earthview.world.core.StringVector newTextureFilesPath)
	{
		long matPtrParamValue = matPtr.nativeObject.pointer;
		long replacedTexturesParamValue = replacedTextures.nativeObject.pointer;
		long newTextureFilesPathParamValue = newTextureFilesPath.nativeObject.pointer;
		boolean returnValue = updateMaterial_CMaterialPtr_StringVector_StringVector_NoVirtual(this.nativeObject.pointer, matPtrParamValue, replacedTexturesParamValue, newTextureFilesPathParamValue);
		return returnValue;
	}

	protected  void setMaterial_ev_uint32_CMaterialPtr_callback(long subEntityIndex, long matPtr)
	{
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.graphic.MaterialPtr matPtrParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		matPtrParamValue.setDelegate(true);
		matPtrParamValue.setInstancePointer(new InstancePointer(matPtr));
		IClassFactory matPtrParamValueClassFactory = GlobalClassFactoryMap.get(matPtrParamValue.getCppInstanceTypeName());
		if (matPtrParamValueClassFactory != null)
		{
			matPtrParamValue.setDelegate(true);
			matPtrParamValue = (com.earthview.world.graphic.MaterialPtr)matPtrParamValueClassFactory.create();
			matPtrParamValue.setDelegate(true);
			matPtrParamValue.setInstancePointer(new InstancePointer(matPtr));
		}
		setMaterial(subEntityIndexParamValue, matPtrParamValue);
	}

	native private void setMaterial_ev_uint32_CMaterialPtr(long pNativeObject, long subEntityIndex, long matPtr);
	/**
	 * 切换材质
	 * @param subEntityIndex 子部件下标
	 * @param matPtr 新材质对象
	 */
	public void setMaterial(long subEntityIndex, com.earthview.world.graphic.MaterialPtr matPtr)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long matPtrParamValue = matPtr.nativeObject.pointer;
		setMaterial_ev_uint32_CMaterialPtr(this.nativeObject.pointer, subEntityIndexParamValue, matPtrParamValue);
	}
	native private void setMaterial_ev_uint32_CMaterialPtr_NoVirtual(long pNativeObject, long subEntityIndex, long matPtr);
	protected void setMaterial_NoVirtual(long subEntityIndex, com.earthview.world.graphic.MaterialPtr matPtr)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long matPtrParamValue = matPtr.nativeObject.pointer;
		setMaterial_ev_uint32_CMaterialPtr_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, matPtrParamValue);
	}

	protected  long getMeshPtr_void_callback()
	{
		com.earthview.world.graphic.MeshPtr returnValue = getMeshPtr();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMeshPtr_void(long pNativeObject);
	/**
	 * 获取mesh对象
	 */
	public com.earthview.world.graphic.MeshPtr getMeshPtr()
	{
		long returnValue = getMeshPtr_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	native private long getMeshPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MeshPtr getMeshPtr_NoVirtual()
	{
		long returnValue = getMeshPtr_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}

	protected  long getTexturePtrs_void_callback()
	{
		com.earthview.world.spatial3d.TexturePtrVector returnValue = getTexturePtrs();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTexturePtrs_void(long pNativeObject);
	/**
	 * 获取纹理集合
	 */
	public com.earthview.world.spatial3d.TexturePtrVector getTexturePtrs()
	{
		long returnValue = getTexturePtrs_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.TexturePtrVector __returnValue = new com.earthview.world.spatial3d.TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TexturePtrVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TexturePtrVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TexturePtrVector");
		}
		return __returnValue;
	}
	native private long getTexturePtrs_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.TexturePtrVector getTexturePtrs_NoVirtual()
	{
		long returnValue = getTexturePtrs_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.TexturePtrVector __returnValue = new com.earthview.world.spatial3d.TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TexturePtrVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TexturePtrVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TexturePtrVector");
		}
		return __returnValue;
	}

	protected  long getMaterialPtrs_void_callback()
	{
		com.earthview.world.spatial3d.MaterialPtrVector returnValue = getMaterialPtrs();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMaterialPtrs_void(long pNativeObject);
	/**
	 * 获取材质集合
	 */
	public com.earthview.world.spatial3d.MaterialPtrVector getMaterialPtrs()
	{
		long returnValue = getMaterialPtrs_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.MaterialPtrVector __returnValue = new com.earthview.world.spatial3d.MaterialPtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MaterialPtrVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.MaterialPtrVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MaterialPtrVector");
		}
		return __returnValue;
	}
	native private long getMaterialPtrs_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.MaterialPtrVector getMaterialPtrs_NoVirtual()
	{
		long returnValue = getMaterialPtrs_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.MaterialPtrVector __returnValue = new com.earthview.world.spatial3d.MaterialPtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MaterialPtrVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.MaterialPtrVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MaterialPtrVector");
		}
		return __returnValue;
	}

	protected  long getGpuPtrs_void_callback()
	{
		com.earthview.world.spatial3d.GpuPtrVector returnValue = getGpuPtrs();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGpuPtrs_void(long pNativeObject);
	/**
	 * 获取GPU集合
	 */
	public com.earthview.world.spatial3d.GpuPtrVector getGpuPtrs()
	{
		long returnValue = getGpuPtrs_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.GpuPtrVector __returnValue = new com.earthview.world.spatial3d.GpuPtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuPtrVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GpuPtrVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuPtrVector");
		}
		return __returnValue;
	}
	native private long getGpuPtrs_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.GpuPtrVector getGpuPtrs_NoVirtual()
	{
		long returnValue = getGpuPtrs_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.GpuPtrVector __returnValue = new com.earthview.world.spatial3d.GpuPtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuPtrVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GpuPtrVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuPtrVector");
		}
		return __returnValue;
	}

	protected  long getMeshFeature_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifeature returnValue = getMeshFeature();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMeshFeature_void(long pNativeObject);
	/**
	 * 获取mesh的feature
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getMeshFeature()
	{
		long returnValue = getMeshFeature_void(this.nativeObject.pointer);
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
	native private long getMeshFeature_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeature getMeshFeature_NoVirtual()
	{
		long returnValue = getMeshFeature_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getOrigTextureFeatures_void_callback()
	{
		com.earthview.world.spatial3d.dataset.FeatureVector returnValue = getOrigTextureFeatures();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getOrigTextureFeatures_void(long pNativeObject);
	/**
	 * 获取mesh大纹理
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getOrigTextureFeatures()
	{
		long returnValue = getOrigTextureFeatures_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	native private long getOrigTextureFeatures_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.dataset.FeatureVector getOrigTextureFeatures_NoVirtual()
	{
		long returnValue = getOrigTextureFeatures_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}

	protected  long getThumbTextureFeatures_void_callback()
	{
		com.earthview.world.spatial3d.dataset.FeatureVector returnValue = getThumbTextureFeatures();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getThumbTextureFeatures_void(long pNativeObject);
	/**
	 * 获取mesh小纹理
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getThumbTextureFeatures()
	{
		long returnValue = getThumbTextureFeatures_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	native private long getThumbTextureFeatures_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.dataset.FeatureVector getThumbTextureFeatures_NoVirtual()
	{
		long returnValue = getThumbTextureFeatures_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}

	protected  long getMaterialFeatures_void_callback()
	{
		com.earthview.world.spatial3d.dataset.FeatureVector returnValue = getMaterialFeatures();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMaterialFeatures_void(long pNativeObject);
	/**
	 * 获取mesh材质信息
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getMaterialFeatures()
	{
		long returnValue = getMaterialFeatures_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	native private long getMaterialFeatures_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.dataset.FeatureVector getMaterialFeatures_NoVirtual()
	{
		long returnValue = getMaterialFeatures_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}

	protected  long getAnimationFeatures_void_callback()
	{
		com.earthview.world.spatial3d.dataset.FeatureVector returnValue = getAnimationFeatures();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAnimationFeatures_void(long pNativeObject);
	/**
	 * 获取mesh动画信息
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getAnimationFeatures()
	{
		long returnValue = getAnimationFeatures_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	native private long getAnimationFeatures_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.dataset.FeatureVector getAnimationFeatures_NoVirtual()
	{
		long returnValue = getAnimationFeatures_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}

	protected  long getGpuFeatures_void_callback()
	{
		com.earthview.world.spatial3d.dataset.FeatureVector returnValue = getGpuFeatures();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGpuFeatures_void(long pNativeObject);
	/**
	 * 获取mesh的GPU信息
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getGpuFeatures()
	{
		long returnValue = getGpuFeatures_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	native private long getGpuFeatures_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.dataset.FeatureVector getGpuFeatures_NoVirtual()
	{
		long returnValue = getGpuFeatures_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}

	protected  long getProgramFeatures_void_callback()
	{
		com.earthview.world.spatial3d.dataset.FeatureVector returnValue = getProgramFeatures();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getProgramFeatures_void(long pNativeObject);
	/**
	 * 获取mesh的Prg信息
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getProgramFeatures()
	{
		long returnValue = getProgramFeatures_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	native private long getProgramFeatures_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.dataset.FeatureVector getProgramFeatures_NoVirtual()
	{
		long returnValue = getProgramFeatures_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "FeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}

	protected  long getResourceFeature_void_callback()
	{
		com.earthview.world.spatial3d.dataset.FeatureVector returnValue = getResourceFeature();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getResourceFeature_void(long pNativeObject);
	/**
	 * 获取mesh的资源
	 */
	public com.earthview.world.spatial3d.dataset.FeatureVector getResourceFeature()
	{
		long returnValue = getResourceFeature_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}
	native private long getResourceFeature_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.dataset.FeatureVector getResourceFeature_NoVirtual()
	{
		long returnValue = getResourceFeature_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.FeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.FeatureVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FeatureVector");
		}
		return __returnValue;
	}

	protected  void setSelectionColour_CColourValue_callback(long color)
	{
		com.earthview.world.graphic.ColourValue colorParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.graphic.ColourValue)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		setSelectionColour(colorParamValue);
	}

	native private void setSelectionColour_CColourValue(long pNativeObject, long color);
	/**
	 * 设置选择时的颜色
	 * @param color 设置的颜色
	 */
	public void setSelectionColour(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setSelectionColour_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void setSelectionColour_CColourValue_NoVirtual(long pNativeObject, long color);
	protected void setSelectionColour_NoVirtual(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setSelectionColour_CColourValue_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	protected  long getSelectionColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getSelectionColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSelectionColour_void(long pNativeObject);
	/**
	 * 获取选择时的颜色
	 * @return EarthView::World::Graphic::CColourValue
	 */
	public com.earthview.world.graphic.ColourValue getSelectionColour()
	{
		long returnValue = getSelectionColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getSelectionColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getSelectionColour_NoVirtual()
	{
		long returnValue = getSelectionColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  void startFlash_CColourValue_ev_uint32_ev_uint32_callback(long color, long hightLight_ms, long normally_ms)
	{
		com.earthview.world.graphic.ColourValue colorParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.graphic.ColourValue)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		long hightLight_msParamValue = hightLight_ms;
		long normally_msParamValue = normally_ms;
		startFlash(colorParamValue, hightLight_msParamValue, normally_msParamValue);
	}

	native private void startFlash_CColourValue_ev_uint32_ev_uint32(long pNativeObject, long color, long hightLight_ms, long normally_ms);
	/**
	 * 开始闪烁
	 */
	public void startFlash(com.earthview.world.graphic.ColourValue color, long hightLight_ms, long normally_ms)
	{
		long colorParamValue = color.nativeObject.pointer;
		long hightLight_msParamValue = hightLight_ms;
		long normally_msParamValue = normally_ms;
		startFlash_CColourValue_ev_uint32_ev_uint32(this.nativeObject.pointer, colorParamValue, hightLight_msParamValue, normally_msParamValue);
	}
	native private void startFlash_CColourValue_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long color, long hightLight_ms, long normally_ms);
	protected void startFlash_NoVirtual(com.earthview.world.graphic.ColourValue color, long hightLight_ms, long normally_ms)
	{
		long colorParamValue = color.nativeObject.pointer;
		long hightLight_msParamValue = hightLight_ms;
		long normally_msParamValue = normally_ms;
		startFlash_CColourValue_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, colorParamValue, hightLight_msParamValue, normally_msParamValue);
	}

	protected  void stopFlash_void_callback()
	{
		stopFlash();
	}

	native private void stopFlash_void(long pNativeObject);
	/**
	 * 停止闪烁
	 */
	public void stopFlash()
	{
		stopFlash_void(this.nativeObject.pointer);
	}
	native private void stopFlash_void_NoVirtual(long pNativeObject);
	protected void stopFlash_NoVirtual()
	{
		stopFlash_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isSelectable_void_callback()
	{
		boolean returnValue = isSelectable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSelectable_void(long pNativeObject);
	/**
	 * 是否可选择
	 * @return true可选择，false不可选择
	 */
	public boolean isSelectable()
	{
		boolean returnValue = isSelectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelectable_void_NoVirtual(long pNativeObject);
	protected boolean isSelectable_NoVirtual()
	{
		boolean returnValue = isSelectable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isSelected_void_callback()
	{
		boolean returnValue = isSelected();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSelected_void(long pNativeObject);
	/**
	 * 是否被选择
	 * @return true被选择，false没有选择
	 */
	public boolean isSelected()
	{
		boolean returnValue = isSelected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelected_void_NoVirtual(long pNativeObject);
	protected boolean isSelected_NoVirtual()
	{
		boolean returnValue = isSelected_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSelectable_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置是否可选择
	 * @param flag true能够选择，false不能选择
	 * @return e
	 */
	public void setSelectable(boolean flag)
	{
		boolean flagParamValue = flag;
		setSelectable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setSelectable_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setSelectable_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setSelectable_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	protected  void setSelected_ev_bool_callback(boolean flag)
	{
		boolean flagParamValue = flag;
		setSelected(flagParamValue);
	}

	native private void setSelected_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置选中状态
	 * @param flag true选中，false没选中
	 */
	public void setSelected(boolean flag)
	{
		boolean flagParamValue = flag;
		setSelected_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setSelected_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setSelected_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setSelected_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	protected  void setSubEntitySelected_ev_uint32_ev_bool_callback(long subEntityIndex, boolean flag)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean flagParamValue = flag;
		setSubEntitySelected(subEntityIndexParamValue, flagParamValue);
	}

	native private void setSubEntitySelected_ev_uint32_ev_bool(long pNativeObject, long subEntityIndex, boolean flag);
	/**
	 * 设置子部件的选择状态
	 * @param subEntityIndex 子部件下标
	 * @param flag true能够选择，false不能选择
	 * @return e
	 */
	public void setSubEntitySelected(long subEntityIndex, boolean flag)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean flagParamValue = flag;
		setSubEntitySelected_ev_uint32_ev_bool(this.nativeObject.pointer, subEntityIndexParamValue, flagParamValue);
	}
	native private void setSubEntitySelected_ev_uint32_ev_bool_NoVirtual(long pNativeObject, long subEntityIndex, boolean flag);
	protected void setSubEntitySelected_NoVirtual(long subEntityIndex, boolean flag)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean flagParamValue = flag;
		setSubEntitySelected_ev_uint32_ev_bool_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, flagParamValue);
	}

	protected  void setSubEntitySelected_ev_uint32_ev_int32_ev_bool_callback(long subEntityIndex, int segmentIndex, boolean flag)
	{
		long subEntityIndexParamValue = subEntityIndex;
		int segmentIndexParamValue = segmentIndex;
		boolean flagParamValue = flag;
		setSubEntitySelected(subEntityIndexParamValue, segmentIndexParamValue, flagParamValue);
	}

	native private void setSubEntitySelected_ev_uint32_ev_int32_ev_bool(long pNativeObject, long subEntityIndex, int segmentIndex, boolean flag);
	public void setSubEntitySelected(long subEntityIndex, int segmentIndex, boolean flag)
	{
		long subEntityIndexParamValue = subEntityIndex;
		int segmentIndexParamValue = segmentIndex;
		boolean flagParamValue = flag;
		setSubEntitySelected_ev_uint32_ev_int32_ev_bool(this.nativeObject.pointer, subEntityIndexParamValue, segmentIndexParamValue, flagParamValue);
	}
	native private void setSubEntitySelected_ev_uint32_ev_int32_ev_bool_NoVirtual(long pNativeObject, long subEntityIndex, int segmentIndex, boolean flag);
	protected void setSubEntitySelected_NoVirtual(long subEntityIndex, int segmentIndex, boolean flag)
	{
		long subEntityIndexParamValue = subEntityIndex;
		int segmentIndexParamValue = segmentIndex;
		boolean flagParamValue = flag;
		setSubEntitySelected_ev_uint32_ev_int32_ev_bool_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, segmentIndexParamValue, flagParamValue);
	}

	protected  boolean getSubEntitySelected_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntitySelected(subEntityIndexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getSubEntitySelected_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 获取子部件的选择状态
	 * @return true被选中，false没有被选中
	 */
	public boolean getSubEntitySelected(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntitySelected_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}
	native private boolean getSubEntitySelected_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected boolean getSubEntitySelected_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntitySelected_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}

	protected  boolean getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_callback(long subMeshIndex, long instanceIndex, long segmentIndex)
	{
		UIntegerPointer subMeshIndexParamValue = new UIntegerPointer(new InstancePointer(subMeshIndex));
		UIntegerPointer instanceIndexParamValue = new UIntegerPointer(new InstancePointer(instanceIndex));
		IntegerPointer segmentIndexParamValue = new IntegerPointer(new InstancePointer(segmentIndex));
		boolean returnValue = getSelectedSubEntityIndex(subMeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32(long pNativeObject, long subMeshIndex, long instanceIndex, long segmentIndex);
	/**
	 * 获取选中的子部件索引
	 * @param subMeshIndex submesh的索引
	 * @param instanceIndex submesh的复用索引
	 * @param segmentIndex submesh的复用段索引
	 * @return 是否选中
	 */
	public boolean getSelectedSubEntityIndex(UIntegerPointer subMeshIndex, UIntegerPointer instanceIndex, IntegerPointer segmentIndex)
	{
		long subMeshIndexParamValue = subMeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		boolean returnValue = getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32(this.nativeObject.pointer, subMeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue);
		return returnValue;
	}
	native private boolean getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_NoVirtual(long pNativeObject, long subMeshIndex, long instanceIndex, long segmentIndex);
	protected boolean getSelectedSubEntityIndex_NoVirtual(UIntegerPointer subMeshIndex, UIntegerPointer instanceIndex, IntegerPointer segmentIndex)
	{
		long subMeshIndexParamValue = subMeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		boolean returnValue = getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_NoVirtual(this.nativeObject.pointer, subMeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue);
		return returnValue;
	}

	protected  String getSubMeshName_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		String returnValue = getSubMeshName(subEntityIndexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSubMeshName_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 返回子部件的名称
	 * @return 返回子部件的名称
	 */
	public String getSubMeshName(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		String returnValue = getSubMeshName_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}
	native private String getSubMeshName_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected String getSubMeshName_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		String returnValue = getSubMeshName_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}

	protected  long getSubMeshMatrix_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.spatial.math.Matrix4 returnValue = getSubMeshMatrix(subEntityIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSubMeshMatrix_ev_uint32(long pNativeObject, long subEntityIndex);
	/**
	 * 返回子部件的矩阵。（未开启动画时可用）
	 * @param subEntityIndex 子部件下标
	 */
	public com.earthview.world.spatial.math.Matrix4 getSubMeshMatrix(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getSubMeshMatrix_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
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
	native private long getSubMeshMatrix_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected com.earthview.world.spatial.math.Matrix4 getSubMeshMatrix_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long returnValue = getSubMeshMatrix_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
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

	protected  boolean addNodeListenerForSubMesh_ev_uint32_CNodeListener_callback(long subEntityIndex, long nodeListener)
	{
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.graphic.Node.NodeListener nodeListenerParamValue = (nodeListener == 0L ? null : new com.earthview.world.graphic.Node.NodeListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeListenerParamValue != null)
		{
		nodeListenerParamValue.setDelegate(true);
		nodeListenerParamValue.setInstancePointer(new InstancePointer(nodeListener));
		IClassFactory nodeListenerParamValueClassFactory = GlobalClassFactoryMap.get(nodeListenerParamValue.getCppInstanceTypeName());
		if (nodeListenerParamValueClassFactory != null)
		{
			nodeListenerParamValue.setDelegate(true);
			nodeListenerParamValue = (com.earthview.world.graphic.Node.NodeListener)nodeListenerParamValueClassFactory.create();
			nodeListenerParamValue.setDelegate(true);
			nodeListenerParamValue.setInstancePointer(new InstancePointer(nodeListener));
		}
		}
		boolean returnValue = addNodeListenerForSubMesh(subEntityIndexParamValue, nodeListenerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean addNodeListenerForSubMesh_ev_uint32_CNodeListener(long pNativeObject, long subEntityIndex, long nodeListener);
	/**
	 * 给子部件挂接的节点添加监听。（用在动画开启后使用）
	 * @param subEntityIndex 子部件下标
	 * @param nodeListener 节点监听
	 * @return 要在Loaded后使用这个接口。true,添加成功。false,说明该部件是没有动画的，可用getSubMeshMatrix取得其矩阵
	 */
	public boolean addNodeListenerForSubMesh(long subEntityIndex, com.earthview.world.graphic.Node.NodeListener nodeListener)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long nodeListenerParamValue = (nodeListener == null ? 0L : nodeListener.nativeObject.pointer);
		boolean returnValue = addNodeListenerForSubMesh_ev_uint32_CNodeListener(this.nativeObject.pointer, subEntityIndexParamValue, nodeListenerParamValue);
		return returnValue;
	}
	native private boolean addNodeListenerForSubMesh_ev_uint32_CNodeListener_NoVirtual(long pNativeObject, long subEntityIndex, long nodeListener);
	protected boolean addNodeListenerForSubMesh_NoVirtual(long subEntityIndex, com.earthview.world.graphic.Node.NodeListener nodeListener)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long nodeListenerParamValue = (nodeListener == null ? 0L : nodeListener.nativeObject.pointer);
		boolean returnValue = addNodeListenerForSubMesh_ev_uint32_CNodeListener_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, nodeListenerParamValue);
		return returnValue;
	}

	protected  void removeNodeListenerForSubMesh_ev_uint32_CNodeListener_callback(long subEntityIndex, long nodeListener)
	{
		long subEntityIndexParamValue = subEntityIndex;
		com.earthview.world.graphic.Node.NodeListener nodeListenerParamValue = (nodeListener == 0L ? null : new com.earthview.world.graphic.Node.NodeListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeListenerParamValue != null)
		{
		nodeListenerParamValue.setDelegate(true);
		nodeListenerParamValue.setInstancePointer(new InstancePointer(nodeListener));
		IClassFactory nodeListenerParamValueClassFactory = GlobalClassFactoryMap.get(nodeListenerParamValue.getCppInstanceTypeName());
		if (nodeListenerParamValueClassFactory != null)
		{
			nodeListenerParamValue.setDelegate(true);
			nodeListenerParamValue = (com.earthview.world.graphic.Node.NodeListener)nodeListenerParamValueClassFactory.create();
			nodeListenerParamValue.setDelegate(true);
			nodeListenerParamValue.setInstancePointer(new InstancePointer(nodeListener));
		}
		}
		removeNodeListenerForSubMesh(subEntityIndexParamValue, nodeListenerParamValue);
	}

	native private void removeNodeListenerForSubMesh_ev_uint32_CNodeListener(long pNativeObject, long subEntityIndex, long nodeListener);
	/**
	 * 移除子部件挂接的节点的监听。（用在动画开启后使用）
	 * @param subEntityIndex 子部件下标
	 * @param nodeListener 节点监听
	 */
	public void removeNodeListenerForSubMesh(long subEntityIndex, com.earthview.world.graphic.Node.NodeListener nodeListener)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long nodeListenerParamValue = (nodeListener == null ? 0L : nodeListener.nativeObject.pointer);
		removeNodeListenerForSubMesh_ev_uint32_CNodeListener(this.nativeObject.pointer, subEntityIndexParamValue, nodeListenerParamValue);
	}
	native private void removeNodeListenerForSubMesh_ev_uint32_CNodeListener_NoVirtual(long pNativeObject, long subEntityIndex, long nodeListener);
	protected void removeNodeListenerForSubMesh_NoVirtual(long subEntityIndex, com.earthview.world.graphic.Node.NodeListener nodeListener)
	{
		long subEntityIndexParamValue = subEntityIndex;
		long nodeListenerParamValue = (nodeListener == null ? 0L : nodeListener.nativeObject.pointer);
		removeNodeListenerForSubMesh_ev_uint32_CNodeListener_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, nodeListenerParamValue);
	}

	protected  void clearSelection_void_callback()
	{
		clearSelection();
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清除选择
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setEditable_ev_bool_callback(boolean flag)
	{
		boolean flagParamValue = flag;
		setEditable(flagParamValue);
	}

	native private void setEditable_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置可编辑状态
	 * @param flag true能够编辑，false不能编辑
	 */
	public void setEditable(boolean flag)
	{
		boolean flagParamValue = flag;
		setEditable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setEditable_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setEditable_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setEditable_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	protected  void endEditing_void_callback()
	{
		endEditing();
	}

	native private void endEditing_void(long pNativeObject);
	/**
	 * 停止可编辑状态
	 */
	public void endEditing()
	{
		endEditing_void(this.nativeObject.pointer);
	}
	native private void endEditing_void_NoVirtual(long pNativeObject);
	protected void endEditing_NoVirtual()
	{
		endEditing_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setTransparency_ev_real64_callback(double percent)
	{
		double percentParamValue = percent;
		setTransparency(percentParamValue);
	}

	native private void setTransparency_ev_real64(long pNativeObject, double percent);
	/**
	 * 设置模型透明度
	 * @param percent 值区间[0,1],(percent=1完全透明，percent=0不透明）
	 */
	public void setTransparency(double percent)
	{
		double percentParamValue = percent;
		setTransparency_ev_real64(this.nativeObject.pointer, percentParamValue);
	}
	native private void setTransparency_ev_real64_NoVirtual(long pNativeObject, double percent);
	protected void setTransparency_NoVirtual(double percent)
	{
		double percentParamValue = percent;
		setTransparency_ev_real64_NoVirtual(this.nativeObject.pointer, percentParamValue);
	}

	protected  void setTransparency_ev_uint32_ev_real64_callback(long subEntityIndex, double percent)
	{
		long subEntityIndexParamValue = subEntityIndex;
		double percentParamValue = percent;
		setTransparency(subEntityIndexParamValue, percentParamValue);
	}

	native private void setTransparency_ev_uint32_ev_real64(long pNativeObject, long subEntityIndex, double percent);
	/**
	 * 设置模型子部件透明度
	 * @param subEntityIndex 子部件
	 * @param percent 值区间[0,1],(percent=1完全透明，percent=0不透明）
	 */
	public void setTransparency(long subEntityIndex, double percent)
	{
		long subEntityIndexParamValue = subEntityIndex;
		double percentParamValue = percent;
		setTransparency_ev_uint32_ev_real64(this.nativeObject.pointer, subEntityIndexParamValue, percentParamValue);
	}
	native private void setTransparency_ev_uint32_ev_real64_NoVirtual(long pNativeObject, long subEntityIndex, double percent);
	protected void setTransparency_NoVirtual(long subEntityIndex, double percent)
	{
		long subEntityIndexParamValue = subEntityIndex;
		double percentParamValue = percent;
		setTransparency_ev_uint32_ev_real64_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue, percentParamValue);
	}

	protected  void setCastShadows_ev_bool_callback(boolean flag)
	{
		boolean flagParamValue = flag;
		setCastShadows(flagParamValue);
	}

	native private void setCastShadows_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置阴影
	 * @param flag true有阴影，false没有阴影
	 */
	public void setCastShadows(boolean flag)
	{
		boolean flagParamValue = flag;
		setCastShadows_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setCastShadows_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setCastShadows_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setCastShadows_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	protected  void setEnvParam_CColourValue_CColourValue_CColourValue_callback(long ambient, long diffuse, long specular)
	{
		com.earthview.world.graphic.ColourValue ambientParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		ambientParamValue.setDelegate(true);
		ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		IClassFactory ambientParamValueClassFactory = GlobalClassFactoryMap.get(ambientParamValue.getCppInstanceTypeName());
		if (ambientParamValueClassFactory != null)
		{
			ambientParamValue.setDelegate(true);
			ambientParamValue = (com.earthview.world.graphic.ColourValue)ambientParamValueClassFactory.create();
			ambientParamValue.setDelegate(true);
			ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		}
		com.earthview.world.graphic.ColourValue diffuseParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		diffuseParamValue.setDelegate(true);
		diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		IClassFactory diffuseParamValueClassFactory = GlobalClassFactoryMap.get(diffuseParamValue.getCppInstanceTypeName());
		if (diffuseParamValueClassFactory != null)
		{
			diffuseParamValue.setDelegate(true);
			diffuseParamValue = (com.earthview.world.graphic.ColourValue)diffuseParamValueClassFactory.create();
			diffuseParamValue.setDelegate(true);
			diffuseParamValue.setInstancePointer(new InstancePointer(diffuse));
		}
		com.earthview.world.graphic.ColourValue specularParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		specularParamValue.setDelegate(true);
		specularParamValue.setInstancePointer(new InstancePointer(specular));
		IClassFactory specularParamValueClassFactory = GlobalClassFactoryMap.get(specularParamValue.getCppInstanceTypeName());
		if (specularParamValueClassFactory != null)
		{
			specularParamValue.setDelegate(true);
			specularParamValue = (com.earthview.world.graphic.ColourValue)specularParamValueClassFactory.create();
			specularParamValue.setDelegate(true);
			specularParamValue.setInstancePointer(new InstancePointer(specular));
		}
		setEnvParam(ambientParamValue, diffuseParamValue, specularParamValue);
	}

	native private void setEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, long ambient, long diffuse, long specular);
	/**
	 * 设置环境光反射率增益
	 * @param ambient 环境光增益
	 * @param diffuse 散射光增益
	 * @param specular 镜面光增益
	 */
	public void setEnvParam(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		setEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}
	native private void setEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(long pNativeObject, long ambient, long diffuse, long specular);
	protected void setEnvParam_NoVirtual(com.earthview.world.graphic.ColourValue ambient, com.earthview.world.graphic.ColourValue diffuse, com.earthview.world.graphic.ColourValue specular)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		long diffuseParamValue = diffuse.nativeObject.pointer;
		long specularParamValue = specular.nativeObject.pointer;
		setEnvParam_CColourValue_CColourValue_CColourValue_NoVirtual(this.nativeObject.pointer, ambientParamValue, diffuseParamValue, specularParamValue);
	}

	protected  void setReflectable_ev_bool_callback(boolean flag)
	{
		boolean flagParamValue = flag;
		setReflectable(flagParamValue);
	}

	native private void setReflectable_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置是否开启反射
	 * @param flag true开启反射，false关闭反射
	 */
	public void setReflectable(boolean flag)
	{
		boolean flagParamValue = flag;
		setReflectable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setReflectable_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setReflectable_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setReflectable_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	protected  boolean getReflectable_void_callback()
	{
		boolean returnValue = getReflectable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getReflectable_void(long pNativeObject);
	/**
	 * 获取是否开启反射
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean getReflectable()
	{
		boolean returnValue = getReflectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getReflectable_void_NoVirtual(long pNativeObject);
	protected boolean getReflectable_NoVirtual()
	{
		boolean returnValue = getReflectable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRefractable_ev_bool_callback(boolean flag)
	{
		boolean flagParamValue = flag;
		setRefractable(flagParamValue);
	}

	native private void setRefractable_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置是否开启折射
	 * @param flag true开启折射，false关闭折射
	 */
	public void setRefractable(boolean flag)
	{
		boolean flagParamValue = flag;
		setRefractable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setRefractable_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void setRefractable_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		setRefractable_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	protected  boolean getRefractable_void_callback()
	{
		boolean returnValue = getRefractable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getRefractable_void(long pNativeObject);
	/**
	 * 获取是否开启折射
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean getRefractable()
	{
		boolean returnValue = getRefractable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getRefractable_void_NoVirtual(long pNativeObject);
	protected boolean getRefractable_NoVirtual()
	{
		boolean returnValue = getRefractable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getModelState_void_callback()
	{
		com.earthview.world.spatial3d.ModelObjectState returnValue = getModelState();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getModelState_void(long pNativeObject);
	/**
	 * 获取模型状态
	 */
	public com.earthview.world.spatial3d.ModelObjectState getModelState()
	{
		int returnValue = getModelState_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.ModelObjectState.toEnum(returnValue);
	}
	native private int getModelState_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.ModelObjectState getModelState_NoVirtual()
	{
		int returnValue = getModelState_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.ModelObjectState.toEnum(returnValue);
	}

	protected  int getTextureState_void_callback()
	{
		com.earthview.world.spatial3d.TextureState returnValue = getTextureState();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getTextureState_void(long pNativeObject);
	/**
	 * 获取模型纹理状态
	 */
	public com.earthview.world.spatial3d.TextureState getTextureState()
	{
		int returnValue = getTextureState_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.TextureState.toEnum(returnValue);
	}
	native private int getTextureState_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.TextureState getTextureState_NoVirtual()
	{
		int returnValue = getTextureState_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.TextureState.toEnum(returnValue);
	}

	protected  boolean needSwitchTexture_void_callback()
	{
		boolean returnValue = needSwitchTexture();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean needSwitchTexture_void(long pNativeObject);
	/**
	 * 是否需要切换纹理
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean needSwitchTexture()
	{
		boolean returnValue = needSwitchTexture_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean needSwitchTexture_void_NoVirtual(long pNativeObject);
	protected boolean needSwitchTexture_NoVirtual()
	{
		boolean returnValue = needSwitchTexture_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean switchThumb_TexturePtrVector_callback(long outTmpTextureVec)
	{
		com.earthview.world.spatial3d.TexturePtrVector outTmpTextureVecParamValue = new com.earthview.world.spatial3d.TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		outTmpTextureVecParamValue.setDelegate(true);
		outTmpTextureVecParamValue.setInstancePointer(new InstancePointer(outTmpTextureVec));
		IClassFactory outTmpTextureVecParamValueClassFactory = GlobalClassFactoryMap.get(outTmpTextureVecParamValue.getCppInstanceTypeName());
		if (outTmpTextureVecParamValueClassFactory != null)
		{
			outTmpTextureVecParamValue.setDelegate(true);
			outTmpTextureVecParamValue = (com.earthview.world.spatial3d.TexturePtrVector)outTmpTextureVecParamValueClassFactory.create();
			outTmpTextureVecParamValue.setDelegate(true);
			outTmpTextureVecParamValue.setInstancePointer(new InstancePointer(outTmpTextureVec));
		}
		boolean returnValue = switchThumb(outTmpTextureVecParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean switchThumb_TexturePtrVector(long pNativeObject, long outTmpTextureVec);
	/**
	 * 切换小纹理
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean switchThumb(com.earthview.world.spatial3d.TexturePtrVector outTmpTextureVec)
	{
		long outTmpTextureVecParamValue = outTmpTextureVec.nativeObject.pointer;
		boolean returnValue = switchThumb_TexturePtrVector(this.nativeObject.pointer, outTmpTextureVecParamValue);
		return returnValue;
	}
	native private boolean switchThumb_TexturePtrVector_NoVirtual(long pNativeObject, long outTmpTextureVec);
	protected boolean switchThumb_NoVirtual(com.earthview.world.spatial3d.TexturePtrVector outTmpTextureVec)
	{
		long outTmpTextureVecParamValue = outTmpTextureVec.nativeObject.pointer;
		boolean returnValue = switchThumb_TexturePtrVector_NoVirtual(this.nativeObject.pointer, outTmpTextureVecParamValue);
		return returnValue;
	}

	protected  void attachThumb_TexturePtrVector_callback(long tmpTextureVec)
	{
		com.earthview.world.spatial3d.TexturePtrVector tmpTextureVecParamValue = new com.earthview.world.spatial3d.TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		tmpTextureVecParamValue.setDelegate(true);
		tmpTextureVecParamValue.setInstancePointer(new InstancePointer(tmpTextureVec));
		IClassFactory tmpTextureVecParamValueClassFactory = GlobalClassFactoryMap.get(tmpTextureVecParamValue.getCppInstanceTypeName());
		if (tmpTextureVecParamValueClassFactory != null)
		{
			tmpTextureVecParamValue.setDelegate(true);
			tmpTextureVecParamValue = (com.earthview.world.spatial3d.TexturePtrVector)tmpTextureVecParamValueClassFactory.create();
			tmpTextureVecParamValue.setDelegate(true);
			tmpTextureVecParamValue.setInstancePointer(new InstancePointer(tmpTextureVec));
		}
		attachThumb(tmpTextureVecParamValue);
	}

	native private void attachThumb_TexturePtrVector(long pNativeObject, long tmpTextureVec);
	/**
	 * 把切换的小纹理应用到模型
	 */
	public void attachThumb(com.earthview.world.spatial3d.TexturePtrVector tmpTextureVec)
	{
		long tmpTextureVecParamValue = tmpTextureVec.nativeObject.pointer;
		attachThumb_TexturePtrVector(this.nativeObject.pointer, tmpTextureVecParamValue);
	}
	native private void attachThumb_TexturePtrVector_NoVirtual(long pNativeObject, long tmpTextureVec);
	protected void attachThumb_NoVirtual(com.earthview.world.spatial3d.TexturePtrVector tmpTextureVec)
	{
		long tmpTextureVecParamValue = tmpTextureVec.nativeObject.pointer;
		attachThumb_TexturePtrVector_NoVirtual(this.nativeObject.pointer, tmpTextureVecParamValue);
	}

	protected  boolean switchOrig_TexturePtrVector_callback(long outTmpTextureVec)
	{
		com.earthview.world.spatial3d.TexturePtrVector outTmpTextureVecParamValue = new com.earthview.world.spatial3d.TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		outTmpTextureVecParamValue.setDelegate(true);
		outTmpTextureVecParamValue.setInstancePointer(new InstancePointer(outTmpTextureVec));
		IClassFactory outTmpTextureVecParamValueClassFactory = GlobalClassFactoryMap.get(outTmpTextureVecParamValue.getCppInstanceTypeName());
		if (outTmpTextureVecParamValueClassFactory != null)
		{
			outTmpTextureVecParamValue.setDelegate(true);
			outTmpTextureVecParamValue = (com.earthview.world.spatial3d.TexturePtrVector)outTmpTextureVecParamValueClassFactory.create();
			outTmpTextureVecParamValue.setDelegate(true);
			outTmpTextureVecParamValue.setInstancePointer(new InstancePointer(outTmpTextureVec));
		}
		boolean returnValue = switchOrig(outTmpTextureVecParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean switchOrig_TexturePtrVector(long pNativeObject, long outTmpTextureVec);
	/**
	 * 切换大纹理
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean switchOrig(com.earthview.world.spatial3d.TexturePtrVector outTmpTextureVec)
	{
		long outTmpTextureVecParamValue = outTmpTextureVec.nativeObject.pointer;
		boolean returnValue = switchOrig_TexturePtrVector(this.nativeObject.pointer, outTmpTextureVecParamValue);
		return returnValue;
	}
	native private boolean switchOrig_TexturePtrVector_NoVirtual(long pNativeObject, long outTmpTextureVec);
	protected boolean switchOrig_NoVirtual(com.earthview.world.spatial3d.TexturePtrVector outTmpTextureVec)
	{
		long outTmpTextureVecParamValue = outTmpTextureVec.nativeObject.pointer;
		boolean returnValue = switchOrig_TexturePtrVector_NoVirtual(this.nativeObject.pointer, outTmpTextureVecParamValue);
		return returnValue;
	}

	protected  void attachOrig_TexturePtrVector_callback(long tmpTextureVec)
	{
		com.earthview.world.spatial3d.TexturePtrVector tmpTextureVecParamValue = new com.earthview.world.spatial3d.TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		tmpTextureVecParamValue.setDelegate(true);
		tmpTextureVecParamValue.setInstancePointer(new InstancePointer(tmpTextureVec));
		IClassFactory tmpTextureVecParamValueClassFactory = GlobalClassFactoryMap.get(tmpTextureVecParamValue.getCppInstanceTypeName());
		if (tmpTextureVecParamValueClassFactory != null)
		{
			tmpTextureVecParamValue.setDelegate(true);
			tmpTextureVecParamValue = (com.earthview.world.spatial3d.TexturePtrVector)tmpTextureVecParamValueClassFactory.create();
			tmpTextureVecParamValue.setDelegate(true);
			tmpTextureVecParamValue.setInstancePointer(new InstancePointer(tmpTextureVec));
		}
		attachOrig(tmpTextureVecParamValue);
	}

	native private void attachOrig_TexturePtrVector(long pNativeObject, long tmpTextureVec);
	/**
	 * 把切换的大纹理应用到模型
	 */
	public void attachOrig(com.earthview.world.spatial3d.TexturePtrVector tmpTextureVec)
	{
		long tmpTextureVecParamValue = tmpTextureVec.nativeObject.pointer;
		attachOrig_TexturePtrVector(this.nativeObject.pointer, tmpTextureVecParamValue);
	}
	native private void attachOrig_TexturePtrVector_NoVirtual(long pNativeObject, long tmpTextureVec);
	protected void attachOrig_NoVirtual(com.earthview.world.spatial3d.TexturePtrVector tmpTextureVec)
	{
		long tmpTextureVecParamValue = tmpTextureVec.nativeObject.pointer;
		attachOrig_TexturePtrVector_NoVirtual(this.nativeObject.pointer, tmpTextureVecParamValue);
	}

	protected  void clearTmpTextureStream_TexturePtrVector_callback(long tmpTextureVec)
	{
		com.earthview.world.spatial3d.TexturePtrVector tmpTextureVecParamValue = new com.earthview.world.spatial3d.TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
		tmpTextureVecParamValue.setDelegate(true);
		tmpTextureVecParamValue.setInstancePointer(new InstancePointer(tmpTextureVec));
		IClassFactory tmpTextureVecParamValueClassFactory = GlobalClassFactoryMap.get(tmpTextureVecParamValue.getCppInstanceTypeName());
		if (tmpTextureVecParamValueClassFactory != null)
		{
			tmpTextureVecParamValue.setDelegate(true);
			tmpTextureVecParamValue = (com.earthview.world.spatial3d.TexturePtrVector)tmpTextureVecParamValueClassFactory.create();
			tmpTextureVecParamValue.setDelegate(true);
			tmpTextureVecParamValue.setInstancePointer(new InstancePointer(tmpTextureVec));
		}
		clearTmpTextureStream(tmpTextureVecParamValue);
	}

	native private void clearTmpTextureStream_TexturePtrVector(long pNativeObject, long tmpTextureVec);
	/**
	 * 清除临时纹理对象
	 */
	public void clearTmpTextureStream(com.earthview.world.spatial3d.TexturePtrVector tmpTextureVec)
	{
		long tmpTextureVecParamValue = tmpTextureVec.nativeObject.pointer;
		clearTmpTextureStream_TexturePtrVector(this.nativeObject.pointer, tmpTextureVecParamValue);
	}
	native private void clearTmpTextureStream_TexturePtrVector_NoVirtual(long pNativeObject, long tmpTextureVec);
	protected void clearTmpTextureStream_NoVirtual(com.earthview.world.spatial3d.TexturePtrVector tmpTextureVec)
	{
		long tmpTextureVecParamValue = tmpTextureVec.nativeObject.pointer;
		clearTmpTextureStream_TexturePtrVector_NoVirtual(this.nativeObject.pointer, tmpTextureVecParamValue);
	}

	native private long getModelAnimation_void(long pNativeObject);
	/**
	 * 返加模型动画的管理对象
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelAnimation getModelAnimation()
	{
		long returnValue = getModelAnimation_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ModelAnimation __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelAnimation(CreatedWhenConstruct.CWC_NotToCreate, "CModelAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelAnimation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelAnimation");
		}
		return __returnValue;
	}
	native private void destroyModelAnimation_void(long pNativeObject);
	/**
	 * 销毁模型动画
	 */
	public void destroyModelAnimation()
	{
		destroyModelAnimation_void(this.nativeObject.pointer);
	}
	native private void setCullingMode_CullingMode(long pNativeObject, int mode);
	/**
	 * 设置每个通路的剔除模式
	 */
	public void setCullingMode(com.earthview.world.graphic.CullingMode mode)
	{
		int modeParamValue = mode.getValue();
		setCullingMode_CullingMode(this.nativeObject.pointer, modeParamValue);
	}
	protected  void setLoadFromLayer_ev_bool_callback(boolean fromLayer)
	{
		boolean fromLayerParamValue = fromLayer;
		setLoadFromLayer(fromLayerParamValue);
	}

	native private void setLoadFromLayer_ev_bool(long pNativeObject, boolean fromLayer);
	public void setLoadFromLayer(boolean fromLayer)
	{
		boolean fromLayerParamValue = fromLayer;
		setLoadFromLayer_ev_bool(this.nativeObject.pointer, fromLayerParamValue);
	}
	native private void setLoadFromLayer_ev_bool_NoVirtual(long pNativeObject, boolean fromLayer);
	protected void setLoadFromLayer_NoVirtual(boolean fromLayer)
	{
		boolean fromLayerParamValue = fromLayer;
		setLoadFromLayer_ev_bool_NoVirtual(this.nativeObject.pointer, fromLayerParamValue);
	}

	protected  boolean getLoadFromLayer_void_callback()
	{
		boolean returnValue = getLoadFromLayer();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getLoadFromLayer_void(long pNativeObject);
	public boolean getLoadFromLayer()
	{
		boolean returnValue = getLoadFromLayer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getLoadFromLayer_void_NoVirtual(long pNativeObject);
	protected boolean getLoadFromLayer_NoVirtual()
	{
		boolean returnValue = getLoadFromLayer_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getNodeByName_EVString(long pNativeObject, String nodeName);
	public com.earthview.world.graphic.Node getNodeByName(String nodeName)
	{
		String nodeNameParamValue = nodeName;
		long returnValue = getNodeByName_EVString(this.nativeObject.pointer, nodeNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private boolean hasMergeNodeBoundingBox_void(long pNativeObject);
	public boolean hasMergeNodeBoundingBox()
	{
		boolean returnValue = hasMergeNodeBoundingBox_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  boolean hasFltAnimation_void_callback()
	{
		boolean returnValue = hasFltAnimation();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasFltAnimation_void(long pNativeObject);
	public boolean hasFltAnimation()
	{
		boolean returnValue = hasFltAnimation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasFltAnimation_void_NoVirtual(long pNativeObject);
	protected boolean hasFltAnimation_NoVirtual()
	{
		boolean returnValue = hasFltAnimation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long addNodeForMesh_void(long pNativeObject);
	/**
	 * 恢复模型的场景结构
	 */
	public com.earthview.world.core.MemoryDataStreamPtr addNodeForMesh()
	{
		long returnValue = addNodeForMesh_void(this.nativeObject.pointer);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private void addNodeAndBoundingBoxForMesh_void(long pNativeObject);
	/**
	 * 恢复模型的场景结构并存储包围盒到节点上
	 */
	public void addNodeAndBoundingBoxForMesh()
	{
		addNodeAndBoundingBoxForMesh_void(this.nativeObject.pointer);
	}
	protected  void mergeBoundingBoxForNode_void_callback()
	{
		mergeBoundingBoxForNode();
	}

	native private void mergeBoundingBoxForNode_void(long pNativeObject);
	/**
	 * 存储包围盒到节点上
	 */
	public void mergeBoundingBoxForNode()
	{
		mergeBoundingBoxForNode_void(this.nativeObject.pointer);
	}
	native private void mergeBoundingBoxForNode_void_NoVirtual(long pNativeObject);
	protected void mergeBoundingBoxForNode_NoVirtual()
	{
		mergeBoundingBoxForNode_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void prepareForNodeAnimation_void_callback()
	{
		prepareForNodeAnimation();
	}

	native private void prepareForNodeAnimation_void(long pNativeObject);
	/**
	 * 开始模型的节点动画之前的准备工作
	 */
	public void prepareForNodeAnimation()
	{
		prepareForNodeAnimation_void(this.nativeObject.pointer);
	}
	native private void prepareForNodeAnimation_void_NoVirtual(long pNativeObject);
	protected void prepareForNodeAnimation_NoVirtual()
	{
		prepareForNodeAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void resumeNodeAnimationState_void_callback()
	{
		resumeNodeAnimationState();
	}

	native private void resumeNodeAnimationState_void(long pNativeObject);
	/**
	 * 恢复节点动画之前的状态
	 */
	public void resumeNodeAnimationState()
	{
		resumeNodeAnimationState_void(this.nativeObject.pointer);
	}
	native private void resumeNodeAnimationState_void_NoVirtual(long pNativeObject);
	protected void resumeNodeAnimationState_NoVirtual()
	{
		resumeNodeAnimationState_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void startAllNodeAnimation_void_callback()
	{
		startAllNodeAnimation();
	}

	native private void startAllNodeAnimation_void(long pNativeObject);
	/**
	 * 播放所有的节点动画
	 */
	public void startAllNodeAnimation()
	{
		startAllNodeAnimation_void(this.nativeObject.pointer);
	}
	native private void startAllNodeAnimation_void_NoVirtual(long pNativeObject);
	protected void startAllNodeAnimation_NoVirtual()
	{
		startAllNodeAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void stopAllNodeAnimation_void_callback()
	{
		stopAllNodeAnimation();
	}

	native private void stopAllNodeAnimation_void(long pNativeObject);
	/**
	 * 播放所有的节点动画
	 */
	public void stopAllNodeAnimation()
	{
		stopAllNodeAnimation_void(this.nativeObject.pointer);
	}
	native private void stopAllNodeAnimation_void_NoVirtual(long pNativeObject);
	protected void stopAllNodeAnimation_NoVirtual()
	{
		stopAllNodeAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void startAllAnimation_void_callback()
	{
		startAllAnimation();
	}

	native private void startAllAnimation_void(long pNativeObject);
	/**
	 * 播放所有的动画
	 */
	public void startAllAnimation()
	{
		startAllAnimation_void(this.nativeObject.pointer);
	}
	native private void startAllAnimation_void_NoVirtual(long pNativeObject);
	protected void startAllAnimation_NoVirtual()
	{
		startAllAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void startRangeAnimation_EVString_ev_int32_ev_uint32_callback(String keyTimeTagName, int segmentConut, long option)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		int segmentConutParamValue = segmentConut;
		long optionParamValue = option;
		startRangeAnimation(keyTimeTagNameParamValue, segmentConutParamValue, optionParamValue);
	}

	native private void startRangeAnimation_EVString_ev_int32_ev_uint32(long pNativeObject, String keyTimeTagName, int segmentConut, long option);
	/**
	 * 跟据时间标记点播放动画。详情参照modelanimation.h处的TimeRelationShip枚举的注释
	 * @param keyTimeTagName 标记点的名字
	 * @param segmentConut 段数
	 * @param option 要选择播放动画的类型TimeRelationShip类型的组合
	 */
	public void startRangeAnimation(String keyTimeTagName, int segmentConut, long option)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		int segmentConutParamValue = segmentConut;
		long optionParamValue = option;
		startRangeAnimation_EVString_ev_int32_ev_uint32(this.nativeObject.pointer, keyTimeTagNameParamValue, segmentConutParamValue, optionParamValue);
	}
	native private void startRangeAnimation_EVString_ev_int32_ev_uint32_NoVirtual(long pNativeObject, String keyTimeTagName, int segmentConut, long option);
	protected void startRangeAnimation_NoVirtual(String keyTimeTagName, int segmentConut, long option)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		int segmentConutParamValue = segmentConut;
		long optionParamValue = option;
		startRangeAnimation_EVString_ev_int32_ev_uint32_NoVirtual(this.nativeObject.pointer, keyTimeTagNameParamValue, segmentConutParamValue, optionParamValue);
	}

	protected  void startRangeAnimation_EVString_callback(String keyTimeTagName)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		startRangeAnimation(keyTimeTagNameParamValue);
	}

	native private void startRangeAnimation_EVString(long pNativeObject, String keyTimeTagName);
	/**
	 * 跟据时间标记点播放一段动画。详情参照modelanimation.h处的TimeRelationShip枚举的注释
	 * @param keyTimeTagName 标记点的名字
	 */
	public void startRangeAnimation(String keyTimeTagName)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		startRangeAnimation_EVString(this.nativeObject.pointer, keyTimeTagNameParamValue);
	}
	native private void startRangeAnimation_EVString_NoVirtual(long pNativeObject, String keyTimeTagName);
	protected void startRangeAnimation_NoVirtual(String keyTimeTagName)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		startRangeAnimation_EVString_NoVirtual(this.nativeObject.pointer, keyTimeTagNameParamValue);
	}

	protected  int startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_callback(String keyTimeTagName, int segmentConut, long option)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		int segmentConutParamValue = segmentConut;
		long optionParamValue = option;
		int returnValue = startRangeAnimationIndependently(keyTimeTagNameParamValue, segmentConutParamValue, optionParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int startRangeAnimationIndependently_EVString_ev_int32_ev_uint32(long pNativeObject, String keyTimeTagName, int segmentConut, long option);
	/**
	 * 跟据时间标记点播放动画(与startRangeAnimation的区别是只操作被选中的动画，不对没选中的动画进行操作)
	 * @param keyTimeTagName 标记点的名字
	 * @param segmentConut 段数
	 * @param option 要选择播放动画的类型TimeRelationShip类型的组合
	 * @return 被选中动画信息的句柄，停止动画时使用
	 */
	public int startRangeAnimationIndependently(String keyTimeTagName, int segmentConut, long option)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		int segmentConutParamValue = segmentConut;
		long optionParamValue = option;
		int returnValue = startRangeAnimationIndependently_EVString_ev_int32_ev_uint32(this.nativeObject.pointer, keyTimeTagNameParamValue, segmentConutParamValue, optionParamValue);
		return returnValue;
	}
	native private int startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_NoVirtual(long pNativeObject, String keyTimeTagName, int segmentConut, long option);
	protected int startRangeAnimationIndependently_NoVirtual(String keyTimeTagName, int segmentConut, long option)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		int segmentConutParamValue = segmentConut;
		long optionParamValue = option;
		int returnValue = startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_NoVirtual(this.nativeObject.pointer, keyTimeTagNameParamValue, segmentConutParamValue, optionParamValue);
		return returnValue;
	}

	protected  int startRangeAnimationIndependently_EVString_callback(String keyTimeTagName)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		int returnValue = startRangeAnimationIndependently(keyTimeTagNameParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int startRangeAnimationIndependently_EVString(long pNativeObject, String keyTimeTagName);
	/**
	 * 跟据时间标记点播放一段动画(与startRangeAnimation的区别是只操作被选中的动画，不对没选中的动画进行操作)
	 * @param keyTimeTagName 标记点的名字
	 * @return 被选中动画信息的句柄，停止动画时使用
	 */
	public int startRangeAnimationIndependently(String keyTimeTagName)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		int returnValue = startRangeAnimationIndependently_EVString(this.nativeObject.pointer, keyTimeTagNameParamValue);
		return returnValue;
	}
	native private int startRangeAnimationIndependently_EVString_NoVirtual(long pNativeObject, String keyTimeTagName);
	protected int startRangeAnimationIndependently_NoVirtual(String keyTimeTagName)
	{
		String keyTimeTagNameParamValue = keyTimeTagName;
		int returnValue = startRangeAnimationIndependently_EVString_NoVirtual(this.nativeObject.pointer, keyTimeTagNameParamValue);
		return returnValue;
	}

	protected  void stopRangeAnimation_ev_bool_callback(boolean stopAtRangeStart)
	{
		boolean stopAtRangeStartParamValue = stopAtRangeStart;
		stopRangeAnimation(stopAtRangeStartParamValue);
	}

	native private void stopRangeAnimation_ev_bool(long pNativeObject, boolean stopAtRangeStart);
	/**
	 * 停止按区间播放的动画,并将场景停在区间的起始位置或区间的终点
	 * @param stopAtRangeStart true，停止在区间的起始点；false，停在区间的终点
	 */
	public void stopRangeAnimation(boolean stopAtRangeStart)
	{
		boolean stopAtRangeStartParamValue = stopAtRangeStart;
		stopRangeAnimation_ev_bool(this.nativeObject.pointer, stopAtRangeStartParamValue);
	}
	native private void stopRangeAnimation_ev_bool_NoVirtual(long pNativeObject, boolean stopAtRangeStart);
	protected void stopRangeAnimation_NoVirtual(boolean stopAtRangeStart)
	{
		boolean stopAtRangeStartParamValue = stopAtRangeStart;
		stopRangeAnimation_ev_bool_NoVirtual(this.nativeObject.pointer, stopAtRangeStartParamValue);
	}

	protected  void stopRangeAnimation_ev_bool_ev_int32_callback(boolean stopAtRangeStart, int handle)
	{
		boolean stopAtRangeStartParamValue = stopAtRangeStart;
		int handleParamValue = handle;
		stopRangeAnimation(stopAtRangeStartParamValue, handleParamValue);
	}

	native private void stopRangeAnimation_ev_bool_ev_int32(long pNativeObject, boolean stopAtRangeStart, int handle);
	/**
	 * 停止按区间播放的动画,并将场景停在区间的起始位置或区间的终点
	 * @param stopAtRangeStart true，停止在区间的起始点；false，停在区间的终点
	 * @param handle 调用startRangeAnimationIndependently后，返回的值
	 */
	public void stopRangeAnimation(boolean stopAtRangeStart, int handle)
	{
		boolean stopAtRangeStartParamValue = stopAtRangeStart;
		int handleParamValue = handle;
		stopRangeAnimation_ev_bool_ev_int32(this.nativeObject.pointer, stopAtRangeStartParamValue, handleParamValue);
	}
	native private void stopRangeAnimation_ev_bool_ev_int32_NoVirtual(long pNativeObject, boolean stopAtRangeStart, int handle);
	protected void stopRangeAnimation_NoVirtual(boolean stopAtRangeStart, int handle)
	{
		boolean stopAtRangeStartParamValue = stopAtRangeStart;
		int handleParamValue = handle;
		stopRangeAnimation_ev_bool_ev_int32_NoVirtual(this.nativeObject.pointer, stopAtRangeStartParamValue, handleParamValue);
	}

	protected  void stopAllAnimation_void_callback()
	{
		stopAllAnimation();
	}

	native private void stopAllAnimation_void(long pNativeObject);
	/**
	 * 停止播放所有的动画
	 */
	public void stopAllAnimation()
	{
		stopAllAnimation_void(this.nativeObject.pointer);
	}
	native private void stopAllAnimation_void_NoVirtual(long pNativeObject);
	protected void stopAllAnimation_NoVirtual()
	{
		stopAllAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void pauseAllAnimation_void_callback()
	{
		pauseAllAnimation();
	}

	native private void pauseAllAnimation_void(long pNativeObject);
	/**
	 * 暂停播放所有的动画
	 */
	public void pauseAllAnimation()
	{
		pauseAllAnimation_void(this.nativeObject.pointer);
	}
	native private void pauseAllAnimation_void_NoVirtual(long pNativeObject);
	protected void pauseAllAnimation_NoVirtual()
	{
		pauseAllAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void continueAllAnimation_void_callback()
	{
		continueAllAnimation();
	}

	native private void continueAllAnimation_void(long pNativeObject);
	/**
	 * /继续播放所有的动画
	 * @param  
	 */
	public void continueAllAnimation()
	{
		continueAllAnimation_void(this.nativeObject.pointer);
	}
	native private void continueAllAnimation_void_NoVirtual(long pNativeObject);
	protected void continueAllAnimation_NoVirtual()
	{
		continueAllAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setAllAnimationLoop_ev_bool_callback(boolean loop)
	{
		boolean loopParamValue = loop;
		setAllAnimationLoop(loopParamValue);
	}

	native private void setAllAnimationLoop_ev_bool(long pNativeObject, boolean loop);
	/**
	 * /设置动画是否循环播放
	 * @param loop true开启循环播放，false关闭循环播放
	 */
	public void setAllAnimationLoop(boolean loop)
	{
		boolean loopParamValue = loop;
		setAllAnimationLoop_ev_bool(this.nativeObject.pointer, loopParamValue);
	}
	native private void setAllAnimationLoop_ev_bool_NoVirtual(long pNativeObject, boolean loop);
	protected void setAllAnimationLoop_NoVirtual(boolean loop)
	{
		boolean loopParamValue = loop;
		setAllAnimationLoop_ev_bool_NoVirtual(this.nativeObject.pointer, loopParamValue);
	}

	protected  void startAnimation_EVString_callback(String animationName)
	{
		String animationNameParamValue = animationName;
		startAnimation(animationNameParamValue);
	}

	native private void startAnimation_EVString(long pNativeObject, String animationName);
	/**
	 * /根据动画的名字播放动画
	 * @param animationName 动画名字
	 */
	public void startAnimation(String animationName)
	{
		String animationNameParamValue = animationName;
		startAnimation_EVString(this.nativeObject.pointer, animationNameParamValue);
	}
	native private void startAnimation_EVString_NoVirtual(long pNativeObject, String animationName);
	protected void startAnimation_NoVirtual(String animationName)
	{
		String animationNameParamValue = animationName;
		startAnimation_EVString_NoVirtual(this.nativeObject.pointer, animationNameParamValue);
	}

	native private void startAnimation_EVString_ev_bool(long pNativeObject, String animationName, boolean processChild);
	/**
	 * 根据动画的名字开启某个动画
	 * @param animationName 动画的名字
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void startAnimation(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		startAnimation_EVString_ev_bool(this.nativeObject.pointer, animationNameParamValue, processChildParamValue);
	}
	protected  void stopAnimation_EVString_callback(String animationName)
	{
		String animationNameParamValue = animationName;
		stopAnimation(animationNameParamValue);
	}

	native private void stopAnimation_EVString(long pNativeObject, String animationName);
	/**
	 * /根据动画的名字停止播放动画
	 * @param animationName 动画名字
	 */
	public void stopAnimation(String animationName)
	{
		String animationNameParamValue = animationName;
		stopAnimation_EVString(this.nativeObject.pointer, animationNameParamValue);
	}
	native private void stopAnimation_EVString_NoVirtual(long pNativeObject, String animationName);
	protected void stopAnimation_NoVirtual(String animationName)
	{
		String animationNameParamValue = animationName;
		stopAnimation_EVString_NoVirtual(this.nativeObject.pointer, animationNameParamValue);
	}

	protected  void stopAnimation_EVString_ev_bool_callback(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		stopAnimation(animationNameParamValue, processChildParamValue);
	}

	native private void stopAnimation_EVString_ev_bool(long pNativeObject, String animationName, boolean processChild);
	/**
	 * /根据动画的名字停止播放动画
	 * @param animationName 动画名字
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void stopAnimation(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		stopAnimation_EVString_ev_bool(this.nativeObject.pointer, animationNameParamValue, processChildParamValue);
	}
	native private void stopAnimation_EVString_ev_bool_NoVirtual(long pNativeObject, String animationName, boolean processChild);
	protected void stopAnimation_NoVirtual(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		stopAnimation_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, animationNameParamValue, processChildParamValue);
	}

	protected  void pauseAnimation_EVString_callback(String animationName)
	{
		String animationNameParamValue = animationName;
		pauseAnimation(animationNameParamValue);
	}

	native private void pauseAnimation_EVString(long pNativeObject, String animationName);
	/**
	 * /根据动画的名字暂停播放动画
	 * @param animationName 动画名字
	 */
	public void pauseAnimation(String animationName)
	{
		String animationNameParamValue = animationName;
		pauseAnimation_EVString(this.nativeObject.pointer, animationNameParamValue);
	}
	native private void pauseAnimation_EVString_NoVirtual(long pNativeObject, String animationName);
	protected void pauseAnimation_NoVirtual(String animationName)
	{
		String animationNameParamValue = animationName;
		pauseAnimation_EVString_NoVirtual(this.nativeObject.pointer, animationNameParamValue);
	}

	protected  void pauseAnimation_EVString_ev_bool_callback(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		pauseAnimation(animationNameParamValue, processChildParamValue);
	}

	native private void pauseAnimation_EVString_ev_bool(long pNativeObject, String animationName, boolean processChild);
	/**
	 * /根据动画的名字暂停播放动画
	 * @param animationName 动画名字
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void pauseAnimation(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		pauseAnimation_EVString_ev_bool(this.nativeObject.pointer, animationNameParamValue, processChildParamValue);
	}
	native private void pauseAnimation_EVString_ev_bool_NoVirtual(long pNativeObject, String animationName, boolean processChild);
	protected void pauseAnimation_NoVirtual(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		pauseAnimation_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, animationNameParamValue, processChildParamValue);
	}

	protected  void continueAnimation_EVString_callback(String animationName)
	{
		String animationNameParamValue = animationName;
		continueAnimation(animationNameParamValue);
	}

	native private void continueAnimation_EVString(long pNativeObject, String animationName);
	/**
	 * /根据动画的名字继续播放动画
	 * @param animationName 动画名字
	 */
	public void continueAnimation(String animationName)
	{
		String animationNameParamValue = animationName;
		continueAnimation_EVString(this.nativeObject.pointer, animationNameParamValue);
	}
	native private void continueAnimation_EVString_NoVirtual(long pNativeObject, String animationName);
	protected void continueAnimation_NoVirtual(String animationName)
	{
		String animationNameParamValue = animationName;
		continueAnimation_EVString_NoVirtual(this.nativeObject.pointer, animationNameParamValue);
	}

	protected  void continueAnimation_EVString_ev_bool_callback(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		continueAnimation(animationNameParamValue, processChildParamValue);
	}

	native private void continueAnimation_EVString_ev_bool(long pNativeObject, String animationName, boolean processChild);
	/**
	 * /根据动画的名字继续播放动画
	 * @param animationName 动画名字
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void continueAnimation(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		continueAnimation_EVString_ev_bool(this.nativeObject.pointer, animationNameParamValue, processChildParamValue);
	}
	native private void continueAnimation_EVString_ev_bool_NoVirtual(long pNativeObject, String animationName, boolean processChild);
	protected void continueAnimation_NoVirtual(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		continueAnimation_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, animationNameParamValue, processChildParamValue);
	}

	protected  void setAnimationLoop_EVString_bool_callback(String animationName, boolean loop)
	{
		String animationNameParamValue = animationName;
		boolean loopParamValue = loop;
		setAnimationLoop(animationNameParamValue, loopParamValue);
	}

	native private void setAnimationLoop_EVString_bool(long pNativeObject, String animationName, boolean loop);
	/**
	 * /根据动画的名字设置动画是否循环播放
	 * @param animationName 动画名字
	 * @param loop true循环播放，false不循环播放
	 */
	public void setAnimationLoop(String animationName, boolean loop)
	{
		String animationNameParamValue = animationName;
		boolean loopParamValue = loop;
		setAnimationLoop_EVString_bool(this.nativeObject.pointer, animationNameParamValue, loopParamValue);
	}
	native private void setAnimationLoop_EVString_bool_NoVirtual(long pNativeObject, String animationName, boolean loop);
	protected void setAnimationLoop_NoVirtual(String animationName, boolean loop)
	{
		String animationNameParamValue = animationName;
		boolean loopParamValue = loop;
		setAnimationLoop_EVString_bool_NoVirtual(this.nativeObject.pointer, animationNameParamValue, loopParamValue);
	}

	protected  void setAnimationLoop_EVString_bool_ev_bool_callback(String animationName, boolean loop, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean loopParamValue = loop;
		boolean processChildParamValue = processChild;
		setAnimationLoop(animationNameParamValue, loopParamValue, processChildParamValue);
	}

	native private void setAnimationLoop_EVString_bool_ev_bool(long pNativeObject, String animationName, boolean loop, boolean processChild);
	/**
	 * /根据动画的名字设置动画是否循环播放
	 * @param animationName 动画名字
	 * @param loop true循环播放，false不循环播放
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void setAnimationLoop(String animationName, boolean loop, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean loopParamValue = loop;
		boolean processChildParamValue = processChild;
		setAnimationLoop_EVString_bool_ev_bool(this.nativeObject.pointer, animationNameParamValue, loopParamValue, processChildParamValue);
	}
	native private void setAnimationLoop_EVString_bool_ev_bool_NoVirtual(long pNativeObject, String animationName, boolean loop, boolean processChild);
	protected void setAnimationLoop_NoVirtual(String animationName, boolean loop, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean loopParamValue = loop;
		boolean processChildParamValue = processChild;
		setAnimationLoop_EVString_bool_ev_bool_NoVirtual(this.nativeObject.pointer, animationNameParamValue, loopParamValue, processChildParamValue);
	}

	protected  long createLocalAxisNode_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = createLocalAxisNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createLocalAxisNode_void(long pNativeObject);
	/**
	 * 创建控制局部变换的节点，节点控制的坐标轴是基于建模时子部件的局部坐标轴限制：1.当前的CModelBaseObject必须是由createSubEntityObject创建的对象且只有一个子部件2.当前的CModelBaseObject必须是已经attachToNode（pWorldNode）后状态【attachToScene不支持】，调用此接口会调整pWorldNode下的挂接层次关系
	 * @param pModelObject 模型对象
	 * @return 返回节点，失败返回NULL
	 */
	public com.earthview.world.graphic.Node createLocalAxisNode()
	{
		long returnValue = createLocalAxisNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long createLocalAxisNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node createLocalAxisNode_NoVirtual()
	{
		long returnValue = createLocalAxisNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	protected  long createLocalAxisNode_EVString_callback(String componentName)
	{
		String componentNameParamValue = componentName;
		com.earthview.world.graphic.Node returnValue = createLocalAxisNode(componentNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createLocalAxisNode_EVString(long pNativeObject, String componentName);
	/**
	 * 创建控制局部变换的节点，节点控制的坐标轴是基于建模时子部件的局部坐标轴限制：1.当前的CModelBaseObject必须是由createSubEntityObject创建的对象且是同一个组件下的子部件2.当前的CModelBaseObject必须是已经attachToNode（pWorldNode）后状态【attachToScene不支持】，调用此接口会调整pWorldNode下的挂接层次关系
	 * @param componentName 组件名称，即是模型库左下角纯蓝色节点名称
	 * @return 返回节点，失败返回NULL
	 */
	public com.earthview.world.graphic.Node createLocalAxisNode(String componentName)
	{
		String componentNameParamValue = componentName;
		long returnValue = createLocalAxisNode_EVString(this.nativeObject.pointer, componentNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long createLocalAxisNode_EVString_NoVirtual(long pNativeObject, String componentName);
	protected com.earthview.world.graphic.Node createLocalAxisNode_NoVirtual(String componentName)
	{
		String componentNameParamValue = componentName;
		long returnValue = createLocalAxisNode_EVString_NoVirtual(this.nativeObject.pointer, componentNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	protected  long getLocalAxisNode_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = getLocalAxisNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLocalAxisNode_void(long pNativeObject);
	/**
	 * 获取控制局部变换的节点，节点控制的坐标轴是基于建模时子部件的局部坐标轴
	 * @return 返回节点，失败返回NULL
	 */
	public com.earthview.world.graphic.Node getLocalAxisNode()
	{
		long returnValue = getLocalAxisNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long getLocalAxisNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node getLocalAxisNode_NoVirtual()
	{
		long returnValue = getLocalAxisNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	protected  boolean destroyLocalAxisNode_void_callback()
	{
		boolean returnValue = destroyLocalAxisNode();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean destroyLocalAxisNode_void(long pNativeObject);
	/**
	 * 销毁createLocalAxisNode创建的节点，销毁后原来在节点上设置的偏移与姿态会丢失
	 * @param pModelObject 模型对象
	 * @param node createLocalAxisNode返回的node
	 * @return true成功，false失败
	 */
	public boolean destroyLocalAxisNode()
	{
		boolean returnValue = destroyLocalAxisNode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean destroyLocalAxisNode_void_NoVirtual(long pNativeObject);
	protected boolean destroyLocalAxisNode_NoVirtual()
	{
		boolean returnValue = destroyLocalAxisNode_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getBoneNode_EVString_callback(String boneName)
	{
		String boneNameParamValue = boneName;
		com.earthview.world.graphic.Node returnValue = getBoneNode(boneNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBoneNode_EVString(long pNativeObject, String boneName);
	/**
	 * 通过节点名称获取bone节点
	 * @param boneName 骨骼节点名称
	 * @return 失败返回NULL
	 */
	public com.earthview.world.graphic.Node getBoneNode(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBoneNode_EVString(this.nativeObject.pointer, boneNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long getBoneNode_EVString_NoVirtual(long pNativeObject, String boneName);
	protected com.earthview.world.graphic.Node getBoneNode_NoVirtual(String boneName)
	{
		String boneNameParamValue = boneName;
		long returnValue = getBoneNode_EVString_NoVirtual(this.nativeObject.pointer, boneNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	protected  void updateSkeletonAnimationVertex_void_callback()
	{
		updateSkeletonAnimationVertex();
	}

	native private void updateSkeletonAnimationVertex_void(long pNativeObject);
	/**
	 * 通过bone节点控制模型部件时，bone节点设置完位置后，需要调用此接口刷新一下限制：不支持instance模型，不支持内部instance模型
	 */
	public void updateSkeletonAnimationVertex()
	{
		updateSkeletonAnimationVertex_void(this.nativeObject.pointer);
	}
	native private void updateSkeletonAnimationVertex_void_NoVirtual(long pNativeObject);
	protected void updateSkeletonAnimationVertex_NoVirtual()
	{
		updateSkeletonAnimationVertex_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean getIsClone_void(long pNativeObject);
	/**
	 * 指示否是挎贝出来的
	 * @return 成功返回true，失败返回false
	 */
	public boolean getIsClone()
	{
		boolean returnValue = getIsClone_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsClone_ev_bool(long pNativeObject, boolean isClone);
	/**
	 * 设置是否拷贝
	 * @param isClone true为拷贝，false为不拷贝
	 */
	public void setIsClone(boolean isClone)
	{
		boolean isCloneParamValue = isClone;
		setIsClone_ev_bool(this.nativeObject.pointer, isCloneParamValue);
	}
	protected  void initializeAnimation_void_callback()
	{
		initializeAnimation();
	}

	native private void initializeAnimation_void(long pNativeObject);
	/**
	 * 初始模型的动画
	 */
	public void initializeAnimation()
	{
		initializeAnimation_void(this.nativeObject.pointer);
	}
	native private void initializeAnimation_void_NoVirtual(long pNativeObject);
	protected void initializeAnimation_NoVirtual()
	{
		initializeAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void initializeModelAnimation_void_callback()
	{
		initializeModelAnimation();
	}

	native private void initializeModelAnimation_void(long pNativeObject);
	/**
	 * 获取并管理模型自身的动画（骨骼动画和顶点动画这两类）
	 */
	public void initializeModelAnimation()
	{
		initializeModelAnimation_void(this.nativeObject.pointer);
	}
	native private void initializeModelAnimation_void_NoVirtual(long pNativeObject);
	protected void initializeModelAnimation_NoVirtual()
	{
		initializeModelAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void initializeNodeAnimation_void_callback()
	{
		initializeNodeAnimation();
	}

	native private void initializeNodeAnimation_void(long pNativeObject);
	/**
	 * 获取并管理模型的节点动画（会根据ani文件还原出3DMAX中原有的一样的场景结构）
	 */
	public void initializeNodeAnimation()
	{
		initializeNodeAnimation_void(this.nativeObject.pointer);
	}
	native private void initializeNodeAnimation_void_NoVirtual(long pNativeObject);
	protected void initializeNodeAnimation_NoVirtual()
	{
		initializeNodeAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getModelAnimationInformationMap_void(long pNativeObject);
	/**
	 * 返回模型的动画信息
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelAnimationInformationMap getModelAnimationInformationMap()
	{
		long returnValue = getModelAnimationInformationMap_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.ModelAnimationInformationMap __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelAnimationInformationMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CModelAnimationInformationMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelAnimationInformationMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CModelAnimationInformationMap");
		}
		return __returnValue;
	}
	native private long getFrameTagList_void(long pNativeObject);
	/**
	 * 返回关键时间标记队列
	 */
	public com.earthview.world.graphic.FrameTagList getFrameTagList()
	{
		long returnValue = getFrameTagList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.FrameTagList __returnValue = new com.earthview.world.graphic.FrameTagList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFrameTagList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FrameTagList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFrameTagList");
		}
		return __returnValue;
	}
	protected  void setComponentVisible_CComponent_ev_bool_callback(long component, boolean visible)
	{
		com.earthview.world.spatial3d.Component componentParamValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		componentParamValue.setDelegate(true);
		componentParamValue.setInstancePointer(new InstancePointer(component));
		IClassFactory componentParamValueClassFactory = GlobalClassFactoryMap.get(componentParamValue.getCppInstanceTypeName());
		if (componentParamValueClassFactory != null)
		{
			componentParamValue.setDelegate(true);
			componentParamValue = (com.earthview.world.spatial3d.Component)componentParamValueClassFactory.create();
			componentParamValue.setDelegate(true);
			componentParamValue.setInstancePointer(new InstancePointer(component));
		}
		boolean visibleParamValue = visible;
		setComponentVisible(componentParamValue, visibleParamValue);
	}

	native private void setComponentVisible_CComponent_ev_bool(long pNativeObject, long component, boolean visible);
	/**
	 * 设置组件是否显示
	 * @param component 组件
	 * @param visible 是否可见
	 */
	public void setComponentVisible(com.earthview.world.spatial3d.Component component, boolean visible)
	{
		long componentParamValue = component.nativeObject.pointer;
		boolean visibleParamValue = visible;
		setComponentVisible_CComponent_ev_bool(this.nativeObject.pointer, componentParamValue, visibleParamValue);
	}
	native private void setComponentVisible_CComponent_ev_bool_NoVirtual(long pNativeObject, long component, boolean visible);
	protected void setComponentVisible_NoVirtual(com.earthview.world.spatial3d.Component component, boolean visible)
	{
		long componentParamValue = component.nativeObject.pointer;
		boolean visibleParamValue = visible;
		setComponentVisible_CComponent_ev_bool_NoVirtual(this.nativeObject.pointer, componentParamValue, visibleParamValue);
	}

	protected  void setComponentHighlight_CComponent_ev_bool_callback(long component, boolean highlight)
	{
		com.earthview.world.spatial3d.Component componentParamValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		componentParamValue.setDelegate(true);
		componentParamValue.setInstancePointer(new InstancePointer(component));
		IClassFactory componentParamValueClassFactory = GlobalClassFactoryMap.get(componentParamValue.getCppInstanceTypeName());
		if (componentParamValueClassFactory != null)
		{
			componentParamValue.setDelegate(true);
			componentParamValue = (com.earthview.world.spatial3d.Component)componentParamValueClassFactory.create();
			componentParamValue.setDelegate(true);
			componentParamValue.setInstancePointer(new InstancePointer(component));
		}
		boolean highlightParamValue = highlight;
		setComponentHighlight(componentParamValue, highlightParamValue);
	}

	native private void setComponentHighlight_CComponent_ev_bool(long pNativeObject, long component, boolean highlight);
	/**
	 * 设置组件是否高亮
	 * @param component 组件
	 * @param highlight 是否高亮
	 */
	public void setComponentHighlight(com.earthview.world.spatial3d.Component component, boolean highlight)
	{
		long componentParamValue = component.nativeObject.pointer;
		boolean highlightParamValue = highlight;
		setComponentHighlight_CComponent_ev_bool(this.nativeObject.pointer, componentParamValue, highlightParamValue);
	}
	native private void setComponentHighlight_CComponent_ev_bool_NoVirtual(long pNativeObject, long component, boolean highlight);
	protected void setComponentHighlight_NoVirtual(com.earthview.world.spatial3d.Component component, boolean highlight)
	{
		long componentParamValue = component.nativeObject.pointer;
		boolean highlightParamValue = highlight;
		setComponentHighlight_CComponent_ev_bool_NoVirtual(this.nativeObject.pointer, componentParamValue, highlightParamValue);
	}

	protected  void setComponentTransparency_CComponent_ev_real32_callback(long component, float alpha)
	{
		com.earthview.world.spatial3d.Component componentParamValue = new com.earthview.world.spatial3d.Component(CreatedWhenConstruct.CWC_NotToCreate);
		componentParamValue.setDelegate(true);
		componentParamValue.setInstancePointer(new InstancePointer(component));
		IClassFactory componentParamValueClassFactory = GlobalClassFactoryMap.get(componentParamValue.getCppInstanceTypeName());
		if (componentParamValueClassFactory != null)
		{
			componentParamValue.setDelegate(true);
			componentParamValue = (com.earthview.world.spatial3d.Component)componentParamValueClassFactory.create();
			componentParamValue.setDelegate(true);
			componentParamValue.setInstancePointer(new InstancePointer(component));
		}
		float alphaParamValue = alpha;
		setComponentTransparency(componentParamValue, alphaParamValue);
	}

	native private void setComponentTransparency_CComponent_ev_real32(long pNativeObject, long component, float alpha);
	/**
	 * 设置组件透明度
	 * @param component 组件
	 * @param alpha 透明度，0为不透明，1为全透明
	 */
	public void setComponentTransparency(com.earthview.world.spatial3d.Component component, float alpha)
	{
		long componentParamValue = component.nativeObject.pointer;
		float alphaParamValue = alpha;
		setComponentTransparency_CComponent_ev_real32(this.nativeObject.pointer, componentParamValue, alphaParamValue);
	}
	native private void setComponentTransparency_CComponent_ev_real32_NoVirtual(long pNativeObject, long component, float alpha);
	protected void setComponentTransparency_NoVirtual(com.earthview.world.spatial3d.Component component, float alpha)
	{
		long componentParamValue = component.nativeObject.pointer;
		float alphaParamValue = alpha;
		setComponentTransparency_CComponent_ev_real32_NoVirtual(this.nativeObject.pointer, componentParamValue, alphaParamValue);
	}

	native private long getAnimationRootNode_void(long pNativeObject);
	/**
	 * 获取节点动画的根节点
	 */
	public com.earthview.world.graphic.Node getAnimationRootNode()
	{
		long returnValue = getAnimationRootNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	public ModelBaseObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelBaseObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取节点
	 * @return true成功，false失败
	 */
	public com.earthview.world.graphic.Node getNode()
	{
		return super.getNode_NoVirtual();
	}
	/**
	 * 直接挂到场景，******选择重写******
	 * @return true成功，false失败
	 */
	public boolean attachToScene()
	{
		return super.attachToScene_NoVirtual();
	}
	/**
	 * 从场景反挂接，******选择重写******
	 * @return true成功，false失败
	 */
	public boolean detachFromScene()
	{
		return super.detachFromScene_NoVirtual();
	}
	/**
	 * 设置用户数据
	 * @param userData 用户数据
	 */
	public void setUserData(com.earthview.world.spatial3d.FeatureUserData userData)
	{
		super.setUserData_NoVirtual(userData);
	}
	public boolean getSelectable()
	{
		return super.getSelectable_NoVirtual();
	}
	public boolean update()
	{
		return super.update_NoVirtual();
	}
	
	native protected void register_load_IntVector(long pNativeObject, String method);
	native protected void register_setLocalMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_getLocalMatrix_void(long pNativeObject, String method);
	native protected void register_getModelDBTransform_CVector3_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_getFile_void(long pNativeObject, String method);
	native protected void register_isFileDirAsGroup_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getSceneManager_void(long pNativeObject, String method);
	native protected void register_getWorldAABB_void(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setSubEntityVisibility_ev_uint32_ev_bool(long pNativeObject, String method);
	native protected void register_setSubEntityVisibility_ev_uint32_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_getSubEntityVisibility_ev_uint32(long pNativeObject, String method);
	native protected void register_setRenderingMaxDistance_ev_real64(long pNativeObject, String method);
	native protected void register_getRenderingMaxDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinDistance_ev_real64(long pNativeObject, String method);
	native protected void register_getRenderingMinDistance_void(long pNativeObject, String method);
	native protected void register_calculateSubEntityIndex_ev_uint16_ev_uint32(long pNativeObject, String method);
	native protected void register_calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(long pNativeObject, String method);
	native protected void register_getNumSubEntities_void(long pNativeObject, String method);
	native protected void register_getAliasName_void(long pNativeObject, String method);
	native protected void register_getBindedState_void(long pNativeObject, String method);
	native protected void register_getAllBindedEffect_void(long pNativeObject, String method);
	native protected void register_getAllBindedLight_void(long pNativeObject, String method);
	native protected void register_getBindedEffect_ev_uint32(long pNativeObject, String method);
	native protected void register_getBindedLight_ev_uint32(long pNativeObject, String method);
	native protected void register_getBindedParticle_ev_uint32(long pNativeObject, String method);
	native protected void register_getBindedRibbonTrail_ev_uint32(long pNativeObject, String method);
	native protected void register_getBindedEffect_EVString(long pNativeObject, String method);
	native protected void register_getBindedEffectByNodeName_EVString(long pNativeObject, String method);
	native protected void register_getBindedParticle_EVString(long pNativeObject, String method);
	native protected void register_getBindedRibbonTrail_EVString(long pNativeObject, String method);
	native protected void register_getBindedRibbonTrailByNodeName_EVString(long pNativeObject, String method);
	native protected void register_getAllBindedModel_void(long pNativeObject, String method);
	native protected void register_getBindedModel_ev_uint32(long pNativeObject, String method);
	native protected void register_getBindedModelByNodeName_EVString(long pNativeObject, String method);
	native protected void register_getComponentByName_EVString(long pNativeObject, String method);
	native protected void register_getComponentBySubEntityIndex_ev_uint32(long pNativeObject, String method);
	native protected void register_getParentComponentByName_EVString(long pNativeObject, String method);
	native protected void register_getRootComponent_void(long pNativeObject, String method);
	native protected void register_getBindedModel_EVString(long pNativeObject, String method);
	native protected void register_getBindedParticleByName_EVString(long pNativeObject, String method);
	native protected void register_getBindedRibbonTrailByName_EVString(long pNativeObject, String method);
	native protected void register_getBindedModelByName_EVString(long pNativeObject, String method);
	native protected void register_getBindedLightByName_EVString(long pNativeObject, String method);
	native protected void register_bindEffectAtBone_CEffect_EVString_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindEffectAtNode_CEffect_EVString_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString(long pNativeObject, String method);
	native protected void register_unBindEffect_CEffect(long pNativeObject, String method);
	native protected void register_unBindLight_CLight(long pNativeObject, String method);
	native protected void register_unBindModel_CModelBaseObject(long pNativeObject, String method);
	native protected void register_getBindedID_void(long pNativeObject, String method);
	native protected void register_setBindedID_ev_uint32(long pNativeObject, String method);
	native protected void register_setBindedEffectVisibility_ev_bool(long pNativeObject, String method);
	native protected void register_updateMaterial_CMaterialPtr_StringVector_StringVector(long pNativeObject, String method);
	native protected void register_setMaterial_ev_uint32_CMaterialPtr(long pNativeObject, String method);
	native protected void register_getMeshPtr_void(long pNativeObject, String method);
	native protected void register_getTexturePtrs_void(long pNativeObject, String method);
	native protected void register_getMaterialPtrs_void(long pNativeObject, String method);
	native protected void register_getGpuPtrs_void(long pNativeObject, String method);
	native protected void register_getMeshFeature_void(long pNativeObject, String method);
	native protected void register_getOrigTextureFeatures_void(long pNativeObject, String method);
	native protected void register_getThumbTextureFeatures_void(long pNativeObject, String method);
	native protected void register_getMaterialFeatures_void(long pNativeObject, String method);
	native protected void register_getAnimationFeatures_void(long pNativeObject, String method);
	native protected void register_getGpuFeatures_void(long pNativeObject, String method);
	native protected void register_getProgramFeatures_void(long pNativeObject, String method);
	native protected void register_getResourceFeature_void(long pNativeObject, String method);
	native protected void register_setSelectionColour_CColourValue(long pNativeObject, String method);
	native protected void register_getSelectionColour_void(long pNativeObject, String method);
	native protected void register_startFlash_CColourValue_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_stopFlash_void(long pNativeObject, String method);
	native protected void register_isSelectable_void(long pNativeObject, String method);
	native protected void register_isSelected_void(long pNativeObject, String method);
	native protected void register_setSelected_ev_bool(long pNativeObject, String method);
	native protected void register_setSubEntitySelected_ev_uint32_ev_bool(long pNativeObject, String method);
	native protected void register_setSubEntitySelected_ev_uint32_ev_int32_ev_bool(long pNativeObject, String method);
	native protected void register_getSubEntitySelected_ev_uint32(long pNativeObject, String method);
	native protected void register_getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32(long pNativeObject, String method);
	native protected void register_getSubMeshName_ev_uint32(long pNativeObject, String method);
	native protected void register_getSubMeshMatrix_ev_uint32(long pNativeObject, String method);
	native protected void register_addNodeListenerForSubMesh_ev_uint32_CNodeListener(long pNativeObject, String method);
	native protected void register_removeNodeListenerForSubMesh_ev_uint32_CNodeListener(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_setEditable_ev_bool(long pNativeObject, String method);
	native protected void register_endEditing_void(long pNativeObject, String method);
	native protected void register_setTransparency_ev_real64(long pNativeObject, String method);
	native protected void register_setTransparency_ev_uint32_ev_real64(long pNativeObject, String method);
	native protected void register_setCastShadows_ev_bool(long pNativeObject, String method);
	native protected void register_setEnvParam_CColourValue_CColourValue_CColourValue(long pNativeObject, String method);
	native protected void register_setReflectable_ev_bool(long pNativeObject, String method);
	native protected void register_getReflectable_void(long pNativeObject, String method);
	native protected void register_setRefractable_ev_bool(long pNativeObject, String method);
	native protected void register_getRefractable_void(long pNativeObject, String method);
	native protected void register_getModelState_void(long pNativeObject, String method);
	native protected void register_getTextureState_void(long pNativeObject, String method);
	native protected void register_needSwitchTexture_void(long pNativeObject, String method);
	native protected void register_switchThumb_TexturePtrVector(long pNativeObject, String method);
	native protected void register_attachThumb_TexturePtrVector(long pNativeObject, String method);
	native protected void register_switchOrig_TexturePtrVector(long pNativeObject, String method);
	native protected void register_attachOrig_TexturePtrVector(long pNativeObject, String method);
	native protected void register_clearTmpTextureStream_TexturePtrVector(long pNativeObject, String method);
	native protected void register_setLoadFromLayer_ev_bool(long pNativeObject, String method);
	native protected void register_getLoadFromLayer_void(long pNativeObject, String method);
	native protected void register_hasFltAnimation_void(long pNativeObject, String method);
	native protected void register_mergeBoundingBoxForNode_void(long pNativeObject, String method);
	native protected void register_prepareForNodeAnimation_void(long pNativeObject, String method);
	native protected void register_resumeNodeAnimationState_void(long pNativeObject, String method);
	native protected void register_startAllNodeAnimation_void(long pNativeObject, String method);
	native protected void register_stopAllNodeAnimation_void(long pNativeObject, String method);
	native protected void register_startAllAnimation_void(long pNativeObject, String method);
	native protected void register_startRangeAnimation_EVString_ev_int32_ev_uint32(long pNativeObject, String method);
	native protected void register_startRangeAnimation_EVString(long pNativeObject, String method);
	native protected void register_startRangeAnimationIndependently_EVString_ev_int32_ev_uint32(long pNativeObject, String method);
	native protected void register_startRangeAnimationIndependently_EVString(long pNativeObject, String method);
	native protected void register_stopRangeAnimation_ev_bool(long pNativeObject, String method);
	native protected void register_stopRangeAnimation_ev_bool_ev_int32(long pNativeObject, String method);
	native protected void register_stopAllAnimation_void(long pNativeObject, String method);
	native protected void register_pauseAllAnimation_void(long pNativeObject, String method);
	native protected void register_continueAllAnimation_void(long pNativeObject, String method);
	native protected void register_setAllAnimationLoop_ev_bool(long pNativeObject, String method);
	native protected void register_startAnimation_EVString(long pNativeObject, String method);
	native protected void register_stopAnimation_EVString(long pNativeObject, String method);
	native protected void register_stopAnimation_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_pauseAnimation_EVString(long pNativeObject, String method);
	native protected void register_pauseAnimation_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_continueAnimation_EVString(long pNativeObject, String method);
	native protected void register_continueAnimation_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_setAnimationLoop_EVString_bool(long pNativeObject, String method);
	native protected void register_setAnimationLoop_EVString_bool_ev_bool(long pNativeObject, String method);
	native protected void register_createLocalAxisNode_void(long pNativeObject, String method);
	native protected void register_createLocalAxisNode_EVString(long pNativeObject, String method);
	native protected void register_getLocalAxisNode_void(long pNativeObject, String method);
	native protected void register_destroyLocalAxisNode_void(long pNativeObject, String method);
	native protected void register_getBoneNode_EVString(long pNativeObject, String method);
	native protected void register_updateSkeletonAnimationVertex_void(long pNativeObject, String method);
	native protected void register_initializeAnimation_void(long pNativeObject, String method);
	native protected void register_initializeModelAnimation_void(long pNativeObject, String method);
	native protected void register_initializeNodeAnimation_void(long pNativeObject, String method);
	native protected void register_setComponentVisible_CComponent_ev_bool(long pNativeObject, String method);
	native protected void register_setComponentHighlight_CComponent_ev_bool(long pNativeObject, String method);
	native protected void register_setComponentTransparency_CComponent_ev_real32(long pNativeObject, String method);
	native protected void register_getNode_void(long pNativeObject, String method);
	native protected void register_isLoaded_void(long pNativeObject, String method);
	native protected void register_isAttached_void(long pNativeObject, String method);
	native protected void register_load_void(long pNativeObject, String method);
	native protected void register_unload_void(long pNativeObject, String method);
	native protected void register_attachToNode_CNode(long pNativeObject, String method);
	native protected void register_detachFromNode_void(long pNativeObject, String method);
	native protected void register_attachToScene_void(long pNativeObject, String method);
	native protected void register_detachFromScene_void(long pNativeObject, String method);
	native protected void register_setUserData_CFeatureUserData(long pNativeObject, String method);
	native protected void register_setSelectable_ev_bool(long pNativeObject, String method);
	native protected void register_getSelectable_void(long pNativeObject, String method);
	native protected void register_update_void(long pNativeObject, String method);
	native protected void register_getLayer_void(long pNativeObject, String method);
	native protected void register_getDataset_void(long pNativeObject, String method);
	native protected void register_getID_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_getMatrix_void(long pNativeObject, String method);
	native protected void register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_load_IntVector(this.nativeObject.pointer, "load_IntVector_callback");
			this.register_setLocalMatrix_CMatrix4(this.nativeObject.pointer, "setLocalMatrix_CMatrix4_callback");
			this.register_getLocalMatrix_void(this.nativeObject.pointer, "getLocalMatrix_void_callback");
			this.register_getModelDBTransform_CVector3_CVector3_CQuaternion(this.nativeObject.pointer, "getModelDBTransform_CVector3_CVector3_CQuaternion_callback");
			this.register_getFile_void(this.nativeObject.pointer, "getFile_void_callback");
			this.register_isFileDirAsGroup_void(this.nativeObject.pointer, "isFileDirAsGroup_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getSceneManager_void(this.nativeObject.pointer, "getSceneManager_void_callback");
			this.register_getWorldAABB_void(this.nativeObject.pointer, "getWorldAABB_void_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_setVisible_ev_bool_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_ev_bool_callback");
			this.register_setSubEntityVisibility_ev_uint32_ev_bool(this.nativeObject.pointer, "setSubEntityVisibility_ev_uint32_ev_bool_callback");
			this.register_setSubEntityVisibility_ev_uint32_ev_bool_ev_bool(this.nativeObject.pointer, "setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_callback");
			this.register_getSubEntityVisibility_ev_uint32(this.nativeObject.pointer, "getSubEntityVisibility_ev_uint32_callback");
			this.register_setRenderingMaxDistance_ev_real64(this.nativeObject.pointer, "setRenderingMaxDistance_ev_real64_callback");
			this.register_getRenderingMaxDistance_void(this.nativeObject.pointer, "getRenderingMaxDistance_void_callback");
			this.register_setRenderingMinDistance_ev_real64(this.nativeObject.pointer, "setRenderingMinDistance_ev_real64_callback");
			this.register_getRenderingMinDistance_void(this.nativeObject.pointer, "getRenderingMinDistance_void_callback");
			this.register_calculateSubEntityIndex_ev_uint16_ev_uint32(this.nativeObject.pointer, "calculateSubEntityIndex_ev_uint16_ev_uint32_callback");
			this.register_calculateInstanceIndex_ev_uint32_ev_int16_ev_int32(this.nativeObject.pointer, "calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_callback");
			this.register_getNumSubEntities_void(this.nativeObject.pointer, "getNumSubEntities_void_callback");
			this.register_getAliasName_void(this.nativeObject.pointer, "getAliasName_void_callback");
			this.register_getBindedState_void(this.nativeObject.pointer, "getBindedState_void_callback");
			this.register_getAllBindedEffect_void(this.nativeObject.pointer, "getAllBindedEffect_void_callback");
			this.register_getAllBindedLight_void(this.nativeObject.pointer, "getAllBindedLight_void_callback");
			this.register_getBindedEffect_ev_uint32(this.nativeObject.pointer, "getBindedEffect_ev_uint32_callback");
			this.register_getBindedLight_ev_uint32(this.nativeObject.pointer, "getBindedLight_ev_uint32_callback");
			this.register_getBindedParticle_ev_uint32(this.nativeObject.pointer, "getBindedParticle_ev_uint32_callback");
			this.register_getBindedRibbonTrail_ev_uint32(this.nativeObject.pointer, "getBindedRibbonTrail_ev_uint32_callback");
			this.register_getBindedEffect_EVString(this.nativeObject.pointer, "getBindedEffect_EVString_callback");
			this.register_getBindedEffectByNodeName_EVString(this.nativeObject.pointer, "getBindedEffectByNodeName_EVString_callback");
			this.register_getBindedParticle_EVString(this.nativeObject.pointer, "getBindedParticle_EVString_callback");
			this.register_getBindedRibbonTrail_EVString(this.nativeObject.pointer, "getBindedRibbonTrail_EVString_callback");
			this.register_getBindedRibbonTrailByNodeName_EVString(this.nativeObject.pointer, "getBindedRibbonTrailByNodeName_EVString_callback");
			this.register_getAllBindedModel_void(this.nativeObject.pointer, "getAllBindedModel_void_callback");
			this.register_getBindedModel_ev_uint32(this.nativeObject.pointer, "getBindedModel_ev_uint32_callback");
			this.register_getBindedModelByNodeName_EVString(this.nativeObject.pointer, "getBindedModelByNodeName_EVString_callback");
			this.register_getComponentByName_EVString(this.nativeObject.pointer, "getComponentByName_EVString_callback");
			this.register_getComponentBySubEntityIndex_ev_uint32(this.nativeObject.pointer, "getComponentBySubEntityIndex_ev_uint32_callback");
			this.register_getParentComponentByName_EVString(this.nativeObject.pointer, "getParentComponentByName_EVString_callback");
			this.register_getRootComponent_void(this.nativeObject.pointer, "getRootComponent_void_callback");
			this.register_getBindedModel_EVString(this.nativeObject.pointer, "getBindedModel_EVString_callback");
			this.register_getBindedParticleByName_EVString(this.nativeObject.pointer, "getBindedParticleByName_EVString_callback");
			this.register_getBindedRibbonTrailByName_EVString(this.nativeObject.pointer, "getBindedRibbonTrailByName_EVString_callback");
			this.register_getBindedModelByName_EVString(this.nativeObject.pointer, "getBindedModelByName_EVString_callback");
			this.register_getBindedLightByName_EVString(this.nativeObject.pointer, "getBindedLightByName_EVString_callback");
			this.register_bindEffectAtBone_CEffect_EVString_CMatrix4_EVString(this.nativeObject.pointer, "bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_callback");
			this.register_bindEffectAtNode_CEffect_EVString_CMatrix4_EVString(this.nativeObject.pointer, "bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_callback");
			this.register_bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString(this.nativeObject.pointer, "bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_callback");
			this.register_bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString(this.nativeObject.pointer, "bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_callback");
			this.register_bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString(this.nativeObject.pointer, "bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_callback");
			this.register_bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString(this.nativeObject.pointer, "bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_callback");
			this.register_bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString(this.nativeObject.pointer, "bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_callback");
			this.register_unBindEffect_CEffect(this.nativeObject.pointer, "unBindEffect_CEffect_callback");
			this.register_unBindLight_CLight(this.nativeObject.pointer, "unBindLight_CLight_callback");
			this.register_unBindModel_CModelBaseObject(this.nativeObject.pointer, "unBindModel_CModelBaseObject_callback");
			this.register_getBindedID_void(this.nativeObject.pointer, "getBindedID_void_callback");
			this.register_setBindedID_ev_uint32(this.nativeObject.pointer, "setBindedID_ev_uint32_callback");
			this.register_setBindedEffectVisibility_ev_bool(this.nativeObject.pointer, "setBindedEffectVisibility_ev_bool_callback");
			this.register_updateMaterial_CMaterialPtr_StringVector_StringVector(this.nativeObject.pointer, "updateMaterial_CMaterialPtr_StringVector_StringVector_callback");
			this.register_setMaterial_ev_uint32_CMaterialPtr(this.nativeObject.pointer, "setMaterial_ev_uint32_CMaterialPtr_callback");
			this.register_getMeshPtr_void(this.nativeObject.pointer, "getMeshPtr_void_callback");
			this.register_getTexturePtrs_void(this.nativeObject.pointer, "getTexturePtrs_void_callback");
			this.register_getMaterialPtrs_void(this.nativeObject.pointer, "getMaterialPtrs_void_callback");
			this.register_getGpuPtrs_void(this.nativeObject.pointer, "getGpuPtrs_void_callback");
			this.register_getMeshFeature_void(this.nativeObject.pointer, "getMeshFeature_void_callback");
			this.register_getOrigTextureFeatures_void(this.nativeObject.pointer, "getOrigTextureFeatures_void_callback");
			this.register_getThumbTextureFeatures_void(this.nativeObject.pointer, "getThumbTextureFeatures_void_callback");
			this.register_getMaterialFeatures_void(this.nativeObject.pointer, "getMaterialFeatures_void_callback");
			this.register_getAnimationFeatures_void(this.nativeObject.pointer, "getAnimationFeatures_void_callback");
			this.register_getGpuFeatures_void(this.nativeObject.pointer, "getGpuFeatures_void_callback");
			this.register_getProgramFeatures_void(this.nativeObject.pointer, "getProgramFeatures_void_callback");
			this.register_getResourceFeature_void(this.nativeObject.pointer, "getResourceFeature_void_callback");
			this.register_setSelectionColour_CColourValue(this.nativeObject.pointer, "setSelectionColour_CColourValue_callback");
			this.register_getSelectionColour_void(this.nativeObject.pointer, "getSelectionColour_void_callback");
			this.register_startFlash_CColourValue_ev_uint32_ev_uint32(this.nativeObject.pointer, "startFlash_CColourValue_ev_uint32_ev_uint32_callback");
			this.register_stopFlash_void(this.nativeObject.pointer, "stopFlash_void_callback");
			this.register_isSelectable_void(this.nativeObject.pointer, "isSelectable_void_callback");
			this.register_isSelected_void(this.nativeObject.pointer, "isSelected_void_callback");
			this.register_setSelected_ev_bool(this.nativeObject.pointer, "setSelected_ev_bool_callback");
			this.register_setSubEntitySelected_ev_uint32_ev_bool(this.nativeObject.pointer, "setSubEntitySelected_ev_uint32_ev_bool_callback");
			this.register_setSubEntitySelected_ev_uint32_ev_int32_ev_bool(this.nativeObject.pointer, "setSubEntitySelected_ev_uint32_ev_int32_ev_bool_callback");
			this.register_getSubEntitySelected_ev_uint32(this.nativeObject.pointer, "getSubEntitySelected_ev_uint32_callback");
			this.register_getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32(this.nativeObject.pointer, "getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_callback");
			this.register_getSubMeshName_ev_uint32(this.nativeObject.pointer, "getSubMeshName_ev_uint32_callback");
			this.register_getSubMeshMatrix_ev_uint32(this.nativeObject.pointer, "getSubMeshMatrix_ev_uint32_callback");
			this.register_addNodeListenerForSubMesh_ev_uint32_CNodeListener(this.nativeObject.pointer, "addNodeListenerForSubMesh_ev_uint32_CNodeListener_callback");
			this.register_removeNodeListenerForSubMesh_ev_uint32_CNodeListener(this.nativeObject.pointer, "removeNodeListenerForSubMesh_ev_uint32_CNodeListener_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_setEditable_ev_bool(this.nativeObject.pointer, "setEditable_ev_bool_callback");
			this.register_endEditing_void(this.nativeObject.pointer, "endEditing_void_callback");
			this.register_setTransparency_ev_real64(this.nativeObject.pointer, "setTransparency_ev_real64_callback");
			this.register_setTransparency_ev_uint32_ev_real64(this.nativeObject.pointer, "setTransparency_ev_uint32_ev_real64_callback");
			this.register_setCastShadows_ev_bool(this.nativeObject.pointer, "setCastShadows_ev_bool_callback");
			this.register_setEnvParam_CColourValue_CColourValue_CColourValue(this.nativeObject.pointer, "setEnvParam_CColourValue_CColourValue_CColourValue_callback");
			this.register_setReflectable_ev_bool(this.nativeObject.pointer, "setReflectable_ev_bool_callback");
			this.register_getReflectable_void(this.nativeObject.pointer, "getReflectable_void_callback");
			this.register_setRefractable_ev_bool(this.nativeObject.pointer, "setRefractable_ev_bool_callback");
			this.register_getRefractable_void(this.nativeObject.pointer, "getRefractable_void_callback");
			this.register_getModelState_void(this.nativeObject.pointer, "getModelState_void_callback");
			this.register_getTextureState_void(this.nativeObject.pointer, "getTextureState_void_callback");
			this.register_needSwitchTexture_void(this.nativeObject.pointer, "needSwitchTexture_void_callback");
			this.register_switchThumb_TexturePtrVector(this.nativeObject.pointer, "switchThumb_TexturePtrVector_callback");
			this.register_attachThumb_TexturePtrVector(this.nativeObject.pointer, "attachThumb_TexturePtrVector_callback");
			this.register_switchOrig_TexturePtrVector(this.nativeObject.pointer, "switchOrig_TexturePtrVector_callback");
			this.register_attachOrig_TexturePtrVector(this.nativeObject.pointer, "attachOrig_TexturePtrVector_callback");
			this.register_clearTmpTextureStream_TexturePtrVector(this.nativeObject.pointer, "clearTmpTextureStream_TexturePtrVector_callback");
			this.register_setLoadFromLayer_ev_bool(this.nativeObject.pointer, "setLoadFromLayer_ev_bool_callback");
			this.register_getLoadFromLayer_void(this.nativeObject.pointer, "getLoadFromLayer_void_callback");
			this.register_hasFltAnimation_void(this.nativeObject.pointer, "hasFltAnimation_void_callback");
			this.register_mergeBoundingBoxForNode_void(this.nativeObject.pointer, "mergeBoundingBoxForNode_void_callback");
			this.register_prepareForNodeAnimation_void(this.nativeObject.pointer, "prepareForNodeAnimation_void_callback");
			this.register_resumeNodeAnimationState_void(this.nativeObject.pointer, "resumeNodeAnimationState_void_callback");
			this.register_startAllNodeAnimation_void(this.nativeObject.pointer, "startAllNodeAnimation_void_callback");
			this.register_stopAllNodeAnimation_void(this.nativeObject.pointer, "stopAllNodeAnimation_void_callback");
			this.register_startAllAnimation_void(this.nativeObject.pointer, "startAllAnimation_void_callback");
			this.register_startRangeAnimation_EVString_ev_int32_ev_uint32(this.nativeObject.pointer, "startRangeAnimation_EVString_ev_int32_ev_uint32_callback");
			this.register_startRangeAnimation_EVString(this.nativeObject.pointer, "startRangeAnimation_EVString_callback");
			this.register_startRangeAnimationIndependently_EVString_ev_int32_ev_uint32(this.nativeObject.pointer, "startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_callback");
			this.register_startRangeAnimationIndependently_EVString(this.nativeObject.pointer, "startRangeAnimationIndependently_EVString_callback");
			this.register_stopRangeAnimation_ev_bool(this.nativeObject.pointer, "stopRangeAnimation_ev_bool_callback");
			this.register_stopRangeAnimation_ev_bool_ev_int32(this.nativeObject.pointer, "stopRangeAnimation_ev_bool_ev_int32_callback");
			this.register_stopAllAnimation_void(this.nativeObject.pointer, "stopAllAnimation_void_callback");
			this.register_pauseAllAnimation_void(this.nativeObject.pointer, "pauseAllAnimation_void_callback");
			this.register_continueAllAnimation_void(this.nativeObject.pointer, "continueAllAnimation_void_callback");
			this.register_setAllAnimationLoop_ev_bool(this.nativeObject.pointer, "setAllAnimationLoop_ev_bool_callback");
			this.register_startAnimation_EVString(this.nativeObject.pointer, "startAnimation_EVString_callback");
			this.register_stopAnimation_EVString(this.nativeObject.pointer, "stopAnimation_EVString_callback");
			this.register_stopAnimation_EVString_ev_bool(this.nativeObject.pointer, "stopAnimation_EVString_ev_bool_callback");
			this.register_pauseAnimation_EVString(this.nativeObject.pointer, "pauseAnimation_EVString_callback");
			this.register_pauseAnimation_EVString_ev_bool(this.nativeObject.pointer, "pauseAnimation_EVString_ev_bool_callback");
			this.register_continueAnimation_EVString(this.nativeObject.pointer, "continueAnimation_EVString_callback");
			this.register_continueAnimation_EVString_ev_bool(this.nativeObject.pointer, "continueAnimation_EVString_ev_bool_callback");
			this.register_setAnimationLoop_EVString_bool(this.nativeObject.pointer, "setAnimationLoop_EVString_bool_callback");
			this.register_setAnimationLoop_EVString_bool_ev_bool(this.nativeObject.pointer, "setAnimationLoop_EVString_bool_ev_bool_callback");
			this.register_createLocalAxisNode_void(this.nativeObject.pointer, "createLocalAxisNode_void_callback");
			this.register_createLocalAxisNode_EVString(this.nativeObject.pointer, "createLocalAxisNode_EVString_callback");
			this.register_getLocalAxisNode_void(this.nativeObject.pointer, "getLocalAxisNode_void_callback");
			this.register_destroyLocalAxisNode_void(this.nativeObject.pointer, "destroyLocalAxisNode_void_callback");
			this.register_getBoneNode_EVString(this.nativeObject.pointer, "getBoneNode_EVString_callback");
			this.register_updateSkeletonAnimationVertex_void(this.nativeObject.pointer, "updateSkeletonAnimationVertex_void_callback");
			this.register_initializeAnimation_void(this.nativeObject.pointer, "initializeAnimation_void_callback");
			this.register_initializeModelAnimation_void(this.nativeObject.pointer, "initializeModelAnimation_void_callback");
			this.register_initializeNodeAnimation_void(this.nativeObject.pointer, "initializeNodeAnimation_void_callback");
			this.register_setComponentVisible_CComponent_ev_bool(this.nativeObject.pointer, "setComponentVisible_CComponent_ev_bool_callback");
			this.register_setComponentHighlight_CComponent_ev_bool(this.nativeObject.pointer, "setComponentHighlight_CComponent_ev_bool_callback");
			this.register_setComponentTransparency_CComponent_ev_real32(this.nativeObject.pointer, "setComponentTransparency_CComponent_ev_real32_callback");
			this.register_getNode_void(this.nativeObject.pointer, "getNode_void_callback");
			this.register_isLoaded_void(this.nativeObject.pointer, "isLoaded_void_callback");
			this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
			this.register_load_void(this.nativeObject.pointer, "load_void_callback");
			this.register_unload_void(this.nativeObject.pointer, "unload_void_callback");
			this.register_attachToNode_CNode(this.nativeObject.pointer, "attachToNode_CNode_callback");
			this.register_detachFromNode_void(this.nativeObject.pointer, "detachFromNode_void_callback");
			this.register_attachToScene_void(this.nativeObject.pointer, "attachToScene_void_callback");
			this.register_detachFromScene_void(this.nativeObject.pointer, "detachFromScene_void_callback");
			this.register_setUserData_CFeatureUserData(this.nativeObject.pointer, "setUserData_CFeatureUserData_callback");
			this.register_setSelectable_ev_bool(this.nativeObject.pointer, "setSelectable_ev_bool_callback");
			this.register_getSelectable_void(this.nativeObject.pointer, "getSelectable_void_callback");
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
			this.register_getLayer_void(this.nativeObject.pointer, "getLayer_void_callback");
			this.register_getDataset_void(this.nativeObject.pointer, "getDataset_void_callback");
			this.register_getID_void(this.nativeObject.pointer, "getID_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setMatrix_CMatrix4(this.nativeObject.pointer, "setMatrix_CMatrix4_callback");
			this.register_getMatrix_void(this.nativeObject.pointer, "getMatrix_void_callback");
			this.register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, "setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
			this.register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.nativeObject.pointer, "getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
		}
	}
	
	public static ModelBaseObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelBaseObject obj = null;
 		if(baseObj instanceof ModelBaseObject)
		{
			obj = (ModelBaseObject)baseObj;
		} else {
			obj = new ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelBaseObject");
			obj.increaseCast();
		}

		return obj;
	}
}
