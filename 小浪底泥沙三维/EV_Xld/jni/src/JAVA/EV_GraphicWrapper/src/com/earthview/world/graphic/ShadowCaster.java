package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///0x00000002,
//// For shadow volume techniques only, indicates volume is extruded to infinity
public class ShadowCaster extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CShadowCaster", new ShadowCasterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCShadowCasterProxy", new ShadowCasterClassFactory());
	}

	public ShadowCaster() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCShadowCasterProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ShadowCaster".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getShadowFarDistance_void(long pNativeObject);
	public double getShadowFarDistance()
	{
		double returnValue = getShadowFarDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getShadowFarDistanceSquared_void(long pNativeObject);
	public double getShadowFarDistanceSquared()
	{
		double returnValue = getShadowFarDistanceSquared_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShadowFarDistance_Real(long pNativeObject, double distance);
	public void setShadowFarDistance(double distance)
	{
		double distanceParamValue = distance;
		setShadowFarDistance_Real(this.nativeObject.pointer, distanceParamValue);
	}
	protected  boolean getCastShadows_void_callback()
	{
		boolean returnValue = getCastShadows();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getCastShadows_void(long pNativeObject);
	public boolean getCastShadows()
	{
		boolean returnValue = getCastShadows_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getCastShadows_void_NoVirtual(long pNativeObject);
	protected boolean getCastShadows_NoVirtual()
	{
		boolean returnValue = getCastShadows_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getEdgeList_void_callback()
	{
		com.earthview.world.graphic.EdgeData returnValue = getEdgeList();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEdgeList_void(long pNativeObject);
	public com.earthview.world.graphic.EdgeData getEdgeList()
	{
		long returnValue = getEdgeList_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
		}
		return __returnValue;
	}
	native private long getEdgeList_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.EdgeData getEdgeList_NoVirtual()
	{
		long returnValue = getEdgeList_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
		}
		return __returnValue;
	}

	protected  boolean hasEdgeList_void_callback()
	{
		boolean returnValue = hasEdgeList();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasEdgeList_void(long pNativeObject);
	public boolean hasEdgeList()
	{
		boolean returnValue = hasEdgeList_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasEdgeList_void_NoVirtual(long pNativeObject);
	protected boolean hasEdgeList_NoVirtual()
	{
		boolean returnValue = hasEdgeList_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getWorldBoundingBox_ev_bool_callback(boolean derive)
	{
		boolean deriveParamValue = derive;
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = getWorldBoundingBox(deriveParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getWorldBoundingBox_ev_bool(long pNativeObject, boolean derive);
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingBox_ev_bool(this.nativeObject.pointer, deriveParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getWorldBoundingBox_ev_bool_NoVirtual(long pNativeObject, boolean derive);
	protected com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox_NoVirtual(boolean derive)
	{
		boolean deriveParamValue = derive;
		long returnValue = getWorldBoundingBox_ev_bool_NoVirtual(this.nativeObject.pointer, deriveParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	protected  long getWorldBoundingBox_void_callback()
	{
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = getWorldBoundingBox();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getWorldBoundingBox_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox()
	{
		long returnValue = getWorldBoundingBox_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getWorldBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox_NoVirtual()
	{
		long returnValue = getWorldBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	protected  long getLightCapBounds_void_callback()
	{
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = getLightCapBounds();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLightCapBounds_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds()
	{
		long returnValue = getLightCapBounds_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getLightCapBounds_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds_NoVirtual()
	{
		long returnValue = getLightCapBounds_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	protected  long getDarkCapBounds_CLight_Real_callback(long light, double dirLightExtrusionDist)
	{
		com.earthview.world.graphic.Light lightParamValue = new com.earthview.world.graphic.Light(CreatedWhenConstruct.CWC_NotToCreate);
		lightParamValue.setDelegate(true);
		lightParamValue.setInstancePointer(new InstancePointer(light));
		IClassFactory lightParamValueClassFactory = GlobalClassFactoryMap.get(lightParamValue.getCppInstanceTypeName());
		if (lightParamValueClassFactory != null)
		{
			lightParamValue.setDelegate(true);
			lightParamValue = (com.earthview.world.graphic.Light)lightParamValueClassFactory.create();
			lightParamValue.setDelegate(true);
			lightParamValue.setInstancePointer(new InstancePointer(light));
		}
		double dirLightExtrusionDistParamValue = dirLightExtrusionDist;
		com.earthview.world.spatial.math.AxisAlignedBox returnValue = getDarkCapBounds(lightParamValue, dirLightExtrusionDistParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDarkCapBounds_CLight_Real(long pNativeObject, long light, double dirLightExtrusionDist);
	public com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
	{
		long lightParamValue = light.nativeObject.pointer;
		double dirLightExtrusionDistParamValue = dirLightExtrusionDist;
		long returnValue = getDarkCapBounds_CLight_Real(this.nativeObject.pointer, lightParamValue, dirLightExtrusionDistParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getDarkCapBounds_CLight_Real_NoVirtual(long pNativeObject, long light, double dirLightExtrusionDist);
	protected com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds_NoVirtual(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
	{
		long lightParamValue = light.nativeObject.pointer;
		double dirLightExtrusionDistParamValue = dirLightExtrusionDist;
		long returnValue = getDarkCapBounds_CLight_Real_NoVirtual(this.nativeObject.pointer, lightParamValue, dirLightExtrusionDistParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	public static class ShadowRenderableList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CShadowCaster::ShadowRenderableList", new ShadowRenderableListClassFactory());
		}

		public ShadowRenderableList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ShadowRenderableList", null);
		}

		native private void push_back_CShadowRenderable(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CShadowRenderable(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CShadowRenderable(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CShadowRenderable(this.nativeObject.pointer, posParamValue, ref_tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ShadowRenderable>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public ShadowRenderableList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ShadowRenderableList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ShadowRenderableList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ShadowRenderableList obj = null;
 			if(baseObj instanceof ShadowRenderableList)
			{
				obj = (ShadowRenderableList)baseObj;
			} else {
				obj = new ShadowRenderableList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ShadowRenderableList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ShadowRenderableListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ShadowRenderableList emptyInstance = new ShadowRenderableList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ShadowRenderableListIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator", new ShadowRenderableListIteratorClassFactory());
		}

		public ShadowRenderableListIterator(com.earthview.world.graphic.ShadowCaster.ShadowRenderableList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("ShadowRenderableListIterator", list);
		}

		public ShadowRenderableListIterator(com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("ShadowRenderableListIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.ShadowRenderable getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ShadowRenderable __returnValue = new com.earthview.world.graphic.ShadowRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CShadowRenderable");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ShadowRenderable)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CShadowRenderable");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.ShadowRenderable next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ShadowRenderable __returnValue = new com.earthview.world.graphic.ShadowRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CShadowRenderable");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ShadowRenderable)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CShadowRenderable");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.ShadowRenderable getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ShadowRenderable __returnValue = new com.earthview.world.graphic.ShadowRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CShadowRenderable");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ShadowRenderable)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CShadowRenderable");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.ShadowRenderable getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ShadowRenderable __returnValue = new com.earthview.world.graphic.ShadowRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CShadowRenderable");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ShadowRenderable)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CShadowRenderable");
			}
			return __returnValue;
		}
		public ShadowRenderableListIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ShadowRenderableListIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ShadowRenderableListIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ShadowRenderableListIterator obj = null;
 			if(baseObj instanceof ShadowRenderableListIterator)
			{
				obj = (ShadowRenderableListIterator)baseObj;
			} else {
				obj = new ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ShadowRenderableListIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ShadowRenderableListIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ShadowRenderableListIterator emptyInstance = new ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback(int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
	{
		com.earthview.world.graphic.ShadowTechnique shadowTechniqueParamValue = com.earthview.world.graphic.ShadowTechnique.toEnum(shadowTechnique);
		com.earthview.world.graphic.Light lightParamValue = (light == 0L ? null : new com.earthview.world.graphic.Light(CreatedWhenConstruct.CWC_NotToCreate));
		if(lightParamValue != null)
		{
		lightParamValue.setDelegate(true);
		lightParamValue.setInstancePointer(new InstancePointer(light));
		IClassFactory lightParamValueClassFactory = GlobalClassFactoryMap.get(lightParamValue.getCppInstanceTypeName());
		if (lightParamValueClassFactory != null)
		{
			lightParamValue.setDelegate(true);
			lightParamValue = (com.earthview.world.graphic.Light)lightParamValueClassFactory.create();
			lightParamValue.setDelegate(true);
			lightParamValue.setInstancePointer(new InstancePointer(light));
		}
		}
		com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBufferParamValue = (indexBuffer == 0L ? null : new com.earthview.world.graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate));
		if(indexBufferParamValue != null)
		{
		indexBufferParamValue.setDelegate(true);
		indexBufferParamValue.setInstancePointer(new InstancePointer(indexBuffer));
		IClassFactory indexBufferParamValueClassFactory = GlobalClassFactoryMap.get(indexBufferParamValue.getCppInstanceTypeName());
		if (indexBufferParamValueClassFactory != null)
		{
			indexBufferParamValue.setDelegate(true);
			indexBufferParamValue = (com.earthview.world.graphic.HardwareIndexBufferSharedPtr)indexBufferParamValueClassFactory.create();
			indexBufferParamValue.setDelegate(true);
			indexBufferParamValue.setInstancePointer(new InstancePointer(indexBuffer));
		}
		}
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistanceParamValue = extrusionDistance;
		long flagsParamValue = flags;
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator returnValue = getShadowVolumeRenderableIterator(shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue, flagsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags);
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistanceParamValue = extrusionDistance;
		long flagsParamValue = flags;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue, flagsParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}
	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags);
	protected com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator_NoVirtual(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistanceParamValue = extrusionDistance;
		long flagsParamValue = flags;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue, flagsParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}

	protected  long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback(int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance)
	{
		com.earthview.world.graphic.ShadowTechnique shadowTechniqueParamValue = com.earthview.world.graphic.ShadowTechnique.toEnum(shadowTechnique);
		com.earthview.world.graphic.Light lightParamValue = (light == 0L ? null : new com.earthview.world.graphic.Light(CreatedWhenConstruct.CWC_NotToCreate));
		if(lightParamValue != null)
		{
		lightParamValue.setDelegate(true);
		lightParamValue.setInstancePointer(new InstancePointer(light));
		IClassFactory lightParamValueClassFactory = GlobalClassFactoryMap.get(lightParamValue.getCppInstanceTypeName());
		if (lightParamValueClassFactory != null)
		{
			lightParamValue.setDelegate(true);
			lightParamValue = (com.earthview.world.graphic.Light)lightParamValueClassFactory.create();
			lightParamValue.setDelegate(true);
			lightParamValue.setInstancePointer(new InstancePointer(light));
		}
		}
		com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBufferParamValue = (indexBuffer == 0L ? null : new com.earthview.world.graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate));
		if(indexBufferParamValue != null)
		{
		indexBufferParamValue.setDelegate(true);
		indexBufferParamValue.setInstancePointer(new InstancePointer(indexBuffer));
		IClassFactory indexBufferParamValueClassFactory = GlobalClassFactoryMap.get(indexBufferParamValue.getCppInstanceTypeName());
		if (indexBufferParamValueClassFactory != null)
		{
			indexBufferParamValue.setDelegate(true);
			indexBufferParamValue = (com.earthview.world.graphic.HardwareIndexBufferSharedPtr)indexBufferParamValueClassFactory.create();
			indexBufferParamValue.setDelegate(true);
			indexBufferParamValue.setInstancePointer(new InstancePointer(indexBuffer));
		}
		}
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistanceParamValue = extrusionDistance;
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator returnValue = getShadowVolumeRenderableIterator(shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance);
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistanceParamValue = extrusionDistance;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}
	native private long getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(long pNativeObject, int shadowTechnique, long light, long indexBuffer, boolean extrudeVertices, double extrusionDistance);
	protected com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator_NoVirtual(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
	{
		int shadowTechniqueParamValue = shadowTechnique.getValue();
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long indexBufferParamValue = (indexBuffer == null ? 0L : indexBuffer.nativeObject.pointer);
		boolean extrudeVerticesParamValue = extrudeVertices;
		double extrusionDistanceParamValue = extrusionDistance;
		long returnValue = getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(this.nativeObject.pointer, shadowTechniqueParamValue, lightParamValue, indexBufferParamValue, extrudeVerticesParamValue, extrusionDistanceParamValue);
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator __returnValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowRenderableListIterator");
		}
		return __returnValue;
	}

	native private static void extrudeVertices_CHardwareVertexBufferSharedPtr_ev_size_t_CVector4_Real(long vertexBuffer, long originalVertexCount, long lightPos, double extrudeDist);
	public static void extrudeVertices(com.earthview.world.graphic.HardwareVertexBufferSharedPtr vertexBuffer, long originalVertexCount, com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist)
	{
		long vertexBufferParamValue = vertexBuffer.nativeObject.pointer;
		long originalVertexCountParamValue = originalVertexCount;
		long lightPosParamValue = lightPos.nativeObject.pointer;
		double extrudeDistParamValue = extrudeDist;
		extrudeVertices_CHardwareVertexBufferSharedPtr_ev_size_t_CVector4_Real(vertexBufferParamValue, originalVertexCountParamValue, lightPosParamValue, extrudeDistParamValue);
	}
	protected  double getPointExtrusionDistance_CLight_callback(long l)
	{
		com.earthview.world.graphic.Light lParamValue = (l == 0L ? null : new com.earthview.world.graphic.Light(CreatedWhenConstruct.CWC_NotToCreate));
		if(lParamValue != null)
		{
		lParamValue.setDelegate(true);
		lParamValue.setInstancePointer(new InstancePointer(l));
		IClassFactory lParamValueClassFactory = GlobalClassFactoryMap.get(lParamValue.getCppInstanceTypeName());
		if (lParamValueClassFactory != null)
		{
			lParamValue.setDelegate(true);
			lParamValue = (com.earthview.world.graphic.Light)lParamValueClassFactory.create();
			lParamValue.setDelegate(true);
			lParamValue.setInstancePointer(new InstancePointer(l));
		}
		}
		double returnValue = getPointExtrusionDistance(lParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getPointExtrusionDistance_CLight(long pNativeObject, long l);
	public double getPointExtrusionDistance(com.earthview.world.graphic.Light l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		double returnValue = getPointExtrusionDistance_CLight(this.nativeObject.pointer, lParamValue);
		return returnValue;
	}
	native private double getPointExtrusionDistance_CLight_NoVirtual(long pNativeObject, long l);
	protected double getPointExtrusionDistance_NoVirtual(com.earthview.world.graphic.Light l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		double returnValue = getPointExtrusionDistance_CLight_NoVirtual(this.nativeObject.pointer, lParamValue);
		return returnValue;
	}

	protected  void updateEdgeListLightFacing_CEdgeData_CVector4_callback(long edgeData, long lightPos)
	{
		com.earthview.world.graphic.EdgeData edgeDataParamValue = (edgeData == 0L ? null : new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate));
		if(edgeDataParamValue != null)
		{
		edgeDataParamValue.setDelegate(true);
		edgeDataParamValue.setInstancePointer(new InstancePointer(edgeData));
		IClassFactory edgeDataParamValueClassFactory = GlobalClassFactoryMap.get(edgeDataParamValue.getCppInstanceTypeName());
		if (edgeDataParamValueClassFactory != null)
		{
			edgeDataParamValue.setDelegate(true);
			edgeDataParamValue = (com.earthview.world.graphic.EdgeData)edgeDataParamValueClassFactory.create();
			edgeDataParamValue.setDelegate(true);
			edgeDataParamValue.setInstancePointer(new InstancePointer(edgeData));
		}
		}
		com.earthview.world.spatial.math.Vector4 lightPosParamValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		lightPosParamValue.setDelegate(true);
		lightPosParamValue.setInstancePointer(new InstancePointer(lightPos));
		IClassFactory lightPosParamValueClassFactory = GlobalClassFactoryMap.get(lightPosParamValue.getCppInstanceTypeName());
		if (lightPosParamValueClassFactory != null)
		{
			lightPosParamValue.setDelegate(true);
			lightPosParamValue = (com.earthview.world.spatial.math.Vector4)lightPosParamValueClassFactory.create();
			lightPosParamValue.setDelegate(true);
			lightPosParamValue.setInstancePointer(new InstancePointer(lightPos));
		}
		updateEdgeListLightFacing(edgeDataParamValue, lightPosParamValue);
	}

	native private void updateEdgeListLightFacing_CEdgeData_CVector4(long pNativeObject, long edgeData, long lightPos);
	public void updateEdgeListLightFacing(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.spatial.math.Vector4 lightPos)
	{
		long edgeDataParamValue = (edgeData == null ? 0L : edgeData.nativeObject.pointer);
		long lightPosParamValue = lightPos.nativeObject.pointer;
		updateEdgeListLightFacing_CEdgeData_CVector4(this.nativeObject.pointer, edgeDataParamValue, lightPosParamValue);
	}
	native private void updateEdgeListLightFacing_CEdgeData_CVector4_NoVirtual(long pNativeObject, long edgeData, long lightPos);
	protected void updateEdgeListLightFacing_NoVirtual(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.spatial.math.Vector4 lightPos)
	{
		long edgeDataParamValue = (edgeData == null ? 0L : edgeData.nativeObject.pointer);
		long lightPosParamValue = lightPos.nativeObject.pointer;
		updateEdgeListLightFacing_CEdgeData_CVector4_NoVirtual(this.nativeObject.pointer, edgeDataParamValue, lightPosParamValue);
	}

	protected  void generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback(long edgeData, long indexBuffer, long light, long shadowRenderables, long flags)
	{
		com.earthview.world.graphic.EdgeData edgeDataParamValue = (edgeData == 0L ? null : new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate));
		if(edgeDataParamValue != null)
		{
		edgeDataParamValue.setDelegate(true);
		edgeDataParamValue.setInstancePointer(new InstancePointer(edgeData));
		IClassFactory edgeDataParamValueClassFactory = GlobalClassFactoryMap.get(edgeDataParamValue.getCppInstanceTypeName());
		if (edgeDataParamValueClassFactory != null)
		{
			edgeDataParamValue.setDelegate(true);
			edgeDataParamValue = (com.earthview.world.graphic.EdgeData)edgeDataParamValueClassFactory.create();
			edgeDataParamValue.setDelegate(true);
			edgeDataParamValue.setInstancePointer(new InstancePointer(edgeData));
		}
		}
		com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBufferParamValue = new com.earthview.world.graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		indexBufferParamValue.setDelegate(true);
		indexBufferParamValue.setInstancePointer(new InstancePointer(indexBuffer));
		IClassFactory indexBufferParamValueClassFactory = GlobalClassFactoryMap.get(indexBufferParamValue.getCppInstanceTypeName());
		if (indexBufferParamValueClassFactory != null)
		{
			indexBufferParamValue.setDelegate(true);
			indexBufferParamValue = (com.earthview.world.graphic.HardwareIndexBufferSharedPtr)indexBufferParamValueClassFactory.create();
			indexBufferParamValue.setDelegate(true);
			indexBufferParamValue.setInstancePointer(new InstancePointer(indexBuffer));
		}
		com.earthview.world.graphic.Light lightParamValue = (light == 0L ? null : new com.earthview.world.graphic.Light(CreatedWhenConstruct.CWC_NotToCreate));
		if(lightParamValue != null)
		{
		lightParamValue.setDelegate(true);
		lightParamValue.setInstancePointer(new InstancePointer(light));
		IClassFactory lightParamValueClassFactory = GlobalClassFactoryMap.get(lightParamValue.getCppInstanceTypeName());
		if (lightParamValueClassFactory != null)
		{
			lightParamValue.setDelegate(true);
			lightParamValue = (com.earthview.world.graphic.Light)lightParamValueClassFactory.create();
			lightParamValue.setDelegate(true);
			lightParamValue.setInstancePointer(new InstancePointer(light));
		}
		}
		com.earthview.world.graphic.ShadowCaster.ShadowRenderableList shadowRenderablesParamValue = new com.earthview.world.graphic.ShadowCaster.ShadowRenderableList(CreatedWhenConstruct.CWC_NotToCreate);
		shadowRenderablesParamValue.setDelegate(true);
		shadowRenderablesParamValue.setInstancePointer(new InstancePointer(shadowRenderables));
		IClassFactory shadowRenderablesParamValueClassFactory = GlobalClassFactoryMap.get(shadowRenderablesParamValue.getCppInstanceTypeName());
		if (shadowRenderablesParamValueClassFactory != null)
		{
			shadowRenderablesParamValue.setDelegate(true);
			shadowRenderablesParamValue = (com.earthview.world.graphic.ShadowCaster.ShadowRenderableList)shadowRenderablesParamValueClassFactory.create();
			shadowRenderablesParamValue.setDelegate(true);
			shadowRenderablesParamValue.setInstancePointer(new InstancePointer(shadowRenderables));
		}
		long flagsParamValue = flags;
		generateShadowVolume(edgeDataParamValue, indexBufferParamValue, lightParamValue, shadowRenderablesParamValue, flagsParamValue);
	}

	native private void generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(long pNativeObject, long edgeData, long indexBuffer, long light, long shadowRenderables, long flags);
	public void generateShadowVolume(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.Light light, com.earthview.world.graphic.ShadowCaster.ShadowRenderableList shadowRenderables, long flags)
	{
		long edgeDataParamValue = (edgeData == null ? 0L : edgeData.nativeObject.pointer);
		long indexBufferParamValue = indexBuffer.nativeObject.pointer;
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long shadowRenderablesParamValue = shadowRenderables.nativeObject.pointer;
		long flagsParamValue = flags;
		generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.nativeObject.pointer, edgeDataParamValue, indexBufferParamValue, lightParamValue, shadowRenderablesParamValue, flagsParamValue);
	}
	native private void generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_NoVirtual(long pNativeObject, long edgeData, long indexBuffer, long light, long shadowRenderables, long flags);
	protected void generateShadowVolume_NoVirtual(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.Light light, com.earthview.world.graphic.ShadowCaster.ShadowRenderableList shadowRenderables, long flags)
	{
		long edgeDataParamValue = (edgeData == null ? 0L : edgeData.nativeObject.pointer);
		long indexBufferParamValue = indexBuffer.nativeObject.pointer;
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long shadowRenderablesParamValue = shadowRenderables.nativeObject.pointer;
		long flagsParamValue = flags;
		generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_NoVirtual(this.nativeObject.pointer, edgeDataParamValue, indexBufferParamValue, lightParamValue, shadowRenderablesParamValue, flagsParamValue);
	}

	protected  void extrudeBounds_CAxisAlignedBox_CVector4_Real_callback(long box, long lightPos, double extrudeDist)
	{
		com.earthview.world.spatial.math.AxisAlignedBox boxParamValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		boxParamValue.setDelegate(true);
		boxParamValue.setInstancePointer(new InstancePointer(box));
		IClassFactory boxParamValueClassFactory = GlobalClassFactoryMap.get(boxParamValue.getCppInstanceTypeName());
		if (boxParamValueClassFactory != null)
		{
			boxParamValue.setDelegate(true);
			boxParamValue = (com.earthview.world.spatial.math.AxisAlignedBox)boxParamValueClassFactory.create();
			boxParamValue.setDelegate(true);
			boxParamValue.setInstancePointer(new InstancePointer(box));
		}
		com.earthview.world.spatial.math.Vector4 lightPosParamValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		lightPosParamValue.setDelegate(true);
		lightPosParamValue.setInstancePointer(new InstancePointer(lightPos));
		IClassFactory lightPosParamValueClassFactory = GlobalClassFactoryMap.get(lightPosParamValue.getCppInstanceTypeName());
		if (lightPosParamValueClassFactory != null)
		{
			lightPosParamValue.setDelegate(true);
			lightPosParamValue = (com.earthview.world.spatial.math.Vector4)lightPosParamValueClassFactory.create();
			lightPosParamValue.setDelegate(true);
			lightPosParamValue.setInstancePointer(new InstancePointer(lightPos));
		}
		double extrudeDistParamValue = extrudeDist;
		extrudeBounds(boxParamValue, lightPosParamValue, extrudeDistParamValue);
	}

	native private void extrudeBounds_CAxisAlignedBox_CVector4_Real(long pNativeObject, long box, long lightPos, double extrudeDist);
	public void extrudeBounds(com.earthview.world.spatial.math.AxisAlignedBox box, com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist)
	{
		long boxParamValue = box.nativeObject.pointer;
		long lightPosParamValue = lightPos.nativeObject.pointer;
		double extrudeDistParamValue = extrudeDist;
		extrudeBounds_CAxisAlignedBox_CVector4_Real(this.nativeObject.pointer, boxParamValue, lightPosParamValue, extrudeDistParamValue);
	}
	native private void extrudeBounds_CAxisAlignedBox_CVector4_Real_NoVirtual(long pNativeObject, long box, long lightPos, double extrudeDist);
	protected void extrudeBounds_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox box, com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist)
	{
		long boxParamValue = box.nativeObject.pointer;
		long lightPosParamValue = lightPos.nativeObject.pointer;
		double extrudeDistParamValue = extrudeDist;
		extrudeBounds_CAxisAlignedBox_CVector4_Real_NoVirtual(this.nativeObject.pointer, boxParamValue, lightPosParamValue, extrudeDistParamValue);
	}

	public ShadowCaster(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShadowCaster(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getCastShadows_void(long pNativeObject, String method);
	native protected void register_getEdgeList_void(long pNativeObject, String method);
	native protected void register_hasEdgeList_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_void(long pNativeObject, String method);
	native protected void register_getLightCapBounds_void(long pNativeObject, String method);
	native protected void register_getDarkCapBounds_CLight_Real(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, String method);
	native protected void register_getPointExtrusionDistance_CLight(long pNativeObject, String method);
	native protected void register_updateEdgeListLightFacing_CEdgeData_CVector4(long pNativeObject, String method);
	native protected void register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(long pNativeObject, String method);
	native protected void register_extrudeBounds_CAxisAlignedBox_CVector4_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getCastShadows_void(this.nativeObject.pointer, "getCastShadows_void_callback");
			this.register_getEdgeList_void(this.nativeObject.pointer, "getEdgeList_void_callback");
			this.register_hasEdgeList_void(this.nativeObject.pointer, "hasEdgeList_void_callback");
			this.register_getWorldBoundingBox_ev_bool(this.nativeObject.pointer, "getWorldBoundingBox_ev_bool_callback");
			this.register_getWorldBoundingBox_void(this.nativeObject.pointer, "getWorldBoundingBox_void_callback");
			this.register_getLightCapBounds_void(this.nativeObject.pointer, "getLightCapBounds_void_callback");
			this.register_getDarkCapBounds_CLight_Real(this.nativeObject.pointer, "getDarkCapBounds_CLight_Real_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback");
			this.register_getPointExtrusionDistance_CLight(this.nativeObject.pointer, "getPointExtrusionDistance_CLight_callback");
			this.register_updateEdgeListLightFacing_CEdgeData_CVector4(this.nativeObject.pointer, "updateEdgeListLightFacing_CEdgeData_CVector4_callback");
			this.register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.nativeObject.pointer, "generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback");
			this.register_extrudeBounds_CAxisAlignedBox_CVector4_Real(this.nativeObject.pointer, "extrudeBounds_CAxisAlignedBox_CVector4_Real_callback");
		}
	}
	
	public static ShadowCaster fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShadowCaster obj = null;
 		if(baseObj instanceof ShadowCaster)
		{
			obj = (ShadowCaster)baseObj;
		} else {
			obj = new ShadowCaster(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CShadowCaster");
			obj.increaseCast();
		}

		return obj;
	}
}
