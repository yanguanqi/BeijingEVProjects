package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 线类型的地理对象扩展到三维类管理面线型的地理对象扩展到三维类方法
 */
public class KmlPolygon extends com.earthview.world.geometry3d.GeoPolygonEx {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CKmlPolygon", new KmlPolygonClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCKmlPolygonProxy", new KmlPolygonClassFactory());
	}

	/**
	 * 构造函数
	 * @param scenemanager 场景管理器
	 * @param groupName 资源组名称
	 */
	public KmlPolygon(com.earthview.world.spatial.kml.GeoObjectExtension ref_geo, com.earthview.world.graphic.SceneManager ref_scenemanager, String groupName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_geoPtr = new BasePointer(ref_geo);
		list.add("ref_geo", ref_geoPtr.get());
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		BasePointer groupNamePtr = new BasePointer(groupName);
		list.add("groupName", groupNamePtr.get());
		Create("JCKmlPolygonProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.KmlPolygon".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean load_void(long pNativeObject);
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

	public KmlPolygon(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlPolygon(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 构建
	 * @param  
	 */
	public void build()
	{
		super.build_NoVirtual();
	}
	/**
	 * 添加一个要素
	 * @param layer 二维图层
	 */
	public boolean appendGeoObject(com.earthview.world.spatial.GeoObject ref_geoObject)
	{
		return super.appendGeoObject_NoVirtual(ref_geoObject);
	}
	/**
	 * 删除二维图形
	 * @param geometry 二维图形
	 */
	public boolean removeGeoObject(com.earthview.world.spatial.GeoObject geoObject)
	{
		return super.removeGeoObject_NoVirtual(geoObject);
	}
	/**
	 * 删除所有二维图形
	 * @param  
	 */
	public void removeAllGeoObjects()
	{
		super.removeAllGeoObjects_NoVirtual();
	}
	/**
	 * 获得二维图形指针
	 * @param index 二维图形索引
	 * @return 二维图形
	 */
	public com.earthview.world.spatial.GeoObject getGeoObject(long index)
	{
		return super.getGeoObject_NoVirtual(index);
	}
	/**
	 * 获得三维实体数量
	 * @param  
	 * @return 二维图形数量
	 */
	public ULongPointer getGeoObjectCount()
	{
		return super.getGeoObjectCount_NoVirtual();
	}
	/**
	 * 挂接三维模型
	 * @param  
	 */
	public void render()
	{
		super.render_NoVirtual();
	}
	/**
	 * 反挂接三维模型
	 * @param  
	 */
	public void derender()
	{
		super.derender_NoVirtual();
	}
	/**
	 * 是否已经挂接渲染
	 * @param  
	 * @return 是否已经挂接渲染
	 */
	public boolean isRendering()
	{
		return super.isRendering_NoVirtual();
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
	 * 是否完成加载，需要重写
	 * @return true成功，false失败
	 */
	public boolean isLoaded()
	{
		return super.isLoaded_NoVirtual();
	}
	/**
	 * 是否完成挂接，需要重写
	 * @return true成功，false失败
	 */
	public boolean isAttached()
	{
		return super.isAttached_NoVirtual();
	}
	/**
	 * 卸载模型资源，需要重写
	 * @return true成功，false失败
	 */
	public boolean unload()
	{
		return super.unload_NoVirtual();
	}
	/**
	 * 挂接渲染，需要重写
	 * @return true成功，false失败
	 */
	public boolean attachToNode(com.earthview.world.graphic.Node n)
	{
		return super.attachToNode_NoVirtual(n);
	}
	/**
	 * 反挂接，需要重写
	 * @return 成功返回被反挂接的父节点，失败返回NULL
	 */
	public com.earthview.world.graphic.Node detachFromNode()
	{
		return super.detachFromNode_NoVirtual();
	}
	/**
	 * 设置用户数据
	 * @param userData 用户数据
	 */
	public void setUserData(com.earthview.world.spatial3d.FeatureUserData userData)
	{
		super.setUserData_NoVirtual(userData);
	}
	public void setSelectable(boolean selectable)
	{
		super.setSelectable_NoVirtual(selectable);
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
	
	native protected void register_build_void(long pNativeObject, String method);
	native protected void register_appendGeoObject_CGeoObject(long pNativeObject, String method);
	native protected void register_removeGeoObject_CGeoObject(long pNativeObject, String method);
	native protected void register_removeAllGeoObjects_void(long pNativeObject, String method);
	native protected void register_getGeoObject_ev_uint32(long pNativeObject, String method);
	native protected void register_getGeoObjectCount_void(long pNativeObject, String method);
	native protected void register_render_void(long pNativeObject, String method);
	native protected void register_derender_void(long pNativeObject, String method);
	native protected void register_isRendering_void(long pNativeObject, String method);
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
			this.register_build_void(this.nativeObject.pointer, "build_void_callback");
			this.register_appendGeoObject_CGeoObject(this.nativeObject.pointer, "appendGeoObject_CGeoObject_callback");
			this.register_removeGeoObject_CGeoObject(this.nativeObject.pointer, "removeGeoObject_CGeoObject_callback");
			this.register_removeAllGeoObjects_void(this.nativeObject.pointer, "removeAllGeoObjects_void_callback");
			this.register_getGeoObject_ev_uint32(this.nativeObject.pointer, "getGeoObject_ev_uint32_callback");
			this.register_getGeoObjectCount_void(this.nativeObject.pointer, "getGeoObjectCount_void_callback");
			this.register_render_void(this.nativeObject.pointer, "render_void_callback");
			this.register_derender_void(this.nativeObject.pointer, "derender_void_callback");
			this.register_isRendering_void(this.nativeObject.pointer, "isRendering_void_callback");
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
	
	public static KmlPolygon fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlPolygon obj = null;
 		if(baseObj instanceof KmlPolygon)
		{
			obj = (KmlPolygon)baseObj;
		} else {
			obj = new KmlPolygon(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlPolygon");
			obj.increaseCast();
		}

		return obj;
	}
}
