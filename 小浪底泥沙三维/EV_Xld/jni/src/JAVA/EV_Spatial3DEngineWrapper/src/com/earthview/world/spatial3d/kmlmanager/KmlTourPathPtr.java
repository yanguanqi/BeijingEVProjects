package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTourPathPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr", new KmlTourPathPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlTourPathPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlTourPathPtr", null);
	}

	/**
	 * 拷贝构造
	 */
	public KmlTourPathPtr(com.earthview.world.spatial3d.kmlmanager.KmlTourPath rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CKmlTourPathPtr", list);
	}

	/**
	 * 拷贝构造
	 */
	public KmlTourPathPtr(com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CKmlTourPathPtr", list);
	}

	native private long get_void(long pNativeObject);
	/**
	 * 获取对象
	 * @return 返回游览路径
	 */
	public com.earthview.world.spatial3d.kmlmanager.KmlTourPath get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.kmlmanager.KmlTourPath __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlTourPath(CreatedWhenConstruct.CWC_NotToCreate, "CKmlTourPath");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlTourPath)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlTourPath");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CKmlTourPathPtr(long pNativeObject, long r);
	/**
	 * 重载赋值运算符
	 */
	public com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr OperatorAssign(com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CKmlTourPathPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr(CreatedWhenConstruct.CWC_NotToCreate, "CKmlTourPathPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlTourPathPtr");
		}
		return __returnValue;
	}
	public KmlTourPathPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlTourPathPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlTourPathPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlTourPathPtr obj = null;
 		if(baseObj instanceof KmlTourPathPtr)
		{
			obj = (KmlTourPathPtr)baseObj;
		} else {
			obj = new KmlTourPathPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlTourPathPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
