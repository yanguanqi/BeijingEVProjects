package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换驱动类工厂
 */
public class DataDriverFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataDriverFactory", new DataDriverFactoryClassFactory());
	}

	native private static long createDriver_EVDataDriverType(int type);
	/**
	 * 创建数据转换驱动
	 * @param type 驱动类型
	 * @return 驱动对象的指针，用factory销毁
	 */
	public static com.earthview.world.spatial.convertor.DataDriver createDriver(com.earthview.world.spatial.convertor.EVDataDriverType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = createDriver_EVDataDriverType(typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.convertor.DataDriver __returnValue = new com.earthview.world.spatial.convertor.DataDriver(CreatedWhenConstruct.CWC_NotToCreate, "CDataDriver");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.convertor.DataDriver)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataDriver");
		}
		return __returnValue;
	}
	native private static void disposeDriver_CDataDriver(long driver);
	/**
	 * 销毁数据转换驱动
	 * @param driver 要释放的驱动
	 */
	public static void disposeDriver(com.earthview.world.spatial.convertor.DataDriver driver)
	{
		long driverParamValue = (driver == null ? 0L : driver.nativeObject.pointer);
		disposeDriver_CDataDriver(driverParamValue);
	}
	public DataDriverFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataDriverFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataDriverFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataDriverFactory obj = null;
 		if(baseObj instanceof DataDriverFactory)
		{
			obj = (DataDriverFactory)baseObj;
		} else {
			obj = new DataDriverFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataDriverFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
