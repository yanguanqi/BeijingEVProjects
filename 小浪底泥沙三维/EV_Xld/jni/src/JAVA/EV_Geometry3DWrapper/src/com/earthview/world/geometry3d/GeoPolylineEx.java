package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 聚合二维的图层，提供在三维中渲染的接口管理三维中二维图层
 */
public class GeoPolylineEx extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CGeoPolylineEx", new GeoPolylineExClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCGeoPolylineExProxy", new GeoPolylineExClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public GeoPolylineEx(com.earthview.world.graphic.SceneManager ref_scenemanager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		Create("JCGeoPolylineExProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.GeoPolylineEx".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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
	 * 渲染
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
	 * 取消渲染
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
	public GeoPolylineEx(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoPolylineEx(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
		}
	}
	
	public static GeoPolylineEx fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoPolylineEx obj = null;
 		if(baseObj instanceof GeoPolylineEx)
		{
			obj = (GeoPolylineEx)baseObj;
		} else {
			obj = new GeoPolylineEx(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoPolylineEx");
			obj.increaseCast();
		}

		return obj;
	}
}
