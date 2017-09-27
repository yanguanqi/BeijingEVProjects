package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DistanceLodStrategy extends com.earthview.world.graphic.LodStrategy {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CDistanceLodStrategy", new DistanceLodStrategyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCDistanceLodStrategyProxy", new DistanceLodStrategyClassFactory());
	}

	native private double getValueImpl_CMovableObject_CCamera(long pNativeObject, long movableObject, long camera);
	//// @copydoc CLodStrategy::getValueImpl
	public double getValueImpl(com.earthview.world.graphic.MovableObject movableObject, com.earthview.world.graphic.Camera camera)
	{
		long movableObjectParamValue = (movableObject == null ? 0L : movableObject.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		double returnValue = getValueImpl_CMovableObject_CCamera(this.nativeObject.pointer, movableObjectParamValue, cameraParamValue);
		return returnValue;
	}
	native private double getValueImpl_CMovableObject_CCamera_NoVirtual(long pNativeObject, long movableObject, long camera);
	protected double getValueImpl_NoVirtual(com.earthview.world.graphic.MovableObject movableObject, com.earthview.world.graphic.Camera camera)
	{
		long movableObjectParamValue = (movableObject == null ? 0L : movableObject.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		double returnValue = getValueImpl_CMovableObject_CCamera_NoVirtual(this.nativeObject.pointer, movableObjectParamValue, cameraParamValue);
		return returnValue;
	}

	public DistanceLodStrategy() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDistanceLodStrategyProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.DistanceLodStrategy".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getBaseValue_void(long pNativeObject);
	//// @copydoc CLodStrategy::getBaseValue
	public double getBaseValue()
	{
		double returnValue = getBaseValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBaseValue_void_NoVirtual(long pNativeObject);
	protected double getBaseValue_NoVirtual()
	{
		double returnValue = getBaseValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double transformBias_Real(long pNativeObject, double factor);
	//// @copydoc CLodStrategy::transformBias
	public double transformBias(double factor)
	{
		double factorParamValue = factor;
		double returnValue = transformBias_Real(this.nativeObject.pointer, factorParamValue);
		return returnValue;
	}
	native private double transformBias_Real_NoVirtual(long pNativeObject, double factor);
	protected double transformBias_NoVirtual(double factor)
	{
		double factorParamValue = factor;
		double returnValue = transformBias_Real_NoVirtual(this.nativeObject.pointer, factorParamValue);
		return returnValue;
	}

	native private double transformUserValue_Real(long pNativeObject, double userValue);
	//// @copydoc CLodStrategy::transformUserValue
	public double transformUserValue(double userValue)
	{
		double userValueParamValue = userValue;
		double returnValue = transformUserValue_Real(this.nativeObject.pointer, userValueParamValue);
		return returnValue;
	}
	native private double transformUserValue_Real_NoVirtual(long pNativeObject, double userValue);
	protected double transformUserValue_NoVirtual(double userValue)
	{
		double userValueParamValue = userValue;
		double returnValue = transformUserValue_Real_NoVirtual(this.nativeObject.pointer, userValueParamValue);
		return returnValue;
	}

	native private int getIndex_Real_MeshLodUsageList(long pNativeObject, double value, long meshLodUsageList);
	//// @copydoc CLodStrategy::getIndex
	public int getIndex(double value, com.earthview.world.graphic.Mesh.MeshLodUsageList meshLodUsageList)
	{
		double valueParamValue = value;
		long meshLodUsageListParamValue = meshLodUsageList.nativeObject.pointer;
		int returnValue = getIndex_Real_MeshLodUsageList(this.nativeObject.pointer, valueParamValue, meshLodUsageListParamValue);
		return returnValue;
	}
	native private int getIndex_Real_MeshLodUsageList_NoVirtual(long pNativeObject, double value, long meshLodUsageList);
	protected int getIndex_NoVirtual(double value, com.earthview.world.graphic.Mesh.MeshLodUsageList meshLodUsageList)
	{
		double valueParamValue = value;
		long meshLodUsageListParamValue = meshLodUsageList.nativeObject.pointer;
		int returnValue = getIndex_Real_MeshLodUsageList_NoVirtual(this.nativeObject.pointer, valueParamValue, meshLodUsageListParamValue);
		return returnValue;
	}

	native private int getIndex_Real_LodValueList(long pNativeObject, double value, long materialLodValueList);
	//// @copydoc CLodStrategy::getIndex
	public int getIndex(double value, com.earthview.world.graphic.LodValueList materialLodValueList)
	{
		double valueParamValue = value;
		long materialLodValueListParamValue = materialLodValueList.nativeObject.pointer;
		int returnValue = getIndex_Real_LodValueList(this.nativeObject.pointer, valueParamValue, materialLodValueListParamValue);
		return returnValue;
	}
	native private int getIndex_Real_LodValueList_NoVirtual(long pNativeObject, double value, long materialLodValueList);
	protected int getIndex_NoVirtual(double value, com.earthview.world.graphic.LodValueList materialLodValueList)
	{
		double valueParamValue = value;
		long materialLodValueListParamValue = materialLodValueList.nativeObject.pointer;
		int returnValue = getIndex_Real_LodValueList_NoVirtual(this.nativeObject.pointer, valueParamValue, materialLodValueListParamValue);
		return returnValue;
	}

	native private void sort_MeshLodUsageList(long pNativeObject, long meshLodUsageList);
	//// @copydoc CLodStrategy::sort
	public void sort(com.earthview.world.graphic.Mesh.MeshLodUsageList meshLodUsageList)
	{
		long meshLodUsageListParamValue = meshLodUsageList.nativeObject.pointer;
		sort_MeshLodUsageList(this.nativeObject.pointer, meshLodUsageListParamValue);
	}
	native private void sort_MeshLodUsageList_NoVirtual(long pNativeObject, long meshLodUsageList);
	protected void sort_NoVirtual(com.earthview.world.graphic.Mesh.MeshLodUsageList meshLodUsageList)
	{
		long meshLodUsageListParamValue = meshLodUsageList.nativeObject.pointer;
		sort_MeshLodUsageList_NoVirtual(this.nativeObject.pointer, meshLodUsageListParamValue);
	}

	native private boolean isSorted_LodValueList(long pNativeObject, long values);
	//// @copydoc CLodStrategy::isSorted
	public boolean isSorted(com.earthview.world.graphic.LodValueList values)
	{
		long valuesParamValue = values.nativeObject.pointer;
		boolean returnValue = isSorted_LodValueList(this.nativeObject.pointer, valuesParamValue);
		return returnValue;
	}
	native private boolean isSorted_LodValueList_NoVirtual(long pNativeObject, long values);
	protected boolean isSorted_NoVirtual(com.earthview.world.graphic.LodValueList values)
	{
		long valuesParamValue = values.nativeObject.pointer;
		boolean returnValue = isSorted_LodValueList_NoVirtual(this.nativeObject.pointer, valuesParamValue);
		return returnValue;
	}

	native private void setReferenceView_Real_Real_CRadian(long pNativeObject, double viewportWidth, double viewportHeight, long fovY);
	public void setReferenceView(double viewportWidth, double viewportHeight, com.earthview.world.spatial.math.Radian fovY)
	{
		double viewportWidthParamValue = viewportWidth;
		double viewportHeightParamValue = viewportHeight;
		long fovYParamValue = fovY.nativeObject.pointer;
		setReferenceView_Real_Real_CRadian(this.nativeObject.pointer, viewportWidthParamValue, viewportHeightParamValue, fovYParamValue);
	}
	native private void setReferenceViewEnabled_ev_bool(long pNativeObject, boolean value);
	public void setReferenceViewEnabled(boolean value)
	{
		boolean valueParamValue = value;
		setReferenceViewEnabled_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getReferenceViewEnabled_void(long pNativeObject);
	public boolean getReferenceViewEnabled()
	{
		boolean returnValue = getReferenceViewEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static long getSingleton_void();
	public static com.earthview.world.graphic.DistanceLodStrategy getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.DistanceLodStrategy __returnValue = new com.earthview.world.graphic.DistanceLodStrategy(CreatedWhenConstruct.CWC_NotToCreate, "CDistanceLodStrategy");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DistanceLodStrategy)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDistanceLodStrategy");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.DistanceLodStrategy getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.DistanceLodStrategy __returnValue = new com.earthview.world.graphic.DistanceLodStrategy(CreatedWhenConstruct.CWC_NotToCreate, "CDistanceLodStrategy");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DistanceLodStrategy)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDistanceLodStrategy");
		}
		return __returnValue;
	}
	public DistanceLodStrategy(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DistanceLodStrategy(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getValueImpl_CMovableObject_CCamera(long pNativeObject, String method);
	native protected void register_getBaseValue_void(long pNativeObject, String method);
	native protected void register_transformBias_Real(long pNativeObject, String method);
	native protected void register_transformUserValue_Real(long pNativeObject, String method);
	native protected void register_getIndex_Real_MeshLodUsageList(long pNativeObject, String method);
	native protected void register_getIndex_Real_LodValueList(long pNativeObject, String method);
	native protected void register_sort_MeshLodUsageList(long pNativeObject, String method);
	native protected void register_isSorted_LodValueList(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getValueImpl_CMovableObject_CCamera(this.nativeObject.pointer, "getValueImpl_CMovableObject_CCamera_callback");
			this.register_getBaseValue_void(this.nativeObject.pointer, "getBaseValue_void_callback");
			this.register_transformBias_Real(this.nativeObject.pointer, "transformBias_Real_callback");
			this.register_transformUserValue_Real(this.nativeObject.pointer, "transformUserValue_Real_callback");
			this.register_getIndex_Real_MeshLodUsageList(this.nativeObject.pointer, "getIndex_Real_MeshLodUsageList_callback");
			this.register_getIndex_Real_LodValueList(this.nativeObject.pointer, "getIndex_Real_LodValueList_callback");
			this.register_sort_MeshLodUsageList(this.nativeObject.pointer, "sort_MeshLodUsageList_callback");
			this.register_isSorted_LodValueList(this.nativeObject.pointer, "isSorted_LodValueList_callback");
		}
	}
	
	public static DistanceLodStrategy fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DistanceLodStrategy obj = null;
 		if(baseObj instanceof DistanceLodStrategy)
		{
			obj = (DistanceLodStrategy)baseObj;
		} else {
			obj = new DistanceLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDistanceLodStrategy");
			obj.increaseCast();
		}

		return obj;
	}
}
