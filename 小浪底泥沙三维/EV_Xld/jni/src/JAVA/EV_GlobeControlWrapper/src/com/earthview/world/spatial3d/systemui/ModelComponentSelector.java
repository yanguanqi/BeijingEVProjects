package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 组件选择类射线与三角面相交选择到目标的某个组件
 */
public class ModelComponentSelector extends com.earthview.world.graphic.RaySceneQuery {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::CModelComponentSelector", new ModelComponentSelectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::JCModelComponentSelectorProxy", new ModelComponentSelectorClassFactory());
	}

	public ModelComponentSelector(com.earthview.world.graphic.SceneManager ref_creator) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		Create("JCModelComponentSelectorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.systemui.ModelComponentSelector".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void execute_CRaySceneQueryListener(long pNativeObject, long listener);
	public void execute(com.earthview.world.graphic.RaySceneQueryListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		execute_CRaySceneQueryListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void execute_CRaySceneQueryListener_NoVirtual(long pNativeObject, long listener);
	protected void execute_NoVirtual(com.earthview.world.graphic.RaySceneQueryListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		execute_CRaySceneQueryListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	native private long execute_void(long pNativeObject);
	public com.earthview.world.graphic.RaySceneQueryResult execute()
	{
		long returnValue = execute_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RaySceneQueryResult __returnValue = new com.earthview.world.graphic.RaySceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "RaySceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RaySceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RaySceneQueryResult");
		}
		return __returnValue;
	}
	native private long execute_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.RaySceneQueryResult execute_NoVirtual()
	{
		long returnValue = execute_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.RaySceneQueryResult __returnValue = new com.earthview.world.graphic.RaySceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "RaySceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RaySceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RaySceneQueryResult");
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
	native private void setViewport_CViewport(long pNativeObject, long viewport);
	public void setViewport(com.earthview.world.graphic.Viewport viewport)
	{
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		setViewport_CViewport(this.nativeObject.pointer, viewportParamValue);
	}
	native private long getViewport_void(long pNativeObject);
	public com.earthview.world.graphic.Viewport getViewport()
	{
		long returnValue = getViewport_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	public ModelComponentSelector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelComponentSelector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean queryResult(com.earthview.world.graphic.MovableObject obj, double distance)
	{
		return super.queryResult_NoVirtual(obj, distance);
	}
	public boolean queryResult(com.earthview.world.graphic.MovableObject obj, double distance, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.spatial.math.Vector2 pixelpoint)
	{
		return super.queryResult_NoVirtual(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
	}
	public boolean queryResult(com.earthview.world.graphic.MovableObject obj, double distance, float e, short c, int i, int r, com.earthview.world.graphic.ColourValue cv, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.spatial.math.Vector2 pixelpoint)
	{
		return super.queryResult_NoVirtual(obj, distance, e, c, i, r, cv, point, pixelpoint);
	}
	public boolean queryResult(com.earthview.world.graphic.SceneQuery.WorldFragment fragment, double distance)
	{
		return super.queryResult_NoVirtual(fragment, distance);
	}
	public com.earthview.world.graphic.RaySceneQuery.RaySceneQueryInternalListener getListenerPtr()
	{
		return super.getListenerPtr_NoVirtual();
	}
	public void setRay(com.earthview.world.spatial.math.Ray ray)
	{
		super.setRay_NoVirtual(ray);
	}
	public com.earthview.world.spatial.math.Ray getRay()
	{
		return super.getRay_NoVirtual();
	}
	public void setSortByDistance(boolean sort, int maxresults)
	{
		super.setSortByDistance_NoVirtual(sort, maxresults);
	}
	public void setSortByDistance(boolean sort)
	{
		super.setSortByDistance_NoVirtual(sort);
	}
	public boolean getSortByDistance()
	{
		return super.getSortByDistance_NoVirtual();
	}
	public int getMaxResults()
	{
		return super.getMaxResults_NoVirtual();
	}
	public com.earthview.world.graphic.RaySceneQueryResult getLastResults()
	{
		return super.getLastResults_NoVirtual();
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
	
	native protected void register_queryResult_CMovableObject_Real(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(long pNativeObject, String method);
	native protected void register_queryResult_WorldFragment_Real(long pNativeObject, String method);
	native protected void register_getListenerPtr_void(long pNativeObject, String method);
	native protected void register_setRay_CRay(long pNativeObject, String method);
	native protected void register_getRay_void(long pNativeObject, String method);
	native protected void register_setSortByDistance_ev_bool_ev_uint16(long pNativeObject, String method);
	native protected void register_setSortByDistance_ev_bool(long pNativeObject, String method);
	native protected void register_getSortByDistance_void(long pNativeObject, String method);
	native protected void register_getMaxResults_void(long pNativeObject, String method);
	native protected void register_execute_void(long pNativeObject, String method);
	native protected void register_execute_CRaySceneQueryListener(long pNativeObject, String method);
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
			this.register_queryResult_CMovableObject_Real(this.nativeObject.pointer, "queryResult_CMovableObject_Real_callback");
			this.register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(this.nativeObject.pointer, "queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback");
			this.register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(this.nativeObject.pointer, "queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback");
			this.register_queryResult_WorldFragment_Real(this.nativeObject.pointer, "queryResult_WorldFragment_Real_callback");
			this.register_getListenerPtr_void(this.nativeObject.pointer, "getListenerPtr_void_callback");
			this.register_setRay_CRay(this.nativeObject.pointer, "setRay_CRay_callback");
			this.register_getRay_void(this.nativeObject.pointer, "getRay_void_callback");
			this.register_setSortByDistance_ev_bool_ev_uint16(this.nativeObject.pointer, "setSortByDistance_ev_bool_ev_uint16_callback");
			this.register_setSortByDistance_ev_bool(this.nativeObject.pointer, "setSortByDistance_ev_bool_callback");
			this.register_getSortByDistance_void(this.nativeObject.pointer, "getSortByDistance_void_callback");
			this.register_getMaxResults_void(this.nativeObject.pointer, "getMaxResults_void_callback");
			this.register_execute_void(this.nativeObject.pointer, "execute_void_callback");
			this.register_execute_CRaySceneQueryListener(this.nativeObject.pointer, "execute_CRaySceneQueryListener_callback");
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
	
	public static ModelComponentSelector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelComponentSelector obj = null;
 		if(baseObj instanceof ModelComponentSelector)
		{
			obj = (ModelComponentSelector)baseObj;
		} else {
			obj = new ModelComponentSelector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelComponentSelector");
			obj.increaseCast();
		}

		return obj;
	}
}
