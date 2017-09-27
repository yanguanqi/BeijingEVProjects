package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 路径分析图层工厂
 */
public class RouteLayerFactory extends com.earthview.world.spatial.atlas.Ilayerfactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRouteLayerFactory", new RouteLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::JCRouteLayerFactoryProxy", new RouteLayerFactoryClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RouteLayerFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRouteLayerFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.analyst.RouteLayerFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层类型
	 * @param  
	 * @return 返回图层类型
	 */
	public com.earthview.world.spatial.atlas.EVLayerType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVLayerType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}

	native private long createInstance_void(long pNativeObject);
	/**
	 * 创建图层实例
	 * @param  
	 * @return 返回图层
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

	native private long createInstance_CXmlElement(long pNativeObject, long element);
	/**
	 * 创建图层实例
	 * @param element xml元素
	 * @return 返回图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer createInstance(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createInstance_CXmlElement(this.nativeObject.pointer, elementParamValue);
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
	native private long createInstance_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected com.earthview.world.spatial.atlas.Ilayer createInstance_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createInstance_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
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

	native private boolean destroyInstance_ILayer(long pNativeObject, long layer);
	/**
	 * 销毁图层实例
	 * @param element 图层
	 * @return 成功返回true；否则返回false
	 */
	public boolean destroyInstance(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = destroyInstance_ILayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private boolean destroyInstance_ILayer_NoVirtual(long pNativeObject, long layer);
	protected boolean destroyInstance_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = destroyInstance_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}

	public RouteLayerFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RouteLayerFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static RouteLayerFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RouteLayerFactory obj = null;
 		if(baseObj instanceof RouteLayerFactory)
		{
			obj = (RouteLayerFactory)baseObj;
		} else {
			obj = new RouteLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRouteLayerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
