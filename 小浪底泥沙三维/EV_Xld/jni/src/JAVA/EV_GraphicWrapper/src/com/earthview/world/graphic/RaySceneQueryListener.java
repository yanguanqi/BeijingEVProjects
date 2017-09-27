package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RaySceneQueryListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRaySceneQueryListener", new RaySceneQueryListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRaySceneQueryListenerProxy", new RaySceneQueryListenerClassFactory());
	}

	public RaySceneQueryListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRaySceneQueryListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RaySceneQueryListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean queryResult_CMovableObject_Real_callback(long obj, double distance)
	{
		com.earthview.world.graphic.MovableObject objParamValue = (obj == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objParamValue != null)
		{
		objParamValue.setDelegate(true);
		objParamValue.setInstancePointer(new InstancePointer(obj));
		IClassFactory objParamValueClassFactory = GlobalClassFactoryMap.get(objParamValue.getCppInstanceTypeName());
		if (objParamValueClassFactory != null)
		{
			objParamValue.setDelegate(true);
			objParamValue = (com.earthview.world.graphic.MovableObject)objParamValueClassFactory.create();
			objParamValue.setDelegate(true);
			objParamValue.setInstancePointer(new InstancePointer(obj));
		}
		}
		double distanceParamValue = distance;
		boolean returnValue = queryResult(objParamValue, distanceParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_CMovableObject_Real(long pNativeObject, long obj, double distance);
	public boolean queryResult(com.earthview.world.graphic.MovableObject obj, double distance)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		double distanceParamValue = distance;
		boolean returnValue = queryResult_CMovableObject_Real(this.nativeObject.pointer, objParamValue, distanceParamValue);
		return returnValue;
	}
	native private boolean queryResult_CMovableObject_Real_NoVirtual(long pNativeObject, long obj, double distance);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject obj, double distance)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		double distanceParamValue = distance;
		boolean returnValue = queryResult_CMovableObject_Real_NoVirtual(this.nativeObject.pointer, objParamValue, distanceParamValue);
		return returnValue;
	}

	protected  boolean queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback(long obj, double distance, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex, long point, long pixelpoint)
	{
		com.earthview.world.graphic.MovableObject objParamValue = (obj == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objParamValue != null)
		{
		objParamValue.setDelegate(true);
		objParamValue.setInstancePointer(new InstancePointer(obj));
		IClassFactory objParamValueClassFactory = GlobalClassFactoryMap.get(objParamValue.getCppInstanceTypeName());
		if (objParamValueClassFactory != null)
		{
			objParamValue.setDelegate(true);
			objParamValue = (com.earthview.world.graphic.MovableObject)objParamValueClassFactory.create();
			objParamValue.setDelegate(true);
			objParamValue.setInstancePointer(new InstancePointer(obj));
		}
		}
		double distanceParamValue = distance;
		int objIndexParamValue = objIndex;
		int submeshIndexParamValue = submeshIndex;
		int instanceIndexParamValue = instanceIndex;
		int segmentIndexParamValue = segmentIndex;
		com.earthview.world.spatial.math.Vector3 pointParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.math.Vector3)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		com.earthview.world.spatial.math.Vector2 pixelpointParamValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		pixelpointParamValue.setDelegate(true);
		pixelpointParamValue.setInstancePointer(new InstancePointer(pixelpoint));
		IClassFactory pixelpointParamValueClassFactory = GlobalClassFactoryMap.get(pixelpointParamValue.getCppInstanceTypeName());
		if (pixelpointParamValueClassFactory != null)
		{
			pixelpointParamValue.setDelegate(true);
			pixelpointParamValue = (com.earthview.world.spatial.math.Vector2)pixelpointParamValueClassFactory.create();
			pixelpointParamValue.setDelegate(true);
			pixelpointParamValue.setInstancePointer(new InstancePointer(pixelpoint));
		}
		boolean returnValue = queryResult(objParamValue, distanceParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, pixelpointParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(long pNativeObject, long obj, double distance, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex, long point, long pixelpoint);
	public boolean queryResult(com.earthview.world.graphic.MovableObject obj, double distance, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.spatial.math.Vector2 pixelpoint)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		double distanceParamValue = distance;
		int objIndexParamValue = objIndex;
		int submeshIndexParamValue = submeshIndex;
		int instanceIndexParamValue = instanceIndex;
		int segmentIndexParamValue = segmentIndex;
		long pointParamValue = point.nativeObject.pointer;
		long pixelpointParamValue = pixelpoint.nativeObject.pointer;
		boolean returnValue = queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(this.nativeObject.pointer, objParamValue, distanceParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, pixelpointParamValue);
		return returnValue;
	}
	native private boolean queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_NoVirtual(long pNativeObject, long obj, double distance, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex, long point, long pixelpoint);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject obj, double distance, int objIndex, int submeshIndex, int instanceIndex, int segmentIndex, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.spatial.math.Vector2 pixelpoint)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		double distanceParamValue = distance;
		int objIndexParamValue = objIndex;
		int submeshIndexParamValue = submeshIndex;
		int instanceIndexParamValue = instanceIndex;
		int segmentIndexParamValue = segmentIndex;
		long pointParamValue = point.nativeObject.pointer;
		long pixelpointParamValue = pixelpoint.nativeObject.pointer;
		boolean returnValue = queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_NoVirtual(this.nativeObject.pointer, objParamValue, distanceParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue, pixelpointParamValue);
		return returnValue;
	}

	protected  boolean queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback(long obj, double distance, float e, short c, int i, int r, long cv, long point, long pixelpoint)
	{
		com.earthview.world.graphic.MovableObject objParamValue = (obj == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objParamValue != null)
		{
		objParamValue.setDelegate(true);
		objParamValue.setInstancePointer(new InstancePointer(obj));
		IClassFactory objParamValueClassFactory = GlobalClassFactoryMap.get(objParamValue.getCppInstanceTypeName());
		if (objParamValueClassFactory != null)
		{
			objParamValue.setDelegate(true);
			objParamValue = (com.earthview.world.graphic.MovableObject)objParamValueClassFactory.create();
			objParamValue.setDelegate(true);
			objParamValue.setInstancePointer(new InstancePointer(obj));
		}
		}
		double distanceParamValue = distance;
		float eParamValue = e;
		short cParamValue = c;
		int iParamValue = i;
		int rParamValue = r;
		com.earthview.world.graphic.ColourValue cvParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		cvParamValue.setDelegate(true);
		cvParamValue.setInstancePointer(new InstancePointer(cv));
		IClassFactory cvParamValueClassFactory = GlobalClassFactoryMap.get(cvParamValue.getCppInstanceTypeName());
		if (cvParamValueClassFactory != null)
		{
			cvParamValue.setDelegate(true);
			cvParamValue = (com.earthview.world.graphic.ColourValue)cvParamValueClassFactory.create();
			cvParamValue.setDelegate(true);
			cvParamValue.setInstancePointer(new InstancePointer(cv));
		}
		com.earthview.world.spatial.math.Vector3 pointParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.math.Vector3)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		com.earthview.world.spatial.math.Vector2 pixelpointParamValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		pixelpointParamValue.setDelegate(true);
		pixelpointParamValue.setInstancePointer(new InstancePointer(pixelpoint));
		IClassFactory pixelpointParamValueClassFactory = GlobalClassFactoryMap.get(pixelpointParamValue.getCppInstanceTypeName());
		if (pixelpointParamValueClassFactory != null)
		{
			pixelpointParamValue.setDelegate(true);
			pixelpointParamValue = (com.earthview.world.spatial.math.Vector2)pixelpointParamValueClassFactory.create();
			pixelpointParamValue.setDelegate(true);
			pixelpointParamValue.setInstancePointer(new InstancePointer(pixelpoint));
		}
		boolean returnValue = queryResult(objParamValue, distanceParamValue, eParamValue, cParamValue, iParamValue, rParamValue, cvParamValue, pointParamValue, pixelpointParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(long pNativeObject, long obj, double distance, float e, short c, int i, int r, long cv, long point, long pixelpoint);
	public boolean queryResult(com.earthview.world.graphic.MovableObject obj, double distance, float e, short c, int i, int r, com.earthview.world.graphic.ColourValue cv, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.spatial.math.Vector2 pixelpoint)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		double distanceParamValue = distance;
		float eParamValue = e;
		short cParamValue = c;
		int iParamValue = i;
		int rParamValue = r;
		long cvParamValue = cv.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long pixelpointParamValue = pixelpoint.nativeObject.pointer;
		boolean returnValue = queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(this.nativeObject.pointer, objParamValue, distanceParamValue, eParamValue, cParamValue, iParamValue, rParamValue, cvParamValue, pointParamValue, pixelpointParamValue);
		return returnValue;
	}
	native private boolean queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_NoVirtual(long pNativeObject, long obj, double distance, float e, short c, int i, int r, long cv, long point, long pixelpoint);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject obj, double distance, float e, short c, int i, int r, com.earthview.world.graphic.ColourValue cv, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.spatial.math.Vector2 pixelpoint)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		double distanceParamValue = distance;
		float eParamValue = e;
		short cParamValue = c;
		int iParamValue = i;
		int rParamValue = r;
		long cvParamValue = cv.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long pixelpointParamValue = pixelpoint.nativeObject.pointer;
		boolean returnValue = queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_NoVirtual(this.nativeObject.pointer, objParamValue, distanceParamValue, eParamValue, cParamValue, iParamValue, rParamValue, cvParamValue, pointParamValue, pixelpointParamValue);
		return returnValue;
	}

	protected  boolean queryResult_WorldFragment_Real_callback(long fragment, double distance)
	{
		com.earthview.world.graphic.SceneQuery.WorldFragment fragmentParamValue = (fragment == 0L ? null : new com.earthview.world.graphic.SceneQuery.WorldFragment(CreatedWhenConstruct.CWC_NotToCreate));
		if(fragmentParamValue != null)
		{
		fragmentParamValue.setDelegate(true);
		fragmentParamValue.setInstancePointer(new InstancePointer(fragment));
		IClassFactory fragmentParamValueClassFactory = GlobalClassFactoryMap.get(fragmentParamValue.getCppInstanceTypeName());
		if (fragmentParamValueClassFactory != null)
		{
			fragmentParamValue.setDelegate(true);
			fragmentParamValue = (com.earthview.world.graphic.SceneQuery.WorldFragment)fragmentParamValueClassFactory.create();
			fragmentParamValue.setDelegate(true);
			fragmentParamValue.setInstancePointer(new InstancePointer(fragment));
		}
		}
		double distanceParamValue = distance;
		boolean returnValue = queryResult(fragmentParamValue, distanceParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_WorldFragment_Real(long pNativeObject, long fragment, double distance);
	public boolean queryResult(com.earthview.world.graphic.SceneQuery.WorldFragment fragment, double distance)
	{
		long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
		double distanceParamValue = distance;
		boolean returnValue = queryResult_WorldFragment_Real(this.nativeObject.pointer, fragmentParamValue, distanceParamValue);
		return returnValue;
	}
	native private boolean queryResult_WorldFragment_Real_NoVirtual(long pNativeObject, long fragment, double distance);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.SceneQuery.WorldFragment fragment, double distance)
	{
		long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
		double distanceParamValue = distance;
		boolean returnValue = queryResult_WorldFragment_Real_NoVirtual(this.nativeObject.pointer, fragmentParamValue, distanceParamValue);
		return returnValue;
	}

	public RaySceneQueryListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RaySceneQueryListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_queryResult_CMovableObject_Real(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(long pNativeObject, String method);
	native protected void register_queryResult_WorldFragment_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_queryResult_CMovableObject_Real(this.nativeObject.pointer, "queryResult_CMovableObject_Real_callback");
			this.register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2(this.nativeObject.pointer, "queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback");
			this.register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2(this.nativeObject.pointer, "queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback");
			this.register_queryResult_WorldFragment_Real(this.nativeObject.pointer, "queryResult_WorldFragment_Real_callback");
		}
	}
	
	public static RaySceneQueryListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RaySceneQueryListener obj = null;
 		if(baseObj instanceof RaySceneQueryListener)
		{
			obj = (RaySceneQueryListener)baseObj;
		} else {
			obj = new RaySceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRaySceneQueryListener");
			obj.increaseCast();
		}

		return obj;
	}
}
