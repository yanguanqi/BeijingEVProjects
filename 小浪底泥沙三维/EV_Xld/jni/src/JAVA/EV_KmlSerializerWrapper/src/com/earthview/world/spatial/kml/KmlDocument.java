package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlDocument extends com.earthview.world.spatial.kml.EnvelopListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CKmlDocument", new KmlDocumentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::JCKmlDocumentProxy", new KmlDocumentClassFactory());
	}

	native private long get_WorkQueueState_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlWorkQueueState get_WorkQueueState()
	{
		long jniValue = get_WorkQueueState_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlWorkQueueState __returnValue = new com.earthview.world.spatial.kml.KmlWorkQueueState(CreatedWhenConstruct.CWC_NotToCreate, "CKmlWorkQueueState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlWorkQueueState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlWorkQueueState");
		}
		return __returnValue;
	}
	
	native private void set_WorkQueueState_CKmlWorkQueueState (long pNativeObject, long value);
	public void set_WorkQueueState(com.earthview.world.spatial.kml.KmlWorkQueueState WorkQueueState)
	{
		long WorkQueueStateParamValue = (WorkQueueState == null ? 0L : WorkQueueState.nativeObject.pointer);
		
		set_WorkQueueState_CKmlWorkQueueState(this.nativeObject.pointer, WorkQueueStateParamValue);
	}
	
	native private long get_BatchWorkQueueState_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlWorkQueueState get_BatchWorkQueueState()
	{
		long jniValue = get_BatchWorkQueueState_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.kml.KmlWorkQueueState __returnValue = new com.earthview.world.spatial.kml.KmlWorkQueueState(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CKmlWorkQueueState");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlWorkQueueState)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKmlWorkQueueState");
		}
		return __returnValue;
	}
	
	native private void set_BatchWorkQueueState_CKmlWorkQueueState (long pNativeObject, long value);
	public void set_BatchWorkQueueState(com.earthview.world.spatial.kml.KmlWorkQueueState BatchWorkQueueState)
	{
		long BatchWorkQueueStateParamValue = BatchWorkQueueState.nativeObject.pointer;
		
		set_BatchWorkQueueState_CKmlWorkQueueState(this.nativeObject.pointer, BatchWorkQueueStateParamValue);
	}
	
	native private long get_DynamicBatchWorkQueueState_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlWorkQueueState get_DynamicBatchWorkQueueState()
	{
		long jniValue = get_DynamicBatchWorkQueueState_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.kml.KmlWorkQueueState __returnValue = new com.earthview.world.spatial.kml.KmlWorkQueueState(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CKmlWorkQueueState");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlWorkQueueState)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKmlWorkQueueState");
		}
		return __returnValue;
	}
	
	native private void set_DynamicBatchWorkQueueState_CKmlWorkQueueState (long pNativeObject, long value);
	public void set_DynamicBatchWorkQueueState(com.earthview.world.spatial.kml.KmlWorkQueueState DynamicBatchWorkQueueState)
	{
		long DynamicBatchWorkQueueStateParamValue = DynamicBatchWorkQueueState.nativeObject.pointer;
		
		set_DynamicBatchWorkQueueState_CKmlWorkQueueState(this.nativeObject.pointer, DynamicBatchWorkQueueStateParamValue);
	}
	
	native private String get_mKmlPath_void(long pNativeObject);
	public String get_mKmlPath()
	{
		String jniValue = get_mKmlPath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mKmlPath_EVString (long pNativeObject, String value);
	public void set_mKmlPath(String mKmlPath)
	{
		String mKmlPathParamValue = mKmlPath;
		
		set_mKmlPath_EVString(this.nativeObject.pointer, mKmlPathParamValue);
	}
	
	native private String get_mName_void(long pNativeObject);
	public String get_mName()
	{
		String jniValue = get_mName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mName_EVString (long pNativeObject, String value);
	public void set_mName(String mName)
	{
		String mNameParamValue = mName;
		
		set_mName_EVString(this.nativeObject.pointer, mNameParamValue);
	}
	
	native private String get_mId_void(long pNativeObject);
	public String get_mId()
	{
		String jniValue = get_mId_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mId_EVString (long pNativeObject, String value);
	public void set_mId(String mId)
	{
		String mIdParamValue = mId;
		
		set_mId_EVString(this.nativeObject.pointer, mIdParamValue);
	}
	
	native private String get_mDesiription_void(long pNativeObject);
	public String get_mDesiription()
	{
		String jniValue = get_mDesiription_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mDesiription_EVString (long pNativeObject, String value);
	public void set_mDesiription(String mDesiription)
	{
		String mDesiriptionParamValue = mDesiription;
		
		set_mDesiription_EVString(this.nativeObject.pointer, mDesiriptionParamValue);
	}
	
	native private boolean get_mIsExpand_void(long pNativeObject);
	public boolean get_mIsExpand()
	{
		boolean jniValue = get_mIsExpand_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsExpand_ev_bool (long pNativeObject, boolean value);
	public void set_mIsExpand(boolean mIsExpand)
	{
		boolean mIsExpandParamValue = mIsExpand;
		
		set_mIsExpand_ev_bool(this.nativeObject.pointer, mIsExpandParamValue);
	}
	
	native private boolean get_mIsNetworkLink_void(long pNativeObject);
	public boolean get_mIsNetworkLink()
	{
		boolean jniValue = get_mIsNetworkLink_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsNetworkLink_ev_bool (long pNativeObject, boolean value);
	public void set_mIsNetworkLink(boolean mIsNetworkLink)
	{
		boolean mIsNetworkLinkParamValue = mIsNetworkLink;
		
		set_mIsNetworkLink_ev_bool(this.nativeObject.pointer, mIsNetworkLinkParamValue);
	}
	
	native private boolean get_mIsBelongToNetLink_void(long pNativeObject);
	public boolean get_mIsBelongToNetLink()
	{
		boolean jniValue = get_mIsBelongToNetLink_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsBelongToNetLink_ev_bool (long pNativeObject, boolean value);
	public void set_mIsBelongToNetLink(boolean mIsBelongToNetLink)
	{
		boolean mIsBelongToNetLinkParamValue = mIsBelongToNetLink;
		
		set_mIsBelongToNetLink_ev_bool(this.nativeObject.pointer, mIsBelongToNetLinkParamValue);
	}
	
	native private long get_mpParentNetworkLink_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlNetworkLink get_mpParentNetworkLink()
	{
		long jniValue = get_mpParentNetworkLink_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlNetworkLink __returnValue = new com.earthview.world.spatial.kml.KmlNetworkLink(CreatedWhenConstruct.CWC_NotToCreate, "CKmlNetworkLink");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlNetworkLink)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlNetworkLink");
		}
		return __returnValue;
	}
	
	native private void set_mpParentNetworkLink_CKmlNetworkLink (long pNativeObject, long value);
	public void set_mpParentNetworkLink(com.earthview.world.spatial.kml.KmlNetworkLink mpParentNetworkLink)
	{
		long mpParentNetworkLinkParamValue = (mpParentNetworkLink == null ? 0L : mpParentNetworkLink.nativeObject.pointer);
		
		set_mpParentNetworkLink_CKmlNetworkLink(this.nativeObject.pointer, mpParentNetworkLinkParamValue);
	}
	
	native private long get_mpParent_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlDocument get_mpParent()
	{
		long jniValue = get_mpParent_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlDocument __returnValue = new com.earthview.world.spatial.kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate, "CKmlDocument");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlDocument)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlDocument");
		}
		return __returnValue;
	}
	
	native private void set_mpParent_CKmlDocument (long pNativeObject, long value);
	public void set_mpParent(com.earthview.world.spatial.kml.KmlDocument mpParent)
	{
		long mpParentParamValue = (mpParent == null ? 0L : mpParent.nativeObject.pointer);
		
		set_mpParent_CKmlDocument(this.nativeObject.pointer, mpParentParamValue);
	}
	
	native private boolean get_m_isFolder_void(long pNativeObject);
	public boolean get_m_isFolder()
	{
		boolean jniValue = get_m_isFolder_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_isFolder_ev_bool (long pNativeObject, boolean value);
	public void set_m_isFolder(boolean m_isFolder)
	{
		boolean m_isFolderParamValue = m_isFolder;
		
		set_m_isFolder_ev_bool(this.nativeObject.pointer, m_isFolderParamValue);
	}
	
	native private long get_mRelativeNetworkLink_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlNetworkLink get_mRelativeNetworkLink()
	{
		long jniValue = get_mRelativeNetworkLink_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlNetworkLink __returnValue = new com.earthview.world.spatial.kml.KmlNetworkLink(CreatedWhenConstruct.CWC_NotToCreate, "CKmlNetworkLink");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlNetworkLink)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlNetworkLink");
		}
		return __returnValue;
	}
	
	native private void set_mRelativeNetworkLink_CKmlNetworkLink (long pNativeObject, long value);
	public void set_mRelativeNetworkLink(com.earthview.world.spatial.kml.KmlNetworkLink mRelativeNetworkLink)
	{
		long mRelativeNetworkLinkParamValue = (mRelativeNetworkLink == null ? 0L : mRelativeNetworkLink.nativeObject.pointer);
		
		set_mRelativeNetworkLink_CKmlNetworkLink(this.nativeObject.pointer, mRelativeNetworkLinkParamValue);
	}
	
	native private long get_GeoObjectExtAttr_void(long pNativeObject);
	public com.earthview.world.spatial.kml.GeoObjectExtensionAttribute get_GeoObjectExtAttr()
	{
		long jniValue = get_GeoObjectExtAttr_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.kml.GeoObjectExtensionAttribute __returnValue = new com.earthview.world.spatial.kml.GeoObjectExtensionAttribute(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtensionAttribute");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjectExtensionAttribute)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtensionAttribute");
		}
		return __returnValue;
	}
	
	native private void set_GeoObjectExtAttr_CGeoObjectExtensionAttribute (long pNativeObject, long value);
	public void set_GeoObjectExtAttr(com.earthview.world.spatial.kml.GeoObjectExtensionAttribute GeoObjectExtAttr)
	{
		long GeoObjectExtAttrParamValue = GeoObjectExtAttr.nativeObject.pointer;
		
		set_GeoObjectExtAttr_CGeoObjectExtensionAttribute(this.nativeObject.pointer, GeoObjectExtAttrParamValue);
	}
	
	native private boolean get_mIsVisible_void(long pNativeObject);
	public boolean get_mIsVisible()
	{
		boolean jniValue = get_mIsVisible_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsVisible_ev_bool (long pNativeObject, boolean value);
	public void set_mIsVisible(boolean mIsVisible)
	{
		boolean mIsVisibleParamValue = mIsVisible;
		
		set_mIsVisible_ev_bool(this.nativeObject.pointer, mIsVisibleParamValue);
	}
	
	native private boolean get_mIsLodPassed_void(long pNativeObject);
	public boolean get_mIsLodPassed()
	{
		boolean jniValue = get_mIsLodPassed_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsLodPassed_ev_bool (long pNativeObject, boolean value);
	public void set_mIsLodPassed(boolean mIsLodPassed)
	{
		boolean mIsLodPassedParamValue = mIsLodPassed;
		
		set_mIsLodPassed_ev_bool(this.nativeObject.pointer, mIsLodPassedParamValue);
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
	
	native private double get_mHeading_void(long pNativeObject);
	public double get_mHeading()
	{
		double jniValue = get_mHeading_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mHeading_ev_real64 (long pNativeObject, double value);
	public void set_mHeading(double mHeading)
	{
		double mHeadingParamValue = mHeading;
		
		set_mHeading_ev_real64(this.nativeObject.pointer, mHeadingParamValue);
	}
	
	native private double get_mTilt_void(long pNativeObject);
	public double get_mTilt()
	{
		double jniValue = get_mTilt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTilt_ev_real64 (long pNativeObject, double value);
	public void set_mTilt(double mTilt)
	{
		double mTiltParamValue = mTilt;
		
		set_mTilt_ev_real64(this.nativeObject.pointer, mTiltParamValue);
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
	
	native private double get_mOriAltitude_void(long pNativeObject);
	public double get_mOriAltitude()
	{
		double jniValue = get_mOriAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mOriAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mOriAltitude(double mOriAltitude)
	{
		double mOriAltitudeParamValue = mOriAltitude;
		
		set_mOriAltitude_ev_real64(this.nativeObject.pointer, mOriAltitudeParamValue);
	}
	
	native private boolean get_mIsDirty_void(long pNativeObject);
	public boolean get_mIsDirty()
	{
		boolean jniValue = get_mIsDirty_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsDirty_ev_bool (long pNativeObject, boolean value);
	public void set_mIsDirty(boolean mIsDirty)
	{
		boolean mIsDirtyParamValue = mIsDirty;
		
		set_mIsDirty_ev_bool(this.nativeObject.pointer, mIsDirtyParamValue);
	}
	
	native private double get_mRange_void(long pNativeObject);
	public double get_mRange()
	{
		double jniValue = get_mRange_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRange_ev_real64 (long pNativeObject, double value);
	public void set_mRange(double mRange)
	{
		double mRangeParamValue = mRange;
		
		set_mRange_ev_real64(this.nativeObject.pointer, mRangeParamValue);
	}
	
	native private boolean get_mIsCameraAltComputed_void(long pNativeObject);
	public boolean get_mIsCameraAltComputed()
	{
		boolean jniValue = get_mIsCameraAltComputed_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsCameraAltComputed_ev_bool (long pNativeObject, boolean value);
	public void set_mIsCameraAltComputed(boolean mIsCameraAltComputed)
	{
		boolean mIsCameraAltComputedParamValue = mIsCameraAltComputed;
		
		set_mIsCameraAltComputed_ev_bool(this.nativeObject.pointer, mIsCameraAltComputedParamValue);
	}
	
	native private long get_BatchObjects_void(long pNativeObject);
	public com.earthview.world.core.BaseObject get_BatchObjects()
	{
		long jniValue = get_BatchObjects_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.core.BaseObject __returnValue = new com.earthview.world.core.BaseObject(CreatedWhenConstruct.CWC_NotToCreate, "CBaseObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.BaseObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBaseObject");
		}
		return __returnValue;
	}
	
	native private void set_BatchObjects_CBaseObject (long pNativeObject, long value);
	public void set_BatchObjects(com.earthview.world.core.BaseObject BatchObjects)
	{
		long BatchObjectsParamValue = (BatchObjects == null ? 0L : BatchObjects.nativeObject.pointer);
		
		set_BatchObjects_CBaseObject(this.nativeObject.pointer, BatchObjectsParamValue);
	}
	
	native private long get_NewBatchObjects_void(long pNativeObject);
	public com.earthview.world.core.BaseObject get_NewBatchObjects()
	{
		long jniValue = get_NewBatchObjects_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.core.BaseObject __returnValue = new com.earthview.world.core.BaseObject(CreatedWhenConstruct.CWC_NotToCreate, "CBaseObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.BaseObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBaseObject");
		}
		return __returnValue;
	}
	
	native private void set_NewBatchObjects_CBaseObject (long pNativeObject, long value);
	public void set_NewBatchObjects(com.earthview.world.core.BaseObject NewBatchObjects)
	{
		long NewBatchObjectsParamValue = (NewBatchObjects == null ? 0L : NewBatchObjects.nativeObject.pointer);
		
		set_NewBatchObjects_CBaseObject(this.nativeObject.pointer, NewBatchObjectsParamValue);
	}
	
	native private long get_RegionBatchObjects_void(long pNativeObject);
	public com.earthview.world.core.BaseObject get_RegionBatchObjects()
	{
		long jniValue = get_RegionBatchObjects_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.core.BaseObject __returnValue = new com.earthview.world.core.BaseObject(CreatedWhenConstruct.CWC_NotToCreate, "CBaseObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.BaseObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBaseObject");
		}
		return __returnValue;
	}
	
	native private void set_RegionBatchObjects_CBaseObject (long pNativeObject, long value);
	public void set_RegionBatchObjects(com.earthview.world.core.BaseObject RegionBatchObjects)
	{
		long RegionBatchObjectsParamValue = (RegionBatchObjects == null ? 0L : RegionBatchObjects.nativeObject.pointer);
		
		set_RegionBatchObjects_CBaseObject(this.nativeObject.pointer, RegionBatchObjectsParamValue);
	}
	
	public KmlDocument() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCKmlDocumentProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.kml.KmlDocument".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean loadDocument_EVString(long pNativeObject, String kml_uri);
	/**
	 * 加载kml文档,将其解析为kml对象
	 * @param kml_uri kml文档所在的路径
	 * @return ev_bool是否成功加载kml文档
	 */
	public boolean loadDocument(String kml_uri)
	{
		String kml_uriParamValue = kml_uri;
		boolean returnValue = loadDocument_EVString(this.nativeObject.pointer, kml_uriParamValue);
		return returnValue;
	}
	native private boolean newDocument_void(long pNativeObject);
	/**
	 * 创建新的kml文档
	 * @return ev_bool
	 */
	public boolean newDocument()
	{
		boolean returnValue = newDocument_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean save_EVString(long pNativeObject, String kmlPath);
	/**
	 * 保存kml文档
	 * @param kmlPath kml文件的保存路径
	 * @return 是否成功保存
	 */
	public boolean save(String kmlPath)
	{
		String kmlPathParamValue = kmlPath;
		boolean returnValue = save_EVString(this.nativeObject.pointer, kmlPathParamValue);
		return returnValue;
	}
	native private boolean addSubDocument_CKmlDocument(long pNativeObject, long ref_doc);
	/**
	 * 在文档内部添加子文档
	 * @param doc 
	 * @return 是否添加子文档
	 */
	public boolean addSubDocument(com.earthview.world.spatial.kml.KmlDocument ref_doc)
	{
		long ref_docParamValue = (ref_doc == null ? 0L : ref_doc.nativeObject.pointer);
		boolean returnValue = addSubDocument_CKmlDocument(this.nativeObject.pointer, ref_docParamValue);
		return returnValue;
	}
	native private long getSubDocumentCount_void(long pNativeObject);
	/**
	 * 获得子文档的数量
	 * @return 获得子文档个数
	 */
	public long getSubDocumentCount()
	{
		long returnValue = getSubDocumentCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSubDocument_ev_uint32(long pNativeObject, long index);
	/**
	 * 获得第index个子文档
	 * @param index 第index个子文档
	 * @return Kml文档
	 */
	public com.earthview.world.spatial.kml.KmlDocument getSubDocument(long index)
	{
		long indexParamValue = index;
		long returnValue = getSubDocument_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlDocument __returnValue = new com.earthview.world.spatial.kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate, "CKmlDocument");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlDocument)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlDocument");
		}
		return __returnValue;
	}
	native private boolean removeSubDocument_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除子文档
	 * @param index 第index个子文档
	 * @return 是否删除该子文档
	 */
	public boolean removeSubDocument(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeSubDocument_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean addNetworkLink_CKmlNetworkLink(long pNativeObject, long ref_doc);
	/**
	 * 在文档内部添加网络链接
	 * @param doc kml文档
	 * @return 是否添加成功
	 */
	public boolean addNetworkLink(com.earthview.world.spatial.kml.KmlNetworkLink ref_doc)
	{
		long ref_docParamValue = (ref_doc == null ? 0L : ref_doc.nativeObject.pointer);
		boolean returnValue = addNetworkLink_CKmlNetworkLink(this.nativeObject.pointer, ref_docParamValue);
		return returnValue;
	}
	native private long getNetworkLinkCount_void(long pNativeObject);
	/**
	 * 获得网络链接的数量
	 * @return 网络链接的个数
	 */
	public long getNetworkLinkCount()
	{
		long returnValue = getNetworkLinkCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNetworkLink_ev_uint32(long pNativeObject, long index);
	/**
	 * 获得网络链接
	 * @param index 获得第index个网络链接
	 * @return 返回获得的网络链接
	 */
	public com.earthview.world.spatial.kml.KmlNetworkLink getNetworkLink(long index)
	{
		long indexParamValue = index;
		long returnValue = getNetworkLink_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlNetworkLink __returnValue = new com.earthview.world.spatial.kml.KmlNetworkLink(CreatedWhenConstruct.CWC_NotToCreate, "CKmlNetworkLink");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlNetworkLink)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlNetworkLink");
		}
		return __returnValue;
	}
	native private void netLinkStateUpdate_void(long pNativeObject);
	/**
	 * 更新网络链接
	 */
	public void netLinkStateUpdate()
	{
		netLinkStateUpdate_void(this.nativeObject.pointer);
	}
	native private boolean removeNetworkLink_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除网络链接
	 * @param index 删除第index个网络链接
	 * @return 是否成功删除该网络链接
	 */
	public boolean removeNetworkLink(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeNetworkLink_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean addGeoObject_CGeoObjectExtension(long pNativeObject, long obj);
	/**
	 * 往kml文档中添加GeoObject对象
	 * @param obj 添加的地理对象
	 * @return 是否添加
	 */
	public boolean addGeoObject(com.earthview.world.spatial.kml.GeoObjectExtension obj)
	{
		long objParamValue = obj.nativeObject.pointer;
		boolean returnValue = addGeoObject_CGeoObjectExtension(this.nativeObject.pointer, objParamValue);
		return returnValue;
	}
	native private boolean removeGeoObject_CGeoObjectExtension(long pNativeObject, long geoObject);
	/**
	 * 删除GeoObject对象
	 * @param obj 添加的地理对象
	 */
	public boolean removeGeoObject(com.earthview.world.spatial.kml.GeoObjectExtension geoObject)
	{
		long geoObjectParamValue = (geoObject == null ? 0L : geoObject.nativeObject.pointer);
		boolean returnValue = removeGeoObject_CGeoObjectExtension(this.nativeObject.pointer, geoObjectParamValue);
		return returnValue;
	}
	native private long getGeoObjects_void(long pNativeObject);
	/**
	 * 获取GeoObject对象集合
	 * @return 返回地理对象集合
	 */
	public com.earthview.world.spatial.kml.GeoObjects getGeoObjects()
	{
		long returnValue = getGeoObjects_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.GeoObjects __returnValue = new com.earthview.world.spatial.kml.GeoObjects(CreatedWhenConstruct.CWC_NotToCreate, "GeoObjects");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjects)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GeoObjects");
		}
		return __returnValue;
	}
	native private long getTours_void(long pNativeObject);
	/**
	 * /获取游览对象集合/
	 * @return 返回游览对象集合
	 */
	public com.earthview.world.spatial.kml.Tours getTours()
	{
		long returnValue = getTours_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.Tours __returnValue = new com.earthview.world.spatial.kml.Tours(CreatedWhenConstruct.CWC_NotToCreate, "CTours");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.Tours)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTours");
		}
		return __returnValue;
	}
	native private int getmode_void(long pNativeObject);
	/**
	 * 获取高度模式
	 * @return 返回高度模式
	 */
	public int getmode()
	{
		int returnValue = getmode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void envelopChangedUpdate_void(long pNativeObject);
	/**
	 * 更新包围盒
	 */
	public void envelopChangedUpdate()
	{
		envelopChangedUpdate_void(this.nativeObject.pointer);
	}
	native private void envelopChangedUpdate_void_NoVirtual(long pNativeObject);
	protected void envelopChangedUpdate_NoVirtual()
	{
		envelopChangedUpdate_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getEnvelopRef_ev_bool(long pNativeObject, long hasData);
	/**
	 * 获取包围盒
	 * @return 对象的包围盒
	 */
	public com.earthview.world.spatial.geometry.Envelope getEnvelopRef(BooleanPointer hasData)
	{
		long hasDataParamValue = hasData.nativeObject.pointer;
		long returnValue = getEnvelopRef_ev_bool(this.nativeObject.pointer, hasDataParamValue);
		com.earthview.world.spatial.geometry.Envelope __returnValue = new com.earthview.world.spatial.geometry.Envelope(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Envelope)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		}
		return __returnValue;
	}
	native private void setKmlDocumentRefCount_ev_uint32(long pNativeObject, long count);
	///zf add 2014/6/5 kmlDocument引用计数
	public void setKmlDocumentRefCount(long count)
	{
		long countParamValue = count;
		setKmlDocumentRefCount_ev_uint32(this.nativeObject.pointer, countParamValue);
	}
	native private long getKmlDocumentRefCount_void(long pNativeObject);
	public long getKmlDocumentRefCount()
	{
		long returnValue = getKmlDocumentRefCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void parseKmzStringToFile_EVString_EVString(long pNativeObject, String kmzPath, String kml_uri);
	/**
	 * 解析kmz文件到目标路径下
	 * @param kmzPath kmz路径
	 * @param kml_uri 目标路径
	 * @return 无
	 */
	public void parseKmzStringToFile(String kmzPath, String kml_uri)
	{
		String kmzPathParamValue = kmzPath;
		String kml_uriParamValue = kml_uri;
		parseKmzStringToFile_EVString_EVString(this.nativeObject.pointer, kmzPathParamValue, kml_uriParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	/**
	 * kmlDocument是否可见
	 * @return true为可见
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void modifyed_ev_bool(long pNativeObject, boolean val);
	/**
	 * kmlDocument是否可见
	 * @param val 修改状态
	 * @return 无
	 */
	public void modifyed(boolean val)
	{
		boolean valParamValue = val;
		modifyed_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private boolean isModifyed_void(long pNativeObject);
	/**
	 * kmlDocument是否为修改状态
	 * @return true为kmlDocument处于修改状态
	 */
	public boolean isModifyed()
	{
		boolean returnValue = isModifyed_void(this.nativeObject.pointer);
		return returnValue;
	}
	public KmlDocument(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlDocument(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_envelopChangedUpdate_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_envelopChangedUpdate_void(this.nativeObject.pointer, "envelopChangedUpdate_void_callback");
		}
	}
	
	public static KmlDocument fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlDocument obj = null;
 		if(baseObj instanceof KmlDocument)
		{
			obj = (KmlDocument)baseObj;
		} else {
			obj = new KmlDocument(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlDocument");
			obj.increaseCast();
		}

		return obj;
	}
}
