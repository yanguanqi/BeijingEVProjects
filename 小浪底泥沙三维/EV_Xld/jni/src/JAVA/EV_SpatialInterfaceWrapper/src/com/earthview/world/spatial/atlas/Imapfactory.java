package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Imapfactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::IMapFactory", new ImapfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JIMapFactoryProxy", new ImapfactoryClassFactory());
	}

	protected  long createMapFromStream_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		com.earthview.world.spatial.atlas.Imap returnValue = createMapFromStream(streamParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createMapFromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从流中恢复出来一个map
	 * @param stream map流
	 * @return 地图
	 */
	public com.earthview.world.spatial.atlas.Imap createMapFromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createMapFromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private long createMapFromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected com.earthview.world.spatial.atlas.Imap createMapFromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createMapFromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}

	protected  long createMapFromXML_EVString_callback(String strXml)
	{
		String strXmlParamValue = strXml;
		com.earthview.world.spatial.atlas.Imap returnValue = createMapFromXML(strXmlParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createMapFromXML_EVString(long pNativeObject, String strXml);
	/**
	 * 从XML中恢复出来一个map
	 * @param strXml xml
	 * @return 地图
	 */
	public com.earthview.world.spatial.atlas.Imap createMapFromXML(String strXml)
	{
		String strXmlParamValue = strXml;
		long returnValue = createMapFromXML_EVString(this.nativeObject.pointer, strXmlParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private long createMapFromXML_EVString_NoVirtual(long pNativeObject, String strXml);
	protected com.earthview.world.spatial.atlas.Imap createMapFromXML_NoVirtual(String strXml)
	{
		String strXmlParamValue = strXml;
		long returnValue = createMapFromXML_EVString_NoVirtual(this.nativeObject.pointer, strXmlParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}

	protected  long createMapFromXMLElement_CXmlElement_callback(long element)
	{
		com.earthview.world.core.XmlElement elementParamValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.core.XmlElement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		com.earthview.world.spatial.atlas.Imap returnValue = createMapFromXMLElement(elementParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createMapFromXMLElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml元素中恢复出来一个map
	 * @param element xml要素
	 * @return 地图
	 */
	public com.earthview.world.spatial.atlas.Imap createMapFromXMLElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createMapFromXMLElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private long createMapFromXMLElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected com.earthview.world.spatial.atlas.Imap createMapFromXMLElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createMapFromXMLElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}

	protected  long createMap_EVString_callback(String mapName)
	{
		String mapNameParamValue = mapName;
		com.earthview.world.spatial.atlas.Imap returnValue = createMap(mapNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createMap_EVString(long pNativeObject, String mapName);
	/**
	 * 创建一个地图实例,名称与参数一致
	 * @param mapName 地图名称
	 * @return 地图
	 */
	public com.earthview.world.spatial.atlas.Imap createMap(String mapName)
	{
		String mapNameParamValue = mapName;
		long returnValue = createMap_EVString(this.nativeObject.pointer, mapNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private long createMap_EVString_NoVirtual(long pNativeObject, String mapName);
	protected com.earthview.world.spatial.atlas.Imap createMap_NoVirtual(String mapName)
	{
		String mapNameParamValue = mapName;
		long returnValue = createMap_EVString_NoVirtual(this.nativeObject.pointer, mapNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}

	protected  boolean destroyInstance_IMap_callback(long map)
	{
		com.earthview.world.spatial.atlas.Imap mapParamValue = (map == 0L ? null : new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate));
		if(mapParamValue != null)
		{
		mapParamValue.setDelegate(true);
		mapParamValue.setInstancePointer(new InstancePointer(map));
		IClassFactory mapParamValueClassFactory = GlobalClassFactoryMap.get(mapParamValue.getCppInstanceTypeName());
		if (mapParamValueClassFactory != null)
		{
			mapParamValue.setDelegate(true);
			mapParamValue = (com.earthview.world.spatial.atlas.Imap)mapParamValueClassFactory.create();
			mapParamValue.setDelegate(true);
			mapParamValue.setInstancePointer(new InstancePointer(map));
		}
		}
		boolean returnValue = destroyInstance(mapParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean destroyInstance_IMap(long pNativeObject, long map);
	/**
	 * 销毁地图的内存
	 * @param map 待删除的地图指针
	 * @return 如果销毁成功则返回true,反之则否
	 */
	public boolean destroyInstance(com.earthview.world.spatial.atlas.Imap map)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		boolean returnValue = destroyInstance_IMap(this.nativeObject.pointer, mapParamValue);
		return returnValue;
	}
	native private boolean destroyInstance_IMap_NoVirtual(long pNativeObject, long map);
	protected boolean destroyInstance_NoVirtual(com.earthview.world.spatial.atlas.Imap map)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		boolean returnValue = destroyInstance_IMap_NoVirtual(this.nativeObject.pointer, mapParamValue);
		return returnValue;
	}

	public Imapfactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Imapfactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_createMapFromStream_CDataStream(long pNativeObject, String method);
	native protected void register_createMapFromXML_EVString(long pNativeObject, String method);
	native protected void register_createMapFromXMLElement_CXmlElement(long pNativeObject, String method);
	native protected void register_createMap_EVString(long pNativeObject, String method);
	native protected void register_destroyInstance_IMap(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createMapFromStream_CDataStream(this.nativeObject.pointer, "createMapFromStream_CDataStream_callback");
			this.register_createMapFromXML_EVString(this.nativeObject.pointer, "createMapFromXML_EVString_callback");
			this.register_createMapFromXMLElement_CXmlElement(this.nativeObject.pointer, "createMapFromXMLElement_CXmlElement_callback");
			this.register_createMap_EVString(this.nativeObject.pointer, "createMap_EVString_callback");
			this.register_destroyInstance_IMap(this.nativeObject.pointer, "destroyInstance_IMap_callback");
		}
	}
	
	public static Imapfactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Imapfactory obj = null;
 		if(baseObj instanceof Imapfactory)
		{
			obj = (Imapfactory)baseObj;
		} else {
			obj = new Imapfactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IMapFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
