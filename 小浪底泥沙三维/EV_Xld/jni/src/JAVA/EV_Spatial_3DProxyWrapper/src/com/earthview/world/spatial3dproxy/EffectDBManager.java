package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectDBManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CEffectDBManager", new EffectDBManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EffectDBManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEffectDBManager", null);
	}

	native private static long getSingletonPtr_void();
	/**
	 * 获取EarthView::World::Spatial3DProxy::CEffectDBManager对象指针
	 * @param  
	 * @return EarthView::World::Spatial3DProxy::CEffectDBManager对象指针
	 */
	public static com.earthview.world.spatial3dproxy.EffectDBManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3dproxy.EffectDBManager __returnValue = new com.earthview.world.spatial3dproxy.EffectDBManager(CreatedWhenConstruct.CWC_NotToCreate, "CEffectDBManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3dproxy.EffectDBManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffectDBManager");
		}
		return __returnValue;
	}
	native private long getStringInterface_CEffectObject(long pNativeObject, long obj);
	/**
	 * 获取特效对象obj的EarthView::World::Core::CStringInterface
	 * @param obj 特效对象
	 * @return EarthView::World::Core::CStringInterface
	 */
	public com.earthview.world.core.StringInterface getStringInterface(com.earthview.world.spatial3d.effectmanager.EffectObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		long returnValue = getStringInterface_CEffectObject(this.nativeObject.pointer, objParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.StringInterface __returnValue = new com.earthview.world.core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStringInterface");
		}
		return __returnValue;
	}
	public EffectDBManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectDBManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectDBManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectDBManager obj = null;
 		if(baseObj instanceof EffectDBManager)
		{
			obj = (EffectDBManager)baseObj;
		} else {
			obj = new EffectDBManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectDBManager");
			obj.increaseCast();
		}

		return obj;
	}
}
