package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MaterialScriptProgramDefinition extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::MaterialScriptProgramDefinition", new MaterialScriptProgramDefinitionClassFactory());
	}

	public MaterialScriptProgramDefinition() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("MaterialScriptProgramDefinition", null);
	}

	native private String get_name_void(long pNativeObject);
	public String get_name()
	{
		String jniValue = get_name_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_name_EVString (long pNativeObject, String value);
	public void set_name(String name)
	{
		String nameParamValue = name;
		
		set_name_EVString(this.nativeObject.pointer, nameParamValue);
	}
	
	native private int get_progType_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramType get_progType()
	{
		int jniValue = get_progType_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.GpuProgramType.toEnum(jniValue);
	}
	
	native private void set_progType_GpuProgramType (long pNativeObject, int value);
	public void set_progType(com.earthview.world.graphic.GpuProgramType progType)
	{
		int progTypeParamValue = progType.getValue();
		
		set_progType_GpuProgramType(this.nativeObject.pointer, progTypeParamValue);
	}
	
	native private String get_language_void(long pNativeObject);
	public String get_language()
	{
		String jniValue = get_language_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_language_EVString (long pNativeObject, String value);
	public void set_language(String language)
	{
		String languageParamValue = language;
		
		set_language_EVString(this.nativeObject.pointer, languageParamValue);
	}
	
	native private String get_source_void(long pNativeObject);
	public String get_source()
	{
		String jniValue = get_source_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_source_EVString (long pNativeObject, String value);
	public void set_source(String source)
	{
		String sourceParamValue = source;
		
		set_source_EVString(this.nativeObject.pointer, sourceParamValue);
	}
	
	native private String get_syntax_void(long pNativeObject);
	public String get_syntax()
	{
		String jniValue = get_syntax_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_syntax_EVString (long pNativeObject, String value);
	public void set_syntax(String syntax)
	{
		String syntaxParamValue = syntax;
		
		set_syntax_EVString(this.nativeObject.pointer, syntaxParamValue);
	}
	
	native private boolean get_supportsSkeletalAnimation_void(long pNativeObject);
	public boolean get_supportsSkeletalAnimation()
	{
		boolean jniValue = get_supportsSkeletalAnimation_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_supportsSkeletalAnimation_ev_bool (long pNativeObject, boolean value);
	public void set_supportsSkeletalAnimation(boolean supportsSkeletalAnimation)
	{
		boolean supportsSkeletalAnimationParamValue = supportsSkeletalAnimation;
		
		set_supportsSkeletalAnimation_ev_bool(this.nativeObject.pointer, supportsSkeletalAnimationParamValue);
	}
	
	native private boolean get_supportsMorphAnimation_void(long pNativeObject);
	public boolean get_supportsMorphAnimation()
	{
		boolean jniValue = get_supportsMorphAnimation_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_supportsMorphAnimation_ev_bool (long pNativeObject, boolean value);
	public void set_supportsMorphAnimation(boolean supportsMorphAnimation)
	{
		boolean supportsMorphAnimationParamValue = supportsMorphAnimation;
		
		set_supportsMorphAnimation_ev_bool(this.nativeObject.pointer, supportsMorphAnimationParamValue);
	}
	
	native private int get_supportsPoseAnimation_void(long pNativeObject);
	public int get_supportsPoseAnimation()
	{
		int jniValue = get_supportsPoseAnimation_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_supportsPoseAnimation_ev_uint16 (long pNativeObject, int value);
	public void set_supportsPoseAnimation(int supportsPoseAnimation)
	{
		int supportsPoseAnimationParamValue = supportsPoseAnimation;
		
		set_supportsPoseAnimation_ev_uint16(this.nativeObject.pointer, supportsPoseAnimationParamValue);
	}
	
	native private boolean get_usesVertexTextureFetch_void(long pNativeObject);
	public boolean get_usesVertexTextureFetch()
	{
		boolean jniValue = get_usesVertexTextureFetch_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_usesVertexTextureFetch_ev_bool (long pNativeObject, boolean value);
	public void set_usesVertexTextureFetch(boolean usesVertexTextureFetch)
	{
		boolean usesVertexTextureFetchParamValue = usesVertexTextureFetch;
		
		set_usesVertexTextureFetch_ev_bool(this.nativeObject.pointer, usesVertexTextureFetchParamValue);
	}
	
	public static class StringPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::MaterialScriptProgramDefinition::StringPair", new StringPairClassFactory());
		}

		native private String get_first_void(long pNativeObject);
		public String get_first()
		{
			String jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_EVString (long pNativeObject, String value);
		public void set_first(String first)
		{
			String firstParamValue = first;
			
			set_first_EVString(this.nativeObject.pointer, firstParamValue);
		}
		
		native private String get_second_void(long pNativeObject);
		public String get_second()
		{
			String jniValue = get_second_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_second_EVString (long pNativeObject, String value);
		public void set_second(String second)
		{
			String secondParamValue = second;
			
			set_second_EVString(this.nativeObject.pointer, secondParamValue);
		}
		
		/**
		 * 构造函数
		 * @param fir 键
		 * @param sec 值
		 */
		public StringPair(String fir, String sec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer firPtr = new BasePointer(fir);
			list.add("fir", firPtr.get());
			BasePointer secPtr = new BasePointer(sec);
			list.add("sec", secPtr.get());
			Create("StringPair", list);
		}

		public StringPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("StringPair", null);
		}

		public StringPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StringPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StringPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StringPair obj = null;
 			if(baseObj instanceof StringPair)
			{
				obj = (StringPair)baseObj;
			} else {
				obj = new StringPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "StringPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StringPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StringPair emptyInstance = new StringPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class MaterialStringPairList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::MaterialScriptProgramDefinition::MaterialStringPairList", new MaterialStringPairListClassFactory());
		}

		public MaterialStringPairList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("MaterialStringPairList", null);
		}

		native private void push_back_StringPair(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_StringPair(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair __returnValue = new com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair(CreatedWhenConstruct.CWC_NotToCreate, "StringPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringPair");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair __returnValue = new com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair(CreatedWhenConstruct.CWC_NotToCreate, "StringPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringPair");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_StringPair(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_StringPair(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair __returnValue = new com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair(CreatedWhenConstruct.CWC_NotToCreate, "StringPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringPair");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair __returnValue = new com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair(CreatedWhenConstruct.CWC_NotToCreate, "StringPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialScriptProgramDefinition.StringPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringPair");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public MaterialStringPairList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MaterialStringPairList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MaterialStringPairList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MaterialStringPairList obj = null;
 			if(baseObj instanceof MaterialStringPairList)
			{
				obj = (MaterialStringPairList)baseObj;
			} else {
				obj = new MaterialStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MaterialStringPairList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MaterialStringPairListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MaterialStringPairList emptyInstance = new MaterialStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long get_customParameters_void(long pNativeObject);
	public com.earthview.world.graphic.MaterialScriptProgramDefinition.MaterialStringPairList get_customParameters()
	{
		long jniValue = get_customParameters_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.MaterialScriptProgramDefinition.MaterialStringPairList __returnValue = new com.earthview.world.graphic.MaterialScriptProgramDefinition.MaterialStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MaterialStringPairList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialScriptProgramDefinition.MaterialStringPairList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MaterialStringPairList");
		}
		return __returnValue;
	}
	
	native private void set_customParameters_MaterialStringPairList (long pNativeObject, long value);
	public void set_customParameters(com.earthview.world.graphic.MaterialScriptProgramDefinition.MaterialStringPairList customParameters)
	{
		long customParametersParamValue = customParameters.nativeObject.pointer;
		
		set_customParameters_MaterialStringPairList(this.nativeObject.pointer, customParametersParamValue);
	}
	
	public MaterialScriptProgramDefinition(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MaterialScriptProgramDefinition(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MaterialScriptProgramDefinition fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MaterialScriptProgramDefinition obj = null;
 		if(baseObj instanceof MaterialScriptProgramDefinition)
		{
			obj = (MaterialScriptProgramDefinition)baseObj;
		} else {
			obj = new MaterialScriptProgramDefinition(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "MaterialScriptProgramDefinition");
			obj.increaseCast();
		}

		return obj;
	}
}
