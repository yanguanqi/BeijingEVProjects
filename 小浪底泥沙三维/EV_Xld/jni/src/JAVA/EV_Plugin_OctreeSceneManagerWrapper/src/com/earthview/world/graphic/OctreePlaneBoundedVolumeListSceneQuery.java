package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OctreePlaneBoundedVolumeListSceneQuery extends com.earthview.world.graphic.DefaultPlaneBoundedVolumeListSceneQuery {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery", new OctreePlaneBoundedVolumeListSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOctreePlaneBoundedVolumeListSceneQueryProxy", new OctreePlaneBoundedVolumeListSceneQueryClassFactory());
	}

	public OctreePlaneBoundedVolumeListSceneQuery(com.earthview.world.graphic.SceneManager ref_creator) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		Create("JCOctreePlaneBoundedVolumeListSceneQueryProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.OctreePlaneBoundedVolumeListSceneQuery".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void execute_CSceneQueryListener(long pNativeObject, long listener);
	public void execute(com.earthview.world.graphic.SceneQueryListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		execute_CSceneQueryListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void execute_CSceneQueryListener_NoVirtual(long pNativeObject, long listener);
	protected void execute_NoVirtual(com.earthview.world.graphic.SceneQueryListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		execute_CSceneQueryListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	public OctreePlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public OctreePlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.SceneQueryResult execute()
	{
		return super.execute_NoVirtual();
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
	
	public static OctreePlaneBoundedVolumeListSceneQuery fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		OctreePlaneBoundedVolumeListSceneQuery obj = null;
 		if(baseObj instanceof OctreePlaneBoundedVolumeListSceneQuery)
		{
			obj = (OctreePlaneBoundedVolumeListSceneQuery)baseObj;
		} else {
			obj = new OctreePlaneBoundedVolumeListSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COctreePlaneBoundedVolumeListSceneQuery");
			obj.increaseCast();
		}

		return obj;
	}
}
