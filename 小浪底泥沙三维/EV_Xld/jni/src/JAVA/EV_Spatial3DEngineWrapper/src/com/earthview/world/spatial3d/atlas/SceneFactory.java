package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneFactory extends com.earthview.world.spatial.atlas.Iscenefactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CSceneFactory", new SceneFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCSceneFactoryProxy", new SceneFactoryClassFactory());
	}

	public SceneFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSceneFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.SceneFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	protected  long newScene_EVString_SceneTileType_callback(String strSceneName, int type)
	{
		String strSceneNameParamValue = strSceneName;
		com.earthview.world.spatial3d.SceneTileType typeParamValue = com.earthview.world.spatial3d.SceneTileType.toEnum(type);
		com.earthview.world.spatial.atlas.Iscene returnValue = newScene(strSceneNameParamValue, typeParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long newScene_EVString_SceneTileType(long pNativeObject, String strSceneName, int type);
	public com.earthview.world.spatial.atlas.Iscene newScene(String strSceneName, com.earthview.world.spatial3d.SceneTileType type)
	{
		String strSceneNameParamValue = strSceneName;
		int typeParamValue = type.getValue();
		long returnValue = newScene_EVString_SceneTileType(this.nativeObject.pointer, strSceneNameParamValue, typeParamValue);
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
	native private long newScene_EVString_SceneTileType_NoVirtual(long pNativeObject, String strSceneName, int type);
	protected com.earthview.world.spatial.atlas.Iscene newScene_NoVirtual(String strSceneName, com.earthview.world.spatial3d.SceneTileType type)
	{
		String strSceneNameParamValue = strSceneName;
		int typeParamValue = type.getValue();
		long returnValue = newScene_EVString_SceneTileType_NoVirtual(this.nativeObject.pointer, strSceneNameParamValue, typeParamValue);
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

	public SceneFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_newScene_EVString_SceneTileType(long pNativeObject, String method);
	native protected void register_newScene_EVString(long pNativeObject, String method);
	native protected void register_createScene_CDataStream(long pNativeObject, String method);
	native protected void register_createScene_EVString(long pNativeObject, String method);
	native protected void register_destroyScene_IScene(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_newScene_EVString_SceneTileType(this.nativeObject.pointer, "newScene_EVString_SceneTileType_callback");
			this.register_newScene_EVString(this.nativeObject.pointer, "newScene_EVString_callback");
			this.register_createScene_CDataStream(this.nativeObject.pointer, "createScene_CDataStream_callback");
			this.register_createScene_EVString(this.nativeObject.pointer, "createScene_EVString_callback");
			this.register_destroyScene_IScene(this.nativeObject.pointer, "destroyScene_IScene_callback");
		}
	}
	
	public static SceneFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneFactory obj = null;
 		if(baseObj instanceof SceneFactory)
		{
			obj = (SceneFactory)baseObj;
		} else {
			obj = new SceneFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSceneFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
