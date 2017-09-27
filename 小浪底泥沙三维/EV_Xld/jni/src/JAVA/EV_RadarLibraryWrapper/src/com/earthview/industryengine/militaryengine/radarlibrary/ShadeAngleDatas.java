package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 近山遮蔽角集合
 */
public class ShadeAngleDatas extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas", new ShadeAngleDatasClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCShadeAngleDatasProxy", new ShadeAngleDatasClassFactory());
	}

	public ShadeAngleDatas() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCShadeAngleDatasProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void push_back_CShadeAngleData(long pNativeObject, long t);
	public void push_back(com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CShadeAngleData(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData(CreatedWhenConstruct.CWC_NotToCreate, "CShadeAngleData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CShadeAngleData");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData(CreatedWhenConstruct.CWC_NotToCreate, "CShadeAngleData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CShadeAngleData");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_CShadeAngleData(long pNativeObject, long pos, long t);
	public void insert(long pos, com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CShadeAngleData(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	public com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData(CreatedWhenConstruct.CWC_NotToCreate, "CShadeAngleData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CShadeAngleData");
		}
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData(CreatedWhenConstruct.CWC_NotToCreate, "CShadeAngleData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CShadeAngleData");
		}
		return __returnValue;
	}
	native private long createShadeAngleXmlElement_EVString(long pNativeObject, String name);
	/**
	 * 转换为XML节点
	 * @param name 节点名称
	 * @return XML节点对象
	 */
	public com.earthview.world.core.XmlElement createShadeAngleXmlElement(String name)
	{
		String nameParamValue = name;
		long returnValue = createShadeAngleXmlElement_EVString(this.nativeObject.pointer, nameParamValue);
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
	native private void parseShadeAngleXmlElement_CXmlElement(long pNativeObject, long shadeAngleElement);
	/**
	 * 从XML节点解析
	 * @param sectionElement sectionElement
	 * @return XML节点对象
	 */
	public void parseShadeAngleXmlElement(com.earthview.world.core.XmlElement shadeAngleElement)
	{
		long shadeAngleElementParamValue = shadeAngleElement.nativeObject.pointer;
		parseShadeAngleXmlElement_CXmlElement(this.nativeObject.pointer, shadeAngleElementParamValue);
	}
	native private long size_void(long pNativeObject);
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void reserve_ev_size_t(long pNativeObject, long count);
	public void reserve(long count)
	{
		long countParamValue = count;
		reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	protected  long ev_clone_void_callback()
	{
		com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	public com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas(CreatedWhenConstruct.CWC_NotToCreate, "CShadeAngleDatas");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CShadeAngleDatas");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas(CreatedWhenConstruct.CWC_NotToCreate, "CShadeAngleDatas");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleDatas)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CShadeAngleDatas");
		}
		return __returnValue;
	}

	public ShadeAngleDatas(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShadeAngleDatas(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static ShadeAngleDatas fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShadeAngleDatas obj = null;
 		if(baseObj instanceof ShadeAngleDatas)
		{
			obj = (ShadeAngleDatas)baseObj;
		} else {
			obj = new ShadeAngleDatas(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CShadeAngleDatas");
			obj.increaseCast();
		}

		return obj;
	}
}
