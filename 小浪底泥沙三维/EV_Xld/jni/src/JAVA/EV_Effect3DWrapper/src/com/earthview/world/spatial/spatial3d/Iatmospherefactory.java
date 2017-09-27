package com.earthview.world.spatial.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 　环境工厂类
 */
public class Iatmospherefactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Spatial3D::IAtmosphereFactory", new IatmospherefactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Spatial3D::JIAtmosphereFactoryProxy", new IatmospherefactoryClassFactory());
	}

	public Iatmospherefactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIAtmosphereFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.spatial3d.Iatmospherefactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long createInstance_CSceneManager_callback(long pScene)
	{
		com.earthview.world.graphic.SceneManager pSceneParamValue = (pScene == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSceneParamValue != null)
		{
		pSceneParamValue.setDelegate(true);
		pSceneParamValue.setInstancePointer(new InstancePointer(pScene));
		IClassFactory pSceneParamValueClassFactory = GlobalClassFactoryMap.get(pSceneParamValue.getCppInstanceTypeName());
		if (pSceneParamValueClassFactory != null)
		{
			pSceneParamValue.setDelegate(true);
			pSceneParamValue = (com.earthview.world.graphic.SceneManager)pSceneParamValueClassFactory.create();
			pSceneParamValue.setDelegate(true);
			pSceneParamValue.setInstancePointer(new InstancePointer(pScene));
		}
		}
		com.earthview.world.spatial.spatial3d.Iatmosphere returnValue = createInstance(pSceneParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  long createInstance_EVString_CSceneManager_callback(String strXml, long pScene)
	{
		String strXmlParamValue = strXml;
		com.earthview.world.graphic.SceneManager pSceneParamValue = (pScene == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSceneParamValue != null)
		{
		pSceneParamValue.setDelegate(true);
		pSceneParamValue.setInstancePointer(new InstancePointer(pScene));
		IClassFactory pSceneParamValueClassFactory = GlobalClassFactoryMap.get(pSceneParamValue.getCppInstanceTypeName());
		if (pSceneParamValueClassFactory != null)
		{
			pSceneParamValue.setDelegate(true);
			pSceneParamValue = (com.earthview.world.graphic.SceneManager)pSceneParamValueClassFactory.create();
			pSceneParamValue.setDelegate(true);
			pSceneParamValue.setInstancePointer(new InstancePointer(pScene));
		}
		}
		com.earthview.world.spatial.spatial3d.Iatmosphere returnValue = createInstance(strXmlParamValue, pSceneParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long createInstance_CXmlElement_CSceneManager_callback(long element, long pScene)
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
		com.earthview.world.graphic.SceneManager pSceneParamValue = (pScene == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSceneParamValue != null)
		{
		pSceneParamValue.setDelegate(true);
		pSceneParamValue.setInstancePointer(new InstancePointer(pScene));
		IClassFactory pSceneParamValueClassFactory = GlobalClassFactoryMap.get(pSceneParamValue.getCppInstanceTypeName());
		if (pSceneParamValueClassFactory != null)
		{
			pSceneParamValue.setDelegate(true);
			pSceneParamValue = (com.earthview.world.graphic.SceneManager)pSceneParamValueClassFactory.create();
			pSceneParamValue.setDelegate(true);
			pSceneParamValue.setInstancePointer(new InstancePointer(pScene));
		}
		}
		com.earthview.world.spatial.spatial3d.Iatmosphere returnValue = createInstance(elementParamValue, pSceneParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  void destroyInstance_IAtmosphere_callback(long environment)
	{
		com.earthview.world.spatial.spatial3d.Iatmosphere environmentParamValue = (environment == 0L ? null : new com.earthview.world.spatial.spatial3d.Iatmosphere(CreatedWhenConstruct.CWC_NotToCreate));
		if(environmentParamValue != null)
		{
		environmentParamValue.setDelegate(true);
		environmentParamValue.setInstancePointer(new InstancePointer(environment));
		IClassFactory environmentParamValueClassFactory = GlobalClassFactoryMap.get(environmentParamValue.getCppInstanceTypeName());
		if (environmentParamValueClassFactory != null)
		{
			environmentParamValue.setDelegate(true);
			environmentParamValue = (com.earthview.world.spatial.spatial3d.Iatmosphere)environmentParamValueClassFactory.create();
			environmentParamValue.setDelegate(true);
			environmentParamValue.setInstancePointer(new InstancePointer(environment));
		}
		}
		destroyInstance(environmentParamValue);
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

	public Iatmospherefactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iatmospherefactory(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Iatmospherefactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iatmospherefactory obj = null;
 		if(baseObj instanceof Iatmospherefactory)
		{
			obj = (Iatmospherefactory)baseObj;
		} else {
			obj = new Iatmospherefactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IAtmosphereFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
