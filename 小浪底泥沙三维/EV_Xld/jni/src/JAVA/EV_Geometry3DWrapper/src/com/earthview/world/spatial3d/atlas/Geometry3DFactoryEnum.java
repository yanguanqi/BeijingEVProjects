package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维类工厂枚举类管理三维工厂的创建和销毁
 */
public class Geometry3DFactoryEnum extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum", new Geometry3DFactoryEnumClassFactory());
	}

	native private boolean registerFactory_IGeometry3DFactory(long pNativeObject, long factory);
	public boolean registerFactory(com.earthview.world.spatial3d.atlas.Igeometry3dfactory factory)
	{
		long factoryParamValue = (factory == null ? 0L : factory.nativeObject.pointer);
		boolean returnValue = registerFactory_IGeometry3DFactory(this.nativeObject.pointer, factoryParamValue);
		return returnValue;
	}
	native private long getFactory_ev_uint16(long pNativeObject, int type);
	public com.earthview.world.spatial3d.atlas.Igeometry3dfactory getFactory(int type)
	{
		int typeParamValue = type;
		long returnValue = getFactory_ev_uint16(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Igeometry3dfactory __returnValue = new com.earthview.world.spatial3d.atlas.Igeometry3dfactory(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry3DFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Igeometry3dfactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry3DFactory");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
	 * @param  
	 * @return 返回单体类的引用
	 */
	public static com.earthview.world.spatial3d.atlas.Geometry3DFactoryEnum getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Geometry3DFactoryEnum __returnValue = new com.earthview.world.spatial3d.atlas.Geometry3DFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate, "CGeometry3DFactoryEnum");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Geometry3DFactoryEnum)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeometry3DFactoryEnum");
		}
		return __returnValue;
	}
	public Geometry3DFactoryEnum(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Geometry3DFactoryEnum(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Geometry3DFactoryEnum fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Geometry3DFactoryEnum obj = null;
 		if(baseObj instanceof Geometry3DFactoryEnum)
		{
			obj = (Geometry3DFactoryEnum)baseObj;
		} else {
			obj = new Geometry3DFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeometry3DFactoryEnum");
			obj.increaseCast();
		}

		return obj;
	}
}
