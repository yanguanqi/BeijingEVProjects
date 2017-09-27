package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 球选择类球与目标轴向包围盒求交
 */
public class SphereSelector extends com.earthview.world.graphic.SphereSceneQuery {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSphereSelector", new SphereSelectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSphereSelectorProxy", new SphereSelectorClassFactory());
	}

	public SphereSelector(com.earthview.world.graphic.SceneManager ref_creator) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		Create("JCSphereSelectorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SphereSelector".equals(this.getClass().getName()))
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

	native private long execute_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQueryResult execute()
	{
		long returnValue = execute_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneQueryResult __returnValue = new com.earthview.world.graphic.SceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "SceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResult");
		}
		return __returnValue;
	}
	native private long execute_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneQueryResult execute_NoVirtual()
	{
		long returnValue = execute_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneQueryResult __returnValue = new com.earthview.world.graphic.SceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "SceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResult");
		}
		return __returnValue;
	}

	native private void clearResults_void(long pNativeObject);
	public void clearResults()
	{
		clearResults_void(this.nativeObject.pointer);
	}
	native private void clearResults_void_NoVirtual(long pNativeObject);
	protected void clearResults_NoVirtual()
	{
		clearResults_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setRenderSelected_ev_bool(long pNativeObject, boolean render);
	public void setRenderSelected(boolean render)
	{
		boolean renderParamValue = render;
		setRenderSelected_ev_bool(this.nativeObject.pointer, renderParamValue);
	}
	native private boolean getRenderSelected_void(long pNativeObject);
	public boolean getRenderSelected()
	{
		boolean returnValue = getRenderSelected_void(this.nativeObject.pointer);
		return returnValue;
	}
	public SphereSelector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SphereSelector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.SceneQueryResult getLastResults()
	{
		return super.getLastResults_NoVirtual();
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
	
	public static SphereSelector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SphereSelector obj = null;
 		if(baseObj instanceof SphereSelector)
		{
			obj = (SphereSelector)baseObj;
		} else {
			obj = new SphereSelector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSphereSelector");
			obj.increaseCast();
		}

		return obj;
	}
}
