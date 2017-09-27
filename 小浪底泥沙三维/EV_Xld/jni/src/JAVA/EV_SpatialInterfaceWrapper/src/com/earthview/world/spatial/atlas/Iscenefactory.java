package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Iscenefactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::ISceneFactory", new IscenefactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JISceneFactoryProxy", new IscenefactoryClassFactory());
	}

	protected  long newScene_EVString_callback(String strSceneName)
	{
		String strSceneNameParamValue = strSceneName;
		com.earthview.world.spatial.atlas.Iscene returnValue = newScene(strSceneNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long newScene_EVString(long pNativeObject, String strSceneName);
	public com.earthview.world.spatial.atlas.Iscene newScene(String strSceneName)
	{
		String strSceneNameParamValue = strSceneName;
		long returnValue = newScene_EVString(this.nativeObject.pointer, strSceneNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}
	native private long newScene_EVString_NoVirtual(long pNativeObject, String strSceneName);
	protected com.earthview.world.spatial.atlas.Iscene newScene_NoVirtual(String strSceneName)
	{
		String strSceneNameParamValue = strSceneName;
		long returnValue = newScene_EVString_NoVirtual(this.nativeObject.pointer, strSceneNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}

	protected  long createScene_CDataStream_callback(long stream)
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
		com.earthview.world.spatial.atlas.Iscene returnValue = createScene(streamParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createScene_CDataStream(long pNativeObject, long stream);
	public com.earthview.world.spatial.atlas.Iscene createScene(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createScene_CDataStream(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}
	native private long createScene_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected com.earthview.world.spatial.atlas.Iscene createScene_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createScene_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}

	protected  long createScene_EVString_callback(String xml)
	{
		String xmlParamValue = xml;
		com.earthview.world.spatial.atlas.Iscene returnValue = createScene(xmlParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createScene_EVString(long pNativeObject, String xml);
	public com.earthview.world.spatial.atlas.Iscene createScene(String xml)
	{
		String xmlParamValue = xml;
		long returnValue = createScene_EVString(this.nativeObject.pointer, xmlParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}
	native private long createScene_EVString_NoVirtual(long pNativeObject, String xml);
	protected com.earthview.world.spatial.atlas.Iscene createScene_NoVirtual(String xml)
	{
		String xmlParamValue = xml;
		long returnValue = createScene_EVString_NoVirtual(this.nativeObject.pointer, xmlParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}

	protected  void destroyScene_IScene_callback(long pScene)
	{
		com.earthview.world.spatial.atlas.Iscene pSceneParamValue = (pScene == 0L ? null : new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSceneParamValue != null)
		{
		pSceneParamValue.setDelegate(true);
		pSceneParamValue.setInstancePointer(new InstancePointer(pScene));
		IClassFactory pSceneParamValueClassFactory = GlobalClassFactoryMap.get(pSceneParamValue.getCppInstanceTypeName());
		if (pSceneParamValueClassFactory != null)
		{
			pSceneParamValue.setDelegate(true);
			pSceneParamValue = (com.earthview.world.spatial.atlas.Iscene)pSceneParamValueClassFactory.create();
			pSceneParamValue.setDelegate(true);
			pSceneParamValue.setInstancePointer(new InstancePointer(pScene));
		}
		}
		destroyScene(pSceneParamValue);
	}

	native private void destroyScene_IScene(long pNativeObject, long pScene);
	public void destroyScene(com.earthview.world.spatial.atlas.Iscene pScene)
	{
		long pSceneParamValue = (pScene == null ? 0L : pScene.nativeObject.pointer);
		destroyScene_IScene(this.nativeObject.pointer, pSceneParamValue);
	}
	native private void destroyScene_IScene_NoVirtual(long pNativeObject, long pScene);
	protected void destroyScene_NoVirtual(com.earthview.world.spatial.atlas.Iscene pScene)
	{
		long pSceneParamValue = (pScene == null ? 0L : pScene.nativeObject.pointer);
		destroyScene_IScene_NoVirtual(this.nativeObject.pointer, pSceneParamValue);
	}

	public Iscenefactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iscenefactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_newScene_EVString(long pNativeObject, String method);
	native protected void register_createScene_CDataStream(long pNativeObject, String method);
	native protected void register_createScene_EVString(long pNativeObject, String method);
	native protected void register_destroyScene_IScene(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_newScene_EVString(this.nativeObject.pointer, "newScene_EVString_callback");
			this.register_createScene_CDataStream(this.nativeObject.pointer, "createScene_CDataStream_callback");
			this.register_createScene_EVString(this.nativeObject.pointer, "createScene_EVString_callback");
			this.register_destroyScene_IScene(this.nativeObject.pointer, "destroyScene_IScene_callback");
		}
	}
	
	public static Iscenefactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iscenefactory obj = null;
 		if(baseObj instanceof Iscenefactory)
		{
			obj = (Iscenefactory)baseObj;
		} else {
			obj = new Iscenefactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISceneFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
