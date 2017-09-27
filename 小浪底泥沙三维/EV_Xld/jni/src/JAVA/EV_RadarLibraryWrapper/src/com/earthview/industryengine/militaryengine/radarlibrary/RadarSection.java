package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 雷达截面（垂直截面线）
 */
public class RadarSection extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection", new RadarSectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCRadarSectionProxy", new RadarSectionClassFactory());
	}

	public RadarSection() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRadarSectionProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.militaryengine.radarlibrary.RadarSection".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getSectionPoints_void(long pNativeObject);
	/**
	 * 获取垂直威力数据
	 * @return 垂直威力数据
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints getSectionPoints()
	{
		long returnValue = getSectionPoints_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints(CreatedWhenConstruct.CWC_NotToCreate, "CSectionPoints");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSectionPoints");
		}
		return __returnValue;
	}
	native private void setSectionPoints_CSectionPoints(long pNativeObject, long sectionPoints);
	/**
	 * 设置垂直威力数据
	 * @param sectionPoints 垂直威力数据
	 */
	public void setSectionPoints(com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints sectionPoints)
	{
		long sectionPointsParamValue = (sectionPoints == null ? 0L : sectionPoints.nativeObject.pointer);
		setSectionPoints_CSectionPoints(this.nativeObject.pointer, sectionPointsParamValue);
	}
	native private long converToLineString_void(long pNativeObject);
	/**
	 * 转换为EarthView::World::Spatial::Geometry::CLineString对象
	 * @return EarthView::World::Spatial::Geometry::CLineString对象
	 */
	public com.earthview.world.spatial.geometry.LineString converToLineString()
	{
		long returnValue = converToLineString_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate, "CLineString");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}
	native private long createSectionXmlElement_EVString(long pNativeObject, String name);
	/**
	 * 转换为XML节点
	 * @param name 节点名称
	 * @return XML节点对象
	 */
	public com.earthview.world.core.XmlElement createSectionXmlElement(String name)
	{
		String nameParamValue = name;
		long returnValue = createSectionXmlElement_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private void parseSectionXmlElement_CXmlElement(long pNativeObject, long sectionElement);
	/**
	 * 从XML节点解析
	 * @param sectionElement sectionElement
	 * @return XML节点对象
	 */
	public void parseSectionXmlElement(com.earthview.world.core.XmlElement sectionElement)
	{
		long sectionElementParamValue = sectionElement.nativeObject.pointer;
		parseSectionXmlElement_CXmlElement(this.nativeObject.pointer, sectionElementParamValue);
	}
	protected  long ev_clone_void_callback()
	{
		com.earthview.industryengine.militaryengine.radarlibrary.RadarSection returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制
	 * @return 雷达垂直威力面
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarSection ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarSection __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarSection(CreatedWhenConstruct.CWC_NotToCreate, "CRadarSection");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarSection)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarSection");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.militaryengine.radarlibrary.RadarSection ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarSection __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarSection(CreatedWhenConstruct.CWC_NotToCreate, "CRadarSection");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarSection)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarSection");
		}
		return __returnValue;
	}

	public RadarSection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RadarSection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static RadarSection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RadarSection obj = null;
 		if(baseObj instanceof RadarSection)
		{
			obj = (RadarSection)baseObj;
		} else {
			obj = new RadarSection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRadarSection");
			obj.increaseCast();
		}

		return obj;
	}
}
