package com.earthview.world.spatial.accessor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据库句柄接口
 */
public class Idbaccessor extends com.earthview.world.spatial.accessor.Idataaccessor {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Accessor::IDBAccessor", new IdbaccessorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Accessor::JIDBAccessorProxy", new IdbaccessorClassFactory());
	}

	public Idbaccessor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Idbaccessor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取类型
	 * @param  
	 * @return 访问者类型
	 */
	public com.earthview.world.spatial.accessor.EVAccessorType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 根据连接字符串，打开相应的数据文件
	 * @param connectionString 连接字符串
	 * @return 成功关闭，返回true；否则，返回false
	 */
	public boolean open(String connectionString)
	{
		return super.open_NoVirtual(connectionString);
	}
	/**
	 * 关闭打开的数据文件
	 * @param  
	 * @return 成功关闭，返回true；否则，返回false
	 */
	public boolean close()
	{
		return super.close_NoVirtual();
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
	
	public static Idbaccessor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Idbaccessor obj = null;
 		if(baseObj instanceof Idbaccessor)
		{
			obj = (Idbaccessor)baseObj;
		} else {
			obj = new Idbaccessor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IDBAccessor");
			obj.increaseCast();
		}

		return obj;
	}
}
