package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Obqmetainfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::OBQMetaInfo", new ObqmetainfoClassFactory());
	}

	public Obqmetainfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("OBQMetaInfo", null);
	}

	native private String get_mVersion_void(long pNativeObject);
	public String get_mVersion()
	{
		String jniValue = get_mVersion_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mVersion_EVString (long pNativeObject, String value);
	public void set_mVersion(String mVersion)
	{
		String mVersionParamValue = mVersion;
		
		set_mVersion_EVString(this.nativeObject.pointer, mVersionParamValue);
	}
	
	native private String get_mSrs_void(long pNativeObject);
	public String get_mSrs()
	{
		String jniValue = get_mSrs_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mSrs_EVString (long pNativeObject, String value);
	public void set_mSrs(String mSrs)
	{
		String mSrsParamValue = mSrs;
		
		set_mSrs_EVString(this.nativeObject.pointer, mSrsParamValue);
	}
	
	native private double get_mLatitude_void(long pNativeObject);
	public double get_mLatitude()
	{
		double jniValue = get_mLatitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mLatitude_ev_real64 (long pNativeObject, double value);
	public void set_mLatitude(double mLatitude)
	{
		double mLatitudeParamValue = mLatitude;
		
		set_mLatitude_ev_real64(this.nativeObject.pointer, mLatitudeParamValue);
	}
	
	native private double get_mLongitude_void(long pNativeObject);
	public double get_mLongitude()
	{
		double jniValue = get_mLongitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mLongitude_ev_real64 (long pNativeObject, double value);
	public void set_mLongitude(double mLongitude)
	{
		double mLongitudeParamValue = mLongitude;
		
		set_mLongitude_ev_real64(this.nativeObject.pointer, mLongitudeParamValue);
	}
	
	native private double get_mAltitude_void(long pNativeObject);
	public double get_mAltitude()
	{
		double jniValue = get_mAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mAltitude(double mAltitude)
	{
		double mAltitudeParamValue = mAltitude;
		
		set_mAltitude_ev_real64(this.nativeObject.pointer, mAltitudeParamValue);
	}
	
	native private double get_mWorldScalex_void(long pNativeObject);
	public double get_mWorldScalex()
	{
		double jniValue = get_mWorldScalex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mWorldScalex_ev_real64 (long pNativeObject, double value);
	public void set_mWorldScalex(double mWorldScalex)
	{
		double mWorldScalexParamValue = mWorldScalex;
		
		set_mWorldScalex_ev_real64(this.nativeObject.pointer, mWorldScalexParamValue);
	}
	
	native private double get_mWorldScaley_void(long pNativeObject);
	public double get_mWorldScaley()
	{
		double jniValue = get_mWorldScaley_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mWorldScaley_ev_real64 (long pNativeObject, double value);
	public void set_mWorldScaley(double mWorldScaley)
	{
		double mWorldScaleyParamValue = mWorldScaley;
		
		set_mWorldScaley_ev_real64(this.nativeObject.pointer, mWorldScaleyParamValue);
	}
	
	native private double get_mWorldScalez_void(long pNativeObject);
	public double get_mWorldScalez()
	{
		double jniValue = get_mWorldScalez_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mWorldScalez_ev_real64 (long pNativeObject, double value);
	public void set_mWorldScalez(double mWorldScalez)
	{
		double mWorldScalezParamValue = mWorldScalez;
		
		set_mWorldScalez_ev_real64(this.nativeObject.pointer, mWorldScalezParamValue);
	}
	
	native private double get_mWorldRotx_void(long pNativeObject);
	public double get_mWorldRotx()
	{
		double jniValue = get_mWorldRotx_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mWorldRotx_ev_real64 (long pNativeObject, double value);
	public void set_mWorldRotx(double mWorldRotx)
	{
		double mWorldRotxParamValue = mWorldRotx;
		
		set_mWorldRotx_ev_real64(this.nativeObject.pointer, mWorldRotxParamValue);
	}
	
	native private double get_mWorldRoty_void(long pNativeObject);
	public double get_mWorldRoty()
	{
		double jniValue = get_mWorldRoty_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mWorldRoty_ev_real64 (long pNativeObject, double value);
	public void set_mWorldRoty(double mWorldRoty)
	{
		double mWorldRotyParamValue = mWorldRoty;
		
		set_mWorldRoty_ev_real64(this.nativeObject.pointer, mWorldRotyParamValue);
	}
	
	native private double get_mWorldRotz_void(long pNativeObject);
	public double get_mWorldRotz()
	{
		double jniValue = get_mWorldRotz_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mWorldRotz_ev_real64 (long pNativeObject, double value);
	public void set_mWorldRotz(double mWorldRotz)
	{
		double mWorldRotzParamValue = mWorldRotz;
		
		set_mWorldRotz_ev_real64(this.nativeObject.pointer, mWorldRotzParamValue);
	}
	
	native private double get_mWorldRotw_void(long pNativeObject);
	public double get_mWorldRotw()
	{
		double jniValue = get_mWorldRotw_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mWorldRotw_ev_real64 (long pNativeObject, double value);
	public void set_mWorldRotw(double mWorldRotw)
	{
		double mWorldRotwParamValue = mWorldRotw;
		
		set_mWorldRotw_ev_real64(this.nativeObject.pointer, mWorldRotwParamValue);
	}
	
	native private float get_mXmin_void(long pNativeObject);
	public float get_mXmin()
	{
		float jniValue = get_mXmin_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mXmin_ev_real32 (long pNativeObject, float value);
	public void set_mXmin(float mXmin)
	{
		float mXminParamValue = mXmin;
		
		set_mXmin_ev_real32(this.nativeObject.pointer, mXminParamValue);
	}
	
	native private float get_mXmax_void(long pNativeObject);
	public float get_mXmax()
	{
		float jniValue = get_mXmax_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mXmax_ev_real32 (long pNativeObject, float value);
	public void set_mXmax(float mXmax)
	{
		float mXmaxParamValue = mXmax;
		
		set_mXmax_ev_real32(this.nativeObject.pointer, mXmaxParamValue);
	}
	
	native private float get_mYmin_void(long pNativeObject);
	public float get_mYmin()
	{
		float jniValue = get_mYmin_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mYmin_ev_real32 (long pNativeObject, float value);
	public void set_mYmin(float mYmin)
	{
		float mYminParamValue = mYmin;
		
		set_mYmin_ev_real32(this.nativeObject.pointer, mYminParamValue);
	}
	
	native private float get_mYmax_void(long pNativeObject);
	public float get_mYmax()
	{
		float jniValue = get_mYmax_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mYmax_ev_real32 (long pNativeObject, float value);
	public void set_mYmax(float mYmax)
	{
		float mYmaxParamValue = mYmax;
		
		set_mYmax_ev_real32(this.nativeObject.pointer, mYmaxParamValue);
	}
	
	native private float get_mZmin_void(long pNativeObject);
	public float get_mZmin()
	{
		float jniValue = get_mZmin_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mZmin_ev_real32 (long pNativeObject, float value);
	public void set_mZmin(float mZmin)
	{
		float mZminParamValue = mZmin;
		
		set_mZmin_ev_real32(this.nativeObject.pointer, mZminParamValue);
	}
	
	native private float get_mZmax_void(long pNativeObject);
	public float get_mZmax()
	{
		float jniValue = get_mZmax_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mZmax_ev_real32 (long pNativeObject, float value);
	public void set_mZmax(float mZmax)
	{
		float mZmaxParamValue = mZmax;
		
		set_mZmax_ev_real32(this.nativeObject.pointer, mZmaxParamValue);
	}
	
	native private int get_mDataType_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.OBQDataType get_mDataType()
	{
		int jniValue = get_mDataType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial3d.modelmanager.OBQDataType.toEnum(jniValue);
	}
	
	native private void set_mDataType_OBQDataType (long pNativeObject, int value);
	public void set_mDataType(com.earthview.world.spatial3d.modelmanager.OBQDataType mDataType)
	{
		int mDataTypeParamValue = mDataType.getValue();
		
		set_mDataType_OBQDataType(this.nativeObject.pointer, mDataTypeParamValue);
	}
	
	native private double get_mPosx_void(long pNativeObject);
	public double get_mPosx()
	{
		double jniValue = get_mPosx_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mPosx_ev_real64 (long pNativeObject, double value);
	public void set_mPosx(double mPosx)
	{
		double mPosxParamValue = mPosx;
		
		set_mPosx_ev_real64(this.nativeObject.pointer, mPosxParamValue);
	}
	
	native private double get_mPosy_void(long pNativeObject);
	public double get_mPosy()
	{
		double jniValue = get_mPosy_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mPosy_ev_real64 (long pNativeObject, double value);
	public void set_mPosy(double mPosy)
	{
		double mPosyParamValue = mPosy;
		
		set_mPosy_ev_real64(this.nativeObject.pointer, mPosyParamValue);
	}
	
	native private double get_mPosz_void(long pNativeObject);
	public double get_mPosz()
	{
		double jniValue = get_mPosz_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mPosz_ev_real64 (long pNativeObject, double value);
	public void set_mPosz(double mPosz)
	{
		double mPoszParamValue = mPosz;
		
		set_mPosz_ev_real64(this.nativeObject.pointer, mPoszParamValue);
	}
	
	native private double get_mScalex_void(long pNativeObject);
	public double get_mScalex()
	{
		double jniValue = get_mScalex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mScalex_ev_real64 (long pNativeObject, double value);
	public void set_mScalex(double mScalex)
	{
		double mScalexParamValue = mScalex;
		
		set_mScalex_ev_real64(this.nativeObject.pointer, mScalexParamValue);
	}
	
	native private double get_mScaley_void(long pNativeObject);
	public double get_mScaley()
	{
		double jniValue = get_mScaley_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mScaley_ev_real64 (long pNativeObject, double value);
	public void set_mScaley(double mScaley)
	{
		double mScaleyParamValue = mScaley;
		
		set_mScaley_ev_real64(this.nativeObject.pointer, mScaleyParamValue);
	}
	
	native private double get_mScalez_void(long pNativeObject);
	public double get_mScalez()
	{
		double jniValue = get_mScalez_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mScalez_ev_real64 (long pNativeObject, double value);
	public void set_mScalez(double mScalez)
	{
		double mScalezParamValue = mScalez;
		
		set_mScalez_ev_real64(this.nativeObject.pointer, mScalezParamValue);
	}
	
	native private double get_mRotw_void(long pNativeObject);
	public double get_mRotw()
	{
		double jniValue = get_mRotw_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRotw_ev_real64 (long pNativeObject, double value);
	public void set_mRotw(double mRotw)
	{
		double mRotwParamValue = mRotw;
		
		set_mRotw_ev_real64(this.nativeObject.pointer, mRotwParamValue);
	}
	
	native private double get_mRotx_void(long pNativeObject);
	public double get_mRotx()
	{
		double jniValue = get_mRotx_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRotx_ev_real64 (long pNativeObject, double value);
	public void set_mRotx(double mRotx)
	{
		double mRotxParamValue = mRotx;
		
		set_mRotx_ev_real64(this.nativeObject.pointer, mRotxParamValue);
	}
	
	native private double get_mRoty_void(long pNativeObject);
	public double get_mRoty()
	{
		double jniValue = get_mRoty_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRoty_ev_real64 (long pNativeObject, double value);
	public void set_mRoty(double mRoty)
	{
		double mRotyParamValue = mRoty;
		
		set_mRoty_ev_real64(this.nativeObject.pointer, mRotyParamValue);
	}
	
	native private double get_mRotz_void(long pNativeObject);
	public double get_mRotz()
	{
		double jniValue = get_mRotz_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRotz_ev_real64 (long pNativeObject, double value);
	public void set_mRotz(double mRotz)
	{
		double mRotzParamValue = mRotz;
		
		set_mRotz_ev_real64(this.nativeObject.pointer, mRotzParamValue);
	}
	
	native private short get_mMaxLevel_void(long pNativeObject);
	public short get_mMaxLevel()
	{
		short jniValue = get_mMaxLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMaxLevel_ev_uint8 (long pNativeObject, short value);
	public void set_mMaxLevel(short mMaxLevel)
	{
		short mMaxLevelParamValue = mMaxLevel;
		
		set_mMaxLevel_ev_uint8(this.nativeObject.pointer, mMaxLevelParamValue);
	}
	
	native private long get_mRecordList_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.Obqrecordinfolist get_mRecordList()
	{
		long jniValue = get_mRecordList_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.modelmanager.Obqrecordinfolist __returnValue = new com.earthview.world.spatial3d.modelmanager.Obqrecordinfolist(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "OBQRecordInfoList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.Obqrecordinfolist)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "OBQRecordInfoList");
		}
		return __returnValue;
	}
	
	native private void set_mRecordList_OBQRecordInfoList (long pNativeObject, long value);
	public void set_mRecordList(com.earthview.world.spatial3d.modelmanager.Obqrecordinfolist mRecordList)
	{
		long mRecordListParamValue = mRecordList.nativeObject.pointer;
		
		set_mRecordList_OBQRecordInfoList(this.nativeObject.pointer, mRecordListParamValue);
	}
	
	public Obqmetainfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Obqmetainfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Obqmetainfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Obqmetainfo obj = null;
 		if(baseObj instanceof Obqmetainfo)
		{
			obj = (Obqmetainfo)baseObj;
		} else {
			obj = new Obqmetainfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "OBQMetaInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
