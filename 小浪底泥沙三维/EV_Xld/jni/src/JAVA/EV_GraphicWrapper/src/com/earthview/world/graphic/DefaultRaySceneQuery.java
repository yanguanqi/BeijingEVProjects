package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DefaultRaySceneQuery extends com.earthview.world.graphic.RaySceneQuery {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CDefaultRaySceneQuery", new DefaultRaySceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCDefaultRaySceneQueryProxy", new DefaultRaySceneQueryClassFactory());
	}

	public DefaultRaySceneQuery(com.earthview.world.graphic.SceneManager ref_creator) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		Create("JCDefaultRaySceneQueryProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.DefaultRaySceneQuery".equals(this.getClass().getName()))
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

	public DefaultRaySceneQuery(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DefaultRaySceneQuery(CreatedWhenConstruct cwc, String classNameStr) {
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
	public com.earthview.world.graphic.RaySceneQueryResult execute()
	{
		return super.execute_NoVirtual();
	}
	public com.earthview.world.graphic.RaySceneQueryResult getLastResults()
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
	
	public static DefaultRaySceneQuery fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DefaultRaySceneQuery obj = null;
 		if(baseObj instanceof DefaultRaySceneQuery)
		{
			obj = (DefaultRaySceneQuery)baseObj;
		} else {
			obj = new DefaultRaySceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDefaultRaySceneQuery");
			obj.increaseCast();
		}

		return obj;
	}
}
