package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换驱动类工厂
 */
public class ModelDataDriverFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CModelDataDriverFactory", new ModelDataDriverFactoryClassFactory());
	}

	native private static long createDriver_EVModelDataDriverType(int type);
	/**
	 * 创建数据转换驱动
	 * @param type 驱动类型
	 * @return 驱动对象的指针，用factory销毁
	 */
	public static com.earthview.world.spatial3d.dataexchange.ModelDataDriver createDriver(com.earthview.world.spatial3d.dataexchange.EVModelDataDriverType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = createDriver_EVModelDataDriverType(typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataexchange.ModelDataDriver __returnValue = new com.earthview.world.spatial3d.dataexchange.ModelDataDriver(CreatedWhenConstruct.CWC_NotToCreate, "CModelDataDriver");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataexchange.ModelDataDriver)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CModelDataDriver");
		}
		return __returnValue;
	}
	native private static void disposeDriver_CModelDataDriver(long driver);
	/**
	 * 销毁数据转换驱动
	 * @param driver 要释放的驱动
	 */
	public static void disposeDriver(com.earthview.world.spatial3d.dataexchange.ModelDataDriver driver)
	{
		long driverParamValue = (driver == null ? 0L : driver.nativeObject.pointer);
		disposeDriver_CModelDataDriver(driverParamValue);
	}
	public ModelDataDriverFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDataDriverFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelDataDriverFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDataDriverFactory obj = null;
 		if(baseObj instanceof ModelDataDriverFactory)
		{
			obj = (ModelDataDriverFactory)baseObj;
		} else {
			obj = new ModelDataDriverFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDataDriverFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
