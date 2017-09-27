package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelObjectGroupManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager", new ModelObjectGroupManagerClassFactory());
	}

	native private static long getSingletonPtr_void();
	/**
	 * 获取单件对象
	 * @param  
	 * @return 单件对象
	 */
	public static com.earthview.world.spatial3d.modelmanager.ModelObjectGroupManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ModelObjectGroupManager __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectGroupManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelObjectGroupManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectGroupManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelObjectGroupManager");
		}
		return __returnValue;
	}
	native private static void releaseSingleton_void();
	/**
	 * 是否单件对象
	 * @param  
	 */
	public static void releaseSingleton()
	{
		releaseSingleton_void();
	}
	native private long createObjectManager_CSceneManager(long pNativeObject, long ref_pSceneManager);
	/**
	 * 创建可见对象组，此对象组与camera一一对应，为了适应同一个scenemanager里的多个视口情况为了线程安全，函数里会拷贝一个传入的camera对象
	 * @param pSceneManager 场景管理器
	 * @return 对象组
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelObjectManager createObjectManager(com.earthview.world.graphic.SceneManager ref_pSceneManager)
	{
		long ref_pSceneManagerParamValue = (ref_pSceneManager == null ? 0L : ref_pSceneManager.nativeObject.pointer);
		long returnValue = createObjectManager_CSceneManager(this.nativeObject.pointer, ref_pSceneManagerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ModelObjectManager __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelObjectManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelObjectManager");
		}
		return __returnValue;
	}
	native private void destroyObjectManager_CSceneManager(long pNativeObject, long pSceneManager);
	/**
	 * 销毁可见对象组，不负责组内对象的销毁
	 * @param pSceneManager 场景管理器
	 */
	public void destroyObjectManager(com.earthview.world.graphic.SceneManager pSceneManager)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		destroyObjectManager_CSceneManager(this.nativeObject.pointer, pSceneManagerParamValue);
	}
	native private void destroyAllObjectManager_void(long pNativeObject);
	/**
	 * 销毁可见对象组，不负责组内对象的销毁
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public void destroyAllObjectManager()
	{
		destroyAllObjectManager_void(this.nativeObject.pointer);
	}
	native private long getNumObjectManager_void(long pNativeObject);
	/**
	 * 获取管理器个数
	 * @return 管理器个数
	 */
	public long getNumObjectManager()
	{
		long returnValue = getNumObjectManager_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getObjectManager_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取管理器
	 * @param index 管理器序号
	 * @return 管理器
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelObjectManager getObjectManager(long index)
	{
		long indexParamValue = index;
		long returnValue = getObjectManager_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ModelObjectManager __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectManager(CreatedWhenConstruct.CWC_NotToCreate, "CModelObjectManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelObjectManager");
		}
		return __returnValue;
	}
	native private long getLoadWorkQueue_void(long pNativeObject);
	/**
	 * 获加载的取流队列
	 * @return 流队列
	 */
	public com.earthview.world.core.WorkQueue getLoadWorkQueue()
	{
		long returnValue = getLoadWorkQueue_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.WorkQueue __returnValue = new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate, "CWorkQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.WorkQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkQueue");
		}
		return __returnValue;
	}
	native private long getUnloadWorkQueue_void(long pNativeObject);
	/**
	 * 获取没加载的流队列
	 * @return 流队列
	 */
	public com.earthview.world.core.WorkQueue getUnloadWorkQueue()
	{
		long returnValue = getUnloadWorkQueue_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.WorkQueue __returnValue = new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate, "CWorkQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.WorkQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkQueue");
		}
		return __returnValue;
	}
	public ModelObjectGroupManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelObjectGroupManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelObjectGroupManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelObjectGroupManager obj = null;
 		if(baseObj instanceof ModelObjectGroupManager)
		{
			obj = (ModelObjectGroupManager)baseObj;
		} else {
			obj = new ModelObjectGroupManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelObjectGroupManager");
			obj.increaseCast();
		}

		return obj;
	}
}
