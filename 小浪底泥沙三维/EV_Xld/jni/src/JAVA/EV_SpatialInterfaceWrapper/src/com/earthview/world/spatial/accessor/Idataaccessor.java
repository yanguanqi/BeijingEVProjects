package com.earthview.world.spatial.accessor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 访问者类，是所有访问者类的基类，用于数据打开和关闭操作。
 */
public class Idataaccessor extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Accessor::IDataAccessor", new IdataaccessorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Accessor::JIDataAccessorProxy", new IdataaccessorClassFactory());
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.accessor.EVAccessorType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取类型
	 * @param  
	 * @return 访问者类型
	 */
	public com.earthview.world.spatial.accessor.EVAccessorType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.accessor.EVAccessorType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.accessor.EVAccessorType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.accessor.EVAccessorType.toEnum(returnValue);
	}

	protected  boolean open_EVString_callback(String connectionString)
	{
		String connectionStringParamValue = connectionString;
		boolean returnValue = open(connectionStringParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean open_EVString(long pNativeObject, String connectionString);
	/**
	 * 根据连接字符串，打开相应的数据文件
	 * @param connectionString 连接字符串
	 * @return 成功关闭，返回true；否则，返回false
	 */
	public boolean open(String connectionString)
	{
		String connectionStringParamValue = connectionString;
		boolean returnValue = open_EVString(this.nativeObject.pointer, connectionStringParamValue);
		return returnValue;
	}
	native private boolean open_EVString_NoVirtual(long pNativeObject, String connectionString);
	protected boolean open_NoVirtual(String connectionString)
	{
		String connectionStringParamValue = connectionString;
		boolean returnValue = open_EVString_NoVirtual(this.nativeObject.pointer, connectionStringParamValue);
		return returnValue;
	}

	protected  boolean close_void_callback()
	{
		boolean returnValue = close();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean close_void(long pNativeObject);
	/**
	 * 关闭打开的数据文件
	 * @param  
	 * @return 成功关闭，返回true；否则，返回false
	 */
	public boolean close()
	{
		boolean returnValue = close_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean close_void_NoVirtual(long pNativeObject);
	protected boolean close_NoVirtual()
	{
		boolean returnValue = close_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public Idataaccessor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Idataaccessor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_open_EVString(long pNativeObject, String method);
	native protected void register_close_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_open_EVString(this.nativeObject.pointer, "open_EVString_callback");
			this.register_close_void(this.nativeObject.pointer, "close_void_callback");
		}
	}
	
	public static Idataaccessor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Idataaccessor obj = null;
 		if(baseObj instanceof Idataaccessor)
		{
			obj = (Idataaccessor)baseObj;
		} else {
			obj = new Idataaccessor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IDataAccessor");
			obj.increaseCast();
		}

		return obj;
	}
}
