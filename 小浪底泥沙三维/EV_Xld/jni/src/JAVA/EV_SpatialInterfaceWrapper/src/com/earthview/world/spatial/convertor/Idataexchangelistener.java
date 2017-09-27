package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换监听类接口
 */
public class Idataexchangelistener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::IDataExchangeListener", new IdataexchangelistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JIDataExchangeListenerProxy", new IdataexchangelistenerClassFactory());
	}

	protected  void init_ev_uint32_callback(long totalNum)
	{
		long totalNumParamValue = totalNum;
		init(totalNumParamValue);
	}

	native private void init_ev_uint32(long pNativeObject, long totalNum);
	/**
	 * 初始化总要素数目
	 * @param totalNum 总要素数
	 */
	public void init(long totalNum)
	{
		long totalNumParamValue = totalNum;
		init_ev_uint32(this.nativeObject.pointer, totalNumParamValue);
	}
	native private void init_ev_uint32_NoVirtual(long pNativeObject, long totalNum);
	protected void init_NoVirtual(long totalNum)
	{
		long totalNumParamValue = totalNum;
		init_ev_uint32_NoVirtual(this.nativeObject.pointer, totalNumParamValue);
	}

	/**
	 * 默认构造函数
	 */
	public Idataexchangelistener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIDataExchangeListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.convertor.Idataexchangelistener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Idataexchangelistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Idataexchangelistener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_init_ev_uint32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_init_ev_uint32(this.nativeObject.pointer, "init_ev_uint32_callback");
		}
	}
	
	public static Idataexchangelistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Idataexchangelistener obj = null;
 		if(baseObj instanceof Idataexchangelistener)
		{
			obj = (Idataexchangelistener)baseObj;
		} else {
			obj = new Idataexchangelistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IDataExchangeListener");
			obj.increaseCast();
		}

		return obj;
	}
}
