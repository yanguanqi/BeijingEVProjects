package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RaySceneQuery extends com.earthview.world.graphic.SceneQuery {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRaySceneQuery", new RaySceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRaySceneQueryProxy", new RaySceneQueryClassFactory());
	}

	public static class RaySceneQueryInternalListener extends com.earthview.world.graphic.RaySceneQueryListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener", new RaySceneQueryInternalListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRaySceneQuery::JCRaySceneQueryInternalListenerProxy", new RaySceneQueryInternalListenerClassFactory());
		}

		public RaySceneQueryInternalListener(com.earthview.world.graphic.RaySceneQuery ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCRaySceneQueryInternalListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.RaySceneQuery$RaySceneQueryInternalListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
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

		public RaySceneQueryInternalListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RaySceneQueryInternalListener(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static RaySceneQueryInternalListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RaySceneQueryInternalListener obj = null;
 			if(baseObj instanceof RaySceneQueryInternalListener)
			{
				obj = (RaySceneQueryInternalListener)baseObj;
			} else {
				obj = new RaySceneQueryInternalListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRaySceneQueryInternalListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RaySceneQueryInternalListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RaySceneQueryInternalListener emptyInstance = new RaySceneQueryInternalListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
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

	protected  long getListenerPtr_void_callback()
	{
		com.earthview.world.graphic.RaySceneQuery.RaySceneQueryInternalListener returnValue = getListenerPtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getListenerPtr_void(long pNativeObject);
	public com.earthview.world.graphic.RaySceneQuery.RaySceneQueryInternalListener getListenerPtr()
	{
		long returnValue = getListenerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RaySceneQuery.RaySceneQueryInternalListener __returnValue = new com.earthview.world.graphic.RaySceneQuery.RaySceneQueryInternalListener(CreatedWhenConstruct.CWC_NotToCreate, "CRaySceneQueryInternalListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RaySceneQuery.RaySceneQueryInternalListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRaySceneQueryInternalListener");
		}
		return __returnValue;
	}
	native private long getListenerPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.RaySceneQuery.RaySceneQueryInternalListener getListenerPtr_NoVirtual()
	{
		long returnValue = getListenerPtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RaySceneQuery.RaySceneQueryInternalListener __returnValue = new com.earthview.world.graphic.RaySceneQuery.RaySceneQueryInternalListener(CreatedWhenConstruct.CWC_NotToCreate, "CRaySceneQueryInternalListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RaySceneQuery.RaySceneQueryInternalListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRaySceneQueryInternalListener");
		}
		return __returnValue;
	}

	///virtual const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener& getListener();
	public RaySceneQuery(com.earthview.world.graphic.SceneManager ref_mgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mgrPtr = new BasePointer(ref_mgr);
		list.add("ref_mgr", ref_mgrPtr.get());
		Create("JCRaySceneQueryProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RaySceneQuery".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setRay_CRay_callback(long ray)
	{
		com.earthview.world.spatial.math.Ray rayParamValue = new com.earthview.world.spatial.math.Ray(CreatedWhenConstruct.CWC_NotToCreate);
		rayParamValue.setDelegate(true);
		rayParamValue.setInstancePointer(new InstancePointer(ray));
		IClassFactory rayParamValueClassFactory = GlobalClassFactoryMap.get(rayParamValue.getCppInstanceTypeName());
		if (rayParamValueClassFactory != null)
		{
			rayParamValue.setDelegate(true);
			rayParamValue = (com.earthview.world.spatial.math.Ray)rayParamValueClassFactory.create();
			rayParamValue.setDelegate(true);
			rayParamValue.setInstancePointer(new InstancePointer(ray));
		}
		setRay(rayParamValue);
	}

	native private void setRay_CRay(long pNativeObject, long ray);
	public void setRay(com.earthview.world.spatial.math.Ray ray)
	{
		long rayParamValue = ray.nativeObject.pointer;
		setRay_CRay(this.nativeObject.pointer, rayParamValue);
	}
	native private void setRay_CRay_NoVirtual(long pNativeObject, long ray);
	protected void setRay_NoVirtual(com.earthview.world.spatial.math.Ray ray)
	{
		long rayParamValue = ray.nativeObject.pointer;
		setRay_CRay_NoVirtual(this.nativeObject.pointer, rayParamValue);
	}

	protected  long getRay_void_callback()
	{
		com.earthview.world.spatial.math.Ray returnValue = getRay();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRay_void(long pNativeObject);
	public com.earthview.world.spatial.math.Ray getRay()
	{
		long returnValue = getRay_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Ray __returnValue = new com.earthview.world.spatial.math.Ray(CreatedWhenConstruct.CWC_NotToCreate, "CRay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Ray)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRay");
		}
		return __returnValue;
	}
	native private long getRay_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Ray getRay_NoVirtual()
	{
		long returnValue = getRay_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Ray __returnValue = new com.earthview.world.spatial.math.Ray(CreatedWhenConstruct.CWC_NotToCreate, "CRay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Ray)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRay");
		}
		return __returnValue;
	}

	protected  void setSortByDistance_ev_bool_ev_uint16_callback(boolean sort, int maxresults)
	{
		boolean sortParamValue = sort;
		int maxresultsParamValue = maxresults;
		setSortByDistance(sortParamValue, maxresultsParamValue);
	}

	native private void setSortByDistance_ev_bool_ev_uint16(long pNativeObject, boolean sort, int maxresults);
	public void setSortByDistance(boolean sort, int maxresults)
	{
		boolean sortParamValue = sort;
		int maxresultsParamValue = maxresults;
		setSortByDistance_ev_bool_ev_uint16(this.nativeObject.pointer, sortParamValue, maxresultsParamValue);
	}
	native private void setSortByDistance_ev_bool_ev_uint16_NoVirtual(long pNativeObject, boolean sort, int maxresults);
	protected void setSortByDistance_NoVirtual(boolean sort, int maxresults)
	{
		boolean sortParamValue = sort;
		int maxresultsParamValue = maxresults;
		setSortByDistance_ev_bool_ev_uint16_NoVirtual(this.nativeObject.pointer, sortParamValue, maxresultsParamValue);
	}

	protected  void setSortByDistance_ev_bool_callback(boolean sort)
	{
		boolean sortParamValue = sort;
		setSortByDistance(sortParamValue);
	}

	native private void setSortByDistance_ev_bool(long pNativeObject, boolean sort);
	public void setSortByDistance(boolean sort)
	{
		boolean sortParamValue = sort;
		setSortByDistance_ev_bool(this.nativeObject.pointer, sortParamValue);
	}
	native private void setSortByDistance_ev_bool_NoVirtual(long pNativeObject, boolean sort);
	protected void setSortByDistance_NoVirtual(boolean sort)
	{
		boolean sortParamValue = sort;
		setSortByDistance_ev_bool_NoVirtual(this.nativeObject.pointer, sortParamValue);
	}

	protected  boolean getSortByDistance_void_callback()
	{
		boolean returnValue = getSortByDistance();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getSortByDistance_void(long pNativeObject);
	public boolean getSortByDistance()
	{
		boolean returnValue = getSortByDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getSortByDistance_void_NoVirtual(long pNativeObject);
	protected boolean getSortByDistance_NoVirtual()
	{
		boolean returnValue = getSortByDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getMaxResults_void_callback()
	{
		int returnValue = getMaxResults();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMaxResults_void(long pNativeObject);
	public int getMaxResults()
	{
		int returnValue = getMaxResults_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxResults_void_NoVirtual(long pNativeObject);
	protected int getMaxResults_NoVirtual()
	{
		int returnValue = getMaxResults_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long execute_void_callback()
	{
		com.earthview.world.graphic.RaySceneQueryResult returnValue = execute();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  void execute_CRaySceneQueryListener_callback(long listener)
	{
		com.earthview.world.graphic.RaySceneQueryListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.RaySceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.RaySceneQueryListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		execute(listenerParamValue);
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

	protected  long getLastResults_void_callback()
	{
		com.earthview.world.graphic.RaySceneQueryResult returnValue = getLastResults();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLastResults_void(long pNativeObject);
	public com.earthview.world.graphic.RaySceneQueryResult getLastResults()
	{
		long returnValue = getLastResults_void(this.nativeObject.pointer);
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
	native private long getLastResults_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.RaySceneQueryResult getLastResults_NoVirtual()
	{
		long returnValue = getLastResults_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void clearResults_void_callback()
	{
		clearResults();
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

	public RaySceneQuery(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RaySceneQuery(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static RaySceneQuery fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RaySceneQuery obj = null;
 		if(baseObj instanceof RaySceneQuery)
		{
			obj = (RaySceneQuery)baseObj;
		} else {
			obj = new RaySceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRaySceneQuery");
			obj.increaseCast();
		}

		return obj;
	}
}
