package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Spatial::Utility::CSpatialReference空间参考的基类为空间中的物体位置提供一个数学描述
 */
public class SpatialReference extends com.earthview.world.spatial.geometry.Ispatialreference {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CSpatialReference", new SpatialReferenceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::JCSpatialReferenceProxy", new SpatialReferenceClassFactory());
	}

	native private long getCEllipseSphere_void(long pNativeObject);
	/**
	 * 获取椭球体指针
	 * @return CEllipseSpheriod*椭球体指针
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 根据已有的坐标参考框架，克隆一个坐标参考系统需要在外边调用释放
	 * @return EarthView::World::Spatial::Utility::CSpatialReference*
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
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
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	native private boolean isGeographic_void(long pNativeObject);
	/**
	 * 是否是地理坐标系统
	 * @return ev_real64
	 */
	public boolean isGeographic()
	{
		boolean returnValue = isGeographic_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isProjected_void(long pNativeObject);
	/**
	 * 是否是投影坐标系统
	 * @return ev_real64
	 */
	public boolean isProjected()
	{
		boolean returnValue = isProjected_void(this.nativeObject.pointer);
		return returnValue;
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

	native private long getSRID_void(long pNativeObject);
	/**
	 * 获取空间参考系统的EPSG值
	 * @param  
	 * @return ESPG值,0表示代码ESPG未知
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

	native private String getCoordianteSystemName_void(long pNativeObject);
	/**
	 * 获取空间坐标系统的名称
	 * @param  
	 * @return 坐标系统名称
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

	protected  void setCoordianteSystemName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setCoordianteSystemName(nameParamValue);
	}

	native private void setCoordianteSystemName_EVString(long pNativeObject, String name);
	/**
	 * 设置空间坐标系统的名称
	 * @param  
	 * @return 坐标系统名称
	 */
	public void setCoordianteSystemName(String name)
	{
		String nameParamValue = name;
		setCoordianteSystemName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setCoordianteSystemName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setCoordianteSystemName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setCoordianteSystemName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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

	native private int reference_void(long pNativeObject);
	///<summary>
	///引用增加，引用计数加一
	///<summary>
	public int reference()
	{
		int returnValue = reference_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int dereference_void(long pNativeObject);
	///<summary>
	///引用减少，引用计数减一
	///<summary>
	public int dereference()
	{
		int returnValue = dereference_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getReferenceCount_void(long pNativeObject);
	///<summary>
	///获取引用计数数，
	///<summary>
	///<returns>引用的次数</returns>
	public int getReferenceCount()
	{
		int returnValue = getReferenceCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void release_void(long pNativeObject);
	///<summary>
	///释放对象自身
	///<summary>
	public void release()
	{
		release_void(this.nativeObject.pointer);
	}
	native private boolean isSameAs_ISpatialReference(long pNativeObject, long pref);
	/**
	 * 比较两个空间参考是否相等
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

	native private void getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, boolean isLatLong, long dfLeft, long dfTop, long dfRight, long dfDown);
	////
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

	public SpatialReference(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SpatialReference(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setCoordianteSystemName_EVString(long pNativeObject, String method);
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
			this.register_setCoordianteSystemName_EVString(this.nativeObject.pointer, "setCoordianteSystemName_EVString_callback");
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
	
	public static SpatialReference fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SpatialReference obj = null;
 		if(baseObj instanceof SpatialReference)
		{
			obj = (SpatialReference)baseObj;
		} else {
			obj = new SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSpatialReference");
			obj.increaseCast();
		}

		return obj;
	}
}
