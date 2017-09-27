package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 雷达截面点集合
 */
public class SectionPoints extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints", new SectionPointsClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCSectionPointsProxy", new SectionPointsClassFactory());
	}

	public SectionPoints() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSectionPointsProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void push_back_CSectionPoint(long pNativeObject, long t);
	public void push_back(com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CSectionPoint(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint(CreatedWhenConstruct.CWC_NotToCreate, "CSectionPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSectionPoint");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint(CreatedWhenConstruct.CWC_NotToCreate, "CSectionPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSectionPoint");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_CSectionPoint(long pNativeObject, long pos, long t);
	public void insert(long pos, com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CSectionPoint(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint(CreatedWhenConstruct.CWC_NotToCreate, "CSectionPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSectionPoint");
		}
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint(CreatedWhenConstruct.CWC_NotToCreate, "CSectionPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSectionPoint");
		}
		return __returnValue;
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
		com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	public com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints(CreatedWhenConstruct.CWC_NotToCreate, "CSectionPoints");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSectionPoints");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints(CreatedWhenConstruct.CWC_NotToCreate, "CSectionPoints");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.SectionPoints)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSectionPoints");
		}
		return __returnValue;
	}

	public SectionPoints(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SectionPoints(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static SectionPoints fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SectionPoints obj = null;
 		if(baseObj instanceof SectionPoints)
		{
			obj = (SectionPoints)baseObj;
		} else {
			obj = new SectionPoints(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSectionPoints");
			obj.increaseCast();
		}

		return obj;
	}
}
