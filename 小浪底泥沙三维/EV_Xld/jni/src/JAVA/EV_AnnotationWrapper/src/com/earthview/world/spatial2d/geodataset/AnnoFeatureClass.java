package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnoFeatureClass extends com.earthview.world.spatial.geodataset.Ifeatureclass {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass", new AnnoFeatureClassClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCAnnoFeatureClassProxy", new AnnoFeatureClassClassFactory());
	}

	native private int getType_void(long pNativeObject);
	/**
	 * »ñÈ¡Êı¾İ¼¯ÀàĞÍ
	 * @param  
	 * @return Êı¾İ¼¯ÀàĞÍ
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDatasetType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}

	native private String getName_void(long pNativeObject);
	/**
	 * »ñÈ¡Êı¾İ¼¯Ãû³Æ
	 * @param  
	 * @return Êı¾İ¼¯Ãû³Æ
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

	native private String getDataVersion_void(long pNativeObject);
	/**
	 * »ñÈ¡Êı¾İ¼¯°æ±¾ºÅ£¬¸Ã·½·¨ÊÇÈ·ÈÏÊı¾İ±ä¸üÇé¿ö¡£
	 * @param  
	 * @return Êı¾İ¼¯°æ±¾ºÅ
	 */
	public ULongPointer getDataVersion()
	{
		String returnValue = getDataVersion_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String getDataVersion_void_NoVirtual(long pNativeObject);
	protected ULongPointer getDataVersion_NoVirtual()
	{
		String returnValue = getDataVersion_void_NoVirtual(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * »ñÈ¡Êı¾İ¼¯ÃèÊö
	 * @param  
	 * @return Êı¾İ¼¯ÃèÊö
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getUpdateTime_void(long pNativeObject);
	/**
	 * »ñÈ¡Êı¾İ¼¯¸üĞÂÊ±¼ä
	 * @param  
	 * @return Êı¾İ¼¯¸üĞÂÊ±¼ä
	 */
	public String getUpdateTime()
	{
		String returnValue = getUpdateTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getUpdateTime_void_NoVirtual(long pNativeObject);
	protected String getUpdateTime_NoVirtual()
	{
		String returnValue = getUpdateTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean hasSubDataset_void(long pNativeObject);
	/**
	 * ÅĞ¶ÏÊÇ·ñ°üº¬×ÓÊı¾İ¼¯
	 * @param  
	 * @return ÊÇ£¬·µ»Øtrue;·ñÔò£¬·µ»Øfalse
	 */
	public boolean hasSubDataset()
	{
		boolean returnValue = hasSubDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasSubDataset_void_NoVirtual(long pNativeObject);
	protected boolean hasSubDataset_NoVirtual()
	{
		boolean returnValue = hasSubDataset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDataSourceRef_void(long pNativeObject);
	/**
	 * »ñÈ¡Êı¾İ¼¯ËùÔÚÊı¾İÔ´¶ÔÏó£¬¸ÃÖµÎªÒıÓÃ¶ÔÏóÖ¸Õë¡£
	 * @param  
	 * @return Êı¾İ¼¯ËùÔÚÊı¾İÔ´¶ÔÏóÖ¸Õë
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef()
	{
		long returnValue = getDataSourceRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long getDataSourceRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef_NoVirtual()
	{
		long returnValue = getDataSourceRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	native private boolean canEdit_void(long pNativeObject);
	/**
	 * ÅĞ¶ÏÊı¾İ¼¯ÊÇ·ñ¾ßÓĞ±à¼­ÄÜÁ¦
	 * @param  
	 * @return ÊÇ£¬·µ»Øtrue;·ñÔò£¬·µ»Øfalse
	 */
	public boolean canEdit()
	{
		boolean returnValue = canEdit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canEdit_void_NoVirtual(long pNativeObject);
	protected boolean canEdit_NoVirtual()
	{
		boolean returnValue = canEdit_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isEditing_void(long pNativeObject);
	/**
	 * ÅĞ¶ÏÊı¾İ¼¯ÊÇ·ñ´¦ÔÚ±à¼­×´Ì¬
	 * @param  
	 * @return ÊÇ£¬·µ»Øtrue;·ñÔò£¬·µ»Øfalse
	 */
	public boolean isEditing()
	{
		boolean returnValue = isEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEditing_void_NoVirtual(long pNativeObject);
	protected boolean isEditing_NoVirtual()
	{
		boolean returnValue = isEditing_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean startEditing_ev_bool(long pNativeObject, boolean withUndo);
	/**
	 * ¿ªÊ¼±à¼­£¬ÓÃÓÚ±êÊ¶Êı¾İ¼¯´¦ÔÚ±à¼­×´Ì¬£¬²¢¸ù¾İ²ÎÊı£¬ÉèÖÃÏà¹Ø±à¼­¶ÔÏó¡£
	 * @param withUndo È·¶¨ÊÇ·ñ¿ªÆôUndo¹¦ÄÜ
	 * @return ¿ªÆô±à¼­³É¹¦£¬·µ»Øtrue£»·ñÔò£¬·µ»Øfalse
	 */
	public boolean startEditing(boolean withUndo)
	{
		boolean withUndoParamValue = withUndo;
		boolean returnValue = startEditing_ev_bool(this.nativeObject.pointer, withUndoParamValue);
		return returnValue;
	}
	native private boolean startEditing_ev_bool_NoVirtual(long pNativeObject, boolean withUndo);
	protected boolean startEditing_NoVirtual(boolean withUndo)
	{
		boolean withUndoParamValue = withUndo;
		boolean returnValue = startEditing_ev_bool_NoVirtual(this.nativeObject.pointer, withUndoParamValue);
		return returnValue;
	}

	native private boolean stopEditing_ev_bool(long pNativeObject, boolean isSave);
	/**
	 * ½áÊø±à¼­£¬ÓÃÓÚ±êÊ¶Êı¾İ¼¯½áÊø±à¼­£¬¸ù¾İ²ÎÊı£¬È·ÊµÊÇ·ñ±£´æÊı¾İ¡£
	 * @param isSave ĞèÒª±£´æ±à¼­Êı¾İ£¬ÉèÖÃtrue;·ñÔò£¬ÉèÖÃfalse
	 * @return ½áÊø±à¼­³É¹¦£¬·µ»Øtrue;·ñÔò£¬·µ»Øfalse
	 */
	public boolean stopEditing(boolean isSave)
	{
		boolean isSaveParamValue = isSave;
		boolean returnValue = stopEditing_ev_bool(this.nativeObject.pointer, isSaveParamValue);
		return returnValue;
	}
	native private boolean stopEditing_ev_bool_NoVirtual(long pNativeObject, boolean isSave);
	protected boolean stopEditing_NoVirtual(boolean isSave)
	{
		boolean isSaveParamValue = isSave;
		boolean returnValue = stopEditing_ev_bool_NoVirtual(this.nativeObject.pointer, isSaveParamValue);
		return returnValue;
	}

	native private boolean isBeginEditingOperation_void(long pNativeObject);
	/**
	 * ÅĞ¶ÏÊı¾İ¼¯ÊÇ·ñ´¦ÔÚ±à¼­²Ù×÷×´Ì¬
	 * @param  
	 * @return ÊÇ£¬·µ»Øtrue;·ñÔò£¬·µ»Øfalse
	 */
	public boolean isBeginEditingOperation()
	{
		boolean returnValue = isBeginEditingOperation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isBeginEditingOperation_void_NoVirtual(long pNativeObject);
	protected boolean isBeginEditingOperation_NoVirtual()
	{
		boolean returnValue = isBeginEditingOperation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean beginEditingOperation_void(long pNativeObject);
	/**
	 * ¿ªÆô±à¼­²Ù×÷£¬ÓÃÓÚ±êÊ¶Êı¾İ¼¯±à¼­²Ù×÷¡£ÔÚµ÷ÓÃendEditingOperation²Ù×÷ºó£¬°ÑÁ½´Î²Ù×÷Ö®¼äµÄ±à¼­£¬×÷ÎªÒ»´Î±à¼­×´Ì¬Ìá½»¡£
	 * @param  
	 * @return ¿ªÆô±à¼­²Ù×÷³É¹¦£¬·µ»Øtrue;·ñÔò£¬·µ»Øfalse
	 */
	public boolean beginEditingOperation()
	{
		boolean returnValue = beginEditingOperation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean beginEditingOperation_void_NoVirtual(long pNativeObject);
	protected boolean beginEditingOperation_NoVirtual()
	{
		boolean returnValue = beginEditingOperation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean endEditingOperation_ev_bool(long pNativeObject, boolean isConfirm);
	/**
	 * ½áÊø±à¼­²Ù×÷£¬ÓÃÓÚ±êÊ¶Êı¾İ¼¯±à¼­²Ù×÷½áÊø¡£ÔÚµ÷ÓÃendEditingOperation²Ù×÷ºó£¬°ÑÁ½´Î²Ù×÷Ö®¼äµÄ±à¼­£¬×÷ÎªÒ»´Î±à¼­×´Ì¬Ìá½»¡£
	 * @param isConfirm Ìá½»²Ù×÷£¬ÉèÖÃtrue;·ñÔò£¬ÉèÖÃfalse
	 * @return ½áÊø±à¼­²Ù×÷³É¹¦£¬·µ»Øtrue;·ñÔò£¬·µ»Øfalse
	 */
	public boolean endEditingOperation(boolean isConfirm)
	{
		boolean isConfirmParamValue = isConfirm;
		boolean returnValue = endEditingOperation_ev_bool(this.nativeObject.pointer, isConfirmParamValue);
		return returnValue;
	}
	native private boolean endEditingOperation_ev_bool_NoVirtual(long pNativeObject, boolean isConfirm);
	protected boolean endEditingOperation_NoVirtual(boolean isConfirm)
	{
		boolean isConfirmParamValue = isConfirm;
		boolean returnValue = endEditingOperation_ev_bool_NoVirtual(this.nativeObject.pointer, isConfirmParamValue);
		return returnValue;
	}

	native private int getFeatureClassType_void(long pNativeObject);
	/**
	 * »ñÈ¡ÒªËØ¼¯ÀàĞÍ
	 * @param  
	 * @return ·µ»ØÒªËØ¼¯ÀàĞÍ
	 */
	public com.earthview.world.spatial.geodataset.EVFeatureClassType getFeatureClassType()
	{
		int returnValue = getFeatureClassType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVFeatureClassType.toEnum(returnValue);
	}
	native private int getFeatureClassType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVFeatureClassType getFeatureClassType_NoVirtual()
	{
		int returnValue = getFeatureClassType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVFeatureClassType.toEnum(returnValue);
	}

	native private long getFieldsRef_void(long pNativeObject);
	/**
	 * »ñÈ¡ÒªËØ¼¯×Ö¶ÎĞÅÏ¢
	 * @param  
	 * @return ·µ»ØÒªËØ¼¯×Ö¶ÎĞÅÏ¢
	 */
	public com.earthview.world.spatial.geodataset.Ifields getFieldsRef()
	{
		long returnValue = getFieldsRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}
	native private long getFieldsRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifields getFieldsRef_NoVirtual()
	{
		long returnValue = getFieldsRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}

	native private long getFieldCount_void(long pNativeObject);
	/**
	 * »ñÈ¡ÒªËØ¼¯×Ö¶ÎÊıÁ¿
	 * @param  
	 * @return ·µ»ØÒªËØ¼¯×Ö¶ÎÊıÁ¿
	 */
	public long getFieldCount()
	{
		long returnValue = getFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFieldCount_void_NoVirtual(long pNativeObject);
	protected long getFieldCount_NoVirtual()
	{
		long returnValue = getFieldCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getFieldRef_ev_uint32(long pNativeObject, long index);
	/**
	 * Í¨¹ıË÷Òı»ñÈ¡×Ö¶Î
	 * @param index Ë÷Òı´¦
	 * @return ·µ»ØË÷Òı´¦ÒªËØ¼¯×Ö¶Î
	 */
	public com.earthview.world.spatial.geodataset.Ifield getFieldRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long getFieldRef_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.geodataset.Ifield getFieldRef_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldRef_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	native private int findField_EVString(long pNativeObject, String fieldName);
	/**
	 * Í¨¹ıÃû³Æ²éÕÒ×Ö¶Î
	 * @param fieldName ×Ö¶ÎÃû
	 * @return ·µ»Ø×Ö¶ÎË÷Òı
	 */
	public int findField(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField_EVString(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}
	native private int findField_EVString_NoVirtual(long pNativeObject, String fieldName);
	protected int findField_NoVirtual(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField_EVString_NoVirtual(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}

	native private long getGeometryField_void(long pNativeObject);
	/**
	 * »ñÈ¡¼ÇÂ¼ÒªËØ¼¯¼¸ºÎÌåĞÅÏ¢µÄ×Ö¶Î
	 * @param  
	 * @return ·µ»ØÒªËØ¼¯¼¸ºÎÌåĞÅÏ¢×Ö¶Î
	 */
	public com.earthview.world.spatial.geodataset.Ifield getGeometryField()
	{
		long returnValue = getGeometryField_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long getGeometryField_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifield getGeometryField_NoVirtual()
	{
		long returnValue = getGeometryField_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	native private long getIDField_void(long pNativeObject);
	/**
	 * »ñÈ¡¼ÇÂ¼ÒªËØ¼¯IDĞÅÏ¢µÄ×Ö¶Î
	 * @param  
	 * @return ·µ»ØÒªËØ¼¯IDĞÅÏ¢×Ö¶Î
	 */
	public com.earthview.world.spatial.geodataset.Ifield getIDField()
	{
		long returnValue = getIDField_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long getIDField_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifield getIDField_NoVirtual()
	{
		long returnValue = getIDField_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * »ñÈ¡ÒªËØ¼¯×îĞ¡Íâ½Ó¾ØĞÎ
	 * @param  
	 * @return ·µ»ØÒªËØ¼¯×îĞ¡Íâ½Ó¾ØĞÎ
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

	native private long getSpatialReferenceRef_void(long pNativeObject);
	/**
	 * »ñÈ¡ÒªËØ¼¯¿Õ¼ä²Î¿¼ĞÅÏ¢
	 * @param  
	 * @return ·µ»ØÒªËØ¼¯¿Õ¼ä²Î¿¼ĞÅÏ¢
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef()
	{
		long returnValue = getSpatialReferenceRef_void(this.nativeObject.pointer);
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
	native private long getSpatialReferenceRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef_NoVirtual()
	{
		long returnValue = getSpatialReferenceRef_void_NoVirtual(this.nativeObject.pointer);
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

	native private long getFeature_ev_uint32(long pNativeObject, long id);
	/**
	 * Í¨¹ıIDºÅ»ñÈ¡ÒªËØ
	 * @param id IDºÅ
	 * @return ·µ»ØÒªËØ
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getFeature(long id)
	{
		long idParamValue = id;
		long returnValue = getFeature_ev_uint32(this.nativeObject.pointer, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long getFeature_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected com.earthview.world.spatial.geodataset.Ifeature getFeature_NoVirtual(long id)
	{
		long idParamValue = id;
		long returnValue = getFeature_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}

	native private long getFeatureCount_IQueryFilter(long pNativeObject, long filter);
	/**
	 * Í¨¹ı¹ıÂËÌí¼Ó»ñÈ¡ÒªËØÊıÁ¿
	 * @param filter ¹ıÂËÆ÷
	 * @return ·µ»ØÒªËØÊıÁ¿
	 */
	public long getFeatureCount(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = getFeatureCount_IQueryFilter(this.nativeObject.pointer, filterParamValue);
		return returnValue;
	}
	native private long getFeatureCount_IQueryFilter_NoVirtual(long pNativeObject, long filter);
	protected long getFeatureCount_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = getFeatureCount_IQueryFilter_NoVirtual(this.nativeObject.pointer, filterParamValue);
		return returnValue;
	}

	native private long createFeatureBuffer_void(long pNativeObject);
	/**
	 * ÔÚÄÚ´æÖĞ´´½¨ÒªËØ
	 * @param  
	 * @return ·µ»Ø´´½¨µÄÒªËØ
	 */
	public com.earthview.world.spatial.geodataset.Ifeature createFeatureBuffer()
	{
		long returnValue = createFeatureBuffer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long createFeatureBuffer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeature createFeatureBuffer_NoVirtual()
	{
		long returnValue = createFeatureBuffer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}

	native private boolean insert_IFeature(long pNativeObject, long feature);
	/**
	 * ²åÈëÒªËØ
	 * @param feature ÒªËØ
	 * @return Èô³É¹¦·µ»Øtrue£»·ñÔò·µ»Øfalse
	 */
	public boolean insert(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		boolean returnValue = insert_IFeature(this.nativeObject.pointer, featureParamValue);
		return returnValue;
	}
	native private boolean insert_IFeature_NoVirtual(long pNativeObject, long feature);
	protected boolean insert_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		boolean returnValue = insert_IFeature_NoVirtual(this.nativeObject.pointer, featureParamValue);
		return returnValue;
	}

	native private long insertFeatureBuffer_IFeature(long pNativeObject, long buffer);
	/**
	 * ²åÈëÄÚ´æ»º³åÇøÒªËØ
	 * @param buffer ÒªËØ
	 * @return ·µ»Ø½á¹û´úÂë
	 */
	public long insertFeatureBuffer(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		long returnValue = insertFeatureBuffer_IFeature(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}
	native private long insertFeatureBuffer_IFeature_NoVirtual(long pNativeObject, long buffer);
	protected long insertFeatureBuffer_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		long returnValue = insertFeatureBuffer_IFeature_NoVirtual(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}

	native private boolean update_IFeature(long pNativeObject, long buffer);
	/**
	 * ¸üĞÂÒªËØ
	 * @param buffer ÒªËØ
	 * @return Èô³É¹¦·µ»Øtrue£»·ñÔò·µ»Øfalse
	 */
	public boolean update(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		boolean returnValue = update_IFeature(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}
	native private boolean update_IFeature_NoVirtual(long pNativeObject, long buffer);
	protected boolean update_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		boolean returnValue = update_IFeature_NoVirtual(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}

	native private boolean deleteFeature_ev_uint32(long pNativeObject, long id);
	/**
	 * Í¨¹ıIDÉ¾³ıÒªËØ
	 * @param id IDºÅ
	 * @return Èô³É¹¦·µ»Øtrue£»·ñÔò·µ»Øfalse
	 */
	public boolean deleteFeature(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteFeature_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private boolean deleteFeature_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected boolean deleteFeature_NoVirtual(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteFeature_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}

	native private long query_IQueryFilter(long pNativeObject, long filter);
	/**
	 * ²éÑ¯
	 * @param filter ¹ıÂËÆ÷
	 * @return ·µ»Øµü´úÆ÷
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureiterator query(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = query_IQueryFilter(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureiterator __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureiterator(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureIterator");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureiterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureIterator");
		}
		return __returnValue;
	}
	native private long query_IQueryFilter_NoVirtual(long pNativeObject, long filter);
	protected com.earthview.world.spatial.geodataset.Ifeatureiterator query_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = query_IQueryFilter_NoVirtual(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureiterator __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureiterator(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureIterator");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureiterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureIterator");
		}
		return __returnValue;
	}

	native private long nextFeature_CAnnoIterator(long pNativeObject, long iterator);
	/**
	 * Í¨¹ıµü´úÆ÷²éÑ¯ÏÂÒ»ÌõÒªËØ
	 * @param iterator µü´úÆ÷
	 * @return ·µ»ØÒªËØ
	 */
	public com.earthview.world.spatial.geodataset.Ifeature nextFeature(com.earthview.world.spatial2d.geodataset.AnnoIterator iterator)
	{
		long iteratorParamValue = (iterator == null ? 0L : iterator.nativeObject.pointer);
		long returnValue = nextFeature_CAnnoIterator(this.nativeObject.pointer, iteratorParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long select_IQueryFilter(long pNativeObject, long filter);
	/**
	 * Í¨¹ı¹ıÂËÆ÷Ñ¡Ôñ
	 * @param filter ¹ıÂËÆ÷
	 * @return ·µ»ØÑ¡Ôñ¼¯
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureselection select(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = select_IQueryFilter(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureselection __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureSelection");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureselection)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureSelection");
		}
		return __returnValue;
	}
	native private long select_IQueryFilter_NoVirtual(long pNativeObject, long filter);
	protected com.earthview.world.spatial.geodataset.Ifeatureselection select_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = select_IQueryFilter_NoVirtual(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureselection __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureSelection");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureselection)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureSelection");
		}
		return __returnValue;
	}

	protected  void endQuery_CAnnoIterator_callback(long iterator)
	{
		com.earthview.world.spatial2d.geodataset.AnnoIterator iteratorParamValue = (iterator == 0L ? null : new com.earthview.world.spatial2d.geodataset.AnnoIterator(CreatedWhenConstruct.CWC_NotToCreate));
		if(iteratorParamValue != null)
		{
		iteratorParamValue.setDelegate(true);
		iteratorParamValue.setInstancePointer(new InstancePointer(iterator));
		IClassFactory iteratorParamValueClassFactory = GlobalClassFactoryMap.get(iteratorParamValue.getCppInstanceTypeName());
		if (iteratorParamValueClassFactory != null)
		{
			iteratorParamValue.setDelegate(true);
			iteratorParamValue = (com.earthview.world.spatial2d.geodataset.AnnoIterator)iteratorParamValueClassFactory.create();
			iteratorParamValue.setDelegate(true);
			iteratorParamValue.setInstancePointer(new InstancePointer(iterator));
		}
		}
		endQuery(iteratorParamValue);
	}

	native private void endQuery_CAnnoIterator(long pNativeObject, long iterator);
	/**
	 * Í£Ö¹Ö¸¶¨µü´úÆ÷µÄ²éÑ¯
	 * @param iterator µü´úÆ÷
	 */
	public void endQuery(com.earthview.world.spatial2d.geodataset.AnnoIterator iterator)
	{
		long iteratorParamValue = (iterator == null ? 0L : iterator.nativeObject.pointer);
		endQuery_CAnnoIterator(this.nativeObject.pointer, iteratorParamValue);
	}
	native private void endQuery_CAnnoIterator_NoVirtual(long pNativeObject, long iterator);
	protected void endQuery_NoVirtual(com.earthview.world.spatial2d.geodataset.AnnoIterator iterator)
	{
		long iteratorParamValue = (iterator == null ? 0L : iterator.nativeObject.pointer);
		endQuery_CAnnoIterator_NoVirtual(this.nativeObject.pointer, iteratorParamValue);
	}

	native private long createTableProxy_void(long pNativeObject);
	/**
	 * ´´½¨Ò»¸öÊı¾İ±íµÄ´úÀí¶ÔÏó¡£
	 * @return ·µ»ØÊı¾İ±í
	 */
	public com.earthview.world.spatial.geodataset.Itableproxy createTableProxy()
	{
		long returnValue = createTableProxy_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Itableproxy __returnValue = new com.earthview.world.spatial.geodataset.Itableproxy(CreatedWhenConstruct.CWC_NotToCreate, "ITableProxy");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Itableproxy)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ITableProxy");
		}
		return __returnValue;
	}
	native private long createTableProxy_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Itableproxy createTableProxy_NoVirtual()
	{
		long returnValue = createTableProxy_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Itableproxy __returnValue = new com.earthview.world.spatial.geodataset.Itableproxy(CreatedWhenConstruct.CWC_NotToCreate, "ITableProxy");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Itableproxy)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ITableProxy");
		}
		return __returnValue;
	}

	protected  boolean deleteField_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = deleteField(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteField_ev_uint32(long pNativeObject, long index);
	/**
	 * É¾³ıÖ¸¶¨Ë÷Òı´¦µÄ×Ö¶Î
	 * @param index Ö¸¶¨Ë÷Òı
	 * @return Èô³É¹¦·µ»Øtrue£»·ñÔò·µ»Øfalse
	 */
	public boolean deleteField(long index)
	{
		long indexParamValue = index;
		boolean returnValue = deleteField_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean deleteField_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean deleteField_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = deleteField_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private boolean fromBinary_CDataStream(long pNativeObject, long stream);
	/**
	 * ´ÓÁ÷»ñÈ¡ÒªËØ¼¯ĞÅÏ¢
	 * @param  
	 * @return Èô³É¹¦·µ»Øtrue£»·ñÔò·µ»Øfalse
	 */
	public boolean fromBinary(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = fromBinary_CDataStream(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}
	native private int getGeometryType_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		int returnValue = getGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}
	native private int getGeometryType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.EVGeometryType getGeometryType_NoVirtual()
	{
		int returnValue = getGeometryType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}

	native private double getScale_void(long pNativeObject);
	public double getScale()
	{
		double returnValue = getScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	public AnnoFeatureClass(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnnoFeatureClass(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * è·å–ç©ºé—´ç´¢å¼•ç±»å‹æšä¸¾
	 * @return ç©ºé—´ç´¢å¼•ç±»å‹æšä¸¾
	 */
	public com.earthview.world.spatial.geodataset.EVSpatialIndexEnum getSpatialIndexEnum()
	{
		return super.getSpatialIndexEnum_NoVirtual();
	}
	/**
	 * ä¸ºæ•°æ®é›†ï¼Œåˆ›å»ºæŒ‡å®šç©ºé—´ç´¢å¼•
	 * @param spaIndex æŒ‡å®šç©ºé—´ç´¢å¼•ç±»å‹
	 * @return tureï¼ŒæˆåŠŸï¼›falseï¼Œå¤±è´¥
	 */
	public boolean createSpatialIndex(com.earthview.world.spatial.geodataset.EVSpatialIndexEnum spaIndex)
	{
		return super.createSpatialIndex_NoVirtual(spaIndex);
	}
	/**
	 * é‡å»ºç©ºé—´ç´¢å¼•
	 * @return trueï¼ŒæˆåŠŸï¼›falseï¼Œå¤±è´¥
	 */
	public boolean rebulidSpatialIndex()
	{
		return super.rebulidSpatialIndex_NoVirtual();
	}
	/**
	 * åˆ é™¤ç©ºé—´ç´¢å¼•
	 * @return trueï¼ŒæˆåŠŸï¼›falseï¼Œå¤±è´¥
	 */
	public boolean deleteSpatialIndex()
	{
		return super.deleteSpatialIndex_NoVirtual();
	}
	/**
	 * æ·»åŠ å­—æ®µ
	 * @param field æŒ‡å®šç´¢å¼•
	 * @return tureï¼ŒæˆåŠŸï¼›falseï¼Œå¤±è´¥
	 */
	public boolean addField(com.earthview.world.spatial.geodataset.Ifield field)
	{
		return super.addField_NoVirtual(field);
	}
	/**
	 * åˆ é™¤æŒ‡å®šå­—æ®µ
	 * @param field æŒ‡å®šå­—æ®µ
	 * @return tureï¼ŒæˆåŠŸï¼›falseï¼Œå¤±è´¥
	 */
	public boolean deleteField(com.earthview.world.spatial.geodataset.Ifield field)
	{
		return super.deleteField_NoVirtual(field);
	}
	
	native protected void register_endQuery_CAnnoIterator(long pNativeObject, String method);
	native protected void register_deleteField_ev_uint32(long pNativeObject, String method);
	native protected void register_getFeatureClassType_void(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_getFieldsRef_void(long pNativeObject, String method);
	native protected void register_getFieldCount_void(long pNativeObject, String method);
	native protected void register_getFieldRef_ev_uint32(long pNativeObject, String method);
	native protected void register_findField_EVString(long pNativeObject, String method);
	native protected void register_getGeometryField_void(long pNativeObject, String method);
	native protected void register_getIDField_void(long pNativeObject, String method);
	native protected void register_getSpatialIndexEnum_void(long pNativeObject, String method);
	native protected void register_getFeature_ev_uint32(long pNativeObject, String method);
	native protected void register_query_IQueryFilter(long pNativeObject, String method);
	native protected void register_select_IQueryFilter(long pNativeObject, String method);
	native protected void register_getFeatureCount_IQueryFilter(long pNativeObject, String method);
	native protected void register_createSpatialIndex_EVSpatialIndexEnum(long pNativeObject, String method);
	native protected void register_rebulidSpatialIndex_void(long pNativeObject, String method);
	native protected void register_deleteSpatialIndex_void(long pNativeObject, String method);
	native protected void register_addField_IField(long pNativeObject, String method);
	native protected void register_deleteField_IField(long pNativeObject, String method);
	native protected void register_createFeatureBuffer_void(long pNativeObject, String method);
	native protected void register_insert_IFeature(long pNativeObject, String method);
	native protected void register_insertFeatureBuffer_IFeature(long pNativeObject, String method);
	native protected void register_update_IFeature(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReferenceRef_void(long pNativeObject, String method);
	native protected void register_deleteFeature_ev_uint32(long pNativeObject, String method);
	native protected void register_createTableProxy_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getDataVersion_void(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_getUpdateTime_void(long pNativeObject, String method);
	native protected void register_hasSubDataset_void(long pNativeObject, String method);
	native protected void register_getDataSourceRef_void(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_bool(long pNativeObject, String method);
	native protected void register_stopEditing_ev_bool(long pNativeObject, String method);
	native protected void register_isBeginEditingOperation_void(long pNativeObject, String method);
	native protected void register_beginEditingOperation_void(long pNativeObject, String method);
	native protected void register_endEditingOperation_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_endQuery_CAnnoIterator(this.nativeObject.pointer, "endQuery_CAnnoIterator_callback");
			this.register_deleteField_ev_uint32(this.nativeObject.pointer, "deleteField_ev_uint32_callback");
			this.register_getFeatureClassType_void(this.nativeObject.pointer, "getFeatureClassType_void_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_getFieldsRef_void(this.nativeObject.pointer, "getFieldsRef_void_callback");
			this.register_getFieldCount_void(this.nativeObject.pointer, "getFieldCount_void_callback");
			this.register_getFieldRef_ev_uint32(this.nativeObject.pointer, "getFieldRef_ev_uint32_callback");
			this.register_findField_EVString(this.nativeObject.pointer, "findField_EVString_callback");
			this.register_getGeometryField_void(this.nativeObject.pointer, "getGeometryField_void_callback");
			this.register_getIDField_void(this.nativeObject.pointer, "getIDField_void_callback");
			this.register_getSpatialIndexEnum_void(this.nativeObject.pointer, "getSpatialIndexEnum_void_callback");
			this.register_getFeature_ev_uint32(this.nativeObject.pointer, "getFeature_ev_uint32_callback");
			this.register_query_IQueryFilter(this.nativeObject.pointer, "query_IQueryFilter_callback");
			this.register_select_IQueryFilter(this.nativeObject.pointer, "select_IQueryFilter_callback");
			this.register_getFeatureCount_IQueryFilter(this.nativeObject.pointer, "getFeatureCount_IQueryFilter_callback");
			this.register_createSpatialIndex_EVSpatialIndexEnum(this.nativeObject.pointer, "createSpatialIndex_EVSpatialIndexEnum_callback");
			this.register_rebulidSpatialIndex_void(this.nativeObject.pointer, "rebulidSpatialIndex_void_callback");
			this.register_deleteSpatialIndex_void(this.nativeObject.pointer, "deleteSpatialIndex_void_callback");
			this.register_addField_IField(this.nativeObject.pointer, "addField_IField_callback");
			this.register_deleteField_IField(this.nativeObject.pointer, "deleteField_IField_callback");
			this.register_createFeatureBuffer_void(this.nativeObject.pointer, "createFeatureBuffer_void_callback");
			this.register_insert_IFeature(this.nativeObject.pointer, "insert_IFeature_callback");
			this.register_insertFeatureBuffer_IFeature(this.nativeObject.pointer, "insertFeatureBuffer_IFeature_callback");
			this.register_update_IFeature(this.nativeObject.pointer, "update_IFeature_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReferenceRef_void(this.nativeObject.pointer, "getSpatialReferenceRef_void_callback");
			this.register_deleteFeature_ev_uint32(this.nativeObject.pointer, "deleteFeature_ev_uint32_callback");
			this.register_createTableProxy_void(this.nativeObject.pointer, "createTableProxy_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getDataVersion_void(this.nativeObject.pointer, "getDataVersion_void_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_getUpdateTime_void(this.nativeObject.pointer, "getUpdateTime_void_callback");
			this.register_hasSubDataset_void(this.nativeObject.pointer, "hasSubDataset_void_callback");
			this.register_getDataSourceRef_void(this.nativeObject.pointer, "getDataSourceRef_void_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_startEditing_ev_bool(this.nativeObject.pointer, "startEditing_ev_bool_callback");
			this.register_stopEditing_ev_bool(this.nativeObject.pointer, "stopEditing_ev_bool_callback");
			this.register_isBeginEditingOperation_void(this.nativeObject.pointer, "isBeginEditingOperation_void_callback");
			this.register_beginEditingOperation_void(this.nativeObject.pointer, "beginEditingOperation_void_callback");
			this.register_endEditingOperation_ev_bool(this.nativeObject.pointer, "endEditingOperation_ev_bool_callback");
		}
	}
	
	public static AnnoFeatureClass fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnnoFeatureClass obj = null;
 		if(baseObj instanceof AnnoFeatureClass)
		{
			obj = (AnnoFeatureClass)baseObj;
		} else {
			obj = new AnnoFeatureClass(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnnoFeatureClass");
			obj.increaseCast();
		}

		return obj;
	}
}
