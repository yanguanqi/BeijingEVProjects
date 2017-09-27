package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * ÊµÌåÀà¹¤³§ÎªÊµÌå´´½¨ÊµÀı
 */
public class CustomEntityFactory extends com.earthview.world.graphic.MovableObjectFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CCustomEntityFactory", new CustomEntityFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCCustomEntityFactoryProxy", new CustomEntityFactoryClassFactory());
	}

	native private long createInstanceImpl_EVString_CommonStringPairList(long pNativeObject, String name, long params);
	/**
	 * ´´½¨ÊµÀı
	 * @param name Ãû³Æ
	 * @param params Ãû³Æ¼üÖµÁĞ±í
	 * @return ÊµÀı
	 */
	public com.earthview.world.graphic.MovableObject createInstanceImpl(String name, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createInstanceImpl_EVString_CommonStringPairList(this.nativeObject.pointer, nameParamValue, paramsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	native private long createInstanceImpl_EVString_CommonStringPairList_NoVirtual(long pNativeObject, String name, long params);
	protected com.earthview.world.graphic.MovableObject createInstanceImpl_NoVirtual(String name, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createInstanceImpl_EVString_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, paramsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}

	/**
	 * Ä¬ÈÏ¹¹Ôìº¯Êı
	 * @param  
	 */
	public CustomEntityFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCustomEntityFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.CustomEntityFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static String get_CUSTOM_FACTORY_TYPE_NAME_void();
	public static String get_CUSTOM_FACTORY_TYPE_NAME()
	{
		String jniValue = get_CUSTOM_FACTORY_TYPE_NAME_void();
		
		return jniValue;
	}
	
	native private static void set_CUSTOM_FACTORY_TYPE_NAME_EVString (String value);
	public static void set_CUSTOM_FACTORY_TYPE_NAME(String CUSTOM_FACTORY_TYPE_NAME)
	{
		String CUSTOM_FACTORY_TYPE_NAMEParamValue = CUSTOM_FACTORY_TYPE_NAME;
		
		set_CUSTOM_FACTORY_TYPE_NAME_EVString(CUSTOM_FACTORY_TYPE_NAMEParamValue);
	}
	
	native private String getType_void(long pNativeObject);
	/**
	 * »ñµÃÊµÌåµÄÀàĞÍ
	 * @param  
	 * @return ÊµÌåµÄÀàĞÍ
	 */
	public String getType()
	{
		String returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getType_void_NoVirtual(long pNativeObject);
	protected String getType_NoVirtual()
	{
		String returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void destroyInstance_CMovableObject(long pNativeObject, long obj);
	/**
	 * Ïú»ÙÊµÀı
	 * @param obj ÒÆ¶¯¶ÔÏó
	 */
	public void destroyInstance(com.earthview.world.graphic.MovableObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		destroyInstance_CMovableObject(this.nativeObject.pointer, objParamValue);
	}
	native private void destroyInstance_CMovableObject_NoVirtual(long pNativeObject, long obj);
	protected void destroyInstance_NoVirtual(com.earthview.world.graphic.MovableObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		destroyInstance_CMovableObject_NoVirtual(this.nativeObject.pointer, objParamValue);
	}

	public CustomEntityFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CustomEntityFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.MovableObject createInstanceImpl(String name)
	{
		return super.createInstanceImpl_NoVirtual(name);
	}
	/**
	 * åˆ›å»ºå®ä¾‹ä¸ºå¯¹è±¡åˆ›å»ºæ–°çš„å®ä¾‹
	 * @param name å¯¹è±¡åç§°
	 * @param manager åœºæ™¯ç®¡ç†å™¨
	 * @param params å‚æ•°
	 * @return å¯¹è±¡ç±»å‹çš„å€¼
	 */
	public com.earthview.world.graphic.MovableObject createInstance(String name, com.earthview.world.graphic.SceneManager ref_manager, com.earthview.world.core.CommonStringPairList params)
	{
		return super.createInstance_NoVirtual(name, ref_manager, params);
	}
	public com.earthview.world.graphic.MovableObject createInstance(String name, com.earthview.world.graphic.SceneManager ref_manager)
	{
		return super.createInstance_NoVirtual(name, ref_manager);
	}
	/**
	 * æ ‡è®°ç±»å‹åˆ†é…å·¥å‚æ ¹æ®åœºæ™¯æŸ¥è¯¢æœ‰é€‰æ‹©æ€§çš„åˆ†é…
	 * @param  
	 * @return é”™è¯¯ï¼Œè¿”å›é»˜è®¤å®ç°ï¼ŒæˆåŠŸæŒ‰éœ€æ±‚åˆ†é…
	 */
	public boolean requestTypeFlags()
	{
		return super.requestTypeFlags_NoVirtual();
	}
	
	native protected void register_createInstanceImpl_EVString_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createInstanceImpl_EVString(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_createInstance_EVString_CSceneManager_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createInstance_EVString_CSceneManager(long pNativeObject, String method);
	native protected void register_destroyInstance_CMovableObject(long pNativeObject, String method);
	native protected void register_requestTypeFlags_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createInstanceImpl_EVString_CommonStringPairList(this.nativeObject.pointer, "createInstanceImpl_EVString_CommonStringPairList_callback");
			this.register_createInstanceImpl_EVString(this.nativeObject.pointer, "createInstanceImpl_EVString_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_createInstance_EVString_CSceneManager_CommonStringPairList(this.nativeObject.pointer, "createInstance_EVString_CSceneManager_CommonStringPairList_callback");
			this.register_createInstance_EVString_CSceneManager(this.nativeObject.pointer, "createInstance_EVString_CSceneManager_callback");
			this.register_destroyInstance_CMovableObject(this.nativeObject.pointer, "destroyInstance_CMovableObject_callback");
			this.register_requestTypeFlags_void(this.nativeObject.pointer, "requestTypeFlags_void_callback");
		}
	}
	
	public static CustomEntityFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CustomEntityFactory obj = null;
 		if(baseObj instanceof CustomEntityFactory)
		{
			obj = (CustomEntityFactory)baseObj;
		} else {
			obj = new CustomEntityFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCustomEntityFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
