package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 二维图像扩展类管理地理对象扩展
 */
public class MultiGeometry3DExtension extends com.earthview.world.geometry3d.VisibleObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CMultiGeometry3DExtension", new MultiGeometry3DExtensionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCMultiGeometry3DExtensionProxy", new MultiGeometry3DExtensionClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_scenemanager 场景管理器
	 * @param groupName 资源组名称
	 */
	public MultiGeometry3DExtension(com.earthview.world.graphic.SceneManager ref_scenemanager, String groupName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		BasePointer groupNamePtr = new BasePointer(groupName);
		list.add("groupName", groupNamePtr.get());
		Create("JCMultiGeometry3DExtensionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.MultiGeometry3DExtension".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getListener_void(long pNativeObject);
	/**
	 * 获取监听
	 * @param  
	 * @return 监听对象
	 */
	public com.earthview.world.geometry3d.MultiGeometry3DExtensionListener getListener()
	{
		long returnValue = getListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.MultiGeometry3DExtensionListener __returnValue = new com.earthview.world.geometry3d.MultiGeometry3DExtensionListener(CreatedWhenConstruct.CWC_NotToCreate, "CMultiGeometry3DExtensionListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.MultiGeometry3DExtensionListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMultiGeometry3DExtensionListener");
		}
		return __returnValue;
	}
	native private void setListener_CMultiGeometry3DExtensionListener(long pNativeObject, long ref_listener);
	/**
	 * 设置监听
	 * @param ref_listener 监听
	 */
	public void setListener(com.earthview.world.geometry3d.MultiGeometry3DExtensionListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setListener_CMultiGeometry3DExtensionListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	protected  boolean appendGeoObject_CGeoObject_callback(long ref_geoObject)
	{
		com.earthview.world.spatial.GeoObject ref_geoObjectParamValue = (ref_geoObject == 0L ? null : new com.earthview.world.spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_geoObjectParamValue != null)
		{
		ref_geoObjectParamValue.setDelegate(true);
		ref_geoObjectParamValue.setInstancePointer(new InstancePointer(ref_geoObject));
		IClassFactory ref_geoObjectParamValueClassFactory = GlobalClassFactoryMap.get(ref_geoObjectParamValue.getCppInstanceTypeName());
		if (ref_geoObjectParamValueClassFactory != null)
		{
			ref_geoObjectParamValue.setDelegate(true);
			ref_geoObjectParamValue = (com.earthview.world.spatial.GeoObject)ref_geoObjectParamValueClassFactory.create();
			ref_geoObjectParamValue.setDelegate(true);
			ref_geoObjectParamValue.setInstancePointer(new InstancePointer(ref_geoObject));
		}
		}
		boolean returnValue = appendGeoObject(ref_geoObjectParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean appendGeoObject_CGeoObject(long pNativeObject, long ref_geoObject);
	/**
	 * 增加地理对象
	 * @param ref_geoObject 地理对象
	 */
	public boolean appendGeoObject(com.earthview.world.spatial.GeoObject ref_geoObject)
	{
		long ref_geoObjectParamValue = (ref_geoObject == null ? 0L : ref_geoObject.nativeObject.pointer);
		boolean returnValue = appendGeoObject_CGeoObject(this.nativeObject.pointer, ref_geoObjectParamValue);
		return returnValue;
	}
	native private boolean appendGeoObject_CGeoObject_NoVirtual(long pNativeObject, long ref_geoObject);
	protected boolean appendGeoObject_NoVirtual(com.earthview.world.spatial.GeoObject ref_geoObject)
	{
		long ref_geoObjectParamValue = (ref_geoObject == null ? 0L : ref_geoObject.nativeObject.pointer);
		boolean returnValue = appendGeoObject_CGeoObject_NoVirtual(this.nativeObject.pointer, ref_geoObjectParamValue);
		return returnValue;
	}

	protected  boolean removeGeoObject_CGeoObject_callback(long geoObject)
	{
		com.earthview.world.spatial.GeoObject geoObjectParamValue = (geoObject == 0L ? null : new com.earthview.world.spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(geoObjectParamValue != null)
		{
		geoObjectParamValue.setDelegate(true);
		geoObjectParamValue.setInstancePointer(new InstancePointer(geoObject));
		IClassFactory geoObjectParamValueClassFactory = GlobalClassFactoryMap.get(geoObjectParamValue.getCppInstanceTypeName());
		if (geoObjectParamValueClassFactory != null)
		{
			geoObjectParamValue.setDelegate(true);
			geoObjectParamValue = (com.earthview.world.spatial.GeoObject)geoObjectParamValueClassFactory.create();
			geoObjectParamValue.setDelegate(true);
			geoObjectParamValue.setInstancePointer(new InstancePointer(geoObject));
		}
		}
		boolean returnValue = removeGeoObject(geoObjectParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean removeGeoObject_CGeoObject(long pNativeObject, long geoObject);
	/**
	 * 删除地理对象
	 * @param geoObject 地理对象
	 */
	public boolean removeGeoObject(com.earthview.world.spatial.GeoObject geoObject)
	{
		long geoObjectParamValue = (geoObject == null ? 0L : geoObject.nativeObject.pointer);
		boolean returnValue = removeGeoObject_CGeoObject(this.nativeObject.pointer, geoObjectParamValue);
		return returnValue;
	}
	native private boolean removeGeoObject_CGeoObject_NoVirtual(long pNativeObject, long geoObject);
	protected boolean removeGeoObject_NoVirtual(com.earthview.world.spatial.GeoObject geoObject)
	{
		long geoObjectParamValue = (geoObject == null ? 0L : geoObject.nativeObject.pointer);
		boolean returnValue = removeGeoObject_CGeoObject_NoVirtual(this.nativeObject.pointer, geoObjectParamValue);
		return returnValue;
	}

	protected  void removeAllGeoObjects_void_callback()
	{
		removeAllGeoObjects();
	}

	native private void removeAllGeoObjects_void(long pNativeObject);
	/**
	 * 删除所有地理对象
	 * @param  
	 */
	public void removeAllGeoObjects()
	{
		removeAllGeoObjects_void(this.nativeObject.pointer);
	}
	native private void removeAllGeoObjects_void_NoVirtual(long pNativeObject);
	protected void removeAllGeoObjects_NoVirtual()
	{
		removeAllGeoObjects_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getGeoObject_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.GeoObject returnValue = getGeoObject(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGeoObject_ev_uint32(long pNativeObject, long index);
	/**
	 * 获得地理对象
	 * @param index 地理对象索引
	 * @return 地理对象
	 */
	public com.earthview.world.spatial.GeoObject getGeoObject(long index)
	{
		long indexParamValue = index;
		long returnValue = getGeoObject_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.GeoObject __returnValue = new com.earthview.world.spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObject");
		}
		return __returnValue;
	}
	native private long getGeoObject_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.GeoObject getGeoObject_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getGeoObject_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.GeoObject __returnValue = new com.earthview.world.spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObject");
		}
		return __returnValue;
	}

	protected  String getGeoObjectCount_void_callback()
	{
		ULongPointer returnValue = getGeoObjectCount();
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String getGeoObjectCount_void(long pNativeObject);
	/**
	 * 获得地理对象数量
	 * @param  
	 * @return 地理对象数量
	 */
	public ULongPointer getGeoObjectCount()
	{
		String returnValue = getGeoObjectCount_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String getGeoObjectCount_void_NoVirtual(long pNativeObject);
	protected ULongPointer getGeoObjectCount_NoVirtual()
	{
		String returnValue = getGeoObjectCount_void_NoVirtual(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	native private long getGeoEntity_void(long pNativeObject);
	/**
	 * 获得三维地理实体
	 * @param  
	 * @return 三维地理实体
	 */
	public com.earthview.world.geometry3d.GeoEntity getGeoEntity()
	{
		long returnValue = getGeoEntity_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.GeoEntity __returnValue = new com.earthview.world.geometry3d.GeoEntity(CreatedWhenConstruct.CWC_NotToCreate, "CGeoEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.GeoEntity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoEntity");
		}
		return __returnValue;
	}
	protected  boolean getDrawWireBoundingBox_void_callback()
	{
		boolean returnValue = getDrawWireBoundingBox();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getDrawWireBoundingBox_void(long pNativeObject);
	/**
	 * 获得是否渲染边框
	 * @param  
	 * @return true绘制边框
	 */
	public boolean getDrawWireBoundingBox()
	{
		boolean returnValue = getDrawWireBoundingBox_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getDrawWireBoundingBox_void_NoVirtual(long pNativeObject);
	protected boolean getDrawWireBoundingBox_NoVirtual()
	{
		boolean returnValue = getDrawWireBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDrawWireBoundingBox_ev_bool_callback(boolean isdraw)
	{
		boolean isdrawParamValue = isdraw;
		setDrawWireBoundingBox(isdrawParamValue);
	}

	native private void setDrawWireBoundingBox_ev_bool(long pNativeObject, boolean isdraw);
	/**
	 * 设置是否渲染边框
	 * @param isdraw 是否绘制
	 */
	public void setDrawWireBoundingBox(boolean isdraw)
	{
		boolean isdrawParamValue = isdraw;
		setDrawWireBoundingBox_ev_bool(this.nativeObject.pointer, isdrawParamValue);
	}
	native private void setDrawWireBoundingBox_ev_bool_NoVirtual(long pNativeObject, boolean isdraw);
	protected void setDrawWireBoundingBox_NoVirtual(boolean isdraw)
	{
		boolean isdrawParamValue = isdraw;
		setDrawWireBoundingBox_ev_bool_NoVirtual(this.nativeObject.pointer, isdrawParamValue);
	}

	native private void draw_void(long pNativeObject);
	/**
	 * 绘制
	 * @param  
	 */
	public void draw()
	{
		draw_void(this.nativeObject.pointer);
	}
	protected  void build_void_callback()
	{
		build();
	}

	native private void build_void(long pNativeObject);
	/**
	 * 从地理对象扩展创建三维模型
	 * @param  
	 */
	public void build()
	{
		build_void(this.nativeObject.pointer);
	}
	native private void build_void_NoVirtual(long pNativeObject);
	protected void build_NoVirtual()
	{
		build_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void build_CSubMeshDataVector_callback(long subMeshData)
	{
		com.earthview.world.geometry3d.SubMeshDataVector subMeshDataParamValue = new com.earthview.world.geometry3d.SubMeshDataVector(CreatedWhenConstruct.CWC_NotToCreate);
		subMeshDataParamValue.setDelegate(true);
		subMeshDataParamValue.setInstancePointer(new InstancePointer(subMeshData));
		IClassFactory subMeshDataParamValueClassFactory = GlobalClassFactoryMap.get(subMeshDataParamValue.getCppInstanceTypeName());
		if (subMeshDataParamValueClassFactory != null)
		{
			subMeshDataParamValue.setDelegate(true);
			subMeshDataParamValue = (com.earthview.world.geometry3d.SubMeshDataVector)subMeshDataParamValueClassFactory.create();
			subMeshDataParamValue.setDelegate(true);
			subMeshDataParamValue.setInstancePointer(new InstancePointer(subMeshData));
		}
		build(subMeshDataParamValue);
	}

	native private void build_CSubMeshDataVector(long pNativeObject, long subMeshData);
	/**
	 * 从地理对象扩展创建三维模型
	 * @param subMeshData 返回submesh数据信息
	 */
	public void build(com.earthview.world.geometry3d.SubMeshDataVector subMeshData)
	{
		long subMeshDataParamValue = subMeshData.nativeObject.pointer;
		build_CSubMeshDataVector(this.nativeObject.pointer, subMeshDataParamValue);
	}
	native private void build_CSubMeshDataVector_NoVirtual(long pNativeObject, long subMeshData);
	protected void build_NoVirtual(com.earthview.world.geometry3d.SubMeshDataVector subMeshData)
	{
		long subMeshDataParamValue = subMeshData.nativeObject.pointer;
		build_CSubMeshDataVector_NoVirtual(this.nativeObject.pointer, subMeshDataParamValue);
	}

	protected  void render_void_callback()
	{
		render();
	}

	native private void render_void(long pNativeObject);
	/**
	 * 挂接三维模型
	 * @param  
	 */
	public void render()
	{
		render_void(this.nativeObject.pointer);
	}
	native private void render_void_NoVirtual(long pNativeObject);
	protected void render_NoVirtual()
	{
		render_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void derender_void_callback()
	{
		derender();
	}

	native private void derender_void(long pNativeObject);
	/**
	 * 反挂接三维模型
	 * @param  
	 */
	public void derender()
	{
		derender_void(this.nativeObject.pointer);
	}
	native private void derender_void_NoVirtual(long pNativeObject);
	protected void derender_NoVirtual()
	{
		derender_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isRendering_void_callback()
	{
		boolean returnValue = isRendering();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isRendering_void(long pNativeObject);
	/**
	 * 是否已经挂接渲染
	 * @param  
	 * @return 是否已经挂接渲染
	 */
	public boolean isRendering()
	{
		boolean returnValue = isRendering_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isRendering_void_NoVirtual(long pNativeObject);
	protected boolean isRendering_NoVirtual()
	{
		boolean returnValue = isRendering_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setVisible_ev_bool_callback(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible(visibleParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	protected  void setDenseInterpolation_ev_bool_callback(boolean dense)
	{
		boolean denseParamValue = dense;
		setDenseInterpolation(denseParamValue);
	}

	native private void setDenseInterpolation_ev_bool(long pNativeObject, boolean dense);
	/**
	 * 设置是否精确插值，主要用于线扩展
	 * @param dense 是否高精度插值
	 */
	public void setDenseInterpolation(boolean dense)
	{
		boolean denseParamValue = dense;
		setDenseInterpolation_ev_bool(this.nativeObject.pointer, denseParamValue);
	}
	native private void setDenseInterpolation_ev_bool_NoVirtual(long pNativeObject, boolean dense);
	protected void setDenseInterpolation_NoVirtual(boolean dense)
	{
		boolean denseParamValue = dense;
		setDenseInterpolation_ev_bool_NoVirtual(this.nativeObject.pointer, denseParamValue);
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
	native private void setSelectable_ev_bool(long pNativeObject, boolean selectable);
	/**
	 * 设置是否可选择
	 * @param selectable 是否可选择
	 */
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

	native private long getSceneNodePostion_void(long pNativeObject);
	/**
	 * 获取场景节点坐标
	 * @param  
	 * @return 场景节点坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getSceneNodePostion()
	{
		long returnValue = getSceneNodePostion_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setSceneNodePostion_CVector3(long pNativeObject, long pos);
	/**
	 * 设置场景节点坐标
	 * @param  
	 * @return 场景节点坐标
	 */
	public void setSceneNodePostion(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setSceneNodePostion_CVector3(this.nativeObject.pointer, posParamValue);
	}
	native private void setAltitudePrecision_ev_int32(long pNativeObject, int precision);
	/**
	 * 设置高程精度(道路矢量专用,如有需要可以通用)
	 * @param precision 精度值
	 */
	public void setAltitudePrecision(int precision)
	{
		int precisionParamValue = precision;
		setAltitudePrecision_ev_int32(this.nativeObject.pointer, precisionParamValue);
	}
	native private void setProjOffsetMaxAngle_Real(long pNativeObject, double angle);
	/**
	 * 设置有效角度,针对偏移
	 * @param angle 有效角度
	 */
	public void setProjOffsetMaxAngle(double angle)
	{
		double angleParamValue = angle;
		setProjOffsetMaxAngle_Real(this.nativeObject.pointer, angleParamValue);
	}
	native private double getProjOffsetMaxAngle_void(long pNativeObject);
	/**
	 * 获取有效偏移角度
	 * @param  
	 * @return 获取有效角度
	 */
	public double getProjOffsetMaxAngle()
	{
		double returnValue = getProjOffsetMaxAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setStencilEnable_ev_bool(long pNativeObject, boolean useStencil);
	/**
	 * 设置是否进行模板缓冲，主要是面扩展和非简单线扩展
	 * @param useStencil 是否进行模板缓冲
	 */
	public void setStencilEnable(boolean useStencil)
	{
		boolean useStencilParamValue = useStencil;
		setStencilEnable_ev_bool(this.nativeObject.pointer, useStencilParamValue);
	}
	native private boolean getStencilEnable_void(long pNativeObject);
	/**
	 * 是否进行模板缓冲
	 * @param  
	 * @return 是否进行模板缓冲
	 */
	public boolean getStencilEnable()
	{
		boolean returnValue = getStencilEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setProjOffsetEnable_ev_bool(long pNativeObject, boolean useProjOffset);
	/**
	 * 设置是否进行偏移，主要是点扩展和简单线扩展
	 * @param useProjOffset 是否进行偏移
	 */
	public void setProjOffsetEnable(boolean useProjOffset)
	{
		boolean useProjOffsetParamValue = useProjOffset;
		setProjOffsetEnable_ev_bool(this.nativeObject.pointer, useProjOffsetParamValue);
	}
	native private boolean getProjOffsetEnable_void(long pNativeObject);
	/**
	 * 是否进行偏移
	 * @param  
	 */
	public boolean getProjOffsetEnable()
	{
		boolean returnValue = getProjOffsetEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setProjOffset_Real(long pNativeObject, double offset);
	/**
	 * 设置偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
	 * @param multi 偏移常量的倍数
	 */
	public void setProjOffset(double offset)
	{
		double offsetParamValue = offset;
		setProjOffset_Real(this.nativeObject.pointer, offsetParamValue);
	}
	native private double getProjOffset_void(long pNativeObject);
	/**
	 * 偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
	 * @param  
	 */
	public double getProjOffset()
	{
		double returnValue = getProjOffset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRenderableListener_void(long pNativeObject);
	/**
	 * 获取renderablelistener
	 * @param  
	 * @return renderablelistener
	 */
	public com.earthview.world.geometry3d.RenderableGeometryExtensionListener getRenderableListener()
	{
		long returnValue = getRenderableListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.RenderableGeometryExtensionListener __returnValue = new com.earthview.world.geometry3d.RenderableGeometryExtensionListener(CreatedWhenConstruct.CWC_NotToCreate, "CRenderableGeometryExtensionListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.RenderableGeometryExtensionListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderableGeometryExtensionListener");
		}
		return __returnValue;
	}
	native private void setLevel_ev_int32(long pNativeObject, int level);
	/**
	 * 设置随某一瓦片级别的瓦片显示隐藏（仅用于道路矢量）
	 */
	public void setLevel(int level)
	{
		int levelParamValue = level;
		setLevel_ev_int32(this.nativeObject.pointer, levelParamValue);
	}
	native private void setRoadMinMaxVisibleDistance_Real_Real(long pNativeObject, double min, double max);
	/**
	 * 设置最小最大可见距离（仅用于道路矢量）
	 */
	public void setRoadMinMaxVisibleDistance(double min, double max)
	{
		double minParamValue = min;
		double maxParamValue = max;
		setRoadMinMaxVisibleDistance_Real_Real(this.nativeObject.pointer, minParamValue, maxParamValue);
	}
	native private static boolean exist_CMultiGeometry3DExtension(long extension);
	/**
	 * 判断该扩展对象是否已经创建
	 * @param extension 扩展对象
	 * @return 是否已经创建
	 */
	public static boolean exist(com.earthview.world.geometry3d.MultiGeometry3DExtension extension)
	{
		long extensionParamValue = (extension == null ? 0L : extension.nativeObject.pointer);
		boolean returnValue = exist_CMultiGeometry3DExtension(extensionParamValue);
		return returnValue;
	}
	protected  void updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_callback(boolean resetTextStyle, boolean derenderTxt, boolean reCreate, boolean attachLabel, long pCamera)
	{
		boolean resetTextStyleParamValue = resetTextStyle;
		boolean derenderTxtParamValue = derenderTxt;
		boolean reCreateParamValue = reCreate;
		boolean attachLabelParamValue = attachLabel;
		com.earthview.world.graphic.Camera pCameraParamValue = (pCamera == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(pCameraParamValue != null)
		{
		pCameraParamValue.setDelegate(true);
		pCameraParamValue.setInstancePointer(new InstancePointer(pCamera));
		IClassFactory pCameraParamValueClassFactory = GlobalClassFactoryMap.get(pCameraParamValue.getCppInstanceTypeName());
		if (pCameraParamValueClassFactory != null)
		{
			pCameraParamValue.setDelegate(true);
			pCameraParamValue = (com.earthview.world.graphic.Camera)pCameraParamValueClassFactory.create();
			pCameraParamValue.setDelegate(true);
			pCameraParamValue.setInstancePointer(new InstancePointer(pCamera));
		}
		}
		updateLabel(resetTextStyleParamValue, derenderTxtParamValue, reCreateParamValue, attachLabelParamValue, pCameraParamValue);
	}

	native private void updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(long pNativeObject, boolean resetTextStyle, boolean derenderTxt, boolean reCreate, boolean attachLabel, long pCamera);
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
		boolean resetTextStyleParamValue = resetTextStyle;
		boolean derenderTxtParamValue = derenderTxt;
		boolean reCreateParamValue = reCreate;
		boolean attachLabelParamValue = attachLabel;
		long pCameraParamValue = (pCamera == null ? 0L : pCamera.nativeObject.pointer);
		updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(this.nativeObject.pointer, resetTextStyleParamValue, derenderTxtParamValue, reCreateParamValue, attachLabelParamValue, pCameraParamValue);
	}
	native private void updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_NoVirtual(long pNativeObject, boolean resetTextStyle, boolean derenderTxt, boolean reCreate, boolean attachLabel, long pCamera);
	protected void updateLabel_NoVirtual(boolean resetTextStyle, boolean derenderTxt, boolean reCreate, boolean attachLabel, com.earthview.world.graphic.Camera pCamera)
	{
		boolean resetTextStyleParamValue = resetTextStyle;
		boolean derenderTxtParamValue = derenderTxt;
		boolean reCreateParamValue = reCreate;
		boolean attachLabelParamValue = attachLabel;
		long pCameraParamValue = (pCamera == null ? 0L : pCamera.nativeObject.pointer);
		updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_NoVirtual(this.nativeObject.pointer, resetTextStyleParamValue, derenderTxtParamValue, reCreateParamValue, attachLabelParamValue, pCameraParamValue);
	}

	protected  void updateByCamera_CCamera_callback(long pCamera)
	{
		com.earthview.world.graphic.Camera pCameraParamValue = (pCamera == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(pCameraParamValue != null)
		{
		pCameraParamValue.setDelegate(true);
		pCameraParamValue.setInstancePointer(new InstancePointer(pCamera));
		IClassFactory pCameraParamValueClassFactory = GlobalClassFactoryMap.get(pCameraParamValue.getCppInstanceTypeName());
		if (pCameraParamValueClassFactory != null)
		{
			pCameraParamValue.setDelegate(true);
			pCameraParamValue = (com.earthview.world.graphic.Camera)pCameraParamValueClassFactory.create();
			pCameraParamValue.setDelegate(true);
			pCameraParamValue.setInstancePointer(new InstancePointer(pCamera));
		}
		}
		updateByCamera(pCameraParamValue);
	}

	native private void updateByCamera_CCamera(long pNativeObject, long pCamera);
	/**
	 * 根据相机位置进行相应刷新
	 * @param pCamera 相机
	 */
	public void updateByCamera(com.earthview.world.graphic.Camera pCamera)
	{
		long pCameraParamValue = (pCamera == null ? 0L : pCamera.nativeObject.pointer);
		updateByCamera_CCamera(this.nativeObject.pointer, pCameraParamValue);
	}
	native private void updateByCamera_CCamera_NoVirtual(long pNativeObject, long pCamera);
	protected void updateByCamera_NoVirtual(com.earthview.world.graphic.Camera pCamera)
	{
		long pCameraParamValue = (pCamera == null ? 0L : pCamera.nativeObject.pointer);
		updateByCamera_CCamera_NoVirtual(this.nativeObject.pointer, pCameraParamValue);
	}

	protected  double getLabelVisibleDistance_void_callback()
	{
		double returnValue = getLabelVisibleDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getLabelVisibleDistance_void(long pNativeObject);
	/**
	 * 获知注记可见距离
	 */
	public double getLabelVisibleDistance()
	{
		double returnValue = getLabelVisibleDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLabelVisibleDistance_void_NoVirtual(long pNativeObject);
	protected double getLabelVisibleDistance_NoVirtual()
	{
		double returnValue = getLabelVisibleDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setLabelVisibleDistance_ev_real64_callback(double dis)
	{
		double disParamValue = dis;
		setLabelVisibleDistance(disParamValue);
	}

	native private void setLabelVisibleDistance_ev_real64(long pNativeObject, double dis);
	/**
	 * 设置注记可见距离
	 * @param dis 可见距离
	 */
	public void setLabelVisibleDistance(double dis)
	{
		double disParamValue = dis;
		setLabelVisibleDistance_ev_real64(this.nativeObject.pointer, disParamValue);
	}
	native private void setLabelVisibleDistance_ev_real64_NoVirtual(long pNativeObject, double dis);
	protected void setLabelVisibleDistance_NoVirtual(double dis)
	{
		double disParamValue = dis;
		setLabelVisibleDistance_ev_real64_NoVirtual(this.nativeObject.pointer, disParamValue);
	}

	protected  void setLabelProjOffsetMaxAngle_Real_callback(double angle)
	{
		double angleParamValue = angle;
		setLabelProjOffsetMaxAngle(angleParamValue);
	}

	native private void setLabelProjOffsetMaxAngle_Real(long pNativeObject, double angle);
	/**
	 * 设置有效角度,针对偏移
	 * @param angle 有效角度
	 */
	public void setLabelProjOffsetMaxAngle(double angle)
	{
		double angleParamValue = angle;
		setLabelProjOffsetMaxAngle_Real(this.nativeObject.pointer, angleParamValue);
	}
	native private void setLabelProjOffsetMaxAngle_Real_NoVirtual(long pNativeObject, double angle);
	protected void setLabelProjOffsetMaxAngle_NoVirtual(double angle)
	{
		double angleParamValue = angle;
		setLabelProjOffsetMaxAngle_Real_NoVirtual(this.nativeObject.pointer, angleParamValue);
	}

	protected  double getLabelProjOffsetMaxAngle_void_callback()
	{
		double returnValue = getLabelProjOffsetMaxAngle();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getLabelProjOffsetMaxAngle_void(long pNativeObject);
	/**
	 * 获取有效偏移角度
	 * @param  
	 * @return 获取有效角度
	 */
	public double getLabelProjOffsetMaxAngle()
	{
		double returnValue = getLabelProjOffsetMaxAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLabelProjOffsetMaxAngle_void_NoVirtual(long pNativeObject);
	protected double getLabelProjOffsetMaxAngle_NoVirtual()
	{
		double returnValue = getLabelProjOffsetMaxAngle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setLabelProjOffsetEnable_ev_bool_callback(boolean useProjOffset)
	{
		boolean useProjOffsetParamValue = useProjOffset;
		setLabelProjOffsetEnable(useProjOffsetParamValue);
	}

	native private void setLabelProjOffsetEnable_ev_bool(long pNativeObject, boolean useProjOffset);
	/**
	 * 设置是否进行偏移，主要是点扩展和简单线扩展
	 * @param useProjOffset 是否进行偏移
	 */
	public void setLabelProjOffsetEnable(boolean useProjOffset)
	{
		boolean useProjOffsetParamValue = useProjOffset;
		setLabelProjOffsetEnable_ev_bool(this.nativeObject.pointer, useProjOffsetParamValue);
	}
	native private void setLabelProjOffsetEnable_ev_bool_NoVirtual(long pNativeObject, boolean useProjOffset);
	protected void setLabelProjOffsetEnable_NoVirtual(boolean useProjOffset)
	{
		boolean useProjOffsetParamValue = useProjOffset;
		setLabelProjOffsetEnable_ev_bool_NoVirtual(this.nativeObject.pointer, useProjOffsetParamValue);
	}

	protected  boolean getLabelProjOffsetEnable_void_callback()
	{
		boolean returnValue = getLabelProjOffsetEnable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getLabelProjOffsetEnable_void(long pNativeObject);
	/**
	 * 是否进行偏移
	 * @param  
	 */
	public boolean getLabelProjOffsetEnable()
	{
		boolean returnValue = getLabelProjOffsetEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getLabelProjOffsetEnable_void_NoVirtual(long pNativeObject);
	protected boolean getLabelProjOffsetEnable_NoVirtual()
	{
		boolean returnValue = getLabelProjOffsetEnable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setLabelProjOffset_Real_callback(double offset)
	{
		double offsetParamValue = offset;
		setLabelProjOffset(offsetParamValue);
	}

	native private void setLabelProjOffset_Real(long pNativeObject, double offset);
	/**
	 * 设置偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
	 * @param multi 偏移常量的倍数
	 */
	public void setLabelProjOffset(double offset)
	{
		double offsetParamValue = offset;
		setLabelProjOffset_Real(this.nativeObject.pointer, offsetParamValue);
	}
	native private void setLabelProjOffset_Real_NoVirtual(long pNativeObject, double offset);
	protected void setLabelProjOffset_NoVirtual(double offset)
	{
		double offsetParamValue = offset;
		setLabelProjOffset_Real_NoVirtual(this.nativeObject.pointer, offsetParamValue);
	}

	protected  double getLabelProjOffset_void_callback()
	{
		double returnValue = getLabelProjOffset();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getLabelProjOffset_void(long pNativeObject);
	/**
	 * 偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
	 * @param  
	 */
	public double getLabelProjOffset()
	{
		double returnValue = getLabelProjOffset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLabelProjOffset_void_NoVirtual(long pNativeObject);
	protected double getLabelProjOffset_NoVirtual()
	{
		double returnValue = getLabelProjOffset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean updateMaterial_void_callback()
	{
		boolean returnValue = updateMaterial();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean updateMaterial_void(long pNativeObject);
	/**
	 * 更新扩展实体材质
	 * @return 是否成功
	 */
	public boolean updateMaterial()
	{
		boolean returnValue = updateMaterial_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean updateMaterial_void_NoVirtual(long pNativeObject);
	protected boolean updateMaterial_NoVirtual()
	{
		boolean returnValue = updateMaterial_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void attachStatisticsExtension_CGeoStatistics3DExtension(long pNativeObject, long statisticsEx);
	/**
	 * 绑定一个统计专题图扩展对象
	 * @param statisticsEx 统计专题图扩展对象
	 */
	public void attachStatisticsExtension(com.earthview.world.geometry3d.GeoStatistics3DExtension statisticsEx)
	{
		long statisticsExParamValue = (statisticsEx == null ? 0L : statisticsEx.nativeObject.pointer);
		attachStatisticsExtension_CGeoStatistics3DExtension(this.nativeObject.pointer, statisticsExParamValue);
	}
	native private long getStatisticsExtension_void(long pNativeObject);
	/**
	 * 获知统计专题图扩展对象
	 */
	public com.earthview.world.geometry3d.GeoStatistics3DExtension getStatisticsExtension()
	{
		long returnValue = getStatisticsExtension_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.GeoStatistics3DExtension __returnValue = new com.earthview.world.geometry3d.GeoStatistics3DExtension(CreatedWhenConstruct.CWC_NotToCreate, "CGeoStatistics3DExtension");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.GeoStatistics3DExtension)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoStatistics3DExtension");
		}
		return __returnValue;
	}
	native private boolean updateStatisticsExtension_ev_bool_ev_bool_ev_bool(long pNativeObject, boolean derenderEx, boolean reBuildEx, boolean renderEx);
	/**
	 * 更新统计专题图
	 * @param derenderEx 是否反挂接
	 * @param reBuildEx 是否重新构建
	 * @param renderEx 是否挂接
	 */
	public boolean updateStatisticsExtension(boolean derenderEx, boolean reBuildEx, boolean renderEx)
	{
		boolean derenderExParamValue = derenderEx;
		boolean reBuildExParamValue = reBuildEx;
		boolean renderExParamValue = renderEx;
		boolean returnValue = updateStatisticsExtension_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, derenderExParamValue, reBuildExParamValue, renderExParamValue);
		return returnValue;
	}
	protected  boolean setVisibilityFilter_ev_bool_IntVector_callback(boolean visible, long ids)
	{
		boolean visibleParamValue = visible;
		com.earthview.world.core.IntVector idsParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		idsParamValue.setDelegate(true);
		idsParamValue.setInstancePointer(new InstancePointer(ids));
		IClassFactory idsParamValueClassFactory = GlobalClassFactoryMap.get(idsParamValue.getCppInstanceTypeName());
		if (idsParamValueClassFactory != null)
		{
			idsParamValue.setDelegate(true);
			idsParamValue = (com.earthview.world.core.IntVector)idsParamValueClassFactory.create();
			idsParamValue.setDelegate(true);
			idsParamValue.setInstancePointer(new InstancePointer(ids));
		}
		boolean returnValue = setVisibilityFilter(visibleParamValue, idsParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setVisibilityFilter_ev_bool_IntVector(long pNativeObject, boolean visible, long ids);
	/**
	 * 设置条件可见性
	 * @param visible 指定的ids是否可见
	 * @param ids 指定的ids
	 */
	public boolean setVisibilityFilter(boolean visible, com.earthview.world.core.IntVector ids)
	{
		boolean visibleParamValue = visible;
		long idsParamValue = ids.nativeObject.pointer;
		boolean returnValue = setVisibilityFilter_ev_bool_IntVector(this.nativeObject.pointer, visibleParamValue, idsParamValue);
		return returnValue;
	}
	native private boolean setVisibilityFilter_ev_bool_IntVector_NoVirtual(long pNativeObject, boolean visible, long ids);
	protected boolean setVisibilityFilter_NoVirtual(boolean visible, com.earthview.world.core.IntVector ids)
	{
		boolean visibleParamValue = visible;
		long idsParamValue = ids.nativeObject.pointer;
		boolean returnValue = setVisibilityFilter_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, visibleParamValue, idsParamValue);
		return returnValue;
	}

	protected  boolean setObjectVisibility_ev_bool_CGeoObject_callback(boolean visible, long ref_geoObject)
	{
		boolean visibleParamValue = visible;
		com.earthview.world.spatial.GeoObject ref_geoObjectParamValue = (ref_geoObject == 0L ? null : new com.earthview.world.spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_geoObjectParamValue != null)
		{
		ref_geoObjectParamValue.setDelegate(true);
		ref_geoObjectParamValue.setInstancePointer(new InstancePointer(ref_geoObject));
		IClassFactory ref_geoObjectParamValueClassFactory = GlobalClassFactoryMap.get(ref_geoObjectParamValue.getCppInstanceTypeName());
		if (ref_geoObjectParamValueClassFactory != null)
		{
			ref_geoObjectParamValue.setDelegate(true);
			ref_geoObjectParamValue = (com.earthview.world.spatial.GeoObject)ref_geoObjectParamValueClassFactory.create();
			ref_geoObjectParamValue.setDelegate(true);
			ref_geoObjectParamValue.setInstancePointer(new InstancePointer(ref_geoObject));
		}
		}
		boolean returnValue = setObjectVisibility(visibleParamValue, ref_geoObjectParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setObjectVisibility_ev_bool_CGeoObject(long pNativeObject, boolean visible, long ref_geoObject);
	/**
	 * 设置某个对象的可见性
	 * @param visible obj是否可见
	 * @param ref_geoObject ibj
	 */
	public boolean setObjectVisibility(boolean visible, com.earthview.world.spatial.GeoObject ref_geoObject)
	{
		boolean visibleParamValue = visible;
		long ref_geoObjectParamValue = (ref_geoObject == null ? 0L : ref_geoObject.nativeObject.pointer);
		boolean returnValue = setObjectVisibility_ev_bool_CGeoObject(this.nativeObject.pointer, visibleParamValue, ref_geoObjectParamValue);
		return returnValue;
	}
	native private boolean setObjectVisibility_ev_bool_CGeoObject_NoVirtual(long pNativeObject, boolean visible, long ref_geoObject);
	protected boolean setObjectVisibility_NoVirtual(boolean visible, com.earthview.world.spatial.GeoObject ref_geoObject)
	{
		boolean visibleParamValue = visible;
		long ref_geoObjectParamValue = (ref_geoObject == null ? 0L : ref_geoObject.nativeObject.pointer);
		boolean returnValue = setObjectVisibility_ev_bool_CGeoObject_NoVirtual(this.nativeObject.pointer, visibleParamValue, ref_geoObjectParamValue);
		return returnValue;
	}

	native private long getNode_void(long pNativeObject);
	/**
	 * 获取节点，需要重写
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

	native private boolean appendMovableObject_CMovableObject(long pNativeObject, long mo);
	public boolean appendMovableObject(com.earthview.world.graphic.MovableObject mo)
	{
		long moParamValue = (mo == null ? 0L : mo.nativeObject.pointer);
		boolean returnValue = appendMovableObject_CMovableObject(this.nativeObject.pointer, moParamValue);
		return returnValue;
	}
	public MultiGeometry3DExtension(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MultiGeometry3DExtension(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean getSelectable()
	{
		return super.getSelectable_NoVirtual();
	}
	public boolean update()
	{
		return super.update_NoVirtual();
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
	
	public static MultiGeometry3DExtension fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MultiGeometry3DExtension obj = null;
 		if(baseObj instanceof MultiGeometry3DExtension)
		{
			obj = (MultiGeometry3DExtension)baseObj;
		} else {
			obj = new MultiGeometry3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMultiGeometry3DExtension");
			obj.increaseCast();
		}

		return obj;
	}
}
