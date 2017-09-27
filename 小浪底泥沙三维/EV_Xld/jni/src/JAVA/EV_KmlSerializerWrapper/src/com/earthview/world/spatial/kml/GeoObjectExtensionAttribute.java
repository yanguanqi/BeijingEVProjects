package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoObjectExtensionAttribute extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute", new GeoObjectExtensionAttributeClassFactory());
	}

	public GeoObjectExtensionAttribute() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGeoObjectExtensionAttribute", null);
	}

	public GeoObjectExtensionAttribute(com.earthview.world.spatial.kml.GeoObjectExtensionAttribute geoAttr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer geoAttrPtr = new BasePointer(geoAttr);
		list.add("geoAttr", geoAttrPtr.get());
		Create("CGeoObjectExtensionAttribute", list);
	}

	native private long OperatorAssign_CGeoObjectExtensionAttribute(long pNativeObject, long geoAttr);
	public com.earthview.world.spatial.kml.GeoObjectExtensionAttribute OperatorAssign(com.earthview.world.spatial.kml.GeoObjectExtensionAttribute geoAttr)
	{
		long geoAttrParamValue = geoAttr.nativeObject.pointer;
		long returnValue = OperatorAssign_CGeoObjectExtensionAttribute(this.nativeObject.pointer, geoAttrParamValue);
		com.earthview.world.spatial.kml.GeoObjectExtensionAttribute __returnValue = new com.earthview.world.spatial.kml.GeoObjectExtensionAttribute(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObjectExtensionAttribute");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjectExtensionAttribute)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtensionAttribute");
		}
		return __returnValue;
	}
	native private void update_void(long pNativeObject);
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	native private long get_mpOldAttr_void(long pNativeObject);
	public com.earthview.world.spatial.kml.GeoObjectExtensionAttribute get_mpOldAttr()
	{
		long jniValue = get_mpOldAttr_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.GeoObjectExtensionAttribute __returnValue = new com.earthview.world.spatial.kml.GeoObjectExtensionAttribute(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObjectExtensionAttribute");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjectExtensionAttribute)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtensionAttribute");
		}
		return __returnValue;
	}
	
	native private void set_mpOldAttr_CGeoObjectExtensionAttribute (long pNativeObject, long value);
	public void set_mpOldAttr(com.earthview.world.spatial.kml.GeoObjectExtensionAttribute mpOldAttr)
	{
		long mpOldAttrParamValue = (mpOldAttr == null ? 0L : mpOldAttr.nativeObject.pointer);
		
		set_mpOldAttr_CGeoObjectExtensionAttribute(this.nativeObject.pointer, mpOldAttrParamValue);
	}
	
	native private void setParentKmldocument_CKmlDocument(long pNativeObject, long parentDoc);
	public void setParentKmldocument(com.earthview.world.spatial.kml.KmlDocument parentDoc)
	{
		long parentDocParamValue = (parentDoc == null ? 0L : parentDoc.nativeObject.pointer);
		setParentKmldocument_CKmlDocument(this.nativeObject.pointer, parentDocParamValue);
	}
	native private long getParentKmlDocument_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlDocument getParentKmlDocument()
	{
		long returnValue = getParentKmlDocument_void(this.nativeObject.pointer);
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
	native private void setRegionWest_ev_real64(long pNativeObject, double RegionWest);
	public void setRegionWest(double RegionWest)
	{
		double RegionWestParamValue = RegionWest;
		setRegionWest_ev_real64(this.nativeObject.pointer, RegionWestParamValue);
	}
	native private double getRegionWest_void(long pNativeObject);
	public double getRegionWest()
	{
		double returnValue = getRegionWest_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldRegionWest_void(long pNativeObject);
	public double getOldRegionWest()
	{
		double returnValue = getOldRegionWest_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRegionEast_ev_real64(long pNativeObject, double RegionEast);
	public void setRegionEast(double RegionEast)
	{
		double RegionEastParamValue = RegionEast;
		setRegionEast_ev_real64(this.nativeObject.pointer, RegionEastParamValue);
	}
	native private double getRegionEast_void(long pNativeObject);
	public double getRegionEast()
	{
		double returnValue = getRegionEast_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldRegionEast_void(long pNativeObject);
	public double getOldRegionEast()
	{
		double returnValue = getOldRegionEast_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRegionNorth_ev_real64(long pNativeObject, double RegionNorth);
	public void setRegionNorth(double RegionNorth)
	{
		double RegionNorthParamValue = RegionNorth;
		setRegionNorth_ev_real64(this.nativeObject.pointer, RegionNorthParamValue);
	}
	native private double getRegionNorth_void(long pNativeObject);
	public double getRegionNorth()
	{
		double returnValue = getRegionNorth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldRegionNorth_void(long pNativeObject);
	public double getOldRegionNorth()
	{
		double returnValue = getOldRegionNorth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRegionSouth_ev_real64(long pNativeObject, double RegionSouth);
	public void setRegionSouth(double RegionSouth)
	{
		double RegionSouthParamValue = RegionSouth;
		setRegionSouth_ev_real64(this.nativeObject.pointer, RegionSouthParamValue);
	}
	native private double getRegionSouth_void(long pNativeObject);
	public double getRegionSouth()
	{
		double returnValue = getRegionSouth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldRegionSouth_void(long pNativeObject);
	public double getOldRegionSouth()
	{
		double returnValue = getOldRegionSouth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRegionMaxAltitude_ev_real64(long pNativeObject, double maxAltitude);
	public void setRegionMaxAltitude(double maxAltitude)
	{
		double maxAltitudeParamValue = maxAltitude;
		setRegionMaxAltitude_ev_real64(this.nativeObject.pointer, maxAltitudeParamValue);
	}
	native private double getRegionMaxAltitude_void(long pNativeObject);
	public double getRegionMaxAltitude()
	{
		double returnValue = getRegionMaxAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldRegionMaxAltitude_void(long pNativeObject);
	public double getOldRegionMaxAltitude()
	{
		double returnValue = getOldRegionMaxAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRegionMinAltitude_ev_real64(long pNativeObject, double minAltitude);
	public void setRegionMinAltitude(double minAltitude)
	{
		double minAltitudeParamValue = minAltitude;
		setRegionMinAltitude_ev_real64(this.nativeObject.pointer, minAltitudeParamValue);
	}
	native private double getRegionMinAltitude_void(long pNativeObject);
	public double getRegionMinAltitude()
	{
		double returnValue = getRegionMinAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldRegionMinAltitude_void(long pNativeObject);
	public double getOldRegionMinAltitude()
	{
		double returnValue = getOldRegionMinAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxLodPixels_ev_real64(long pNativeObject, double maxLodPixels);
	public void setMaxLodPixels(double maxLodPixels)
	{
		double maxLodPixelsParamValue = maxLodPixels;
		setMaxLodPixels_ev_real64(this.nativeObject.pointer, maxLodPixelsParamValue);
	}
	native private double getMaxLodPixels_void(long pNativeObject);
	public double getMaxLodPixels()
	{
		double returnValue = getMaxLodPixels_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldMaxLodPixels_void(long pNativeObject);
	public double getOldMaxLodPixels()
	{
		double returnValue = getOldMaxLodPixels_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMinLodPixels_ev_real64(long pNativeObject, double minLodPixels);
	public void setMinLodPixels(double minLodPixels)
	{
		double minLodPixelsParamValue = minLodPixels;
		setMinLodPixels_ev_real64(this.nativeObject.pointer, minLodPixelsParamValue);
	}
	native private double getMinLodPixels_void(long pNativeObject);
	public double getMinLodPixels()
	{
		double returnValue = getMinLodPixels_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldMinLodPixels_void(long pNativeObject);
	public double getOldMinLodPixels()
	{
		double returnValue = getOldMinLodPixels_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxFadeExtent_ev_real64(long pNativeObject, double maxFadeExtent);
	public void setMaxFadeExtent(double maxFadeExtent)
	{
		double maxFadeExtentParamValue = maxFadeExtent;
		setMaxFadeExtent_ev_real64(this.nativeObject.pointer, maxFadeExtentParamValue);
	}
	native private double getMaxFadeExtent_void(long pNativeObject);
	public double getMaxFadeExtent()
	{
		double returnValue = getMaxFadeExtent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldMaxFadeExtent_void(long pNativeObject);
	public double getOldMaxFadeExtent()
	{
		double returnValue = getOldMaxFadeExtent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMinFadeExtent_ev_real64(long pNativeObject, double minFadeExtent);
	public void setMinFadeExtent(double minFadeExtent)
	{
		double minFadeExtentParamValue = minFadeExtent;
		setMinFadeExtent_ev_real64(this.nativeObject.pointer, minFadeExtentParamValue);
	}
	native private double getMinFadeExtent_void(long pNativeObject);
	public double getMinFadeExtent()
	{
		double returnValue = getMinFadeExtent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldMinFadeExtent_void(long pNativeObject);
	public double getOldMinFadeExtent()
	{
		double returnValue = getOldMinFadeExtent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getNetLinkPath_void(long pNativeObject);
	public String getNetLinkPath()
	{
		String returnValue = getNetLinkPath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldNetLinkPath_void(long pNativeObject);
	public String getOldNetLinkPath()
	{
		String returnValue = getOldNetLinkPath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setNetLinkPath_EVString(long pNativeObject, String netLinkPath);
	public void setNetLinkPath(String netLinkPath)
	{
		String netLinkPathParamValue = netLinkPath;
		setNetLinkPath_EVString(this.nativeObject.pointer, netLinkPathParamValue);
	}
	native private String getPicPath360_void(long pNativeObject);
	///---360----
	public String getPicPath360()
	{
		String returnValue = getPicPath360_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldPicPath360_void(long pNativeObject);
	public String getOldPicPath360()
	{
		String returnValue = getOldPicPath360_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPicPath360_EVString(long pNativeObject, String path);
	public void setPicPath360(String path)
	{
		String pathParamValue = path;
		setPicPath360_EVString(this.nativeObject.pointer, pathParamValue);
	}
	native private float getRadius360_void(long pNativeObject);
	public float getRadius360()
	{
		float returnValue = getRadius360_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldRadius360_void(long pNativeObject);
	public float getOldRadius360()
	{
		float returnValue = getOldRadius360_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRadius360_ev_real32(long pNativeObject, float r);
	public void setRadius360(float r)
	{
		float rParamValue = r;
		setRadius360_ev_real32(this.nativeObject.pointer, rParamValue);
	}
	native private boolean equal_CGeoObjectExtensionAttribute(long pNativeObject, long geoAttr);
	public boolean equal(com.earthview.world.spatial.kml.GeoObjectExtensionAttribute geoAttr)
	{
		long geoAttrParamValue = geoAttr.nativeObject.pointer;
		boolean returnValue = equal_CGeoObjectExtensionAttribute(this.nativeObject.pointer, geoAttrParamValue);
		return returnValue;
	}
	native private int get_mLodStatus_void(long pNativeObject);
	public com.earthview.world.spatial.kml.LodStatus get_mLodStatus()
	{
		int jniValue = get_mLodStatus_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.kml.LodStatus.toEnum(jniValue);
	}
	
	native private void set_mLodStatus_LodStatus (long pNativeObject, int value);
	public void set_mLodStatus(com.earthview.world.spatial.kml.LodStatus mLodStatus)
	{
		int mLodStatusParamValue = mLodStatus.getValue();
		
		set_mLodStatus_LodStatus(this.nativeObject.pointer, mLodStatusParamValue);
	}
	
	native private boolean get_mIsEditting_void(long pNativeObject);
	public boolean get_mIsEditting()
	{
		boolean jniValue = get_mIsEditting_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsEditting_ev_bool (long pNativeObject, boolean value);
	public void set_mIsEditting(boolean mIsEditting)
	{
		boolean mIsEdittingParamValue = mIsEditting;
		
		set_mIsEditting_ev_bool(this.nativeObject.pointer, mIsEdittingParamValue);
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
	
	native private boolean get_ParamChanged_void(long pNativeObject);
	public boolean get_ParamChanged()
	{
		boolean jniValue = get_ParamChanged_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_ParamChanged_ev_bool (long pNativeObject, boolean value);
	public void set_ParamChanged(boolean ParamChanged)
	{
		boolean ParamChangedParamValue = ParamChanged;
		
		set_ParamChanged_ev_bool(this.nativeObject.pointer, ParamChangedParamValue);
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
	
	native private void setName_EVString(long pNativeObject, String name);
	///plackmark
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getName_void(long pNativeObject);
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldName_void(long pNativeObject);
	public String getOldName()
	{
		String returnValue = getOldName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDesc_EVString(long pNativeObject, String desc);
	public void setDesc(String desc)
	{
		String descParamValue = desc;
		setDesc_EVString(this.nativeObject.pointer, descParamValue);
	}
	native private String getDesc_void(long pNativeObject);
	public String getDesc()
	{
		String returnValue = getDesc_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldDesc_void(long pNativeObject);
	public String getOldDesc()
	{
		String returnValue = getOldDesc_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setID_EVString(long pNativeObject, String id);
	public void setID(String id)
	{
		String idParamValue = id;
		setID_EVString(this.nativeObject.pointer, idParamValue);
	}
	native private String getID_void(long pNativeObject);
	public String getID()
	{
		String returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldID_void(long pNativeObject);
	public String getOldID()
	{
		String returnValue = getOldID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPicLayout_EVPicLayout(long pNativeObject, int piclayout);
	public void setPicLayout(com.earthview.world.spatial.kml.EVPicLayout piclayout)
	{
		int piclayoutParamValue = piclayout.getValue();
		setPicLayout_EVPicLayout(this.nativeObject.pointer, piclayoutParamValue);
	}
	native private int getPicLayout_void(long pNativeObject);
	public com.earthview.world.spatial.kml.EVPicLayout getPicLayout()
	{
		int returnValue = getPicLayout_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.EVPicLayout.toEnum(returnValue);
	}
	native private int getOldPicLayout_void(long pNativeObject);
	public com.earthview.world.spatial.kml.EVPicLayout getOldPicLayout()
	{
		int returnValue = getOldPicLayout_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.EVPicLayout.toEnum(returnValue);
	}
	native private void setStyleUrlName_EVString(long pNativeObject, String styleUrlName);
	public void setStyleUrlName(String styleUrlName)
	{
		String styleUrlNameParamValue = styleUrlName;
		setStyleUrlName_EVString(this.nativeObject.pointer, styleUrlNameParamValue);
	}
	native private String getStyleUrlName_void(long pNativeObject);
	public String getStyleUrlName()
	{
		String returnValue = getStyleUrlName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldStyleUrlName_void(long pNativeObject);
	public String getOldStyleUrlName()
	{
		String returnValue = getOldStyleUrlName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPictureUrl_EVString(long pNativeObject, String pictureUrl);
	public void setPictureUrl(String pictureUrl)
	{
		String pictureUrlParamValue = pictureUrl;
		setPictureUrl_EVString(this.nativeObject.pointer, pictureUrlParamValue);
	}
	native private String getPictureUrl_void(long pNativeObject);
	public String getPictureUrl()
	{
		String returnValue = getPictureUrl_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldPictureUrl_void(long pNativeObject);
	public String getOldPictureUrl()
	{
		String returnValue = getOldPictureUrl_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPictureID_EVString(long pNativeObject, String pictureID);
	public void setPictureID(String pictureID)
	{
		String pictureIDParamValue = pictureID;
		setPictureID_EVString(this.nativeObject.pointer, pictureIDParamValue);
	}
	native private String getPictureID_void(long pNativeObject);
	public String getPictureID()
	{
		String returnValue = getPictureID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldPictureID_void(long pNativeObject);
	public String getOldPictureID()
	{
		String returnValue = getOldPictureID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean isVisiable);
	public void setVisible(boolean isVisiable)
	{
		boolean isVisiableParamValue = isVisiable;
		setVisible_ev_bool(this.nativeObject.pointer, isVisiableParamValue);
	}
	native private boolean getVisible_void(long pNativeObject);
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldVisible_void(long pNativeObject);
	public boolean getOldVisible()
	{
		boolean returnValue = getOldVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setExtrude_ev_bool(long pNativeObject, boolean isExtrude);
	public void setExtrude(boolean isExtrude)
	{
		boolean isExtrudeParamValue = isExtrude;
		setExtrude_ev_bool(this.nativeObject.pointer, isExtrudeParamValue);
	}
	native private boolean getExtrude_void(long pNativeObject);
	public boolean getExtrude()
	{
		boolean returnValue = getExtrude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldExtrude_void(long pNativeObject);
	public boolean getOldExtrude()
	{
		boolean returnValue = getOldExtrude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setKmlType_EVGEXTYPE(long pNativeObject, int kmlType);
	public void setKmlType(com.earthview.world.spatial.kml.EVGEXTYPE kmlType)
	{
		int kmlTypeParamValue = kmlType.getValue();
		setKmlType_EVGEXTYPE(this.nativeObject.pointer, kmlTypeParamValue);
	}
	native private int getKmlType_void(long pNativeObject);
	public com.earthview.world.spatial.kml.EVGEXTYPE getKmlType()
	{
		int returnValue = getKmlType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.EVGEXTYPE.toEnum(returnValue);
	}
	native private void setPoints_VertexList(long pNativeObject, long points);
	public void setPoints(com.earthview.world.spatial.math.VertexList points)
	{
		long pointsParamValue = points.nativeObject.pointer;
		setPoints_VertexList(this.nativeObject.pointer, pointsParamValue);
	}
	native private long getPoints_void(long pNativeObject);
	public com.earthview.world.spatial.math.VertexList getPoints()
	{
		long returnValue = getPoints_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.VertexList __returnValue = new com.earthview.world.spatial.math.VertexList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VertexList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.VertexList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VertexList");
		}
		return __returnValue;
	}
	native private long getOldPoints_void(long pNativeObject);
	public com.earthview.world.spatial.math.VertexList getOldPoints()
	{
		long returnValue = getOldPoints_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.VertexList __returnValue = new com.earthview.world.spatial.math.VertexList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VertexList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.VertexList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VertexList");
		}
		return __returnValue;
	}
	native private void setLatitude_ev_real64(long pNativeObject, double latitude);
	public void setLatitude(double latitude)
	{
		double latitudeParamValue = latitude;
		setLatitude_ev_real64(this.nativeObject.pointer, latitudeParamValue);
	}
	native private double getLatitude_void(long pNativeObject);
	public double getLatitude()
	{
		double returnValue = getLatitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldLatitude_void(long pNativeObject);
	public double getOldLatitude()
	{
		double returnValue = getOldLatitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLongitude_ev_real64(long pNativeObject, double lontitude);
	public void setLongitude(double lontitude)
	{
		double lontitudeParamValue = lontitude;
		setLongitude_ev_real64(this.nativeObject.pointer, lontitudeParamValue);
	}
	native private double getLongitude_void(long pNativeObject);
	public double getLongitude()
	{
		double returnValue = getLongitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldLongitude_void(long pNativeObject);
	public double getOldLongitude()
	{
		double returnValue = getOldLongitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAltitude_ev_real64(long pNativeObject, double altitude);
	public void setAltitude(double altitude)
	{
		double altitudeParamValue = altitude;
		setAltitude_ev_real64(this.nativeObject.pointer, altitudeParamValue);
	}
	native private double getAltitude_void(long pNativeObject);
	public double getAltitude()
	{
		double returnValue = getAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldAltitude_void(long pNativeObject);
	public double getOldAltitude()
	{
		double returnValue = getOldAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAltitudeMode_EVAltitudeMode(long pNativeObject, int altitudemode);
	public void setAltitudeMode(com.earthview.world.spatial.utility.EVAltitudeMode altitudemode)
	{
		int altitudemodeParamValue = altitudemode.getValue();
		setAltitudeMode_EVAltitudeMode(this.nativeObject.pointer, altitudemodeParamValue);
	}
	native private int getAltitudeMode_void(long pNativeObject);
	public com.earthview.world.spatial.utility.EVAltitudeMode getAltitudeMode()
	{
		int returnValue = getAltitudeMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(returnValue);
	}
	native private int getOldAltitudeMode_void(long pNativeObject);
	public com.earthview.world.spatial.utility.EVAltitudeMode getOldAltitudeMode()
	{
		int returnValue = getOldAltitudeMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(returnValue);
	}
	native private void setFontName_EVString(long pNativeObject, String name);
	public void setFontName(String name)
	{
		String nameParamValue = name;
		setFontName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getFontName_void(long pNativeObject);
	public String getFontName()
	{
		String returnValue = getFontName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldFontName_void(long pNativeObject);
	public String getOldFontName()
	{
		String returnValue = getOldFontName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextShadowEnabled_ev_bool(long pNativeObject, boolean flag);
	public void setTextShadowEnabled(boolean flag)
	{
		boolean flagParamValue = flag;
		setTextShadowEnabled_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getTextShadowEnabled_void(long pNativeObject);
	public boolean getTextShadowEnabled()
	{
		boolean returnValue = getTextShadowEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldTextShadowEnabled_void(long pNativeObject);
	public boolean getOldTextShadowEnabled()
	{
		boolean returnValue = getOldTextShadowEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFontScale_ev_real32(long pNativeObject, float fontScale);
	public void setFontScale(float fontScale)
	{
		float fontScaleParamValue = fontScale;
		setFontScale_ev_real32(this.nativeObject.pointer, fontScaleParamValue);
	}
	native private float getFontScale_void(long pNativeObject);
	public float getFontScale()
	{
		float returnValue = getFontScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldFontScale_void(long pNativeObject);
	public float getOldFontScale()
	{
		float returnValue = getOldFontScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFontTransparency_ev_real32(long pNativeObject, float fontTransparency);
	public void setFontTransparency(float fontTransparency)
	{
		float fontTransparencyParamValue = fontTransparency;
		setFontTransparency_ev_real32(this.nativeObject.pointer, fontTransparencyParamValue);
	}
	native private float getFontTransparency_void(long pNativeObject);
	public float getFontTransparency()
	{
		float returnValue = getFontTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldFontTransparency_void(long pNativeObject);
	public float getOldFontTransparency()
	{
		float returnValue = getOldFontTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFontColor_CVector3(long pNativeObject, long fontColor);
	public void setFontColor(com.earthview.world.spatial.math.Vector3 fontColor)
	{
		long fontColorParamValue = fontColor.nativeObject.pointer;
		setFontColor_CVector3(this.nativeObject.pointer, fontColorParamValue);
	}
	native private long getFontColor_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getFontColor()
	{
		long returnValue = getFontColor_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getOldFontColor_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getOldFontColor()
	{
		long returnValue = getOldFontColor_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void setPictureTransparency_ev_real32(long pNativeObject, float iconTransparency);
	public void setPictureTransparency(float iconTransparency)
	{
		float iconTransparencyParamValue = iconTransparency;
		setPictureTransparency_ev_real32(this.nativeObject.pointer, iconTransparencyParamValue);
	}
	native private float getPictureTransparency_void(long pNativeObject);
	public float getPictureTransparency()
	{
		float returnValue = getPictureTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldPictureTransparency_void(long pNativeObject);
	public float getOldPictureTransparency()
	{
		float returnValue = getOldPictureTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIconScale_ev_real32(long pNativeObject, float iconScale);
	public void setIconScale(float iconScale)
	{
		float iconScaleParamValue = iconScale;
		setIconScale_ev_real32(this.nativeObject.pointer, iconScaleParamValue);
	}
	native private float getIconScale_void(long pNativeObject);
	public float getIconScale()
	{
		float returnValue = getIconScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldIconScale_void(long pNativeObject);
	public float getOldIconScale()
	{
		float returnValue = getOldIconScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLineColor_CVector3(long pNativeObject, long lineColor);
	///line and polygon
	public void setLineColor(com.earthview.world.spatial.math.Vector3 lineColor)
	{
		long lineColorParamValue = lineColor.nativeObject.pointer;
		setLineColor_CVector3(this.nativeObject.pointer, lineColorParamValue);
	}
	native private long getLineColor_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getLineColor()
	{
		long returnValue = getLineColor_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getOldLineColor_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getOldLineColor()
	{
		long returnValue = getOldLineColor_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void setLineTransparency_ev_real32(long pNativeObject, float lineTransparency);
	public void setLineTransparency(float lineTransparency)
	{
		float lineTransparencyParamValue = lineTransparency;
		setLineTransparency_ev_real32(this.nativeObject.pointer, lineTransparencyParamValue);
	}
	native private float getLineTransparency_void(long pNativeObject);
	public float getLineTransparency()
	{
		float returnValue = getLineTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldLineTransparency_void(long pNativeObject);
	public float getOldLineTransparency()
	{
		float returnValue = getOldLineTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLineWidth_ev_real32(long pNativeObject, float width);
	public void setLineWidth(float width)
	{
		float widthParamValue = width;
		setLineWidth_ev_real32(this.nativeObject.pointer, widthParamValue);
	}
	native private float getLineWidth_void(long pNativeObject);
	public float getLineWidth()
	{
		float returnValue = getLineWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldLineWidth_void(long pNativeObject);
	public float getOldLineWidth()
	{
		float returnValue = getOldLineWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPolygonColor_CVector3(long pNativeObject, long ploygonColor);
	public void setPolygonColor(com.earthview.world.spatial.math.Vector3 ploygonColor)
	{
		long ploygonColorParamValue = ploygonColor.nativeObject.pointer;
		setPolygonColor_CVector3(this.nativeObject.pointer, ploygonColorParamValue);
	}
	native private long getPolygonColor_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getPolygonColor()
	{
		long returnValue = getPolygonColor_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getOldPolygonColor_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getOldPolygonColor()
	{
		long returnValue = getOldPolygonColor_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void setFillOutLineMode_FillOutLineMode(long pNativeObject, int mode);
	public void setFillOutLineMode(com.earthview.world.spatial.kml.FillOutLineMode mode)
	{
		int modeParamValue = mode.getValue();
		setFillOutLineMode_FillOutLineMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getFillOutLineMode_void(long pNativeObject);
	public com.earthview.world.spatial.kml.FillOutLineMode getFillOutLineMode()
	{
		int returnValue = getFillOutLineMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.FillOutLineMode.toEnum(returnValue);
	}
	native private int getOldFillOutLineMode_void(long pNativeObject);
	public com.earthview.world.spatial.kml.FillOutLineMode getOldFillOutLineMode()
	{
		int returnValue = getOldFillOutLineMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.FillOutLineMode.toEnum(returnValue);
	}
	native private void setPolygonTransparency_ev_real32(long pNativeObject, float polygonTransparency);
	public void setPolygonTransparency(float polygonTransparency)
	{
		float polygonTransparencyParamValue = polygonTransparency;
		setPolygonTransparency_ev_real32(this.nativeObject.pointer, polygonTransparencyParamValue);
	}
	native private float getPolygonTransparency_void(long pNativeObject);
	public float getPolygonTransparency()
	{
		float returnValue = getPolygonTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldPolygonTransparency_void(long pNativeObject);
	public float getOldPolygonTransparency()
	{
		float returnValue = getOldPolygonTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLookAt_CLookAt(long pNativeObject, long LookAtAttr);
	public void setLookAt(com.earthview.world.spatial.GeoObject.LookAt LookAtAttr)
	{
		long LookAtAttrParamValue = LookAtAttr.nativeObject.pointer;
		setLookAt_CLookAt(this.nativeObject.pointer, LookAtAttrParamValue);
	}
	native private long getLookAt_void(long pNativeObject);
	public com.earthview.world.spatial.GeoObject.LookAt getLookAt()
	{
		long returnValue = getLookAt_void(this.nativeObject.pointer);
		com.earthview.world.spatial.GeoObject.LookAt __returnValue = new com.earthview.world.spatial.GeoObject.LookAt(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CLookAt");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoObject.LookAt)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLookAt");
		}
		return __returnValue;
	}
	native private long getOldLookAt_void(long pNativeObject);
	public com.earthview.world.spatial.GeoObject.LookAt getOldLookAt()
	{
		long returnValue = getOldLookAt_void(this.nativeObject.pointer);
		com.earthview.world.spatial.GeoObject.LookAt __returnValue = new com.earthview.world.spatial.GeoObject.LookAt(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CLookAt");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoObject.LookAt)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLookAt");
		}
		return __returnValue;
	}
	native private void setFresnelsurface_ev_bool_ev_bool_ev_bool_ev_bool(long pNativeObject, boolean underWaterEnable, boolean reflectionEnable, boolean reflectSky, boolean refractionEnable);
	///fresnelesurface
	public void setFresnelsurface(boolean underWaterEnable, boolean reflectionEnable, boolean reflectSky, boolean refractionEnable)
	{
		boolean underWaterEnableParamValue = underWaterEnable;
		boolean reflectionEnableParamValue = reflectionEnable;
		boolean reflectSkyParamValue = reflectSky;
		boolean refractionEnableParamValue = refractionEnable;
		setFresnelsurface_ev_bool_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, underWaterEnableParamValue, reflectionEnableParamValue, reflectSkyParamValue, refractionEnableParamValue);
	}
	native private void getFresnelsurface_ev_bool_ev_bool_ev_bool_ev_bool(long pNativeObject, long underWaterEnable, long reflectionEnable, long reflectSky, long refractionEnable);
	public void getFresnelsurface(BooleanPointer underWaterEnable, BooleanPointer reflectionEnable, BooleanPointer reflectSky, BooleanPointer refractionEnable)
	{
		long underWaterEnableParamValue = underWaterEnable.nativeObject.pointer;
		long reflectionEnableParamValue = reflectionEnable.nativeObject.pointer;
		long reflectSkyParamValue = reflectSky.nativeObject.pointer;
		long refractionEnableParamValue = refractionEnable.nativeObject.pointer;
		getFresnelsurface_ev_bool_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, underWaterEnableParamValue, reflectionEnableParamValue, reflectSkyParamValue, refractionEnableParamValue);
	}
	native private void getOldFresnelsurface_ev_bool_ev_bool_ev_bool_ev_bool(long pNativeObject, long underWaterEnable, long reflectionEnable, long reflectSky, long refractionEnable);
	public void getOldFresnelsurface(BooleanPointer underWaterEnable, BooleanPointer reflectionEnable, BooleanPointer reflectSky, BooleanPointer refractionEnable)
	{
		long underWaterEnableParamValue = underWaterEnable.nativeObject.pointer;
		long reflectionEnableParamValue = reflectionEnable.nativeObject.pointer;
		long reflectSkyParamValue = reflectSky.nativeObject.pointer;
		long refractionEnableParamValue = refractionEnable.nativeObject.pointer;
		getOldFresnelsurface_ev_bool_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, underWaterEnableParamValue, reflectionEnableParamValue, reflectSkyParamValue, refractionEnableParamValue);
	}
	native private void setFresnelsurfaceColor_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_CVector4(long pNativeObject, float waveDensity, float flowSpeed, float waterDeep, float wavePower, float lightPower, float waveDir, long waterColor);
	public void setFresnelsurfaceColor(float waveDensity, float flowSpeed, float waterDeep, float wavePower, float lightPower, float waveDir, com.earthview.world.spatial.math.Vector4 waterColor)
	{
		float waveDensityParamValue = waveDensity;
		float flowSpeedParamValue = flowSpeed;
		float waterDeepParamValue = waterDeep;
		float wavePowerParamValue = wavePower;
		float lightPowerParamValue = lightPower;
		float waveDirParamValue = waveDir;
		long waterColorParamValue = waterColor.nativeObject.pointer;
		setFresnelsurfaceColor_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_CVector4(this.nativeObject.pointer, waveDensityParamValue, flowSpeedParamValue, waterDeepParamValue, wavePowerParamValue, lightPowerParamValue, waveDirParamValue, waterColorParamValue);
	}
	native private void getFresnelsurfaceColor_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_CVector4(long pNativeObject, long waveDensity, long flowSpeed, long waterDeep, long wavePower, long lightPower, long waveDir, long waterColor);
	public void getFresnelsurfaceColor(FloatPointer waveDensity, FloatPointer flowSpeed, FloatPointer waterDeep, FloatPointer wavePower, FloatPointer lightPower, FloatPointer waveDir, com.earthview.world.spatial.math.Vector4 waterColor)
	{
		long waveDensityParamValue = waveDensity.nativeObject.pointer;
		long flowSpeedParamValue = flowSpeed.nativeObject.pointer;
		long waterDeepParamValue = waterDeep.nativeObject.pointer;
		long wavePowerParamValue = wavePower.nativeObject.pointer;
		long lightPowerParamValue = lightPower.nativeObject.pointer;
		long waveDirParamValue = waveDir.nativeObject.pointer;
		long waterColorParamValue = waterColor.nativeObject.pointer;
		getFresnelsurfaceColor_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_CVector4(this.nativeObject.pointer, waveDensityParamValue, flowSpeedParamValue, waterDeepParamValue, wavePowerParamValue, lightPowerParamValue, waveDirParamValue, waterColorParamValue);
	}
	native private void getOldFresnelsurfaceColor_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_CVector4(long pNativeObject, long waveDensity, long flowSpeed, long waterDeep, long wavePower, long lightPower, long waveDir, long waterColor);
	public void getOldFresnelsurfaceColor(FloatPointer waveDensity, FloatPointer flowSpeed, FloatPointer waterDeep, FloatPointer wavePower, FloatPointer lightPower, FloatPointer waveDir, com.earthview.world.spatial.math.Vector4 waterColor)
	{
		long waveDensityParamValue = waveDensity.nativeObject.pointer;
		long flowSpeedParamValue = flowSpeed.nativeObject.pointer;
		long waterDeepParamValue = waterDeep.nativeObject.pointer;
		long wavePowerParamValue = wavePower.nativeObject.pointer;
		long lightPowerParamValue = lightPower.nativeObject.pointer;
		long waveDirParamValue = waveDir.nativeObject.pointer;
		long waterColorParamValue = waterColor.nativeObject.pointer;
		getOldFresnelsurfaceColor_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_CVector4(this.nativeObject.pointer, waveDensityParamValue, flowSpeedParamValue, waterDeepParamValue, wavePowerParamValue, lightPowerParamValue, waveDirParamValue, waterColorParamValue);
	}
	native private void setModelHref_EVString(long pNativeObject, String modelHref);
	///model
	/// 					void setModelID( const EVString& modelID );
	/// 					EVString getModelID()const;
	public void setModelHref(String modelHref)
	{
		String modelHrefParamValue = modelHref;
		setModelHref_EVString(this.nativeObject.pointer, modelHrefParamValue);
	}
	native private String getModelHref_void(long pNativeObject);
	public String getModelHref()
	{
		String returnValue = getModelHref_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldModelHref_void(long pNativeObject);
	public String getOldModelHref()
	{
		String returnValue = getOldModelHref_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRotation_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double z);
	public void setRotation(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setRotation_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private long getRotation_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getRotation()
	{
		long returnValue = getRotation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getOldRotation_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getOldRotation()
	{
		long returnValue = getOldRotation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void setScale_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double z);
	public void setScale(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setScale_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private long getScale_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		long returnValue = getScale_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getOldScale_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getOldScale()
	{
		long returnValue = getOldScale_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void setRemovePictureCache_ev_bool(long pNativeObject, boolean val);
	///overlay
	/// 					void setOriginTextureID(const EVString& originTextID);
	/// 					EVString getOriginTextureID() const;
	public void setRemovePictureCache(boolean val)
	{
		boolean valParamValue = val;
		setRemovePictureCache_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private boolean getRemovePictureCache_void(long pNativeObject);
	public boolean getRemovePictureCache()
	{
		boolean returnValue = getRemovePictureCache_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOverLayerLatLonBox_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double west, double east, double north, double south);
	public void setOverLayerLatLonBox(double west, double east, double north, double south)
	{
		double westParamValue = west;
		double eastParamValue = east;
		double northParamValue = north;
		double southParamValue = south;
		setOverLayerLatLonBox_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, westParamValue, eastParamValue, northParamValue, southParamValue);
	}
	native private void getOverLayerLatLonBox_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long west, long east, long north, long south);
	public void getOverLayerLatLonBox(DoublePointer west, DoublePointer east, DoublePointer north, DoublePointer south)
	{
		long westParamValue = west.nativeObject.pointer;
		long eastParamValue = east.nativeObject.pointer;
		long northParamValue = north.nativeObject.pointer;
		long southParamValue = south.nativeObject.pointer;
		getOverLayerLatLonBox_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, westParamValue, eastParamValue, northParamValue, southParamValue);
	}
	native private void getOldOverLayerLatLonBox_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long west, long east, long north, long south);
	public void getOldOverLayerLatLonBox(DoublePointer west, DoublePointer east, DoublePointer north, DoublePointer south)
	{
		long westParamValue = west.nativeObject.pointer;
		long eastParamValue = east.nativeObject.pointer;
		long northParamValue = north.nativeObject.pointer;
		long southParamValue = south.nativeObject.pointer;
		getOldOverLayerLatLonBox_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, westParamValue, eastParamValue, northParamValue, southParamValue);
	}
	native private void setOverLayerRotateAngle_ev_real32(long pNativeObject, float rotate);
	public void setOverLayerRotateAngle(float rotate)
	{
		float rotateParamValue = rotate;
		setOverLayerRotateAngle_ev_real32(this.nativeObject.pointer, rotateParamValue);
	}
	native private float getOverLayerRotateAngle_void(long pNativeObject);
	public float getOverLayerRotateAngle()
	{
		float returnValue = getOverLayerRotateAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldOverLayerRotateAngle_void(long pNativeObject);
	public float getOldOverLayerRotateAngle()
	{
		float returnValue = getOldOverLayerRotateAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOverLayerSmooth_ev_bool(long pNativeObject, boolean enableSmooth);
	public void setOverLayerSmooth(boolean enableSmooth)
	{
		boolean enableSmoothParamValue = enableSmooth;
		setOverLayerSmooth_ev_bool(this.nativeObject.pointer, enableSmoothParamValue);
	}
	native private boolean getOverLayerSmooth_void(long pNativeObject);
	public boolean getOverLayerSmooth()
	{
		boolean returnValue = getOverLayerSmooth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldOverLayerSmooth_void(long pNativeObject);
	public boolean getOldOverLayerSmooth()
	{
		boolean returnValue = getOldOverLayerSmooth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsRegion_ev_bool(long pNativeObject, boolean flag);
	///region
	public void setIsRegion(boolean flag)
	{
		boolean flagParamValue = flag;
		setIsRegion_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getIsRegion_void(long pNativeObject);
	public boolean getIsRegion()
	{
		boolean returnValue = getIsRegion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldIsRegion_void(long pNativeObject);
	public boolean getOldIsRegion()
	{
		boolean returnValue = getOldIsRegion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRegionLatLonAltBox_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double regionWest, double regionEast, double regionNorth, double regionSouth, double minAltitude, double maxAltitude);
	public void setRegionLatLonAltBox(double regionWest, double regionEast, double regionNorth, double regionSouth, double minAltitude, double maxAltitude)
	{
		double regionWestParamValue = regionWest;
		double regionEastParamValue = regionEast;
		double regionNorthParamValue = regionNorth;
		double regionSouthParamValue = regionSouth;
		double minAltitudeParamValue = minAltitude;
		double maxAltitudeParamValue = maxAltitude;
		setRegionLatLonAltBox_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, regionWestParamValue, regionEastParamValue, regionNorthParamValue, regionSouthParamValue, minAltitudeParamValue, maxAltitudeParamValue);
	}
	native private void getRegionLatLonAltBox_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long regionWest, long regionEast, long regionNorth, long regionSouth, long minAltitude, long maxAltitude);
	public void getRegionLatLonAltBox(DoublePointer regionWest, DoublePointer regionEast, DoublePointer regionNorth, DoublePointer regionSouth, DoublePointer minAltitude, DoublePointer maxAltitude)
	{
		long regionWestParamValue = regionWest.nativeObject.pointer;
		long regionEastParamValue = regionEast.nativeObject.pointer;
		long regionNorthParamValue = regionNorth.nativeObject.pointer;
		long regionSouthParamValue = regionSouth.nativeObject.pointer;
		long minAltitudeParamValue = minAltitude.nativeObject.pointer;
		long maxAltitudeParamValue = maxAltitude.nativeObject.pointer;
		getRegionLatLonAltBox_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, regionWestParamValue, regionEastParamValue, regionNorthParamValue, regionSouthParamValue, minAltitudeParamValue, maxAltitudeParamValue);
	}
	native private void getOldRegionLatLonAltBox_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long regionWest, long regionEast, long regionNorth, long regionSouth, long minAltitude, long maxAltitude);
	public void getOldRegionLatLonAltBox(DoublePointer regionWest, DoublePointer regionEast, DoublePointer regionNorth, DoublePointer regionSouth, DoublePointer minAltitude, DoublePointer maxAltitude)
	{
		long regionWestParamValue = regionWest.nativeObject.pointer;
		long regionEastParamValue = regionEast.nativeObject.pointer;
		long regionNorthParamValue = regionNorth.nativeObject.pointer;
		long regionSouthParamValue = regionSouth.nativeObject.pointer;
		long minAltitudeParamValue = minAltitude.nativeObject.pointer;
		long maxAltitudeParamValue = maxAltitude.nativeObject.pointer;
		getOldRegionLatLonAltBox_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, regionWestParamValue, regionEastParamValue, regionNorthParamValue, regionSouthParamValue, minAltitudeParamValue, maxAltitudeParamValue);
	}
	native private void setIsLod_ev_bool(long pNativeObject, boolean IsLod);
	public void setIsLod(boolean IsLod)
	{
		boolean IsLodParamValue = IsLod;
		setIsLod_ev_bool(this.nativeObject.pointer, IsLodParamValue);
	}
	native private boolean getIsLod_void(long pNativeObject);
	public boolean getIsLod()
	{
		boolean returnValue = getIsLod_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldIsLod_void(long pNativeObject);
	public boolean getOldIsLod()
	{
		boolean returnValue = getOldIsLod_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLodPixels_ev_real64_ev_real64(long pNativeObject, double minLodPixels, double maxLodPixels);
	public void setLodPixels(double minLodPixels, double maxLodPixels)
	{
		double minLodPixelsParamValue = minLodPixels;
		double maxLodPixelsParamValue = maxLodPixels;
		setLodPixels_ev_real64_ev_real64(this.nativeObject.pointer, minLodPixelsParamValue, maxLodPixelsParamValue);
	}
	native private void getLodPixels_ev_real64_ev_real64(long pNativeObject, long minLodPixels, long maxLodPixels);
	public void getLodPixels(DoublePointer minLodPixels, DoublePointer maxLodPixels)
	{
		long minLodPixelsParamValue = minLodPixels.nativeObject.pointer;
		long maxLodPixelsParamValue = maxLodPixels.nativeObject.pointer;
		getLodPixels_ev_real64_ev_real64(this.nativeObject.pointer, minLodPixelsParamValue, maxLodPixelsParamValue);
	}
	native private void getOldLodPixels_ev_real64_ev_real64(long pNativeObject, long minLodPixels, long maxLodPixels);
	public void getOldLodPixels(DoublePointer minLodPixels, DoublePointer maxLodPixels)
	{
		long minLodPixelsParamValue = minLodPixels.nativeObject.pointer;
		long maxLodPixelsParamValue = maxLodPixels.nativeObject.pointer;
		getOldLodPixels_ev_real64_ev_real64(this.nativeObject.pointer, minLodPixelsParamValue, maxLodPixelsParamValue);
	}
	native private void setRegionAltitudeMode_EVAltitudeMode(long pNativeObject, int altitudemode);
	public void setRegionAltitudeMode(com.earthview.world.spatial.utility.EVAltitudeMode altitudemode)
	{
		int altitudemodeParamValue = altitudemode.getValue();
		setRegionAltitudeMode_EVAltitudeMode(this.nativeObject.pointer, altitudemodeParamValue);
	}
	native private int getRegionAltitudeMode_void(long pNativeObject);
	public com.earthview.world.spatial.utility.EVAltitudeMode getRegionAltitudeMode()
	{
		int returnValue = getRegionAltitudeMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(returnValue);
	}
	native private int getOldRegionAltitudeMode_void(long pNativeObject);
	public com.earthview.world.spatial.utility.EVAltitudeMode getOldRegionAltitudeMode()
	{
		int returnValue = getOldRegionAltitudeMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(returnValue);
	}
	native private void setOriginRegion_ev_bool(long pNativeObject, boolean originRegion);
	public void setOriginRegion(boolean originRegion)
	{
		boolean originRegionParamValue = originRegion;
		setOriginRegion_ev_bool(this.nativeObject.pointer, originRegionParamValue);
	}
	native private boolean getOriginRegion_void(long pNativeObject);
	public boolean getOriginRegion()
	{
		boolean returnValue = getOriginRegion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldOriginRegion_void(long pNativeObject);
	public boolean getOldOriginRegion()
	{
		boolean returnValue = getOldOriginRegion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setArrowType_ArrowType(long pNativeObject, int type);
	/// biaohui 
	public void setArrowType(com.earthview.world.spatial.kml.ArrowType type)
	{
		int typeParamValue = type.getValue();
		setArrowType_ArrowType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getArrowType_void(long pNativeObject);
	public com.earthview.world.spatial.kml.ArrowType getArrowType()
	{
		int returnValue = getArrowType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.ArrowType.toEnum(returnValue);
	}
	native private int getOldArrowType_void(long pNativeObject);
	public com.earthview.world.spatial.kml.ArrowType getOldArrowType()
	{
		int returnValue = getOldArrowType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.ArrowType.toEnum(returnValue);
	}
	native private void setArrowStartAltitude_ev_real32(long pNativeObject, float startAtitude);
	public void setArrowStartAltitude(float startAtitude)
	{
		float startAtitudeParamValue = startAtitude;
		setArrowStartAltitude_ev_real32(this.nativeObject.pointer, startAtitudeParamValue);
	}
	native private float getArrowStartAltitude_void(long pNativeObject);
	public float getArrowStartAltitude()
	{
		float returnValue = getArrowStartAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldArrowStartAltitude_void(long pNativeObject);
	public float getOldArrowStartAltitude()
	{
		float returnValue = getOldArrowStartAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setArrowEndAltitude_ev_real32(long pNativeObject, float endAtitude);
	public void setArrowEndAltitude(float endAtitude)
	{
		float endAtitudeParamValue = endAtitude;
		setArrowEndAltitude_ev_real32(this.nativeObject.pointer, endAtitudeParamValue);
	}
	native private float getArrowEndAltitude_void(long pNativeObject);
	public float getArrowEndAltitude()
	{
		float returnValue = getArrowEndAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldArrowEndAltitude_void(long pNativeObject);
	public float getOldArrowEndAltitude()
	{
		float returnValue = getOldArrowEndAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setArrowKeyPoints_EVString(long pNativeObject, String arrowKeyPoints);
	public void setArrowKeyPoints(String arrowKeyPoints)
	{
		String arrowKeyPointsParamValue = arrowKeyPoints;
		setArrowKeyPoints_EVString(this.nativeObject.pointer, arrowKeyPointsParamValue);
	}
	native private String getArrowKeyPoints_void(long pNativeObject);
	public String getArrowKeyPoints()
	{
		String returnValue = getArrowKeyPoints_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldArrowKeyPoints_void(long pNativeObject);
	public String getOldArrowKeyPoints()
	{
		String returnValue = getOldArrowKeyPoints_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLength_void(long pNativeObject);
	/// cube
	public double getLength()
	{
		double returnValue = getLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldLength_void(long pNativeObject);
	public double getOldLength()
	{
		double returnValue = getOldLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getWidth_void(long pNativeObject);
	public double getWidth()
	{
		double returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldWidth_void(long pNativeObject);
	public double getOldWidth()
	{
		double returnValue = getOldWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getHeight_void(long pNativeObject);
	public double getHeight()
	{
		double returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldHeight_void(long pNativeObject);
	public double getOldHeight()
	{
		double returnValue = getOldHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLength_ev_real64(long pNativeObject, double length);
	public void setLength(double length)
	{
		double lengthParamValue = length;
		setLength_ev_real64(this.nativeObject.pointer, lengthParamValue);
	}
	native private void setWidth_ev_real64(long pNativeObject, double width);
	public void setWidth(double width)
	{
		double widthParamValue = width;
		setWidth_ev_real64(this.nativeObject.pointer, widthParamValue);
	}
	native private void setHeigth_ev_real64(long pNativeObject, double height);
	public void setHeigth(double height)
	{
		double heightParamValue = height;
		setHeigth_ev_real64(this.nativeObject.pointer, heightParamValue);
	}
	native private void setIsUseTexture_ev_bool(long pNativeObject, boolean useTexture);
	/// cone
	public void setIsUseTexture(boolean useTexture)
	{
		boolean useTextureParamValue = useTexture;
		setIsUseTexture_ev_bool(this.nativeObject.pointer, useTextureParamValue);
	}
	native private boolean getIsUseTexture_void(long pNativeObject);
	public boolean getIsUseTexture()
	{
		boolean returnValue = getIsUseTexture_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldIsUseTexture_void(long pNativeObject);
	public boolean getOldIsUseTexture()
	{
		boolean returnValue = getOldIsUseTexture_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsTextureFlow_ev_bool(long pNativeObject, boolean isTextureFlow);
	public void setIsTextureFlow(boolean isTextureFlow)
	{
		boolean isTextureFlowParamValue = isTextureFlow;
		setIsTextureFlow_ev_bool(this.nativeObject.pointer, isTextureFlowParamValue);
	}
	native private boolean getIsTextureFlow_void(long pNativeObject);
	public boolean getIsTextureFlow()
	{
		boolean returnValue = getIsTextureFlow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldIsTextureFlow_void(long pNativeObject);
	public boolean getOldIsTextureFlow()
	{
		boolean returnValue = getOldIsTextureFlow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsTexturePositiveFlow_ev_bool(long pNativeObject, boolean isTexturePositiveFlow);
	public void setIsTexturePositiveFlow(boolean isTexturePositiveFlow)
	{
		boolean isTexturePositiveFlowParamValue = isTexturePositiveFlow;
		setIsTexturePositiveFlow_ev_bool(this.nativeObject.pointer, isTexturePositiveFlowParamValue);
	}
	native private boolean getIsTexturePositiveFlow_void(long pNativeObject);
	public boolean getIsTexturePositiveFlow()
	{
		boolean returnValue = getIsTexturePositiveFlow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldIsTexturePositiveFlow_void(long pNativeObject);
	public boolean getOldIsTexturePositiveFlow()
	{
		boolean returnValue = getOldIsTexturePositiveFlow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextureFlowSpeed_ev_real64(long pNativeObject, double flowSpeed);
	public void setTextureFlowSpeed(double flowSpeed)
	{
		double flowSpeedParamValue = flowSpeed;
		setTextureFlowSpeed_ev_real64(this.nativeObject.pointer, flowSpeedParamValue);
	}
	native private double getTextureFlowSpeed_void(long pNativeObject);
	public double getTextureFlowSpeed()
	{
		double returnValue = getTextureFlowSpeed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldTextureFlowSpeed_void(long pNativeObject);
	public double getOldTextureFlowSpeed()
	{
		double returnValue = getOldTextureFlowSpeed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBottomRadius_ev_real64(long pNativeObject, double bottomRadius);
	public void setBottomRadius(double bottomRadius)
	{
		double bottomRadiusParamValue = bottomRadius;
		setBottomRadius_ev_real64(this.nativeObject.pointer, bottomRadiusParamValue);
	}
	native private double getBottomRadius_void(long pNativeObject);
	public double getBottomRadius()
	{
		double returnValue = getBottomRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldBottomRadius_void(long pNativeObject);
	public double getOldBottomRadius()
	{
		double returnValue = getOldBottomRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTopRadius_ev_real64(long pNativeObject, double topRadius);
	public void setTopRadius(double topRadius)
	{
		double topRadiusParamValue = topRadius;
		setTopRadius_ev_real64(this.nativeObject.pointer, topRadiusParamValue);
	}
	native private double getTopRadius_void(long pNativeObject);
	public double getTopRadius()
	{
		double returnValue = getTopRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOldTopRadius_void(long pNativeObject);
	public double getOldTopRadius()
	{
		double returnValue = getOldTopRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGranularity_ev_uint32(long pNativeObject, long granularity);
	public void setGranularity(long granularity)
	{
		long granularityParamValue = granularity;
		setGranularity_ev_uint32(this.nativeObject.pointer, granularityParamValue);
	}
	native private long getGranularity_void(long pNativeObject);
	public long getGranularity()
	{
		long returnValue = getGranularity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getOldGranularity_void(long pNativeObject);
	public long getOldGranularity()
	{
		long returnValue = getOldGranularity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHalfsPhereRenderMode_HalfsPhereRenderMode(long pNativeObject, int mode);
	/// 半球
	public void setHalfsPhereRenderMode(com.earthview.world.spatial.kml.HalfsPhereRenderMode mode)
	{
		int modeParamValue = mode.getValue();
		setHalfsPhereRenderMode_HalfsPhereRenderMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getHalfsPhereRenderMode_void(long pNativeObject);
	public com.earthview.world.spatial.kml.HalfsPhereRenderMode getHalfsPhereRenderMode()
	{
		int returnValue = getHalfsPhereRenderMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.HalfsPhereRenderMode.toEnum(returnValue);
	}
	native private int getOldHalfsPhereRenderMode_void(long pNativeObject);
	public com.earthview.world.spatial.kml.HalfsPhereRenderMode getOldHalfsPhereRenderMode()
	{
		int returnValue = getOldHalfsPhereRenderMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.HalfsPhereRenderMode.toEnum(returnValue);
	}
	native private long getScreenX_void(long pNativeObject);
	public com.earthview.world.spatial.kml.SceneOverlayData getScreenX()
	{
		long returnValue = getScreenX_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.SceneOverlayData __returnValue = new com.earthview.world.spatial.kml.SceneOverlayData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.SceneOverlayData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		}
		return __returnValue;
	}
	native private long getScreenY_void(long pNativeObject);
	public com.earthview.world.spatial.kml.SceneOverlayData getScreenY()
	{
		long returnValue = getScreenY_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.SceneOverlayData __returnValue = new com.earthview.world.spatial.kml.SceneOverlayData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.SceneOverlayData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		}
		return __returnValue;
	}
	native private void setScreenXY_CSceneOverlayData_CSceneOverlayData(long pNativeObject, long screenX, long screenY);
	public void setScreenXY(com.earthview.world.spatial.kml.SceneOverlayData screenX, com.earthview.world.spatial.kml.SceneOverlayData screenY)
	{
		long screenXParamValue = screenX.nativeObject.pointer;
		long screenYParamValue = screenY.nativeObject.pointer;
		setScreenXY_CSceneOverlayData_CSceneOverlayData(this.nativeObject.pointer, screenXParamValue, screenYParamValue);
	}
	native private long getOverlayX_void(long pNativeObject);
	public com.earthview.world.spatial.kml.SceneOverlayData getOverlayX()
	{
		long returnValue = getOverlayX_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.SceneOverlayData __returnValue = new com.earthview.world.spatial.kml.SceneOverlayData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.SceneOverlayData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		}
		return __returnValue;
	}
	native private long getOverlayY_void(long pNativeObject);
	public com.earthview.world.spatial.kml.SceneOverlayData getOverlayY()
	{
		long returnValue = getOverlayY_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.SceneOverlayData __returnValue = new com.earthview.world.spatial.kml.SceneOverlayData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.SceneOverlayData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		}
		return __returnValue;
	}
	native private void setOverlayXY_CSceneOverlayData_CSceneOverlayData(long pNativeObject, long overlayX, long overlayY);
	public void setOverlayXY(com.earthview.world.spatial.kml.SceneOverlayData overlayX, com.earthview.world.spatial.kml.SceneOverlayData overlayY)
	{
		long overlayXParamValue = overlayX.nativeObject.pointer;
		long overlayYParamValue = overlayY.nativeObject.pointer;
		setOverlayXY_CSceneOverlayData_CSceneOverlayData(this.nativeObject.pointer, overlayXParamValue, overlayYParamValue);
	}
	native private long getSizeX_void(long pNativeObject);
	public com.earthview.world.spatial.kml.SceneOverlayData getSizeX()
	{
		long returnValue = getSizeX_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.SceneOverlayData __returnValue = new com.earthview.world.spatial.kml.SceneOverlayData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.SceneOverlayData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		}
		return __returnValue;
	}
	native private long getSizeY_void(long pNativeObject);
	public com.earthview.world.spatial.kml.SceneOverlayData getSizeY()
	{
		long returnValue = getSizeY_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.SceneOverlayData __returnValue = new com.earthview.world.spatial.kml.SceneOverlayData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.SceneOverlayData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		}
		return __returnValue;
	}
	native private void setSizeXY_CSceneOverlayData_CSceneOverlayData(long pNativeObject, long sizeX, long sizeY);
	public void setSizeXY(com.earthview.world.spatial.kml.SceneOverlayData sizeX, com.earthview.world.spatial.kml.SceneOverlayData sizeY)
	{
		long sizeXParamValue = sizeX.nativeObject.pointer;
		long sizeYParamValue = sizeY.nativeObject.pointer;
		setSizeXY_CSceneOverlayData_CSceneOverlayData(this.nativeObject.pointer, sizeXParamValue, sizeYParamValue);
	}
	native private long getRotateX_void(long pNativeObject);
	public com.earthview.world.spatial.kml.SceneOverlayData getRotateX()
	{
		long returnValue = getRotateX_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.SceneOverlayData __returnValue = new com.earthview.world.spatial.kml.SceneOverlayData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.SceneOverlayData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		}
		return __returnValue;
	}
	native private long getRotateY_void(long pNativeObject);
	public com.earthview.world.spatial.kml.SceneOverlayData getRotateY()
	{
		long returnValue = getRotateY_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.SceneOverlayData __returnValue = new com.earthview.world.spatial.kml.SceneOverlayData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.SceneOverlayData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSceneOverlayData");
		}
		return __returnValue;
	}
	native private void setRotateXY_CSceneOverlayData_CSceneOverlayData(long pNativeObject, long rotateX, long rotateY);
	public void setRotateXY(com.earthview.world.spatial.kml.SceneOverlayData rotateX, com.earthview.world.spatial.kml.SceneOverlayData rotateY)
	{
		long rotateXParamValue = rotateX.nativeObject.pointer;
		long rotateYParamValue = rotateY.nativeObject.pointer;
		setRotateXY_CSceneOverlayData_CSceneOverlayData(this.nativeObject.pointer, rotateXParamValue, rotateYParamValue);
	}
	native private void setMultiPoint_CMultiPoint(long pNativeObject, long ref_MultiPoint);
	public void setMultiPoint(com.earthview.world.spatial.geometry.MultiPoint ref_MultiPoint)
	{
		long ref_MultiPointParamValue = (ref_MultiPoint == null ? 0L : ref_MultiPoint.nativeObject.pointer);
		setMultiPoint_CMultiPoint(this.nativeObject.pointer, ref_MultiPointParamValue);
	}
	native private long getMultiPoint_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.MultiPoint getMultiPoint()
	{
		long returnValue = getMultiPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.MultiPoint __returnValue = new com.earthview.world.spatial.geometry.MultiPoint(CreatedWhenConstruct.CWC_NotToCreate, "CMultiPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.MultiPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMultiPoint");
		}
		return __returnValue;
	}
	native private long getOldMultiPoint_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.MultiPoint getOldMultiPoint()
	{
		long returnValue = getOldMultiPoint_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.MultiPoint __returnValue = new com.earthview.world.spatial.geometry.MultiPoint(CreatedWhenConstruct.CWC_NotToCreate, "CMultiPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.MultiPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMultiPoint");
		}
		return __returnValue;
	}
	native private void setPolyLine_CPolyline(long pNativeObject, long ref_polyline);
	public void setPolyLine(com.earthview.world.spatial.geometry.Polyline ref_polyline)
	{
		long ref_polylineParamValue = (ref_polyline == null ? 0L : ref_polyline.nativeObject.pointer);
		setPolyLine_CPolyline(this.nativeObject.pointer, ref_polylineParamValue);
	}
	native private long getPolyLine_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Polyline getPolyLine()
	{
		long returnValue = getPolyLine_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Polyline __returnValue = new com.earthview.world.spatial.geometry.Polyline(CreatedWhenConstruct.CWC_NotToCreate, "CPolyline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Polyline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPolyline");
		}
		return __returnValue;
	}
	native private long getOldPolyLine_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Polyline getOldPolyLine()
	{
		long returnValue = getOldPolyLine_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Polyline __returnValue = new com.earthview.world.spatial.geometry.Polyline(CreatedWhenConstruct.CWC_NotToCreate, "CPolyline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Polyline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPolyline");
		}
		return __returnValue;
	}
	native private void setPolygon_CPolygon(long pNativeObject, long ref_polygon);
	public void setPolygon(com.earthview.world.spatial.geometry.Polygon ref_polygon)
	{
		long ref_polygonParamValue = (ref_polygon == null ? 0L : ref_polygon.nativeObject.pointer);
		setPolygon_CPolygon(this.nativeObject.pointer, ref_polygonParamValue);
	}
	native private long getPolygon_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Polygon getPolygon()
	{
		long returnValue = getPolygon_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Polygon __returnValue = new com.earthview.world.spatial.geometry.Polygon(CreatedWhenConstruct.CWC_NotToCreate, "CPolygon");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Polygon)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPolygon");
		}
		return __returnValue;
	}
	native private long getOldPolygon_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Polygon getOldPolygon()
	{
		long returnValue = getOldPolygon_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Polygon __returnValue = new com.earthview.world.spatial.geometry.Polygon(CreatedWhenConstruct.CWC_NotToCreate, "CPolygon");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Polygon)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPolygon");
		}
		return __returnValue;
	}
	native private void setTopSurfaceTextureEnable_ev_bool(long pNativeObject, boolean enable);
	///------------线、面纹理设置				
	public void setTopSurfaceTextureEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setTopSurfaceTextureEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getTopSurfaceTextureEnable_void(long pNativeObject);
	public boolean getTopSurfaceTextureEnable()
	{
		boolean returnValue = getTopSurfaceTextureEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldTopSurfaceTextureEnable_void(long pNativeObject);
	public boolean getOldTopSurfaceTextureEnable()
	{
		boolean returnValue = getOldTopSurfaceTextureEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWallSurfaceTextureEnable_ev_bool(long pNativeObject, boolean enable);
	public void setWallSurfaceTextureEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setWallSurfaceTextureEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getWallSurfaceTextureEnable_void(long pNativeObject);
	public boolean getWallSurfaceTextureEnable()
	{
		boolean returnValue = getWallSurfaceTextureEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOldWallSurfaceTextureEnable_void(long pNativeObject);
	public boolean getOldWallSurfaceTextureEnable()
	{
		boolean returnValue = getOldWallSurfaceTextureEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTopSurfaceTextureScale_ev_real32(long pNativeObject, float scale);
	public void setTopSurfaceTextureScale(float scale)
	{
		float scaleParamValue = scale;
		setTopSurfaceTextureScale_ev_real32(this.nativeObject.pointer, scaleParamValue);
	}
	native private float getTopSurfaceTextureScale_void(long pNativeObject);
	public float getTopSurfaceTextureScale()
	{
		float returnValue = getTopSurfaceTextureScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldTopSurfaceTextureScale_void(long pNativeObject);
	public float getOldTopSurfaceTextureScale()
	{
		float returnValue = getOldTopSurfaceTextureScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWallSurfaceTextureScale_ev_real32(long pNativeObject, float scale);
	public void setWallSurfaceTextureScale(float scale)
	{
		float scaleParamValue = scale;
		setWallSurfaceTextureScale_ev_real32(this.nativeObject.pointer, scaleParamValue);
	}
	native private float getWallSurfaceTextureScale_void(long pNativeObject);
	public float getWallSurfaceTextureScale()
	{
		float returnValue = getWallSurfaceTextureScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldWallSurfaceTextureScale_void(long pNativeObject);
	public float getOldWallSurfaceTextureScale()
	{
		float returnValue = getOldWallSurfaceTextureScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTopSurfaceTextureTransparency_ev_real32(long pNativeObject, float val);
	public void setTopSurfaceTextureTransparency(float val)
	{
		float valParamValue = val;
		setTopSurfaceTextureTransparency_ev_real32(this.nativeObject.pointer, valParamValue);
	}
	native private float getTopSurfaceTextureTransparency_void(long pNativeObject);
	public float getTopSurfaceTextureTransparency()
	{
		float returnValue = getTopSurfaceTextureTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldTopSurfaceTextureTransparency_void(long pNativeObject);
	public float getOldTopSurfaceTextureTransparency()
	{
		float returnValue = getOldTopSurfaceTextureTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWallSurfaceTextureTransparency_ev_real32(long pNativeObject, float val);
	public void setWallSurfaceTextureTransparency(float val)
	{
		float valParamValue = val;
		setWallSurfaceTextureTransparency_ev_real32(this.nativeObject.pointer, valParamValue);
	}
	native private float getWallSurfaceTextureTransparency_void(long pNativeObject);
	public float getWallSurfaceTextureTransparency()
	{
		float returnValue = getWallSurfaceTextureTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldWallSurfaceTextureTransparency_void(long pNativeObject);
	public float getOldWallSurfaceTextureTransparency()
	{
		float returnValue = getOldWallSurfaceTextureTransparency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTopSurfaceTexturePath_EVString(long pNativeObject, String path);
	public void setTopSurfaceTexturePath(String path)
	{
		String pathParamValue = path;
		setTopSurfaceTexturePath_EVString(this.nativeObject.pointer, pathParamValue);
	}
	native private String getTopSurfaceTexturePath_void(long pNativeObject);
	public String getTopSurfaceTexturePath()
	{
		String returnValue = getTopSurfaceTexturePath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldTopSurfaceTexturePath_void(long pNativeObject);
	public String getOldTopSurfaceTexturePath()
	{
		String returnValue = getOldTopSurfaceTexturePath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWallSurfaceTexturePath_EVString(long pNativeObject, String path);
	public void setWallSurfaceTexturePath(String path)
	{
		String pathParamValue = path;
		setWallSurfaceTexturePath_EVString(this.nativeObject.pointer, pathParamValue);
	}
	native private String getWallSurfaceTexturePath_void(long pNativeObject);
	public String getWallSurfaceTexturePath()
	{
		String returnValue = getWallSurfaceTexturePath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOldWallSurfaceTexturePath_void(long pNativeObject);
	public String getOldWallSurfaceTexturePath()
	{
		String returnValue = getOldWallSurfaceTexturePath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTopSurfaceTextureUnitSizeX_ev_real32(long pNativeObject, float unitSizeX);
	public void setTopSurfaceTextureUnitSizeX(float unitSizeX)
	{
		float unitSizeXParamValue = unitSizeX;
		setTopSurfaceTextureUnitSizeX_ev_real32(this.nativeObject.pointer, unitSizeXParamValue);
	}
	native private float getTopSurfaceTextureUnitSizeX_void(long pNativeObject);
	public float getTopSurfaceTextureUnitSizeX()
	{
		float returnValue = getTopSurfaceTextureUnitSizeX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldTopSurfaceTextureUnitSizeX_void(long pNativeObject);
	public float getOldTopSurfaceTextureUnitSizeX()
	{
		float returnValue = getOldTopSurfaceTextureUnitSizeX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTopSurfaceTextureUnitSizeY_ev_real32(long pNativeObject, float unitSizeY);
	public void setTopSurfaceTextureUnitSizeY(float unitSizeY)
	{
		float unitSizeYParamValue = unitSizeY;
		setTopSurfaceTextureUnitSizeY_ev_real32(this.nativeObject.pointer, unitSizeYParamValue);
	}
	native private float getTopSurfaceTextureUnitSizeY_void(long pNativeObject);
	public float getTopSurfaceTextureUnitSizeY()
	{
		float returnValue = getTopSurfaceTextureUnitSizeY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldTopSurfaceTextureUnitSizeY_void(long pNativeObject);
	public float getOldTopSurfaceTextureUnitSizeY()
	{
		float returnValue = getOldTopSurfaceTextureUnitSizeY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWallSurfaceTextureUnitSizeX_ev_real32(long pNativeObject, float unitSizeX);
	public void setWallSurfaceTextureUnitSizeX(float unitSizeX)
	{
		float unitSizeXParamValue = unitSizeX;
		setWallSurfaceTextureUnitSizeX_ev_real32(this.nativeObject.pointer, unitSizeXParamValue);
	}
	native private float getWallSurfaceTextureUnitSizeX_void(long pNativeObject);
	public float getWallSurfaceTextureUnitSizeX()
	{
		float returnValue = getWallSurfaceTextureUnitSizeX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldWallSurfaceTextureUnitSizeX_void(long pNativeObject);
	public float getOldWallSurfaceTextureUnitSizeX()
	{
		float returnValue = getOldWallSurfaceTextureUnitSizeX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWallSurfaceTextureUnitSizeY_ev_real32(long pNativeObject, float unitSizeY);
	public void setWallSurfaceTextureUnitSizeY(float unitSizeY)
	{
		float unitSizeYParamValue = unitSizeY;
		setWallSurfaceTextureUnitSizeY_ev_real32(this.nativeObject.pointer, unitSizeYParamValue);
	}
	native private float getWallSurfaceTextureUnitSizeY_void(long pNativeObject);
	public float getWallSurfaceTextureUnitSizeY()
	{
		float returnValue = getWallSurfaceTextureUnitSizeY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getOldWallSurfaceTextureUnitSizeY_void(long pNativeObject);
	public float getOldWallSurfaceTextureUnitSizeY()
	{
		float returnValue = getOldWallSurfaceTextureUnitSizeY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isPixelWidth_void(long pNativeObject);
	///------------
	///------------设置线宽是否为宽线
	public boolean isPixelWidth()
	{
		boolean returnValue = isPixelWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isOldPixelWidth_void(long pNativeObject);
	public boolean isOldPixelWidth()
	{
		boolean returnValue = isOldPixelWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPixelWidth_ev_bool(long pNativeObject, boolean isPixelWidth);
	public void setPixelWidth(boolean isPixelWidth)
	{
		boolean isPixelWidthParamValue = isPixelWidth;
		setPixelWidth_ev_bool(this.nativeObject.pointer, isPixelWidthParamValue);
	}
	public GeoObjectExtensionAttribute(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoObjectExtensionAttribute(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeoObjectExtensionAttribute fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoObjectExtensionAttribute obj = null;
 		if(baseObj instanceof GeoObjectExtensionAttribute)
		{
			obj = (GeoObjectExtensionAttribute)baseObj;
		} else {
			obj = new GeoObjectExtensionAttribute(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoObjectExtensionAttribute");
			obj.increaseCast();
		}

		return obj;
	}
}
