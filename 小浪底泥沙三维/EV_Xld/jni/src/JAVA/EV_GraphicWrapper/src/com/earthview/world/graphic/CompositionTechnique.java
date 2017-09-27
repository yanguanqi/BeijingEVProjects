package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * Basecompositiontechnique,canbesubclassedinplugins.
 */
public class CompositionTechnique extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositionTechnique", new CompositionTechniqueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCCompositionTechniqueProxy", new CompositionTechniqueClassFactory());
	}

	public CompositionTechnique(com.earthview.world.graphic.Compositor ref_parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		Create("JCCompositionTechniqueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.CompositionTechnique".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * Thescopeofatexturedefinedbythecompositor
	 */
	public enum TextureScope implements INativeEnum<TextureScope> {
		TS_LOCAL(TextureScopeHelper.ENUM_VALUES[0]),
		TS_CHAIN(TextureScopeHelper.ENUM_VALUES[1]),
		TS_GLOBAL(TextureScopeHelper.ENUM_VALUES[2]);
		private int value;
		TextureScope(int i) {
			this.value = i;
		}
		public TextureScope getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final TextureScope toEnum(int retval) {
			if(retval == TS_LOCAL.value){
				return TS_LOCAL;
			}
			else if(retval == TS_CHAIN.value){
				return TS_CHAIN;
			}
			else if(retval == TS_GLOBAL.value){
				return TS_GLOBAL;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TextureScopeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// Local texture definition
	public static class TextureDefinition extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition", new TextureDefinitionClassFactory());
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
		
		native private String get_refCompName_void(long pNativeObject);
		public String get_refCompName()
		{
			String jniValue = get_refCompName_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_refCompName_EVString (long pNativeObject, String value);
		public void set_refCompName(String refCompName)
		{
			String refCompNameParamValue = refCompName;
			
			set_refCompName_EVString(this.nativeObject.pointer, refCompNameParamValue);
		}
		
		native private String get_refTexName_void(long pNativeObject);
		public String get_refTexName()
		{
			String jniValue = get_refTexName_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_refTexName_EVString (long pNativeObject, String value);
		public void set_refTexName(String refTexName)
		{
			String refTexNameParamValue = refTexName;
			
			set_refTexName_EVString(this.nativeObject.pointer, refTexNameParamValue);
		}
		
		native private long get_width_void(long pNativeObject);
		public long get_width()
		{
			long jniValue = get_width_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_width_ev_size_t (long pNativeObject, long value);
		public void set_width(long width)
		{
			long widthParamValue = width;
			
			set_width_ev_size_t(this.nativeObject.pointer, widthParamValue);
		}
		
		native private long get_height_void(long pNativeObject);
		public long get_height()
		{
			long jniValue = get_height_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_height_ev_size_t (long pNativeObject, long value);
		public void set_height(long height)
		{
			long heightParamValue = height;
			
			set_height_ev_size_t(this.nativeObject.pointer, heightParamValue);
		}
		
		native private float get_widthFactor_void(long pNativeObject);
		public float get_widthFactor()
		{
			float jniValue = get_widthFactor_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_widthFactor_ev_real32 (long pNativeObject, float value);
		public void set_widthFactor(float widthFactor)
		{
			float widthFactorParamValue = widthFactor;
			
			set_widthFactor_ev_real32(this.nativeObject.pointer, widthFactorParamValue);
		}
		
		native private float get_heightFactor_void(long pNativeObject);
		public float get_heightFactor()
		{
			float jniValue = get_heightFactor_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_heightFactor_ev_real32 (long pNativeObject, float value);
		public void set_heightFactor(float heightFactor)
		{
			float heightFactorParamValue = heightFactor;
			
			set_heightFactor_ev_real32(this.nativeObject.pointer, heightFactorParamValue);
		}
		
		native private long get_formatList_void(long pNativeObject);
		public com.earthview.world.graphic.PixelFormatList get_formatList()
		{
			long jniValue = get_formatList_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.PixelFormatList __returnValue = new com.earthview.world.graphic.PixelFormatList(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "PixelFormatList");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.PixelFormatList)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "PixelFormatList");
			}
			return __returnValue;
		}
		
		native private void set_formatList_PixelFormatList (long pNativeObject, long value);
		public void set_formatList(com.earthview.world.graphic.PixelFormatList formatList)
		{
			long formatListParamValue = formatList.nativeObject.pointer;
			
			set_formatList_PixelFormatList(this.nativeObject.pointer, formatListParamValue);
		}
		
		native private boolean get_fsaa_void(long pNativeObject);
		public boolean get_fsaa()
		{
			boolean jniValue = get_fsaa_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_fsaa_ev_bool (long pNativeObject, boolean value);
		public void set_fsaa(boolean fsaa)
		{
			boolean fsaaParamValue = fsaa;
			
			set_fsaa_ev_bool(this.nativeObject.pointer, fsaaParamValue);
		}
		
		native private boolean get_hwGammaWrite_void(long pNativeObject);
		public boolean get_hwGammaWrite()
		{
			boolean jniValue = get_hwGammaWrite_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_hwGammaWrite_ev_bool (long pNativeObject, boolean value);
		public void set_hwGammaWrite(boolean hwGammaWrite)
		{
			boolean hwGammaWriteParamValue = hwGammaWrite;
			
			set_hwGammaWrite_ev_bool(this.nativeObject.pointer, hwGammaWriteParamValue);
		}
		
		native private int get_depthBufferId_void(long pNativeObject);
		public int get_depthBufferId()
		{
			int jniValue = get_depthBufferId_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_depthBufferId_ev_uint16 (long pNativeObject, int value);
		public void set_depthBufferId(int depthBufferId)
		{
			int depthBufferIdParamValue = depthBufferId;
			
			set_depthBufferId_ev_uint16(this.nativeObject.pointer, depthBufferIdParamValue);
		}
		
		native private boolean get_pooled_void(long pNativeObject);
		public boolean get_pooled()
		{
			boolean jniValue = get_pooled_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_pooled_ev_bool (long pNativeObject, boolean value);
		public void set_pooled(boolean pooled)
		{
			boolean pooledParamValue = pooled;
			
			set_pooled_ev_bool(this.nativeObject.pointer, pooledParamValue);
		}
		
		native private int get_scope_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTechnique.TextureScope get_scope()
		{
			int jniValue = get_scope_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.CompositionTechnique.TextureScope.toEnum(jniValue);
		}
		
		native private void set_scope_TextureScope (long pNativeObject, int value);
		public void set_scope(com.earthview.world.graphic.CompositionTechnique.TextureScope scope)
		{
			int scopeParamValue = scope.getValue();
			
			set_scope_TextureScope(this.nativeObject.pointer, scopeParamValue);
		}
		
		/// Which scope has access to this texture
		public TextureDefinition() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CTextureDefinition", null);
		}

		public TextureDefinition(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextureDefinition(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TextureDefinition fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextureDefinition obj = null;
 			if(baseObj instanceof TextureDefinition)
			{
				obj = (TextureDefinition)baseObj;
			} else {
				obj = new TextureDefinition(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CTextureDefinition");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextureDefinitionClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextureDefinition emptyInstance = new TextureDefinition(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Typedefs for several iterators
	public static class TargetPasses extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositionTechnique::TargetPasses", new TargetPassesClassFactory());
		}

		public TargetPasses() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TargetPasses", null);
		}

		native private void push_back_CCompositionTargetPass(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.CompositionTargetPass> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CCompositionTargetPass(this.nativeObject.pointer, ref_tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.CompositionTargetPass> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.CompositionTargetPass> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.CompositionTargetPass>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.CompositionTargetPass> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.CompositionTargetPass> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.CompositionTargetPass>(new InstancePointer(returnValue));
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
		public TargetPasses(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TargetPasses(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TargetPasses fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TargetPasses obj = null;
 			if(baseObj instanceof TargetPasses)
			{
				obj = (TargetPasses)baseObj;
			} else {
				obj = new TargetPasses(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TargetPasses");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TargetPassesClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TargetPasses emptyInstance = new TargetPasses(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class TargetPassIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator", new TargetPassIteratorClassFactory());
		}

		public TargetPassIterator(com.earthview.world.graphic.CompositionTechnique.TargetPasses lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("TargetPassIterator", list);
		}

		public TargetPassIterator(com.earthview.world.graphic.CompositionTechnique.TargetPassIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("TargetPassIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTargetPass getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTargetPass __returnValue = new com.earthview.world.graphic.CompositionTargetPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTargetPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTargetPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionTargetPass");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTargetPass next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTargetPass __returnValue = new com.earthview.world.graphic.CompositionTargetPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTargetPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTargetPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionTargetPass");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTargetPass getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTargetPass __returnValue = new com.earthview.world.graphic.CompositionTargetPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTargetPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTargetPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionTargetPass");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTargetPass getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTargetPass __returnValue = new com.earthview.world.graphic.CompositionTargetPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTargetPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTargetPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CCompositionTargetPass");
			}
			return __returnValue;
		}
		public TargetPassIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TargetPassIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TargetPassIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TargetPassIterator obj = null;
 			if(baseObj instanceof TargetPassIterator)
			{
				obj = (TargetPassIterator)baseObj;
			} else {
				obj = new TargetPassIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TargetPassIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TargetPassIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TargetPassIterator emptyInstance = new TargetPassIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class TextureDefinitions extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions", new TextureDefinitionsClassFactory());
		}

		public TextureDefinitions() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TextureDefinitions", null);
		}

		native private void push_back_CTextureDefinition(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique.TextureDefinition> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CTextureDefinition(this.nativeObject.pointer, ref_tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique.TextureDefinition> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique.TextureDefinition> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique.TextureDefinition>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique.TextureDefinition> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique.TextureDefinition> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.CompositionTechnique.TextureDefinition>(new InstancePointer(returnValue));
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
		public TextureDefinitions(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextureDefinitions(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TextureDefinitions fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextureDefinitions obj = null;
 			if(baseObj instanceof TextureDefinitions)
			{
				obj = (TextureDefinitions)baseObj;
			} else {
				obj = new TextureDefinitions(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TextureDefinitions");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextureDefinitionsClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextureDefinitions emptyInstance = new TextureDefinitions(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class TextureDefinitionIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator", new TextureDefinitionIteratorClassFactory());
		}

		public TextureDefinitionIterator(com.earthview.world.graphic.CompositionTechnique.TextureDefinitions lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("TextureDefinitionIterator", list);
		}

		public TextureDefinitionIterator(com.earthview.world.graphic.CompositionTechnique.TextureDefinitionIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("TextureDefinitionIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTechnique.TextureDefinition getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTechnique.TextureDefinition __returnValue = new com.earthview.world.graphic.CompositionTechnique.TextureDefinition(CreatedWhenConstruct.CWC_NotToCreate, "CTextureDefinition");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTechnique.TextureDefinition)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureDefinition");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTechnique.TextureDefinition next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTechnique.TextureDefinition __returnValue = new com.earthview.world.graphic.CompositionTechnique.TextureDefinition(CreatedWhenConstruct.CWC_NotToCreate, "CTextureDefinition");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTechnique.TextureDefinition)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureDefinition");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTechnique.TextureDefinition getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTechnique.TextureDefinition __returnValue = new com.earthview.world.graphic.CompositionTechnique.TextureDefinition(CreatedWhenConstruct.CWC_NotToCreate, "CTextureDefinition");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTechnique.TextureDefinition)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureDefinition");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.CompositionTechnique.TextureDefinition getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.CompositionTechnique.TextureDefinition __returnValue = new com.earthview.world.graphic.CompositionTechnique.TextureDefinition(CreatedWhenConstruct.CWC_NotToCreate, "CTextureDefinition");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.CompositionTechnique.TextureDefinition)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureDefinition");
			}
			return __returnValue;
		}
		public TextureDefinitionIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextureDefinitionIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TextureDefinitionIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextureDefinitionIterator obj = null;
 			if(baseObj instanceof TextureDefinitionIterator)
			{
				obj = (TextureDefinitionIterator)baseObj;
			} else {
				obj = new TextureDefinitionIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TextureDefinitionIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextureDefinitionIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextureDefinitionIterator emptyInstance = new TextureDefinitionIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long createTextureDefinition_EVString(long pNativeObject, String name);
	/**
	 * Createanewlocaltexturedefinition,andreturnapointertoit.
	 * @param  name="name"Nameofthelocaltexture
	 * @return EarthView::World::Graphic::CCompositionTechnique::CTextureDefinitionPointer
	 */
	public com.earthview.world.graphic.CompositionTechnique.TextureDefinition createTextureDefinition(String name)
	{
		String nameParamValue = name;
		long returnValue = createTextureDefinition_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTechnique.TextureDefinition __returnValue = new com.earthview.world.graphic.CompositionTechnique.TextureDefinition(CreatedWhenConstruct.CWC_NotToCreate, "CTextureDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique.TextureDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureDefinition");
		}
		return __returnValue;
	}
	native private void removeTextureDefinition_ev_size_t(long pNativeObject, long idx);
	/**
	 * Removeanddestroyalocaltexturedefinition.
	 * @param  name="idx"
	 */
	public void removeTextureDefinition(long idx)
	{
		long idxParamValue = idx;
		removeTextureDefinition_ev_size_t(this.nativeObject.pointer, idxParamValue);
	}
	native private long getTextureDefinition_ev_size_t(long pNativeObject, long idx);
	/**
	 * Getalocaltexturedefinition.
	 * @param  name="idx"
	 */
	public com.earthview.world.graphic.CompositionTechnique.TextureDefinition getTextureDefinition(long idx)
	{
		long idxParamValue = idx;
		long returnValue = getTextureDefinition_ev_size_t(this.nativeObject.pointer, idxParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTechnique.TextureDefinition __returnValue = new com.earthview.world.graphic.CompositionTechnique.TextureDefinition(CreatedWhenConstruct.CWC_NotToCreate, "CTextureDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique.TextureDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureDefinition");
		}
		return __returnValue;
	}
	native private long getTextureDefinition_EVString(long pNativeObject, String name);
	/**
	 * Getalocaltexturedefinitionwithaspecificname.
	 * @param  name="name"
	 */
	public com.earthview.world.graphic.CompositionTechnique.TextureDefinition getTextureDefinition(String name)
	{
		String nameParamValue = name;
		long returnValue = getTextureDefinition_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTechnique.TextureDefinition __returnValue = new com.earthview.world.graphic.CompositionTechnique.TextureDefinition(CreatedWhenConstruct.CWC_NotToCreate, "CTextureDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique.TextureDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureDefinition");
		}
		return __returnValue;
	}
	native private long getNumTextureDefinitions_void(long pNativeObject);
	/**
	 * Getthenumberoflocaltexturedefinitions.
	 * @param  
	 */
	public long getNumTextureDefinitions()
	{
		long returnValue = getNumTextureDefinitions_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void removeAllTextureDefinitions_void(long pNativeObject);
	/**
	 * RemoveallCTextureDefinitions
	 * @param  
	 */
	public void removeAllTextureDefinitions()
	{
		removeAllTextureDefinitions_void(this.nativeObject.pointer);
	}
	native private long getTextureDefinitionIterator_void(long pNativeObject);
	///<summary> Get an iterator over the EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions in this CTechnique. </summary>
	///<param></param>
	///</returns></returns>
	public com.earthview.world.graphic.CompositionTechnique.TextureDefinitionIterator getTextureDefinitionIterator()
	{
		long returnValue = getTextureDefinitionIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.CompositionTechnique.TextureDefinitionIterator __returnValue = new com.earthview.world.graphic.CompositionTechnique.TextureDefinitionIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TextureDefinitionIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique.TextureDefinitionIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TextureDefinitionIterator");
		}
		return __returnValue;
	}
	native private long createTargetPass_void(long pNativeObject);
	/**
	 * Createanewtargetpass,andreturnapointertoit.
	 * @param  
	 * @return EarthView::World::Graphic::CCompositionTargetPasspointer
	 */
	public com.earthview.world.graphic.CompositionTargetPass createTargetPass()
	{
		long returnValue = createTargetPass_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTargetPass __returnValue = new com.earthview.world.graphic.CompositionTargetPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTargetPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTargetPass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionTargetPass");
		}
		return __returnValue;
	}
	native private void removeTargetPass_ev_size_t(long pNativeObject, long idx);
	/**
	 * Removeatargetpass.Itwillalsobedestroyed.
	 * @param  name="idx"
	 */
	public void removeTargetPass(long idx)
	{
		long idxParamValue = idx;
		removeTargetPass_ev_size_t(this.nativeObject.pointer, idxParamValue);
	}
	native private long getTargetPass_ev_size_t(long pNativeObject, long idx);
	/**
	 * Getatargetpass.
	 * @param  name="idx"
	 * @return CCompositonTargetPasspointer
	 */
	public com.earthview.world.graphic.CompositionTargetPass getTargetPass(long idx)
	{
		long idxParamValue = idx;
		long returnValue = getTargetPass_ev_size_t(this.nativeObject.pointer, idxParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTargetPass __returnValue = new com.earthview.world.graphic.CompositionTargetPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTargetPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTargetPass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionTargetPass");
		}
		return __returnValue;
	}
	native private long getNumTargetPasses_void(long pNativeObject);
	/**
	 * Getthenumberoftargetpasses.
	 * @param  
	 */
	public long getNumTargetPasses()
	{
		long returnValue = getNumTargetPasses_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void removeAllTargetPasses_void(long pNativeObject);
	/**
	 * Removealltargetpasses.
	 * @param  
	 */
	public void removeAllTargetPasses()
	{
		removeAllTargetPasses_void(this.nativeObject.pointer);
	}
	native private long getTargetPassIterator_void(long pNativeObject);
	/**
	 * GetaniteratorovertheEarthView::World::Graphic::CCompositionTechnique::TargetPassesinthisCTechnique.
	 * @param  
	 * @return EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator
	 */
	public com.earthview.world.graphic.CompositionTechnique.TargetPassIterator getTargetPassIterator()
	{
		long returnValue = getTargetPassIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.CompositionTechnique.TargetPassIterator __returnValue = new com.earthview.world.graphic.CompositionTechnique.TargetPassIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TargetPassIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTechnique.TargetPassIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TargetPassIterator");
		}
		return __returnValue;
	}
	native private long getOutputTargetPass_void(long pNativeObject);
	/**
	 * Getoutput(final)targetpass
	 * @param  
	 * @return CCompositonTargetPasspointer
	 */
	public com.earthview.world.graphic.CompositionTargetPass getOutputTargetPass()
	{
		long returnValue = getOutputTargetPass_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTargetPass __returnValue = new com.earthview.world.graphic.CompositionTargetPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTargetPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTargetPass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionTargetPass");
		}
		return __returnValue;
	}
	protected  boolean isSupported_ev_bool_callback(boolean allowTextureDegradation)
	{
		boolean allowTextureDegradationParamValue = allowTextureDegradation;
		boolean returnValue = isSupported(allowTextureDegradationParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSupported_ev_bool(long pNativeObject, boolean allowTextureDegradation);
	/**
	 * Determineifthistechniqueissupportedonthecurrentrenderingdevice.
	 * @param  name="allowTextureDegradation"Truetoacceptareductionintexturedepth
	 */
	public boolean isSupported(boolean allowTextureDegradation)
	{
		boolean allowTextureDegradationParamValue = allowTextureDegradation;
		boolean returnValue = isSupported_ev_bool(this.nativeObject.pointer, allowTextureDegradationParamValue);
		return returnValue;
	}
	native private boolean isSupported_ev_bool_NoVirtual(long pNativeObject, boolean allowTextureDegradation);
	protected boolean isSupported_NoVirtual(boolean allowTextureDegradation)
	{
		boolean allowTextureDegradationParamValue = allowTextureDegradation;
		boolean returnValue = isSupported_ev_bool_NoVirtual(this.nativeObject.pointer, allowTextureDegradationParamValue);
		return returnValue;
	}

	protected  void setSchemeName_EVString_callback(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		setSchemeName(schemeNameParamValue);
	}

	native private void setSchemeName_EVString(long pNativeObject, String schemeName);
	/**
	 * Assignaschemenametothistechnique,usedtoswitchbetween	multipletechniquesbychoiceratherthanforhardwarecompatibility.
	 * @param  name="schemeName"
	 */
	public void setSchemeName(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		setSchemeName_EVString(this.nativeObject.pointer, schemeNameParamValue);
	}
	native private void setSchemeName_EVString_NoVirtual(long pNativeObject, String schemeName);
	protected void setSchemeName_NoVirtual(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		setSchemeName_EVString_NoVirtual(this.nativeObject.pointer, schemeNameParamValue);
	}

	native private long getSchemeName_void(long pNativeObject);
	/**
	 * Gettheschemenameassignedtothistechnique.
	 * @param  
	 * @return schemename
	 */
	public StringPointer getSchemeName()
	{
		long returnValue = getSchemeName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setCompositorLogicName_EVString(long pNativeObject, String compositorLogicName);
	/**
	 * Setthenameofthecompositorlogicassignedtothistechnique.	Instancesofthistechniquewillbeauto-coupledwiththematchinglogic.
	 * @param  name="compositorLogicName"
	 */
	public void setCompositorLogicName(String compositorLogicName)
	{
		String compositorLogicNameParamValue = compositorLogicName;
		setCompositorLogicName_EVString(this.nativeObject.pointer, compositorLogicNameParamValue);
	}
	native private long getCompositorLogicName_void(long pNativeObject);
	/**
	 * Getthecompositorlogicnameassignedtothistechnique
	 * @param  
	 * @return CompositorLogicName
	 */
	public StringPointer getCompositorLogicName()
	{
		long returnValue = getCompositorLogicName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getParent_void(long pNativeObject);
	/**
	 * Getparentobject
	 * @param  
	 * @return parentpointer
	 */
	public com.earthview.world.graphic.Compositor getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Compositor __returnValue = new com.earthview.world.graphic.Compositor(CreatedWhenConstruct.CWC_NotToCreate, "CCompositor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Compositor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositor");
		}
		return __returnValue;
	}
	public CompositionTechnique(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompositionTechnique(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_isSupported_ev_bool(long pNativeObject, String method);
	native protected void register_setSchemeName_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isSupported_ev_bool(this.nativeObject.pointer, "isSupported_ev_bool_callback");
			this.register_setSchemeName_EVString(this.nativeObject.pointer, "setSchemeName_EVString_callback");
		}
	}
	
	public static CompositionTechnique fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompositionTechnique obj = null;
 		if(baseObj instanceof CompositionTechnique)
		{
			obj = (CompositionTechnique)baseObj;
		} else {
			obj = new CompositionTechnique(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompositionTechnique");
			obj.increaseCast();
		}

		return obj;
	}
}
