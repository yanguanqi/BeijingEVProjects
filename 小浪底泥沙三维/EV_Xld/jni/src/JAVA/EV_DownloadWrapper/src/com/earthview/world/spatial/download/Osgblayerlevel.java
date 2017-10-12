package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class Osgblayerlevel extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBLayerLevel", new OsgblayerlevelClassFactory());
	}

	public Osgblayerlevel() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COSGBLayerLevel", null);
	}

	native private int get_mLevel_void(long pNativeObject);
	public int get_mLevel()
	{
		int jniValue = get_mLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mLevel_ev_int32 (long pNativeObject, int value);
	public void set_mLevel(int mLevel)
	{
		int mLevelParamValue = mLevel;
		
		set_mLevel_ev_int32(this.nativeObject.pointer, mLevelParamValue);
	}
	
	native private String get_mBeginCol_void(long pNativeObject);
	public ULongPointer get_mBeginCol()
	{
		String jniValue = get_mBeginCol_void(this.nativeObject.pointer);
		
		ULongPointer __returnValue = new ULongPointer(jniValue);
		return __returnValue;
	}
	
	native private void set_mBeginCol_ev_uint64 (long pNativeObject, long value);
	public void set_mBeginCol(ULongPointer mBeginCol)
	{
		long mBeginColParamValue = mBeginCol.nativeObject.pointer;
		
		set_mBeginCol_ev_uint64(this.nativeObject.pointer, mBeginColParamValue);
	}
	
	native private String get_mEndCol_void(long pNativeObject);
	public ULongPointer get_mEndCol()
	{
		String jniValue = get_mEndCol_void(this.nativeObject.pointer);
		
		ULongPointer __returnValue = new ULongPointer(jniValue);
		return __returnValue;
	}
	
	native private void set_mEndCol_ev_uint64 (long pNativeObject, long value);
	public void set_mEndCol(ULongPointer mEndCol)
	{
		long mEndColParamValue = mEndCol.nativeObject.pointer;
		
		set_mEndCol_ev_uint64(this.nativeObject.pointer, mEndColParamValue);
	}
	
	native private String get_mBeginRow_void(long pNativeObject);
	public ULongPointer get_mBeginRow()
	{
		String jniValue = get_mBeginRow_void(this.nativeObject.pointer);
		
		ULongPointer __returnValue = new ULongPointer(jniValue);
		return __returnValue;
	}
	
	native private void set_mBeginRow_ev_uint64 (long pNativeObject, long value);
	public void set_mBeginRow(ULongPointer mBeginRow)
	{
		long mBeginRowParamValue = mBeginRow.nativeObject.pointer;
		
		set_mBeginRow_ev_uint64(this.nativeObject.pointer, mBeginRowParamValue);
	}
	
	native private String get_mEndRow_void(long pNativeObject);
	public ULongPointer get_mEndRow()
	{
		String jniValue = get_mEndRow_void(this.nativeObject.pointer);
		
		ULongPointer __returnValue = new ULongPointer(jniValue);
		return __returnValue;
	}
	
	native private void set_mEndRow_ev_uint64 (long pNativeObject, long value);
	public void set_mEndRow(ULongPointer mEndRow)
	{
		long mEndRowParamValue = mEndRow.nativeObject.pointer;
		
		set_mEndRow_ev_uint64(this.nativeObject.pointer, mEndRowParamValue);
	}
	
	native private float get_mTileWidth_void(long pNativeObject);
	public float get_mTileWidth()
	{
		float jniValue = get_mTileWidth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTileWidth_ev_real32 (long pNativeObject, float value);
	public void set_mTileWidth(float mTileWidth)
	{
		float mTileWidthParamValue = mTileWidth;
		
		set_mTileWidth_ev_real32(this.nativeObject.pointer, mTileWidthParamValue);
	}
	
	native private float get_mTileHeight_void(long pNativeObject);
	public float get_mTileHeight()
	{
		float jniValue = get_mTileHeight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTileHeight_ev_real32 (long pNativeObject, float value);
	public void set_mTileHeight(float mTileHeight)
	{
		float mTileHeightParamValue = mTileHeight;
		
		set_mTileHeight_ev_real32(this.nativeObject.pointer, mTileHeightParamValue);
	}
	
	public Osgblayerlevel(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Osgblayerlevel(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Osgblayerlevel fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Osgblayerlevel obj = null;
 		if(baseObj instanceof Osgblayerlevel)
		{
			obj = (Osgblayerlevel)baseObj;
		} else {
			obj = new Osgblayerlevel(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COSGBLayerLevel");
			obj.increaseCast();
		}

		return obj;
	}
}
