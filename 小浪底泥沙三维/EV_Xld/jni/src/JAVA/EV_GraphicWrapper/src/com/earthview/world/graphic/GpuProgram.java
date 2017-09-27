package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// Forward declaration
public class GpuProgram extends com.earthview.world.graphic.Resource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram", new GpuProgramClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCGpuProgramProxy", new GpuProgramClassFactory());
	}

	//// Command object - see EarthView::World::Core::CParamCommand
	public static class GpuprogramCmdType extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType", new GpuprogramCmdTypeClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::JCGpuprogramCmdTypeProxy", new GpuprogramCmdTypeClassFactory());
		}

		public GpuprogramCmdType() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCGpuprogramCmdTypeProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.GpuProgram$GpuprogramCmdType".equals(this.getClass().getName()))
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

		public GpuprogramCmdType(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public GpuprogramCmdType(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static GpuprogramCmdType fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			GpuprogramCmdType obj = null;
 			if(baseObj instanceof GpuprogramCmdType)
			{
				obj = (GpuprogramCmdType)baseObj;
			} else {
				obj = new GpuprogramCmdType(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CGpuprogramCmdType");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GpuprogramCmdTypeClassFactory implements IClassFactory {
		public BaseObject create()
		{
			GpuprogramCmdType emptyInstance = new GpuprogramCmdType(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdSyntax extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::CCmdSyntax", new CmdSyntaxClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::JCCmdSyntaxProxy", new CmdSyntaxClassFactory());
		}

		public CmdSyntax() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdSyntaxProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.GpuProgram$CmdSyntax".equals(this.getClass().getName()))
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

		public CmdSyntax(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdSyntax(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdSyntax fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdSyntax obj = null;
 			if(baseObj instanceof CmdSyntax)
			{
				obj = (CmdSyntax)baseObj;
			} else {
				obj = new CmdSyntax(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdSyntax");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdSyntaxClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdSyntax emptyInstance = new CmdSyntax(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdSkeletal extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::CCmdSkeletal", new CmdSkeletalClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::JCCmdSkeletalProxy", new CmdSkeletalClassFactory());
		}

		public CmdSkeletal() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdSkeletalProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.GpuProgram$CmdSkeletal".equals(this.getClass().getName()))
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

		public CmdSkeletal(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdSkeletal(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdSkeletal fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdSkeletal obj = null;
 			if(baseObj instanceof CmdSkeletal)
			{
				obj = (CmdSkeletal)baseObj;
			} else {
				obj = new CmdSkeletal(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdSkeletal");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdSkeletalClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdSkeletal emptyInstance = new CmdSkeletal(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdMorph extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::CCmdMorph", new CmdMorphClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::JCCmdMorphProxy", new CmdMorphClassFactory());
		}

		public CmdMorph() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdMorphProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.GpuProgram$CmdMorph".equals(this.getClass().getName()))
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

		public CmdMorph(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdMorph(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdMorph fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdMorph obj = null;
 			if(baseObj instanceof CmdMorph)
			{
				obj = (CmdMorph)baseObj;
			} else {
				obj = new CmdMorph(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdMorph");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdMorphClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdMorph emptyInstance = new CmdMorph(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdPose extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::CCmdPose", new CmdPoseClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::JCCmdPoseProxy", new CmdPoseClassFactory());
		}

		public CmdPose() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdPoseProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.GpuProgram$CmdPose".equals(this.getClass().getName()))
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

		public CmdPose(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdPose(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdPose fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdPose obj = null;
 			if(baseObj instanceof CmdPose)
			{
				obj = (CmdPose)baseObj;
			} else {
				obj = new CmdPose(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdPose");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdPoseClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdPose emptyInstance = new CmdPose(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdVTF extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::CCmdVTF", new CmdVTFClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::JCCmdVTFProxy", new CmdVTFClassFactory());
		}

		public CmdVTF() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdVTFProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.GpuProgram$CmdVTF".equals(this.getClass().getName()))
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

		public CmdVTF(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdVTF(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdVTF fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdVTF obj = null;
 			if(baseObj instanceof CmdVTF)
			{
				obj = (CmdVTF)baseObj;
			} else {
				obj = new CmdVTF(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdVTF");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdVTFClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdVTF emptyInstance = new CmdVTF(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdManualNamedConstsFile extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile", new CmdManualNamedConstsFileClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::JCCmdManualNamedConstsFileProxy", new CmdManualNamedConstsFileClassFactory());
		}

		public CmdManualNamedConstsFile() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdManualNamedConstsFileProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.GpuProgram$CmdManualNamedConstsFile".equals(this.getClass().getName()))
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

		public CmdManualNamedConstsFile(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdManualNamedConstsFile(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdManualNamedConstsFile fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdManualNamedConstsFile obj = null;
 			if(baseObj instanceof CmdManualNamedConstsFile)
			{
				obj = (CmdManualNamedConstsFile)baseObj;
			} else {
				obj = new CmdManualNamedConstsFile(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdManualNamedConstsFile");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdManualNamedConstsFileClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdManualNamedConstsFile emptyInstance = new CmdManualNamedConstsFile(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CmdAdjacency extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::CCmdAdjacency", new CmdAdjacencyClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuProgram::JCCmdAdjacencyProxy", new CmdAdjacencyClassFactory());
		}

		public CmdAdjacency() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdAdjacencyProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.GpuProgram$CmdAdjacency".equals(this.getClass().getName()))
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

		public CmdAdjacency(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdAdjacency(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdAdjacency fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdAdjacency obj = null;
 			if(baseObj instanceof CmdAdjacency)
			{
				obj = (CmdAdjacency)baseObj;
			} else {
				obj = new CmdAdjacency(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdAdjacency");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdAdjacencyClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdAdjacency emptyInstance = new CmdAdjacency(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
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

	public GpuProgram(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader) {
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
		Create("JCGpuProgramProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.GpuProgram".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public GpuProgram(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual) {
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
		Create("JCGpuProgramProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.GpuProgram".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public GpuProgram(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group) {
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
		Create("JCGpuProgramProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.GpuProgram".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setSourceFile_EVString_callback(String filename)
	{
		String filenameParamValue = filename;
		setSourceFile(filenameParamValue);
	}

	native private void setSourceFile_EVString(long pNativeObject, String filename);
	public void setSourceFile(String filename)
	{
		String filenameParamValue = filename;
		setSourceFile_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private void setSourceFile_EVString_NoVirtual(long pNativeObject, String filename);
	protected void setSourceFile_NoVirtual(String filename)
	{
		String filenameParamValue = filename;
		setSourceFile_EVString_NoVirtual(this.nativeObject.pointer, filenameParamValue);
	}

	protected  void setSource_EVString_callback(String source)
	{
		String sourceParamValue = source;
		setSource(sourceParamValue);
	}

	native private void setSource_EVString(long pNativeObject, String source);
	public void setSource(String source)
	{
		String sourceParamValue = source;
		setSource_EVString(this.nativeObject.pointer, sourceParamValue);
	}
	native private void setSource_EVString_NoVirtual(long pNativeObject, String source);
	protected void setSource_NoVirtual(String source)
	{
		String sourceParamValue = source;
		setSource_EVString_NoVirtual(this.nativeObject.pointer, sourceParamValue);
	}

	protected  String getSyntaxCode_void_callback()
	{
		String returnValue = getSyntaxCode();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSyntaxCode_void(long pNativeObject);
	public String getSyntaxCode()
	{
		String returnValue = getSyntaxCode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSyntaxCode_void_NoVirtual(long pNativeObject);
	protected String getSyntaxCode_NoVirtual()
	{
		String returnValue = getSyntaxCode_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setSyntaxCode_EVString_callback(String syntax)
	{
		String syntaxParamValue = syntax;
		setSyntaxCode(syntaxParamValue);
	}

	native private void setSyntaxCode_EVString(long pNativeObject, String syntax);
	public void setSyntaxCode(String syntax)
	{
		String syntaxParamValue = syntax;
		setSyntaxCode_EVString(this.nativeObject.pointer, syntaxParamValue);
	}
	native private void setSyntaxCode_EVString_NoVirtual(long pNativeObject, String syntax);
	protected void setSyntaxCode_NoVirtual(String syntax)
	{
		String syntaxParamValue = syntax;
		setSyntaxCode_EVString_NoVirtual(this.nativeObject.pointer, syntaxParamValue);
	}

	protected  String getSourceFile_void_callback()
	{
		String returnValue = getSourceFile();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSourceFile_void(long pNativeObject);
	public String getSourceFile()
	{
		String returnValue = getSourceFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSourceFile_void_NoVirtual(long pNativeObject);
	protected String getSourceFile_NoVirtual()
	{
		String returnValue = getSourceFile_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getSource_void_callback()
	{
		String returnValue = getSource();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSource_void(long pNativeObject);
	public String getSource()
	{
		String returnValue = getSource_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSource_void_NoVirtual(long pNativeObject);
	protected String getSource_NoVirtual()
	{
		String returnValue = getSource_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setType_GpuProgramType_callback(int t)
	{
		com.earthview.world.graphic.GpuProgramType tParamValue = com.earthview.world.graphic.GpuProgramType.toEnum(t);
		setType(tParamValue);
	}

	native private void setType_GpuProgramType(long pNativeObject, int t);
	//// Set the program type (only valid before load)
	public void setType(com.earthview.world.graphic.GpuProgramType t)
	{
		int tParamValue = t.getValue();
		setType_GpuProgramType(this.nativeObject.pointer, tParamValue);
	}
	native private void setType_GpuProgramType_NoVirtual(long pNativeObject, int t);
	protected void setType_NoVirtual(com.earthview.world.graphic.GpuProgramType t)
	{
		int tParamValue = t.getValue();
		setType_GpuProgramType_NoVirtual(this.nativeObject.pointer, tParamValue);
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.graphic.GpuProgramType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	//// Get the program type
	public com.earthview.world.graphic.GpuProgramType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.GpuProgramType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuProgramType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.GpuProgramType.toEnum(returnValue);
	}

	protected  long _getBindingDelegate_void_callback()
	{
		com.earthview.world.graphic.GpuProgram returnValue = _getBindingDelegate();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getBindingDelegate_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgram _getBindingDelegate()
	{
		long returnValue = _getBindingDelegate_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgram __returnValue = new com.earthview.world.graphic.GpuProgram(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgram)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgram");
		}
		return __returnValue;
	}
	native private long _getBindingDelegate_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuProgram _getBindingDelegate_NoVirtual()
	{
		long returnValue = _getBindingDelegate_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgram __returnValue = new com.earthview.world.graphic.GpuProgram(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgram)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgram");
		}
		return __returnValue;
	}

	protected  boolean isSupported_void_callback()
	{
		boolean returnValue = isSupported();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSupported_void(long pNativeObject);
	public boolean isSupported()
	{
		boolean returnValue = isSupported_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSupported_void_NoVirtual(long pNativeObject);
	protected boolean isSupported_NoVirtual()
	{
		boolean returnValue = isSupported_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long createParameters_void_callback()
	{
		com.earthview.world.graphic.GpuProgramParametersSharedPtr returnValue = createParameters();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createParameters_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr createParameters()
	{
		long returnValue = createParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}
	native private long createParameters_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuProgramParametersSharedPtr createParameters_NoVirtual()
	{
		long returnValue = createParameters_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}

	protected  void setSkeletalAnimationIncluded_ev_bool_callback(boolean included)
	{
		boolean includedParamValue = included;
		setSkeletalAnimationIncluded(includedParamValue);
	}

	native private void setSkeletalAnimationIncluded_ev_bool(long pNativeObject, boolean included);
	public void setSkeletalAnimationIncluded(boolean included)
	{
		boolean includedParamValue = included;
		setSkeletalAnimationIncluded_ev_bool(this.nativeObject.pointer, includedParamValue);
	}
	native private void setSkeletalAnimationIncluded_ev_bool_NoVirtual(long pNativeObject, boolean included);
	protected void setSkeletalAnimationIncluded_NoVirtual(boolean included)
	{
		boolean includedParamValue = included;
		setSkeletalAnimationIncluded_ev_bool_NoVirtual(this.nativeObject.pointer, includedParamValue);
	}

	protected  boolean isSkeletalAnimationIncluded_void_callback()
	{
		boolean returnValue = isSkeletalAnimationIncluded();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSkeletalAnimationIncluded_void(long pNativeObject);
	public boolean isSkeletalAnimationIncluded()
	{
		boolean returnValue = isSkeletalAnimationIncluded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSkeletalAnimationIncluded_void_NoVirtual(long pNativeObject);
	protected boolean isSkeletalAnimationIncluded_NoVirtual()
	{
		boolean returnValue = isSkeletalAnimationIncluded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setMorphAnimationIncluded_ev_bool_callback(boolean included)
	{
		boolean includedParamValue = included;
		setMorphAnimationIncluded(includedParamValue);
	}

	native private void setMorphAnimationIncluded_ev_bool(long pNativeObject, boolean included);
	public void setMorphAnimationIncluded(boolean included)
	{
		boolean includedParamValue = included;
		setMorphAnimationIncluded_ev_bool(this.nativeObject.pointer, includedParamValue);
	}
	native private void setMorphAnimationIncluded_ev_bool_NoVirtual(long pNativeObject, boolean included);
	protected void setMorphAnimationIncluded_NoVirtual(boolean included)
	{
		boolean includedParamValue = included;
		setMorphAnimationIncluded_ev_bool_NoVirtual(this.nativeObject.pointer, includedParamValue);
	}

	protected  void setPoseAnimationIncluded_ev_uint16_callback(int poseCount)
	{
		int poseCountParamValue = poseCount;
		setPoseAnimationIncluded(poseCountParamValue);
	}

	native private void setPoseAnimationIncluded_ev_uint16(long pNativeObject, int poseCount);
	public void setPoseAnimationIncluded(int poseCount)
	{
		int poseCountParamValue = poseCount;
		setPoseAnimationIncluded_ev_uint16(this.nativeObject.pointer, poseCountParamValue);
	}
	native private void setPoseAnimationIncluded_ev_uint16_NoVirtual(long pNativeObject, int poseCount);
	protected void setPoseAnimationIncluded_NoVirtual(int poseCount)
	{
		int poseCountParamValue = poseCount;
		setPoseAnimationIncluded_ev_uint16_NoVirtual(this.nativeObject.pointer, poseCountParamValue);
	}

	protected  boolean isMorphAnimationIncluded_void_callback()
	{
		boolean returnValue = isMorphAnimationIncluded();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isMorphAnimationIncluded_void(long pNativeObject);
	public boolean isMorphAnimationIncluded()
	{
		boolean returnValue = isMorphAnimationIncluded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isMorphAnimationIncluded_void_NoVirtual(long pNativeObject);
	protected boolean isMorphAnimationIncluded_NoVirtual()
	{
		boolean returnValue = isMorphAnimationIncluded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isPoseAnimationIncluded_void_callback()
	{
		boolean returnValue = isPoseAnimationIncluded();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isPoseAnimationIncluded_void(long pNativeObject);
	public boolean isPoseAnimationIncluded()
	{
		boolean returnValue = isPoseAnimationIncluded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isPoseAnimationIncluded_void_NoVirtual(long pNativeObject);
	protected boolean isPoseAnimationIncluded_NoVirtual()
	{
		boolean returnValue = isPoseAnimationIncluded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getNumberOfPosesIncluded_void_callback()
	{
		int returnValue = getNumberOfPosesIncluded();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNumberOfPosesIncluded_void(long pNativeObject);
	public int getNumberOfPosesIncluded()
	{
		int returnValue = getNumberOfPosesIncluded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumberOfPosesIncluded_void_NoVirtual(long pNativeObject);
	protected int getNumberOfPosesIncluded_NoVirtual()
	{
		int returnValue = getNumberOfPosesIncluded_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setVertexTextureFetchRequired_ev_bool_callback(boolean r)
	{
		boolean rParamValue = r;
		setVertexTextureFetchRequired(rParamValue);
	}

	native private void setVertexTextureFetchRequired_ev_bool(long pNativeObject, boolean r);
	public void setVertexTextureFetchRequired(boolean r)
	{
		boolean rParamValue = r;
		setVertexTextureFetchRequired_ev_bool(this.nativeObject.pointer, rParamValue);
	}
	native private void setVertexTextureFetchRequired_ev_bool_NoVirtual(long pNativeObject, boolean r);
	protected void setVertexTextureFetchRequired_NoVirtual(boolean r)
	{
		boolean rParamValue = r;
		setVertexTextureFetchRequired_ev_bool_NoVirtual(this.nativeObject.pointer, rParamValue);
	}

	protected  boolean isVertexTextureFetchRequired_void_callback()
	{
		boolean returnValue = isVertexTextureFetchRequired();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isVertexTextureFetchRequired_void(long pNativeObject);
	public boolean isVertexTextureFetchRequired()
	{
		boolean returnValue = isVertexTextureFetchRequired_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVertexTextureFetchRequired_void_NoVirtual(long pNativeObject);
	protected boolean isVertexTextureFetchRequired_NoVirtual()
	{
		boolean returnValue = isVertexTextureFetchRequired_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setAdjacencyInfoRequired_ev_bool_callback(boolean r)
	{
		boolean rParamValue = r;
		setAdjacencyInfoRequired(rParamValue);
	}

	native private void setAdjacencyInfoRequired_ev_bool(long pNativeObject, boolean r);
	public void setAdjacencyInfoRequired(boolean r)
	{
		boolean rParamValue = r;
		setAdjacencyInfoRequired_ev_bool(this.nativeObject.pointer, rParamValue);
	}
	native private void setAdjacencyInfoRequired_ev_bool_NoVirtual(long pNativeObject, boolean r);
	protected void setAdjacencyInfoRequired_NoVirtual(boolean r)
	{
		boolean rParamValue = r;
		setAdjacencyInfoRequired_ev_bool_NoVirtual(this.nativeObject.pointer, rParamValue);
	}

	protected  boolean isAdjacencyInfoRequired_void_callback()
	{
		boolean returnValue = isAdjacencyInfoRequired();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isAdjacencyInfoRequired_void(long pNativeObject);
	public boolean isAdjacencyInfoRequired()
	{
		boolean returnValue = isAdjacencyInfoRequired_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAdjacencyInfoRequired_void_NoVirtual(long pNativeObject);
	protected boolean isAdjacencyInfoRequired_NoVirtual()
	{
		boolean returnValue = isAdjacencyInfoRequired_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getDefaultParameters_void_callback()
	{
		com.earthview.world.graphic.GpuProgramParametersSharedPtr returnValue = getDefaultParameters();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDefaultParameters_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr getDefaultParameters()
	{
		long returnValue = getDefaultParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}
	native private long getDefaultParameters_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuProgramParametersSharedPtr getDefaultParameters_NoVirtual()
	{
		long returnValue = getDefaultParameters_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}

	protected  boolean hasDefaultParameters_void_callback()
	{
		boolean returnValue = hasDefaultParameters();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasDefaultParameters_void(long pNativeObject);
	public boolean hasDefaultParameters()
	{
		boolean returnValue = hasDefaultParameters_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasDefaultParameters_void_NoVirtual(long pNativeObject);
	protected boolean hasDefaultParameters_NoVirtual()
	{
		boolean returnValue = hasDefaultParameters_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getPassSurfaceAndLightStates_void_callback()
	{
		boolean returnValue = getPassSurfaceAndLightStates();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getPassSurfaceAndLightStates_void(long pNativeObject);
	public boolean getPassSurfaceAndLightStates()
	{
		boolean returnValue = getPassSurfaceAndLightStates_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getPassSurfaceAndLightStates_void_NoVirtual(long pNativeObject);
	protected boolean getPassSurfaceAndLightStates_NoVirtual()
	{
		boolean returnValue = getPassSurfaceAndLightStates_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getPassFogStates_void_callback()
	{
		boolean returnValue = getPassFogStates();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getPassFogStates_void(long pNativeObject);
	public boolean getPassFogStates()
	{
		boolean returnValue = getPassFogStates_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getPassFogStates_void_NoVirtual(long pNativeObject);
	protected boolean getPassFogStates_NoVirtual()
	{
		boolean returnValue = getPassFogStates_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getPassTransformStates_void_callback()
	{
		boolean returnValue = getPassTransformStates();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getPassTransformStates_void(long pNativeObject);
	public boolean getPassTransformStates()
	{
		boolean returnValue = getPassTransformStates_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getPassTransformStates_void_NoVirtual(long pNativeObject);
	protected boolean getPassTransformStates_NoVirtual()
	{
		boolean returnValue = getPassTransformStates_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getLanguage_void_callback()
	{
		String returnValue = getLanguage();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getLanguage_void(long pNativeObject);
	public String getLanguage()
	{
		String returnValue = getLanguage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getLanguage_void_NoVirtual(long pNativeObject);
	protected String getLanguage_NoVirtual()
	{
		String returnValue = getLanguage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean hasCompileError_void_callback()
	{
		boolean returnValue = hasCompileError();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasCompileError_void(long pNativeObject);
	public boolean hasCompileError()
	{
		boolean returnValue = hasCompileError_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasCompileError_void_NoVirtual(long pNativeObject);
	protected boolean hasCompileError_NoVirtual()
	{
		boolean returnValue = hasCompileError_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void resetCompileError_void_callback()
	{
		resetCompileError();
	}

	native private void resetCompileError_void(long pNativeObject);
	public void resetCompileError()
	{
		resetCompileError_void(this.nativeObject.pointer);
	}
	native private void resetCompileError_void_NoVirtual(long pNativeObject);
	protected void resetCompileError_NoVirtual()
	{
		resetCompileError_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setManualNamedConstants_GpuNamedConstants_callback(long namedConstants)
	{
		com.earthview.world.graphic.GpuNamedConstants namedConstantsParamValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate);
		namedConstantsParamValue.setDelegate(true);
		namedConstantsParamValue.setInstancePointer(new InstancePointer(namedConstants));
		IClassFactory namedConstantsParamValueClassFactory = GlobalClassFactoryMap.get(namedConstantsParamValue.getCppInstanceTypeName());
		if (namedConstantsParamValueClassFactory != null)
		{
			namedConstantsParamValue.setDelegate(true);
			namedConstantsParamValue = (com.earthview.world.graphic.GpuNamedConstants)namedConstantsParamValueClassFactory.create();
			namedConstantsParamValue.setDelegate(true);
			namedConstantsParamValue.setInstancePointer(new InstancePointer(namedConstants));
		}
		setManualNamedConstants(namedConstantsParamValue);
	}

	native private void setManualNamedConstants_GpuNamedConstants(long pNativeObject, long namedConstants);
	public void setManualNamedConstants(com.earthview.world.graphic.GpuNamedConstants namedConstants)
	{
		long namedConstantsParamValue = namedConstants.nativeObject.pointer;
		setManualNamedConstants_GpuNamedConstants(this.nativeObject.pointer, namedConstantsParamValue);
	}
	native private void setManualNamedConstants_GpuNamedConstants_NoVirtual(long pNativeObject, long namedConstants);
	protected void setManualNamedConstants_NoVirtual(com.earthview.world.graphic.GpuNamedConstants namedConstants)
	{
		long namedConstantsParamValue = namedConstants.nativeObject.pointer;
		setManualNamedConstants_GpuNamedConstants_NoVirtual(this.nativeObject.pointer, namedConstantsParamValue);
	}

	protected  long getNamedConstants_void_callback()
	{
		com.earthview.world.graphic.GpuNamedConstants returnValue = getNamedConstants();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getNamedConstants_void(long pNativeObject);
	//// Get a read-only reference to the named constants registered for this program (manually or automatically)
	public com.earthview.world.graphic.GpuNamedConstants getNamedConstants()
	{
		long returnValue = getNamedConstants_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuNamedConstants __returnValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate, "GpuNamedConstants");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuNamedConstants)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuNamedConstants");
		}
		return __returnValue;
	}
	native private long getNamedConstants_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuNamedConstants getNamedConstants_NoVirtual()
	{
		long returnValue = getNamedConstants_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuNamedConstants __returnValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate, "GpuNamedConstants");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuNamedConstants)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuNamedConstants");
		}
		return __returnValue;
	}

	protected  void setManualNamedConstantsFile_EVString_callback(String paramDefFile)
	{
		String paramDefFileParamValue = paramDefFile;
		setManualNamedConstantsFile(paramDefFileParamValue);
	}

	native private void setManualNamedConstantsFile_EVString(long pNativeObject, String paramDefFile);
	public void setManualNamedConstantsFile(String paramDefFile)
	{
		String paramDefFileParamValue = paramDefFile;
		setManualNamedConstantsFile_EVString(this.nativeObject.pointer, paramDefFileParamValue);
	}
	native private void setManualNamedConstantsFile_EVString_NoVirtual(long pNativeObject, String paramDefFile);
	protected void setManualNamedConstantsFile_NoVirtual(String paramDefFile)
	{
		String paramDefFileParamValue = paramDefFile;
		setManualNamedConstantsFile_EVString_NoVirtual(this.nativeObject.pointer, paramDefFileParamValue);
	}

	protected  String getManualNamedConstantsFile_void_callback()
	{
		String returnValue = getManualNamedConstantsFile();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getManualNamedConstantsFile_void(long pNativeObject);
	public String getManualNamedConstantsFile()
	{
		String returnValue = getManualNamedConstantsFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getManualNamedConstantsFile_void_NoVirtual(long pNativeObject);
	protected String getManualNamedConstantsFile_NoVirtual()
	{
		String returnValue = getManualNamedConstantsFile_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getConstantDefinitions_void_callback()
	{
		com.earthview.world.graphic.GpuNamedConstants returnValue = getConstantDefinitions();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getConstantDefinitions_void(long pNativeObject);
	public com.earthview.world.graphic.GpuNamedConstants getConstantDefinitions()
	{
		long returnValue = getConstantDefinitions_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuNamedConstants __returnValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate, "GpuNamedConstants");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuNamedConstants)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuNamedConstants");
		}
		return __returnValue;
	}
	native private long getConstantDefinitions_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.GpuNamedConstants getConstantDefinitions_NoVirtual()
	{
		long returnValue = getConstantDefinitions_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuNamedConstants __returnValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate, "GpuNamedConstants");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuNamedConstants)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuNamedConstants");
		}
		return __returnValue;
	}

	protected  void loadFromSource_void_callback()
	{
		loadFromSource();
	}

	native private void loadFromSource_void(long pNativeObject);
	//// Virtual method which must be implemented by subclasses, load from mSource
	public void loadFromSource()
	{
		loadFromSource_void(this.nativeObject.pointer);
	}
	native private void loadFromSource_void_NoVirtual(long pNativeObject);
	protected void loadFromSource_NoVirtual()
	{
		loadFromSource_void_NoVirtual(this.nativeObject.pointer);
	}

	public GpuProgram(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuProgram(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 卸载的实现
	 */
	public void unloadImpl()
	{
		super.unloadImpl_NoVirtual();
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
	
	native protected void register_setSourceFile_EVString(long pNativeObject, String method);
	native protected void register_setSource_EVString(long pNativeObject, String method);
	native protected void register_getSyntaxCode_void(long pNativeObject, String method);
	native protected void register_setSyntaxCode_EVString(long pNativeObject, String method);
	native protected void register_getSourceFile_void(long pNativeObject, String method);
	native protected void register_getSource_void(long pNativeObject, String method);
	native protected void register_setType_GpuProgramType(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register__getBindingDelegate_void(long pNativeObject, String method);
	native protected void register_isSupported_void(long pNativeObject, String method);
	native protected void register_createParameters_void(long pNativeObject, String method);
	native protected void register_setSkeletalAnimationIncluded_ev_bool(long pNativeObject, String method);
	native protected void register_isSkeletalAnimationIncluded_void(long pNativeObject, String method);
	native protected void register_setMorphAnimationIncluded_ev_bool(long pNativeObject, String method);
	native protected void register_setPoseAnimationIncluded_ev_uint16(long pNativeObject, String method);
	native protected void register_isMorphAnimationIncluded_void(long pNativeObject, String method);
	native protected void register_isPoseAnimationIncluded_void(long pNativeObject, String method);
	native protected void register_getNumberOfPosesIncluded_void(long pNativeObject, String method);
	native protected void register_setVertexTextureFetchRequired_ev_bool(long pNativeObject, String method);
	native protected void register_isVertexTextureFetchRequired_void(long pNativeObject, String method);
	native protected void register_setAdjacencyInfoRequired_ev_bool(long pNativeObject, String method);
	native protected void register_isAdjacencyInfoRequired_void(long pNativeObject, String method);
	native protected void register_getDefaultParameters_void(long pNativeObject, String method);
	native protected void register_hasDefaultParameters_void(long pNativeObject, String method);
	native protected void register_getPassSurfaceAndLightStates_void(long pNativeObject, String method);
	native protected void register_getPassFogStates_void(long pNativeObject, String method);
	native protected void register_getPassTransformStates_void(long pNativeObject, String method);
	native protected void register_getLanguage_void(long pNativeObject, String method);
	native protected void register_hasCompileError_void(long pNativeObject, String method);
	native protected void register_resetCompileError_void(long pNativeObject, String method);
	native protected void register_setManualNamedConstants_GpuNamedConstants(long pNativeObject, String method);
	native protected void register_getNamedConstants_void(long pNativeObject, String method);
	native protected void register_setManualNamedConstantsFile_EVString(long pNativeObject, String method);
	native protected void register_getManualNamedConstantsFile_void(long pNativeObject, String method);
	native protected void register_getConstantDefinitions_void(long pNativeObject, String method);
	native protected void register_loadFromSource_void(long pNativeObject, String method);
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
			this.register_setSourceFile_EVString(this.nativeObject.pointer, "setSourceFile_EVString_callback");
			this.register_setSource_EVString(this.nativeObject.pointer, "setSource_EVString_callback");
			this.register_getSyntaxCode_void(this.nativeObject.pointer, "getSyntaxCode_void_callback");
			this.register_setSyntaxCode_EVString(this.nativeObject.pointer, "setSyntaxCode_EVString_callback");
			this.register_getSourceFile_void(this.nativeObject.pointer, "getSourceFile_void_callback");
			this.register_getSource_void(this.nativeObject.pointer, "getSource_void_callback");
			this.register_setType_GpuProgramType(this.nativeObject.pointer, "setType_GpuProgramType_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register__getBindingDelegate_void(this.nativeObject.pointer, "_getBindingDelegate_void_callback");
			this.register_isSupported_void(this.nativeObject.pointer, "isSupported_void_callback");
			this.register_createParameters_void(this.nativeObject.pointer, "createParameters_void_callback");
			this.register_setSkeletalAnimationIncluded_ev_bool(this.nativeObject.pointer, "setSkeletalAnimationIncluded_ev_bool_callback");
			this.register_isSkeletalAnimationIncluded_void(this.nativeObject.pointer, "isSkeletalAnimationIncluded_void_callback");
			this.register_setMorphAnimationIncluded_ev_bool(this.nativeObject.pointer, "setMorphAnimationIncluded_ev_bool_callback");
			this.register_setPoseAnimationIncluded_ev_uint16(this.nativeObject.pointer, "setPoseAnimationIncluded_ev_uint16_callback");
			this.register_isMorphAnimationIncluded_void(this.nativeObject.pointer, "isMorphAnimationIncluded_void_callback");
			this.register_isPoseAnimationIncluded_void(this.nativeObject.pointer, "isPoseAnimationIncluded_void_callback");
			this.register_getNumberOfPosesIncluded_void(this.nativeObject.pointer, "getNumberOfPosesIncluded_void_callback");
			this.register_setVertexTextureFetchRequired_ev_bool(this.nativeObject.pointer, "setVertexTextureFetchRequired_ev_bool_callback");
			this.register_isVertexTextureFetchRequired_void(this.nativeObject.pointer, "isVertexTextureFetchRequired_void_callback");
			this.register_setAdjacencyInfoRequired_ev_bool(this.nativeObject.pointer, "setAdjacencyInfoRequired_ev_bool_callback");
			this.register_isAdjacencyInfoRequired_void(this.nativeObject.pointer, "isAdjacencyInfoRequired_void_callback");
			this.register_getDefaultParameters_void(this.nativeObject.pointer, "getDefaultParameters_void_callback");
			this.register_hasDefaultParameters_void(this.nativeObject.pointer, "hasDefaultParameters_void_callback");
			this.register_getPassSurfaceAndLightStates_void(this.nativeObject.pointer, "getPassSurfaceAndLightStates_void_callback");
			this.register_getPassFogStates_void(this.nativeObject.pointer, "getPassFogStates_void_callback");
			this.register_getPassTransformStates_void(this.nativeObject.pointer, "getPassTransformStates_void_callback");
			this.register_getLanguage_void(this.nativeObject.pointer, "getLanguage_void_callback");
			this.register_hasCompileError_void(this.nativeObject.pointer, "hasCompileError_void_callback");
			this.register_resetCompileError_void(this.nativeObject.pointer, "resetCompileError_void_callback");
			this.register_setManualNamedConstants_GpuNamedConstants(this.nativeObject.pointer, "setManualNamedConstants_GpuNamedConstants_callback");
			this.register_getNamedConstants_void(this.nativeObject.pointer, "getNamedConstants_void_callback");
			this.register_setManualNamedConstantsFile_EVString(this.nativeObject.pointer, "setManualNamedConstantsFile_EVString_callback");
			this.register_getManualNamedConstantsFile_void(this.nativeObject.pointer, "getManualNamedConstantsFile_void_callback");
			this.register_getConstantDefinitions_void(this.nativeObject.pointer, "getConstantDefinitions_void_callback");
			this.register_loadFromSource_void(this.nativeObject.pointer, "loadFromSource_void_callback");
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
	
	public static GpuProgram fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuProgram obj = null;
 		if(baseObj instanceof GpuProgram)
		{
			obj = (GpuProgram)baseObj;
		} else {
			obj = new GpuProgram(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGpuProgram");
			obj.increaseCast();
		}

		return obj;
	}
}
