package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 环境工厂类
 */
public class AtmosphereFactory extends com.earthview.world.spatial.spatial3d.Iatmospherefactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CAtmosphereFactory", new AtmosphereFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::JCAtmosphereFactoryProxy", new AtmosphereFactoryClassFactory());
	}

	public AtmosphereFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAtmosphereFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.effect3d.AtmosphereFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long createInstance_CSceneManager(long pNativeObject, long pScene);
	public com.earthview.world.spatial.spatial3d.Iatmosphere createInstance(com.earthview.world.graphic.SceneManager pScene)
	{
		long pSceneParamValue = (pScene == null ? 0L : pScene.nativeObject.pointer);
		long returnValue = createInstance_CSceneManager(this.nativeObject.pointer, pSceneParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.spatial3d.Iatmosphere __returnValue = new com.earthview.world.spatial.spatial3d.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate, "IAtmosphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.spatial3d.Iatmosphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IAtmosphere");
		}
		return __returnValue;
	}
	native private long createInstance_CSceneManager_NoVirtual(long pNativeObject, long pScene);
	protected com.earthview.world.spatial.spatial3d.Iatmosphere createInstance_NoVirtual(com.earthview.world.graphic.SceneManager pScene)
	{
		long pSceneParamValue = (pScene == null ? 0L : pScene.nativeObject.pointer);
		long returnValue = createInstance_CSceneManager_NoVirtual(this.nativeObject.pointer, pSceneParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.spatial3d.Iatmosphere __returnValue = new com.earthview.world.spatial.spatial3d.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate, "IAtmosphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.spatial3d.Iatmosphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IAtmosphere");
		}
		return __returnValue;
	}

	native private long createInstance_EVString_CSceneManager(long pNativeObject, String strXml, long pScene);
	public com.earthview.world.spatial.spatial3d.Iatmosphere createInstance(String strXml, com.earthview.world.graphic.SceneManager pScene)
	{
		String strXmlParamValue = strXml;
		long pSceneParamValue = (pScene == null ? 0L : pScene.nativeObject.pointer);
		long returnValue = createInstance_EVString_CSceneManager(this.nativeObject.pointer, strXmlParamValue, pSceneParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.spatial3d.Iatmosphere __returnValue = new com.earthview.world.spatial.spatial3d.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate, "IAtmosphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.spatial3d.Iatmosphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IAtmosphere");
		}
		return __returnValue;
	}
	native private long createInstance_EVString_CSceneManager_NoVirtual(long pNativeObject, String strXml, long pScene);
	protected com.earthview.world.spatial.spatial3d.Iatmosphere createInstance_NoVirtual(String strXml, com.earthview.world.graphic.SceneManager pScene)
	{
		String strXmlParamValue = strXml;
		long pSceneParamValue = (pScene == null ? 0L : pScene.nativeObject.pointer);
		long returnValue = createInstance_EVString_CSceneManager_NoVirtual(this.nativeObject.pointer, strXmlParamValue, pSceneParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.spatial3d.Iatmosphere __returnValue = new com.earthview.world.spatial.spatial3d.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate, "IAtmosphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.spatial3d.Iatmosphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IAtmosphere");
		}
		return __returnValue;
	}

	native private long createInstance_CXmlElement_CSceneManager(long pNativeObject, long element, long pScene);
	public com.earthview.world.spatial.spatial3d.Iatmosphere createInstance(com.earthview.world.core.XmlElement element, com.earthview.world.graphic.SceneManager pScene)
	{
		long elementParamValue = element.nativeObject.pointer;
		long pSceneParamValue = (pScene == null ? 0L : pScene.nativeObject.pointer);
		long returnValue = createInstance_CXmlElement_CSceneManager(this.nativeObject.pointer, elementParamValue, pSceneParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.spatial3d.Iatmosphere __returnValue = new com.earthview.world.spatial.spatial3d.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate, "IAtmosphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.spatial3d.Iatmosphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IAtmosphere");
		}
		return __returnValue;
	}
	native private long createInstance_CXmlElement_CSceneManager_NoVirtual(long pNativeObject, long element, long pScene);
	protected com.earthview.world.spatial.spatial3d.Iatmosphere createInstance_NoVirtual(com.earthview.world.core.XmlElement element, com.earthview.world.graphic.SceneManager pScene)
	{
		long elementParamValue = element.nativeObject.pointer;
		long pSceneParamValue = (pScene == null ? 0L : pScene.nativeObject.pointer);
		long returnValue = createInstance_CXmlElement_CSceneManager_NoVirtual(this.nativeObject.pointer, elementParamValue, pSceneParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.spatial3d.Iatmosphere __returnValue = new com.earthview.world.spatial.spatial3d.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate, "IAtmosphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.spatial3d.Iatmosphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IAtmosphere");
		}
		return __returnValue;
	}

	native private void destroyInstance_IAtmosphere(long pNativeObject, long environment);
	public void destroyInstance(com.earthview.world.spatial.spatial3d.Iatmosphere environment)
	{
		long environmentParamValue = (environment == null ? 0L : environment.nativeObject.pointer);
		destroyInstance_IAtmosphere(this.nativeObject.pointer, environmentParamValue);
	}
	native private void destroyInstance_IAtmosphere_NoVirtual(long pNativeObject, long environment);
	protected void destroyInstance_NoVirtual(com.earthview.world.spatial.spatial3d.Iatmosphere environment)
	{
		long environmentParamValue = (environment == null ? 0L : environment.nativeObject.pointer);
		destroyInstance_IAtmosphere_NoVirtual(this.nativeObject.pointer, environmentParamValue);
	}

	public AtmosphereFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AtmosphereFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_createInstance_CSceneManager(long pNativeObject, String method);
	native protected void register_createInstance_EVString_CSceneManager(long pNativeObject, String method);
	native protected void register_createInstance_CXmlElement_CSceneManager(long pNativeObject, String method);
	native protected void register_destroyInstance_IAtmosphere(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createInstance_CSceneManager(this.nativeObject.pointer, "createInstance_CSceneManager_callback");
			this.register_createInstance_EVString_CSceneManager(this.nativeObject.pointer, "createInstance_EVString_CSceneManager_callback");
			this.register_createInstance_CXmlElement_CSceneManager(this.nativeObject.pointer, "createInstance_CXmlElement_CSceneManager_callback");
			this.register_destroyInstance_IAtmosphere(this.nativeObject.pointer, "destroyInstance_IAtmosphere_callback");
		}
	}
	
	public static AtmosphereFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AtmosphereFactory obj = null;
 		if(baseObj instanceof AtmosphereFactory)
		{
			obj = (AtmosphereFactory)baseObj;
		} else {
			obj = new AtmosphereFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAtmosphereFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
