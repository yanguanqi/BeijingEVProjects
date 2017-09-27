package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Layer3DEditorManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CLayer3DEditorManager", new Layer3DEditorManagerClassFactory());
	}

	native private static long getSingletonPtr_void();
	/**
	 * 获取单件对象
	 * @param  
	 * @return 单件对象
	 */
	public static com.earthview.world.spatial3d.Layer3DEditorManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Layer3DEditorManager __returnValue = new com.earthview.world.spatial3d.Layer3DEditorManager(CreatedWhenConstruct.CWC_NotToCreate, "CLayer3DEditorManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Layer3DEditorManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayer3DEditorManager");
		}
		return __returnValue;
	}
	native private static void releaseSingleton_void();
	/**
	 * 释放单件对象
	 * @param  
	 */
	public static void releaseSingleton()
	{
		releaseSingleton_void();
	}
	native private long getModelLayerEditor_void(long pNativeObject);
	/**
	 * 获取模型图层编辑对象（获得默认的图层编辑器）
	 * @param  
	 * @return 图层编辑对象
	 */
	public com.earthview.world.spatial3d.Layer3DEditor getModelLayerEditor()
	{
		long returnValue = getModelLayerEditor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Layer3DEditor __returnValue = new com.earthview.world.spatial3d.Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate, "CLayer3DEditor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Layer3DEditor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayer3DEditor");
		}
		return __returnValue;
	}
	native private long getEffectLayerEditor_void(long pNativeObject);
	/**
	 * 获取特效图层编辑对象（获得默认的图层编辑器）
	 * @param  
	 * @return 图层编辑对象
	 */
	public com.earthview.world.spatial3d.Layer3DEditor getEffectLayerEditor()
	{
		long returnValue = getEffectLayerEditor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Layer3DEditor __returnValue = new com.earthview.world.spatial3d.Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate, "CLayer3DEditor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Layer3DEditor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayer3DEditor");
		}
		return __returnValue;
	}
	native private long getMeshxgLayerEditor_void(long pNativeObject);
	/**
	 * 获取meshxg图层编辑对象（获得默认的图层编辑器）
	 * @param  
	 * @return 图层编辑对象
	 */
	public com.earthview.world.spatial3d.Layer3DEditor getMeshxgLayerEditor()
	{
		long returnValue = getMeshxgLayerEditor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Layer3DEditor __returnValue = new com.earthview.world.spatial3d.Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate, "CLayer3DEditor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Layer3DEditor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayer3DEditor");
		}
		return __returnValue;
	}
	native private long createModelLayerEditor_void(long pNativeObject);
	/**
	 * 创建模型图层编辑对象
	 * @param  
	 * @return 图层编辑对象
	 */
	public com.earthview.world.spatial3d.Layer3DEditor createModelLayerEditor()
	{
		long returnValue = createModelLayerEditor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Layer3DEditor __returnValue = new com.earthview.world.spatial3d.Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate, "CLayer3DEditor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Layer3DEditor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayer3DEditor");
		}
		return __returnValue;
	}
	native private void destoryModelLayerEditor_CLayer3DEditor(long pNativeObject, long pEditor);
	/**
	 * 销毁模型图层编辑对象
	 * @param  
	 * @return 图层编辑对象
	 */
	public void destoryModelLayerEditor(com.earthview.world.spatial3d.Layer3DEditor pEditor)
	{
		long pEditorParamValue = (pEditor == null ? 0L : pEditor.nativeObject.pointer);
		destoryModelLayerEditor_CLayer3DEditor(this.nativeObject.pointer, pEditorParamValue);
	}
	public Layer3DEditorManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Layer3DEditorManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Layer3DEditorManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Layer3DEditorManager obj = null;
 		if(baseObj instanceof Layer3DEditorManager)
		{
			obj = (Layer3DEditorManager)baseObj;
		} else {
			obj = new Layer3DEditorManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayer3DEditorManager");
			obj.increaseCast();
		}

		return obj;
	}
}
