package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///ºÚµ•…Ë÷√—’…´
public class LasQueryResultEntry extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry", new LasQueryResultEntryClassFactory());
	}

	public LasQueryResultEntry() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLasQueryResultEntry", null);
	}

	native private long get_geoPosition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_geoPosition()
	{
		long jniValue = get_geoPosition_void(this.nativeObject.pointer);
		
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
	
	native private void set_geoPosition_CVector3 (long pNativeObject, long value);
	public void set_geoPosition(com.earthview.world.spatial.math.Vector3 geoPosition)
	{
		long geoPositionParamValue = geoPosition.nativeObject.pointer;
		
		set_geoPosition_CVector3(this.nativeObject.pointer, geoPositionParamValue);
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
	
	native private boolean OperatorLessThan_CLasQueryResultEntry(long pNativeObject, long rhs);
	//// Comparison operator for sorting
	public boolean OperatorLessThan(com.earthview.world.spatial3d.atlas.LasQueryResultEntry rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorLessThan_CLasQueryResultEntry(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_CLasQueryResultEntry(long pNativeObject, long rhs);
	public boolean OperatorGreaterThan(com.earthview.world.spatial3d.atlas.LasQueryResultEntry rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThan_CLasQueryResultEntry(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	public LasQueryResultEntry(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LasQueryResultEntry(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LasQueryResultEntry fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LasQueryResultEntry obj = null;
 		if(baseObj instanceof LasQueryResultEntry)
		{
			obj = (LasQueryResultEntry)baseObj;
		} else {
			obj = new LasQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLasQueryResultEntry");
			obj.increaseCast();
		}

		return obj;
	}
}
