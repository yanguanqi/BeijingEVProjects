package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class EvTranslator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CEvTranslator", new EvTranslatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCEvTranslatorProxy", new EvTranslatorClassFactory());
	}

	public enum EvTranslatorFiedType implements INativeEnum<EvTranslatorFiedType> {
		Contexts(EvTranslatorFiedTypeHelper.ENUM_VALUES[0]),
		Hashes(EvTranslatorFiedTypeHelper.ENUM_VALUES[1]),
		Messages(EvTranslatorFiedTypeHelper.ENUM_VALUES[2]),
		NumerusRules(EvTranslatorFiedTypeHelper.ENUM_VALUES[3]);
		private int value;
		EvTranslatorFiedType(int i) {
			this.value = i;
		}
		public EvTranslatorFiedType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EvTranslatorFiedType toEnum(int retval) {
			if(retval == Contexts.value){
				return Contexts;
			}
			else if(retval == Hashes.value){
				return Hashes;
			}
			else if(retval == Messages.value){
				return Messages;
			}
			else if(retval == NumerusRules.value){
				return NumerusRules;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EvTranslatorFiedTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EvTranslatorMsgTag implements INativeEnum<EvTranslatorMsgTag> {
		Tag_End(EvTranslatorMsgTagHelper.ENUM_VALUES[0]),
		Tag_SourceText16(EvTranslatorMsgTagHelper.ENUM_VALUES[1]),
		Tag_Translation(EvTranslatorMsgTagHelper.ENUM_VALUES[2]),
		Tag_Context16(EvTranslatorMsgTagHelper.ENUM_VALUES[3]),
		Tag_Obsolete1(EvTranslatorMsgTagHelper.ENUM_VALUES[4]),
		Tag_SourceText(EvTranslatorMsgTagHelper.ENUM_VALUES[5]),
		Tag_Context(EvTranslatorMsgTagHelper.ENUM_VALUES[6]),
		Tag_Comment(EvTranslatorMsgTagHelper.ENUM_VALUES[7]),
		Tag_Obsolete2(EvTranslatorMsgTagHelper.ENUM_VALUES[8]);
		private int value;
		EvTranslatorMsgTag(int i) {
			this.value = i;
		}
		public EvTranslatorMsgTag getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EvTranslatorMsgTag toEnum(int retval) {
			if(retval == Tag_End.value){
				return Tag_End;
			}
			else if(retval == Tag_SourceText16.value){
				return Tag_SourceText16;
			}
			else if(retval == Tag_Translation.value){
				return Tag_Translation;
			}
			else if(retval == Tag_Context16.value){
				return Tag_Context16;
			}
			else if(retval == Tag_Obsolete1.value){
				return Tag_Obsolete1;
			}
			else if(retval == Tag_SourceText.value){
				return Tag_SourceText;
			}
			else if(retval == Tag_Context.value){
				return Tag_Context;
			}
			else if(retval == Tag_Comment.value){
				return Tag_Comment;
			}
			else if(retval == Tag_Obsolete2.value){
				return Tag_Obsolete2;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EvTranslatorMsgTagHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum EvTranslatorOpcode implements INativeEnum<EvTranslatorOpcode> {
		EV_EQ(EvTranslatorOpcodeHelper.ENUM_VALUES[0]),
		EV_LT(EvTranslatorOpcodeHelper.ENUM_VALUES[1]),
		EV_LEQ(EvTranslatorOpcodeHelper.ENUM_VALUES[2]),
		EV_BETWEEN(EvTranslatorOpcodeHelper.ENUM_VALUES[3]),
		EV_NOT(EvTranslatorOpcodeHelper.ENUM_VALUES[4]),
		EV_MOD_10(EvTranslatorOpcodeHelper.ENUM_VALUES[5]),
		EV_MOD_100(EvTranslatorOpcodeHelper.ENUM_VALUES[6]),
		EV_LEAD_1000(EvTranslatorOpcodeHelper.ENUM_VALUES[7]),
		EV_AND(EvTranslatorOpcodeHelper.ENUM_VALUES[8]),
		EV_OR(EvTranslatorOpcodeHelper.ENUM_VALUES[9]),
		EV_NEWRULE(EvTranslatorOpcodeHelper.ENUM_VALUES[10]),
		EV_OP_MASK(EvTranslatorOpcodeHelper.ENUM_VALUES[11]),
		EV_NEQ(EvTranslatorOpcodeHelper.ENUM_VALUES[12]),
		EV_GT(EvTranslatorOpcodeHelper.ENUM_VALUES[13]),
		EV_GEQ(EvTranslatorOpcodeHelper.ENUM_VALUES[14]),
		EV_NOT_BETWEEN(EvTranslatorOpcodeHelper.ENUM_VALUES[15]);
		private int value;
		EvTranslatorOpcode(int i) {
			this.value = i;
		}
		public EvTranslatorOpcode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EvTranslatorOpcode toEnum(int retval) {
			if(retval == EV_EQ.value){
				return EV_EQ;
			}
			else if(retval == EV_LT.value){
				return EV_LT;
			}
			else if(retval == EV_LEQ.value){
				return EV_LEQ;
			}
			else if(retval == EV_BETWEEN.value){
				return EV_BETWEEN;
			}
			else if(retval == EV_NOT.value){
				return EV_NOT;
			}
			else if(retval == EV_MOD_10.value){
				return EV_MOD_10;
			}
			else if(retval == EV_MOD_100.value){
				return EV_MOD_100;
			}
			else if(retval == EV_LEAD_1000.value){
				return EV_LEAD_1000;
			}
			else if(retval == EV_AND.value){
				return EV_AND;
			}
			else if(retval == EV_OR.value){
				return EV_OR;
			}
			else if(retval == EV_NEWRULE.value){
				return EV_NEWRULE;
			}
			else if(retval == EV_OP_MASK.value){
				return EV_OP_MASK;
			}
			else if(retval == EV_NEQ.value){
				return EV_NEQ;
			}
			else if(retval == EV_GT.value){
				return EV_GT;
			}
			else if(retval == EV_GEQ.value){
				return EV_GEQ;
			}
			else if(retval == EV_NOT_BETWEEN.value){
				return EV_NOT_BETWEEN;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EvTranslatorOpcodeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public EvTranslator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEvTranslatorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.EvTranslator".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean isEmpty_void(long pNativeObject);
	public boolean isEmpty()
	{
		boolean returnValue = isEmpty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean load_EVString(long pNativeObject, String filename);
	public boolean load(String filename)
	{
		String filenameParamValue = filename;
		boolean returnValue = load_EVString(this.nativeObject.pointer, filenameParamValue);
		return returnValue;
	}
	native private boolean load_EVString_EVString_EVString(long pNativeObject, String filename, String directory, String suffix);
	public boolean load(String filename, String directory, String suffix)
	{
		String filenameParamValue = filename;
		String directoryParamValue = directory;
		String suffixParamValue = suffix;
		boolean returnValue = load_EVString_EVString_EVString(this.nativeObject.pointer, filenameParamValue, directoryParamValue, suffixParamValue);
		return returnValue;
	}
	protected  String translate_ev_char_ev_char_ev_char_callback(long sourceText, long context, long comment)
	{
		BytePointer sourceTextParamValue = (sourceText == 0L ? null : new BytePointer(new InstancePointer(sourceText)));
		BytePointer contextParamValue = (context == 0L ? null : new BytePointer(new InstancePointer(context)));
		BytePointer commentParamValue = (comment == 0L ? null : new BytePointer(new InstancePointer(comment)));
		String returnValue = translate(sourceTextParamValue, contextParamValue, commentParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String translate_ev_char_ev_char_ev_char(long pNativeObject, long sourceText, long context, long comment);
	public String translate(BytePointer sourceText, BytePointer context, BytePointer comment)
	{
		long sourceTextParamValue = (sourceText == null ? 0L : sourceText.nativeObject.pointer);
		long contextParamValue = (context == null ? 0L : context.nativeObject.pointer);
		long commentParamValue = (comment == null ? 0L : comment.nativeObject.pointer);
		String returnValue = translate_ev_char_ev_char_ev_char(this.nativeObject.pointer, sourceTextParamValue, contextParamValue, commentParamValue);
		return returnValue;
	}
	native private String translate_ev_char_ev_char_ev_char_NoVirtual(long pNativeObject, long sourceText, long context, long comment);
	protected String translate_NoVirtual(BytePointer sourceText, BytePointer context, BytePointer comment)
	{
		long sourceTextParamValue = (sourceText == null ? 0L : sourceText.nativeObject.pointer);
		long contextParamValue = (context == null ? 0L : context.nativeObject.pointer);
		long commentParamValue = (comment == null ? 0L : comment.nativeObject.pointer);
		String returnValue = translate_ev_char_ev_char_ev_char_NoVirtual(this.nativeObject.pointer, sourceTextParamValue, contextParamValue, commentParamValue);
		return returnValue;
	}

	native private String translate_ev_char_ev_char_ev_char_ev_int32(long pNativeObject, long sourceText, long context, long comment, int n);
	public String translate(BytePointer sourceText, BytePointer context, BytePointer comment, int n)
	{
		long sourceTextParamValue = (sourceText == null ? 0L : sourceText.nativeObject.pointer);
		long contextParamValue = (context == null ? 0L : context.nativeObject.pointer);
		long commentParamValue = (comment == null ? 0L : comment.nativeObject.pointer);
		int nParamValue = n;
		String returnValue = translate_ev_char_ev_char_ev_char_ev_int32(this.nativeObject.pointer, sourceTextParamValue, contextParamValue, commentParamValue, nParamValue);
		return returnValue;
	}
	public EvTranslator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EvTranslator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_translate_ev_char_ev_char_ev_char(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_translate_ev_char_ev_char_ev_char(this.nativeObject.pointer, "translate_ev_char_ev_char_ev_char_callback");
		}
	}
	
	public static EvTranslator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EvTranslator obj = null;
 		if(baseObj instanceof EvTranslator)
		{
			obj = (EvTranslator)baseObj;
		} else {
			obj = new EvTranslator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEvTranslator");
			obj.increaseCast();
		}

		return obj;
	}
}
