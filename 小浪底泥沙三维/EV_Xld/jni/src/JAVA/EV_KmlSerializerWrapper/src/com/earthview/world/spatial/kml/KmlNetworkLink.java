package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///kml网络链接对象
public class KmlNetworkLink extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CKmlNetworkLink", new KmlNetworkLinkClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlNetworkLink() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlNetworkLink", null);
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
	
	native private long get_WorkState_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlWorkQueueState get_WorkState()
	{
		long jniValue = get_WorkState_void(this.nativeObject.pointer);
		
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
	
	native private void set_WorkState_CKmlWorkQueueState (long pNativeObject, long value);
	public void set_WorkState(com.earthview.world.spatial.kml.KmlWorkQueueState WorkState)
	{
		long WorkStateParamValue = (WorkState == null ? 0L : WorkState.nativeObject.pointer);
		
		set_WorkState_CKmlWorkQueueState(this.nativeObject.pointer, WorkStateParamValue);
	}
	
	native private long get_mpDoc_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlDocument get_mpDoc()
	{
		long jniValue = get_mpDoc_void(this.nativeObject.pointer);
		
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
	
	native private void set_mpDoc_CKmlDocument (long pNativeObject, long value);
	public void set_mpDoc(com.earthview.world.spatial.kml.KmlDocument mpDoc)
	{
		long mpDocParamValue = (mpDoc == null ? 0L : mpDoc.nativeObject.pointer);
		
		set_mpDoc_CKmlDocument(this.nativeObject.pointer, mpDocParamValue);
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
	
	native private void setLoadedState_ev_bool(long pNativeObject, boolean isLoaded);
	public void setLoadedState(boolean isLoaded)
	{
		boolean isLoadedParamValue = isLoaded;
		setLoadedState_ev_bool(this.nativeObject.pointer, isLoadedParamValue);
	}
	native private boolean getLoadedState_void(long pNativeObject);
	public boolean getLoadedState()
	{
		boolean returnValue = getLoadedState_void(this.nativeObject.pointer);
		return returnValue;
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
	
	native private String get_mLocalPath_void(long pNativeObject);
	public String get_mLocalPath()
	{
		String jniValue = get_mLocalPath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mLocalPath_EVString (long pNativeObject, String value);
	public void set_mLocalPath(String mLocalPath)
	{
		String mLocalPathParamValue = mLocalPath;
		
		set_mLocalPath_EVString(this.nativeObject.pointer, mLocalPathParamValue);
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
	
	native private void setEnvelopRef_CEnvelope(long pNativeObject, long envelop);
	/**
	 * 设置包围盒信息
	 * @param envelop 包围盒对象
	 */
	public void setEnvelopRef(com.earthview.world.spatial.geometry.Envelope envelop)
	{
		long envelopParamValue = envelop.nativeObject.pointer;
		setEnvelopRef_CEnvelope(this.nativeObject.pointer, envelopParamValue);
	}
	native private long getEnvelopRef_void(long pNativeObject);
	/**
	 * 获取包围盒信息
	 * @return 返回包围盒对象
	 */
	public com.earthview.world.spatial.geometry.Envelope getEnvelopRef()
	{
		long returnValue = getEnvelopRef_void(this.nativeObject.pointer);
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
	
	native private long ev_clone_void(long pNativeObject);
	/**
	 * /克隆一个kml网络连接对象/
	 * @return 返回kml网络连接对象
	 */
	public com.earthview.world.spatial.kml.KmlNetworkLink ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
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
	native private void relpace_CKmlNetworkLink(long pNativeObject, long destLink);
	/**
	 * 替换一个kml网络连接对象
	 */
	public void relpace(com.earthview.world.spatial.kml.KmlNetworkLink destLink)
	{
		long destLinkParamValue = (destLink == null ? 0L : destLink.nativeObject.pointer);
		relpace_CKmlNetworkLink(this.nativeObject.pointer, destLinkParamValue);
	}
	native private long getLink_void(long pNativeObject);
	/**
	 * 获得链接地址
	 * @return 获取链接地址的字符串
	 */
	public StringPointer getLink()
	{
		long returnValue = getLink_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setLink_EVString(long pNativeObject, String link);
	/**
	 * 设置连接地址
	 */
	public void setLink(String link)
	{
		String linkParamValue = link;
		setLink_EVString(this.nativeObject.pointer, linkParamValue);
	}
	native private boolean isVisiable_void(long pNativeObject);
	/**
	 * 判断是否可见
	 * @return 是否可见
	 */
	public boolean isVisiable()
	{
		boolean returnValue = isVisiable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visiable);
	/**
	 * 设置是否可见
	 */
	public void setVisible(boolean visiable)
	{
		boolean visiableParamValue = visiable;
		setVisible_ev_bool(this.nativeObject.pointer, visiableParamValue);
	}
	native private boolean isOpen_void(long pNativeObject);
	/**
	 * 左侧树节点是否打开
	 * @return bool
	 */
	public boolean isOpen()
	{
		boolean returnValue = isOpen_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOpened_ev_bool(long pNativeObject, boolean opened);
	/**
	 * 设置左侧树节点是否打开
	 */
	public void setOpened(boolean opened)
	{
		boolean openedParamValue = opened;
		setOpened_ev_bool(this.nativeObject.pointer, openedParamValue);
	}
	native private long getAddress_void(long pNativeObject);
	/**
	 * 获得位置
	 * @return 所处的位置
	 */
	public StringPointer getAddress()
	{
		long returnValue = getAddress_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setAddress_EVString(long pNativeObject, String addr);
	/**
	 * 设置位置
	 */
	public void setAddress(String addr)
	{
		String addrParamValue = addr;
		setAddress_EVString(this.nativeObject.pointer, addrParamValue);
	}
	native private long getPhoneNumber_void(long pNativeObject);
	/**
	 * 获得电话号码					
	 * @return 电话号码
	 */
	public StringPointer getPhoneNumber()
	{
		long returnValue = getPhoneNumber_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setPhoneNumber_EVString(long pNativeObject, String phoneNum);
	/**
	 * 设置电话号码
	 */
	public void setPhoneNumber(String phoneNum)
	{
		String phoneNumParamValue = phoneNum;
		setPhoneNumber_EVString(this.nativeObject.pointer, phoneNumParamValue);
	}
	native private long getDescription_void(long pNativeObject);
	/**
	 * 获得描述
	 * @return 返回描述
	 */
	public StringPointer getDescription()
	{
		long returnValue = getDescription_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setDescription_EVString(long pNativeObject, String descripton);
	/**
	 * 设置描述
	 */
	public void setDescription(String descripton)
	{
		String descriptonParamValue = descripton;
		setDescription_EVString(this.nativeObject.pointer, descriptonParamValue);
	}
	native private long getStyleUrl_void(long pNativeObject);
	/**
	 * 获得样式
	 * @return 样式
	 */
	public StringPointer getStyleUrl()
	{
		long returnValue = getStyleUrl_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setStyleUrl_EVString(long pNativeObject, String url);
	/**
	 * 设置样式
	 */
	public void setStyleUrl(String url)
	{
		String urlParamValue = url;
		setStyleUrl_EVString(this.nativeObject.pointer, urlParamValue);
	}
	native private boolean isRefreshVisibility_void(long pNativeObject);
	/**
	 * 0值可让Google地球用户控制地图项的可见性。将该值设置为1，会在每次刷新NetworkLink时重置地图项的可见性。
	 * @return bool
	 */
	public boolean isRefreshVisibility()
	{
		boolean returnValue = isRefreshVisibility_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRefreshVisibility_ev_bool(long pNativeObject, boolean refreshVisibility);
	/**
	 * 0值可让Google地球用户控制地图项的可见性。将该值设置为1，会在每次刷新NetworkLink时重置地图项的可见性。
	 */
	public void setRefreshVisibility(boolean refreshVisibility)
	{
		boolean refreshVisibilityParamValue = refreshVisibility;
		setRefreshVisibility_ev_bool(this.nativeObject.pointer, refreshVisibilityParamValue);
	}
	native private boolean isFlyToView_void(long pNativeObject);
	/**
	 * Google地球是否会飞到NetworkLinkControl中的LookAt或Camera的视图
	 * @return bool
	 */
	public boolean isFlyToView()
	{
		boolean returnValue = isFlyToView_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFlyToView_ev_bool(long pNativeObject, boolean flyToView);
	/**
	 * Google地球是否会飞到NetworkLinkControl中的LookAt或Camera的视图
	 */
	public void setFlyToView(boolean flyToView)
	{
		boolean flyToViewParamValue = flyToView;
		setFlyToView_ev_bool(this.nativeObject.pointer, flyToViewParamValue);
	}
	native private boolean downloadKmlFile_void(long pNativeObject);
	/**
	 * 下载kml资源到本地
	 */
	public boolean downloadKmlFile()
	{
		boolean returnValue = downloadKmlFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	public KmlNetworkLink(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlNetworkLink(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlNetworkLink fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlNetworkLink obj = null;
 		if(baseObj instanceof KmlNetworkLink)
		{
			obj = (KmlNetworkLink)baseObj;
		} else {
			obj = new KmlNetworkLink(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlNetworkLink");
			obj.increaseCast();
		}

		return obj;
	}
}
