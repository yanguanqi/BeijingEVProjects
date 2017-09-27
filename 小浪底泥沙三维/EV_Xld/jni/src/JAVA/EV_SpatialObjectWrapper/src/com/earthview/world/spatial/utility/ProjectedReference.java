package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CProjectedReference投影参考即投影坐标系统描述继承EarthView::World::Spatial::Utility::CSpatialReference
 */
public class ProjectedReference extends com.earthview.world.spatial.utility.SpatialReference {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CProjectedReference", new ProjectedReferenceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::JCProjectedReferenceProxy", new ProjectedReferenceClassFactory());
	}

	native private long getProjParameter_void(long pNativeObject);
	/**
	 * 获取投影参数
	 * @param  
	 * @return constEarthView::World::Spatial::Utility::CProjParameter*
	 */
	public com.earthview.world.spatial.utility.ProjParameter getProjParameter()
	{
		long returnValue = getProjParameter_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.utility.ProjParameter __returnValue = new com.earthview.world.spatial.utility.ProjParameter(CreatedWhenConstruct.CWC_NotToCreate, "CProjParameter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.ProjParameter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CProjParameter");
		}
		return __returnValue;
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

	native private void exportToString_EVSpatialReferenceStringType_EVString(long pNativeObject, int type, long pszstrText);
	/**
	 * 将空间参考导出成指定的字符串格式
	 * @param type EarthView::World::Spatial::Utility::EVSpatialReferenceStringType
	 * @param pszstrText 
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 根据已有的坐标参考框架，克隆一个坐标参考系统
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

	native private int getType_void(long pNativeObject);
	/**
	 * /获取空间参考系统的类型/
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

	public ProjectedReference(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ProjectedReference(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 设置空间坐标系统的名称
	 * @param  
	 * @return 坐标系统名称
	 */
	public void setCoordianteSystemName(String name)
	{
		super.setCoordianteSystemName_NoVirtual(name);
	}
	/**
	 * 获取空间参考系统的EPSG值
	 * @param  
	 * @return EPSG值
	 */
	public long getSRID()
	{
		return super.getSRID_NoVirtual();
	}
	/**
	 * 获取椭球体指针
	 * @return IEllipseShpere*椭球体指针
	 */
	public com.earthview.world.spatial.geometry.Iellipsespheriod getCEllipseSphere()
	{
		return super.getCEllipseSphere_NoVirtual();
	}
	/**
	 * 获取椭球长半轴的值
	 * @return ev_real64
	 */
	public double getSamiMajor()
	{
		return super.getSamiMajor_NoVirtual();
	}
	/**
	 * 获取椭球扁率的倒数
	 * @return ev_real64
	 */
	public double getInvFlattening()
	{
		return super.getInvFlattening_NoVirtual();
	}
	/**
	 * 获取椭球名称
	 * @return ev_char*
	 */
	public String getSphereName()
	{
		return super.getSphereName_NoVirtual();
	}
	/**
	 * 获取空间坐标系统的名称
	 * @param  
	 * @return ev_char*坐标系统名称
	 */
	public String getCoordianteSystemName()
	{
		return super.getCoordianteSystemName_NoVirtual();
	}
	/**
	 * 将空间坐标系统导出成流形式
	 * @param type EarthView::World::Spatial::Utility::EVSpatialReferenceStringType
	 * @param objStream 流引用
	 * @return 
	 */
	public void toStream(com.earthview.world.spatial.utility.EVSpatialReferenceStringType type, com.earthview.world.core.DataStream objStream)
	{
		super.toStream_NoVirtual(type, objStream);
	}
	/**
	 * /比较两个空间参考是否相等/
	 * @param pref 空间参考指针
	 * @return true,fase
	 */
	public boolean isSameAs(com.earthview.world.spatial.geometry.Ispatialreference pref)
	{
		return super.isSameAs_NoVirtual(pref);
	}
	///坐标系有效计算范围
	public void getInOutputRect(boolean isLatLong, DoublePointer dfLeft, DoublePointer dfTop, DoublePointer dfRight, DoublePointer dfDown)
	{
		super.getInOutputRect_NoVirtual(isLatLong, dfLeft, dfTop, dfRight, dfDown);
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
	
	public static ProjectedReference fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ProjectedReference obj = null;
 		if(baseObj instanceof ProjectedReference)
		{
			obj = (ProjectedReference)baseObj;
		} else {
			obj = new ProjectedReference(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProjectedReference");
			obj.increaseCast();
		}

		return obj;
	}
}
