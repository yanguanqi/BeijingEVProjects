package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RaySceneQueryResultEntry extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RaySceneQueryResultEntry", new RaySceneQueryResultEntryClassFactory());
	}

	public RaySceneQueryResultEntry() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RaySceneQueryResultEntry", null);
	}

	native private double get_distance_void(long pNativeObject);
	public double get_distance()
	{
		double jniValue = get_distance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_distance_Real (long pNativeObject, double value);
	public void set_distance(double distance)
	{
		double distanceParamValue = distance;
		
		set_distance_Real(this.nativeObject.pointer, distanceParamValue);
	}
	
	native private long get_movable_void(long pNativeObject);
	public com.earthview.world.graphic.MovableObject get_movable()
	{
		long jniValue = get_movable_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	
	native private void set_movable_CMovableObject (long pNativeObject, long value);
	public void set_movable(com.earthview.world.graphic.MovableObject movable)
	{
		long movableParamValue = (movable == null ? 0L : movable.nativeObject.pointer);
		
		set_movable_CMovableObject(this.nativeObject.pointer, movableParamValue);
	}
	
	native private int get_objectIndex_void(long pNativeObject);
	public int get_objectIndex()
	{
		int jniValue = get_objectIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_objectIndex_ev_int32 (long pNativeObject, int value);
	public void set_objectIndex(int objectIndex)
	{
		int objectIndexParamValue = objectIndex;
		
		set_objectIndex_ev_int32(this.nativeObject.pointer, objectIndexParamValue);
	}
	
	native private int get_submeshIndex_void(long pNativeObject);
	public int get_submeshIndex()
	{
		int jniValue = get_submeshIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_submeshIndex_ev_int32 (long pNativeObject, int value);
	public void set_submeshIndex(int submeshIndex)
	{
		int submeshIndexParamValue = submeshIndex;
		
		set_submeshIndex_ev_int32(this.nativeObject.pointer, submeshIndexParamValue);
	}
	
	native private int get_instanceIndex_void(long pNativeObject);
	public int get_instanceIndex()
	{
		int jniValue = get_instanceIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_instanceIndex_ev_int32 (long pNativeObject, int value);
	public void set_instanceIndex(int instanceIndex)
	{
		int instanceIndexParamValue = instanceIndex;
		
		set_instanceIndex_ev_int32(this.nativeObject.pointer, instanceIndexParamValue);
	}
	
	native private int get_segmentIndex_void(long pNativeObject);
	public int get_segmentIndex()
	{
		int jniValue = get_segmentIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_segmentIndex_ev_int32 (long pNativeObject, int value);
	public void set_segmentIndex(int segmentIndex)
	{
		int segmentIndexParamValue = segmentIndex;
		
		set_segmentIndex_ev_int32(this.nativeObject.pointer, segmentIndexParamValue);
	}
	
	native private float get_elevation_void(long pNativeObject);
	public float get_elevation()
	{
		float jniValue = get_elevation_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_elevation_ev_real32 (long pNativeObject, float value);
	public void set_elevation(float elevation)
	{
		float elevationParamValue = elevation;
		
		set_elevation_ev_real32(this.nativeObject.pointer, elevationParamValue);
	}
	
	native private short get_classification_void(long pNativeObject);
	public short get_classification()
	{
		short jniValue = get_classification_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_classification_ev_uint8 (long pNativeObject, short value);
	public void set_classification(short classification)
	{
		short classificationParamValue = classification;
		
		set_classification_ev_uint8(this.nativeObject.pointer, classificationParamValue);
	}
	
	native private int get_intensity_void(long pNativeObject);
	public int get_intensity()
	{
		int jniValue = get_intensity_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_intensity_ev_uint16 (long pNativeObject, int value);
	public void set_intensity(int intensity)
	{
		int intensityParamValue = intensity;
		
		set_intensity_ev_uint16(this.nativeObject.pointer, intensityParamValue);
	}
	
	native private int get_returnNumber_void(long pNativeObject);
	public int get_returnNumber()
	{
		int jniValue = get_returnNumber_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_returnNumber_ev_uint16 (long pNativeObject, int value);
	public void set_returnNumber(int returnNumber)
	{
		int returnNumberParamValue = returnNumber;
		
		set_returnNumber_ev_uint16(this.nativeObject.pointer, returnNumberParamValue);
	}
	
	native private long get_color_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_color()
	{
		long jniValue = get_color_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	
	native private void set_color_CColourValue (long pNativeObject, long value);
	public void set_color(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		
		set_color_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	
	native private long get_pointOfIntersection_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_pointOfIntersection()
	{
		long jniValue = get_pointOfIntersection_void(this.nativeObject.pointer);
		
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
	
	native private void set_pointOfIntersection_CVector3 (long pNativeObject, long value);
	public void set_pointOfIntersection(com.earthview.world.spatial.math.Vector3 pointOfIntersection)
	{
		long pointOfIntersectionParamValue = pointOfIntersection.nativeObject.pointer;
		
		set_pointOfIntersection_CVector3(this.nativeObject.pointer, pointOfIntersectionParamValue);
	}
	
	native private long get_pixelPointOfIntersection_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector2 get_pixelPointOfIntersection()
	{
		long jniValue = get_pixelPointOfIntersection_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	
	native private void set_pixelPointOfIntersection_CVector2 (long pNativeObject, long value);
	public void set_pixelPointOfIntersection(com.earthview.world.spatial.math.Vector2 pixelPointOfIntersection)
	{
		long pixelPointOfIntersectionParamValue = pixelPointOfIntersection.nativeObject.pointer;
		
		set_pixelPointOfIntersection_CVector2(this.nativeObject.pointer, pixelPointOfIntersectionParamValue);
	}
	
	native private long get_worldFragment_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQuery.WorldFragment get_worldFragment()
	{
		long jniValue = get_worldFragment_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneQuery.WorldFragment __returnValue = new com.earthview.world.graphic.SceneQuery.WorldFragment(CreatedWhenConstruct.CWC_NotToCreate, "WorldFragment");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQuery.WorldFragment)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "WorldFragment");
		}
		return __returnValue;
	}
	
	native private void set_worldFragment_WorldFragment (long pNativeObject, long value);
	public void set_worldFragment(com.earthview.world.graphic.SceneQuery.WorldFragment worldFragment)
	{
		long worldFragmentParamValue = (worldFragment == null ? 0L : worldFragment.nativeObject.pointer);
		
		set_worldFragment_WorldFragment(this.nativeObject.pointer, worldFragmentParamValue);
	}
	
	native private boolean OperatorLessThan_RaySceneQueryResultEntry(long pNativeObject, long rhs);
	//// Comparison operator for sorting
	public boolean OperatorLessThan(com.earthview.world.graphic.RaySceneQueryResultEntry rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorLessThan_RaySceneQueryResultEntry(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_RaySceneQueryResultEntry(long pNativeObject, long rhs);
	public boolean OperatorGreaterThan(com.earthview.world.graphic.RaySceneQueryResultEntry rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThan_RaySceneQueryResultEntry(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	public RaySceneQueryResultEntry(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RaySceneQueryResultEntry(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RaySceneQueryResultEntry fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RaySceneQueryResultEntry obj = null;
 		if(baseObj instanceof RaySceneQueryResultEntry)
		{
			obj = (RaySceneQueryResultEntry)baseObj;
		} else {
			obj = new RaySceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RaySceneQueryResultEntry");
			obj.increaseCast();
		}

		return obj;
	}
}
