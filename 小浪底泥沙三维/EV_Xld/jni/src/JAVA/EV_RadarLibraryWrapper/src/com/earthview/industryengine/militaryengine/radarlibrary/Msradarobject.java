package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 机械扫描形雷达
 */
public class Msradarobject extends com.earthview.industryengine.militaryengine.radarlibrary.RadarObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject", new MsradarobjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCMSRadarObjectProxy", new MsradarobjectClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param ref_pGSM 地理场景管理器
	 * @param pMSRadarCharacter 机械式雷达特征（生命周期与RadarObject的生命周期一致）
	 */
	public Msradarobject(String name, com.earthview.world.spatial3d.GeoSceneManager ref_pGSM, com.earthview.industryengine.militaryengine.radarlibrary.Msradarcharacter pMSRadarCharacter) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_pGSMPtr = new BasePointer(ref_pGSM);
		list.add("ref_pGSM", ref_pGSMPtr.get());
		BasePointer pMSRadarCharacterPtr = new BasePointer(pMSRadarCharacter);
		list.add("pMSRadarCharacter", pMSRadarCharacterPtr.get());
		Create("JCMSRadarObjectProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.militaryengine.radarlibrary.Msradarobject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long ev_clone_EVString(long pNativeObject, String name);
	/**
	 * 雷达复制
	 * @param name 名称
	 * @return 新的雷达对象
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarObject ev_clone(String name)
	{
		String nameParamValue = name;
		long returnValue = ev_clone_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarObject __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate, "CRadarObject");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarObject)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarObject");
		}
		return __returnValue;
	}
	native private long ev_clone_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.industryengine.militaryengine.radarlibrary.RadarObject ev_clone_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = ev_clone_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarObject __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate, "CRadarObject");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarObject)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarObject");
		}
		return __returnValue;
	}

	native private boolean getRadarAlertResult_void(long pNativeObject);
	/**
	 * 获取雷达告警结果
	 * @return 是否告警
	 */
	public boolean getRadarAlertResult()
	{
		boolean returnValue = getRadarAlertResult_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getRadarAlertResult_void_NoVirtual(long pNativeObject);
	protected boolean getRadarAlertResult_NoVirtual()
	{
		boolean returnValue = getRadarAlertResult_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long computeTerrainShade_EVString_EVString(long pNativeObject, String name, String nodeName);
	/**
	 * 计算雷达遮蔽
	 * @param name 雷达对象名
	 * @param nodeName 需要计算遮蔽的位置的结点名称
	 * @return 遮蔽计算后生成的雷达对象
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarObject computeTerrainShade(String name, String nodeName)
	{
		String nameParamValue = name;
		String nodeNameParamValue = nodeName;
		long returnValue = computeTerrainShade_EVString_EVString(this.nativeObject.pointer, nameParamValue, nodeNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarObject __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate, "CRadarObject");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarObject)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarObject");
		}
		return __returnValue;
	}
	native private long computeTerrainShade_EVString_EVString_NoVirtual(long pNativeObject, String name, String nodeName);
	protected com.earthview.industryengine.militaryengine.radarlibrary.RadarObject computeTerrainShade_NoVirtual(String name, String nodeName)
	{
		String nameParamValue = name;
		String nodeNameParamValue = nodeName;
		long returnValue = computeTerrainShade_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, nodeNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarObject __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate, "CRadarObject");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarObject)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarObject");
		}
		return __returnValue;
	}

	public Msradarobject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Msradarobject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 将对象挂接至节点，加入渲染队列
	 * @return 挂接雷达的节点
	 */
	public com.earthview.world.graphic.SceneNode appendToNode()
	{
		return super.appendToNode_NoVirtual();
	}
	/**
	 * 根据指定位置将对象挂接至节点，加入渲染队列，加入偏北角
	 * @param Real 指定纬度（度数）
	 * @param Real 指定经度（度数）
	 * @param Real 指定高度（绝对高度）
	 * @param EarthView::World::Spatial::Math::CVector3 局部缩放系数
	 * @param EarthView::World::Spatial::Math::CDegree 偏北角（雷达跨度角的角平分线与正北方向夹角），默认为0.0
	 */
	public void appendToNodeWithNorthAngle(double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Degree northAngle)
	{
		super.appendToNodeWithNorthAngle_NoVirtual(lat, lon, alt, localScale, northAngle);
	}
	/**
	 * 获取对象挂接至节点
	 * @return 挂接雷达的节点
	 */
	public com.earthview.world.graphic.SceneNode getParentNode()
	{
		return super.getParentNode_NoVirtual();
	}
	/**
	 * 从对象挂接至节点移除
	 */
	public void detachFromParentNode()
	{
		super.detachFromParentNode_NoVirtual();
	}
	/**
	 * 判断指定雷达与该雷达是否相交
	 * @return 是否相交的布尔值
	 */
	public boolean isIntersected(com.earthview.industryengine.militaryengine.radarlibrary.RadarObject another)
	{
		return super.isIntersected_NoVirtual(another);
	}
	/**
	 * 判断线与雷达是否相交
	 * @return 返回是否相交的布尔值
	 */
	public boolean isIntersected(com.earthview.world.spatial.geometry.Curve curve)
	{
		return super.isIntersected_NoVirtual(curve);
	}
	/**
	 * 判断点与雷达的关系
	 * @return 返回关系枚举
	 */
	public com.earthview.world.geometry3d.EVPointWithinType containsVertex(com.earthview.world.spatial.geometry.Point point)
	{
		return super.containsVertex_NoVirtual(point);
	}
	/**
	 * 创建可渲染数据
	 */
	public void build()
	{
		super.build_NoVirtual();
	}
	/**
	 * 设置雷达是否显示
	 * @param value 是否显示
	 */
	public void setVisible(boolean value)
	{
		super.setVisible_NoVirtual(value);
	}
	/**
	 * 获取雷达是否显示
	 * @return 雷达是否显示，只有当雷达所有部分都不现实是才返回false
	 */
	public boolean getVisible()
	{
		return super.getVisible_NoVirtual();
	}
	/**
	 * 设置包络实体是否显示
	 * @param value 是否显示
	 */
	public void setEnvelopSolidVisible(boolean value)
	{
		super.setEnvelopSolidVisible_NoVirtual(value);
	}
	/**
	 * 获取雷达包络实体是否显示
	 * @return 是否显示
	 */
	public boolean getEnvelopSolidVisible()
	{
		return super.getEnvelopSolidVisible_NoVirtual();
	}
	/**
	 * 设置包络网格是否显示
	 * @param value 是否显示
	 */
	public void setEnvelopFrameVisible(boolean value)
	{
		super.setEnvelopFrameVisible_NoVirtual(value);
	}
	/**
	 * 获取雷达包络实体是否显示
	 * @return 是否显示
	 */
	public boolean getEnvelopFrameVisible()
	{
		return super.getEnvelopFrameVisible_NoVirtual();
	}
	/**
	 * 设置扫描实体是否显示
	 * @param value 是否显示
	 */
	public void setScannerSolidVisible(boolean value)
	{
		super.setScannerSolidVisible_NoVirtual(value);
	}
	/**
	 * 获取雷达扫描实体是否显示
	 * @return 是否显示
	 */
	public boolean getScannerSolidVisible()
	{
		return super.getScannerSolidVisible_NoVirtual();
	}
	/**
	 * 设置扫描实体网格是否显示
	 * @param value 是否显示
	 */
	public void setScannerFrameVisible(boolean value)
	{
		super.setScannerFrameVisible_NoVirtual(value);
	}
	/**
	 * 获取雷达扫描实体网格是否显示
	 * @return 是否显示
	 */
	public boolean getScannerFrameVisible()
	{
		return super.getScannerFrameVisible_NoVirtual();
	}
	/**
	 * 加载XML文件
	 * @param fileName 文件名
	 */
	public void fromFile(String fileName)
	{
		super.fromFile_NoVirtual(fileName);
	}
	/**
	 * 生成XML文件
	 * @param fileName 文件名
	 */
	public void toFile(String fileName)
	{
		super.toFile_NoVirtual(fileName);
	}
	/**
	 * 设置雷达包络实体材质名
	 * @param materialName 材质名称
	 */
	public void setEnvelopSolidMaterial(String materialName, String groupName)
	{
		super.setEnvelopSolidMaterial_NoVirtual(materialName, groupName);
	}
	/**
	 * 设置雷达包络网格材质名称
	 * @param materialName 材质名称
	 */
	public void setEnvelopFrameMaterial(String materialName, String groupName)
	{
		super.setEnvelopFrameMaterial_NoVirtual(materialName, groupName);
	}
	/**
	 * 设置雷达扫描实体材质名称
	 * @param materialName 材质名称
	 */
	public void setScannerSolidMaterial(String materialName, String groupName)
	{
		super.setScannerSolidMaterial_NoVirtual(materialName, groupName);
	}
	/**
	 * 设置雷达扫描网格材质名称
	 * @param materialName 材质名称
	 */
	public void setScannerFrameMaterial(String materialName, String groupName)
	{
		super.setScannerFrameMaterial_NoVirtual(materialName, groupName);
	}
	/**
	 * 获取雷达材质资源组名称
	 * @return 雷达材质资源组名称
	 */
	public String getRadarMaterialResourceGroup()
	{
		return super.getRadarMaterialResourceGroup_NoVirtual();
	}
	/**
	 * 获取雷达包络实体材质名称
	 * @return 雷达包络实体材质名称
	 */
	public String getEnvelopSolidMaterial()
	{
		return super.getEnvelopSolidMaterial_NoVirtual();
	}
	/**
	 * 获取雷达包络网格材质名称
	 * @return 雷达包络网格材质名称
	 */
	public String getEnvelopFrameMaterial()
	{
		return super.getEnvelopFrameMaterial_NoVirtual();
	}
	/**
	 * 获取雷达扫描实体材质名称
	 * @return 雷达扫描实体材质名称
	 */
	public String getScannerSolidMaterial()
	{
		return super.getScannerSolidMaterial_NoVirtual();
	}
	/**
	 * 获取雷达扫描网格材质名称
	 * @return 雷达扫描网格材质名称
	 */
	public String getScannerFrameMaterial()
	{
		return super.getScannerFrameMaterial_NoVirtual();
	}
	
	native protected void register_ev_clone_EVString(long pNativeObject, String method);
	native protected void register_appendToNode_void(long pNativeObject, String method);
	native protected void register_appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree(long pNativeObject, String method);
	native protected void register_getParentNode_void(long pNativeObject, String method);
	native protected void register_detachFromParentNode_void(long pNativeObject, String method);
	native protected void register_isIntersected_CRadarObject(long pNativeObject, String method);
	native protected void register_isIntersected_CCurve(long pNativeObject, String method);
	native protected void register_containsVertex_CPoint(long pNativeObject, String method);
	native protected void register_build_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_setEnvelopSolidVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getEnvelopSolidVisible_void(long pNativeObject, String method);
	native protected void register_setEnvelopFrameVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getEnvelopFrameVisible_void(long pNativeObject, String method);
	native protected void register_setScannerSolidVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getScannerSolidVisible_void(long pNativeObject, String method);
	native protected void register_setScannerFrameVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getScannerFrameVisible_void(long pNativeObject, String method);
	native protected void register_fromFile_EVString(long pNativeObject, String method);
	native protected void register_toFile_EVString(long pNativeObject, String method);
	native protected void register_getRadarAlertResult_void(long pNativeObject, String method);
	native protected void register_setEnvelopSolidMaterial_EVString_EVString(long pNativeObject, String method);
	native protected void register_setEnvelopFrameMaterial_EVString_EVString(long pNativeObject, String method);
	native protected void register_setScannerSolidMaterial_EVString_EVString(long pNativeObject, String method);
	native protected void register_setScannerFrameMaterial_EVString_EVString(long pNativeObject, String method);
	native protected void register_getRadarMaterialResourceGroup_void(long pNativeObject, String method);
	native protected void register_getEnvelopSolidMaterial_void(long pNativeObject, String method);
	native protected void register_getEnvelopFrameMaterial_void(long pNativeObject, String method);
	native protected void register_getScannerSolidMaterial_void(long pNativeObject, String method);
	native protected void register_getScannerFrameMaterial_void(long pNativeObject, String method);
	native protected void register_computeTerrainShade_EVString_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_EVString(this.nativeObject.pointer, "ev_clone_EVString_callback");
			this.register_appendToNode_void(this.nativeObject.pointer, "appendToNode_void_callback");
			this.register_appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree(this.nativeObject.pointer, "appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree_callback");
			this.register_getParentNode_void(this.nativeObject.pointer, "getParentNode_void_callback");
			this.register_detachFromParentNode_void(this.nativeObject.pointer, "detachFromParentNode_void_callback");
			this.register_isIntersected_CRadarObject(this.nativeObject.pointer, "isIntersected_CRadarObject_callback");
			this.register_isIntersected_CCurve(this.nativeObject.pointer, "isIntersected_CCurve_callback");
			this.register_containsVertex_CPoint(this.nativeObject.pointer, "containsVertex_CPoint_callback");
			this.register_build_void(this.nativeObject.pointer, "build_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_setEnvelopSolidVisible_ev_bool(this.nativeObject.pointer, "setEnvelopSolidVisible_ev_bool_callback");
			this.register_getEnvelopSolidVisible_void(this.nativeObject.pointer, "getEnvelopSolidVisible_void_callback");
			this.register_setEnvelopFrameVisible_ev_bool(this.nativeObject.pointer, "setEnvelopFrameVisible_ev_bool_callback");
			this.register_getEnvelopFrameVisible_void(this.nativeObject.pointer, "getEnvelopFrameVisible_void_callback");
			this.register_setScannerSolidVisible_ev_bool(this.nativeObject.pointer, "setScannerSolidVisible_ev_bool_callback");
			this.register_getScannerSolidVisible_void(this.nativeObject.pointer, "getScannerSolidVisible_void_callback");
			this.register_setScannerFrameVisible_ev_bool(this.nativeObject.pointer, "setScannerFrameVisible_ev_bool_callback");
			this.register_getScannerFrameVisible_void(this.nativeObject.pointer, "getScannerFrameVisible_void_callback");
			this.register_fromFile_EVString(this.nativeObject.pointer, "fromFile_EVString_callback");
			this.register_toFile_EVString(this.nativeObject.pointer, "toFile_EVString_callback");
			this.register_getRadarAlertResult_void(this.nativeObject.pointer, "getRadarAlertResult_void_callback");
			this.register_setEnvelopSolidMaterial_EVString_EVString(this.nativeObject.pointer, "setEnvelopSolidMaterial_EVString_EVString_callback");
			this.register_setEnvelopFrameMaterial_EVString_EVString(this.nativeObject.pointer, "setEnvelopFrameMaterial_EVString_EVString_callback");
			this.register_setScannerSolidMaterial_EVString_EVString(this.nativeObject.pointer, "setScannerSolidMaterial_EVString_EVString_callback");
			this.register_setScannerFrameMaterial_EVString_EVString(this.nativeObject.pointer, "setScannerFrameMaterial_EVString_EVString_callback");
			this.register_getRadarMaterialResourceGroup_void(this.nativeObject.pointer, "getRadarMaterialResourceGroup_void_callback");
			this.register_getEnvelopSolidMaterial_void(this.nativeObject.pointer, "getEnvelopSolidMaterial_void_callback");
			this.register_getEnvelopFrameMaterial_void(this.nativeObject.pointer, "getEnvelopFrameMaterial_void_callback");
			this.register_getScannerSolidMaterial_void(this.nativeObject.pointer, "getScannerSolidMaterial_void_callback");
			this.register_getScannerFrameMaterial_void(this.nativeObject.pointer, "getScannerFrameMaterial_void_callback");
			this.register_computeTerrainShade_EVString_EVString(this.nativeObject.pointer, "computeTerrainShade_EVString_EVString_callback");
		}
	}
	
	public static Msradarobject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Msradarobject obj = null;
 		if(baseObj instanceof Msradarobject)
		{
			obj = (Msradarobject)baseObj;
		} else {
			obj = new Msradarobject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMSRadarObject");
			obj.increaseCast();
		}

		return obj;
	}
}
