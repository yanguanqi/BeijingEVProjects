package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnoFeature extends com.earthview.world.spatial.geodataset.Ifeature {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CAnnoFeature", new AnnoFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCAnnoFeatureProxy", new AnnoFeatureClassFactory());
	}

	native private long getID_void(long pNativeObject);
	/**
	 * ªÒ»°“™ÀÿID
	 * @return ID∫≈£¨“ª∞„«Èøˆœ¬£¨¥Û”⁄0
	 */
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getID_void_NoVirtual(long pNativeObject);
	protected long getID_NoVirtual()
	{
		long returnValue = getID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * ªÒ»°“™Àÿµƒº∏∫ŒÃÂ¿‡–Õ
	 * @return º∏∫ŒÃÂ¿‡–Õ√∂æŸ
	 */
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

	native private long getFieldsRef_void(long pNativeObject);
	/**
	 * ªÒ»°“™Àÿ◊÷∂ŒºØ∫œ
	 * @return ◊÷∂ŒºØ∫œ£¨ƒ⁄≤ø“˝”√£¨Õ‚≤øŒﬁ–Ë Õ∑≈
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
	 * ªÒ»°“™Àÿ◊÷∂Œ ˝ƒø
	 * @return ◊÷∂Œ ˝ƒø
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
	 * ªÒ»°÷∏∂®À˜“˝µƒ“™Àÿ◊÷∂Œ
	 * @param index ÷∏∂®À˜“˝
	 * @return ◊÷∂Œ∂‘œÛ£¨ƒ⁄≤ø“˝”√£¨Õ‚≤øŒﬁ–Ë Õ∑≈
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
	 * ’“µΩ÷∏∂®◊÷∂Œ√˚≥∆µƒ◊÷∂Œ
	 * @param fieldName ◊÷∂Œ√˚≥∆
	 * @return »Áπ˚’“µΩ£¨∑µªÿ∏√À˜“˝£¨»Áπ˚√ª”–’“µΩ£¨∑µªÿ-1
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

	native private void getValue_CVariant_ev_uint32(long pNativeObject, long value, long index);
	/**
	 * ªÒ»°÷∏∂®À˜“˝µƒ◊÷∂Œ÷µ
	 * @param value  ‰≥ˆ£¨◊÷∂Œ÷µ
	 * @param index ÷∏∂®À˜“˝
	 */
	public void getValue(com.earthview.world.core.Variant value, long index)
	{
		long valueParamValue = value.nativeObject.pointer;
		long indexParamValue = index;
		getValue_CVariant_ev_uint32(this.nativeObject.pointer, valueParamValue, indexParamValue);
	}
	native private void getValue_CVariant_ev_uint32_NoVirtual(long pNativeObject, long value, long index);
	protected void getValue_NoVirtual(com.earthview.world.core.Variant value, long index)
	{
		long valueParamValue = value.nativeObject.pointer;
		long indexParamValue = index;
		getValue_CVariant_ev_uint32_NoVirtual(this.nativeObject.pointer, valueParamValue, indexParamValue);
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * ªÒ»°“™ÀÿµƒÕ‚∞¸Œß∫–
	 * @return ƒ⁄≤ø“˝”√£¨Õ‚≤øŒﬁ–Ë Õ∑≈
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

	native private void setValue_CVariant_ev_uint32(long pNativeObject, long value, long index);
	/**
	 * …Ë÷√÷∏∂®À˜“˝µƒ◊÷∂Œ÷µ
	 * @param value ◊÷∂Œ÷µ
	 * @param index ÷∏∂®À˜“˝
	 */
	public void setValue(com.earthview.world.core.Variant value, long index)
	{
		long valueParamValue = value.nativeObject.pointer;
		long indexParamValue = index;
		setValue_CVariant_ev_uint32(this.nativeObject.pointer, valueParamValue, indexParamValue);
	}
	native private void setValue_CVariant_ev_uint32_NoVirtual(long pNativeObject, long value, long index);
	protected void setValue_NoVirtual(com.earthview.world.core.Variant value, long index)
	{
		long valueParamValue = value.nativeObject.pointer;
		long indexParamValue = index;
		setValue_CVariant_ev_uint32_NoVirtual(this.nativeObject.pointer, valueParamValue, indexParamValue);
	}

	native private boolean deleteFeature_void(long pNativeObject);
	/**
	 * ‘⁄ ˝æ›ºØ…œ…æ≥˝“™Àÿ
	 * @return true£¨≥…π¶£ªfalse£¨ ß∞‹
	 */
	public boolean deleteFeature()
	{
		boolean returnValue = deleteFeature_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean deleteFeature_void_NoVirtual(long pNativeObject);
	protected boolean deleteFeature_NoVirtual()
	{
		boolean returnValue = deleteFeature_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean saveFeature_void(long pNativeObject);
	/**
	 * ‘⁄ ˝æ›ºØ…œ±£¥Ê“™Àÿ
	 * @return true£¨≥…π¶£ªfalse£¨ ß∞‹
	 */
	public boolean saveFeature()
	{
		boolean returnValue = saveFeature_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean saveFeature_void_NoVirtual(long pNativeObject);
	protected boolean saveFeature_NoVirtual()
	{
		boolean returnValue = saveFeature_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getGeometryRef_void(long pNativeObject);
	/**
	 * ªÒ»°“™Àÿµƒº∏∫ŒÃÂ∂‘œÛ
	 * @return ƒ⁄≤ø“˝”√£¨Õ‚≤øŒﬁ–Ë Õ∑≈
	 */
	public com.earthview.world.spatial.geometry.Igeometry getGeometryRef()
	{
		long returnValue = getGeometryRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long getGeometryRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Igeometry getGeometryRef_NoVirtual()
	{
		long returnValue = getGeometryRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Ifeature ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeature ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}

	native private String getText_void(long pNativeObject);
	/// --
	public String getText()
	{
		String returnValue = getText_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSymbol_void(long pNativeObject);
	public com.earthview.world.spatial.display.Isymbol getSymbol()
	{
		long returnValue = getSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private boolean getState_void(long pNativeObject);
	public boolean getState()
	{
		boolean returnValue = getState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSymbol_ISymbol(long pNativeObject, long ref_symbol);
	public void setSymbol(com.earthview.world.spatial.display.Isymbol ref_symbol)
	{
		long ref_symbolParamValue = (ref_symbol == null ? 0L : ref_symbol.nativeObject.pointer);
		setSymbol_ISymbol(this.nativeObject.pointer, ref_symbolParamValue);
	}
	native private long getElement_void(long pNativeObject);
	public com.earthview.world.spatial.display.LabelElement getElement()
	{
		long returnValue = getElement_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.LabelElement __returnValue = new com.earthview.world.spatial.display.LabelElement(CreatedWhenConstruct.CWC_NotToCreate, "CLabelElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.LabelElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLabelElement");
		}
		return __returnValue;
	}
	public AnnoFeature(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnnoFeature(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * ËÆæÁΩÆË¶ÅÁ¥†ÁöÑÂá†‰Ωï‰ΩìÂØπË±°ÔºåÂÜÖÈÉ®Êã∑Ë¥ùËØ•Âá†‰Ωï‰Ωì
	 * @param geom Âá†‰Ωï‰ΩìÂØπË±°
	 */
	public void setGeometry(com.earthview.world.spatial.geometry.Igeometry geom)
	{
		super.setGeometry_NoVirtual(geom);
	}
	
	native protected void register_getID_void(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_getFieldsRef_void(long pNativeObject, String method);
	native protected void register_getFieldCount_void(long pNativeObject, String method);
	native protected void register_getFieldRef_ev_uint32(long pNativeObject, String method);
	native protected void register_findField_EVString(long pNativeObject, String method);
	native protected void register_getValue_CVariant_ev_uint32(long pNativeObject, String method);
	native protected void register_getGeometryRef_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_setGeometry_IGeometry(long pNativeObject, String method);
	native protected void register_setValue_CVariant_ev_uint32(long pNativeObject, String method);
	native protected void register_deleteFeature_void(long pNativeObject, String method);
	native protected void register_saveFeature_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getID_void(this.nativeObject.pointer, "getID_void_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_getFieldsRef_void(this.nativeObject.pointer, "getFieldsRef_void_callback");
			this.register_getFieldCount_void(this.nativeObject.pointer, "getFieldCount_void_callback");
			this.register_getFieldRef_ev_uint32(this.nativeObject.pointer, "getFieldRef_ev_uint32_callback");
			this.register_findField_EVString(this.nativeObject.pointer, "findField_EVString_callback");
			this.register_getValue_CVariant_ev_uint32(this.nativeObject.pointer, "getValue_CVariant_ev_uint32_callback");
			this.register_getGeometryRef_void(this.nativeObject.pointer, "getGeometryRef_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_setGeometry_IGeometry(this.nativeObject.pointer, "setGeometry_IGeometry_callback");
			this.register_setValue_CVariant_ev_uint32(this.nativeObject.pointer, "setValue_CVariant_ev_uint32_callback");
			this.register_deleteFeature_void(this.nativeObject.pointer, "deleteFeature_void_callback");
			this.register_saveFeature_void(this.nativeObject.pointer, "saveFeature_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static AnnoFeature fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnnoFeature obj = null;
 		if(baseObj instanceof AnnoFeature)
		{
			obj = (AnnoFeature)baseObj;
		} else {
			obj = new AnnoFeature(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnnoFeature");
			obj.increaseCast();
		}

		return obj;
	}
}
