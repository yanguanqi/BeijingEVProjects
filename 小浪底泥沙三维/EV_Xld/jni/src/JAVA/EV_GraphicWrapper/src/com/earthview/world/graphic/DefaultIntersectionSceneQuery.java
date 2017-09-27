package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DefaultIntersectionSceneQuery extends com.earthview.world.graphic.IntersectionSceneQuery {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CDefaultIntersectionSceneQuery", new DefaultIntersectionSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCDefaultIntersectionSceneQueryProxy", new DefaultIntersectionSceneQueryClassFactory());
	}

	public DefaultIntersectionSceneQuery(com.earthview.world.graphic.SceneManager ref_creator) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		Create("JCDefaultIntersectionSceneQueryProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.DefaultIntersectionSceneQuery".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void execute_CIntersectionSceneQueryListener(long pNativeObject, long listener);
	public void execute(com.earthview.world.graphic.IntersectionSceneQueryListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		execute_CIntersectionSceneQueryListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void execute_CIntersectionSceneQueryListener_NoVirtual(long pNativeObject, long listener);
	protected void execute_NoVirtual(com.earthview.world.graphic.IntersectionSceneQueryListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		execute_CIntersectionSceneQueryListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	public DefaultIntersectionSceneQuery(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DefaultIntersectionSceneQuery(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean queryResult(com.earthview.world.graphic.MovableObject first, com.earthview.world.graphic.MovableObject second)
	{
		return super.queryResult_NoVirtual(first, second);
	}
	public boolean queryResult(com.earthview.world.graphic.MovableObject movable, com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
	{
		return super.queryResult_NoVirtual(movable, fragment);
	}
	public com.earthview.world.graphic.IntersectionSceneQuery.IntersectionSceneQueryInternalListener getListenerPtr()
	{
		return super.getListenerPtr_NoVirtual();
	}
	public com.earthview.world.graphic.IntersectionSceneQueryResult execute()
	{
		return super.execute_NoVirtual();
	}
	public com.earthview.world.graphic.IntersectionSceneQueryResult getLastResults()
	{
		return super.getLastResults_NoVirtual();
	}
	public void clearResults()
	{
		super.clearResults_NoVirtual();
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
	
	native protected void register_queryResult_CMovableObject_CMovableObject(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject_WorldFragment(long pNativeObject, String method);
	native protected void register_getListenerPtr_void(long pNativeObject, String method);
	native protected void register_execute_void(long pNativeObject, String method);
	native protected void register_execute_CIntersectionSceneQueryListener(long pNativeObject, String method);
	native protected void register_getLastResults_void(long pNativeObject, String method);
	native protected void register_clearResults_void(long pNativeObject, String method);
	native protected void register_setQueryMask_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryMask_void(long pNativeObject, String method);
	native protected void register_setQueryTypeMask_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryTypeMask_void(long pNativeObject, String method);
	native protected void register_setWorldFragmentType_WorldFragmentType(long pNativeObject, String method);
	native protected void register_getWorldFragmentType_void(long pNativeObject, String method);
	native protected void register_getSupportedWorldFragmentTypes_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_queryResult_CMovableObject_CMovableObject(this.nativeObject.pointer, "queryResult_CMovableObject_CMovableObject_callback");
			this.register_queryResult_CMovableObject_WorldFragment(this.nativeObject.pointer, "queryResult_CMovableObject_WorldFragment_callback");
			this.register_getListenerPtr_void(this.nativeObject.pointer, "getListenerPtr_void_callback");
			this.register_execute_void(this.nativeObject.pointer, "execute_void_callback");
			this.register_execute_CIntersectionSceneQueryListener(this.nativeObject.pointer, "execute_CIntersectionSceneQueryListener_callback");
			this.register_getLastResults_void(this.nativeObject.pointer, "getLastResults_void_callback");
			this.register_clearResults_void(this.nativeObject.pointer, "clearResults_void_callback");
			this.register_setQueryMask_ev_uint32(this.nativeObject.pointer, "setQueryMask_ev_uint32_callback");
			this.register_getQueryMask_void(this.nativeObject.pointer, "getQueryMask_void_callback");
			this.register_setQueryTypeMask_ev_uint32(this.nativeObject.pointer, "setQueryTypeMask_ev_uint32_callback");
			this.register_getQueryTypeMask_void(this.nativeObject.pointer, "getQueryTypeMask_void_callback");
			this.register_setWorldFragmentType_WorldFragmentType(this.nativeObject.pointer, "setWorldFragmentType_WorldFragmentType_callback");
			this.register_getWorldFragmentType_void(this.nativeObject.pointer, "getWorldFragmentType_void_callback");
			this.register_getSupportedWorldFragmentTypes_void(this.nativeObject.pointer, "getSupportedWorldFragmentTypes_void_callback");
		}
	}
	
	public static DefaultIntersectionSceneQuery fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DefaultIntersectionSceneQuery obj = null;
 		if(baseObj instanceof DefaultIntersectionSceneQuery)
		{
			obj = (DefaultIntersectionSceneQuery)baseObj;
		} else {
			obj = new DefaultIntersectionSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDefaultIntersectionSceneQuery");
			obj.increaseCast();
		}

		return obj;
	}
}
