package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 几何体扩展类负责几何体(立方体，椎体，半球体)的渲染,材质资源放置在资源组：DEFAULT_RESOURCE_GROUP_NAME
 */
public class Geometry3DEx extends com.earthview.world.geometry3d.VisibleObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CGeometry3DEx", new Geometry3DExClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCGeometry3DExProxy", new Geometry3DExClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Geometry3DEx(com.earthview.world.spatial.kml.GeoObjectExtension geoObj, com.earthview.world.graphic.SceneManager scenemanager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer geoObjPtr = new BasePointer(geoObj);
		list.add("geoObj", geoObjPtr.get());
		BasePointer scenemanagerPtr = new BasePointer(scenemanager);
		list.add("scenemanager", scenemanagerPtr.get());
		Create("JCGeometry3DExProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.Geometry3DEx".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getNode_void(long pNativeObject);
	/**
	 * 获取节点
	 * @return true成功，false失败
	 */
	public com.earthview.world.graphic.Node getNode()
	{
		long returnValue = getNode_void(this.nativeObject.pointer);
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
	native private long getNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node getNode_NoVirtual()
	{
		long returnValue = getNode_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setSelectable_ev_bool(long pNativeObject, boolean selectable);
	public void setSelectable(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool(this.nativeObject.pointer, selectableParamValue);
	}
	native private void setSelectable_ev_bool_NoVirtual(long pNativeObject, boolean selectable);
	protected void setSelectable_NoVirtual(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool_NoVirtual(this.nativeObject.pointer, selectableParamValue);
	}

	native private boolean update_void(long pNativeObject);
	public boolean update()
	{
		boolean returnValue = update_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean update_void_NoVirtual(long pNativeObject);
	protected boolean update_NoVirtual()
	{
		boolean returnValue = update_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isLoaded_void(long pNativeObject);
	/**
	 * 是否完成加载，需要重写
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
	 * 是否完成挂接，需要重写
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

	native private boolean load_void(long pNativeObject);
	/**
	 * 加载资源，需要重写
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

	native private boolean unload_void(long pNativeObject);
	/**
	 * 卸载模型资源，需要重写
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

	native private boolean attachToNode_CNode(long pNativeObject, long n);
	/**
	 * 挂接渲染，需要重写
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
	 * 反挂接，需要重写
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

	native private boolean attachToScene_void(long pNativeObject);
	public boolean attachToScene()
	{
		boolean returnValue = attachToScene_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean attachToScene_void_NoVirtual(long pNativeObject);
	protected boolean attachToScene_NoVirtual()
	{
		boolean returnValue = attachToScene_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean detachFromScene_void(long pNativeObject);
	public boolean detachFromScene()
	{
		boolean returnValue = detachFromScene_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean detachFromScene_void_NoVirtual(long pNativeObject);
	protected boolean detachFromScene_NoVirtual()
	{
		boolean returnValue = detachFromScene_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void startEdit_void(long pNativeObject);
	/**
	 * 开始编辑
	 */
	public void startEdit()
	{
		startEdit_void(this.nativeObject.pointer);
	}
	native private void endEdit_void(long pNativeObject);
	/**
	 * 结束编辑
	 */
	public void endEdit()
	{
		endEdit_void(this.nativeObject.pointer);
	}
	native private void refreshPosition_CVector3_CVector3_CQuaternion(long pNativeObject, long pos, long scale, long qua);
	/**
	 * 更新对象的位置信息
	 * @param pos 位置
	 * @param scale 缩放
	 * @param qua 旋转
	 */
	public void refreshPosition(com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		long posParamValue = pos.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long quaParamValue = qua.nativeObject.pointer;
		refreshPosition_CVector3_CVector3_CQuaternion(this.nativeObject.pointer, posParamValue, scaleParamValue, quaParamValue);
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean b);
	/**
	 * 可见性设置
	 * @param b 可见性
	 */
	public void setVisible(boolean b)
	{
		boolean bParamValue = b;
		setVisible_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private boolean getVisible_void(long pNativeObject);
	/**
	 * 可见性获取
	 * @param b 可见性
	 */
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMaxnum_void(long pNativeObject);
	/**
	 * 获取世界包围盒最大
	 * @return 世界包围盒最大
	 */
	public com.earthview.world.spatial.math.Vector3 getMaxnum()
	{
		long returnValue = getMaxnum_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getMinnum_void(long pNativeObject);
	/**
	 * 获取世界包围盒最小
	 * @return 世界包围盒最小
	 */
	public com.earthview.world.spatial.math.Vector3 getMinnum()
	{
		long returnValue = getMinnum_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getVectorMovableObj_void(long pNativeObject);
	/**
	 * 获取可移动对象
	 * @return 可移动对象
	 */
	public com.earthview.world.graphic.MovableObject getVectorMovableObj()
	{
		long returnValue = getVectorMovableObj_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	native private void updateLocation_CGeoObjectExtension(long pNativeObject, long geoObj);
	/**
	 * 更新位置，重新build会改变节点的位置，所以需要重新获取位置信息
	 */
	public void updateLocation(com.earthview.world.spatial.kml.GeoObjectExtension geoObj)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		updateLocation_CGeoObjectExtension(this.nativeObject.pointer, geoObjParamValue);
	}
	native private void refreshPosition_void(long pNativeObject);
	/**
	 * 刷新位置，高程变换的时候调用
	 */
	public void refreshPosition()
	{
		refreshPosition_void(this.nativeObject.pointer);
	}
	native private void refreshMaterialRef_void(long pNativeObject);
	/**
	 * 刷新材质
	 */
	public void refreshMaterialRef()
	{
		refreshMaterialRef_void(this.nativeObject.pointer);
	}
	native private void setUserData_CFeatureUserData(long pNativeObject, long userData);
	/**
	 * 设置用户数据
	 * @param userData 用户数据
	 */
	public void setUserData(com.earthview.world.spatial3d.FeatureUserData userData)
	{
		long userDataParamValue = userData.nativeObject.pointer;
		setUserData_CFeatureUserData(this.nativeObject.pointer, userDataParamValue);
	}
	native private void setUserData_CFeatureUserData_NoVirtual(long pNativeObject, long userData);
	protected void setUserData_NoVirtual(com.earthview.world.spatial3d.FeatureUserData userData)
	{
		long userDataParamValue = userData.nativeObject.pointer;
		setUserData_CFeatureUserData_NoVirtual(this.nativeObject.pointer, userDataParamValue);
	}

	native private long getUserData_void(long pNativeObject);
	/**
	 * 返回用户数据
	 * @param  
	 * @return 用户数据
	 */
	public com.earthview.world.spatial3d.FeatureUserData getUserData()
	{
		long returnValue = getUserData_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.FeatureUserData __returnValue = new com.earthview.world.spatial3d.FeatureUserData(CreatedWhenConstruct.CWC_NotToCreate, "CFeatureUserData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.FeatureUserData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFeatureUserData");
		}
		return __returnValue;
	}
	public Geometry3DEx(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Geometry3DEx(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean getSelectable()
	{
		return super.getSelectable_NoVirtual();
	}
	/**
	 * 获取可见对象所在图层
	 * @return 图层对象
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer getLayer()
	{
		return super.getLayer_NoVirtual();
	}
	/**
	 * 获取可见对象所在数据集
	 * @return 数据集对象
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		return super.getDataset_NoVirtual();
	}
	/**
	 * 获取可见对象id
	 * @return id
	 */
	public long getID()
	{
		return super.getID_NoVirtual();
	}
	/**
	 * 获取可见对象名称
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置可见对象矩阵
	 * @param m 矩阵4元数
	 */
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 m)
	{
		super.setMatrix_NoVirtual(m);
	}
	/**
	 * 获取可见对象矩阵
	 * @return 矩阵4元数
	 */
	public com.earthview.world.spatial.math.Matrix4 getMatrix()
	{
		return super.getMatrix_NoVirtual();
	}
	/**
	 * 设置可见对象位置信息
	 * @param latitude 高度
	 * @param longitude 经度
	 * @param altitude 纬度
	 * @param scale 缩放
	 * @param qua 旋转
	 */
	public void setPosition(double latitude, double longitude, double altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		super.setPosition_NoVirtual(latitude, longitude, altitude, scale, qua);
	}
	/**
	 * 获取可见对象位置信息
	 * @param latitude 高度
	 * @param longitude 经度
	 * @param altitude 纬度
	 * @param scale 缩放
	 * @param qua 旋转
	 */
	public void getPosition(DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion qua)
	{
		super.getPosition_NoVirtual(latitude, longitude, altitude, scale, qua);
	}
	
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
	
	public static Geometry3DEx fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Geometry3DEx obj = null;
 		if(baseObj instanceof Geometry3DEx)
		{
			obj = (Geometry3DEx)baseObj;
		} else {
			obj = new Geometry3DEx(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeometry3DEx");
			obj.increaseCast();
		}

		return obj;
	}
}
