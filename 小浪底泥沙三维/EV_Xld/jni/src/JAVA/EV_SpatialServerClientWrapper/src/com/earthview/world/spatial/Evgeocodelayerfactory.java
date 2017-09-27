package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView地理编码图层类工厂
 */
public class Evgeocodelayerfactory extends com.earthview.world.spatial.WebLayerFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVGeoCodeLayerFactory", new EvgeocodelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVGeoCodeLayerFactoryProxy", new EvgeocodelayerfactoryClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public Evgeocodelayerfactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEVGeoCodeLayerFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evgeocodelayerfactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long createInstance_void(long pNativeObject);
	/**
	 * 创建图层实例
	 * @return 图层对象指针，用相应图层类工厂析构
	 */
	public com.earthview.world.spatial.atlas.Ilayer createInstance()
	{
		long returnValue = createInstance_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private long createInstance_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.Ilayer createInstance_NoVirtual()
	{
		long returnValue = createInstance_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	public Evgeocodelayerfactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evgeocodelayerfactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取工厂类型
	 * @param  
	 * @return 工厂类型
	 */
	public com.earthview.world.spatial.atlas.EVLayerType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 从xml中创建一个图层实例
	 * @param strXml xml
	 * @return 图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer createInstance(String strXml)
	{
		return super.createInstance_NoVirtual(strXml);
	}
	/**
	 * 从xml要素中恢复一个图层
	 * @param  
	 * @return 图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer createInstance(com.earthview.world.core.XmlElement element)
	{
		return super.createInstance_NoVirtual(element);
	}
	/**
	 * 删除图层实例
	 * @param layer 待删除的图层
	 * @return 如果删除成功则返回true,反之则否
	 */
	public boolean destroyInstance(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		return super.destroyInstance_NoVirtual(layer);
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_createInstance_void(long pNativeObject, String method);
	native protected void register_createInstance_EVString(long pNativeObject, String method);
	native protected void register_createInstance_CXmlElement(long pNativeObject, String method);
	native protected void register_destroyInstance_ILayer(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_createInstance_void(this.nativeObject.pointer, "createInstance_void_callback");
			this.register_createInstance_EVString(this.nativeObject.pointer, "createInstance_EVString_callback");
			this.register_createInstance_CXmlElement(this.nativeObject.pointer, "createInstance_CXmlElement_callback");
			this.register_destroyInstance_ILayer(this.nativeObject.pointer, "destroyInstance_ILayer_callback");
		}
	}
	
	public static Evgeocodelayerfactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evgeocodelayerfactory obj = null;
 		if(baseObj instanceof Evgeocodelayerfactory)
		{
			obj = (Evgeocodelayerfactory)baseObj;
		} else {
			obj = new Evgeocodelayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVGeoCodeLayerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
