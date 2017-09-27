package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 				管理地理对象类
 */
public class GeoObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CGeoObject", new GeoObjectClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public GeoObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGeoObject", null);
	}

	/**
	 * 构造函数
	 * @param pGeometry geometry
	 * @param pSymbol 符号
	 * @param bCloneGeometry 是否clonegeometry
	 * @param bCloneSymbol 是否clone符号
	 */
	public GeoObject(com.earthview.world.spatial.geometry.Igeometry ref_pGeometry, com.earthview.world.spatial.display.Isymbol ref_pSymbol) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pGeometryPtr = new BasePointer(ref_pGeometry);
		list.add("ref_pGeometry", ref_pGeometryPtr.get());
		BasePointer ref_pSymbolPtr = new BasePointer(ref_pSymbol);
		list.add("ref_pSymbol", ref_pSymbolPtr.get());
		Create("CGeoObject", list);
	}

	public GeoObject(com.earthview.world.spatial.geometry.Igeometry ref_pGeometry, com.earthview.world.spatial.display.Isymbol ref_pSymbol, boolean bCloneGeometry, boolean bCloneSymbol) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pGeometryPtr = new BasePointer(ref_pGeometry);
		list.add("ref_pGeometry", ref_pGeometryPtr.get());
		BasePointer ref_pSymbolPtr = new BasePointer(ref_pSymbol);
		list.add("ref_pSymbol", ref_pSymbolPtr.get());
		BasePointer bCloneGeometryPtr = new BasePointer(bCloneGeometry);
		list.add("bCloneGeometry", bCloneGeometryPtr.get());
		BasePointer bCloneSymbolPtr = new BasePointer(bCloneSymbol);
		list.add("bCloneSymbol", bCloneSymbolPtr.get());
		Create("CGeoObject", list);
	}

	/**
	 * 				管理相机的参数
	 */
	public static class LookAt extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial::CGeoObject::CLookAt", new LookAtClassFactory());
		}

		public LookAt() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CLookAt", null);
		}

		native private double get_LatitudeAttr_void(long pNativeObject);
		public double get_LatitudeAttr()
		{
			double jniValue = get_LatitudeAttr_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_LatitudeAttr_ev_real64 (long pNativeObject, double value);
		public void set_LatitudeAttr(double LatitudeAttr)
		{
			double LatitudeAttrParamValue = LatitudeAttr;
			
			set_LatitudeAttr_ev_real64(this.nativeObject.pointer, LatitudeAttrParamValue);
		}
		
		native private double get_LongitudeAttr_void(long pNativeObject);
		public double get_LongitudeAttr()
		{
			double jniValue = get_LongitudeAttr_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_LongitudeAttr_ev_real64 (long pNativeObject, double value);
		public void set_LongitudeAttr(double LongitudeAttr)
		{
			double LongitudeAttrParamValue = LongitudeAttr;
			
			set_LongitudeAttr_ev_real64(this.nativeObject.pointer, LongitudeAttrParamValue);
		}
		
		native private double get_HeadingAttr_void(long pNativeObject);
		public double get_HeadingAttr()
		{
			double jniValue = get_HeadingAttr_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_HeadingAttr_ev_real64 (long pNativeObject, double value);
		public void set_HeadingAttr(double HeadingAttr)
		{
			double HeadingAttrParamValue = HeadingAttr;
			
			set_HeadingAttr_ev_real64(this.nativeObject.pointer, HeadingAttrParamValue);
		}
		
		native private double get_TiltAttr_void(long pNativeObject);
		public double get_TiltAttr()
		{
			double jniValue = get_TiltAttr_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_TiltAttr_ev_real64 (long pNativeObject, double value);
		public void set_TiltAttr(double TiltAttr)
		{
			double TiltAttrParamValue = TiltAttr;
			
			set_TiltAttr_ev_real64(this.nativeObject.pointer, TiltAttrParamValue);
		}
		
		native private double get_AltitudeAttr_void(long pNativeObject);
		public double get_AltitudeAttr()
		{
			double jniValue = get_AltitudeAttr_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_AltitudeAttr_ev_real64 (long pNativeObject, double value);
		public void set_AltitudeAttr(double AltitudeAttr)
		{
			double AltitudeAttrParamValue = AltitudeAttr;
			
			set_AltitudeAttr_ev_real64(this.nativeObject.pointer, AltitudeAttrParamValue);
		}
		
		native private int get_AltitudeModeAttr_void(long pNativeObject);
		public int get_AltitudeModeAttr()
		{
			int jniValue = get_AltitudeModeAttr_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_AltitudeModeAttr_ev_int32 (long pNativeObject, int value);
		public void set_AltitudeModeAttr(int AltitudeModeAttr)
		{
			int AltitudeModeAttrParamValue = AltitudeModeAttr;
			
			set_AltitudeModeAttr_ev_int32(this.nativeObject.pointer, AltitudeModeAttrParamValue);
		}
		
		native private double get_ModitifAltitudeAttr_void(long pNativeObject);
		public double get_ModitifAltitudeAttr()
		{
			double jniValue = get_ModitifAltitudeAttr_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_ModitifAltitudeAttr_ev_real64 (long pNativeObject, double value);
		public void set_ModitifAltitudeAttr(double ModitifAltitudeAttr)
		{
			double ModitifAltitudeAttrParamValue = ModitifAltitudeAttr;
			
			set_ModitifAltitudeAttr_ev_real64(this.nativeObject.pointer, ModitifAltitudeAttrParamValue);
		}
		
		native private boolean get_IsDirtyAttr_void(long pNativeObject);
		public boolean get_IsDirtyAttr()
		{
			boolean jniValue = get_IsDirtyAttr_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_IsDirtyAttr_ev_bool (long pNativeObject, boolean value);
		public void set_IsDirtyAttr(boolean IsDirtyAttr)
		{
			boolean IsDirtyAttrParamValue = IsDirtyAttr;
			
			set_IsDirtyAttr_ev_bool(this.nativeObject.pointer, IsDirtyAttrParamValue);
		}
		
		native private double get_RangeAttr_void(long pNativeObject);
		public double get_RangeAttr()
		{
			double jniValue = get_RangeAttr_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_RangeAttr_ev_real64 (long pNativeObject, double value);
		public void set_RangeAttr(double RangeAttr)
		{
			double RangeAttrParamValue = RangeAttr;
			
			set_RangeAttr_ev_real64(this.nativeObject.pointer, RangeAttrParamValue);
		}
		
		native private boolean get_IsCameraAltComputedAttr_void(long pNativeObject);
		public boolean get_IsCameraAltComputedAttr()
		{
			boolean jniValue = get_IsCameraAltComputedAttr_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_IsCameraAltComputedAttr_ev_bool (long pNativeObject, boolean value);
		public void set_IsCameraAltComputedAttr(boolean IsCameraAltComputedAttr)
		{
			boolean IsCameraAltComputedAttrParamValue = IsCameraAltComputedAttr;
			
			set_IsCameraAltComputedAttr_ev_bool(this.nativeObject.pointer, IsCameraAltComputedAttrParamValue);
		}
		
		native private boolean OperatorEquals_CLookAt(long pNativeObject, long rkLookAt);
		public boolean OperatorEquals(com.earthview.world.spatial.GeoObject.LookAt rkLookAt)
		{
			long rkLookAtParamValue = rkLookAt.nativeObject.pointer;
			boolean returnValue = OperatorEquals_CLookAt(this.nativeObject.pointer, rkLookAtParamValue);
			return returnValue;
		}
		native private boolean OperatorNotEquals_CLookAt(long pNativeObject, long rkLookAt);
		public boolean OperatorNotEquals(com.earthview.world.spatial.GeoObject.LookAt rkLookAt)
		{
			long rkLookAtParamValue = rkLookAt.nativeObject.pointer;
			boolean returnValue = OperatorNotEquals_CLookAt(this.nativeObject.pointer, rkLookAtParamValue);
			return returnValue;
		}
		public LookAt(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LookAt(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static LookAt fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LookAt obj = null;
 			if(baseObj instanceof LookAt)
			{
				obj = (LookAt)baseObj;
			} else {
				obj = new LookAt(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CLookAt");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LookAtClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LookAt emptyInstance = new LookAt(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long get_LookAtAttr_void(long pNativeObject);
	public com.earthview.world.spatial.GeoObject.LookAt get_LookAtAttr()
	{
		long jniValue = get_LookAtAttr_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.GeoObject.LookAt __returnValue = new com.earthview.world.spatial.GeoObject.LookAt(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_LookAtAttr_CLookAt (long pNativeObject, long value);
	public void set_LookAtAttr(com.earthview.world.spatial.GeoObject.LookAt LookAtAttr)
	{
		long LookAtAttrParamValue = LookAtAttr.nativeObject.pointer;
		
		set_LookAtAttr_CLookAt(this.nativeObject.pointer, LookAtAttrParamValue);
	}
	
	native private long getGeometry_void(long pNativeObject);
	/**
	 * 获得geometry
	 * @param  
	 * @return geometry
	 */
	public com.earthview.world.spatial.geometry.Igeometry getGeometry()
	{
		long returnValue = getGeometry_void(this.nativeObject.pointer);
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
	native private long getSymbol_void(long pNativeObject);
	/**
	 * 获取符号
	 * @param  
	 * @return 符号
	 */
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
	native private void setGeometry_IGeometry_ev_bool(long pNativeObject, long ref_pGeometry, boolean bResetGeoIndex);
	/**
	 * 设置geometry
	 * @param pGeometry geometry
	 * @param bResetGeoIndex 是否重置索引
	 * @param bClone 是否clone
	 */
	public void setGeometry(com.earthview.world.spatial.geometry.Igeometry ref_pGeometry, boolean bResetGeoIndex)
	{
		long ref_pGeometryParamValue = (ref_pGeometry == null ? 0L : ref_pGeometry.nativeObject.pointer);
		boolean bResetGeoIndexParamValue = bResetGeoIndex;
		setGeometry_IGeometry_ev_bool(this.nativeObject.pointer, ref_pGeometryParamValue, bResetGeoIndexParamValue);
	}
	native private void setGeometry_IGeometry_ev_bool_bool(long pNativeObject, long ref_pGeometry, boolean bResetGeoIndex, boolean bClone);
	public void setGeometry(com.earthview.world.spatial.geometry.Igeometry ref_pGeometry, boolean bResetGeoIndex, boolean bClone)
	{
		long ref_pGeometryParamValue = (ref_pGeometry == null ? 0L : ref_pGeometry.nativeObject.pointer);
		boolean bResetGeoIndexParamValue = bResetGeoIndex;
		boolean bCloneParamValue = bClone;
		setGeometry_IGeometry_ev_bool_bool(this.nativeObject.pointer, ref_pGeometryParamValue, bResetGeoIndexParamValue, bCloneParamValue);
	}
	native private void setSymbol_ISymbol_ev_bool(long pNativeObject, long ref_pSymbol, boolean bResetGeoIndex);
	/**
	 * 设置符号
	 * @param pSymbol 符号
	 * @param bClone 是否clone
	 */
	public void setSymbol(com.earthview.world.spatial.display.Isymbol ref_pSymbol, boolean bResetGeoIndex)
	{
		long ref_pSymbolParamValue = (ref_pSymbol == null ? 0L : ref_pSymbol.nativeObject.pointer);
		boolean bResetGeoIndexParamValue = bResetGeoIndex;
		setSymbol_ISymbol_ev_bool(this.nativeObject.pointer, ref_pSymbolParamValue, bResetGeoIndexParamValue);
	}
	native private void setSymbol_ISymbol_ev_bool_bool(long pNativeObject, long ref_pSymbol, boolean bResetGeoIndex, boolean bClone);
	public void setSymbol(com.earthview.world.spatial.display.Isymbol ref_pSymbol, boolean bResetGeoIndex, boolean bClone)
	{
		long ref_pSymbolParamValue = (ref_pSymbol == null ? 0L : ref_pSymbol.nativeObject.pointer);
		boolean bResetGeoIndexParamValue = bResetGeoIndex;
		boolean bCloneParamValue = bClone;
		setSymbol_ISymbol_ev_bool_bool(this.nativeObject.pointer, ref_pSymbolParamValue, bResetGeoIndexParamValue, bCloneParamValue);
	}
	native private long getGeoIndexCount_void(long pNativeObject);
	/**
	 * 获取硬件缓冲索引数量
	 * @param  
	 * @return 硬件缓冲索引数量
	 */
	public long getGeoIndexCount()
	{
		long returnValue = getGeoIndexCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addGeoIndex_GeoIndex(long pNativeObject, long geoIndex);
	/**
	 * 增加硬件缓冲索引
	 * @param geoIndex 硬件缓冲索引
	 */
	public void addGeoIndex(com.earthview.world.spatial.GeoIndex geoIndex)
	{
		long geoIndexParamValue = geoIndex.nativeObject.pointer;
		addGeoIndex_GeoIndex(this.nativeObject.pointer, geoIndexParamValue);
	}
	native private boolean removeGeoIndex_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除硬件缓冲索引
	 * @param index 硬件缓冲索引位置
	 */
	public boolean removeGeoIndex(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeGeoIndex_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getGeoIndex_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取硬件缓冲索引
	 * @param index 位置
	 * @return 硬件缓冲索引
	 */
	public com.earthview.world.spatial.GeoIndex getGeoIndex(long index)
	{
		long indexParamValue = index;
		long returnValue = getGeoIndex_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.GeoIndex __returnValue = new com.earthview.world.spatial.GeoIndex(CreatedWhenConstruct.CWC_NotToCreate, "GeoIndex");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoIndex)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GeoIndex");
		}
		return __returnValue;
	}
	native private boolean setGeoIndex_ev_uint32_GeoIndex(long pNativeObject, long index, long geoIndex);
	/**
	 * 设置硬件缓冲索引
	 * @param index 位置
	 * @param geoIndex 硬件缓冲索引
	 */
	public boolean setGeoIndex(long index, com.earthview.world.spatial.GeoIndex geoIndex)
	{
		long indexParamValue = index;
		long geoIndexParamValue = geoIndex.nativeObject.pointer;
		boolean returnValue = setGeoIndex_ev_uint32_GeoIndex(this.nativeObject.pointer, indexParamValue, geoIndexParamValue);
		return returnValue;
	}
	native private void clearGeoIndex_void(long pNativeObject);
	/**
	 * 清除硬件缓冲索引
	 * @param  
	 */
	public void clearGeoIndex()
	{
		clearGeoIndex_void(this.nativeObject.pointer);
	}
	native private void addProperty_EVString_CVariant(long pNativeObject, String key, long val);
	/**
	 * 增加属性
	 * @param key 键
	 * @param val 值
	 */
	public void addProperty(String key, com.earthview.world.core.Variant val)
	{
		String keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		addProperty_EVString_CVariant(this.nativeObject.pointer, keyParamValue, valParamValue);
	}
	native private long getProperty_EVString(long pNativeObject, String key);
	/**
	 * 获取属性
	 * @param key 键
	 * @return 值
	 */
	public com.earthview.world.core.Variant getProperty(String key)
	{
		String keyParamValue = key;
		long returnValue = getProperty_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate, "CVariant");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long getProperty_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取属性
	 * @param index 位置
	 * @return 值
	 */
	public com.earthview.world.core.Variant getProperty(long index)
	{
		long indexParamValue = index;
		long returnValue = getProperty_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate, "CVariant");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private boolean removeProperty_EVString(long pNativeObject, String key);
	/**
	 * 删除属性
	 * @param key 键
	 * @return 是否成
	 */
	public boolean removeProperty(String key)
	{
		String keyParamValue = key;
		boolean returnValue = removeProperty_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private boolean removeProperty_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除属性
	 * @param index 位置
	 * @return 是否成
	 */
	public boolean removeProperty(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeProperty_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void clearPropertys_void(long pNativeObject);
	/**
	 * 清除属性
	 * @param  
	 */
	public void clearPropertys()
	{
		clearPropertys_void(this.nativeObject.pointer);
	}
	native private long getPropertyCount_void(long pNativeObject);
	/**
	 * 获取属性数量
	 * @param  
	 * @return 属性数量
	 */
	public long getPropertyCount()
	{
		long returnValue = getPropertyCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getID_void(long pNativeObject);
	/**
	 * 获取id
	 * @param  
	 * @return id
	 */
	public StringPointer getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setID_EVString(long pNativeObject, String id);
	/**
	 * 设置id
	 * @param id id
	 */
	public void setID(String id)
	{
		String idParamValue = id;
		setID_EVString(this.nativeObject.pointer, idParamValue);
	}
	native private int getIndex_void(long pNativeObject);
	/**
	 * 获取index
	 * @param  
	 * @return id
	 */
	public int getIndex()
	{
		int returnValue = getIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIndex_ev_int32(long pNativeObject, int index);
	/**
	 * 设置id
	 * @param id id
	 */
	public void setIndex(int index)
	{
		int indexParamValue = index;
		setIndex_ev_int32(this.nativeObject.pointer, indexParamValue);
	}
	public GeoObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeoObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoObject obj = null;
 		if(baseObj instanceof GeoObject)
		{
			obj = (GeoObject)baseObj;
		} else {
			obj = new GeoObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoObject");
			obj.increaseCast();
		}

		return obj;
	}
}
