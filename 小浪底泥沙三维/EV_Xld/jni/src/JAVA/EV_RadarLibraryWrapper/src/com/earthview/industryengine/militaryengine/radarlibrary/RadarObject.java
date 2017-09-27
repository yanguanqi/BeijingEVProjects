package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 雷达基类
 */
public class RadarObject extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject", new RadarObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCRadarObjectProxy", new RadarObjectClassFactory());
	}

	public static class RadarAlertListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener", new RadarAlertListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::JCRadarAlertListenerProxy", new RadarAlertListenerClassFactory());
		}

		public RadarAlertListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCRadarAlertListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.industryengine.militaryengine.radarlibrary.RadarObject$RadarAlertListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void actionPerFrame_CRadarObject_bool_bool_callback(long pRadar, boolean isInRadar, boolean isIntersected)
		{
			com.earthview.industryengine.militaryengine.radarlibrary.RadarObject pRadarParamValue = (pRadar == 0L ? null : new com.earthview.industryengine.militaryengine.radarlibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate));
			if(pRadarParamValue != null)
			{
			pRadarParamValue.setDelegate(true);
			pRadarParamValue.setInstancePointer(new InstancePointer(pRadar));
			IClassFactory pRadarParamValueClassFactory = GlobalClassFactoryMap.get(pRadarParamValue.getCppInstanceTypeName());
			if (pRadarParamValueClassFactory != null)
			{
				pRadarParamValue.setDelegate(true);
				pRadarParamValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarObject)pRadarParamValueClassFactory.create();
				pRadarParamValue.setDelegate(true);
				pRadarParamValue.setInstancePointer(new InstancePointer(pRadar));
			}
			}
			boolean isInRadarParamValue = isInRadar;
			boolean isIntersectedParamValue = isIntersected;
			actionPerFrame(pRadarParamValue, isInRadarParamValue, isIntersectedParamValue);
		}

		native private void actionPerFrame_CRadarObject_bool_bool(long pNativeObject, long pRadar, boolean isInRadar, boolean isIntersected);
		/**
		 * 雷达告警监听方法，只有开启告警才有效
		 * @param pRadar 扫描雷达
		 * @param isInRadar 是否在雷达内
		 * @param isIntersected 扫描波瓣是否与目标相交
		 */
		public void actionPerFrame(com.earthview.industryengine.militaryengine.radarlibrary.RadarObject pRadar, boolean isInRadar, boolean isIntersected)
		{
			long pRadarParamValue = (pRadar == null ? 0L : pRadar.nativeObject.pointer);
			boolean isInRadarParamValue = isInRadar;
			boolean isIntersectedParamValue = isIntersected;
			actionPerFrame_CRadarObject_bool_bool(this.nativeObject.pointer, pRadarParamValue, isInRadarParamValue, isIntersectedParamValue);
		}
		native private void actionPerFrame_CRadarObject_bool_bool_NoVirtual(long pNativeObject, long pRadar, boolean isInRadar, boolean isIntersected);
		protected void actionPerFrame_NoVirtual(com.earthview.industryengine.militaryengine.radarlibrary.RadarObject pRadar, boolean isInRadar, boolean isIntersected)
		{
			long pRadarParamValue = (pRadar == null ? 0L : pRadar.nativeObject.pointer);
			boolean isInRadarParamValue = isInRadar;
			boolean isIntersectedParamValue = isIntersected;
			actionPerFrame_CRadarObject_bool_bool_NoVirtual(this.nativeObject.pointer, pRadarParamValue, isInRadarParamValue, isIntersectedParamValue);
		}

		public RadarAlertListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RadarAlertListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_actionPerFrame_CRadarObject_bool_bool(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_actionPerFrame_CRadarObject_bool_bool(this.nativeObject.pointer, "actionPerFrame_CRadarObject_bool_bool_callback");
			}
		}
		
		public static RadarAlertListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RadarAlertListener obj = null;
 			if(baseObj instanceof RadarAlertListener)
			{
				obj = (RadarAlertListener)baseObj;
			} else {
				obj = new RadarAlertListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRadarAlertListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RadarAlertListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RadarAlertListener emptyInstance = new RadarAlertListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private String getName_void(long pNativeObject);
	/**
	 * 获取雷达名称
	 * @return 雷达名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getScannerName_void(long pNativeObject);
	/**
	 * 获取雷达扫描波瓣名称
	 * @return 雷达扫描波瓣名称
	 */
	public String getScannerName()
	{
		String returnValue = getScannerName_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long ev_clone_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.industryengine.militaryengine.radarlibrary.RadarObject returnValue = ev_clone(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_EVString(long pNativeObject, String name);
	/**
	 * 克隆
	 * @param name 克隆对象的名称
	 * @return 雷达对象
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

	protected  long appendToNode_void_callback()
	{
		com.earthview.world.graphic.SceneNode returnValue = appendToNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long appendToNode_void(long pNativeObject);
	/**
	 * 将对象挂接至节点，加入渲染队列
	 * @return 挂接雷达的节点
	 */
	public com.earthview.world.graphic.SceneNode appendToNode()
	{
		long returnValue = appendToNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}
	native private long appendToNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneNode appendToNode_NoVirtual()
	{
		long returnValue = appendToNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}

	protected  void appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree_callback(double lat, double lon, double alt, long localScale, long northAngle)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		com.earthview.world.spatial.math.Vector3 localScaleParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		localScaleParamValue.setDelegate(true);
		localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		IClassFactory localScaleParamValueClassFactory = GlobalClassFactoryMap.get(localScaleParamValue.getCppInstanceTypeName());
		if (localScaleParamValueClassFactory != null)
		{
			localScaleParamValue.setDelegate(true);
			localScaleParamValue = (com.earthview.world.spatial.math.Vector3)localScaleParamValueClassFactory.create();
			localScaleParamValue.setDelegate(true);
			localScaleParamValue.setInstancePointer(new InstancePointer(localScale));
		}
		com.earthview.world.spatial.math.Degree northAngleParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		northAngleParamValue.setDelegate(true);
		northAngleParamValue.setInstancePointer(new InstancePointer(northAngle));
		IClassFactory northAngleParamValueClassFactory = GlobalClassFactoryMap.get(northAngleParamValue.getCppInstanceTypeName());
		if (northAngleParamValueClassFactory != null)
		{
			northAngleParamValue.setDelegate(true);
			northAngleParamValue = (com.earthview.world.spatial.math.Degree)northAngleParamValueClassFactory.create();
			northAngleParamValue.setDelegate(true);
			northAngleParamValue.setInstancePointer(new InstancePointer(northAngle));
		}
		appendToNodeWithNorthAngle(latParamValue, lonParamValue, altParamValue, localScaleParamValue, northAngleParamValue);
	}

	native private void appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree(long pNativeObject, double lat, double lon, double alt, long localScale, long northAngle);
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
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long northAngleParamValue = northAngle.nativeObject.pointer;
		appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue, localScaleParamValue, northAngleParamValue);
	}
	native private void appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree_NoVirtual(long pNativeObject, double lat, double lon, double alt, long localScale, long northAngle);
	protected void appendToNodeWithNorthAngle_NoVirtual(double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 localScale, com.earthview.world.spatial.math.Degree northAngle)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long localScaleParamValue = localScale.nativeObject.pointer;
		long northAngleParamValue = northAngle.nativeObject.pointer;
		appendToNodeWithNorthAngle_Real_Real_Real_CVector3_CDegree_NoVirtual(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue, localScaleParamValue, northAngleParamValue);
	}

	protected  long getParentNode_void_callback()
	{
		com.earthview.world.graphic.SceneNode returnValue = getParentNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getParentNode_void(long pNativeObject);
	/**
	 * 获取对象挂接至节点
	 * @return 挂接雷达的节点
	 */
	public com.earthview.world.graphic.SceneNode getParentNode()
	{
		long returnValue = getParentNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}
	native private long getParentNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneNode getParentNode_NoVirtual()
	{
		long returnValue = getParentNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}

	protected  void detachFromParentNode_void_callback()
	{
		detachFromParentNode();
	}

	native private void detachFromParentNode_void(long pNativeObject);
	/**
	 * 从对象挂接至节点移除
	 */
	public void detachFromParentNode()
	{
		detachFromParentNode_void(this.nativeObject.pointer);
	}
	native private void detachFromParentNode_void_NoVirtual(long pNativeObject);
	protected void detachFromParentNode_NoVirtual()
	{
		detachFromParentNode_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean isAppended_void(long pNativeObject);
	/**
	 * 对象是否已经挂接至节点
	 * @return 是否已挂接至节点
	 */
	public boolean isAppended()
	{
		boolean returnValue = isAppended_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取雷达类型
	 * @return 雷达类型
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.CRadarType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.industryengine.militaryengine.radarlibrary.CRadarType.toEnum(returnValue);
	}
	native private long getEnvelopSolid_void(long pNativeObject);
	/**
	 * 获取雷达包络实体数据
	 * @return 雷达包络实体数据
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx getEnvelopSolid()
	{
		long returnValue = getEnvelopSolid_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private long getEnvelopFrame_void(long pNativeObject);
	/**
	 * 获取雷达包络网格数据
	 * @return 雷达包络网格数据
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx getEnvelopFrame()
	{
		long returnValue = getEnvelopFrame_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private long getScannerSolid_void(long pNativeObject);
	/**
	 * 获取雷达扫描体实体数据
	 * @return 雷达包络扫描体实体数据
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx getScannerSolid()
	{
		long returnValue = getScannerSolid_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private long getScannerFrame_void(long pNativeObject);
	/**
	 * 获取雷达扫描体网格数据
	 * @return 雷达包络扫描体网格数据
	 */
	public com.earthview.world.geometry3d.SimpleRenderableEx getScannerFrame()
	{
		long returnValue = getScannerFrame_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.SimpleRenderableEx __returnValue = new com.earthview.world.geometry3d.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleRenderableEx");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.SimpleRenderableEx)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleRenderableEx");
		}
		return __returnValue;
	}
	native private long envelopSolidUnions_EVString_CRadarObject_CVector3(long pNativeObject, String name, long another, long translate);
	/**
	 * 进行（A∪B）的操作
	 * @param name 分析结果对象的名称
	 * @param another 待操作雷达对象
	 * @param translate 世界坐标下两个对象计算之后与重新计算的相对原点的偏移量
	 * @return 结果几何体
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarObject envelopSolidUnions(String name, com.earthview.industryengine.militaryengine.radarlibrary.RadarObject another, com.earthview.world.spatial.math.Vector3 translate)
	{
		String nameParamValue = name;
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = envelopSolidUnions_EVString_CRadarObject_CVector3(this.nativeObject.pointer, nameParamValue, anotherParamValue, translateParamValue);
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
	native private long envelopSolidIntersect_EVString_CRadarObject_CVector3(long pNativeObject, String name, long another, long translate);
	/**
	 * 进行（A∩B）的操作
	 * @param name 分析结果对象的名称
	 * @param another 待操作雷达对象
	 * @param translate 世界坐标下两个对象计算之后与重新计算的相对原点的偏移量
	 * @return 结果几何体
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarObject envelopSolidIntersect(String name, com.earthview.industryengine.militaryengine.radarlibrary.RadarObject another, com.earthview.world.spatial.math.Vector3 translate)
	{
		String nameParamValue = name;
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = envelopSolidIntersect_EVString_CRadarObject_CVector3(this.nativeObject.pointer, nameParamValue, anotherParamValue, translateParamValue);
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
	native private long envelopSolidMinus_EVString_CRadarObject_CVector3(long pNativeObject, String name, long another, long translate);
	/**
	 * 进行（A-B）的操作
	 * @param name 分析结果对象的名称
	 * @param another 待操作雷达对象
	 * @param translate 世界坐标下两个对象计算之后与重新计算的相对原点的偏移量
	 * @return 结果几何体
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarObject envelopSolidMinus(String name, com.earthview.industryengine.militaryengine.radarlibrary.RadarObject another, com.earthview.world.spatial.math.Vector3 translate)
	{
		String nameParamValue = name;
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = envelopSolidMinus_EVString_CRadarObject_CVector3(this.nativeObject.pointer, nameParamValue, anotherParamValue, translateParamValue);
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
	native private long envelopSolidDifference_EVString_CRadarObject_CVector3(long pNativeObject, String name, long another, long translate);
	/**
	 * 进行（（A∪B)-（A∩B））的操作
	 * @param name 分析结果对象的名称
	 * @param another 待操作几何体
	 * @param translate 世界坐标下两个对象计算之后与重新计算的相对原点的偏移量
	 * @return 结果几何体
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarObject envelopSolidDifference(String name, com.earthview.industryengine.militaryengine.radarlibrary.RadarObject another, com.earthview.world.spatial.math.Vector3 translate)
	{
		String nameParamValue = name;
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long translateParamValue = translate.nativeObject.pointer;
		long returnValue = envelopSolidDifference_EVString_CRadarObject_CVector3(this.nativeObject.pointer, nameParamValue, anotherParamValue, translateParamValue);
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
	native private void envelopSolidSliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_CVector3(long pNativeObject, long another, long result, long sharedEdges, long translate);
	/**
	 * 用一个非封闭对象来切分雷达
	 * @param another 用来切分的面
	 * @param result 切分结果，通常或包含两个结果，内部的和外部的
	 * @param sharedEdges 两个对象相交的边缘点序列
	 * @param translate 世界坐标下两个对象计算之后与重新计算的相对原点的偏移量
	 */
	public void envelopSolidSliceAndClassify(com.earthview.world.geometry3d.SimpleRenderableEx another, com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet result, com.earthview.world.spatial.geometry.CoordinateSequence sharedEdges, com.earthview.world.spatial.math.Vector3 translate)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		long sharedEdgesParamValue = sharedEdges.nativeObject.pointer;
		long translateParamValue = translate.nativeObject.pointer;
		envelopSolidSliceAndClassify_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_CVector3(this.nativeObject.pointer, anotherParamValue, resultParamValue, sharedEdgesParamValue, translateParamValue);
	}
	protected  boolean isIntersected_CRadarObject_callback(long another)
	{
		com.earthview.industryengine.militaryengine.radarlibrary.RadarObject anotherParamValue = (another == 0L ? null : new com.earthview.industryengine.militaryengine.radarlibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(anotherParamValue != null)
		{
		anotherParamValue.setDelegate(true);
		anotherParamValue.setInstancePointer(new InstancePointer(another));
		IClassFactory anotherParamValueClassFactory = GlobalClassFactoryMap.get(anotherParamValue.getCppInstanceTypeName());
		if (anotherParamValueClassFactory != null)
		{
			anotherParamValue.setDelegate(true);
			anotherParamValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarObject)anotherParamValueClassFactory.create();
			anotherParamValue.setDelegate(true);
			anotherParamValue.setInstancePointer(new InstancePointer(another));
		}
		}
		boolean returnValue = isIntersected(anotherParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isIntersected_CRadarObject(long pNativeObject, long another);
	/**
	 * 判断指定雷达与该雷达是否相交
	 * @return 是否相交的布尔值
	 */
	public boolean isIntersected(com.earthview.industryengine.militaryengine.radarlibrary.RadarObject another)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		boolean returnValue = isIntersected_CRadarObject(this.nativeObject.pointer, anotherParamValue);
		return returnValue;
	}
	native private boolean isIntersected_CRadarObject_NoVirtual(long pNativeObject, long another);
	protected boolean isIntersected_NoVirtual(com.earthview.industryengine.militaryengine.radarlibrary.RadarObject another)
	{
		long anotherParamValue = (another == null ? 0L : another.nativeObject.pointer);
		boolean returnValue = isIntersected_CRadarObject_NoVirtual(this.nativeObject.pointer, anotherParamValue);
		return returnValue;
	}

	protected  boolean isIntersected_CCurve_callback(long curve)
	{
		com.earthview.world.spatial.geometry.Curve curveParamValue = (curve == 0L ? null : new com.earthview.world.spatial.geometry.Curve(CreatedWhenConstruct.CWC_NotToCreate));
		if(curveParamValue != null)
		{
		curveParamValue.setDelegate(true);
		curveParamValue.setInstancePointer(new InstancePointer(curve));
		IClassFactory curveParamValueClassFactory = GlobalClassFactoryMap.get(curveParamValue.getCppInstanceTypeName());
		if (curveParamValueClassFactory != null)
		{
			curveParamValue.setDelegate(true);
			curveParamValue = (com.earthview.world.spatial.geometry.Curve)curveParamValueClassFactory.create();
			curveParamValue.setDelegate(true);
			curveParamValue.setInstancePointer(new InstancePointer(curve));
		}
		}
		boolean returnValue = isIntersected(curveParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isIntersected_CCurve(long pNativeObject, long curve);
	/**
	 * 判断线与雷达是否相交
	 * @return 返回是否相交的布尔值
	 */
	public boolean isIntersected(com.earthview.world.spatial.geometry.Curve curve)
	{
		long curveParamValue = (curve == null ? 0L : curve.nativeObject.pointer);
		boolean returnValue = isIntersected_CCurve(this.nativeObject.pointer, curveParamValue);
		return returnValue;
	}
	native private boolean isIntersected_CCurve_NoVirtual(long pNativeObject, long curve);
	protected boolean isIntersected_NoVirtual(com.earthview.world.spatial.geometry.Curve curve)
	{
		long curveParamValue = (curve == null ? 0L : curve.nativeObject.pointer);
		boolean returnValue = isIntersected_CCurve_NoVirtual(this.nativeObject.pointer, curveParamValue);
		return returnValue;
	}

	protected  int containsVertex_CPoint_callback(long point)
	{
		com.earthview.world.spatial.geometry.Point pointParamValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Point)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		com.earthview.world.geometry3d.EVPointWithinType returnValue = containsVertex(pointParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int containsVertex_CPoint(long pNativeObject, long point);
	/**
	 * 判断点与雷达的关系
	 * @return 返回关系枚举
	 */
	public com.earthview.world.geometry3d.EVPointWithinType containsVertex(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = point.nativeObject.pointer;
		int returnValue = containsVertex_CPoint(this.nativeObject.pointer, pointParamValue);
		return com.earthview.world.geometry3d.EVPointWithinType.toEnum(returnValue);
	}
	native private int containsVertex_CPoint_NoVirtual(long pNativeObject, long point);
	protected com.earthview.world.geometry3d.EVPointWithinType containsVertex_NoVirtual(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = point.nativeObject.pointer;
		int returnValue = containsVertex_CPoint_NoVirtual(this.nativeObject.pointer, pointParamValue);
		return com.earthview.world.geometry3d.EVPointWithinType.toEnum(returnValue);
	}

	protected  void build_void_callback()
	{
		build();
	}

	native private void build_void(long pNativeObject);
	/**
	 * 创建可渲染数据
	 */
	public void build()
	{
		build_void(this.nativeObject.pointer);
	}
	native private void build_void_NoVirtual(long pNativeObject);
	protected void build_NoVirtual()
	{
		build_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setVisible_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setVisible(valueParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置雷达是否显示
	 * @param value 是否显示
	 */
	public void setVisible(boolean value)
	{
		boolean valueParamValue = value;
		setVisible_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setVisible_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  boolean getVisible_void_callback()
	{
		boolean returnValue = getVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getVisible_void(long pNativeObject);
	/**
	 * 获取雷达是否显示
	 * @return 雷达是否显示，只有当雷达所有部分都不现实是才返回false
	 */
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getVisible_void_NoVirtual(long pNativeObject);
	protected boolean getVisible_NoVirtual()
	{
		boolean returnValue = getVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setEnvelopSolidVisible_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setEnvelopSolidVisible(valueParamValue);
	}

	native private void setEnvelopSolidVisible_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置包络实体是否显示
	 * @param value 是否显示
	 */
	public void setEnvelopSolidVisible(boolean value)
	{
		boolean valueParamValue = value;
		setEnvelopSolidVisible_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setEnvelopSolidVisible_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setEnvelopSolidVisible_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setEnvelopSolidVisible_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  boolean getEnvelopSolidVisible_void_callback()
	{
		boolean returnValue = getEnvelopSolidVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getEnvelopSolidVisible_void(long pNativeObject);
	/**
	 * 获取雷达包络实体是否显示
	 * @return 是否显示
	 */
	public boolean getEnvelopSolidVisible()
	{
		boolean returnValue = getEnvelopSolidVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getEnvelopSolidVisible_void_NoVirtual(long pNativeObject);
	protected boolean getEnvelopSolidVisible_NoVirtual()
	{
		boolean returnValue = getEnvelopSolidVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setEnvelopFrameVisible_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setEnvelopFrameVisible(valueParamValue);
	}

	native private void setEnvelopFrameVisible_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置包络网格是否显示
	 * @param value 是否显示
	 */
	public void setEnvelopFrameVisible(boolean value)
	{
		boolean valueParamValue = value;
		setEnvelopFrameVisible_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setEnvelopFrameVisible_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setEnvelopFrameVisible_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setEnvelopFrameVisible_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  boolean getEnvelopFrameVisible_void_callback()
	{
		boolean returnValue = getEnvelopFrameVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getEnvelopFrameVisible_void(long pNativeObject);
	/**
	 * 获取雷达包络实体是否显示
	 * @return 是否显示
	 */
	public boolean getEnvelopFrameVisible()
	{
		boolean returnValue = getEnvelopFrameVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getEnvelopFrameVisible_void_NoVirtual(long pNativeObject);
	protected boolean getEnvelopFrameVisible_NoVirtual()
	{
		boolean returnValue = getEnvelopFrameVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setScannerSolidVisible_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setScannerSolidVisible(valueParamValue);
	}

	native private void setScannerSolidVisible_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置扫描实体是否显示
	 * @param value 是否显示
	 */
	public void setScannerSolidVisible(boolean value)
	{
		boolean valueParamValue = value;
		setScannerSolidVisible_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setScannerSolidVisible_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setScannerSolidVisible_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setScannerSolidVisible_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  boolean getScannerSolidVisible_void_callback()
	{
		boolean returnValue = getScannerSolidVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getScannerSolidVisible_void(long pNativeObject);
	/**
	 * 获取雷达扫描实体是否显示
	 * @return 是否显示
	 */
	public boolean getScannerSolidVisible()
	{
		boolean returnValue = getScannerSolidVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getScannerSolidVisible_void_NoVirtual(long pNativeObject);
	protected boolean getScannerSolidVisible_NoVirtual()
	{
		boolean returnValue = getScannerSolidVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setScannerFrameVisible_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setScannerFrameVisible(valueParamValue);
	}

	native private void setScannerFrameVisible_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置扫描实体网格是否显示
	 * @param value 是否显示
	 */
	public void setScannerFrameVisible(boolean value)
	{
		boolean valueParamValue = value;
		setScannerFrameVisible_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setScannerFrameVisible_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setScannerFrameVisible_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setScannerFrameVisible_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  boolean getScannerFrameVisible_void_callback()
	{
		boolean returnValue = getScannerFrameVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getScannerFrameVisible_void(long pNativeObject);
	/**
	 * 获取雷达扫描实体网格是否显示
	 * @return 是否显示
	 */
	public boolean getScannerFrameVisible()
	{
		boolean returnValue = getScannerFrameVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getScannerFrameVisible_void_NoVirtual(long pNativeObject);
	protected boolean getScannerFrameVisible_NoVirtual()
	{
		boolean returnValue = getScannerFrameVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void fromFile_EVString_callback(String fileName)
	{
		String fileNameParamValue = fileName;
		fromFile(fileNameParamValue);
	}

	native private void fromFile_EVString(long pNativeObject, String fileName);
	/**
	 * 加载XML文件
	 * @param fileName 文件名
	 */
	public void fromFile(String fileName)
	{
		String fileNameParamValue = fileName;
		fromFile_EVString(this.nativeObject.pointer, fileNameParamValue);
	}
	native private void fromFile_EVString_NoVirtual(long pNativeObject, String fileName);
	protected void fromFile_NoVirtual(String fileName)
	{
		String fileNameParamValue = fileName;
		fromFile_EVString_NoVirtual(this.nativeObject.pointer, fileNameParamValue);
	}

	protected  void toFile_EVString_callback(String fileName)
	{
		String fileNameParamValue = fileName;
		toFile(fileNameParamValue);
	}

	native private void toFile_EVString(long pNativeObject, String fileName);
	/**
	 * 生成XML文件
	 * @param fileName 文件名
	 */
	public void toFile(String fileName)
	{
		String fileNameParamValue = fileName;
		toFile_EVString(this.nativeObject.pointer, fileNameParamValue);
	}
	native private void toFile_EVString_NoVirtual(long pNativeObject, String fileName);
	protected void toFile_NoVirtual(String fileName)
	{
		String fileNameParamValue = fileName;
		toFile_EVString_NoVirtual(this.nativeObject.pointer, fileNameParamValue);
	}

	protected  boolean getRadarAlertResult_void_callback()
	{
		boolean returnValue = getRadarAlertResult();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getRadarAlertResult_void(long pNativeObject);
	/**
	 * 得到雷达告警结果
	 * @return 雷达告警结果
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

	protected  void setEnvelopSolidMaterial_EVString_EVString_callback(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setEnvelopSolidMaterial(materialNameParamValue, groupNameParamValue);
	}

	native private void setEnvelopSolidMaterial_EVString_EVString(long pNativeObject, String materialName, String groupName);
	/**
	 * 设置雷达包络实体材质名
	 * @param materialName 材质名称
	 */
	public void setEnvelopSolidMaterial(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setEnvelopSolidMaterial_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue);
	}
	native private void setEnvelopSolidMaterial_EVString_EVString_NoVirtual(long pNativeObject, String materialName, String groupName);
	protected void setEnvelopSolidMaterial_NoVirtual(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setEnvelopSolidMaterial_EVString_EVString_NoVirtual(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue);
	}

	protected  void setEnvelopFrameMaterial_EVString_EVString_callback(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setEnvelopFrameMaterial(materialNameParamValue, groupNameParamValue);
	}

	native private void setEnvelopFrameMaterial_EVString_EVString(long pNativeObject, String materialName, String groupName);
	/**
	 * 设置雷达包络网格材质名称
	 * @param materialName 材质名称
	 */
	public void setEnvelopFrameMaterial(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setEnvelopFrameMaterial_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue);
	}
	native private void setEnvelopFrameMaterial_EVString_EVString_NoVirtual(long pNativeObject, String materialName, String groupName);
	protected void setEnvelopFrameMaterial_NoVirtual(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setEnvelopFrameMaterial_EVString_EVString_NoVirtual(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue);
	}

	protected  void setScannerSolidMaterial_EVString_EVString_callback(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setScannerSolidMaterial(materialNameParamValue, groupNameParamValue);
	}

	native private void setScannerSolidMaterial_EVString_EVString(long pNativeObject, String materialName, String groupName);
	/**
	 * 设置雷达扫描实体材质名称
	 * @param materialName 材质名称
	 */
	public void setScannerSolidMaterial(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setScannerSolidMaterial_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue);
	}
	native private void setScannerSolidMaterial_EVString_EVString_NoVirtual(long pNativeObject, String materialName, String groupName);
	protected void setScannerSolidMaterial_NoVirtual(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setScannerSolidMaterial_EVString_EVString_NoVirtual(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue);
	}

	protected  void setScannerFrameMaterial_EVString_EVString_callback(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setScannerFrameMaterial(materialNameParamValue, groupNameParamValue);
	}

	native private void setScannerFrameMaterial_EVString_EVString(long pNativeObject, String materialName, String groupName);
	/**
	 * 设置雷达扫描网格材质名称
	 * @param materialName 材质名称
	 */
	public void setScannerFrameMaterial(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setScannerFrameMaterial_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue);
	}
	native private void setScannerFrameMaterial_EVString_EVString_NoVirtual(long pNativeObject, String materialName, String groupName);
	protected void setScannerFrameMaterial_NoVirtual(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		setScannerFrameMaterial_EVString_EVString_NoVirtual(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue);
	}

	protected  String getRadarMaterialResourceGroup_void_callback()
	{
		String returnValue = getRadarMaterialResourceGroup();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getRadarMaterialResourceGroup_void(long pNativeObject);
	/**
	 * 获取雷达材质资源组名称
	 * @return 雷达材质资源组名称
	 */
	public String getRadarMaterialResourceGroup()
	{
		String returnValue = getRadarMaterialResourceGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getRadarMaterialResourceGroup_void_NoVirtual(long pNativeObject);
	protected String getRadarMaterialResourceGroup_NoVirtual()
	{
		String returnValue = getRadarMaterialResourceGroup_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getEnvelopSolidMaterial_void_callback()
	{
		String returnValue = getEnvelopSolidMaterial();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getEnvelopSolidMaterial_void(long pNativeObject);
	/**
	 * 获取雷达包络实体材质名称
	 * @return 雷达包络实体材质名称
	 */
	public String getEnvelopSolidMaterial()
	{
		String returnValue = getEnvelopSolidMaterial_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getEnvelopSolidMaterial_void_NoVirtual(long pNativeObject);
	protected String getEnvelopSolidMaterial_NoVirtual()
	{
		String returnValue = getEnvelopSolidMaterial_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getEnvelopFrameMaterial_void_callback()
	{
		String returnValue = getEnvelopFrameMaterial();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getEnvelopFrameMaterial_void(long pNativeObject);
	/**
	 * 获取雷达包络网格材质名称
	 * @return 雷达包络网格材质名称
	 */
	public String getEnvelopFrameMaterial()
	{
		String returnValue = getEnvelopFrameMaterial_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getEnvelopFrameMaterial_void_NoVirtual(long pNativeObject);
	protected String getEnvelopFrameMaterial_NoVirtual()
	{
		String returnValue = getEnvelopFrameMaterial_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getScannerSolidMaterial_void_callback()
	{
		String returnValue = getScannerSolidMaterial();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getScannerSolidMaterial_void(long pNativeObject);
	/**
	 * 获取雷达扫描实体材质名称
	 * @return 雷达扫描实体材质名称
	 */
	public String getScannerSolidMaterial()
	{
		String returnValue = getScannerSolidMaterial_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getScannerSolidMaterial_void_NoVirtual(long pNativeObject);
	protected String getScannerSolidMaterial_NoVirtual()
	{
		String returnValue = getScannerSolidMaterial_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getScannerFrameMaterial_void_callback()
	{
		String returnValue = getScannerFrameMaterial();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getScannerFrameMaterial_void(long pNativeObject);
	/**
	 * 获取雷达扫描网格材质名称
	 * @return 雷达扫描网格材质名称
	 */
	public String getScannerFrameMaterial()
	{
		String returnValue = getScannerFrameMaterial_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getScannerFrameMaterial_void_NoVirtual(long pNativeObject);
	protected String getScannerFrameMaterial_NoVirtual()
	{
		String returnValue = getScannerFrameMaterial_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setRadarAlertListener_CRadarAlertListener(long pNativeObject, long ref_pListener);
	/**
	 * 设置雷达告警监听
	 * @param ref_pListener 雷达告警监听
	 */
	public void setRadarAlertListener(com.earthview.industryengine.militaryengine.radarlibrary.RadarObject.RadarAlertListener ref_pListener)
	{
		long ref_pListenerParamValue = (ref_pListener == null ? 0L : ref_pListener.nativeObject.pointer);
		setRadarAlertListener_CRadarAlertListener(this.nativeObject.pointer, ref_pListenerParamValue);
	}
	native private long getRadarAlertListener_void(long pNativeObject);
	/**
	 * 获取雷达告警监听对象
	 * @return 雷达告警监听对象
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarObject.RadarAlertListener getRadarAlertListener()
	{
		long returnValue = getRadarAlertListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarObject.RadarAlertListener __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarObject.RadarAlertListener(CreatedWhenConstruct.CWC_NotToCreate, "CRadarAlertListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarObject.RadarAlertListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadarAlertListener");
		}
		return __returnValue;
	}
	native private void setNeedAlert_bool(long pNativeObject, boolean value);
	/**
	 * 获取是否进行雷达告警
	 */
	public void setNeedAlert(boolean value)
	{
		boolean valueParamValue = value;
		setNeedAlert_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getNeedAlert_void(long pNativeObject);
	/**
	 * 获取是否进行雷达告警
	 * @return 是否告警
	 */
	public boolean getNeedAlert()
	{
		boolean returnValue = getNeedAlert_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getLockScannerToTarget_void(long pNativeObject);
	/**
	 * 开启雷达告警情况下，扫描体是否锁定目标
	 * @return 是否锁定
	 */
	public boolean getLockScannerToTarget()
	{
		boolean returnValue = getLockScannerToTarget_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLockScannerToTarget_bool(long pNativeObject, boolean value);
	/**
	 * 开启雷达告警情况下，扫描体是否锁定目标
	 */
	public void setLockScannerToTarget(boolean value)
	{
		boolean valueParamValue = value;
		setLockScannerToTarget_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setModelObjectPosition_CVector3(long pNativeObject, long pos);
	/**
	 * 设置模型位置
	 */
	public void setModelObjectPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setModelObjectPosition_CVector3(this.nativeObject.pointer, posParamValue);
	}
	native private long getRadarCharacter_void(long pNativeObject);
	/**
	 * 获取雷达特征对象
	 * @return 雷达特征对象
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter getRadarCharacter()
	{
		long returnValue = getRadarCharacter_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate, "CRadarCharacter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadarCharacter");
		}
		return __returnValue;
	}
	protected  long computeTerrainShade_EVString_EVString_callback(String name, String nodeName)
	{
		String nameParamValue = name;
		String nodeNameParamValue = nodeName;
		com.earthview.industryengine.militaryengine.radarlibrary.RadarObject returnValue = computeTerrainShade(nameParamValue, nodeNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	native private void refresh_void(long pNativeObject);
	/**
	 * 重新设置EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter后更新雷达
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private long convertToMesh_EVString_EVString(long pNativeObject, String meshName, String groupName);
	public com.earthview.world.graphic.MeshPtr convertToMesh(String meshName, String groupName)
	{
		String meshNameParamValue = meshName;
		String groupNameParamValue = groupName;
		long returnValue = convertToMesh_EVString_EVString(this.nativeObject.pointer, meshNameParamValue, groupNameParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	public RadarObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RadarObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static RadarObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RadarObject obj = null;
 		if(baseObj instanceof RadarObject)
		{
			obj = (RadarObject)baseObj;
		} else {
			obj = new RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRadarObject");
			obj.increaseCast();
		}

		return obj;
	}
}
