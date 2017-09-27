package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColourFaderAffector2 extends com.earthview.world.graphic.ParticleAffector {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2", new ColourFaderAffector2ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::JCColourFaderAffector2Proxy", new ColourFaderAffector2ClassFactory());
	}

	public static class CmdRedAdjust1 extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1", new CmdRedAdjust1ClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::JCCmdRedAdjust1Proxy", new CmdRedAdjust1ClassFactory());
		}

		public CmdRedAdjust1() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdRedAdjust1Proxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector2$CmdRedAdjust1".equals(this.getClass().getName()))
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

		public CmdRedAdjust1(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdRedAdjust1(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdRedAdjust1 fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdRedAdjust1 obj = null;
 			if(baseObj instanceof CmdRedAdjust1)
			{
				obj = (CmdRedAdjust1)baseObj;
			} else {
				obj = new CmdRedAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdRedAdjust1");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdRedAdjust1ClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdRedAdjust1 emptyInstance = new CmdRedAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdGreenAdjust1 extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1", new CmdGreenAdjust1ClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::JCCmdGreenAdjust1Proxy", new CmdGreenAdjust1ClassFactory());
		}

		public CmdGreenAdjust1() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdGreenAdjust1Proxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector2$CmdGreenAdjust1".equals(this.getClass().getName()))
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

		public CmdGreenAdjust1(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdGreenAdjust1(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdGreenAdjust1 fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdGreenAdjust1 obj = null;
 			if(baseObj instanceof CmdGreenAdjust1)
			{
				obj = (CmdGreenAdjust1)baseObj;
			} else {
				obj = new CmdGreenAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdGreenAdjust1");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdGreenAdjust1ClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdGreenAdjust1 emptyInstance = new CmdGreenAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdBlueAdjust1 extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1", new CmdBlueAdjust1ClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::JCCmdBlueAdjust1Proxy", new CmdBlueAdjust1ClassFactory());
		}

		public CmdBlueAdjust1() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdBlueAdjust1Proxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector2$CmdBlueAdjust1".equals(this.getClass().getName()))
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

		public CmdBlueAdjust1(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdBlueAdjust1(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdBlueAdjust1 fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdBlueAdjust1 obj = null;
 			if(baseObj instanceof CmdBlueAdjust1)
			{
				obj = (CmdBlueAdjust1)baseObj;
			} else {
				obj = new CmdBlueAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdBlueAdjust1");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdBlueAdjust1ClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdBlueAdjust1 emptyInstance = new CmdBlueAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdAlphaAdjust1 extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1", new CmdAlphaAdjust1ClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::JCCmdAlphaAdjust1Proxy", new CmdAlphaAdjust1ClassFactory());
		}

		public CmdAlphaAdjust1() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdAlphaAdjust1Proxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector2$CmdAlphaAdjust1".equals(this.getClass().getName()))
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

		public CmdAlphaAdjust1(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdAlphaAdjust1(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdAlphaAdjust1 fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdAlphaAdjust1 obj = null;
 			if(baseObj instanceof CmdAlphaAdjust1)
			{
				obj = (CmdAlphaAdjust1)baseObj;
			} else {
				obj = new CmdAlphaAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdAlphaAdjust1");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdAlphaAdjust1ClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdAlphaAdjust1 emptyInstance = new CmdAlphaAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdRedAdjust2 extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2", new CmdRedAdjust2ClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::JCCmdRedAdjust2Proxy", new CmdRedAdjust2ClassFactory());
		}

		public CmdRedAdjust2() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdRedAdjust2Proxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector2$CmdRedAdjust2".equals(this.getClass().getName()))
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

		public CmdRedAdjust2(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdRedAdjust2(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdRedAdjust2 fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdRedAdjust2 obj = null;
 			if(baseObj instanceof CmdRedAdjust2)
			{
				obj = (CmdRedAdjust2)baseObj;
			} else {
				obj = new CmdRedAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdRedAdjust2");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdRedAdjust2ClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdRedAdjust2 emptyInstance = new CmdRedAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdGreenAdjust2 extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2", new CmdGreenAdjust2ClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::JCCmdGreenAdjust2Proxy", new CmdGreenAdjust2ClassFactory());
		}

		public CmdGreenAdjust2() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdGreenAdjust2Proxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector2$CmdGreenAdjust2".equals(this.getClass().getName()))
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

		public CmdGreenAdjust2(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdGreenAdjust2(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdGreenAdjust2 fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdGreenAdjust2 obj = null;
 			if(baseObj instanceof CmdGreenAdjust2)
			{
				obj = (CmdGreenAdjust2)baseObj;
			} else {
				obj = new CmdGreenAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdGreenAdjust2");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdGreenAdjust2ClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdGreenAdjust2 emptyInstance = new CmdGreenAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdBlueAdjust2 extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2", new CmdBlueAdjust2ClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::JCCmdBlueAdjust2Proxy", new CmdBlueAdjust2ClassFactory());
		}

		public CmdBlueAdjust2() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdBlueAdjust2Proxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector2$CmdBlueAdjust2".equals(this.getClass().getName()))
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

		public CmdBlueAdjust2(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdBlueAdjust2(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdBlueAdjust2 fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdBlueAdjust2 obj = null;
 			if(baseObj instanceof CmdBlueAdjust2)
			{
				obj = (CmdBlueAdjust2)baseObj;
			} else {
				obj = new CmdBlueAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdBlueAdjust2");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdBlueAdjust2ClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdBlueAdjust2 emptyInstance = new CmdBlueAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdAlphaAdjust2 extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2", new CmdAlphaAdjust2ClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::JCCmdAlphaAdjust2Proxy", new CmdAlphaAdjust2ClassFactory());
		}

		public CmdAlphaAdjust2() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdAlphaAdjust2Proxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector2$CmdAlphaAdjust2".equals(this.getClass().getName()))
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

		public CmdAlphaAdjust2(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdAlphaAdjust2(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdAlphaAdjust2 fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdAlphaAdjust2 obj = null;
 			if(baseObj instanceof CmdAlphaAdjust2)
			{
				obj = (CmdAlphaAdjust2)baseObj;
			} else {
				obj = new CmdAlphaAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdAlphaAdjust2");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdAlphaAdjust2ClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdAlphaAdjust2 emptyInstance = new CmdAlphaAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdStateChange extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange", new CmdStateChangeClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::JCCmdStateChangeProxy", new CmdStateChangeClassFactory());
		}

		public CmdStateChange() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdStateChangeProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector2$CmdStateChange".equals(this.getClass().getName()))
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

		public CmdStateChange(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdStateChange(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdStateChange fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdStateChange obj = null;
 			if(baseObj instanceof CmdStateChange)
			{
				obj = (CmdStateChange)baseObj;
			} else {
				obj = new CmdStateChange(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdStateChange");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdStateChangeClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdStateChange emptyInstance = new CmdStateChange(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public ColourFaderAffector2(com.earthview.world.graphic.ParticleSystem psys) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer psysPtr = new BasePointer(psys);
		list.add("psys", psysPtr.get());
		Create("JCColourFaderAffector2Proxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.plugin.particlefx.ColourFaderAffector2".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void _affectParticles_CParticleSystem_Real(long pNativeObject, long pSystem, double timeElapsed);
	public void _affectParticles(com.earthview.world.graphic.ParticleSystem pSystem, double timeElapsed)
	{
		long pSystemParamValue = (pSystem == null ? 0L : pSystem.nativeObject.pointer);
		double timeElapsedParamValue = timeElapsed;
		_affectParticles_CParticleSystem_Real(this.nativeObject.pointer, pSystemParamValue, timeElapsedParamValue);
	}
	native private void _affectParticles_CParticleSystem_Real_NoVirtual(long pNativeObject, long pSystem, double timeElapsed);
	protected void _affectParticles_NoVirtual(com.earthview.world.graphic.ParticleSystem pSystem, double timeElapsed)
	{
		long pSystemParamValue = (pSystem == null ? 0L : pSystem.nativeObject.pointer);
		double timeElapsedParamValue = timeElapsed;
		_affectParticles_CParticleSystem_Real_NoVirtual(this.nativeObject.pointer, pSystemParamValue, timeElapsedParamValue);
	}

	native private void setAdjust1_float_float_float_float(long pNativeObject, float red, float green, float blue, float alpha);
	public void setAdjust1(float red, float green, float blue, float alpha)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		float alphaParamValue = alpha;
		setAdjust1_float_float_float_float(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setAdjust1_float_float_float(long pNativeObject, float red, float green, float blue);
	public void setAdjust1(float red, float green, float blue)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		setAdjust1_float_float_float(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setAdjust2_float_float_float_float(long pNativeObject, float red, float green, float blue, float alpha);
	public void setAdjust2(float red, float green, float blue, float alpha)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		float alphaParamValue = alpha;
		setAdjust2_float_float_float_float(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setAdjust2_float_float_float(long pNativeObject, float red, float green, float blue);
	public void setAdjust2(float red, float green, float blue)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		setAdjust2_float_float_float(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setRedAdjust1_float(long pNativeObject, float red);
	public void setRedAdjust1(float red)
	{
		float redParamValue = red;
		setRedAdjust1_float(this.nativeObject.pointer, redParamValue);
	}
	native private void setRedAdjust2_float(long pNativeObject, float red);
	public void setRedAdjust2(float red)
	{
		float redParamValue = red;
		setRedAdjust2_float(this.nativeObject.pointer, redParamValue);
	}
	native private float getRedAdjust1_void(long pNativeObject);
	public float getRedAdjust1()
	{
		float returnValue = getRedAdjust1_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getRedAdjust2_void(long pNativeObject);
	public float getRedAdjust2()
	{
		float returnValue = getRedAdjust2_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGreenAdjust1_float(long pNativeObject, float green);
	public void setGreenAdjust1(float green)
	{
		float greenParamValue = green;
		setGreenAdjust1_float(this.nativeObject.pointer, greenParamValue);
	}
	native private void setGreenAdjust2_float(long pNativeObject, float green);
	public void setGreenAdjust2(float green)
	{
		float greenParamValue = green;
		setGreenAdjust2_float(this.nativeObject.pointer, greenParamValue);
	}
	native private float getGreenAdjust1_void(long pNativeObject);
	public float getGreenAdjust1()
	{
		float returnValue = getGreenAdjust1_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getGreenAdjust2_void(long pNativeObject);
	public float getGreenAdjust2()
	{
		float returnValue = getGreenAdjust2_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBlueAdjust1_float(long pNativeObject, float blue);
	public void setBlueAdjust1(float blue)
	{
		float blueParamValue = blue;
		setBlueAdjust1_float(this.nativeObject.pointer, blueParamValue);
	}
	native private void setBlueAdjust2_float(long pNativeObject, float blue);
	public void setBlueAdjust2(float blue)
	{
		float blueParamValue = blue;
		setBlueAdjust2_float(this.nativeObject.pointer, blueParamValue);
	}
	native private float getBlueAdjust1_void(long pNativeObject);
	public float getBlueAdjust1()
	{
		float returnValue = getBlueAdjust1_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getBlueAdjust2_void(long pNativeObject);
	public float getBlueAdjust2()
	{
		float returnValue = getBlueAdjust2_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAlphaAdjust1_float(long pNativeObject, float alpha);
	public void setAlphaAdjust1(float alpha)
	{
		float alphaParamValue = alpha;
		setAlphaAdjust1_float(this.nativeObject.pointer, alphaParamValue);
	}
	native private void setAlphaAdjust2_float(long pNativeObject, float alpha);
	public void setAlphaAdjust2(float alpha)
	{
		float alphaParamValue = alpha;
		setAlphaAdjust2_float(this.nativeObject.pointer, alphaParamValue);
	}
	native private float getAlphaAdjust1_void(long pNativeObject);
	public float getAlphaAdjust1()
	{
		float returnValue = getAlphaAdjust1_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getAlphaAdjust2_void(long pNativeObject);
	public float getAlphaAdjust2()
	{
		float returnValue = getAlphaAdjust2_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setStateChange_Real(long pNativeObject, double NewValue);
	public void setStateChange(double NewValue)
	{
		double NewValueParamValue = NewValue;
		setStateChange_Real(this.nativeObject.pointer, NewValueParamValue);
	}
	native private double getStateChange_void(long pNativeObject);
	public double getStateChange()
	{
		double returnValue = getStateChange_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static long get_msRedCmd1_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdRedAdjust1 get_msRedCmd1()
	{
		long jniValue = get_msRedCmd1_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdRedAdjust1 __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdRedAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdRedAdjust1");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdRedAdjust1)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdRedAdjust1");
		}
		return __returnValue;
	}
	
	native private static void set_msRedCmd1_CCmdRedAdjust1 (long value);
	public static void set_msRedCmd1(com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdRedAdjust1 msRedCmd1)
	{
		long msRedCmd1ParamValue = msRedCmd1.nativeObject.pointer;
		
		set_msRedCmd1_CCmdRedAdjust1(msRedCmd1ParamValue);
	}
	
	native private static long get_msRedCmd2_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdRedAdjust2 get_msRedCmd2()
	{
		long jniValue = get_msRedCmd2_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdRedAdjust2 __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdRedAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdRedAdjust2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdRedAdjust2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdRedAdjust2");
		}
		return __returnValue;
	}
	
	native private static void set_msRedCmd2_CCmdRedAdjust2 (long value);
	public static void set_msRedCmd2(com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdRedAdjust2 msRedCmd2)
	{
		long msRedCmd2ParamValue = msRedCmd2.nativeObject.pointer;
		
		set_msRedCmd2_CCmdRedAdjust2(msRedCmd2ParamValue);
	}
	
	native private static long get_msGreenCmd1_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdGreenAdjust1 get_msGreenCmd1()
	{
		long jniValue = get_msGreenCmd1_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdGreenAdjust1 __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdGreenAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdGreenAdjust1");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdGreenAdjust1)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdGreenAdjust1");
		}
		return __returnValue;
	}
	
	native private static void set_msGreenCmd1_CCmdGreenAdjust1 (long value);
	public static void set_msGreenCmd1(com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdGreenAdjust1 msGreenCmd1)
	{
		long msGreenCmd1ParamValue = msGreenCmd1.nativeObject.pointer;
		
		set_msGreenCmd1_CCmdGreenAdjust1(msGreenCmd1ParamValue);
	}
	
	native private static long get_msGreenCmd2_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdGreenAdjust2 get_msGreenCmd2()
	{
		long jniValue = get_msGreenCmd2_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdGreenAdjust2 __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdGreenAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdGreenAdjust2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdGreenAdjust2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdGreenAdjust2");
		}
		return __returnValue;
	}
	
	native private static void set_msGreenCmd2_CCmdGreenAdjust2 (long value);
	public static void set_msGreenCmd2(com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdGreenAdjust2 msGreenCmd2)
	{
		long msGreenCmd2ParamValue = msGreenCmd2.nativeObject.pointer;
		
		set_msGreenCmd2_CCmdGreenAdjust2(msGreenCmd2ParamValue);
	}
	
	native private static long get_msBlueCmd1_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdBlueAdjust1 get_msBlueCmd1()
	{
		long jniValue = get_msBlueCmd1_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdBlueAdjust1 __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdBlueAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdBlueAdjust1");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdBlueAdjust1)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdBlueAdjust1");
		}
		return __returnValue;
	}
	
	native private static void set_msBlueCmd1_CCmdBlueAdjust1 (long value);
	public static void set_msBlueCmd1(com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdBlueAdjust1 msBlueCmd1)
	{
		long msBlueCmd1ParamValue = msBlueCmd1.nativeObject.pointer;
		
		set_msBlueCmd1_CCmdBlueAdjust1(msBlueCmd1ParamValue);
	}
	
	native private static long get_msBlueCmd2_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdBlueAdjust2 get_msBlueCmd2()
	{
		long jniValue = get_msBlueCmd2_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdBlueAdjust2 __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdBlueAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdBlueAdjust2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdBlueAdjust2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdBlueAdjust2");
		}
		return __returnValue;
	}
	
	native private static void set_msBlueCmd2_CCmdBlueAdjust2 (long value);
	public static void set_msBlueCmd2(com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdBlueAdjust2 msBlueCmd2)
	{
		long msBlueCmd2ParamValue = msBlueCmd2.nativeObject.pointer;
		
		set_msBlueCmd2_CCmdBlueAdjust2(msBlueCmd2ParamValue);
	}
	
	native private static long get_msAlphaCmd1_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdAlphaAdjust1 get_msAlphaCmd1()
	{
		long jniValue = get_msAlphaCmd1_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdAlphaAdjust1 __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdAlphaAdjust1(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdAlphaAdjust1");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdAlphaAdjust1)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdAlphaAdjust1");
		}
		return __returnValue;
	}
	
	native private static void set_msAlphaCmd1_CCmdAlphaAdjust1 (long value);
	public static void set_msAlphaCmd1(com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdAlphaAdjust1 msAlphaCmd1)
	{
		long msAlphaCmd1ParamValue = msAlphaCmd1.nativeObject.pointer;
		
		set_msAlphaCmd1_CCmdAlphaAdjust1(msAlphaCmd1ParamValue);
	}
	
	native private static long get_msAlphaCmd2_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdAlphaAdjust2 get_msAlphaCmd2()
	{
		long jniValue = get_msAlphaCmd2_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdAlphaAdjust2 __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdAlphaAdjust2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdAlphaAdjust2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdAlphaAdjust2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdAlphaAdjust2");
		}
		return __returnValue;
	}
	
	native private static void set_msAlphaCmd2_CCmdAlphaAdjust2 (long value);
	public static void set_msAlphaCmd2(com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdAlphaAdjust2 msAlphaCmd2)
	{
		long msAlphaCmd2ParamValue = msAlphaCmd2.nativeObject.pointer;
		
		set_msAlphaCmd2_CCmdAlphaAdjust2(msAlphaCmd2ParamValue);
	}
	
	native private static long get_msStateCmd_void();
	public static com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdStateChange get_msStateCmd()
	{
		long jniValue = get_msStateCmd_void();
		
		com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdStateChange __returnValue = new com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdStateChange(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCmdStateChange");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdStateChange)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCmdStateChange");
		}
		return __returnValue;
	}
	
	native private static void set_msStateCmd_CCmdStateChange (long value);
	public static void set_msStateCmd(com.earthview.world.plugin.particlefx.ColourFaderAffector2.CmdStateChange msStateCmd)
	{
		long msStateCmdParamValue = msStateCmd.nativeObject.pointer;
		
		set_msStateCmd_CCmdStateChange(msStateCmdParamValue);
	}
	
	public ColourFaderAffector2(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ColourFaderAffector2(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 初始化新粒子
	 * @param pParticle 指向初始化粒子的指针
	 */
	public void _initParticle(com.earthview.world.graphic.Particle pParticle)
	{
		super._initParticle_NoVirtual(pParticle);
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
	
	native protected void register__initParticle_CParticle(long pNativeObject, String method);
	native protected void register__affectParticles_CParticleSystem_Real(long pNativeObject, String method);
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register__initParticle_CParticle(this.nativeObject.pointer, "_initParticle_CParticle_callback");
			this.register__affectParticles_CParticleSystem_Real(this.nativeObject.pointer, "_affectParticles_CParticleSystem_Real_callback");
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static ColourFaderAffector2 fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ColourFaderAffector2 obj = null;
 		if(baseObj instanceof ColourFaderAffector2)
		{
			obj = (ColourFaderAffector2)baseObj;
		} else {
			obj = new ColourFaderAffector2(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CColourFaderAffector2");
			obj.increaseCast();
		}

		return obj;
	}
}
