package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 空间参考系统类，是一个基类，用于存储相关空间参考系统参数。
 */
public class Ispatialreference extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::ISpatialReference", new IspatialreferenceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::JISpatialReferenceProxy", new IspatialreferenceClassFactory());
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.geometry.EVSpatialReferenceType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取空间参考系统的类型
	 * @param  
	 * @return 空间参考系统类型
	 */
	public com.earthview.world.spatial.geometry.EVSpatialReferenceType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVSpatialReferenceType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.EVSpatialReferenceType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVSpatialReferenceType.toEnum(returnValue);
	}

	protected  long getSRID_void_callback()
	{
		long returnValue = getSRID();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getSRID_void(long pNativeObject);
	/**
	 * 获取空间参考系统的EPSG值
	 * @param  
	 * @return EPSG值
	 */
	public long getSRID()
	{
		long returnValue = getSRID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSRID_void_NoVirtual(long pNativeObject);
	protected long getSRID_NoVirtual()
	{
		long returnValue = getSRID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.geometry.Ispatialreference returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @param  
	 * @return 空间参考系统对象指针
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
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
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getCEllipseSphere_void_callback()
	{
		com.earthview.world.spatial.geometry.Iellipsespheriod returnValue = getCEllipseSphere();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCEllipseSphere_void(long pNativeObject);
	/**
	 * 获取椭球体指针
	 * @return IEllipseShpere*椭球体指针
	 */
	public com.earthview.world.spatial.geometry.Iellipsespheriod getCEllipseSphere()
	{
		long returnValue = getCEllipseSphere_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Iellipsespheriod __returnValue = new com.earthview.world.spatial.geometry.Iellipsespheriod(CreatedWhenConstruct.CWC_NotToCreate, "IEllipseSpheriod");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Iellipsespheriod)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEllipseSpheriod");
		}
		return __returnValue;
	}
	native private long getCEllipseSphere_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Iellipsespheriod getCEllipseSphere_NoVirtual()
	{
		long returnValue = getCEllipseSphere_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Iellipsespheriod __returnValue = new com.earthview.world.spatial.geometry.Iellipsespheriod(CreatedWhenConstruct.CWC_NotToCreate, "IEllipseSpheriod");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Iellipsespheriod)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEllipseSpheriod");
		}
		return __returnValue;
	}

	protected  void exportToString_EVSpatialReferenceStringType_EVString_callback(int type, long pszstrText)
	{
		com.earthview.world.spatial.utility.EVSpatialReferenceStringType typeParamValue = com.earthview.world.spatial.utility.EVSpatialReferenceStringType.toEnum(type);
		StringPointer pszstrTextParamValue = new StringPointer(new InstancePointer(pszstrText));
		exportToString(typeParamValue, pszstrTextParamValue);
	}

	native private void exportToString_EVSpatialReferenceStringType_EVString(long pNativeObject, int type, long pszstrText);
	/**
	 * 将空间参考导出成指定的字符串格式
	 * @param type EarthView::World::Spatial::Utility::EVSpatialReferenceStringType
	 * @param pszText 
	 */
	public void exportToString(com.earthview.world.spatial.utility.EVSpatialReferenceStringType type, StringPointer pszstrText)
	{
		int typeParamValue = type.getValue();
		long pszstrTextParamValue = pszstrText.nativeObject.pointer;
		exportToString_EVSpatialReferenceStringType_EVString(this.nativeObject.pointer, typeParamValue, pszstrTextParamValue);
	}
	native private void exportToString_EVSpatialReferenceStringType_EVString_NoVirtual(long pNativeObject, int type, long pszstrText);
	protected void exportToString_NoVirtual(com.earthview.world.spatial.utility.EVSpatialReferenceStringType type, StringPointer pszstrText)
	{
		int typeParamValue = type.getValue();
		long pszstrTextParamValue = pszstrText.nativeObject.pointer;
		exportToString_EVSpatialReferenceStringType_EVString_NoVirtual(this.nativeObject.pointer, typeParamValue, pszstrTextParamValue);
	}

	protected  void getCoordUnits_EVString_ev_real64_callback(long pszunitsName, long dfvalue)
	{
		StringPointer pszunitsNameParamValue = new StringPointer(new InstancePointer(pszunitsName));
		DoublePointer dfvalueParamValue = new DoublePointer(new InstancePointer(dfvalue));
		getCoordUnits(pszunitsNameParamValue, dfvalueParamValue);
	}

	native private void getCoordUnits_EVString_ev_real64(long pNativeObject, long pszunitsName, long dfvalue);
	/**
	 * 获取坐标的单位名称和单位值
	 * @param pszunitsName 
	 * @param dfvalue 
	 */
	public void getCoordUnits(StringPointer pszunitsName, DoublePointer dfvalue)
	{
		long pszunitsNameParamValue = pszunitsName.nativeObject.pointer;
		long dfvalueParamValue = dfvalue.nativeObject.pointer;
		getCoordUnits_EVString_ev_real64(this.nativeObject.pointer, pszunitsNameParamValue, dfvalueParamValue);
	}
	native private void getCoordUnits_EVString_ev_real64_NoVirtual(long pNativeObject, long pszunitsName, long dfvalue);
	protected void getCoordUnits_NoVirtual(StringPointer pszunitsName, DoublePointer dfvalue)
	{
		long pszunitsNameParamValue = pszunitsName.nativeObject.pointer;
		long dfvalueParamValue = dfvalue.nativeObject.pointer;
		getCoordUnits_EVString_ev_real64_NoVirtual(this.nativeObject.pointer, pszunitsNameParamValue, dfvalueParamValue);
	}

	protected  double getSamiMajor_void_callback()
	{
		double returnValue = getSamiMajor();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSamiMajor_void(long pNativeObject);
	/**
	 * 获取椭球长半轴的值
	 * @return ev_real64
	 */
	public double getSamiMajor()
	{
		double returnValue = getSamiMajor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSamiMajor_void_NoVirtual(long pNativeObject);
	protected double getSamiMajor_NoVirtual()
	{
		double returnValue = getSamiMajor_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getInvFlattening_void_callback()
	{
		double returnValue = getInvFlattening();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getInvFlattening_void(long pNativeObject);
	/**
	 * 获取椭球扁率的倒数
	 * @return ev_real64
	 */
	public double getInvFlattening()
	{
		double returnValue = getInvFlattening_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getInvFlattening_void_NoVirtual(long pNativeObject);
	protected double getInvFlattening_NoVirtual()
	{
		double returnValue = getInvFlattening_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getSphereName_void_callback()
	{
		String returnValue = getSphereName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSphereName_void(long pNativeObject);
	/**
	 * 获取椭球名称
	 * @return ev_char*
	 */
	public String getSphereName()
	{
		String returnValue = getSphereName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSphereName_void_NoVirtual(long pNativeObject);
	protected String getSphereName_NoVirtual()
	{
		String returnValue = getSphereName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getCoordianteSystemName_void_callback()
	{
		String returnValue = getCoordianteSystemName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getCoordianteSystemName_void(long pNativeObject);
	/**
	 * 获取空间坐标系统的名称
	 * @param  
	 * @return ev_char*坐标系统名称
	 */
	public String getCoordianteSystemName()
	{
		String returnValue = getCoordianteSystemName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getCoordianteSystemName_void_NoVirtual(long pNativeObject);
	protected String getCoordianteSystemName_NoVirtual()
	{
		String returnValue = getCoordianteSystemName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void toStream_EVSpatialReferenceStringType_CDataStream_callback(int type, long objStream)
	{
		com.earthview.world.spatial.utility.EVSpatialReferenceStringType typeParamValue = com.earthview.world.spatial.utility.EVSpatialReferenceStringType.toEnum(type);
		com.earthview.world.core.DataStream objStreamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		objStreamParamValue.setDelegate(true);
		objStreamParamValue.setInstancePointer(new InstancePointer(objStream));
		IClassFactory objStreamParamValueClassFactory = GlobalClassFactoryMap.get(objStreamParamValue.getCppInstanceTypeName());
		if (objStreamParamValueClassFactory != null)
		{
			objStreamParamValue.setDelegate(true);
			objStreamParamValue = (com.earthview.world.core.DataStream)objStreamParamValueClassFactory.create();
			objStreamParamValue.setDelegate(true);
			objStreamParamValue.setInstancePointer(new InstancePointer(objStream));
		}
		toStream(typeParamValue, objStreamParamValue);
	}

	native private void toStream_EVSpatialReferenceStringType_CDataStream(long pNativeObject, int type, long objStream);
	/**
	 * 将空间坐标系统导出成流形式
	 * @param type EarthView::World::Spatial::Utility::EVSpatialReferenceStringType
	 * @param objStream 流引用
	 * @return 
	 */
	public void toStream(com.earthview.world.spatial.utility.EVSpatialReferenceStringType type, com.earthview.world.core.DataStream objStream)
	{
		int typeParamValue = type.getValue();
		long objStreamParamValue = objStream.nativeObject.pointer;
		toStream_EVSpatialReferenceStringType_CDataStream(this.nativeObject.pointer, typeParamValue, objStreamParamValue);
	}
	native private void toStream_EVSpatialReferenceStringType_CDataStream_NoVirtual(long pNativeObject, int type, long objStream);
	protected void toStream_NoVirtual(com.earthview.world.spatial.utility.EVSpatialReferenceStringType type, com.earthview.world.core.DataStream objStream)
	{
		int typeParamValue = type.getValue();
		long objStreamParamValue = objStream.nativeObject.pointer;
		toStream_EVSpatialReferenceStringType_CDataStream_NoVirtual(this.nativeObject.pointer, typeParamValue, objStreamParamValue);
	}

	protected  boolean isSameAs_ISpatialReference_callback(long pref)
	{
		com.earthview.world.spatial.geometry.Ispatialreference prefParamValue = (pref == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(prefParamValue != null)
		{
		prefParamValue.setDelegate(true);
		prefParamValue.setInstancePointer(new InstancePointer(pref));
		IClassFactory prefParamValueClassFactory = GlobalClassFactoryMap.get(prefParamValue.getCppInstanceTypeName());
		if (prefParamValueClassFactory != null)
		{
			prefParamValue.setDelegate(true);
			prefParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)prefParamValueClassFactory.create();
			prefParamValue.setDelegate(true);
			prefParamValue.setInstancePointer(new InstancePointer(pref));
		}
		}
		boolean returnValue = isSameAs(prefParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSameAs_ISpatialReference(long pNativeObject, long pref);
	/**
	 * /比较两个空间参考是否相等/
	 * @param pref 空间参考指针
	 * @return true,fase
	 */
	public boolean isSameAs(com.earthview.world.spatial.geometry.Ispatialreference pref)
	{
		long prefParamValue = (pref == null ? 0L : pref.nativeObject.pointer);
		boolean returnValue = isSameAs_ISpatialReference(this.nativeObject.pointer, prefParamValue);
		return returnValue;
	}
	native private boolean isSameAs_ISpatialReference_NoVirtual(long pNativeObject, long pref);
	protected boolean isSameAs_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference pref)
	{
		long prefParamValue = (pref == null ? 0L : pref.nativeObject.pointer);
		boolean returnValue = isSameAs_ISpatialReference_NoVirtual(this.nativeObject.pointer, prefParamValue);
		return returnValue;
	}

	protected  void getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_callback(boolean isLatLong, long dfLeft, long dfTop, long dfRight, long dfDown)
	{
		boolean isLatLongParamValue = isLatLong;
		DoublePointer dfLeftParamValue = new DoublePointer(new InstancePointer(dfLeft));
		DoublePointer dfTopParamValue = new DoublePointer(new InstancePointer(dfTop));
		DoublePointer dfRightParamValue = new DoublePointer(new InstancePointer(dfRight));
		DoublePointer dfDownParamValue = new DoublePointer(new InstancePointer(dfDown));
		getInOutputRect(isLatLongParamValue, dfLeftParamValue, dfTopParamValue, dfRightParamValue, dfDownParamValue);
	}

	native private void getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, boolean isLatLong, long dfLeft, long dfTop, long dfRight, long dfDown);
	///坐标系有效计算范围
	public void getInOutputRect(boolean isLatLong, DoublePointer dfLeft, DoublePointer dfTop, DoublePointer dfRight, DoublePointer dfDown)
	{
		boolean isLatLongParamValue = isLatLong;
		long dfLeftParamValue = dfLeft.nativeObject.pointer;
		long dfTopParamValue = dfTop.nativeObject.pointer;
		long dfRightParamValue = dfRight.nativeObject.pointer;
		long dfDownParamValue = dfDown.nativeObject.pointer;
		getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, isLatLongParamValue, dfLeftParamValue, dfTopParamValue, dfRightParamValue, dfDownParamValue);
	}
	native private void getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, boolean isLatLong, long dfLeft, long dfTop, long dfRight, long dfDown);
	protected void getInOutputRect_NoVirtual(boolean isLatLong, DoublePointer dfLeft, DoublePointer dfTop, DoublePointer dfRight, DoublePointer dfDown)
	{
		boolean isLatLongParamValue = isLatLong;
		long dfLeftParamValue = dfLeft.nativeObject.pointer;
		long dfTopParamValue = dfTop.nativeObject.pointer;
		long dfRightParamValue = dfRight.nativeObject.pointer;
		long dfDownParamValue = dfDown.nativeObject.pointer;
		getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, isLatLongParamValue, dfLeftParamValue, dfTopParamValue, dfRightParamValue, dfDownParamValue);
	}

	public Ispatialreference(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ispatialreference(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getSRID_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_getCEllipseSphere_void(long pNativeObject, String method);
	native protected void register_exportToString_EVSpatialReferenceStringType_EVString(long pNativeObject, String method);
	native protected void register_getCoordUnits_EVString_ev_real64(long pNativeObject, String method);
	native protected void register_getSamiMajor_void(long pNativeObject, String method);
	native protected void register_getInvFlattening_void(long pNativeObject, String method);
	native protected void register_getSphereName_void(long pNativeObject, String method);
	native protected void register_getCoordianteSystemName_void(long pNativeObject, String method);
	native protected void register_toStream_EVSpatialReferenceStringType_CDataStream(long pNativeObject, String method);
	native protected void register_isSameAs_ISpatialReference(long pNativeObject, String method);
	native protected void register_getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getSRID_void(this.nativeObject.pointer, "getSRID_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_getCEllipseSphere_void(this.nativeObject.pointer, "getCEllipseSphere_void_callback");
			this.register_exportToString_EVSpatialReferenceStringType_EVString(this.nativeObject.pointer, "exportToString_EVSpatialReferenceStringType_EVString_callback");
			this.register_getCoordUnits_EVString_ev_real64(this.nativeObject.pointer, "getCoordUnits_EVString_ev_real64_callback");
			this.register_getSamiMajor_void(this.nativeObject.pointer, "getSamiMajor_void_callback");
			this.register_getInvFlattening_void(this.nativeObject.pointer, "getInvFlattening_void_callback");
			this.register_getSphereName_void(this.nativeObject.pointer, "getSphereName_void_callback");
			this.register_getCoordianteSystemName_void(this.nativeObject.pointer, "getCoordianteSystemName_void_callback");
			this.register_toStream_EVSpatialReferenceStringType_CDataStream(this.nativeObject.pointer, "toStream_EVSpatialReferenceStringType_CDataStream_callback");
			this.register_isSameAs_ISpatialReference(this.nativeObject.pointer, "isSameAs_ISpatialReference_callback");
			this.register_getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_callback");
		}
	}
	
	public static Ispatialreference fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ispatialreference obj = null;
 		if(baseObj instanceof Ispatialreference)
		{
			obj = (Ispatialreference)baseObj;
		} else {
			obj = new Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISpatialReference");
			obj.increaseCast();
		}

		return obj;
	}
}
