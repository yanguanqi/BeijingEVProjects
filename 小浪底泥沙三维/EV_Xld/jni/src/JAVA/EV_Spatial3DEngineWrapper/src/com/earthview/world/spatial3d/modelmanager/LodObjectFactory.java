package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodObjectFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CLodObjectFactory", new LodObjectFactoryClassFactory());
	}

	native private static long getFactory_CSceneManager(long pSceneManager);
	/**
	 * 获取工厂句柄
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.LodObjectFactory getFactory(com.earthview.world.graphic.SceneManager pSceneManager)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long returnValue = getFactory_CSceneManager(pSceneManagerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.LodObjectFactory __returnValue = new com.earthview.world.spatial3d.modelmanager.LodObjectFactory(CreatedWhenConstruct.CWC_NotToCreate, "CLodObjectFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LodObjectFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLodObjectFactory");
		}
		return __returnValue;
	}
	native private static void releaseFactory_CLodObjectFactory(long factory);
	/**
	 * 释放工厂句柄
	 * @param  
	 */
	public static void releaseFactory(com.earthview.world.spatial3d.modelmanager.LodObjectFactory factory)
	{
		long factoryParamValue = (factory == null ? 0L : factory.nativeObject.pointer);
		releaseFactory_CLodObjectFactory(factoryParamValue);
	}
	native private long getSceneManager_void(long pNativeObject);
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
	native private long createMeshxObject_EVString_EVString(long pNativeObject, String file, String group);
	/**
	 * 创建meshx对象
	 * @param file .meshx文件
	 * @param group 资源组
	 */
	public com.earthview.world.spatial3d.modelmanager.MeshxObject createMeshxObject(String file, String group)
	{
		String fileParamValue = file;
		String groupParamValue = group;
		long returnValue = createMeshxObject_EVString_EVString(this.nativeObject.pointer, fileParamValue, groupParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.MeshxObject __returnValue = new com.earthview.world.spatial3d.modelmanager.MeshxObject(CreatedWhenConstruct.CWC_NotToCreate, "CMeshxObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.MeshxObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshxObject");
		}
		return __returnValue;
	}
	native private void destroyObject_CLodObject(long pNativeObject, long obj);
	/**
	 * 销毁对象
	 */
	public void destroyObject(com.earthview.world.spatial3d.modelmanager.LodObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		destroyObject_CLodObject(this.nativeObject.pointer, objParamValue);
	}
	public LodObjectFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LodObjectFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LodObjectFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LodObjectFactory obj = null;
 		if(baseObj instanceof LodObjectFactory)
		{
			obj = (LodObjectFactory)baseObj;
		} else {
			obj = new LodObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLodObjectFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
