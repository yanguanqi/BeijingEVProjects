package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Bilstruct extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::BILStruct", new BilstructClassFactory());
	}

	public Bilstruct(int pointNumberPerSide) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pointNumberPerSidePtr = new BasePointer(pointNumberPerSide);
		list.add("pointNumberPerSide", pointNumberPerSidePtr.get());
		Create("BILStruct", list);
	}

	native private long OperatorAssign_BILStruct(long pNativeObject, long rhs);
	public com.earthview.world.spatial3d.modelmanager.Bilstruct OperatorAssign(com.earthview.world.spatial3d.modelmanager.Bilstruct rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorAssign_BILStruct(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.spatial3d.modelmanager.Bilstruct __returnValue = new com.earthview.world.spatial3d.modelmanager.Bilstruct(CreatedWhenConstruct.CWC_NotToCreate, "BILStruct");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.Bilstruct)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "BILStruct");
		}
		return __returnValue;
	}
	native private boolean findLegalityData_ev_real32_ev_real32_ev_bool(long pNativeObject, long data, long height, long allNoData);
	public boolean findLegalityData(FloatPointer data, FloatPointer height, BooleanPointer allNoData)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		long heightParamValue = height.nativeObject.pointer;
		long allNoDataParamValue = allNoData.nativeObject.pointer;
		boolean returnValue = findLegalityData_ev_real32_ev_real32_ev_bool(this.nativeObject.pointer, dataParamValue, heightParamValue, allNoDataParamValue);
		return returnValue;
	}
	native private float getHeight_ev_real32_ev_real32(long pNativeObject, float x, float z);
	public float getHeight(float x, float z)
	{
		float xParamValue = x;
		float zParamValue = z;
		float returnValue = getHeight_ev_real32_ev_real32(this.nativeObject.pointer, xParamValue, zParamValue);
		return returnValue;
	}
	native private boolean readBIL_EVString_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_ev_int32_ev_real32_ev_int32_ev_int32_CBILCache_BILStruct(long pNativeObject, String desFolder, int level, float x, float z, float zeroStartX, float zeroStartZ, int startQuadLevel, float zeroTileWidth, int zeroLevelRowCount, int zeroLevelColCount, long cache, long bilStruct);
	public boolean readBIL(String desFolder, int level, float x, float z, float zeroStartX, float zeroStartZ, int startQuadLevel, float zeroTileWidth, int zeroLevelRowCount, int zeroLevelColCount, com.earthview.world.spatial3d.modelmanager.Bilcache cache, com.earthview.world.spatial3d.modelmanager.Bilstruct bilStruct)
	{
		String desFolderParamValue = desFolder;
		int levelParamValue = level;
		float xParamValue = x;
		float zParamValue = z;
		float zeroStartXParamValue = zeroStartX;
		float zeroStartZParamValue = zeroStartZ;
		int startQuadLevelParamValue = startQuadLevel;
		float zeroTileWidthParamValue = zeroTileWidth;
		int zeroLevelRowCountParamValue = zeroLevelRowCount;
		int zeroLevelColCountParamValue = zeroLevelColCount;
		long cacheParamValue = (cache == null ? 0L : cache.nativeObject.pointer);
		long bilStructParamValue = bilStruct.nativeObject.pointer;
		boolean returnValue = readBIL_EVString_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_ev_int32_ev_real32_ev_int32_ev_int32_CBILCache_BILStruct(this.nativeObject.pointer, desFolderParamValue, levelParamValue, xParamValue, zParamValue, zeroStartXParamValue, zeroStartZParamValue, startQuadLevelParamValue, zeroTileWidthParamValue, zeroLevelRowCountParamValue, zeroLevelColCountParamValue, cacheParamValue, bilStructParamValue);
		return returnValue;
	}
	native private long get_mData_void(long pNativeObject);
	public FloatPointer get_mData()
	{
		long jniValue = get_mData_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		FloatPointer __returnValue = new FloatPointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_mData_ev_real32 (long pNativeObject, long value);
	public void set_mData(FloatPointer mData)
	{
		long mDataParamValue = (mData == null ? 0L : mData.nativeObject.pointer);
		
		set_mData_ev_real32(this.nativeObject.pointer, mDataParamValue);
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
	
	native private int get_mRow_void(long pNativeObject);
	public int get_mRow()
	{
		int jniValue = get_mRow_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRow_ev_int32 (long pNativeObject, int value);
	public void set_mRow(int mRow)
	{
		int mRowParamValue = mRow;
		
		set_mRow_ev_int32(this.nativeObject.pointer, mRowParamValue);
	}
	
	native private int get_mCol_void(long pNativeObject);
	public int get_mCol()
	{
		int jniValue = get_mCol_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCol_ev_int32 (long pNativeObject, int value);
	public void set_mCol(int mCol)
	{
		int mColParamValue = mCol;
		
		set_mCol_ev_int32(this.nativeObject.pointer, mColParamValue);
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
	
	native private int get_mPointNumberPerSide_void(long pNativeObject);
	public int get_mPointNumberPerSide()
	{
		int jniValue = get_mPointNumberPerSide_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mPointNumberPerSide_ev_int32 (long pNativeObject, int value);
	public void set_mPointNumberPerSide(int mPointNumberPerSide)
	{
		int mPointNumberPerSideParamValue = mPointNumberPerSide;
		
		set_mPointNumberPerSide_ev_int32(this.nativeObject.pointer, mPointNumberPerSideParamValue);
	}
	
	public Bilstruct(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Bilstruct(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Bilstruct fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Bilstruct obj = null;
 		if(baseObj instanceof Bilstruct)
		{
			obj = (Bilstruct)baseObj;
		} else {
			obj = new Bilstruct(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "BILStruct");
			obj.increaseCast();
		}

		return obj;
	}
}
