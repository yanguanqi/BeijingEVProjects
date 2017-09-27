package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTourPathEvent extends com.earthview.world.spatial3d.controls.KmlTourEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CKmlTourPathEvent", new KmlTourPathEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlTourPathEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlTourPathEvent", null);
	}

	native private long get_mkmlTourPath_void(long pNativeObject);
	public com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr get_mkmlTourPath()
	{
		long jniValue = get_mkmlTourPath_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CKmlTourPathPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKmlTourPathPtr");
		}
		return __returnValue;
	}
	
	native private void set_mkmlTourPath_CKmlTourPathPtr (long pNativeObject, long value);
	public void set_mkmlTourPath(com.earthview.world.spatial3d.kmlmanager.KmlTourPathPtr mkmlTourPath)
	{
		long mkmlTourPathParamValue = mkmlTourPath.nativeObject.pointer;
		
		set_mkmlTourPath_CKmlTourPathPtr(this.nativeObject.pointer, mkmlTourPathParamValue);
	}
	
	public KmlTourPathEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlTourPathEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlTourPathEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlTourPathEvent obj = null;
 		if(baseObj instanceof KmlTourPathEvent)
		{
			obj = (KmlTourPathEvent)baseObj;
		} else {
			obj = new KmlTourPathEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlTourPathEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
