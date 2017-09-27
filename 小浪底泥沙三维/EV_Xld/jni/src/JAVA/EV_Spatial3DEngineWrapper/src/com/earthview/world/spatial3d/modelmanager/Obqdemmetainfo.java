package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Obqdemmetainfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo", new ObqdemmetainfoClassFactory());
	}

	public Obqdemmetainfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("OBQDemMetaInfo", null);
	}

	native private long get_mPointNumberPerSide_void(long pNativeObject);
	public long get_mPointNumberPerSide()
	{
		long jniValue = get_mPointNumberPerSide_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mPointNumberPerSide_ev_uint32 (long pNativeObject, long value);
	public void set_mPointNumberPerSide(long mPointNumberPerSide)
	{
		long mPointNumberPerSideParamValue = mPointNumberPerSide;
		
		set_mPointNumberPerSide_ev_uint32(this.nativeObject.pointer, mPointNumberPerSideParamValue);
	}
	
	native private short get_mLevelCount_void(long pNativeObject);
	public short get_mLevelCount()
	{
		short jniValue = get_mLevelCount_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mLevelCount_ev_uint8 (long pNativeObject, short value);
	public void set_mLevelCount(short mLevelCount)
	{
		short mLevelCountParamValue = mLevelCount;
		
		set_mLevelCount_ev_uint8(this.nativeObject.pointer, mLevelCountParamValue);
	}
	
	native private int get_mDataType_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.OBQDemType get_mDataType()
	{
		int jniValue = get_mDataType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial3d.modelmanager.OBQDemType.toEnum(jniValue);
	}
	
	native private void set_mDataType_OBQDemType (long pNativeObject, int value);
	public void set_mDataType(com.earthview.world.spatial3d.modelmanager.OBQDemType mDataType)
	{
		int mDataTypeParamValue = mDataType.getValue();
		
		set_mDataType_OBQDemType(this.nativeObject.pointer, mDataTypeParamValue);
	}
	
	native private float get_mZeroTileWidth_void(long pNativeObject);
	public float get_mZeroTileWidth()
	{
		float jniValue = get_mZeroTileWidth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mZeroTileWidth_ev_real32 (long pNativeObject, float value);
	public void set_mZeroTileWidth(float mZeroTileWidth)
	{
		float mZeroTileWidthParamValue = mZeroTileWidth;
		
		set_mZeroTileWidth_ev_real32(this.nativeObject.pointer, mZeroTileWidthParamValue);
	}
	
	native private short get_mStartQuadLevel_void(long pNativeObject);
	public short get_mStartQuadLevel()
	{
		short jniValue = get_mStartQuadLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mStartQuadLevel_ev_uint8 (long pNativeObject, short value);
	public void set_mStartQuadLevel(short mStartQuadLevel)
	{
		short mStartQuadLevelParamValue = mStartQuadLevel;
		
		set_mStartQuadLevel_ev_uint8(this.nativeObject.pointer, mStartQuadLevelParamValue);
	}
	
	native private long get_mZeroLevelRowCount_void(long pNativeObject);
	public long get_mZeroLevelRowCount()
	{
		long jniValue = get_mZeroLevelRowCount_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mZeroLevelRowCount_ev_uint32 (long pNativeObject, long value);
	public void set_mZeroLevelRowCount(long mZeroLevelRowCount)
	{
		long mZeroLevelRowCountParamValue = mZeroLevelRowCount;
		
		set_mZeroLevelRowCount_ev_uint32(this.nativeObject.pointer, mZeroLevelRowCountParamValue);
	}
	
	native private long get_mZeroLevelColCount_void(long pNativeObject);
	public long get_mZeroLevelColCount()
	{
		long jniValue = get_mZeroLevelColCount_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mZeroLevelColCount_ev_uint32 (long pNativeObject, long value);
	public void set_mZeroLevelColCount(long mZeroLevelColCount)
	{
		long mZeroLevelColCountParamValue = mZeroLevelColCount;
		
		set_mZeroLevelColCount_ev_uint32(this.nativeObject.pointer, mZeroLevelColCountParamValue);
	}
	
	native private float get_mStartX_void(long pNativeObject);
	public float get_mStartX()
	{
		float jniValue = get_mStartX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mStartX_ev_real32 (long pNativeObject, float value);
	public void set_mStartX(float mStartX)
	{
		float mStartXParamValue = mStartX;
		
		set_mStartX_ev_real32(this.nativeObject.pointer, mStartXParamValue);
	}
	
	native private float get_mStartY_void(long pNativeObject);
	public float get_mStartY()
	{
		float jniValue = get_mStartY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mStartY_ev_real32 (long pNativeObject, float value);
	public void set_mStartY(float mStartY)
	{
		float mStartYParamValue = mStartY;
		
		set_mStartY_ev_real32(this.nativeObject.pointer, mStartYParamValue);
	}
	
	native private float get_mStartZ_void(long pNativeObject);
	public float get_mStartZ()
	{
		float jniValue = get_mStartZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mStartZ_ev_real32 (long pNativeObject, float value);
	public void set_mStartZ(float mStartZ)
	{
		float mStartZParamValue = mStartZ;
		
		set_mStartZ_ev_real32(this.nativeObject.pointer, mStartZParamValue);
	}
	
	native private float get_mEndX_void(long pNativeObject);
	public float get_mEndX()
	{
		float jniValue = get_mEndX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mEndX_ev_real32 (long pNativeObject, float value);
	public void set_mEndX(float mEndX)
	{
		float mEndXParamValue = mEndX;
		
		set_mEndX_ev_real32(this.nativeObject.pointer, mEndXParamValue);
	}
	
	native private float get_mEndY_void(long pNativeObject);
	public float get_mEndY()
	{
		float jniValue = get_mEndY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mEndY_ev_real32 (long pNativeObject, float value);
	public void set_mEndY(float mEndY)
	{
		float mEndYParamValue = mEndY;
		
		set_mEndY_ev_real32(this.nativeObject.pointer, mEndYParamValue);
	}
	
	native private float get_mEndZ_void(long pNativeObject);
	public float get_mEndZ()
	{
		float jniValue = get_mEndZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mEndZ_ev_real32 (long pNativeObject, float value);
	public void set_mEndZ(float mEndZ)
	{
		float mEndZParamValue = mEndZ;
		
		set_mEndZ_ev_real32(this.nativeObject.pointer, mEndZParamValue);
	}
	
	public Obqdemmetainfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Obqdemmetainfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Obqdemmetainfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Obqdemmetainfo obj = null;
 		if(baseObj instanceof Obqdemmetainfo)
		{
			obj = (Obqdemmetainfo)baseObj;
		} else {
			obj = new Obqdemmetainfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "OBQDemMetaInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
