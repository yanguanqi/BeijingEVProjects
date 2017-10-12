package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * ÌùµØÊ¸Á¿Í¼²ã¹¤³§Àà¹ÜÀíÌùµØÊ¸Á¿Í¼²ã
 */
public class Ogcwfsvectorrelativescenelayerfactory extends com.earthview.world.spatial.atlas.Ilayerfactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorRelativeSceneLayerFactory", new OgcwfsvectorrelativescenelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCOGCWFSVectorRelativeSceneLayerFactoryProxy", new OgcwfsvectorrelativescenelayerfactoryClassFactory());
	}

	/**
	 * ¹¹Ôìº¯Êý
	 * @param  
	 */
	public Ogcwfsvectorrelativescenelayerfactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCOGCWFSVectorRelativeSceneLayerFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.Ogcwfsvectorrelativescenelayerfactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * »ñÈ¡Í¼²ãµÄÀàÐÍ
	 * @param  
	 * @return Í¼²ãµÄÀàÐÍ
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
	 * ´´½¨Ò»¸öÍ¼²ãÊµÀý
	 * @param name Í¼²ãµÄÃû×Ö
	 * @return ¹¤³§µÄ²úÆ·
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

	native private long createInstance_IDataset(long pNativeObject, long ref_Dataset);
	/// ´´½¨Ò»¸öÍ¼²ãÊµÀý
	/// </summary>
	/// <param name="layerName">Í¼²ãÃû³Æ</param>
	/// <param name="datasourceName">Êý¾ÝÔ´Ãû³Æ</param>
	/// <param name="datasetName">Êý¾Ý¼¯Ãû³Æ</param>
	/// <returns></returns>
	public com.earthview.world.spatial.atlas.Ilayer createInstance(com.earthview.world.spatial.geodataset.Idataset ref_Dataset)
	{
		long ref_DatasetParamValue = (ref_Dataset == null ? 0L : ref_Dataset.nativeObject.pointer);
		long returnValue = createInstance_IDataset(this.nativeObject.pointer, ref_DatasetParamValue);
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
	 * Ïú»ÙÒ»¸öÍ¼²ã
	 * @param layer Ïú»Ù¹¤³§µÄ²úÆ·
	 * @return ÊÇ·ñ³É¹¦
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
	
	public Ogcwfsvectorrelativescenelayerfactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwfsvectorrelativescenelayerfactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * åˆ›å»ºä¸€ä¸ªå›¾å±‚å®žä¾‹
	 * @param  
	 * @return å›¾å±‚
	 */
	public com.earthview.world.spatial.atlas.Ilayer createInstance()
	{
		return super.createInstance_NoVirtual();
	}
	/**
	 * ä»Žxmlä¸­åˆ›å»ºä¸€ä¸ªå›¾å±‚å®žä¾‹
	 * @param strXml xml
	 * @return å›¾å±‚
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
	
	public static Ogcwfsvectorrelativescenelayerfactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwfsvectorrelativescenelayerfactory obj = null;
 		if(baseObj instanceof Ogcwfsvectorrelativescenelayerfactory)
		{
			obj = (Ogcwfsvectorrelativescenelayerfactory)baseObj;
		} else {
			obj = new Ogcwfsvectorrelativescenelayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWFSVectorRelativeSceneLayerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
