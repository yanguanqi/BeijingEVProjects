package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * kml要素编辑工具管理
 */
public class KmlFeatureEditToolManager extends com.earthview.world.spatial3d.kmlmanager.Ikmlobserver {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager", new KmlFeatureEditToolManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::JCKmlFeatureEditToolManagerProxy", new KmlFeatureEditToolManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param sceneMgr 场景管理器
	 * @param camera 相机
	 * @param treeEventObject kml树事件
	 */
	public KmlFeatureEditToolManager(com.earthview.world.graphic.SceneManager ref_sceneMgr, com.earthview.world.graphic.Camera ref_camera, com.earthview.world.graphic.Viewport ref_viewPort, com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeManager ref_treeEventObject) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_sceneMgrPtr = new BasePointer(ref_sceneMgr);
		list.add("ref_sceneMgr", ref_sceneMgrPtr.get());
		BasePointer ref_cameraPtr = new BasePointer(ref_camera);
		list.add("ref_camera", ref_cameraPtr.get());
		BasePointer ref_viewPortPtr = new BasePointer(ref_viewPort);
		list.add("ref_viewPort", ref_viewPortPtr.get());
		BasePointer ref_treeEventObjectPtr = new BasePointer(ref_treeEventObject);
		list.add("ref_treeEventObject", ref_treeEventObjectPtr.get());
		Create("JCKmlFeatureEditToolManagerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.kmlmanager.KmlFeatureEditToolManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void refresh_void(long pNativeObject);
	///<Summary>
	///刷新非视图数据
	///</Summary>
	/// <returns></returns>
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private void refresh_void_NoVirtual(long pNativeObject);
	protected void refresh_NoVirtual()
	{
		refresh_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void destoryCurrentTool_void(long pNativeObject);
	///<Summary>
	/// 销毁当前的工具
	///</Summary>
	/// <returns></returns>
	public void destoryCurrentTool()
	{
		destoryCurrentTool_void(this.nativeObject.pointer);
	}
	native private void refresh_CGeoObjectExtension_CKmlDocument(long pNativeObject, long geoObj, long parent);
	/**
	 * 刷新工具
	 * @param geoObj 地理对象
	 * @param parent kml文档
	 */
	public void refresh(com.earthview.world.spatial.kml.GeoObjectExtension geoObj, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		refresh_CGeoObjectExtension_CKmlDocument(this.nativeObject.pointer, geoObjParamValue, parentParamValue);
	}
	native private long endEdit_ev_bool_CKmlDocument(long pNativeObject, boolean isCancelEdit, long parent);
	/**
	 * 结束编辑操作
	 * @param isCancelEdit 是否取消编辑
	 * @param parent kml文档
	 * @return 返回地理对象
	 */
	public com.earthview.world.spatial.kml.GeoObjectExtension endEdit(boolean isCancelEdit, com.earthview.world.spatial.kml.KmlDocument parent)
	{
		boolean isCancelEditParamValue = isCancelEdit;
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		long returnValue = endEdit_ev_bool_CKmlDocument(this.nativeObject.pointer, isCancelEditParamValue, parentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.GeoObjectExtension __returnValue = new com.earthview.world.spatial.kml.GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObjectExtension");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjectExtension)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtension");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_CSceneManager_CCamera_CViewport_CKmlTreeManager(long ref_sceneMgr, long ref_camera, long ref_viewPort, long ref_treeEventObj);
	/**
	 * 获取单例
	 * @param sceneMgr 场景管理器
	 * @param camera 相机
	 * @param treeEventObject kml树事件
	 * @return kml要素编辑工具
	 */
	public static com.earthview.world.spatial3dproxy.kmlmanager.KmlFeatureEditToolManager getSingletonPtr(com.earthview.world.graphic.SceneManager ref_sceneMgr, com.earthview.world.graphic.Camera ref_camera, com.earthview.world.graphic.Viewport ref_viewPort, com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeManager ref_treeEventObj)
	{
		long ref_sceneMgrParamValue = (ref_sceneMgr == null ? 0L : ref_sceneMgr.nativeObject.pointer);
		long ref_cameraParamValue = (ref_camera == null ? 0L : ref_camera.nativeObject.pointer);
		long ref_viewPortParamValue = (ref_viewPort == null ? 0L : ref_viewPort.nativeObject.pointer);
		long ref_treeEventObjParamValue = (ref_treeEventObj == null ? 0L : ref_treeEventObj.nativeObject.pointer);
		long returnValue = getSingletonPtr_CSceneManager_CCamera_CViewport_CKmlTreeManager(ref_sceneMgrParamValue, ref_cameraParamValue, ref_viewPortParamValue, ref_treeEventObjParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3dproxy.kmlmanager.KmlFeatureEditToolManager __returnValue = new com.earthview.world.spatial3dproxy.kmlmanager.KmlFeatureEditToolManager(CreatedWhenConstruct.CWC_NotToCreate, "CKmlFeatureEditToolManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3dproxy.kmlmanager.KmlFeatureEditToolManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlFeatureEditToolManager");
		}
		return __returnValue;
	}
	native private long createTool_CGeoObjectExtension_CKmlDocument_ev_bool(long pNativeObject, long data, long parent, boolean isCreate);
	/**
	 * 创建工具
	 * @param data 地理对象
	 * @param parent kml文档
	 * @param isCreate 是否创建
	 * @return kml要素编辑工具
	 */
	public com.earthview.world.spatial.systemui.Itool createTool(com.earthview.world.spatial.kml.GeoObjectExtension data, com.earthview.world.spatial.kml.KmlDocument parent, boolean isCreate)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		boolean isCreateParamValue = isCreate;
		long returnValue = createTool_CGeoObjectExtension_CKmlDocument_ev_bool(this.nativeObject.pointer, dataParamValue, parentParamValue, isCreateParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Itool __returnValue = new com.earthview.world.spatial.systemui.Itool(CreatedWhenConstruct.CWC_NotToCreate, "ITool");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Itool)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITool");
		}
		return __returnValue;
	}
	native private long get_mCurrentTool_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.Itool get_mCurrentTool()
	{
		long jniValue = get_mCurrentTool_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Itool __returnValue = new com.earthview.world.spatial.systemui.Itool(CreatedWhenConstruct.CWC_NotToCreate, "ITool");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Itool)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITool");
		}
		return __returnValue;
	}
	
	native private void set_mCurrentTool_ITool (long pNativeObject, long value);
	public void set_mCurrentTool(com.earthview.world.spatial.systemui.Itool mCurrentTool)
	{
		long mCurrentToolParamValue = (mCurrentTool == null ? 0L : mCurrentTool.nativeObject.pointer);
		
		set_mCurrentTool_ITool(this.nativeObject.pointer, mCurrentToolParamValue);
	}
	
	native private long get_mSymbol_void(long pNativeObject);
	public com.earthview.world.spatial.display.Isymbol get_mSymbol()
	{
		long jniValue = get_mSymbol_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	
	native private void set_mSymbol_ISymbol (long pNativeObject, long value);
	public void set_mSymbol(com.earthview.world.spatial.display.Isymbol mSymbol)
	{
		long mSymbolParamValue = (mSymbol == null ? 0L : mSymbol.nativeObject.pointer);
		
		set_mSymbol_ISymbol(this.nativeObject.pointer, mSymbolParamValue);
	}
	
	public KmlFeatureEditToolManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlFeatureEditToolManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	///<Summary>
	///更新视图数据
	///</Summary>
	/// <returns></returns>
	public void update()
	{
		super.update_NoVirtual();
	}
	///<Summary>
	////Tool Deactivate 刷新
	////</Summary>
	//// <returns></returns>
	public void toolDeactivatedUpdate()
	{
		super.toolDeactivatedUpdate_NoVirtual();
	}
	
	native protected void register_update_void(long pNativeObject, String method);
	native protected void register_refresh_void(long pNativeObject, String method);
	native protected void register_toolDeactivatedUpdate_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
			this.register_refresh_void(this.nativeObject.pointer, "refresh_void_callback");
			this.register_toolDeactivatedUpdate_void(this.nativeObject.pointer, "toolDeactivatedUpdate_void_callback");
		}
	}
	
	public static KmlFeatureEditToolManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlFeatureEditToolManager obj = null;
 		if(baseObj instanceof KmlFeatureEditToolManager)
		{
			obj = (KmlFeatureEditToolManager)baseObj;
		} else {
			obj = new KmlFeatureEditToolManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlFeatureEditToolManager");
			obj.increaseCast();
		}

		return obj;
	}
}
