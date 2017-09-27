package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Loaded from an image created by an artist
public class Font extends com.earthview.world.graphic.Resource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont", new FontClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCFontProxy", new FontClassFactory());
	}

	public static class FontInternalResourceLoader extends com.earthview.world.graphic.ManualResourceLoader {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::CFontInternalResourceLoader", new FontInternalResourceLoaderClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::JCFontInternalResourceLoaderProxy", new FontInternalResourceLoaderClassFactory());
		}

		public FontInternalResourceLoader(com.earthview.world.graphic.Font ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCFontInternalResourceLoaderProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Font$FontInternalResourceLoader".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private void loadResource_CResource(long pNativeObject, long resource);
		public void loadResource(com.earthview.world.graphic.Resource resource)
		{
			long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
			loadResource_CResource(this.nativeObject.pointer, resourceParamValue);
		}
		native private void loadResource_CResource_NoVirtual(long pNativeObject, long resource);
		protected void loadResource_NoVirtual(com.earthview.world.graphic.Resource resource)
		{
			long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
			loadResource_CResource_NoVirtual(this.nativeObject.pointer, resourceParamValue);
		}

		public FontInternalResourceLoader(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public FontInternalResourceLoader(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		public void prepareResource(com.earthview.world.graphic.Resource resource)
		{
			super.prepareResource_NoVirtual(resource);
		}
		
		native protected void register_prepareResource_CResource(long pNativeObject, String method);
		native protected void register_loadResource_CResource(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_prepareResource_CResource(this.nativeObject.pointer, "prepareResource_CResource_callback");
				this.register_loadResource_CResource(this.nativeObject.pointer, "loadResource_CResource_callback");
			}
		}
		
		public static FontInternalResourceLoader fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			FontInternalResourceLoader obj = null;
 			if(baseObj instanceof FontInternalResourceLoader)
			{
				obj = (FontInternalResourceLoader)baseObj;
			} else {
				obj = new FontInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CFontInternalResourceLoader");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class FontInternalResourceLoaderClassFactory implements IClassFactory {
		public BaseObject create()
		{
			FontInternalResourceLoader emptyInstance = new FontInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  void loadResource_CResource_callback(long resource)
	{
		com.earthview.world.graphic.Resource resourceParamValue = (resource == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
		if(resourceParamValue != null)
		{
		resourceParamValue.setDelegate(true);
		resourceParamValue.setInstancePointer(new InstancePointer(resource));
		IClassFactory resourceParamValueClassFactory = GlobalClassFactoryMap.get(resourceParamValue.getCppInstanceTypeName());
		if (resourceParamValueClassFactory != null)
		{
			resourceParamValue.setDelegate(true);
			resourceParamValue = (com.earthview.world.graphic.Resource)resourceParamValueClassFactory.create();
			resourceParamValue.setDelegate(true);
			resourceParamValue.setInstancePointer(new InstancePointer(resource));
		}
		}
		loadResource(resourceParamValue);
	}

	native private void loadResource_CResource(long pNativeObject, long resource);
	public void loadResource(com.earthview.world.graphic.Resource resource)
	{
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		loadResource_CResource(this.nativeObject.pointer, resourceParamValue);
	}
	native private void loadResource_CResource_NoVirtual(long pNativeObject, long resource);
	protected void loadResource_NoVirtual(com.earthview.world.graphic.Resource resource)
	{
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		loadResource_CResource_NoVirtual(this.nativeObject.pointer, resourceParamValue);
	}

	protected  long getManualResourceLoaderPtr_void_callback()
	{
		com.earthview.world.graphic.Font.FontInternalResourceLoader returnValue = getManualResourceLoaderPtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getManualResourceLoaderPtr_void(long pNativeObject);
	public com.earthview.world.graphic.Font.FontInternalResourceLoader getManualResourceLoaderPtr()
	{
		long returnValue = getManualResourceLoaderPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Font.FontInternalResourceLoader __returnValue = new com.earthview.world.graphic.Font.FontInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate, "CFontInternalResourceLoader");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Font.FontInternalResourceLoader)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFontInternalResourceLoader");
		}
		return __returnValue;
	}
	native private long getManualResourceLoaderPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Font.FontInternalResourceLoader getManualResourceLoaderPtr_NoVirtual()
	{
		long returnValue = getManualResourceLoaderPtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Font.FontInternalResourceLoader __returnValue = new com.earthview.world.graphic.Font.FontInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate, "CFontInternalResourceLoader");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Font.FontInternalResourceLoader)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFontInternalResourceLoader");
		}
		return __returnValue;
	}

	//// Command object for EarthView::World::Graphic::CFont - see EarthView::World::Core::CParamCommand
	public static class FontCmdType extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::CFontCmdType", new FontCmdTypeClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::JCFontCmdTypeProxy", new FontCmdTypeClassFactory());
		}

		public FontCmdType() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCFontCmdTypeProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Font$FontCmdType".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		public String doGet(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}
		native private String doGet_void_NoVirtual(long pNativeObject, long target);
		protected String doGet_NoVirtual(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}

		native private void doSet_void_EVString(long pNativeObject, long target, String val);
		public void doSet(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
		}
		native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
		protected void doSet_NoVirtual(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
		}

		public FontCmdType(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public FontCmdType(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/// 在doSet之前测试一次值是否有效。
		public boolean trySet(VoidPointer target, String val, StringPointer reason)
		{
			return super.trySet_NoVirtual(target, val, reason);
		}
		
		native protected void register_doGet_void(long pNativeObject, String method);
		native protected void register_doSet_void_EVString(long pNativeObject, String method);
		native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
				this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
				this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
			}
		}
		
		public static FontCmdType fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			FontCmdType obj = null;
 			if(baseObj instanceof FontCmdType)
			{
				obj = (FontCmdType)baseObj;
			} else {
				obj = new FontCmdType(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CFontCmdType");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class FontCmdTypeClassFactory implements IClassFactory {
		public BaseObject create()
		{
			FontCmdType emptyInstance = new FontCmdType(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Command object for EarthView::World::Graphic::CFont - see EarthView::World::Core::CParamCommand
	public static class CmdSource extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::CCmdSource", new CmdSourceClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::JCCmdSourceProxy", new CmdSourceClassFactory());
		}

		public CmdSource() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdSourceProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Font$CmdSource".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		public String doGet(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}
		native private String doGet_void_NoVirtual(long pNativeObject, long target);
		protected String doGet_NoVirtual(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}

		native private void doSet_void_EVString(long pNativeObject, long target, String val);
		public void doSet(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
		}
		native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
		protected void doSet_NoVirtual(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
		}

		public CmdSource(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdSource(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/// 在doSet之前测试一次值是否有效。
		public boolean trySet(VoidPointer target, String val, StringPointer reason)
		{
			return super.trySet_NoVirtual(target, val, reason);
		}
		
		native protected void register_doGet_void(long pNativeObject, String method);
		native protected void register_doSet_void_EVString(long pNativeObject, String method);
		native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
				this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
				this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
			}
		}
		
		public static CmdSource fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdSource obj = null;
 			if(baseObj instanceof CmdSource)
			{
				obj = (CmdSource)baseObj;
			} else {
				obj = new CmdSource(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdSource");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdSourceClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdSource emptyInstance = new CmdSource(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdCharSpacer extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::CCmdCharSpacer", new CmdCharSpacerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::JCCmdCharSpacerProxy", new CmdCharSpacerClassFactory());
		}

		public CmdCharSpacer() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdCharSpacerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Font$CmdCharSpacer".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		public String doGet(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}
		native private String doGet_void_NoVirtual(long pNativeObject, long target);
		protected String doGet_NoVirtual(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}

		native private void doSet_void_EVString(long pNativeObject, long target, String val);
		public void doSet(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
		}
		native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
		protected void doSet_NoVirtual(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
		}

		public CmdCharSpacer(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdCharSpacer(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/// 在doSet之前测试一次值是否有效。
		public boolean trySet(VoidPointer target, String val, StringPointer reason)
		{
			return super.trySet_NoVirtual(target, val, reason);
		}
		
		native protected void register_doGet_void(long pNativeObject, String method);
		native protected void register_doSet_void_EVString(long pNativeObject, String method);
		native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
				this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
				this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
			}
		}
		
		public static CmdCharSpacer fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdCharSpacer obj = null;
 			if(baseObj instanceof CmdCharSpacer)
			{
				obj = (CmdCharSpacer)baseObj;
			} else {
				obj = new CmdCharSpacer(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdCharSpacer");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdCharSpacerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdCharSpacer emptyInstance = new CmdCharSpacer(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Command object for EarthView::World::Graphic::CFont - see EarthView::World::Core::CParamCommand
	public static class CmdSize extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::CCmdSize", new CmdSizeClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::JCCmdSizeProxy", new CmdSizeClassFactory());
		}

		public CmdSize() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdSizeProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Font$CmdSize".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		public String doGet(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}
		native private String doGet_void_NoVirtual(long pNativeObject, long target);
		protected String doGet_NoVirtual(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}

		native private void doSet_void_EVString(long pNativeObject, long target, String val);
		public void doSet(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
		}
		native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
		protected void doSet_NoVirtual(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
		}

		public CmdSize(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdSize(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/// 在doSet之前测试一次值是否有效。
		public boolean trySet(VoidPointer target, String val, StringPointer reason)
		{
			return super.trySet_NoVirtual(target, val, reason);
		}
		
		native protected void register_doGet_void(long pNativeObject, String method);
		native protected void register_doSet_void_EVString(long pNativeObject, String method);
		native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
				this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
				this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
			}
		}
		
		public static CmdSize fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdSize obj = null;
 			if(baseObj instanceof CmdSize)
			{
				obj = (CmdSize)baseObj;
			} else {
				obj = new CmdSize(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdSize");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdSizeClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdSize emptyInstance = new CmdSize(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Command object for EarthView::World::Graphic::CFont - see EarthView::World::Core::CParamCommand
	public static class CmdResolution extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::CCmdResolution", new CmdResolutionClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::JCCmdResolutionProxy", new CmdResolutionClassFactory());
		}

		public CmdResolution() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdResolutionProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Font$CmdResolution".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		public String doGet(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}
		native private String doGet_void_NoVirtual(long pNativeObject, long target);
		protected String doGet_NoVirtual(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}

		native private void doSet_void_EVString(long pNativeObject, long target, String val);
		public void doSet(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
		}
		native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
		protected void doSet_NoVirtual(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
		}

		public CmdResolution(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdResolution(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/// 在doSet之前测试一次值是否有效。
		public boolean trySet(VoidPointer target, String val, StringPointer reason)
		{
			return super.trySet_NoVirtual(target, val, reason);
		}
		
		native protected void register_doGet_void(long pNativeObject, String method);
		native protected void register_doSet_void_EVString(long pNativeObject, String method);
		native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
				this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
				this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
			}
		}
		
		public static CmdResolution fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdResolution obj = null;
 			if(baseObj instanceof CmdResolution)
			{
				obj = (CmdResolution)baseObj;
			} else {
				obj = new CmdResolution(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdResolution");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdResolutionClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdResolution emptyInstance = new CmdResolution(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Command object for EarthView::World::Graphic::CFont - see EarthView::World::Core::CParamCommand
	public static class CmdCodePoints extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::CCmdCodePoints", new CmdCodePointsClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::JCCmdCodePointsProxy", new CmdCodePointsClassFactory());
		}

		public CmdCodePoints() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdCodePointsProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Font$CmdCodePoints".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		public String doGet(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}
		native private String doGet_void_NoVirtual(long pNativeObject, long target);
		protected String doGet_NoVirtual(VoidPointer target)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
			return returnValue;
		}

		native private void doSet_void_EVString(long pNativeObject, long target, String val);
		public void doSet(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
		}
		native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
		protected void doSet_NoVirtual(VoidPointer target, String val)
		{
			long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
			String valParamValue = val;
			doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
		}

		public CmdCodePoints(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdCodePoints(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/// 在doSet之前测试一次值是否有效。
		public boolean trySet(VoidPointer target, String val, StringPointer reason)
		{
			return super.trySet_NoVirtual(target, val, reason);
		}
		
		native protected void register_doGet_void(long pNativeObject, String method);
		native protected void register_doSet_void_EVString(long pNativeObject, String method);
		native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
				this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
				this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
			}
		}
		
		public static CmdCodePoints fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdCodePoints obj = null;
 			if(baseObj instanceof CmdCodePoints)
			{
				obj = (CmdCodePoints)baseObj;
			} else {
				obj = new CmdCodePoints(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdCodePoints");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdCodePointsClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdCodePoints emptyInstance = new CmdCodePoints(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Information about the position and size of a glyph in a texture
	public static class GlyphInfo extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::GlyphInfo", new GlyphInfoClassFactory());
		}

		native private long get_codePoint_void(long pNativeObject);
		public long get_codePoint()
		{
			long jniValue = get_codePoint_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_codePoint_ev_uint32 (long pNativeObject, long value);
		public void set_codePoint(long codePoint)
		{
			long codePointParamValue = codePoint;
			
			set_codePoint_ev_uint32(this.nativeObject.pointer, codePointParamValue);
		}
		
		native private long get_uvRect_void(long pNativeObject);
		public com.earthview.world.graphic.FloatRect get_uvRect()
		{
			long jniValue = get_uvRect_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.FloatRect __returnValue = new com.earthview.world.graphic.FloatRect(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "FloatRect");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.FloatRect)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "FloatRect");
			}
			return __returnValue;
		}
		
		native private void set_uvRect_FloatRect (long pNativeObject, long value);
		public void set_uvRect(com.earthview.world.graphic.FloatRect uvRect)
		{
			long uvRectParamValue = uvRect.nativeObject.pointer;
			
			set_uvRect_FloatRect(this.nativeObject.pointer, uvRectParamValue);
		}
		
		native private double get_aspectRatio_void(long pNativeObject);
		public double get_aspectRatio()
		{
			double jniValue = get_aspectRatio_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_aspectRatio_Real (long pNativeObject, double value);
		public void set_aspectRatio(double aspectRatio)
		{
			double aspectRatioParamValue = aspectRatio;
			
			set_aspectRatio_Real(this.nativeObject.pointer, aspectRatioParamValue);
		}
		
		native private long get_clampUVRect_void(long pNativeObject);
		public com.earthview.world.graphic.FloatRect get_clampUVRect()
		{
			long jniValue = get_clampUVRect_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.FloatRect __returnValue = new com.earthview.world.graphic.FloatRect(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "FloatRect");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.FloatRect)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "FloatRect");
			}
			return __returnValue;
		}
		
		native private void set_clampUVRect_FloatRect (long pNativeObject, long value);
		public void set_clampUVRect(com.earthview.world.graphic.FloatRect clampUVRect)
		{
			long clampUVRectParamValue = clampUVRect.nativeObject.pointer;
			
			set_clampUVRect_FloatRect(this.nativeObject.pointer, clampUVRectParamValue);
		}
		
		native private float get_horiBearingX_void(long pNativeObject);
		public float get_horiBearingX()
		{
			float jniValue = get_horiBearingX_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_horiBearingX_ev_real32 (long pNativeObject, float value);
		public void set_horiBearingX(float horiBearingX)
		{
			float horiBearingXParamValue = horiBearingX;
			
			set_horiBearingX_ev_real32(this.nativeObject.pointer, horiBearingXParamValue);
		}
		
		native private float get_horiBearingY_void(long pNativeObject);
		public float get_horiBearingY()
		{
			float jniValue = get_horiBearingY_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_horiBearingY_ev_real32 (long pNativeObject, float value);
		public void set_horiBearingY(float horiBearingY)
		{
			float horiBearingYParamValue = horiBearingY;
			
			set_horiBearingY_ev_real32(this.nativeObject.pointer, horiBearingYParamValue);
		}
		
		native private float get_horiAdvance_void(long pNativeObject);
		public float get_horiAdvance()
		{
			float jniValue = get_horiAdvance_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_horiAdvance_ev_real32 (long pNativeObject, float value);
		public void set_horiAdvance(float horiAdvance)
		{
			float horiAdvanceParamValue = horiAdvance;
			
			set_horiAdvance_ev_real32(this.nativeObject.pointer, horiAdvanceParamValue);
		}
		
		native private float get_vertBearingX_void(long pNativeObject);
		public float get_vertBearingX()
		{
			float jniValue = get_vertBearingX_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_vertBearingX_ev_real32 (long pNativeObject, float value);
		public void set_vertBearingX(float vertBearingX)
		{
			float vertBearingXParamValue = vertBearingX;
			
			set_vertBearingX_ev_real32(this.nativeObject.pointer, vertBearingXParamValue);
		}
		
		native private float get_vertBearingY_void(long pNativeObject);
		public float get_vertBearingY()
		{
			float jniValue = get_vertBearingY_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_vertBearingY_ev_real32 (long pNativeObject, float value);
		public void set_vertBearingY(float vertBearingY)
		{
			float vertBearingYParamValue = vertBearingY;
			
			set_vertBearingY_ev_real32(this.nativeObject.pointer, vertBearingYParamValue);
		}
		
		native private float get_vertAdvance_void(long pNativeObject);
		public float get_vertAdvance()
		{
			float jniValue = get_vertAdvance_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_vertAdvance_ev_real32 (long pNativeObject, float value);
		public void set_vertAdvance(float vertAdvance)
		{
			float vertAdvanceParamValue = vertAdvance;
			
			set_vertAdvance_ev_real32(this.nativeObject.pointer, vertAdvanceParamValue);
		}
		
		native private float get_height_void(long pNativeObject);
		public float get_height()
		{
			float jniValue = get_height_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_height_ev_real32 (long pNativeObject, float value);
		public void set_height(float height)
		{
			float heightParamValue = height;
			
			set_height_ev_real32(this.nativeObject.pointer, heightParamValue);
		}
		
		native private float get_width_void(long pNativeObject);
		public float get_width()
		{
			float jniValue = get_width_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_width_ev_real32 (long pNativeObject, float value);
		public void set_width(float width)
		{
			float widthParamValue = width;
			
			set_width_ev_real32(this.nativeObject.pointer, widthParamValue);
		}
		
		/// /////////////////////////////////////////////
		public GlyphInfo(long id, com.earthview.world.graphic.FloatRect rect, double aspect) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer idPtr = new BasePointer(id);
			list.add("id", idPtr.get());
			BasePointer rectPtr = new BasePointer(rect);
			list.add("rect", rectPtr.get());
			BasePointer aspectPtr = new BasePointer(aspect);
			list.add("aspect", aspectPtr.get());
			Create("GlyphInfo", list);
		}

		public GlyphInfo(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public GlyphInfo(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static GlyphInfo fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			GlyphInfo obj = null;
 			if(baseObj instanceof GlyphInfo)
			{
				obj = (GlyphInfo)baseObj;
			} else {
				obj = new GlyphInfo(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "GlyphInfo");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GlyphInfoClassFactory implements IClassFactory {
		public BaseObject create()
		{
			GlyphInfo emptyInstance = new GlyphInfo(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// A range of code points, inclusive on both ends
	public static class FontCodePointRange extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::FontCodePointRange", new FontCodePointRangeClassFactory());
		}

		native private long get_first_void(long pNativeObject);
		public long get_first()
		{
			long jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_uint32 (long pNativeObject, long value);
		public void set_first(long first)
		{
			long firstParamValue = first;
			
			set_first_ev_uint32(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public long get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_second_ev_uint32 (long pNativeObject, long value);
		public void set_second(long second)
		{
			long secondParamValue = second;
			
			set_second_ev_uint32(this.nativeObject.pointer, secondParamValue);
		}
		
		public FontCodePointRange() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("FontCodePointRange", null);
		}

		public FontCodePointRange(long f, long s) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer fPtr = new BasePointer(f);
			list.add("f", fPtr.get());
			BasePointer sPtr = new BasePointer(s);
			list.add("s", sPtr.get());
			Create("FontCodePointRange", list);
		}

		native private boolean merge_FontCodePointRange(long pNativeObject, long newVal);
		public boolean merge(com.earthview.world.graphic.Font.FontCodePointRange newVal)
		{
			long newValParamValue = newVal.nativeObject.pointer;
			boolean returnValue = merge_FontCodePointRange(this.nativeObject.pointer, newValParamValue);
			return returnValue;
		}
		native private boolean rightMerge_FontCodePointRange(long pNativeObject, long newVal);
		public boolean rightMerge(com.earthview.world.graphic.Font.FontCodePointRange newVal)
		{
			long newValParamValue = newVal.nativeObject.pointer;
			boolean returnValue = rightMerge_FontCodePointRange(this.nativeObject.pointer, newValParamValue);
			return returnValue;
		}
		native private boolean leftMerge_FontCodePointRange(long pNativeObject, long newVal);
		public boolean leftMerge(com.earthview.world.graphic.Font.FontCodePointRange newVal)
		{
			long newValParamValue = newVal.nativeObject.pointer;
			boolean returnValue = leftMerge_FontCodePointRange(this.nativeObject.pointer, newValParamValue);
			return returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		public FontCodePointRange(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public FontCodePointRange(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static FontCodePointRange fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			FontCodePointRange obj = null;
 			if(baseObj instanceof FontCodePointRange)
			{
				obj = (FontCodePointRange)baseObj;
			} else {
				obj = new FontCodePointRange(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "FontCodePointRange");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class FontCodePointRangeClassFactory implements IClassFactory {
		public BaseObject create()
		{
			FontCodePointRange emptyInstance = new FontCodePointRange(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class FontCodePointRangeList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFont::FontCodePointRangeList", new FontCodePointRangeListClassFactory());
		}

		public FontCodePointRangeList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("FontCodePointRangeList", null);
		}

		native private void push_back_FontCodePointRange(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.Font.FontCodePointRange t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_FontCodePointRange(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.Font.FontCodePointRange front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Font.FontCodePointRange __returnValue = new com.earthview.world.graphic.Font.FontCodePointRange(CreatedWhenConstruct.CWC_NotToCreate, "FontCodePointRange");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Font.FontCodePointRange)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "FontCodePointRange");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.Font.FontCodePointRange back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Font.FontCodePointRange __returnValue = new com.earthview.world.graphic.Font.FontCodePointRange(CreatedWhenConstruct.CWC_NotToCreate, "FontCodePointRange");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Font.FontCodePointRange)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "FontCodePointRange");
			}
			return __returnValue;
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private long charCount_void(long pNativeObject);
		public long charCount()
		{
			long returnValue = charCount_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void cutDownTo_ev_size_t(long pNativeObject, long charCount);
		public void cutDownTo(long charCount)
		{
			long charCountParamValue = charCount;
			cutDownTo_ev_size_t(this.nativeObject.pointer, charCountParamValue);
		}
		native private void compressRangeList_void(long pNativeObject);
		public void compressRangeList()
		{
			compressRangeList_void(this.nativeObject.pointer);
		}
		public FontCodePointRangeList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public FontCodePointRangeList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static FontCodePointRangeList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			FontCodePointRangeList obj = null;
 			if(baseObj instanceof FontCodePointRangeList)
			{
				obj = (FontCodePointRangeList)baseObj;
			} else {
				obj = new FontCodePointRangeList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "FontCodePointRangeList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class FontCodePointRangeListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			FontCodePointRangeList emptyInstance = new FontCodePointRangeList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void loadImpl_void(long pNativeObject);
	//// @copydoc CResource::loadImpl
	public void loadImpl()
	{
		loadImpl_void(this.nativeObject.pointer);
	}
	native private void loadImpl_void_NoVirtual(long pNativeObject);
	protected void loadImpl_NoVirtual()
	{
		loadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void unloadImpl_void(long pNativeObject);
	//// @copydoc CResource::unloadImpl
	public void unloadImpl()
	{
		unloadImpl_void(this.nativeObject.pointer);
	}
	native private void unloadImpl_void_NoVirtual(long pNativeObject);
	protected void unloadImpl_NoVirtual()
	{
		unloadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long calculateSize_void(long pNativeObject);
	//// @copydoc CResource::calculateSize
	public long calculateSize()
	{
		long returnValue = calculateSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long calculateSize_void_NoVirtual(long pNativeObject);
	protected long calculateSize_NoVirtual()
	{
		long returnValue = calculateSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public Font(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		BasePointer isManualPtr = new BasePointer(isManual);
		list.add("isManual", isManualPtr.get());
		BasePointer ref_loaderPtr = new BasePointer(ref_loader);
		list.add("ref_loader", ref_loaderPtr.get());
		Create("JCFontProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Font".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Font(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		BasePointer isManualPtr = new BasePointer(isManual);
		list.add("isManual", isManualPtr.get());
		Create("JCFontProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Font".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Font(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		Create("JCFontProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Font".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setType_FontType(long pNativeObject, int ftype);
	public void setType(com.earthview.world.graphic.FontType ftype)
	{
		int ftypeParamValue = ftype.getValue();
		setType_FontType(this.nativeObject.pointer, ftypeParamValue);
	}
	native private int getType_void(long pNativeObject);
	public com.earthview.world.graphic.FontType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.FontType.toEnum(returnValue);
	}
	native private void setSource_EVString(long pNativeObject, String source);
	public void setSource(String source)
	{
		String sourceParamValue = source;
		setSource_EVString(this.nativeObject.pointer, sourceParamValue);
	}
	native private long getSource_void(long pNativeObject);
	public StringPointer getSource()
	{
		long returnValue = getSource_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setCharacterSpacer_ev_uint32(long pNativeObject, long charSpacer);
	public void setCharacterSpacer(long charSpacer)
	{
		long charSpacerParamValue = charSpacer;
		setCharacterSpacer_ev_uint32(this.nativeObject.pointer, charSpacerParamValue);
	}
	native private long getCharacterSpacer_void(long pNativeObject);
	public long getCharacterSpacer()
	{
		long returnValue = getCharacterSpacer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTrueTypeSize_ev_uint8(long pNativeObject, short ttfSize);
	public void setTrueTypeSize(short ttfSize)
	{
		short ttfSizeParamValue = ttfSize;
		setTrueTypeSize_ev_uint8(this.nativeObject.pointer, ttfSizeParamValue);
	}
	native private void setTrueTypeResolution_ev_uint32(long pNativeObject, long ttfResolution);
	public void setTrueTypeResolution(long ttfResolution)
	{
		long ttfResolutionParamValue = ttfResolution;
		setTrueTypeResolution_ev_uint32(this.nativeObject.pointer, ttfResolutionParamValue);
	}
	native private short getTrueTypeSize_void(long pNativeObject);
	public short getTrueTypeSize()
	{
		short returnValue = getTrueTypeSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTrueTypeResolution_void(long pNativeObject);
	public long getTrueTypeResolution()
	{
		long returnValue = getTrueTypeResolution_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getTrueTypeMaxBearingY_void(long pNativeObject);
	public int getTrueTypeMaxBearingY()
	{
		int returnValue = getTrueTypeMaxBearingY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTrueTypeMaxHeight_void(long pNativeObject);
	public long getTrueTypeMaxHeight()
	{
		long returnValue = getTrueTypeMaxHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMaxCapability_void(long pNativeObject);
	public long getMaxCapability()
	{
		long returnValue = getMaxCapability_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long life_void(long pNativeObject);
	public long life()
	{
		long returnValue = life_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLife_ev_uint32(long pNativeObject, long val);
	public void setLife(long val)
	{
		long valParamValue = val;
		setLife_ev_uint32(this.nativeObject.pointer, valParamValue);
	}
	native private void setFontStyle_FontStyle(long pNativeObject, long style);
	public void setFontStyle(com.earthview.world.graphic.FontStyle style)
	{
		long styleParamValue = style.nativeObject.pointer;
		setFontStyle_FontStyle(this.nativeObject.pointer, styleParamValue);
	}
	native private long getFontStyle_void(long pNativeObject);
	public com.earthview.world.graphic.FontStyle getFontStyle()
	{
		long returnValue = getFontStyle_void(this.nativeObject.pointer);
		com.earthview.world.graphic.FontStyle __returnValue = new com.earthview.world.graphic.FontStyle(CreatedWhenConstruct.CWC_NotToCreate, "FontStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FontStyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FontStyle");
		}
		return __returnValue;
	}
	native private long getFontFamily_void(long pNativeObject);
	public StringPointer getFontFamily()
	{
		long returnValue = getFontFamily_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setFontFamily_EVString(long pNativeObject, String family);
	public void setFontFamily(String family)
	{
		String familyParamValue = family;
		setFontFamily_EVString(this.nativeObject.pointer, familyParamValue);
	}
	native private long getGlyphTexCoords_ev_uint32(long pNativeObject, long unicode);
	public com.earthview.world.graphic.FloatRect getGlyphTexCoords(long unicode)
	{
		long unicodeParamValue = unicode;
		long returnValue = getGlyphTexCoords_ev_uint32(this.nativeObject.pointer, unicodeParamValue);
		com.earthview.world.graphic.FloatRect __returnValue = new com.earthview.world.graphic.FloatRect(CreatedWhenConstruct.CWC_NotToCreate, "FloatRect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FloatRect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FloatRect");
		}
		return __returnValue;
	}
	native private void setGlyphInfo_GlyphInfo(long pNativeObject, long info);
	public void setGlyphInfo(com.earthview.world.graphic.Font.GlyphInfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		setGlyphInfo_GlyphInfo(this.nativeObject.pointer, infoParamValue);
	}
	native private void setGlyphTexCoords_ev_uint32_Real_Real_Real_Real_Real(long pNativeObject, long id, double u1, double v1, double u2, double v2, double textureAspect);
	public void setGlyphTexCoords(long id, double u1, double v1, double u2, double v2, double textureAspect)
	{
		long idParamValue = id;
		double u1ParamValue = u1;
		double v1ParamValue = v1;
		double u2ParamValue = u2;
		double v2ParamValue = v2;
		double textureAspectParamValue = textureAspect;
		setGlyphTexCoords_ev_uint32_Real_Real_Real_Real_Real(this.nativeObject.pointer, idParamValue, u1ParamValue, v1ParamValue, u2ParamValue, v2ParamValue, textureAspectParamValue);
	}
	native private double getGlyphAspectRatio_ev_uint32(long pNativeObject, long id);
	public double getGlyphAspectRatio(long id)
	{
		long idParamValue = id;
		double returnValue = getGlyphAspectRatio_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private void setGlyphAspectRatio_ev_uint32_Real(long pNativeObject, long id, double ratio);
	public void setGlyphAspectRatio(long id, double ratio)
	{
		long idParamValue = id;
		double ratioParamValue = ratio;
		setGlyphAspectRatio_ev_uint32_Real(this.nativeObject.pointer, idParamValue, ratioParamValue);
	}
	native private boolean existGlyphInfo_ev_uint32(long pNativeObject, long id);
	public boolean existGlyphInfo(long id)
	{
		long idParamValue = id;
		boolean returnValue = existGlyphInfo_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private long getGlyphInfo_ev_uint32(long pNativeObject, long id);
	public com.earthview.world.graphic.Font.GlyphInfo getGlyphInfo(long id)
	{
		long idParamValue = id;
		long returnValue = getGlyphInfo_ev_uint32(this.nativeObject.pointer, idParamValue);
		com.earthview.world.graphic.Font.GlyphInfo __returnValue = new com.earthview.world.graphic.Font.GlyphInfo(CreatedWhenConstruct.CWC_NotToCreate, "GlyphInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Font.GlyphInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GlyphInfo");
		}
		return __returnValue;
	}
	native private void addCodePointRange_FontCodePointRange(long pNativeObject, long range);
	public void addCodePointRange(com.earthview.world.graphic.Font.FontCodePointRange range)
	{
		long rangeParamValue = range.nativeObject.pointer;
		addCodePointRange_FontCodePointRange(this.nativeObject.pointer, rangeParamValue);
	}
	native private void clearCodePointRanges_void(long pNativeObject);
	public void clearCodePointRanges()
	{
		clearCodePointRanges_void(this.nativeObject.pointer);
	}
	native private long getCodePointRangeList_void(long pNativeObject);
	public com.earthview.world.graphic.Font.FontCodePointRangeList getCodePointRangeList()
	{
		long returnValue = getCodePointRangeList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Font.FontCodePointRangeList __returnValue = new com.earthview.world.graphic.Font.FontCodePointRangeList(CreatedWhenConstruct.CWC_NotToCreate, "FontCodePointRangeList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Font.FontCodePointRangeList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FontCodePointRangeList");
		}
		return __returnValue;
	}
	native private long getMaterial_void(long pNativeObject);
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		long returnValue = getMaterial_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private void setAntialiasColour_ev_bool(long pNativeObject, boolean enabled);
	public void setAntialiasColour(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setAntialiasColour_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getAntialiasColour_void(long pNativeObject);
	public boolean getAntialiasColour()
	{
		boolean returnValue = getAntialiasColour_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Font(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Font(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 加载前调用的函数
	 */
	public void preLoadImpl()
	{
		super.preLoadImpl_NoVirtual();
	}
	/**
	 * 加载后调用的函数
	 */
	public void postLoadImpl()
	{
		super.postLoadImpl_NoVirtual();
	}
	/**
	 * 卸载前调用的函数
	 */
	public void preUnloadImpl()
	{
		super.preUnloadImpl_NoVirtual();
	}
	/**
	 * 卸载后调用的函数
	 */
	public void postUnloadImpl()
	{
		super.postUnloadImpl_NoVirtual();
	}
	/**
	 * 准备函数的实现
	 */
	public void prepareImpl()
	{
		super.prepareImpl_NoVirtual();
	}
	/**
	 * 准备函数的逆过程的实现
	 */
	public void unprepareImpl()
	{
		super.unprepareImpl_NoVirtual();
	}
	/**
	 * 准备(读取资源文件)
	 */
	public void prepare(boolean backgroundThread)
	{
		super.prepare_NoVirtual(backgroundThread);
	}
	public void prepare()
	{
		super.prepare_NoVirtual();
	}
	/**
	 * 加载
	 */
	public void load(boolean backgroundThread)
	{
		super.load_NoVirtual(backgroundThread);
	}
	public void load()
	{
		super.load_NoVirtual();
	}
	/**
	 * 重新加载
	 */
	public void reload()
	{
		super.reload_NoVirtual();
	}
	/**
	 * 是否可重新加载
	 */
	public boolean isReloadable()
	{
		return super.isReloadable_NoVirtual();
	}
	/**
	 * 是否手动加载
	 */
	public boolean isManuallyLoaded()
	{
		return super.isManuallyLoaded_NoVirtual();
	}
	/**
	 * 卸载
	 */
	public void unload()
	{
		super.unload_NoVirtual();
	}
	/**
	 * 获得资源大小
	 */
	public long getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 确保在使用
	 */
	public void touch()
	{
		super.touch_NoVirtual();
	}
	/**
	 * 获得资源名
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获得资源句柄
	 */
	public ULongPointer getHandle()
	{
		return super.getHandle_NoVirtual();
	}
	/**
	 * 是否准备就绪
	 */
	public boolean isPrepared()
	{
		return super.isPrepared_NoVirtual();
	}
	/**
	 * 是否已加载
	 */
	public boolean isLoaded()
	{
		return super.isLoaded_NoVirtual();
	}
	/**
	 * 是否正在加载
	 */
	public boolean isLoading()
	{
		return super.isLoading_NoVirtual();
	}
	/**
	 * 获得加载状态
	 */
	public com.earthview.world.graphic.Resource.LoadingState getLoadingState()
	{
		return super.getLoadingState_NoVirtual();
	}
	/**
	 * 是否为后台加载
	 */
	public boolean isBackgroundLoaded()
	{
		return super.isBackgroundLoaded_NoVirtual();
	}
	/**
	 * 设置为后台加载
	 */
	public void setBackgroundLoaded(boolean bl)
	{
		super.setBackgroundLoaded_NoVirtual(bl);
	}
	public void escalateLoading()
	{
		super.escalateLoading_NoVirtual();
	}
	/**
	 * 添加监听
	 */
	public void addListener(com.earthview.world.graphic.Resource.ResourceListener ref_lis)
	{
		super.addListener_NoVirtual(ref_lis);
	}
	/**
	 * 移除监听
	 */
	public void removeListener(com.earthview.world.graphic.Resource.ResourceListener lis)
	{
		super.removeListener_NoVirtual(lis);
	}
	/**
	 * 获得组名
	 */
	public String getGroup()
	{
		return super.getGroup_NoVirtual();
	}
	/**
	 * 更换资源组
	 */
	public void changeGroupOwnership(String newGroup)
	{
		super.changeGroupOwnership_NoVirtual(newGroup);
	}
	/**
	 * 获得创建者(资源管理器)
	 */
	public com.earthview.world.graphic.ResourceManager getCreator()
	{
		return super.getCreator_NoVirtual();
	}
	public String getOrigin()
	{
		return super.getOrigin_NoVirtual();
	}
	//// Notify this resource of it's origin
	public void _notifyOrigin(String origin)
	{
		super._notifyOrigin_NoVirtual(origin);
	}
	public long getStateCount()
	{
		return super.getStateCount_NoVirtual();
	}
	/**
	 * 将状态置为脏
	 */
	public void _dirtyState()
	{
		super._dirtyState_NoVirtual();
	}
	/**
	 * 告知监听者加载完成
	 */
	public void _fireLoadingComplete(boolean wasBackgroundLoaded)
	{
		super._fireLoadingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者准备就绪
	 */
	public void _firePreparingComplete(boolean wasBackgroundLoaded)
	{
		super._firePreparingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者卸载完成
	 */
	public void _fireUnloadingComplete()
	{
		super._fireUnloadingComplete_NoVirtual();
	}
	public boolean setParameter(String name, String value)
	{
		return super.setParameter_NoVirtual(name, value);
	}
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		return super.setParameter_NoVirtual(name, readOnly, enable);
	}
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		super.setParameterList_NoVirtual(paramList);
	}
	public String getParameter(String name)
	{
		return super.getParameter_NoVirtual(name);
	}
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		super.copyParametersTo_NoVirtual(dest);
	}
	
	native protected void register_loadResource_CResource(long pNativeObject, String method);
	native protected void register_getManualResourceLoaderPtr_void(long pNativeObject, String method);
	native protected void register_preLoadImpl_void(long pNativeObject, String method);
	native protected void register_postLoadImpl_void(long pNativeObject, String method);
	native protected void register_preUnloadImpl_void(long pNativeObject, String method);
	native protected void register_postUnloadImpl_void(long pNativeObject, String method);
	native protected void register_prepareImpl_void(long pNativeObject, String method);
	native protected void register_unprepareImpl_void(long pNativeObject, String method);
	native protected void register_loadImpl_void(long pNativeObject, String method);
	native protected void register_unloadImpl_void(long pNativeObject, String method);
	native protected void register_calculateSize_void(long pNativeObject, String method);
	native protected void register_prepare_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_void(long pNativeObject, String method);
	native protected void register_load_ev_bool(long pNativeObject, String method);
	native protected void register_load_void(long pNativeObject, String method);
	native protected void register_reload_void(long pNativeObject, String method);
	native protected void register_isReloadable_void(long pNativeObject, String method);
	native protected void register_isManuallyLoaded_void(long pNativeObject, String method);
	native protected void register_unload_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_touch_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getHandle_void(long pNativeObject, String method);
	native protected void register_isPrepared_void(long pNativeObject, String method);
	native protected void register_isLoaded_void(long pNativeObject, String method);
	native protected void register_isLoading_void(long pNativeObject, String method);
	native protected void register_getLoadingState_void(long pNativeObject, String method);
	native protected void register_isBackgroundLoaded_void(long pNativeObject, String method);
	native protected void register_setBackgroundLoaded_ev_bool(long pNativeObject, String method);
	native protected void register_escalateLoading_void(long pNativeObject, String method);
	native protected void register_addListener_CResourceListener(long pNativeObject, String method);
	native protected void register_removeListener_CResourceListener(long pNativeObject, String method);
	native protected void register_getGroup_void(long pNativeObject, String method);
	native protected void register_changeGroupOwnership_EVString(long pNativeObject, String method);
	native protected void register_getCreator_void(long pNativeObject, String method);
	native protected void register_getOrigin_void(long pNativeObject, String method);
	native protected void register__notifyOrigin_EVString(long pNativeObject, String method);
	native protected void register_getStateCount_void(long pNativeObject, String method);
	native protected void register__dirtyState_void(long pNativeObject, String method);
	native protected void register__fireLoadingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__firePreparingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__fireUnloadingComplete_void(long pNativeObject, String method);
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_loadResource_CResource(this.nativeObject.pointer, "loadResource_CResource_callback");
			this.register_getManualResourceLoaderPtr_void(this.nativeObject.pointer, "getManualResourceLoaderPtr_void_callback");
			this.register_preLoadImpl_void(this.nativeObject.pointer, "preLoadImpl_void_callback");
			this.register_postLoadImpl_void(this.nativeObject.pointer, "postLoadImpl_void_callback");
			this.register_preUnloadImpl_void(this.nativeObject.pointer, "preUnloadImpl_void_callback");
			this.register_postUnloadImpl_void(this.nativeObject.pointer, "postUnloadImpl_void_callback");
			this.register_prepareImpl_void(this.nativeObject.pointer, "prepareImpl_void_callback");
			this.register_unprepareImpl_void(this.nativeObject.pointer, "unprepareImpl_void_callback");
			this.register_loadImpl_void(this.nativeObject.pointer, "loadImpl_void_callback");
			this.register_unloadImpl_void(this.nativeObject.pointer, "unloadImpl_void_callback");
			this.register_calculateSize_void(this.nativeObject.pointer, "calculateSize_void_callback");
			this.register_prepare_ev_bool(this.nativeObject.pointer, "prepare_ev_bool_callback");
			this.register_prepare_void(this.nativeObject.pointer, "prepare_void_callback");
			this.register_load_ev_bool(this.nativeObject.pointer, "load_ev_bool_callback");
			this.register_load_void(this.nativeObject.pointer, "load_void_callback");
			this.register_reload_void(this.nativeObject.pointer, "reload_void_callback");
			this.register_isReloadable_void(this.nativeObject.pointer, "isReloadable_void_callback");
			this.register_isManuallyLoaded_void(this.nativeObject.pointer, "isManuallyLoaded_void_callback");
			this.register_unload_void(this.nativeObject.pointer, "unload_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_touch_void(this.nativeObject.pointer, "touch_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getHandle_void(this.nativeObject.pointer, "getHandle_void_callback");
			this.register_isPrepared_void(this.nativeObject.pointer, "isPrepared_void_callback");
			this.register_isLoaded_void(this.nativeObject.pointer, "isLoaded_void_callback");
			this.register_isLoading_void(this.nativeObject.pointer, "isLoading_void_callback");
			this.register_getLoadingState_void(this.nativeObject.pointer, "getLoadingState_void_callback");
			this.register_isBackgroundLoaded_void(this.nativeObject.pointer, "isBackgroundLoaded_void_callback");
			this.register_setBackgroundLoaded_ev_bool(this.nativeObject.pointer, "setBackgroundLoaded_ev_bool_callback");
			this.register_escalateLoading_void(this.nativeObject.pointer, "escalateLoading_void_callback");
			this.register_addListener_CResourceListener(this.nativeObject.pointer, "addListener_CResourceListener_callback");
			this.register_removeListener_CResourceListener(this.nativeObject.pointer, "removeListener_CResourceListener_callback");
			this.register_getGroup_void(this.nativeObject.pointer, "getGroup_void_callback");
			this.register_changeGroupOwnership_EVString(this.nativeObject.pointer, "changeGroupOwnership_EVString_callback");
			this.register_getCreator_void(this.nativeObject.pointer, "getCreator_void_callback");
			this.register_getOrigin_void(this.nativeObject.pointer, "getOrigin_void_callback");
			this.register__notifyOrigin_EVString(this.nativeObject.pointer, "_notifyOrigin_EVString_callback");
			this.register_getStateCount_void(this.nativeObject.pointer, "getStateCount_void_callback");
			this.register__dirtyState_void(this.nativeObject.pointer, "_dirtyState_void_callback");
			this.register__fireLoadingComplete_ev_bool(this.nativeObject.pointer, "_fireLoadingComplete_ev_bool_callback");
			this.register__firePreparingComplete_ev_bool(this.nativeObject.pointer, "_firePreparingComplete_ev_bool_callback");
			this.register__fireUnloadingComplete_void(this.nativeObject.pointer, "_fireUnloadingComplete_void_callback");
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static Font fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Font obj = null;
 		if(baseObj instanceof Font)
		{
			obj = (Font)baseObj;
		} else {
			obj = new Font(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFont");
			obj.increaseCast();
		}

		return obj;
	}
}
