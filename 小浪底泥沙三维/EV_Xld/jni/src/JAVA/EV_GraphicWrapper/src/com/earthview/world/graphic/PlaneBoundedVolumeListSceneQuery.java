package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PlaneBoundedVolumeListSceneQuery extends com.earthview.world.graphic.RegionSceneQuery {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery", new PlaneBoundedVolumeListSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCPlaneBoundedVolumeListSceneQueryProxy", new PlaneBoundedVolumeListSceneQueryClassFactory());
	}

	public PlaneBoundedVolumeListSceneQuery(com.earthview.world.graphic.SceneManager ref_mgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mgrPtr = new BasePointer(ref_mgr);
		list.add("ref_mgr", ref_mgrPtr.get());
		Create("JCPlaneBoundedVolumeListSceneQueryProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.PlaneBoundedVolumeListSceneQuery".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setVolumes_PlaneBoundedVolumeList(long pNativeObject, long volumes);
	public void setVolumes(com.earthview.world.spatial.math.PlaneBoundedVolumeList volumes)
	{
		long volumesParamValue = volumes.nativeObject.pointer;
		setVolumes_PlaneBoundedVolumeList(this.nativeObject.pointer, volumesParamValue);
	}
	native private long getVolumes_void(long pNativeObject);
	public com.earthview.world.spatial.math.PlaneBoundedVolumeList getVolumes()
	{
		long returnValue = getVolumes_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.PlaneBoundedVolumeList __returnValue = new com.earthview.world.spatial.math.PlaneBoundedVolumeList(CreatedWhenConstruct.CWC_NotToCreate, "PlaneBoundedVolumeList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.PlaneBoundedVolumeList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "PlaneBoundedVolumeList");
		}
		return __returnValue;
	}
	public PlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.SceneQueryResult execute()
	{
		return super.execute_NoVirtual();
	}
	public void execute(com.earthview.world.graphic.SceneQueryListener listener)
	{
		super.execute_NoVirtual(listener);
	}
	public com.earthview.world.graphic.SceneQueryResult getLastResults()
	{
		return super.getLastResults_NoVirtual();
	}
	public void clearResults()
	{
		super.clearResults_NoVirtual();
	}
	public boolean queryResult(com.earthview.world.graphic.MovableObject first)
	{
		return super.queryResult_NoVirtual(first);
	}
	public boolean queryResult(com.earthview.world.graphic.MovableObject first, com.earthview.world.core.IntVector indexVec)
	{
		return super.queryResult_NoVirtual(first, indexVec);
	}
	public boolean queryResult(com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
	{
		return super.queryResult_NoVirtual(fragment);
	}
	public void setQueryMask(long mask)
	{
		super.setQueryMask_NoVirtual(mask);
	}
	public long getQueryMask()
	{
		return super.getQueryMask_NoVirtual();
	}
	public void setQueryTypeMask(long mask)
	{
		super.setQueryTypeMask_NoVirtual(mask);
	}
	public long getQueryTypeMask()
	{
		return super.getQueryTypeMask_NoVirtual();
	}
	public void setWorldFragmentType(com.earthview.world.graphic.SceneQuery.WorldFragmentType wft)
	{
		super.setWorldFragmentType_NoVirtual(wft);
	}
	public com.earthview.world.graphic.SceneQuery.WorldFragmentType getWorldFragmentType()
	{
		return super.getWorldFragmentType_NoVirtual();
	}
	public com.earthview.world.graphic.SceneQuery.WorldFragmentTypeSet getSupportedWorldFragmentTypes()
	{
		return super.getSupportedWorldFragmentTypes_NoVirtual();
	}
	
	native protected void register_execute_void(long pNativeObject, String method);
	native protected void register_execute_CSceneQueryListener(long pNativeObject, String method);
	native protected void register_getLastResults_void(long pNativeObject, String method);
	native protected void register_clearResults_void(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject_IntVector(long pNativeObject, String method);
	native protected void register_queryResult_WorldFragment(long pNativeObject, String method);
	native protected void register_setQueryMask_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryMask_void(long pNativeObject, String method);
	native protected void register_setQueryTypeMask_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryTypeMask_void(long pNativeObject, String method);
	native protected void register_setWorldFragmentType_WorldFragmentType(long pNativeObject, String method);
	native protected void register_getWorldFragmentType_void(long pNativeObject, String method);
	native protected void register_getSupportedWorldFragmentTypes_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_execute_void(this.nativeObject.pointer, "execute_void_callback");
			this.register_execute_CSceneQueryListener(this.nativeObject.pointer, "execute_CSceneQueryListener_callback");
			this.register_getLastResults_void(this.nativeObject.pointer, "getLastResults_void_callback");
			this.register_clearResults_void(this.nativeObject.pointer, "clearResults_void_callback");
			this.register_queryResult_CMovableObject(this.nativeObject.pointer, "queryResult_CMovableObject_callback");
			this.register_queryResult_CMovableObject_IntVector(this.nativeObject.pointer, "queryResult_CMovableObject_IntVector_callback");
			this.register_queryResult_WorldFragment(this.nativeObject.pointer, "queryResult_WorldFragment_callback");
			this.register_setQueryMask_ev_uint32(this.nativeObject.pointer, "setQueryMask_ev_uint32_callback");
			this.register_getQueryMask_void(this.nativeObject.pointer, "getQueryMask_void_callback");
			this.register_setQueryTypeMask_ev_uint32(this.nativeObject.pointer, "setQueryTypeMask_ev_uint32_callback");
			this.register_getQueryTypeMask_void(this.nativeObject.pointer, "getQueryTypeMask_void_callback");
			this.register_setWorldFragmentType_WorldFragmentType(this.nativeObject.pointer, "setWorldFragmentType_WorldFragmentType_callback");
			this.register_getWorldFragmentType_void(this.nativeObject.pointer, "getWorldFragmentType_void_callback");
			this.register_getSupportedWorldFragmentTypes_void(this.nativeObject.pointer, "getSupportedWorldFragmentTypes_void_callback");
		}
	}
	
	public static PlaneBoundedVolumeListSceneQuery fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PlaneBoundedVolumeListSceneQuery obj = null;
 		if(baseObj instanceof PlaneBoundedVolumeListSceneQuery)
		{
			obj = (PlaneBoundedVolumeListSceneQuery)baseObj;
		} else {
			obj = new PlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPlaneBoundedVolumeListSceneQuery");
			obj.increaseCast();
		}

		return obj;
	}
}
