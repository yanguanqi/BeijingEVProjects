package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 线类型的地理对象扩展到三维类管理面线型的地理对象扩展到三维类方法
 */
public class KmlPolyline extends com.earthview.world.geometry3d.MultiPolyline3DExtension {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CKmlPolyline", new KmlPolylineClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCKmlPolylineProxy", new KmlPolylineClassFactory());
	}

	/**
	 * 构造函数
	 * @param scenemanager 场景管理器
	 * @param groupName 资源组名称
	 */
	public KmlPolyline(com.earthview.world.spatial.kml.GeoObjectExtension ref_geo, com.earthview.world.graphic.SceneManager ref_scenemanager, String groupName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_geoPtr = new BasePointer(ref_geo);
		list.add("ref_geo", ref_geoPtr.get());
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		BasePointer groupNamePtr = new BasePointer(groupName);
		list.add("groupName", groupNamePtr.get());
		Create("JCKmlPolylineProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.KmlPolyline".equals(this.getClass().getName()))
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

	native private boolean attachToScene_void(long pNativeObject);
	/**
	 * 直接挂到场景，******选择重写******
	 * @return true成功，false失败
	 */
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
	/**
	 * 从场景反挂接，******选择重写******
	 * @return true成功，false失败
	 */
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

	public KmlPolyline(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlPolyline(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取mesh
	 * @param  
	 * @return mesh
	 */
	public com.earthview.world.graphic.MeshPtr getMesh()
	{
		return super.getMesh_NoVirtual();
	}
	/**
	 * 增加地理对象
	 * @param ref_geoObject 地理对象
	 */
	public boolean appendGeoObject(com.earthview.world.spatial.GeoObject ref_geoObject)
	{
		return super.appendGeoObject_NoVirtual(ref_geoObject);
	}
	/**
	 * 删除地理对象
	 * @param geoObject 地理对象
	 */
	public boolean removeGeoObject(com.earthview.world.spatial.GeoObject geoObject)
	{
		return super.removeGeoObject_NoVirtual(geoObject);
	}
	/**
	 * 删除所有地理对象
	 * @param  
	 */
	public void removeAllGeoObjects()
	{
		super.removeAllGeoObjects_NoVirtual();
	}
	/**
	 * 获得地理对象
	 * @param index 地理对象索引
	 * @return 地理对象
	 */
	public com.earthview.world.spatial.GeoObject getGeoObject(long index)
	{
		return super.getGeoObject_NoVirtual(index);
	}
	/**
	 * 获得地理对象数量
	 * @param  
	 * @return 地理对象数量
	 */
	public ULongPointer getGeoObjectCount()
	{
		return super.getGeoObjectCount_NoVirtual();
	}
	/**
	 * 获得是否渲染边框
	 * @param  
	 * @return true绘制边框
	 */
	public boolean getDrawWireBoundingBox()
	{
		return super.getDrawWireBoundingBox_NoVirtual();
	}
	/**
	 * 设置是否渲染边框
	 * @param isdraw 是否绘制
	 */
	public void setDrawWireBoundingBox(boolean isdraw)
	{
		super.setDrawWireBoundingBox_NoVirtual(isdraw);
	}
	/**
	 * 从地理对象扩展创建三维模型
	 * @param  
	 */
	public void build()
	{
		super.build_NoVirtual();
	}
	/**
	 * 从地理对象扩展创建三维模型
	 * @param subMeshData 返回submesh数据信息
	 */
	public void build(com.earthview.world.geometry3d.SubMeshDataVector subMeshData)
	{
		super.build_NoVirtual(subMeshData);
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
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * 设置是否精确插值，主要用于线扩展
	 * @param dense 是否高精度插值
	 */
	public void setDenseInterpolation(boolean dense)
	{
		super.setDenseInterpolation_NoVirtual(dense);
	}
	/**
	 * 更新注记
	 * @param resetTextStyle 是否更新字体属性
	 * @param derenderTxt 是否反挂接
	 * @param reCreate 是否重新构建
	 * @param attachLabel 是否挂接
	 * @param pCamera 相机
	 */
	public void updateLabel(boolean resetTextStyle, boolean derenderTxt, boolean reCreate, boolean attachLabel, com.earthview.world.graphic.Camera pCamera)
	{
		super.updateLabel_NoVirtual(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
	}
	/**
	 * 根据相机位置进行相应刷新
	 * @param pCamera 相机
	 */
	public void updateByCamera(com.earthview.world.graphic.Camera pCamera)
	{
		super.updateByCamera_NoVirtual(pCamera);
	}
	/**
	 * 获知注记可见距离
	 */
	public double getLabelVisibleDistance()
	{
		return super.getLabelVisibleDistance_NoVirtual();
	}
	/**
	 * 设置注记可见距离
	 * @param dis 可见距离
	 */
	public void setLabelVisibleDistance(double dis)
	{
		super.setLabelVisibleDistance_NoVirtual(dis);
	}
	/**
	 * 设置有效角度,针对偏移
	 * @param angle 有效角度
	 */
	public void setLabelProjOffsetMaxAngle(double angle)
	{
		super.setLabelProjOffsetMaxAngle_NoVirtual(angle);
	}
	/**
	 * 获取有效偏移角度
	 * @param  
	 * @return 获取有效角度
	 */
	public double getLabelProjOffsetMaxAngle()
	{
		return super.getLabelProjOffsetMaxAngle_NoVirtual();
	}
	/**
	 * 设置是否进行偏移，主要是点扩展和简单线扩展
	 * @param useProjOffset 是否进行偏移
	 */
	public void setLabelProjOffsetEnable(boolean useProjOffset)
	{
		super.setLabelProjOffsetEnable_NoVirtual(useProjOffset);
	}
	/**
	 * 是否进行偏移
	 * @param  
	 */
	public boolean getLabelProjOffsetEnable()
	{
		return super.getLabelProjOffsetEnable_NoVirtual();
	}
	/**
	 * 设置偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
	 * @param multi 偏移常量的倍数
	 */
	public void setLabelProjOffset(double offset)
	{
		super.setLabelProjOffset_NoVirtual(offset);
	}
	/**
	 * 偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
	 * @param  
	 */
	public double getLabelProjOffset()
	{
		return super.getLabelProjOffset_NoVirtual();
	}
	/**
	 * 更新扩展实体材质
	 * @return 是否成功
	 */
	public boolean updateMaterial()
	{
		return super.updateMaterial_NoVirtual();
	}
	/**
	 * 设置条件可见性
	 * @param visible 指定的ids是否可见
	 * @param ids 指定的ids
	 */
	public boolean setVisibilityFilter(boolean visible, com.earthview.world.core.IntVector ids)
	{
		return super.setVisibilityFilter_NoVirtual(visible, ids);
	}
	/**
	 * 设置某个对象的可见性
	 * @param visible obj是否可见
	 * @param ref_geoObject ibj
	 */
	public boolean setObjectVisibility(boolean visible, com.earthview.world.spatial.GeoObject ref_geoObject)
	{
		return super.setObjectVisibility_NoVirtual(visible, ref_geoObject);
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
	
	native protected void register_getMesh_void(long pNativeObject, String method);
	native protected void register_appendGeoObject_CGeoObject(long pNativeObject, String method);
	native protected void register_removeGeoObject_CGeoObject(long pNativeObject, String method);
	native protected void register_removeAllGeoObjects_void(long pNativeObject, String method);
	native protected void register_getGeoObject_ev_uint32(long pNativeObject, String method);
	native protected void register_getGeoObjectCount_void(long pNativeObject, String method);
	native protected void register_getDrawWireBoundingBox_void(long pNativeObject, String method);
	native protected void register_setDrawWireBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register_build_void(long pNativeObject, String method);
	native protected void register_build_CSubMeshDataVector(long pNativeObject, String method);
	native protected void register_render_void(long pNativeObject, String method);
	native protected void register_derender_void(long pNativeObject, String method);
	native protected void register_isRendering_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_setDenseInterpolation_ev_bool(long pNativeObject, String method);
	native protected void register_updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(long pNativeObject, String method);
	native protected void register_updateByCamera_CCamera(long pNativeObject, String method);
	native protected void register_getLabelVisibleDistance_void(long pNativeObject, String method);
	native protected void register_setLabelVisibleDistance_ev_real64(long pNativeObject, String method);
	native protected void register_setLabelProjOffsetMaxAngle_Real(long pNativeObject, String method);
	native protected void register_getLabelProjOffsetMaxAngle_void(long pNativeObject, String method);
	native protected void register_setLabelProjOffsetEnable_ev_bool(long pNativeObject, String method);
	native protected void register_getLabelProjOffsetEnable_void(long pNativeObject, String method);
	native protected void register_setLabelProjOffset_Real(long pNativeObject, String method);
	native protected void register_getLabelProjOffset_void(long pNativeObject, String method);
	native protected void register_updateMaterial_void(long pNativeObject, String method);
	native protected void register_setVisibilityFilter_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_setObjectVisibility_ev_bool_CGeoObject(long pNativeObject, String method);
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
			this.register_getMesh_void(this.nativeObject.pointer, "getMesh_void_callback");
			this.register_appendGeoObject_CGeoObject(this.nativeObject.pointer, "appendGeoObject_CGeoObject_callback");
			this.register_removeGeoObject_CGeoObject(this.nativeObject.pointer, "removeGeoObject_CGeoObject_callback");
			this.register_removeAllGeoObjects_void(this.nativeObject.pointer, "removeAllGeoObjects_void_callback");
			this.register_getGeoObject_ev_uint32(this.nativeObject.pointer, "getGeoObject_ev_uint32_callback");
			this.register_getGeoObjectCount_void(this.nativeObject.pointer, "getGeoObjectCount_void_callback");
			this.register_getDrawWireBoundingBox_void(this.nativeObject.pointer, "getDrawWireBoundingBox_void_callback");
			this.register_setDrawWireBoundingBox_ev_bool(this.nativeObject.pointer, "setDrawWireBoundingBox_ev_bool_callback");
			this.register_build_void(this.nativeObject.pointer, "build_void_callback");
			this.register_build_CSubMeshDataVector(this.nativeObject.pointer, "build_CSubMeshDataVector_callback");
			this.register_render_void(this.nativeObject.pointer, "render_void_callback");
			this.register_derender_void(this.nativeObject.pointer, "derender_void_callback");
			this.register_isRendering_void(this.nativeObject.pointer, "isRendering_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_setDenseInterpolation_ev_bool(this.nativeObject.pointer, "setDenseInterpolation_ev_bool_callback");
			this.register_updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(this.nativeObject.pointer, "updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_callback");
			this.register_updateByCamera_CCamera(this.nativeObject.pointer, "updateByCamera_CCamera_callback");
			this.register_getLabelVisibleDistance_void(this.nativeObject.pointer, "getLabelVisibleDistance_void_callback");
			this.register_setLabelVisibleDistance_ev_real64(this.nativeObject.pointer, "setLabelVisibleDistance_ev_real64_callback");
			this.register_setLabelProjOffsetMaxAngle_Real(this.nativeObject.pointer, "setLabelProjOffsetMaxAngle_Real_callback");
			this.register_getLabelProjOffsetMaxAngle_void(this.nativeObject.pointer, "getLabelProjOffsetMaxAngle_void_callback");
			this.register_setLabelProjOffsetEnable_ev_bool(this.nativeObject.pointer, "setLabelProjOffsetEnable_ev_bool_callback");
			this.register_getLabelProjOffsetEnable_void(this.nativeObject.pointer, "getLabelProjOffsetEnable_void_callback");
			this.register_setLabelProjOffset_Real(this.nativeObject.pointer, "setLabelProjOffset_Real_callback");
			this.register_getLabelProjOffset_void(this.nativeObject.pointer, "getLabelProjOffset_void_callback");
			this.register_updateMaterial_void(this.nativeObject.pointer, "updateMaterial_void_callback");
			this.register_setVisibilityFilter_ev_bool_IntVector(this.nativeObject.pointer, "setVisibilityFilter_ev_bool_IntVector_callback");
			this.register_setObjectVisibility_ev_bool_CGeoObject(this.nativeObject.pointer, "setObjectVisibility_ev_bool_CGeoObject_callback");
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
	
	public static KmlPolyline fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlPolyline obj = null;
 		if(baseObj instanceof KmlPolyline)
		{
			obj = (KmlPolyline)baseObj;
		} else {
			obj = new KmlPolyline(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlPolyline");
			obj.increaseCast();
		}

		return obj;
	}
}
