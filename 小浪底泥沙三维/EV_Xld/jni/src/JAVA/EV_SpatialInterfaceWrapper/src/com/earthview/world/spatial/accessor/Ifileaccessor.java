package com.earthview.world.spatial.accessor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 文件获取基类
 */
public class Ifileaccessor extends com.earthview.world.spatial.accessor.Idataaccessor {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Accessor::IFileAccessor", new IfileaccessorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Accessor::JIFileAccessorProxy", new IfileaccessorClassFactory());
	}

	public Ifileaccessor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ifileaccessor(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Ifileaccessor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ifileaccessor obj = null;
 		if(baseObj instanceof Ifileaccessor)
		{
			obj = (Ifileaccessor)baseObj;
		} else {
			obj = new Ifileaccessor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IFileAccessor");
			obj.increaseCast();
		}

		return obj;
	}
}
