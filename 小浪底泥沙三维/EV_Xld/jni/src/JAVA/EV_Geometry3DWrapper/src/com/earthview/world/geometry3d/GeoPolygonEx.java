package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 聚合二维的图层，提供在三维中渲染的接口管理三维中二维图层
 */
public class GeoPolygonEx extends com.earthview.world.geometry3d.VisibleObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CGeoPolygonEx", new GeoPolygonExClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCGeoPolygonExProxy", new GeoPolygonExClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_scenemanager 场景管理器
	 */
	public GeoPolygonEx(com.earthview.world.graphic.SceneManager ref_scenemanager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		Create("JCGeoPolygonExProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.GeoPolygonEx".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_scenemanager 场景管理器
	 */
	public GeoPolygonEx(com.earthview.world.graphic.SceneManager ref_scenemanager, String groupName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		BasePointer groupNamePtr = new BasePointer(groupName);
		list.add("groupName", groupNamePtr.get());
		Create("JCGeoPolygonExProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.GeoPolygonEx".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	protected  void build_void_callback()
	{
		build();
	}

	native private void build_void(long pNativeObject);
	/**
	 * 构建
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
	 * 添加一个要素
	 * @param layer 二维图层
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
	 * 删除二维图形
	 * @param geometry 二维图形
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
	 * 删除所有二维图形
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
	 * 获得二维图形指针
	 * @param index 二维图形索引
	 * @return 二维图形
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
	 * 获得三维实体数量
	 * @param  
	 * @return 二维图形数量
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
	native private int getClampMode_void(long pNativeObject);
	/**
	 * 获取图层贴地模式,只有在绘制贴地图层时才有效
	 * @param  
	 * @return 贴地模式
	 */
	public int getClampMode()
	{
		int returnValue = getClampMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setClampMode_ClampMode(long pNativeObject, int mode);
	/**
	 * 设置图层贴地模式,只有在绘制贴地图层时才有效
	 * @param mode 贴地模式
	 */
	public void setClampMode(com.earthview.world.spatial3d.atlas.ClampMode mode)
	{
		int modeParamValue = mode.getValue();
		setClampMode_ClampMode(this.nativeObject.pointer, modeParamValue);
	}
	public GeoPolygonEx(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoPolygonEx(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static GeoPolygonEx fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoPolygonEx obj = null;
 		if(baseObj instanceof GeoPolygonEx)
		{
			obj = (GeoPolygonEx)baseObj;
		} else {
			obj = new GeoPolygonEx(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoPolygonEx");
			obj.increaseCast();
		}

		return obj;
	}
}
