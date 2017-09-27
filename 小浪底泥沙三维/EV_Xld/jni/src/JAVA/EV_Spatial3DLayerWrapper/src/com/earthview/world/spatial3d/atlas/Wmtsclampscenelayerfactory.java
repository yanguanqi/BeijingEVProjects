package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 贴地二维Wmt数据Scenelayer的类工厂管理贴地二维Wmt数据
 */
public class Wmtsclampscenelayerfactory extends com.earthview.world.spatial.atlas.Ilayerfactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CWMTSClampSceneLayerFactory", new WmtsclampscenelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCWMTSClampSceneLayerFactoryProxy", new WmtsclampscenelayerfactoryClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Wmtsclampscenelayerfactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCWMTSClampSceneLayerFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.Wmtsclampscenelayerfactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层的类型
	 * @param  
	 * @return 图层的类型
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

	native private long createInstance_CXmlElement(long pNativeObject, long element);
	/**
	 * 创建一个图层实例
	 * @return 实例指针
	 */
	public com.earthview.world.spatial.atlas.Ilayer createInstance(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createInstance_CXmlElement(this.nativeObject.pointer, elementParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	native private long createInstance_void(long pNativeObject);
	/**
	 * 创建一个图层实例
	 * @return 实例指针
	 */
	public com.earthview.world.spatial.atlas.Ilayer createInstance()
	{
		long returnValue = createInstance_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
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
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}

	native private boolean destroyInstance_ILayer(long pNativeObject, long layer);
	/**
	 * 销毁一个图层
	 * @param layer 销毁工厂的产品
	 * @return 是否成功
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

	native private static String get_msSceneLayerFactoryName_void();
	public static String get_msSceneLayerFactoryName()
	{
		String jniValue = get_msSceneLayerFactoryName_void();
		
		return jniValue;
	}
	
	public Wmtsclampscenelayerfactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wmtsclampscenelayerfactory(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Wmtsclampscenelayerfactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wmtsclampscenelayerfactory obj = null;
 		if(baseObj instanceof Wmtsclampscenelayerfactory)
		{
			obj = (Wmtsclampscenelayerfactory)baseObj;
		} else {
			obj = new Wmtsclampscenelayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWMTSClampSceneLayerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
