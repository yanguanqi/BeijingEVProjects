package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodStrategy extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CLodStrategy", new LodStrategyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCLodStrategyProxy", new LodStrategyClassFactory());
	}

	protected  double getValueImpl_CMovableObject_CCamera_callback(long movableObject, long camera)
	{
		com.earthview.world.graphic.MovableObject movableObjectParamValue = (movableObject == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(movableObjectParamValue != null)
		{
		movableObjectParamValue.setDelegate(true);
		movableObjectParamValue.setInstancePointer(new InstancePointer(movableObject));
		IClassFactory movableObjectParamValueClassFactory = GlobalClassFactoryMap.get(movableObjectParamValue.getCppInstanceTypeName());
		if (movableObjectParamValueClassFactory != null)
		{
			movableObjectParamValue.setDelegate(true);
			movableObjectParamValue = (com.earthview.world.graphic.MovableObject)movableObjectParamValueClassFactory.create();
			movableObjectParamValue.setDelegate(true);
			movableObjectParamValue.setInstancePointer(new InstancePointer(movableObject));
		}
		}
		com.earthview.world.graphic.Camera cameraParamValue = (camera == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(cameraParamValue != null)
		{
		cameraParamValue.setDelegate(true);
		cameraParamValue.setInstancePointer(new InstancePointer(camera));
		IClassFactory cameraParamValueClassFactory = GlobalClassFactoryMap.get(cameraParamValue.getCppInstanceTypeName());
		if (cameraParamValueClassFactory != null)
		{
			cameraParamValue.setDelegate(true);
			cameraParamValue = (com.earthview.world.graphic.Camera)cameraParamValueClassFactory.create();
			cameraParamValue.setDelegate(true);
			cameraParamValue.setInstancePointer(new InstancePointer(camera));
		}
		}
		double returnValue = getValueImpl(movableObjectParamValue, cameraParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getValueImpl_CMovableObject_CCamera(long pNativeObject, long movableObject, long camera);
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

	public LodStrategy(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCLodStrategyProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.LodStrategy".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  double getBaseValue_void_callback()
	{
		double returnValue = getBaseValue();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getBaseValue_void(long pNativeObject);
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

	protected  double transformBias_Real_callback(double factor)
	{
		double factorParamValue = factor;
		double returnValue = transformBias(factorParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double transformBias_Real(long pNativeObject, double factor);
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

	protected  double transformUserValue_Real_callback(double userValue)
	{
		double userValueParamValue = userValue;
		double returnValue = transformUserValue(userValueParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double transformUserValue_Real(long pNativeObject, double userValue);
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

	native private double getValue_CMovableObject_CCamera(long pNativeObject, long movableObject, long camera);
	public double getValue(com.earthview.world.graphic.MovableObject movableObject, com.earthview.world.graphic.Camera camera)
	{
		long movableObjectParamValue = (movableObject == null ? 0L : movableObject.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		double returnValue = getValue_CMovableObject_CCamera(this.nativeObject.pointer, movableObjectParamValue, cameraParamValue);
		return returnValue;
	}
	protected  int getIndex_Real_MeshLodUsageList_callback(double value, long meshLodUsageList)
	{
		double valueParamValue = value;
		com.earthview.world.graphic.Mesh.MeshLodUsageList meshLodUsageListParamValue = new com.earthview.world.graphic.Mesh.MeshLodUsageList(CreatedWhenConstruct.CWC_NotToCreate);
		meshLodUsageListParamValue.setDelegate(true);
		meshLodUsageListParamValue.setInstancePointer(new InstancePointer(meshLodUsageList));
		IClassFactory meshLodUsageListParamValueClassFactory = GlobalClassFactoryMap.get(meshLodUsageListParamValue.getCppInstanceTypeName());
		if (meshLodUsageListParamValueClassFactory != null)
		{
			meshLodUsageListParamValue.setDelegate(true);
			meshLodUsageListParamValue = (com.earthview.world.graphic.Mesh.MeshLodUsageList)meshLodUsageListParamValueClassFactory.create();
			meshLodUsageListParamValue.setDelegate(true);
			meshLodUsageListParamValue.setInstancePointer(new InstancePointer(meshLodUsageList));
		}
		int returnValue = getIndex(valueParamValue, meshLodUsageListParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getIndex_Real_MeshLodUsageList(long pNativeObject, double value, long meshLodUsageList);
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

	protected  int getIndex_Real_LodValueList_callback(double value, long materialLodValueList)
	{
		double valueParamValue = value;
		com.earthview.world.graphic.LodValueList materialLodValueListParamValue = new com.earthview.world.graphic.LodValueList(CreatedWhenConstruct.CWC_NotToCreate);
		materialLodValueListParamValue.setDelegate(true);
		materialLodValueListParamValue.setInstancePointer(new InstancePointer(materialLodValueList));
		IClassFactory materialLodValueListParamValueClassFactory = GlobalClassFactoryMap.get(materialLodValueListParamValue.getCppInstanceTypeName());
		if (materialLodValueListParamValueClassFactory != null)
		{
			materialLodValueListParamValue.setDelegate(true);
			materialLodValueListParamValue = (com.earthview.world.graphic.LodValueList)materialLodValueListParamValueClassFactory.create();
			materialLodValueListParamValue.setDelegate(true);
			materialLodValueListParamValue.setInstancePointer(new InstancePointer(materialLodValueList));
		}
		int returnValue = getIndex(valueParamValue, materialLodValueListParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getIndex_Real_LodValueList(long pNativeObject, double value, long materialLodValueList);
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

	protected  void sort_MeshLodUsageList_callback(long meshLodUsageList)
	{
		com.earthview.world.graphic.Mesh.MeshLodUsageList meshLodUsageListParamValue = new com.earthview.world.graphic.Mesh.MeshLodUsageList(CreatedWhenConstruct.CWC_NotToCreate);
		meshLodUsageListParamValue.setDelegate(true);
		meshLodUsageListParamValue.setInstancePointer(new InstancePointer(meshLodUsageList));
		IClassFactory meshLodUsageListParamValueClassFactory = GlobalClassFactoryMap.get(meshLodUsageListParamValue.getCppInstanceTypeName());
		if (meshLodUsageListParamValueClassFactory != null)
		{
			meshLodUsageListParamValue.setDelegate(true);
			meshLodUsageListParamValue = (com.earthview.world.graphic.Mesh.MeshLodUsageList)meshLodUsageListParamValueClassFactory.create();
			meshLodUsageListParamValue.setDelegate(true);
			meshLodUsageListParamValue.setInstancePointer(new InstancePointer(meshLodUsageList));
		}
		sort(meshLodUsageListParamValue);
	}

	native private void sort_MeshLodUsageList(long pNativeObject, long meshLodUsageList);
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

	protected  boolean isSorted_LodValueList_callback(long values)
	{
		com.earthview.world.graphic.LodValueList valuesParamValue = new com.earthview.world.graphic.LodValueList(CreatedWhenConstruct.CWC_NotToCreate);
		valuesParamValue.setDelegate(true);
		valuesParamValue.setInstancePointer(new InstancePointer(values));
		IClassFactory valuesParamValueClassFactory = GlobalClassFactoryMap.get(valuesParamValue.getCppInstanceTypeName());
		if (valuesParamValueClassFactory != null)
		{
			valuesParamValue.setDelegate(true);
			valuesParamValue = (com.earthview.world.graphic.LodValueList)valuesParamValueClassFactory.create();
			valuesParamValue.setDelegate(true);
			valuesParamValue.setInstancePointer(new InstancePointer(values));
		}
		boolean returnValue = isSorted(valuesParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSorted_LodValueList(long pNativeObject, long values);
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

	native private void assertSorted_LodValueList(long pNativeObject, long values);
	public void assertSorted(com.earthview.world.graphic.LodValueList values)
	{
		long valuesParamValue = values.nativeObject.pointer;
		assertSorted_LodValueList(this.nativeObject.pointer, valuesParamValue);
	}
	native private long getName_void(long pNativeObject);
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public LodStrategy(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LodStrategy(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static LodStrategy fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LodStrategy obj = null;
 		if(baseObj instanceof LodStrategy)
		{
			obj = (LodStrategy)baseObj;
		} else {
			obj = new LodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLodStrategy");
			obj.increaseCast();
		}

		return obj;
	}
}
