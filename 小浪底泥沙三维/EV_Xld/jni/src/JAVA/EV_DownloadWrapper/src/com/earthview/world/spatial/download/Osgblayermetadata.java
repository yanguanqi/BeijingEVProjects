package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class Osgblayermetadata extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBLayerMetaData", new OsgblayermetadataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCOSGBLayerMetaDataProxy", new OsgblayermetadataClassFactory());
	}

	public Osgblayermetadata() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCOSGBLayerMetaDataProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.download.Osgblayermetadata".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getDatasetType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType()
	{
		int returnValue = getDatasetType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getDatasetType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType_NoVirtual()
	{
		int returnValue = getDatasetType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集的名称
	 * @return 数据集的名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取数据集的范围
	 * @return 内部对象引用，无需释放
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		long returnValue = getEnvelopeRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getEnvelopeRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef_NoVirtual()
	{
		long returnValue = getEnvelopeRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取数据集的坐标系统
	 * @return 坐标系统对象
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference_NoVirtual()
	{
		long returnValue = getSpatialReference_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	protected  void ev_clone_IDataMetaInfo_callback(long pOther)
	{
		com.earthview.world.spatial.geodataset.Idatametainfo pOtherParamValue = (pOther == 0L ? null : new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(pOtherParamValue != null)
		{
		pOtherParamValue.setDelegate(true);
		pOtherParamValue.setInstancePointer(new InstancePointer(pOther));
		IClassFactory pOtherParamValueClassFactory = GlobalClassFactoryMap.get(pOtherParamValue.getCppInstanceTypeName());
		if (pOtherParamValueClassFactory != null)
		{
			pOtherParamValue.setDelegate(true);
			pOtherParamValue = (com.earthview.world.spatial.geodataset.Idatametainfo)pOtherParamValueClassFactory.create();
			pOtherParamValue.setDelegate(true);
			pOtherParamValue.setInstancePointer(new InstancePointer(pOther));
		}
		}
		ev_clone(pOtherParamValue);
	}

	native private void ev_clone_IDataMetaInfo(long pNativeObject, long pOther);
	public void ev_clone(com.earthview.world.spatial.geodataset.Idatametainfo pOther)
	{
		long pOtherParamValue = (pOther == null ? 0L : pOther.nativeObject.pointer);
		ev_clone_IDataMetaInfo(this.nativeObject.pointer, pOtherParamValue);
	}
	native private void ev_clone_IDataMetaInfo_NoVirtual(long pNativeObject, long pOther);
	protected void ev_clone_NoVirtual(com.earthview.world.spatial.geodataset.Idatametainfo pOther)
	{
		long pOtherParamValue = (pOther == null ? 0L : pOther.nativeObject.pointer);
		ev_clone_IDataMetaInfo_NoVirtual(this.nativeObject.pointer, pOtherParamValue);
	}

	native private static void parseMetaData_CXmlFile_COSGBLayerMetaData(long xmlFile, long metadata);
	public static void parseMetaData(com.earthview.world.core.XmlFile xmlFile, com.earthview.world.spatial.download.Osgblayermetadata metadata)
	{
		long xmlFileParamValue = xmlFile.nativeObject.pointer;
		long metadataParamValue = metadata.nativeObject.pointer;
		parseMetaData_CXmlFile_COSGBLayerMetaData(xmlFileParamValue, metadataParamValue);
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
	
	native private String get_mFileExt_void(long pNativeObject);
	public String get_mFileExt()
	{
		String jniValue = get_mFileExt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mFileExt_EVString (long pNativeObject, String value);
	public void set_mFileExt(String mFileExt)
	{
		String mFileExtParamValue = mFileExt;
		
		set_mFileExt_EVString(this.nativeObject.pointer, mFileExtParamValue);
	}
	
	native private String get_mTileType_void(long pNativeObject);
	public String get_mTileType()
	{
		String jniValue = get_mTileType_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTileType_EVString (long pNativeObject, String value);
	public void set_mTileType(String mTileType)
	{
		String mTileTypeParamValue = mTileType;
		
		set_mTileType_EVString(this.nativeObject.pointer, mTileTypeParamValue);
	}
	
	native private int get_mBagLevel_void(long pNativeObject);
	public int get_mBagLevel()
	{
		int jniValue = get_mBagLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mBagLevel_ev_int32 (long pNativeObject, int value);
	public void set_mBagLevel(int mBagLevel)
	{
		int mBagLevelParamValue = mBagLevel;
		
		set_mBagLevel_ev_int32(this.nativeObject.pointer, mBagLevelParamValue);
	}
	
	native private String get_mGuid_void(long pNativeObject);
	public String get_mGuid()
	{
		String jniValue = get_mGuid_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mGuid_EVString (long pNativeObject, String value);
	public void set_mGuid(String mGuid)
	{
		String mGuidParamValue = mGuid;
		
		set_mGuid_EVString(this.nativeObject.pointer, mGuidParamValue);
	}
	
	native private double get_mMinLon_void(long pNativeObject);
	public double get_mMinLon()
	{
		double jniValue = get_mMinLon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMinLon_ev_real64 (long pNativeObject, double value);
	public void set_mMinLon(double mMinLon)
	{
		double mMinLonParamValue = mMinLon;
		
		set_mMinLon_ev_real64(this.nativeObject.pointer, mMinLonParamValue);
	}
	
	native private double get_mMinLat_void(long pNativeObject);
	public double get_mMinLat()
	{
		double jniValue = get_mMinLat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMinLat_ev_real64 (long pNativeObject, double value);
	public void set_mMinLat(double mMinLat)
	{
		double mMinLatParamValue = mMinLat;
		
		set_mMinLat_ev_real64(this.nativeObject.pointer, mMinLatParamValue);
	}
	
	native private double get_mMaxLon_void(long pNativeObject);
	public double get_mMaxLon()
	{
		double jniValue = get_mMaxLon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMaxLon_ev_real64 (long pNativeObject, double value);
	public void set_mMaxLon(double mMaxLon)
	{
		double mMaxLonParamValue = mMaxLon;
		
		set_mMaxLon_ev_real64(this.nativeObject.pointer, mMaxLonParamValue);
	}
	
	native private double get_mMaxLat_void(long pNativeObject);
	public double get_mMaxLat()
	{
		double jniValue = get_mMaxLat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMaxLat_ev_real64 (long pNativeObject, double value);
	public void set_mMaxLat(double mMaxLat)
	{
		double mMaxLatParamValue = mMaxLat;
		
		set_mMaxLat_ev_real64(this.nativeObject.pointer, mMaxLatParamValue);
	}
	
	native private int get_mBeginLevel_void(long pNativeObject);
	public int get_mBeginLevel()
	{
		int jniValue = get_mBeginLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mBeginLevel_ev_int32 (long pNativeObject, int value);
	public void set_mBeginLevel(int mBeginLevel)
	{
		int mBeginLevelParamValue = mBeginLevel;
		
		set_mBeginLevel_ev_int32(this.nativeObject.pointer, mBeginLevelParamValue);
	}
	
	native private int get_mEndLevel_void(long pNativeObject);
	public int get_mEndLevel()
	{
		int jniValue = get_mEndLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mEndLevel_ev_int32 (long pNativeObject, int value);
	public void set_mEndLevel(int mEndLevel)
	{
		int mEndLevelParamValue = mEndLevel;
		
		set_mEndLevel_ev_int32(this.nativeObject.pointer, mEndLevelParamValue);
	}
	
	native private double get_mCenterLat_void(long pNativeObject);
	public double get_mCenterLat()
	{
		double jniValue = get_mCenterLat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCenterLat_ev_real64 (long pNativeObject, double value);
	public void set_mCenterLat(double mCenterLat)
	{
		double mCenterLatParamValue = mCenterLat;
		
		set_mCenterLat_ev_real64(this.nativeObject.pointer, mCenterLatParamValue);
	}
	
	native private double get_mCenterLon_void(long pNativeObject);
	public double get_mCenterLon()
	{
		double jniValue = get_mCenterLon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCenterLon_ev_real64 (long pNativeObject, double value);
	public void set_mCenterLon(double mCenterLon)
	{
		double mCenterLonParamValue = mCenterLon;
		
		set_mCenterLon_ev_real64(this.nativeObject.pointer, mCenterLonParamValue);
	}
	
	native private double get_mCenterAlt_void(long pNativeObject);
	public double get_mCenterAlt()
	{
		double jniValue = get_mCenterAlt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCenterAlt_ev_real64 (long pNativeObject, double value);
	public void set_mCenterAlt(double mCenterAlt)
	{
		double mCenterAltParamValue = mCenterAlt;
		
		set_mCenterAlt_ev_real64(this.nativeObject.pointer, mCenterAltParamValue);
	}
	
	native private double get_mOriginX_void(long pNativeObject);
	public double get_mOriginX()
	{
		double jniValue = get_mOriginX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mOriginX_ev_real64 (long pNativeObject, double value);
	public void set_mOriginX(double mOriginX)
	{
		double mOriginXParamValue = mOriginX;
		
		set_mOriginX_ev_real64(this.nativeObject.pointer, mOriginXParamValue);
	}
	
	native private double get_mOriginY_void(long pNativeObject);
	public double get_mOriginY()
	{
		double jniValue = get_mOriginY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mOriginY_ev_real64 (long pNativeObject, double value);
	public void set_mOriginY(double mOriginY)
	{
		double mOriginYParamValue = mOriginY;
		
		set_mOriginY_ev_real64(this.nativeObject.pointer, mOriginYParamValue);
	}
	
	native private double get_mOriginZ_void(long pNativeObject);
	public double get_mOriginZ()
	{
		double jniValue = get_mOriginZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mOriginZ_ev_real64 (long pNativeObject, double value);
	public void set_mOriginZ(double mOriginZ)
	{
		double mOriginZParamValue = mOriginZ;
		
		set_mOriginZ_ev_real64(this.nativeObject.pointer, mOriginZParamValue);
	}
	
	native private String get_mSRS_void(long pNativeObject);
	public String get_mSRS()
	{
		String jniValue = get_mSRS_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mSRS_EVString (long pNativeObject, String value);
	public void set_mSRS(String mSRS)
	{
		String mSRSParamValue = mSRS;
		
		set_mSRS_EVString(this.nativeObject.pointer, mSRSParamValue);
	}
	
	native private String get_mTag_void(long pNativeObject);
	public String get_mTag()
	{
		String jniValue = get_mTag_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTag_EVString (long pNativeObject, String value);
	public void set_mTag(String mTag)
	{
		String mTagParamValue = mTag;
		
		set_mTag_EVString(this.nativeObject.pointer, mTagParamValue);
	}
	
	native private long get_mLevels_void(long pNativeObject);
	public com.earthview.world.spatial.download.Osgblayerlevelvector get_mLevels()
	{
		long jniValue = get_mLevels_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.download.Osgblayerlevelvector __returnValue = new com.earthview.world.spatial.download.Osgblayerlevelvector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "COSGBLayerLevelVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.Osgblayerlevelvector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COSGBLayerLevelVector");
		}
		return __returnValue;
	}
	
	native private void set_mLevels_COSGBLayerLevelVector (long pNativeObject, long value);
	public void set_mLevels(com.earthview.world.spatial.download.Osgblayerlevelvector mLevels)
	{
		long mLevelsParamValue = mLevels.nativeObject.pointer;
		
		set_mLevels_COSGBLayerLevelVector(this.nativeObject.pointer, mLevelsParamValue);
	}
	
	native private long get_mTopTiles_void(long pNativeObject);
	public com.earthview.world.spatial.download.Osgbtoptilevector get_mTopTiles()
	{
		long jniValue = get_mTopTiles_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.download.Osgbtoptilevector __returnValue = new com.earthview.world.spatial.download.Osgbtoptilevector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "COSGBTopTileVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.Osgbtoptilevector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COSGBTopTileVector");
		}
		return __returnValue;
	}
	
	native private void set_mTopTiles_COSGBTopTileVector (long pNativeObject, long value);
	public void set_mTopTiles(com.earthview.world.spatial.download.Osgbtoptilevector mTopTiles)
	{
		long mTopTilesParamValue = mTopTiles.nativeObject.pointer;
		
		set_mTopTiles_COSGBTopTileVector(this.nativeObject.pointer, mTopTilesParamValue);
	}
	
	native private int get_mDatasetType_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.EVDatasetType get_mDatasetType()
	{
		int jniValue = get_mDatasetType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(jniValue);
	}
	
	native private void set_mDatasetType_EVDatasetType (long pNativeObject, int value);
	public void set_mDatasetType(com.earthview.world.spatial.geodataset.EVDatasetType mDatasetType)
	{
		int mDatasetTypeParamValue = mDatasetType.getValue();
		
		set_mDatasetType_EVDatasetType(this.nativeObject.pointer, mDatasetTypeParamValue);
	}
	
	public Osgblayermetadata(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Osgblayermetadata(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_IDataMetaInfo(long pNativeObject, String method);
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_IDataMetaInfo(this.nativeObject.pointer, "ev_clone_IDataMetaInfo_callback");
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static Osgblayermetadata fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Osgblayermetadata obj = null;
 		if(baseObj instanceof Osgblayermetadata)
		{
			obj = (Osgblayermetadata)baseObj;
		} else {
			obj = new Osgblayermetadata(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COSGBLayerMetaData");
			obj.increaseCast();
		}

		return obj;
	}
}
