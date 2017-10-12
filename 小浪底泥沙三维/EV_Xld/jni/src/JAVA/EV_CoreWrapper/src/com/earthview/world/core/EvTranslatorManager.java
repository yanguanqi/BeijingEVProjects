package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class EvTranslatorManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CEvTranslatorManager", new EvTranslatorManagerClassFactory());
	}

	public EvTranslatorManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEvTranslatorManager", null);
	}

	public enum EvLanguageType implements INativeEnum<EvLanguageType> {
		EV_ENGLISH(EvLanguageTypeHelper.ENUM_VALUES[0]),
		EV_CHINESE(EvLanguageTypeHelper.ENUM_VALUES[1]);
		private int value;
		EvLanguageType(int i) {
			this.value = i;
		}
		public EvLanguageType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EvLanguageType toEnum(int retval) {
			if(retval == EV_ENGLISH.value){
				return EV_ENGLISH;
			}
			else if(retval == EV_CHINESE.value){
				return EV_CHINESE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EvLanguageTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void installTranslator_CEvTranslator(long pNativeObject, long pTranslator);
	public void installTranslator(com.earthview.world.core.EvTranslator pTranslator)
	{
		long pTranslatorParamValue = (pTranslator == null ? 0L : pTranslator.nativeObject.pointer);
		installTranslator_CEvTranslator(this.nativeObject.pointer, pTranslatorParamValue);
	}
	native private void removeTranslator_CEvTranslator(long pNativeObject, long pTranslator);
	public void removeTranslator(com.earthview.world.core.EvTranslator pTranslator)
	{
		long pTranslatorParamValue = (pTranslator == null ? 0L : pTranslator.nativeObject.pointer);
		removeTranslator_CEvTranslator(this.nativeObject.pointer, pTranslatorParamValue);
	}
	native private void setCurrentLanguage_EvLanguageType(long pNativeObject, int currLanguage);
	public void setCurrentLanguage(com.earthview.world.core.EvTranslatorManager.EvLanguageType currLanguage)
	{
		int currLanguageParamValue = currLanguage.getValue();
		setCurrentLanguage_EvLanguageType(this.nativeObject.pointer, currLanguageParamValue);
	}
	native private int getCurrentLanguage_void(long pNativeObject);
	public com.earthview.world.core.EvTranslatorManager.EvLanguageType getCurrentLanguage()
	{
		int returnValue = getCurrentLanguage_void(this.nativeObject.pointer);
		return com.earthview.world.core.EvTranslatorManager.EvLanguageType.toEnum(returnValue);
	}
	native private String translate_ev_char_ev_char_ev_char(long pNativeObject, long sourceText, long context, long comment);
	/// Returns a translated version of sourceText, optionally based on a comment string; 
	/// otherwise returns sourceText itself if no appropriate translated string is available.
	public String translate(BytePointer sourceText, BytePointer context, BytePointer comment)
	{
		long sourceTextParamValue = (sourceText == null ? 0L : sourceText.nativeObject.pointer);
		long contextParamValue = (context == null ? 0L : context.nativeObject.pointer);
		long commentParamValue = (comment == null ? 0L : comment.nativeObject.pointer);
		String returnValue = translate_ev_char_ev_char_ev_char(this.nativeObject.pointer, sourceTextParamValue, contextParamValue, commentParamValue);
		return returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.core.EvTranslatorManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.EvTranslatorManager __returnValue = new com.earthview.world.core.EvTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate, "CEvTranslatorManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.EvTranslatorManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEvTranslatorManager");
		}
		return __returnValue;
	}
	native private static void releaseSingletonPtr_void();
	public static void releaseSingletonPtr()
	{
		releaseSingletonPtr_void();
	}
	native private void addTranslatorListener_CEvTranslatorListener(long pNativeObject, long newListener);
	public void addTranslatorListener(com.earthview.world.core.EvTranslatorListener newListener)
	{
		long newListenerParamValue = (newListener == null ? 0L : newListener.nativeObject.pointer);
		addTranslatorListener_CEvTranslatorListener(this.nativeObject.pointer, newListenerParamValue);
	}
	native private void removeTranslatorListener_CEvTranslatorListener(long pNativeObject, long oldListener);
	public void removeTranslatorListener(com.earthview.world.core.EvTranslatorListener oldListener)
	{
		long oldListenerParamValue = (oldListener == null ? 0L : oldListener.nativeObject.pointer);
		removeTranslatorListener_CEvTranslatorListener(this.nativeObject.pointer, oldListenerParamValue);
	}
	public EvTranslatorManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EvTranslatorManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EvTranslatorManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EvTranslatorManager obj = null;
 		if(baseObj instanceof EvTranslatorManager)
		{
			obj = (EvTranslatorManager)baseObj;
		} else {
			obj = new EvTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEvTranslatorManager");
			obj.increaseCast();
		}

		return obj;
	}
}
