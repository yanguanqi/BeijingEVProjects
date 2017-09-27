package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelObjectManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelObjectManager", new ModelObjectManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param pSceneManager 场景管理器
	 */
	public ModelObjectManager(com.earthview.world.graphic.SceneManager ref_pSceneManager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pSceneManagerPtr = new BasePointer(ref_pSceneManager);
		list.add("ref_pSceneManager", ref_pSceneManagerPtr.get());
		Create("CModelObjectManager", list);
	}

	native private void findVisibleObjects_CCamera(long pNativeObject, long camera);
	/**
	 * 找出可见对象
	 * @param camera 相机对象
	 */
	public void findVisibleObjects(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		findVisibleObjects_CCamera(this.nativeObject.pointer, cameraParamValue);
	}
	native private void addLayer_CEntityLayer(long pNativeObject, long ref_layer);
	/**
	 * 添加图层到管理器
	 * @param layer entity图层对象
	 */
	public void addLayer(com.earthview.world.spatial3d.atlas.EntityLayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		addLayer_CEntityLayer(this.nativeObject.pointer, ref_layerParamValue);
	}
	native private void removeLayer_CEntityLayer(long pNativeObject, long layer);
	/**
	 * 从管理器删除图层
	 * @param layer entity图层对象
	 */
	public void removeLayer(com.earthview.world.spatial3d.atlas.EntityLayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		removeLayer_CEntityLayer(this.nativeObject.pointer, layerParamValue);
	}
	native private long getNumLayer_void(long pNativeObject);
	/**
	 * 获取管理的图层数
	 * @return 图层个数
	 */
	public long getNumLayer()
	{
		long returnValue = getNumLayer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取管理的图层
	 * @param index 图层序号
	 * @return 图层对象
	 */
	public com.earthview.world.spatial3d.atlas.EntityLayer getLayer(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.EntityLayer __returnValue = new com.earthview.world.spatial3d.atlas.EntityLayer(CreatedWhenConstruct.CWC_NotToCreate, "CEntityLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.EntityLayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntityLayer");
		}
		return __returnValue;
	}
	public ModelObjectManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelObjectManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelObjectManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelObjectManager obj = null;
 		if(baseObj instanceof ModelObjectManager)
		{
			obj = (ModelObjectManager)baseObj;
		} else {
			obj = new ModelObjectManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelObjectManager");
			obj.increaseCast();
		}

		return obj;
	}
}
