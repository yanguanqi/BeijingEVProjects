package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlWorkQueueState extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CKmlWorkQueueState", new KmlWorkQueueStateClassFactory());
	}

	public enum EVKmlWorkQueueState implements INativeEnum<EVKmlWorkQueueState> {
		KWT_INIT(EVKmlWorkQueueStateHelper.ENUM_VALUES[0]),
		KWT_LOADING(EVKmlWorkQueueStateHelper.ENUM_VALUES[1]),
		KWT_LOADED(EVKmlWorkQueueStateHelper.ENUM_VALUES[2]),
		KWT_UNLOADING(EVKmlWorkQueueStateHelper.ENUM_VALUES[3]),
		KWT_FAIL(EVKmlWorkQueueStateHelper.ENUM_VALUES[4]);
		private int value;
		EVKmlWorkQueueState(int i) {
			this.value = i;
		}
		public EVKmlWorkQueueState getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVKmlWorkQueueState toEnum(int retval) {
			if(retval == KWT_INIT.value){
				return KWT_INIT;
			}
			else if(retval == KWT_LOADING.value){
				return KWT_LOADING;
			}
			else if(retval == KWT_LOADED.value){
				return KWT_LOADED;
			}
			else if(retval == KWT_UNLOADING.value){
				return KWT_UNLOADING;
			}
			else if(retval == KWT_FAIL.value){
				return KWT_FAIL;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVKmlWorkQueueStateHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EVKmlRequestType implements INativeEnum<EVKmlRequestType> {
		KRT_LOAD(EVKmlRequestTypeHelper.ENUM_VALUES[0]),
		KRT_UNLOAD(EVKmlRequestTypeHelper.ENUM_VALUES[1]),
		KRT_LOADKML(EVKmlRequestTypeHelper.ENUM_VALUES[2]),
		KRT_UNLOADKML(EVKmlRequestTypeHelper.ENUM_VALUES[3]);
		private int value;
		EVKmlRequestType(int i) {
			this.value = i;
		}
		public EVKmlRequestType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVKmlRequestType toEnum(int retval) {
			if(retval == KRT_LOAD.value){
				return KRT_LOAD;
			}
			else if(retval == KRT_UNLOAD.value){
				return KRT_UNLOAD;
			}
			else if(retval == KRT_LOADKML.value){
				return KRT_LOADKML;
			}
			else if(retval == KRT_UNLOADKML.value){
				return KRT_UNLOADKML;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVKmlRequestTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 默认构造函数
	 */
	public KmlWorkQueueState() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlWorkQueueState", null);
	}

	native private String get_ReqID_void(long pNativeObject);
	public ULongPointer get_ReqID()
	{
		String jniValue = get_ReqID_void(this.nativeObject.pointer);
		
		ULongPointer __returnValue = new ULongPointer(jniValue);
		return __returnValue;
	}
	
	native private void set_ReqID_ev_uint64 (long pNativeObject, long value);
	public void set_ReqID(ULongPointer ReqID)
	{
		long ReqIDParamValue = ReqID.nativeObject.pointer;
		
		set_ReqID_ev_uint64(this.nativeObject.pointer, ReqIDParamValue);
	}
	
	native private boolean get_ReqAbort_void(long pNativeObject);
	public boolean get_ReqAbort()
	{
		boolean jniValue = get_ReqAbort_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_ReqAbort_ev_bool (long pNativeObject, boolean value);
	public void set_ReqAbort(boolean ReqAbort)
	{
		boolean ReqAbortParamValue = ReqAbort;
		
		set_ReqAbort_ev_bool(this.nativeObject.pointer, ReqAbortParamValue);
	}
	
	native private int get_ReqType_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlWorkQueueState.EVKmlRequestType get_ReqType()
	{
		int jniValue = get_ReqType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.kml.KmlWorkQueueState.EVKmlRequestType.toEnum(jniValue);
	}
	
	native private void set_ReqType_EVKmlRequestType (long pNativeObject, int value);
	public void set_ReqType(com.earthview.world.spatial.kml.KmlWorkQueueState.EVKmlRequestType ReqType)
	{
		int ReqTypeParamValue = ReqType.getValue();
		
		set_ReqType_EVKmlRequestType(this.nativeObject.pointer, ReqTypeParamValue);
	}
	
	native private int get_WorkStateEnum_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlWorkQueueState.EVKmlWorkQueueState get_WorkStateEnum()
	{
		int jniValue = get_WorkStateEnum_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.kml.KmlWorkQueueState.EVKmlWorkQueueState.toEnum(jniValue);
	}
	
	native private void set_WorkStateEnum_EVKmlWorkQueueState (long pNativeObject, int value);
	public void set_WorkStateEnum(com.earthview.world.spatial.kml.KmlWorkQueueState.EVKmlWorkQueueState WorkStateEnum)
	{
		int WorkStateEnumParamValue = WorkStateEnum.getValue();
		
		set_WorkStateEnum_EVKmlWorkQueueState(this.nativeObject.pointer, WorkStateEnumParamValue);
	}
	
	native private long get_mDistance_void(long pNativeObject);
	public long get_mDistance()
	{
		long jniValue = get_mDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mDistance_ev_uint32 (long pNativeObject, long value);
	public void set_mDistance(long mDistance)
	{
		long mDistanceParamValue = mDistance;
		
		set_mDistance_ev_uint32(this.nativeObject.pointer, mDistanceParamValue);
	}
	
	native private boolean get_LayerVisible_void(long pNativeObject);
	public boolean get_LayerVisible()
	{
		boolean jniValue = get_LayerVisible_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_LayerVisible_ev_bool (long pNativeObject, boolean value);
	public void set_LayerVisible(boolean LayerVisible)
	{
		boolean LayerVisibleParamValue = LayerVisible;
		
		set_LayerVisible_ev_bool(this.nativeObject.pointer, LayerVisibleParamValue);
	}
	
	native private boolean get_NeedRefresh_void(long pNativeObject);
	public boolean get_NeedRefresh()
	{
		boolean jniValue = get_NeedRefresh_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_NeedRefresh_ev_bool (long pNativeObject, boolean value);
	public void set_NeedRefresh(boolean NeedRefresh)
	{
		boolean NeedRefreshParamValue = NeedRefresh;
		
		set_NeedRefresh_ev_bool(this.nativeObject.pointer, NeedRefreshParamValue);
	}
	
	native private boolean get_GeoVisible_void(long pNativeObject);
	public boolean get_GeoVisible()
	{
		boolean jniValue = get_GeoVisible_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_GeoVisible_ev_bool (long pNativeObject, boolean value);
	public void set_GeoVisible(boolean GeoVisible)
	{
		boolean GeoVisibleParamValue = GeoVisible;
		
		set_GeoVisible_ev_bool(this.nativeObject.pointer, GeoVisibleParamValue);
	}
	
	native private long get_VisibleGeoObject_void(long pNativeObject);
	public com.earthview.world.spatial.GeoObject get_VisibleGeoObject()
	{
		long jniValue = get_VisibleGeoObject_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.GeoObject __returnValue = new com.earthview.world.spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObject");
		}
		return __returnValue;
	}
	
	native private void set_VisibleGeoObject_CGeoObject (long pNativeObject, long value);
	public void set_VisibleGeoObject(com.earthview.world.spatial.GeoObject VisibleGeoObject)
	{
		long VisibleGeoObjectParamValue = (VisibleGeoObject == null ? 0L : VisibleGeoObject.nativeObject.pointer);
		
		set_VisibleGeoObject_CGeoObject(this.nativeObject.pointer, VisibleGeoObjectParamValue);
	}
	
	public KmlWorkQueueState(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlWorkQueueState(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlWorkQueueState fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlWorkQueueState obj = null;
 		if(baseObj instanceof KmlWorkQueueState)
		{
			obj = (KmlWorkQueueState)baseObj;
		} else {
			obj = new KmlWorkQueueState(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlWorkQueueState");
			obj.increaseCast();
		}

		return obj;
	}
}
