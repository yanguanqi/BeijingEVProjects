package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class Osgbtoptile extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBTopTile", new OsgbtoptileClassFactory());
	}

	public Osgbtoptile() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COSGBTopTile", null);
	}

	native private String get_mTileName_void(long pNativeObject);
	public String get_mTileName()
	{
		String jniValue = get_mTileName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTileName_EVString (long pNativeObject, String value);
	public void set_mTileName(String mTileName)
	{
		String mTileNameParamValue = mTileName;
		
		set_mTileName_EVString(this.nativeObject.pointer, mTileNameParamValue);
	}
	
	native private String get_mModelPath_void(long pNativeObject);
	public String get_mModelPath()
	{
		String jniValue = get_mModelPath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mModelPath_EVString (long pNativeObject, String value);
	public void set_mModelPath(String mModelPath)
	{
		String mModelPathParamValue = mModelPath;
		
		set_mModelPath_EVString(this.nativeObject.pointer, mModelPathParamValue);
	}
	
	native private double get_mCenterX_void(long pNativeObject);
	public double get_mCenterX()
	{
		double jniValue = get_mCenterX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCenterX_ev_real64 (long pNativeObject, double value);
	public void set_mCenterX(double mCenterX)
	{
		double mCenterXParamValue = mCenterX;
		
		set_mCenterX_ev_real64(this.nativeObject.pointer, mCenterXParamValue);
	}
	
	native private double get_mCenterY_void(long pNativeObject);
	public double get_mCenterY()
	{
		double jniValue = get_mCenterY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCenterY_ev_real64 (long pNativeObject, double value);
	public void set_mCenterY(double mCenterY)
	{
		double mCenterYParamValue = mCenterY;
		
		set_mCenterY_ev_real64(this.nativeObject.pointer, mCenterYParamValue);
	}
	
	native private double get_mCenterZ_void(long pNativeObject);
	public double get_mCenterZ()
	{
		double jniValue = get_mCenterZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCenterZ_ev_real64 (long pNativeObject, double value);
	public void set_mCenterZ(double mCenterZ)
	{
		double mCenterZParamValue = mCenterZ;
		
		set_mCenterZ_ev_real64(this.nativeObject.pointer, mCenterZParamValue);
	}
	
	native private double get_mRadius_void(long pNativeObject);
	public double get_mRadius()
	{
		double jniValue = get_mRadius_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRadius_ev_real64 (long pNativeObject, double value);
	public void set_mRadius(double mRadius)
	{
		double mRadiusParamValue = mRadius;
		
		set_mRadius_ev_real64(this.nativeObject.pointer, mRadiusParamValue);
	}
	
	native private double get_mMinRange_void(long pNativeObject);
	public double get_mMinRange()
	{
		double jniValue = get_mMinRange_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMinRange_ev_real64 (long pNativeObject, double value);
	public void set_mMinRange(double mMinRange)
	{
		double mMinRangeParamValue = mMinRange;
		
		set_mMinRange_ev_real64(this.nativeObject.pointer, mMinRangeParamValue);
	}
	
	public Osgbtoptile(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Osgbtoptile(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Osgbtoptile fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Osgbtoptile obj = null;
 		if(baseObj instanceof Osgbtoptile)
		{
			obj = (Osgbtoptile)baseObj;
		} else {
			obj = new Osgbtoptile(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COSGBTopTile");
			obj.increaseCast();
		}

		return obj;
	}
}
