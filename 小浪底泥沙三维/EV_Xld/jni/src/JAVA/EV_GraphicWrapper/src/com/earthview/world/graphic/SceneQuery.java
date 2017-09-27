package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 场景查询类从场景中得到查询的反馈信息
 */
public class SceneQuery extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneQuery", new SceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSceneQueryProxy", new SceneQueryClassFactory());
	}

	public enum WorldFragmentType implements INativeEnum<WorldFragmentType> {
		WFT_NONE(WorldFragmentTypeHelper.ENUM_VALUES[0]),
		WFT_PLANE_BOUNDED_REGION(WorldFragmentTypeHelper.ENUM_VALUES[1]),
		WFT_SINGLE_INTERSECTION(WorldFragmentTypeHelper.ENUM_VALUES[2]),
		WFT_CUSTOM_GEOMETRY(WorldFragmentTypeHelper.ENUM_VALUES[3]),
		WFT_RENDER_OPERATION(WorldFragmentTypeHelper.ENUM_VALUES[4]);
		private int value;
		WorldFragmentType(int i) {
			this.value = i;
		}
		public WorldFragmentType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final WorldFragmentType toEnum(int retval) {
			if(retval == WFT_NONE.value){
				return WFT_NONE;
			}
			else if(retval == WFT_PLANE_BOUNDED_REGION.value){
				return WFT_PLANE_BOUNDED_REGION;
			}
			else if(retval == WFT_SINGLE_INTERSECTION.value){
				return WFT_SINGLE_INTERSECTION;
			}
			else if(retval == WFT_CUSTOM_GEOMETRY.value){
				return WFT_CUSTOM_GEOMETRY;
			}
			else if(retval == WFT_RENDER_OPERATION.value){
				return WFT_RENDER_OPERATION;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class WorldFragmentTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public static class WorldFragment extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneQuery::WorldFragment", new WorldFragmentClassFactory());
		}

		native private int get_fragmentType_void(long pNativeObject);
		public com.earthview.world.graphic.SceneQuery.WorldFragmentType get_fragmentType()
		{
			int jniValue = get_fragmentType_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.SceneQuery.WorldFragmentType.toEnum(jniValue);
		}
		
		native private void set_fragmentType_WorldFragmentType (long pNativeObject, int value);
		public void set_fragmentType(com.earthview.world.graphic.SceneQuery.WorldFragmentType fragmentType)
		{
			int fragmentTypeParamValue = fragmentType.getValue();
			
			set_fragmentType_WorldFragmentType(this.nativeObject.pointer, fragmentTypeParamValue);
		}
		
		native private long get_singleIntersection_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_singleIntersection()
		{
			long jniValue = get_singleIntersection_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CVector3");
			}
			return __returnValue;
		}
		
		native private void set_singleIntersection_CVector3 (long pNativeObject, long value);
		public void set_singleIntersection(com.earthview.world.spatial.math.Vector3 singleIntersection)
		{
			long singleIntersectionParamValue = singleIntersection.nativeObject.pointer;
			
			set_singleIntersection_CVector3(this.nativeObject.pointer, singleIntersectionParamValue);
		}
		
		native private long get_planes_void(long pNativeObject);
		public com.earthview.world.spatial.math.Planes get_planes()
		{
			long jniValue = get_planes_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.math.Planes __returnValue = new com.earthview.world.spatial.math.Planes(CreatedWhenConstruct.CWC_NotToCreate, "Planes");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Planes)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "Planes");
			}
			return __returnValue;
		}
		
		native private void set_planes_Planes (long pNativeObject, long value);
		public void set_planes(com.earthview.world.spatial.math.Planes planes)
		{
			long planesParamValue = (planes == null ? 0L : planes.nativeObject.pointer);
			
			set_planes_Planes(this.nativeObject.pointer, planesParamValue);
		}
		
		native private long get_geometry_void(long pNativeObject);
		public VoidPointer get_geometry()
		{
			long jniValue = get_geometry_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			VoidPointer __returnValue = new VoidPointer(new InstancePointer(jniValue));
			return __returnValue;
		}
		
		native private void set_geometry_void (long pNativeObject, long value);
		public void set_geometry(VoidPointer geometry)
		{
			long geometryParamValue = (geometry == null ? 0L : geometry.nativeObject.pointer);
			
			set_geometry_void(this.nativeObject.pointer, geometryParamValue);
		}
		
		native private long get_renderOp_void(long pNativeObject);
		public com.earthview.world.graphic.RenderOperation get_renderOp()
		{
			long jniValue = get_renderOp_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.RenderOperation __returnValue = new com.earthview.world.graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate, "CRenderOperation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.RenderOperation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderOperation");
			}
			return __returnValue;
		}
		
		native private void set_renderOp_CRenderOperation (long pNativeObject, long value);
		public void set_renderOp(com.earthview.world.graphic.RenderOperation renderOp)
		{
			long renderOpParamValue = (renderOp == null ? 0L : renderOp.nativeObject.pointer);
			
			set_renderOp_CRenderOperation(this.nativeObject.pointer, renderOpParamValue);
		}
		
		public WorldFragment() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("WorldFragment", null);
		}

		public WorldFragment(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public WorldFragment(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static WorldFragment fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			WorldFragment obj = null;
 			if(baseObj instanceof WorldFragment)
			{
				obj = (WorldFragment)baseObj;
			} else {
				obj = new WorldFragment(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "WorldFragment");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class WorldFragmentClassFactory implements IClassFactory {
		public BaseObject create()
		{
			WorldFragment emptyInstance = new WorldFragment(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class WorldFragmentTypeSet extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet", new WorldFragmentTypeSetClassFactory());
		}

		public WorldFragmentTypeSet() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("WorldFragmentTypeSet", null);
		}

		native private boolean push_WorldFragmentType(long pNativeObject, int key);
		public boolean push(com.earthview.world.graphic.SceneQuery.WorldFragmentType key)
		{
			int keyParamValue = key.getValue();
			boolean returnValue = push_WorldFragmentType(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private boolean exist_WorldFragmentType(long pNativeObject, int key);
		public boolean exist(com.earthview.world.graphic.SceneQuery.WorldFragmentType key)
		{
			int keyParamValue = key.getValue();
			boolean returnValue = exist_WorldFragmentType(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private void erase_WorldFragmentType(long pNativeObject, int key);
		public void erase(com.earthview.world.graphic.SceneQuery.WorldFragmentType key)
		{
			int keyParamValue = key.getValue();
			erase_WorldFragmentType(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public WorldFragmentTypeSet(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public WorldFragmentTypeSet(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static WorldFragmentTypeSet fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			WorldFragmentTypeSet obj = null;
 			if(baseObj instanceof WorldFragmentTypeSet)
			{
				obj = (WorldFragmentTypeSet)baseObj;
			} else {
				obj = new WorldFragmentTypeSet(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "WorldFragmentTypeSet");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class WorldFragmentTypeSetClassFactory implements IClassFactory {
		public BaseObject create()
		{
			WorldFragmentTypeSet emptyInstance = new WorldFragmentTypeSet(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public SceneQuery(com.earthview.world.graphic.SceneManager ref_mgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mgrPtr = new BasePointer(ref_mgr);
		list.add("ref_mgr", ref_mgrPtr.get());
		Create("JCSceneQueryProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SceneQuery".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setQueryMask_ev_uint32_callback(long mask)
	{
		long maskParamValue = mask;
		setQueryMask(maskParamValue);
	}

	native private void setQueryMask_ev_uint32(long pNativeObject, long mask);
	public void setQueryMask(long mask)
	{
		long maskParamValue = mask;
		setQueryMask_ev_uint32(this.nativeObject.pointer, maskParamValue);
	}
	native private void setQueryMask_ev_uint32_NoVirtual(long pNativeObject, long mask);
	protected void setQueryMask_NoVirtual(long mask)
	{
		long maskParamValue = mask;
		setQueryMask_ev_uint32_NoVirtual(this.nativeObject.pointer, maskParamValue);
	}

	protected  long getQueryMask_void_callback()
	{
		long returnValue = getQueryMask();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getQueryMask_void(long pNativeObject);
	public long getQueryMask()
	{
		long returnValue = getQueryMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getQueryMask_void_NoVirtual(long pNativeObject);
	protected long getQueryMask_NoVirtual()
	{
		long returnValue = getQueryMask_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setQueryTypeMask_ev_uint32_callback(long mask)
	{
		long maskParamValue = mask;
		setQueryTypeMask(maskParamValue);
	}

	native private void setQueryTypeMask_ev_uint32(long pNativeObject, long mask);
	public void setQueryTypeMask(long mask)
	{
		long maskParamValue = mask;
		setQueryTypeMask_ev_uint32(this.nativeObject.pointer, maskParamValue);
	}
	native private void setQueryTypeMask_ev_uint32_NoVirtual(long pNativeObject, long mask);
	protected void setQueryTypeMask_NoVirtual(long mask)
	{
		long maskParamValue = mask;
		setQueryTypeMask_ev_uint32_NoVirtual(this.nativeObject.pointer, maskParamValue);
	}

	protected  long getQueryTypeMask_void_callback()
	{
		long returnValue = getQueryTypeMask();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getQueryTypeMask_void(long pNativeObject);
	public long getQueryTypeMask()
	{
		long returnValue = getQueryTypeMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getQueryTypeMask_void_NoVirtual(long pNativeObject);
	protected long getQueryTypeMask_NoVirtual()
	{
		long returnValue = getQueryTypeMask_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setWorldFragmentType_WorldFragmentType_callback(int wft)
	{
		com.earthview.world.graphic.SceneQuery.WorldFragmentType wftParamValue = com.earthview.world.graphic.SceneQuery.WorldFragmentType.toEnum(wft);
		setWorldFragmentType(wftParamValue);
	}

	native private void setWorldFragmentType_WorldFragmentType(long pNativeObject, int wft);
	public void setWorldFragmentType(com.earthview.world.graphic.SceneQuery.WorldFragmentType wft)
	{
		int wftParamValue = wft.getValue();
		setWorldFragmentType_WorldFragmentType(this.nativeObject.pointer, wftParamValue);
	}
	native private void setWorldFragmentType_WorldFragmentType_NoVirtual(long pNativeObject, int wft);
	protected void setWorldFragmentType_NoVirtual(com.earthview.world.graphic.SceneQuery.WorldFragmentType wft)
	{
		int wftParamValue = wft.getValue();
		setWorldFragmentType_WorldFragmentType_NoVirtual(this.nativeObject.pointer, wftParamValue);
	}

	protected  int getWorldFragmentType_void_callback()
	{
		com.earthview.world.graphic.SceneQuery.WorldFragmentType returnValue = getWorldFragmentType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getWorldFragmentType_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQuery.WorldFragmentType getWorldFragmentType()
	{
		int returnValue = getWorldFragmentType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.SceneQuery.WorldFragmentType.toEnum(returnValue);
	}
	native private int getWorldFragmentType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneQuery.WorldFragmentType getWorldFragmentType_NoVirtual()
	{
		int returnValue = getWorldFragmentType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.SceneQuery.WorldFragmentType.toEnum(returnValue);
	}

	protected  long getSupportedWorldFragmentTypes_void_callback()
	{
		com.earthview.world.graphic.SceneQuery.WorldFragmentTypeSet returnValue = getSupportedWorldFragmentTypes();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSupportedWorldFragmentTypes_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQuery.WorldFragmentTypeSet getSupportedWorldFragmentTypes()
	{
		long returnValue = getSupportedWorldFragmentTypes_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneQuery.WorldFragmentTypeSet __returnValue = new com.earthview.world.graphic.SceneQuery.WorldFragmentTypeSet(CreatedWhenConstruct.CWC_NotToCreate, "WorldFragmentTypeSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQuery.WorldFragmentTypeSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "WorldFragmentTypeSet");
		}
		return __returnValue;
	}
	native private long getSupportedWorldFragmentTypes_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneQuery.WorldFragmentTypeSet getSupportedWorldFragmentTypes_NoVirtual()
	{
		long returnValue = getSupportedWorldFragmentTypes_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneQuery.WorldFragmentTypeSet __returnValue = new com.earthview.world.graphic.SceneQuery.WorldFragmentTypeSet(CreatedWhenConstruct.CWC_NotToCreate, "WorldFragmentTypeSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQuery.WorldFragmentTypeSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "WorldFragmentTypeSet");
		}
		return __returnValue;
	}

	public SceneQuery(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneQuery(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setQueryMask_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryMask_void(long pNativeObject, String method);
	native protected void register_setQueryTypeMask_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryTypeMask_void(long pNativeObject, String method);
	native protected void register_setWorldFragmentType_WorldFragmentType(long pNativeObject, String method);
	native protected void register_getWorldFragmentType_void(long pNativeObject, String method);
	native protected void register_getSupportedWorldFragmentTypes_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setQueryMask_ev_uint32(this.nativeObject.pointer, "setQueryMask_ev_uint32_callback");
			this.register_getQueryMask_void(this.nativeObject.pointer, "getQueryMask_void_callback");
			this.register_setQueryTypeMask_ev_uint32(this.nativeObject.pointer, "setQueryTypeMask_ev_uint32_callback");
			this.register_getQueryTypeMask_void(this.nativeObject.pointer, "getQueryTypeMask_void_callback");
			this.register_setWorldFragmentType_WorldFragmentType(this.nativeObject.pointer, "setWorldFragmentType_WorldFragmentType_callback");
			this.register_getWorldFragmentType_void(this.nativeObject.pointer, "getWorldFragmentType_void_callback");
			this.register_getSupportedWorldFragmentTypes_void(this.nativeObject.pointer, "getSupportedWorldFragmentTypes_void_callback");
		}
	}
	
	public static SceneQuery fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneQuery obj = null;
 		if(baseObj instanceof SceneQuery)
		{
			obj = (SceneQuery)baseObj;
		} else {
			obj = new SceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSceneQuery");
			obj.increaseCast();
		}

		return obj;
	}
}
