package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceObjectCreator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceObjectCreator", new InstanceObjectCreatorClassFactory());
	}

	public InstanceObjectCreator(com.earthview.world.graphic.MeshPtr mesh, com.earthview.world.graphic.SceneManager ref_sceneMgr, int maxInstancesPerBatch) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer meshPtr = new BasePointer(mesh);
		list.add("mesh", meshPtr.get());
		BasePointer ref_sceneMgrPtr = new BasePointer(ref_sceneMgr);
		list.add("ref_sceneMgr", ref_sceneMgrPtr.get());
		BasePointer maxInstancesPerBatchPtr = new BasePointer(maxInstancesPerBatch);
		list.add("maxInstancesPerBatch", maxInstancesPerBatchPtr.get());
		Create("CInstanceObjectCreator", list);
	}

	native private long createInstance_void(long pNativeObject);
	/// <summary>
	/// 创建对象				
	/// <param name=""></param>				
	/// <returns></returns>
	public com.earthview.world.graphic.InstanceObject createInstance()
	{
		long returnValue = createInstance_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstanceObject __returnValue = new com.earthview.world.graphic.InstanceObject(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstanceObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstanceObject");
		}
		return __returnValue;
	}
	native private boolean destroyInstance_CInstanceObject(long pNativeObject, long obj);
	/// <summary>
	/// 销毁对象				
	/// <param name=""></param>				
	/// <returns></returns>
	public boolean destroyInstance(com.earthview.world.graphic.InstanceObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		boolean returnValue = destroyInstance_CInstanceObject(this.nativeObject.pointer, objParamValue);
		return returnValue;
	}
	native private void destroyAllInstances_void(long pNativeObject);
	/// <summary>
	/// 销毁全部对象				
	/// <param name=""></param>				
	/// <returns></returns>
	public void destroyAllInstances()
	{
		destroyAllInstances_void(this.nativeObject.pointer);
	}
	native private long getNumInstanceObjects_void(long pNativeObject);
	/**
	 * 获取创建的Instance的数目
	 */
	public long getNumInstanceObjects()
	{
		long returnValue = getNumInstanceObjects_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNumInstanceBatches_ev_uint16(long pNativeObject, int submeshIndex);
	/**
	 * 获取创建的InstanceBatch的数目
	 */
	public long getNumInstanceBatches(int submeshIndex)
	{
		int submeshIndexParamValue = submeshIndex;
		long returnValue = getNumInstanceBatches_ev_uint16(this.nativeObject.pointer, submeshIndexParamValue);
		return returnValue;
	}
	native private long getInstanceBatch_ev_uint16_ev_uint32(long pNativeObject, int submeshIndex, long instanceBatchIndex);
	/**
	 * 获取创建的InstanceBatch
	 */
	public com.earthview.world.graphic.InstanceBatch getInstanceBatch(int submeshIndex, long instanceBatchIndex)
	{
		int submeshIndexParamValue = submeshIndex;
		long instanceBatchIndexParamValue = instanceBatchIndex;
		long returnValue = getInstanceBatch_ev_uint16_ev_uint32(this.nativeObject.pointer, submeshIndexParamValue, instanceBatchIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.InstanceBatch __returnValue = new com.earthview.world.graphic.InstanceBatch(CreatedWhenConstruct.CWC_NotToCreate, "CInstanceBatch");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.InstanceBatch)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CInstanceBatch");
		}
		return __returnValue;
	}
	public InstanceObjectCreator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public InstanceObjectCreator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static InstanceObjectCreator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		InstanceObjectCreator obj = null;
 		if(baseObj instanceof InstanceObjectCreator)
		{
			obj = (InstanceObjectCreator)baseObj;
		} else {
			obj = new InstanceObjectCreator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CInstanceObjectCreator");
			obj.increaseCast();
		}

		return obj;
	}
}
