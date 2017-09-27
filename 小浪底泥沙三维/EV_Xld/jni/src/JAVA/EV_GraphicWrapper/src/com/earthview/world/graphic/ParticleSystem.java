package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 定义了一个基于特殊效果的粒子系统
 */
public class ParticleSystem extends com.earthview.world.graphic.MovableObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystem", new ParticleSystemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCParticleSystemProxy", new ParticleSystemClassFactory());
	}

	public static class ParticleSystemInternalStringInterface extends com.earthview.world.core.StringInterface {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystem::CParticleSystemInternalStringInterface", new ParticleSystemInternalStringInterfaceClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystem::JCParticleSystemInternalStringInterfaceProxy", new ParticleSystemInternalStringInterfaceClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 指向外部类的指针
		 */
		public ParticleSystemInternalStringInterface(com.earthview.world.graphic.ParticleSystem ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCParticleSystemInternalStringInterfaceProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ParticleSystem$ParticleSystemInternalStringInterface".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		public ParticleSystemInternalStringInterface(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ParticleSystemInternalStringInterface(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
		
		native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
		native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
		native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
		native protected void register_getParameter_EVString(long pNativeObject, String method);
		native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
				this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
				this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
				this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
				this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
			}
		}
		
		public static ParticleSystemInternalStringInterface fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ParticleSystemInternalStringInterface obj = null;
 			if(baseObj instanceof ParticleSystemInternalStringInterface)
			{
				obj = (ParticleSystemInternalStringInterface)baseObj;
			} else {
				obj = new ParticleSystemInternalStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CParticleSystemInternalStringInterface");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ParticleSystemInternalStringInterfaceClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ParticleSystemInternalStringInterface emptyInstance = new ParticleSystemInternalStringInterface(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getStringInterfacePtr_void_callback()
	{
		com.earthview.world.graphic.ParticleSystem.ParticleSystemInternalStringInterface returnValue = getStringInterfacePtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getStringInterfacePtr_void(long pNativeObject);
	/**
	 * 获得内部类的指针
	 * @param  
	 * @return 返回内部类的指针
	 */
	public com.earthview.world.graphic.ParticleSystem.ParticleSystemInternalStringInterface getStringInterfacePtr()
	{
		long returnValue = getStringInterfacePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleSystem.ParticleSystemInternalStringInterface __returnValue = new com.earthview.world.graphic.ParticleSystem.ParticleSystemInternalStringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystemInternalStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystem.ParticleSystemInternalStringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleSystemInternalStringInterface");
		}
		return __returnValue;
	}
	native private long getStringInterfacePtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ParticleSystem.ParticleSystemInternalStringInterface getStringInterfacePtr_NoVirtual()
	{
		long returnValue = getStringInterfacePtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleSystem.ParticleSystemInternalStringInterface __returnValue = new com.earthview.world.graphic.ParticleSystem.ParticleSystemInternalStringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystemInternalStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystem.ParticleSystemInternalStringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleSystemInternalStringInterface");
		}
		return __returnValue;
	}

	/**
	 * 粒子分类的命令对象获得/设置粒子是否根据摄像器进行分类
	 */
	public static class CmdSorted extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystem::CCmdSorted", new CmdSortedClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystem::JCCmdSortedProxy", new CmdSortedClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public CmdSorted() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdSortedProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ParticleSystem$CmdSorted".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		/**
		 * 获得EVString类型的粒子是否根据摄像机进行分类
		 * @param target 
		 * @return 返回EVString类型的粒子是否根据摄像机进行分类
		 */
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
		/**
		 * 设置粒子是否根据摄像机进行分类
		 * @param target 
		 * @param val 
		 */
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

		public CmdSorted(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdSorted(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdSorted fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdSorted obj = null;
 			if(baseObj instanceof CmdSorted)
			{
				obj = (CmdSorted)baseObj;
			} else {
				obj = new CmdSorted(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdSorted");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdSortedClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdSorted emptyInstance = new CmdSorted(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 粒子本地空间的命令对象获得/设置粒子是否和粒子系统挂接的节点保持关联性
	 */
	public static class CmdLocalSpace extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystem::CCmdLocalSpace", new CmdLocalSpaceClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystem::JCCmdLocalSpaceProxy", new CmdLocalSpaceClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public CmdLocalSpace() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdLocalSpaceProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ParticleSystem$CmdLocalSpace".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		/**
		 * 获得EVString类型的粒子是否和粒子系统挂接的节点保持关联性
		 * @param target 
		 * @return 返回EVString类型的粒子是否和粒子系统挂接的节点保持关联性
		 */
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
		/**
		 * 设置粒子是否和粒子系统挂接的节点保持关联性
		 * @param target 
		 * @param val 
		 */
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

		public CmdLocalSpace(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdLocalSpace(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdLocalSpace fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdLocalSpace obj = null;
 			if(baseObj instanceof CmdLocalSpace)
			{
				obj = (CmdLocalSpace)baseObj;
			} else {
				obj = new CmdLocalSpace(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdLocalSpace");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdLocalSpaceClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdLocalSpace emptyInstance = new CmdLocalSpace(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 粒子系统重复间隔时间的命令对象获得/设置粒子粒子系统重复间隔时间
	 */
	public static class CmdIterationInterval extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystem::CCmdIterationInterval", new CmdIterationIntervalClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystem::JCCmdIterationIntervalProxy", new CmdIterationIntervalClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public CmdIterationInterval() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdIterationIntervalProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ParticleSystem$CmdIterationInterval".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		/**
		 * 获得EVString类型的粒子系统重复间隔的时间
		 * @param target 
		 * @return 返回EVString类型的粒子系统重复间隔时间
		 */
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
		/**
		 * 设置粒子系统重复间隔的时间
		 * @param target 
		 * @param val 
		 */
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

		public CmdIterationInterval(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdIterationInterval(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdIterationInterval fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdIterationInterval obj = null;
 			if(baseObj instanceof CmdIterationInterval)
			{
				obj = (CmdIterationInterval)baseObj;
			} else {
				obj = new CmdIterationInterval(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdIterationInterval");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdIterationIntervalClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdIterationInterval emptyInstance = new CmdIterationInterval(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 粒子系统不可见时间的命令对象获得/设置粒子系统不可见停止更新的时间
	 */
	public static class CmdNonvisibleTimeout extends com.earthview.world.core.ParamCommand {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystem::CCmdNonvisibleTimeout", new CmdNonvisibleTimeoutClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystem::JCCmdNonvisibleTimeoutProxy", new CmdNonvisibleTimeoutClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public CmdNonvisibleTimeout() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCmdNonvisibleTimeoutProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ParticleSystem$CmdNonvisibleTimeout".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private String doGet_void(long pNativeObject, long target);
		/**
		 * 获得EVString类型的粒子系统不可见停止更新的时间
		 * @param target 
		 * @return 返回EVString类型的粒子系统不可见停止更新的时间
		 */
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
		/**
		 * 设置粒子系统不可见停止更新的时间
		 * @param target 
		 * @param val 
		 */
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

		public CmdNonvisibleTimeout(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CmdNonvisibleTimeout(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static CmdNonvisibleTimeout fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CmdNonvisibleTimeout obj = null;
 			if(baseObj instanceof CmdNonvisibleTimeout)
			{
				obj = (CmdNonvisibleTimeout)baseObj;
			} else {
				obj = new CmdNonvisibleTimeout(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCmdNonvisibleTimeout");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CmdNonvisibleTimeoutClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CmdNonvisibleTimeout emptyInstance = new CmdNonvisibleTimeout(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public ParticleSystem() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCParticleSystemProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ParticleSystem".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数创建一个没有发射器或效果器的粒子系统
	 * @param name 对象的名称
	 * @param resourceGroupName 资源组的名称
	 */
	public ParticleSystem(String name, String resourceGroupName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer resourceGroupNamePtr = new BasePointer(resourceGroupName);
		list.add("resourceGroupName", resourceGroupNamePtr.get());
		Create("JCParticleSystemProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ParticleSystem".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	native private void setSelected_ev_bool(long pNativeObject, boolean val);
	/**
	 * 设置此粒子系统是否被选中
	 * @param val 被选中
	 */
	public void setSelected(boolean val)
	{
		boolean valParamValue = val;
		setSelected_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private void setRenderer_EVString(long pNativeObject, String typeName);
	/**
	 * 设置渲染粒子系统的渲染器
	 * @param typeName 渲染器类型的名称
	 */
	public void setRenderer(String typeName)
	{
		String typeNameParamValue = typeName;
		setRenderer_EVString(this.nativeObject.pointer, typeNameParamValue);
	}
	native private long getRenderer_void(long pNativeObject);
	/**
	 * 获得渲染粒子系统的渲染器
	 * @param  
	 */
	public com.earthview.world.graphic.ParticleSystemRenderer getRenderer()
	{
		long returnValue = getRenderer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleSystemRenderer __returnValue = new com.earthview.world.graphic.ParticleSystemRenderer(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystemRenderer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystemRenderer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleSystemRenderer");
		}
		return __returnValue;
	}
	native private String getRendererName_void(long pNativeObject);
	/**
	 * 获得渲染粒子系统的粒子渲染器的名称
	 * @param  
	 */
	public String getRendererName()
	{
		String returnValue = getRendererName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long addEmitter_EVString(long pNativeObject, String emitterType);
	/**
	 * 向粒子系统中添加一个发射器
	 * @param emitterType 创建的发射器的类型
	 */
	public com.earthview.world.graphic.ParticleEmitter addEmitter(String emitterType)
	{
		String emitterTypeParamValue = emitterType;
		long returnValue = addEmitter_EVString(this.nativeObject.pointer, emitterTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleEmitter __returnValue = new com.earthview.world.graphic.ParticleEmitter(CreatedWhenConstruct.CWC_NotToCreate, "CParticleEmitter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleEmitter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleEmitter");
		}
		return __returnValue;
	}
	native private long getEmitter_ev_uint16(long pNativeObject, int index);
	/**
	 * 通过发射器的索引获得发射器
	 * @param index 发射器的索引
	 */
	public com.earthview.world.graphic.ParticleEmitter getEmitter(int index)
	{
		int indexParamValue = index;
		long returnValue = getEmitter_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleEmitter __returnValue = new com.earthview.world.graphic.ParticleEmitter(CreatedWhenConstruct.CWC_NotToCreate, "CParticleEmitter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleEmitter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleEmitter");
		}
		return __returnValue;
	}
	native private int getNumEmitters_void(long pNativeObject);
	/**
	 * 返回粒子系统发射器的数量
	 * @param  
	 */
	public int getNumEmitters()
	{
		int returnValue = getNumEmitters_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void removeEmitter_ev_uint16(long pNativeObject, int index);
	/**
	 * 从粒子系统中去除掉一个发射器
	 * @param index 发射器的索引
	 */
	public void removeEmitter(int index)
	{
		int indexParamValue = index;
		removeEmitter_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeAllEmitters_void(long pNativeObject);
	/**
	 * 从粒子系统中去除掉所有的发射器
	 * @param  
	 */
	public void removeAllEmitters()
	{
		removeAllEmitters_void(this.nativeObject.pointer);
	}
	native private long addAffector_EVString(long pNativeObject, String affectorType);
	/**
	 * 向粒子系统中添加一个效果器
	 * @param affectorType 效果器的类型
	 */
	public com.earthview.world.graphic.ParticleAffector addAffector(String affectorType)
	{
		String affectorTypeParamValue = affectorType;
		long returnValue = addAffector_EVString(this.nativeObject.pointer, affectorTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleAffector __returnValue = new com.earthview.world.graphic.ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate, "CParticleAffector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleAffector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleAffector");
		}
		return __returnValue;
	}
	native private long getAffector_ev_uint16(long pNativeObject, int index);
	/**
	 * 通过索引获得一个效果器
	 * @param index 效果器的索引
	 */
	public com.earthview.world.graphic.ParticleAffector getAffector(int index)
	{
		int indexParamValue = index;
		long returnValue = getAffector_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleAffector __returnValue = new com.earthview.world.graphic.ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate, "CParticleAffector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleAffector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleAffector");
		}
		return __returnValue;
	}
	native private int getNumAffectors_void(long pNativeObject);
	/**
	 * 获得粒子系统中效果器的数量
	 * @param  
	 */
	public int getNumAffectors()
	{
		int returnValue = getNumAffectors_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void removeAffector_ev_uint16(long pNativeObject, int index);
	/**
	 * 从粒子系统中去除掉一个效果器
	 * @param index 效果器的索引
	 */
	public void removeAffector(int index)
	{
		int indexParamValue = index;
		removeAffector_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeAllAffectors_void(long pNativeObject);
	/**
	 * 从粒子系统中去除掉所有的效果器
	 * @param  
	 */
	public void removeAllAffectors()
	{
		removeAllAffectors_void(this.nativeObject.pointer);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空所有的粒子
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private long getNumParticles_void(long pNativeObject);
	/**
	 * 获得活跃粒子的数量
	 * @param  
	 */
	public long getNumParticles()
	{
		long returnValue = getNumParticles_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long createParticle_void(long pNativeObject);
	/**
	 * 手动添加粒子到系统中
	 * @param  
	 */
	public com.earthview.world.graphic.Particle createParticle()
	{
		long returnValue = createParticle_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Particle __returnValue = new com.earthview.world.graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate, "CParticle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Particle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticle");
		}
		return __returnValue;
	}
	native private long createEmitterParticle_EVString(long pNativeObject, String emitterName);
	/**
	 * 手动添加发射器到系统中
	 * @param emitterName 发射器的名称
	 */
	public com.earthview.world.graphic.Particle createEmitterParticle(String emitterName)
	{
		String emitterNameParamValue = emitterName;
		long returnValue = createEmitterParticle_EVString(this.nativeObject.pointer, emitterNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Particle __returnValue = new com.earthview.world.graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate, "CParticle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Particle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticle");
		}
		return __returnValue;
	}
	native private long getParticle_ev_size_t(long pNativeObject, long index);
	/**
	 * 手动从粒子系统中获得粒子
	 * @param  
	 */
	public com.earthview.world.graphic.Particle getParticle(long index)
	{
		long indexParamValue = index;
		long returnValue = getParticle_ev_size_t(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Particle __returnValue = new com.earthview.world.graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate, "CParticle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Particle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticle");
		}
		return __returnValue;
	}
	native private long getParticleQuota_void(long pNativeObject);
	/**
	 * 获得粒子系统中允许一次活跃粒子的最大数目
	 * @param  
	 */
	public long getParticleQuota()
	{
		long returnValue = getParticleQuota_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setParticleQuota_ev_size_t(long pNativeObject, long quota);
	/**
	 * 设置粒子系统中允许一次活跃粒子的最大数目
	 * @param  
	 */
	public void setParticleQuota(long quota)
	{
		long quotaParamValue = quota;
		setParticleQuota_ev_size_t(this.nativeObject.pointer, quotaParamValue);
	}
	native private long getEmittedEmitterQuota_void(long pNativeObject);
	/**
	 * 获得粒子系统中允许发射器一次发射活跃粒子的最大数目
	 * @param  
	 */
	public long getEmittedEmitterQuota()
	{
		long returnValue = getEmittedEmitterQuota_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEmittedEmitterQuota_ev_size_t(long pNativeObject, long quota);
	/**
	 * 设置粒子系统中允许发射器一次发射活跃粒子的最大数目
	 * @param  
	 */
	public void setEmittedEmitterQuota(long quota)
	{
		long quotaParamValue = quota;
		setEmittedEmitterQuota_ev_size_t(this.nativeObject.pointer, quotaParamValue);
	}
	native private long OperatorAssign_CParticleSystem(long pNativeObject, long rhs);
	/**
	 * 重载'='操作符
	 * @param rhs 
	 */
	public com.earthview.world.graphic.ParticleSystem OperatorAssign(com.earthview.world.graphic.ParticleSystem rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorAssign_CParticleSystem(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.graphic.ParticleSystem __returnValue = new com.earthview.world.graphic.ParticleSystem(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleSystem");
		}
		return __returnValue;
	}
	native private void _update_Real(long pNativeObject, double timeElapsed);
	/**
	 * 更新系统中的粒子
	 * @param timeElapsed 消耗的时间
	 */
	public void _update(double timeElapsed)
	{
		double timeElapsedParamValue = timeElapsed;
		_update_Real(this.nativeObject.pointer, timeElapsedParamValue);
	}
	native private long _getIterator_void(long pNativeObject);
	/**
	 * 获得系统中遍历所有粒子的迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.ParticleIterator _getIterator()
	{
		long returnValue = _getIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ParticleIterator __returnValue = new com.earthview.world.graphic.ParticleIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CParticleIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CParticleIterator");
		}
		return __returnValue;
	}
	protected  void setMaterialName_EVString_EVString_callback(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		setMaterialName(nameParamValue, groupNameParamValue);
	}

	native private void setMaterialName_EVString_EVString(long pNativeObject, String name, String groupName);
	/**
	 * 设置公告板使用的材质的名称
	 * @param name 材质的名称
	 * @param groupName 资源组的名称
	 */
	public void setMaterialName(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		setMaterialName_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}
	native private void setMaterialName_EVString_EVString_NoVirtual(long pNativeObject, String name, String groupName);
	protected void setMaterialName_NoVirtual(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		setMaterialName_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}

	protected  void setMaterialName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setMaterialName(nameParamValue);
	}

	native private void setMaterialName_EVString(long pNativeObject, String name);
	/**
	 * 设置公告板使用的材质的名称
	 * @param name 材质的名称
	 */
	public void setMaterialName(String name)
	{
		String nameParamValue = name;
		setMaterialName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setMaterialName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setMaterialName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setMaterialName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  String getMaterialName_void_callback()
	{
		String returnValue = getMaterialName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getMaterialName_void(long pNativeObject);
	/**
	 * 获得公告板使用的材质名称
	 * @param  
	 */
	public String getMaterialName()
	{
		String returnValue = getMaterialName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMaterialName_void_NoVirtual(long pNativeObject);
	protected String getMaterialName_NoVirtual()
	{
		String returnValue = getMaterialName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void _notifyCurrentCamera_CCamera(long pNativeObject, long cam);
	/**
	 * 通报当前摄像机
	 * @param cam 摄像机指针
	 */
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void _notifyCurrentCamera_CCamera_NoVirtual(long pNativeObject, long cam);
	protected void _notifyCurrentCamera_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
	}

	native private void _notifyAttached_CNode_ev_bool(long pNativeObject, long ref_parent, boolean isTagPoint);
	/**
	 * 通报被挂接
	 * @param parent 父节点名称
	 * @param isTagPoint 是否挂接在节点下
	 */
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}
	native private void _notifyAttached_CNode_ev_bool_NoVirtual(long pNativeObject, long ref_parent, boolean isTagPoint);
	protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool_NoVirtual(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}

	native private void _notifyAttached_CNode(long pNativeObject, long ref_parent);
	/**
	 * 通报被挂接
	 * @param parent 父节点名称
	 */
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		_notifyAttached_CNode(this.nativeObject.pointer, ref_parentParamValue);
	}
	native private void _notifyAttached_CNode_NoVirtual(long pNativeObject, long ref_parent);
	protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		_notifyAttached_CNode_NoVirtual(this.nativeObject.pointer, ref_parentParamValue);
	}

	native private long getBoundingBox_void(long pNativeObject);
	/**
	 * 获取模型坐标系下的边框盒
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
	{
		long returnValue = getBoundingBox_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox_NoVirtual()
	{
		long returnValue = getBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	native private double getBoundingRadius_void(long pNativeObject);
	/**
	 * 获取当前对象的球体限定半径
	 * @param  
	 * @return 边框盒
	 */
	public double getBoundingRadius()
	{
		double returnValue = getBoundingRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBoundingRadius_void_NoVirtual(long pNativeObject);
	protected double getBoundingRadius_NoVirtual()
	{
		double returnValue = getBoundingRadius_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
	/**
	 * 更新渲染队列内部方法
	 * @param queue 渲染队列
	 */
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void _updateRenderQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
	protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
	}

	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	/**
	 * 访问可渲染对象
	 * @param visitor 
	 * @param debugRenderables 为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括
	 */
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}
	native private void visitRenderables_CVisitor_ev_bool_NoVirtual(long pNativeObject, long visitor, boolean debugRenderables);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool_NoVirtual(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}

	native private void visitRenderables_CVisitor(long pNativeObject, long visitor);
	/**
	 * 访问可渲染对象
	 * @param visitor 
	 */
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor(this.nativeObject.pointer, visitorParamValue);
	}
	native private void visitRenderables_CVisitor_NoVirtual(long pNativeObject, long visitor);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor_NoVirtual(this.nativeObject.pointer, visitorParamValue);
	}

	native private void fastForward_Real_Real(long pNativeObject, double time, double interval);
	public void fastForward(double time, double interval)
	{
		double timeParamValue = time;
		double intervalParamValue = interval;
		fastForward_Real_Real(this.nativeObject.pointer, timeParamValue, intervalParamValue);
	}
	native private void fastForward_Real(long pNativeObject, double time);
	public void fastForward(double time)
	{
		double timeParamValue = time;
		fastForward_Real(this.nativeObject.pointer, timeParamValue);
	}
	native private void setSpeedFactor_Real(long pNativeObject, double speedFactor);
	/**
	 * 设置粒子系统的速度因子
	 * @param speedFactor 速度因素
	 */
	public void setSpeedFactor(double speedFactor)
	{
		double speedFactorParamValue = speedFactor;
		setSpeedFactor_Real(this.nativeObject.pointer, speedFactorParamValue);
	}
	native private double getSpeedFactor_void(long pNativeObject);
	/**
	 * 获得粒子系统的速度因子
	 * @param  
	 * @return 速度因素
	 */
	public double getSpeedFactor()
	{
		double returnValue = getSpeedFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIterationInterval_Real(long pNativeObject, double iterationInterval);
	/**
	 * 设置粒子系统重复的间隔
	 * @param iterationInterval 重复间隔，默认值为0
	 */
	public void setIterationInterval(double iterationInterval)
	{
		double iterationIntervalParamValue = iterationInterval;
		setIterationInterval_Real(this.nativeObject.pointer, iterationIntervalParamValue);
	}
	native private double getIterationInterval_void(long pNativeObject);
	/**
	 * 获得粒子系统重复的间隔
	 * @param  
	 */
	public double getIterationInterval()
	{
		double returnValue = getIterationInterval_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static void setDefaultIterationInterval_Real(double iterationInterval);
	/**
	 * 设置粒子系统实例默认的重复的间隔
	 * @param iterationInterval 重复间隔，默认值为0
	 */
	public static void setDefaultIterationInterval(double iterationInterval)
	{
		double iterationIntervalParamValue = iterationInterval;
		setDefaultIterationInterval_Real(iterationIntervalParamValue);
	}
	native private static double getDefaultIterationInterval_void();
	/**
	 * 获得粒子系统实例默认的重复间隔
	 * @param  
	 */
	public static double getDefaultIterationInterval()
	{
		double returnValue = getDefaultIterationInterval_void();
		return returnValue;
	}
	native private void setNonVisibleUpdateTimeout_Real(long pNativeObject, double timeout);
	/**
	 * 设置当粒子系统不可见一段时间之后其应该停止更新
	 * @param timeout 粒子系统不可用的时间
	 */
	public void setNonVisibleUpdateTimeout(double timeout)
	{
		double timeoutParamValue = timeout;
		setNonVisibleUpdateTimeout_Real(this.nativeObject.pointer, timeoutParamValue);
	}
	native private double getNonVisibleUpdateTimeout_void(long pNativeObject);
	/**
	 * 获得粒子系统不可见停止更新的时间
	 * @param  
	 */
	public double getNonVisibleUpdateTimeout()
	{
		double returnValue = getNonVisibleUpdateTimeout_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static void setDefaultNonVisibleUpdateTimeout_Real(double timeout);
	/**
	 * 设置所有粒子系统实例不可见的时间
	 * @param  
	 */
	public static void setDefaultNonVisibleUpdateTimeout(double timeout)
	{
		double timeoutParamValue = timeout;
		setDefaultNonVisibleUpdateTimeout_Real(timeoutParamValue);
	}
	native private static double getDefaultNonVisibleUpdateTimeout_void();
	/**
	 * 获得所有粒子系统实例不可见的时间
	 * @param  
	 */
	public static double getDefaultNonVisibleUpdateTimeout()
	{
		double returnValue = getDefaultNonVisibleUpdateTimeout_void();
		return returnValue;
	}
	native private String getMovableType_void(long pNativeObject);
	/**
	 * 获取移动对象类型的名称
	 * @param  
	 * @return 名称
	 */
	public String getMovableType()
	{
		String returnValue = getMovableType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMovableType_void_NoVirtual(long pNativeObject);
	protected String getMovableType_NoVirtual()
	{
		String returnValue = getMovableType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _notifyParticleResized_void_callback()
	{
		_notifyParticleResized();
	}

	native private void _notifyParticleResized_void(long pNativeObject);
	/**
	 * 通知尺寸已经被调整
	 * @param  
	 */
	public void _notifyParticleResized()
	{
		_notifyParticleResized_void(this.nativeObject.pointer);
	}
	native private void _notifyParticleResized_void_NoVirtual(long pNativeObject);
	protected void _notifyParticleResized_NoVirtual()
	{
		_notifyParticleResized_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _notifyParticleRotated_void_callback()
	{
		_notifyParticleRotated();
	}

	native private void _notifyParticleRotated_void(long pNativeObject);
	/**
	 * 通知尺寸被旋转
	 * @param  
	 */
	public void _notifyParticleRotated()
	{
		_notifyParticleRotated_void(this.nativeObject.pointer);
	}
	native private void _notifyParticleRotated_void_NoVirtual(long pNativeObject);
	protected void _notifyParticleRotated_NoVirtual()
	{
		_notifyParticleRotated_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setDefaultDimensions_Real_Real_callback(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setDefaultDimensions(widthParamValue, heightParamValue);
	}

	native private void setDefaultDimensions_Real_Real(long pNativeObject, double width, double height);
	/**
	 * 设置粒子默认的大小
	 * @param width 粒子的默认宽度
	 * @param height 粒子的默认高度
	 */
	public void setDefaultDimensions(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setDefaultDimensions_Real_Real(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private void setDefaultDimensions_Real_Real_NoVirtual(long pNativeObject, double width, double height);
	protected void setDefaultDimensions_NoVirtual(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setDefaultDimensions_Real_Real_NoVirtual(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}

	protected  void setDefaultWidth_Real_callback(double width)
	{
		double widthParamValue = width;
		setDefaultWidth(widthParamValue);
	}

	native private void setDefaultWidth_Real(long pNativeObject, double width);
	/**
	 * 设置粒子的默认宽度值
	 * @param  
	 */
	public void setDefaultWidth(double width)
	{
		double widthParamValue = width;
		setDefaultWidth_Real(this.nativeObject.pointer, widthParamValue);
	}
	native private void setDefaultWidth_Real_NoVirtual(long pNativeObject, double width);
	protected void setDefaultWidth_NoVirtual(double width)
	{
		double widthParamValue = width;
		setDefaultWidth_Real_NoVirtual(this.nativeObject.pointer, widthParamValue);
	}

	protected  double getDefaultWidth_void_callback()
	{
		double returnValue = getDefaultWidth();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getDefaultWidth_void(long pNativeObject);
	/**
	 * 获得粒子的默认宽度值
	 * @param  
	 */
	public double getDefaultWidth()
	{
		double returnValue = getDefaultWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDefaultWidth_void_NoVirtual(long pNativeObject);
	protected double getDefaultWidth_NoVirtual()
	{
		double returnValue = getDefaultWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDefaultHeight_Real_callback(double height)
	{
		double heightParamValue = height;
		setDefaultHeight(heightParamValue);
	}

	native private void setDefaultHeight_Real(long pNativeObject, double height);
	/**
	 * 设置粒子的默认高度值
	 * @param  
	 */
	public void setDefaultHeight(double height)
	{
		double heightParamValue = height;
		setDefaultHeight_Real(this.nativeObject.pointer, heightParamValue);
	}
	native private void setDefaultHeight_Real_NoVirtual(long pNativeObject, double height);
	protected void setDefaultHeight_NoVirtual(double height)
	{
		double heightParamValue = height;
		setDefaultHeight_Real_NoVirtual(this.nativeObject.pointer, heightParamValue);
	}

	protected  double getDefaultHeight_void_callback()
	{
		double returnValue = getDefaultHeight();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getDefaultHeight_void(long pNativeObject);
	/**
	 * 获得粒子的默认高度值
	 * @param  
	 */
	public double getDefaultHeight()
	{
		double returnValue = getDefaultHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDefaultHeight_void_NoVirtual(long pNativeObject);
	protected double getDefaultHeight_NoVirtual()
	{
		double returnValue = getDefaultHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getCullIndividually_void_callback()
	{
		boolean returnValue = getCullIndividually();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getCullIndividually_void(long pNativeObject);
	/**
	 * 判断粒子的裁剪模式是否采用单个粒子裁剪
	 * @param  
	 */
	public boolean getCullIndividually()
	{
		boolean returnValue = getCullIndividually_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getCullIndividually_void_NoVirtual(long pNativeObject);
	protected boolean getCullIndividually_NoVirtual()
	{
		boolean returnValue = getCullIndividually_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCullIndividually_ev_bool_callback(boolean cullIndividual)
	{
		boolean cullIndividualParamValue = cullIndividual;
		setCullIndividually(cullIndividualParamValue);
	}

	native private void setCullIndividually_ev_bool(long pNativeObject, boolean cullIndividual);
	/**
	 * 设置粒子裁剪的方式是单个裁剪还是整体包围盒裁剪
	 * @param cullIndividual 
	 */
	public void setCullIndividually(boolean cullIndividual)
	{
		boolean cullIndividualParamValue = cullIndividual;
		setCullIndividually_ev_bool(this.nativeObject.pointer, cullIndividualParamValue);
	}
	native private void setCullIndividually_ev_bool_NoVirtual(long pNativeObject, boolean cullIndividual);
	protected void setCullIndividually_NoVirtual(boolean cullIndividual)
	{
		boolean cullIndividualParamValue = cullIndividual;
		setCullIndividually_ev_bool_NoVirtual(this.nativeObject.pointer, cullIndividualParamValue);
	}

	protected  String getResourceGroupName_void_callback()
	{
		String returnValue = getResourceGroupName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getResourceGroupName_void(long pNativeObject);
	/**
	 * 获得资源组的名称
	 * @param  
	 */
	public String getResourceGroupName()
	{
		String returnValue = getResourceGroupName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getResourceGroupName_void_NoVirtual(long pNativeObject);
	protected String getResourceGroupName_NoVirtual()
	{
		String returnValue = getResourceGroupName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getOrigin_void(long pNativeObject);
	/**
	 * 获得粒子系统脚本文件的名称
	 * @param  
	 */
	public StringPointer getOrigin()
	{
		long returnValue = getOrigin_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void _notifyOrigin_EVString(long pNativeObject, String origin);
	//// Notify this particle system of it's origin
	public void _notifyOrigin(String origin)
	{
		String originParamValue = origin;
		_notifyOrigin_EVString(this.nativeObject.pointer, originParamValue);
	}
	native private void setRenderQueueGroup_ev_uint8(long pNativeObject, short queueID);
	/**
	 * 设置渲染实体的渲染队列组
	 * @param  
	 */
	public void setRenderQueueGroup(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, queueIDParamValue);
	}
	native private void setRenderQueueGroup_ev_uint8_NoVirtual(long pNativeObject, short queueID);
	protected void setRenderQueueGroup_NoVirtual(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8_NoVirtual(this.nativeObject.pointer, queueIDParamValue);
	}

	native private void setSortingEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置粒子是否根据摄像机进行排序
	 * @param enabled 
	 */
	public void setSortingEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setSortingEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getSortingEnabled_void(long pNativeObject);
	/**
	 * 获得粒子是否根据摄像机被排序
	 * @param  
	 */
	public boolean getSortingEnabled()
	{
		boolean returnValue = getSortingEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBounds_CAxisAlignedBox(long pNativeObject, long aabb);
	/**
	 * 设置粒子系统的包围盒
	 * @param aabb 本地空间的范围
	 */
	public void setBounds(com.earthview.world.spatial.math.AxisAlignedBox aabb)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		setBounds_CAxisAlignedBox(this.nativeObject.pointer, aabbParamValue);
	}
	native private void setBoundsAutoUpdated_ev_bool_Real(long pNativeObject, boolean autoUpdate, double stopIn);
	/**
	 * 设置是否自动更新粒子系统的包围盒
	 * @param autoUpdate 如果为true粒子系统会自动更新每一个帧，否则停止范围更新
	 * @param stopIn 如果第一个参数为true，则它是自动更新停止的时间
	 */
	public void setBoundsAutoUpdated(boolean autoUpdate, double stopIn)
	{
		boolean autoUpdateParamValue = autoUpdate;
		double stopInParamValue = stopIn;
		setBoundsAutoUpdated_ev_bool_Real(this.nativeObject.pointer, autoUpdateParamValue, stopInParamValue);
	}
	native private void setBoundsAutoUpdated_ev_bool(long pNativeObject, boolean autoUpdate);
	/**
	 * 设置是否自动更新粒子系统的包围盒
	 * @param autoUpdate 如果为true粒子系统会自动更新每一个帧，否则停止范围更新
	 */
	public void setBoundsAutoUpdated(boolean autoUpdate)
	{
		boolean autoUpdateParamValue = autoUpdate;
		setBoundsAutoUpdated_ev_bool(this.nativeObject.pointer, autoUpdateParamValue);
	}
	native private void setKeepParticlesInLocalSpace_ev_bool(long pNativeObject, boolean keepLocal);
	/**
	 * 设置是否粒子和粒子系统挂接的节点保持关联性
	 * @param  
	 */
	public void setKeepParticlesInLocalSpace(boolean keepLocal)
	{
		boolean keepLocalParamValue = keepLocal;
		setKeepParticlesInLocalSpace_ev_bool(this.nativeObject.pointer, keepLocalParamValue);
	}
	native private boolean getKeepParticlesInLocalSpace_void(long pNativeObject);
	/**
	 * 获得是否粒子和粒子系统挂接的节点保持关联性
	 * @param  
	 */
	public boolean getKeepParticlesInLocalSpace()
	{
		boolean returnValue = getKeepParticlesInLocalSpace_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _updateBounds_void(long pNativeObject);
	/**
	 * 更新粒子系统的范围
	 * @param  
	 */
	public void _updateBounds()
	{
		_updateBounds_void(this.nativeObject.pointer);
	}
	native private void setEmitting_ev_bool(long pNativeObject, boolean v);
	/**
	 * 打开或者关闭粒子系统的发射器
	 * @param v 
	 */
	public void setEmitting(boolean v)
	{
		boolean vParamValue = v;
		setEmitting_ev_bool(this.nativeObject.pointer, vParamValue);
	}
	native private boolean getEmitting_void(long pNativeObject);
	/**
	 * 判断粒子系统的发射器是否打开
	 * @param  
	 * @return 如果打开返回ture，关闭返回false
	 */
	public boolean getEmitting()
	{
		boolean returnValue = getEmitting_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTypeFlags_void(long pNativeObject);
	/**
	 * 获得专门的类型标识
	 * @param  
	 */
	public long getTypeFlags()
	{
		long returnValue = getTypeFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTypeFlags_void_NoVirtual(long pNativeObject);
	protected long getTypeFlags_NoVirtual()
	{
		long returnValue = getTypeFlags_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean setSelected_IntVector(long pNativeObject, long objIndics);
	/// <summary>
	/// 设置选中的对象				
	/// <param name="objIndics">选中的对象集合</param>				
	/// <returns></returns>
	public boolean setSelected(com.earthview.world.core.IntVector objIndics)
	{
		long objIndicsParamValue = objIndics.nativeObject.pointer;
		boolean returnValue = setSelected_IntVector(this.nativeObject.pointer, objIndicsParamValue);
		return returnValue;
	}
	native private boolean setSelected_IntVector_NoVirtual(long pNativeObject, long objIndics);
	protected boolean setSelected_NoVirtual(com.earthview.world.core.IntVector objIndics)
	{
		long objIndicsParamValue = objIndics.nativeObject.pointer;
		boolean returnValue = setSelected_IntVector_NoVirtual(this.nativeObject.pointer, objIndicsParamValue);
		return returnValue;
	}

	native private long getSelected_void(long pNativeObject);
	/// <summary>
	/// 获得选中的对象				
	/// <param name=""></param>				
	/// <returns>选中的对象集合</returns>
	public com.earthview.world.core.IntVector getSelected()
	{
		long returnValue = getSelected_void(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private long getSelected_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.IntVector getSelected_NoVirtual()
	{
		long returnValue = getSelected_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}

	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
	/**
	 * 射线选择
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 选中的对象序号
	 * @param point 交点
	 * @return true:与射线相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}

	native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
	/**
	 * 盒选择
	 * @param aabb 盒
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定盒相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}

	native private boolean selectBy_CSphere_ev_bool_IntVector(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
	/**
	 * 球选择
	 * @param sphere 球
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定球相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean selectBy_CSphere_ev_bool_IntVector_NoVirtual(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CSphere_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}

	native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	/**
	 * 选择组件
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 物体序号
	 * @param submeshIndex submesh序号
	 * @param instanceIndex instance序号
	 * @param segmentIndex 索引分段序号
	 * @param point 交点
	 * @return true:组件与射线相交;false:不相交
	 */
	public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	protected boolean selectComponentBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}

	native private void renderSelection_void(long pNativeObject);
	/**
	 * 绘制选择对象
	 * @param  
	 */
	public void renderSelection()
	{
		renderSelection_void(this.nativeObject.pointer);
	}
	native private void renderSelection_void_NoVirtual(long pNativeObject);
	protected void renderSelection_NoVirtual()
	{
		renderSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清除选择
	 * @param  
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean startEditing_ev_uint32(long pNativeObject, long objectIndex);
	/**
	 * 开始编辑
	 * @param  
	 */
	public boolean startEditing(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		boolean returnValue = startEditing_ev_uint32(this.nativeObject.pointer, objectIndexParamValue);
		return returnValue;
	}
	native private boolean startEditing_ev_uint32_NoVirtual(long pNativeObject, long objectIndex);
	protected boolean startEditing_NoVirtual(long objectIndex)
	{
		long objectIndexParamValue = objectIndex;
		boolean returnValue = startEditing_ev_uint32_NoVirtual(this.nativeObject.pointer, objectIndexParamValue);
		return returnValue;
	}

	native private void endEditing_void(long pNativeObject);
	/**
	 * 结束编辑
	 * @param  
	 */
	public void endEditing()
	{
		endEditing_void(this.nativeObject.pointer);
	}
	native private void endEditing_void_NoVirtual(long pNativeObject);
	protected void endEditing_NoVirtual()
	{
		endEditing_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getEditBoundingBox_void(long pNativeObject);
	/**
	 * 获得编辑包围盒
	 * @param  
	 */
	public com.earthview.world.graphic.EditBoundingBox getEditBoundingBox()
	{
		long returnValue = getEditBoundingBox_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EditBoundingBox __returnValue = new com.earthview.world.graphic.EditBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CEditBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EditBoundingBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditBoundingBox");
		}
		return __returnValue;
	}
	native private long getEditBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.EditBoundingBox getEditBoundingBox_NoVirtual()
	{
		long returnValue = getEditBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EditBoundingBox __returnValue = new com.earthview.world.graphic.EditBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CEditBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EditBoundingBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEditBoundingBox");
		}
		return __returnValue;
	}

	native private boolean getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, long objectIndex, long matrix);
	/**
	 * 获得选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean getSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}
	native private boolean getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(long pNativeObject, long objectIndex, long matrix);
	protected boolean getSelectedObjectWorldMatrix_NoVirtual(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}

	native private boolean setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, long objectIndex, long matrix);
	/**
	 * 设置选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean setSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}
	native private boolean setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(long pNativeObject, long objectIndex, long matrix);
	protected boolean setSelectedObjectWorldMatrix_NoVirtual(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long objectIndexParamValue = objectIndex;
		long matrixParamValue = matrix.nativeObject.pointer;
		boolean returnValue = setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_NoVirtual(this.nativeObject.pointer, objectIndexParamValue, matrixParamValue);
		return returnValue;
	}

	native private void configureRenderer_void(long pNativeObject);
	/**
	 * 配置渲染器
	 * @param  
	 */
	public void configureRenderer()
	{
		configureRenderer_void(this.nativeObject.pointer);
	}
	public ParticleSystem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleSystem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject getAnimableObjectPtr()
	{
		return super.getAnimableObjectPtr_NoVirtual();
	}
	/**
	 * 获取渲染队列ID
	 * @param  
	 */
	public short getRenderQueueId()
	{
		return super.getRenderQueueId_NoVirtual();
	}
	/**
	 * 通报创建者只能内部使用
	 * @param fact 实例
	 */
	public void _notifyCreator(com.earthview.world.graphic.MovableObjectFactory ref_fact)
	{
		super._notifyCreator_NoVirtual(ref_fact);
	}
	/**
	 * 获取创建者如果有的话，获取，只能在内部使用
	 * @param  
	 * @return 移动对象工厂类
	 */
	public com.earthview.world.graphic.MovableObjectFactory _getCreator()
	{
		return super._getCreator_NoVirtual();
	}
	/**
	 * 通报场景管理器只能内部使用
	 * @param man 场景管理者
	 */
	public void _notifyManager(com.earthview.world.graphic.SceneManager ref_mgr)
	{
		super._notifyManager_NoVirtual(ref_mgr);
	}
	/**
	 * 获取场景管理器
	 * @param  
	 * @return 管理者
	 */
	public com.earthview.world.graphic.SceneManager _getManager()
	{
		return super._getManager_NoVirtual();
	}
	/**
	 * 获取对象的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取父节点一个移动对象可以附属在一个场景节点或者骨骼节点上
	 * @param  
	 * @return 节点名称
	 */
	public com.earthview.world.graphic.Node getParentNode()
	{
		return super.getParentNode_NoVirtual();
	}
	/**
	 * 获取对象的场景父节点
	 * @param  
	 * @return 场景节点
	 */
	public com.earthview.world.graphic.SceneNode getParentSceneNode()
	{
		return super.getParentSceneNode_NoVirtual();
	}
	/**
	 * 判断父节点是否是骨骼节点
	 * @param  
	 * @return 成功，返回标签点，否则为场景节点
	 */
	public boolean isParentTagPoint()
	{
		return super.isParentTagPoint_NoVirtual();
	}
	/**
	 * 是否已挂接
	 * @param  
	 * @return 为真，挂接
	 */
	public boolean isAttached()
	{
		return super.isAttached_NoVirtual();
	}
	/**
	 * 将指定对象从父节点分离
	 * @param  
	 */
	public void detachFromParent()
	{
		super.detachFromParent_NoVirtual();
	}
	/**
	 * 指定节点是否是场景图中动态部分指定对象挂接到场景节点或标识点，而场景节点是当前场景图的活动部分
	 * @param  
	 */
	public boolean isInScene()
	{
		return super.isInScene_NoVirtual();
	}
	/**
	 * 通报被移动内部方法
	 * @param  
	 */
	public void _notifyMoved()
	{
		super._notifyMoved_NoVirtual();
	}
	/**
	 * 通报光源查询结束内部方法
	 * @param  
	 */
	public void _notifyLightsQueried(com.earthview.world.graphic.LightList lightList)
	{
		super._notifyLightsQueried_NoVirtual(lightList);
	}
	public void setLightQueriedListener(com.earthview.world.graphic.MovableObject.LightQueriedListener listener)
	{
		super.setLightQueriedListener_NoVirtual(listener);
	}
	public com.earthview.world.graphic.MovableObject.LightQueriedListener getLightQueriedListener()
	{
		return super.getLightQueriedListener_NoVirtual();
	}
	public long getLightListUpdated()
	{
		return super.getLightListUpdated_NoVirtual();
	}
	public void setLightListUpdated(long frame)
	{
		super.setLightListUpdated_NoVirtual(frame);
	}
	/**
	 * 在世界空间中获取当前对象的边框球体
	 * @param derive 是否检索
	 */
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere(boolean derive)
	{
		return super.getWorldBoundingSphere_NoVirtual(derive);
	}
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere()
	{
		return super.getWorldBoundingSphere_NoVirtual();
	}
	/**
	 * 获取是否可见,与setVisible对应
	 * @param  
	 */
	public boolean getVisible()
	{
		return super.getVisible_NoVirtual();
	}
	/**
	 * 获取是否可见,严格的判断(裁剪判断、可视距离判断)
	 * @param  
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离上限
	 * @param dist 默认为0
	 */
	public void setRenderingMaxDistance(double dist)
	{
		super.setRenderingMaxDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离下限
	 * @param  
	 */
	public double getRenderingMaxDistance()
	{
		return super.getRenderingMaxDistance_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离下限
	 * @param dist 默认为0
	 */
	public void setRenderingMinDistance(double dist)
	{
		super.setRenderingMinDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离上限
	 * @param  
	 */
	public double getRenderingMinDistance()
	{
		return super.getRenderingMinDistance_NoVirtual();
	}
	/**
	 * 设置渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)必须先调用setUseMinPixelSize才能开启此功能
	 * @param pixelSize 像素大小
	 */
	public void setRenderingMinPixelSize(double pixelSize)
	{
		super.setRenderingMinPixelSize_NoVirtual(pixelSize);
	}
	/**
	 * 获得渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)
	 * @param  
	 * @return 像素大小
	 */
	public double getRenderingMinPixelSize()
	{
		return super.getRenderingMinPixelSize_NoVirtual();
	}
	/// <summary>
	/// 设置选中时的高亮颜色				
	/// <param name=""></param>				
	/// <returns></returns>
	public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
	{
		super.setSelectionColour_NoVirtual(colour);
	}
	/**
	 * 设置渲染队列组信息和队列优先级
	 * @param queueID 队列ID号
	 * @param priority 优先级
	 */
	public void setRenderQueueGroupAndPriority(short queueID, int priority)
	{
		super.setRenderQueueGroupAndPriority_NoVirtual(queueID, priority);
	}
	/**
	 * 获取该实体的渲染队列组
	 * @param  
	 */
	public short getRenderQueueGroup()
	{
		return super.getRenderQueueGroup_NoVirtual();
	}
	/**
	 * 获取父节点的全部变化信息
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform()
	{
		return super._getParentNodeFullTransform_NoVirtual();
	}
	/**
	 * 设置该对象的询问标识
	 * @param flags 
	 */
	public void setQueryFlags(long flags)
	{
		super.setQueryFlags_NoVirtual(flags);
	}
	/**
	 * 添加询问标识
	 * @param flags 
	 */
	public void addQueryFlags(long flags)
	{
		super.addQueryFlags_NoVirtual(flags);
	}
	/**
	 * 移除询问标识
	 * @param flags 
	 */
	public void removeQueryFlags(long flags)
	{
		super.removeQueryFlags_NoVirtual(flags);
	}
	/**
	 * 获取询问标识
	 * @param  
	 */
	public long getQueryFlags()
	{
		return super.getQueryFlags_NoVirtual();
	}
	/**
	 * 设置对象可见标识
	 * @param flags 
	 */
	public void setVisibilityFlags(long flags)
	{
		super.setVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 添加对象可见标识
	 * @param flags 
	 */
	public void addVisibilityFlags(long flags)
	{
		super.addVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 移除对象可见标识
	 * @param flags 
	 */
	public void removeVisibilityFlags(long flags)
	{
		super.removeVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 获取对象可见标识
	 * @param flags 
	 */
	public long getVisibilityFlags()
	{
		return super.getVisibilityFlags_NoVirtual();
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.MovableObject.MovableObjectListener ref_listener)
	{
		super.addListener_NoVirtual(ref_listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		return super.existListener_NoVirtual(listener);
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		return super.getListenerCount_NoVirtual();
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.MovableObject.MovableObjectListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 获取光源列表以距离可移动物体由近到远顺序排列
	 * @param  
	 */
	public com.earthview.world.graphic.LightList queryLights()
	{
		return super.queryLights_NoVirtual();
	}
	/**
	 * 获取光线掩码默认所有光源影响对象
	 * @param  
	 */
	public long getLightMask()
	{
		return super.getLightMask_NoVirtual();
	}
	/**
	 * 设置光线掩码
	 * @param lightMask 
	 */
	public void setLightMask(long lightMask)
	{
		super.setLightMask_NoVirtual(lightMask);
	}
	/**
	 * 获取指向该对象当前光列表
	 * @param  
	 */
	public com.earthview.world.graphic.LightList _getLightList()
	{
		return super._getLightList_NoVirtual();
	}
	/**
	 * 设置投射阴影
	 * @param enabled 
	 */
	public void setCastShadows(boolean enabled)
	{
		super.setCastShadows_NoVirtual(enabled);
	}
	/**
	 * 是否接收阴影
	 * @param  
	 */
	public boolean getReceivesShadows()
	{
		return super.getReceivesShadows_NoVirtual();
	}
	/**
	 * 设置调试该对象是否启用
	 * @param  
	 */
	public void setDebugDisplayEnabled(boolean enabled)
	{
		super.setDebugDisplayEnabled_NoVirtual(enabled);
	}
	/**
	 * 是否调试该对象是否启用
	 * @param  
	 */
	public boolean isDebugDisplayEnabled()
	{
		return super.isDebugDisplayEnabled_NoVirtual();
	}
	public boolean getCastShadows()
	{
		return super.getCastShadows_NoVirtual();
	}
	public com.earthview.world.graphic.EdgeData getEdgeList()
	{
		return super.getEdgeList_NoVirtual();
	}
	public boolean hasEdgeList()
	{
		return super.hasEdgeList_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
	{
		return super.getWorldBoundingBox_NoVirtual(derive);
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox()
	{
		return super.getWorldBoundingBox_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds()
	{
		return super.getLightCapBounds_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
	{
		return super.getDarkCapBounds_NoVirtual(light, dirLightExtrusionDist);
	}
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
	{
		return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
	}
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
	{
		return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
	}
	public double getPointExtrusionDistance(com.earthview.world.graphic.Light l)
	{
		return super.getPointExtrusionDistance_NoVirtual(l);
	}
	public void updateEdgeListLightFacing(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.spatial.math.Vector4 lightPos)
	{
		super.updateEdgeListLightFacing_NoVirtual(edgeData, lightPos);
	}
	public void generateShadowVolume(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.Light light, com.earthview.world.graphic.ShadowCaster.ShadowRenderableList shadowRenderables, long flags)
	{
		super.generateShadowVolume_NoVirtual(edgeData, indexBuffer, light, shadowRenderables, flags);
	}
	public void extrudeBounds(com.earthview.world.spatial.math.AxisAlignedBox box, com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist)
	{
		super.extrudeBounds_NoVirtual(box, lightPos, extrudeDist);
	}
	
	native protected void register_getStringInterfacePtr_void(long pNativeObject, String method);
	native protected void register_setMaterialName_EVString_EVString(long pNativeObject, String method);
	native protected void register_setMaterialName_EVString(long pNativeObject, String method);
	native protected void register_getMaterialName_void(long pNativeObject, String method);
	native protected void register__notifyParticleResized_void(long pNativeObject, String method);
	native protected void register__notifyParticleRotated_void(long pNativeObject, String method);
	native protected void register_setDefaultDimensions_Real_Real(long pNativeObject, String method);
	native protected void register_setDefaultWidth_Real(long pNativeObject, String method);
	native protected void register_getDefaultWidth_void(long pNativeObject, String method);
	native protected void register_setDefaultHeight_Real(long pNativeObject, String method);
	native protected void register_getDefaultHeight_void(long pNativeObject, String method);
	native protected void register_getCullIndividually_void(long pNativeObject, String method);
	native protected void register_setCullIndividually_ev_bool(long pNativeObject, String method);
	native protected void register_getResourceGroupName_void(long pNativeObject, String method);
	native protected void register_getAnimableObjectPtr_void(long pNativeObject, String method);
	native protected void register_getRenderQueueId_void(long pNativeObject, String method);
	native protected void register__notifyCreator_CMovableObjectFactory(long pNativeObject, String method);
	native protected void register__getCreator_void(long pNativeObject, String method);
	native protected void register__notifyManager_CSceneManager(long pNativeObject, String method);
	native protected void register__getManager_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getMovableType_void(long pNativeObject, String method);
	native protected void register_getParentNode_void(long pNativeObject, String method);
	native protected void register_getParentSceneNode_void(long pNativeObject, String method);
	native protected void register_isParentTagPoint_void(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode_ev_bool(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode(long pNativeObject, String method);
	native protected void register_isAttached_void(long pNativeObject, String method);
	native protected void register_detachFromParent_void(long pNativeObject, String method);
	native protected void register_isInScene_void(long pNativeObject, String method);
	native protected void register__notifyMoved_void(long pNativeObject, String method);
	native protected void register__notifyLightsQueried_LightList(long pNativeObject, String method);
	native protected void register_setLightQueriedListener_CLightQueriedListener(long pNativeObject, String method);
	native protected void register_getLightQueriedListener_void(long pNativeObject, String method);
	native protected void register_getLightListUpdated_void(long pNativeObject, String method);
	native protected void register_setLightListUpdated_ev_uint32(long pNativeObject, String method);
	native protected void register__notifyCurrentCamera_CCamera(long pNativeObject, String method);
	native protected void register_getBoundingBox_void(long pNativeObject, String method);
	native protected void register_getBoundingRadius_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setRenderingMaxDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMaxDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinPixelSize_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinPixelSize_void(long pNativeObject, String method);
	native protected void register_setSelectionColour_CColourValue(long pNativeObject, String method);
	native protected void register_setSelected_IntVector(long pNativeObject, String method);
	native protected void register_getSelected_void(long pNativeObject, String method);
	native protected void register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectBy_CSphere_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_renderSelection_void(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_uint32(long pNativeObject, String method);
	native protected void register_endEditing_void(long pNativeObject, String method);
	native protected void register_getEditBoundingBox_void(long pNativeObject, String method);
	native protected void register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
	native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
	native protected void register__getParentNodeFullTransform_void(long pNativeObject, String method);
	native protected void register_setQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryFlags_void(long pNativeObject, String method);
	native protected void register_setVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getVisibilityFlags_void(long pNativeObject, String method);
	native protected void register_addListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_removeListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_existListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_getListenerCount_void(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_queryLights_void(long pNativeObject, String method);
	native protected void register_getLightMask_void(long pNativeObject, String method);
	native protected void register_setLightMask_ev_uint32(long pNativeObject, String method);
	native protected void register__getLightList_void(long pNativeObject, String method);
	native protected void register_setCastShadows_ev_bool(long pNativeObject, String method);
	native protected void register_getReceivesShadows_void(long pNativeObject, String method);
	native protected void register_getTypeFlags_void(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor(long pNativeObject, String method);
	native protected void register_setDebugDisplayEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_isDebugDisplayEnabled_void(long pNativeObject, String method);
	native protected void register_getCastShadows_void(long pNativeObject, String method);
	native protected void register_getEdgeList_void(long pNativeObject, String method);
	native protected void register_hasEdgeList_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_void(long pNativeObject, String method);
	native protected void register_getLightCapBounds_void(long pNativeObject, String method);
	native protected void register_getDarkCapBounds_CLight_Real(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, String method);
	native protected void register_getPointExtrusionDistance_CLight(long pNativeObject, String method);
	native protected void register_updateEdgeListLightFacing_CEdgeData_CVector4(long pNativeObject, String method);
	native protected void register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(long pNativeObject, String method);
	native protected void register_extrudeBounds_CAxisAlignedBox_CVector4_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getStringInterfacePtr_void(this.nativeObject.pointer, "getStringInterfacePtr_void_callback");
			this.register_setMaterialName_EVString_EVString(this.nativeObject.pointer, "setMaterialName_EVString_EVString_callback");
			this.register_setMaterialName_EVString(this.nativeObject.pointer, "setMaterialName_EVString_callback");
			this.register_getMaterialName_void(this.nativeObject.pointer, "getMaterialName_void_callback");
			this.register__notifyParticleResized_void(this.nativeObject.pointer, "_notifyParticleResized_void_callback");
			this.register__notifyParticleRotated_void(this.nativeObject.pointer, "_notifyParticleRotated_void_callback");
			this.register_setDefaultDimensions_Real_Real(this.nativeObject.pointer, "setDefaultDimensions_Real_Real_callback");
			this.register_setDefaultWidth_Real(this.nativeObject.pointer, "setDefaultWidth_Real_callback");
			this.register_getDefaultWidth_void(this.nativeObject.pointer, "getDefaultWidth_void_callback");
			this.register_setDefaultHeight_Real(this.nativeObject.pointer, "setDefaultHeight_Real_callback");
			this.register_getDefaultHeight_void(this.nativeObject.pointer, "getDefaultHeight_void_callback");
			this.register_getCullIndividually_void(this.nativeObject.pointer, "getCullIndividually_void_callback");
			this.register_setCullIndividually_ev_bool(this.nativeObject.pointer, "setCullIndividually_ev_bool_callback");
			this.register_getResourceGroupName_void(this.nativeObject.pointer, "getResourceGroupName_void_callback");
			this.register_getAnimableObjectPtr_void(this.nativeObject.pointer, "getAnimableObjectPtr_void_callback");
			this.register_getRenderQueueId_void(this.nativeObject.pointer, "getRenderQueueId_void_callback");
			this.register__notifyCreator_CMovableObjectFactory(this.nativeObject.pointer, "_notifyCreator_CMovableObjectFactory_callback");
			this.register__getCreator_void(this.nativeObject.pointer, "_getCreator_void_callback");
			this.register__notifyManager_CSceneManager(this.nativeObject.pointer, "_notifyManager_CSceneManager_callback");
			this.register__getManager_void(this.nativeObject.pointer, "_getManager_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getMovableType_void(this.nativeObject.pointer, "getMovableType_void_callback");
			this.register_getParentNode_void(this.nativeObject.pointer, "getParentNode_void_callback");
			this.register_getParentSceneNode_void(this.nativeObject.pointer, "getParentSceneNode_void_callback");
			this.register_isParentTagPoint_void(this.nativeObject.pointer, "isParentTagPoint_void_callback");
			this.register__notifyAttached_CNode_ev_bool(this.nativeObject.pointer, "_notifyAttached_CNode_ev_bool_callback");
			this.register__notifyAttached_CNode(this.nativeObject.pointer, "_notifyAttached_CNode_callback");
			this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
			this.register_detachFromParent_void(this.nativeObject.pointer, "detachFromParent_void_callback");
			this.register_isInScene_void(this.nativeObject.pointer, "isInScene_void_callback");
			this.register__notifyMoved_void(this.nativeObject.pointer, "_notifyMoved_void_callback");
			this.register__notifyLightsQueried_LightList(this.nativeObject.pointer, "_notifyLightsQueried_LightList_callback");
			this.register_setLightQueriedListener_CLightQueriedListener(this.nativeObject.pointer, "setLightQueriedListener_CLightQueriedListener_callback");
			this.register_getLightQueriedListener_void(this.nativeObject.pointer, "getLightQueriedListener_void_callback");
			this.register_getLightListUpdated_void(this.nativeObject.pointer, "getLightListUpdated_void_callback");
			this.register_setLightListUpdated_ev_uint32(this.nativeObject.pointer, "setLightListUpdated_ev_uint32_callback");
			this.register__notifyCurrentCamera_CCamera(this.nativeObject.pointer, "_notifyCurrentCamera_CCamera_callback");
			this.register_getBoundingBox_void(this.nativeObject.pointer, "getBoundingBox_void_callback");
			this.register_getBoundingRadius_void(this.nativeObject.pointer, "getBoundingRadius_void_callback");
			this.register_getWorldBoundingSphere_ev_bool(this.nativeObject.pointer, "getWorldBoundingSphere_ev_bool_callback");
			this.register_getWorldBoundingSphere_void(this.nativeObject.pointer, "getWorldBoundingSphere_void_callback");
			this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setRenderingMaxDistance_Real(this.nativeObject.pointer, "setRenderingMaxDistance_Real_callback");
			this.register_getRenderingMaxDistance_void(this.nativeObject.pointer, "getRenderingMaxDistance_void_callback");
			this.register_setRenderingMinDistance_Real(this.nativeObject.pointer, "setRenderingMinDistance_Real_callback");
			this.register_getRenderingMinDistance_void(this.nativeObject.pointer, "getRenderingMinDistance_void_callback");
			this.register_setRenderingMinPixelSize_Real(this.nativeObject.pointer, "setRenderingMinPixelSize_Real_callback");
			this.register_getRenderingMinPixelSize_void(this.nativeObject.pointer, "getRenderingMinPixelSize_void_callback");
			this.register_setSelectionColour_CColourValue(this.nativeObject.pointer, "setSelectionColour_CColourValue_callback");
			this.register_setSelected_IntVector(this.nativeObject.pointer, "setSelected_IntVector_callback");
			this.register_getSelected_void(this.nativeObject.pointer, "getSelected_void_callback");
			this.register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback");
			this.register_selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CAxisAlignedBox_ev_bool_IntVector_callback");
			this.register_selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CSphere_ev_bool_IntVector_callback");
			this.register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
			this.register_renderSelection_void(this.nativeObject.pointer, "renderSelection_void_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_startEditing_ev_uint32(this.nativeObject.pointer, "startEditing_ev_uint32_callback");
			this.register_endEditing_void(this.nativeObject.pointer, "endEditing_void_callback");
			this.register_getEditBoundingBox_void(this.nativeObject.pointer, "getEditBoundingBox_void_callback");
			this.register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
			this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
			this.register__getParentNodeFullTransform_void(this.nativeObject.pointer, "_getParentNodeFullTransform_void_callback");
			this.register_setQueryFlags_ev_uint32(this.nativeObject.pointer, "setQueryFlags_ev_uint32_callback");
			this.register_addQueryFlags_ev_uint32(this.nativeObject.pointer, "addQueryFlags_ev_uint32_callback");
			this.register_removeQueryFlags_ev_uint32(this.nativeObject.pointer, "removeQueryFlags_ev_uint32_callback");
			this.register_getQueryFlags_void(this.nativeObject.pointer, "getQueryFlags_void_callback");
			this.register_setVisibilityFlags_ev_uint32(this.nativeObject.pointer, "setVisibilityFlags_ev_uint32_callback");
			this.register_addVisibilityFlags_ev_uint32(this.nativeObject.pointer, "addVisibilityFlags_ev_uint32_callback");
			this.register_removeVisibilityFlags_ev_uint32(this.nativeObject.pointer, "removeVisibilityFlags_ev_uint32_callback");
			this.register_getVisibilityFlags_void(this.nativeObject.pointer, "getVisibilityFlags_void_callback");
			this.register_addListener_CMovableObjectListener(this.nativeObject.pointer, "addListener_CMovableObjectListener_callback");
			this.register_removeListener_CMovableObjectListener(this.nativeObject.pointer, "removeListener_CMovableObjectListener_callback");
			this.register_existListener_CMovableObjectListener(this.nativeObject.pointer, "existListener_CMovableObjectListener_callback");
			this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_queryLights_void(this.nativeObject.pointer, "queryLights_void_callback");
			this.register_getLightMask_void(this.nativeObject.pointer, "getLightMask_void_callback");
			this.register_setLightMask_ev_uint32(this.nativeObject.pointer, "setLightMask_ev_uint32_callback");
			this.register__getLightList_void(this.nativeObject.pointer, "_getLightList_void_callback");
			this.register_setCastShadows_ev_bool(this.nativeObject.pointer, "setCastShadows_ev_bool_callback");
			this.register_getReceivesShadows_void(this.nativeObject.pointer, "getReceivesShadows_void_callback");
			this.register_getTypeFlags_void(this.nativeObject.pointer, "getTypeFlags_void_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register_visitRenderables_CVisitor(this.nativeObject.pointer, "visitRenderables_CVisitor_callback");
			this.register_setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_callback");
			this.register_isDebugDisplayEnabled_void(this.nativeObject.pointer, "isDebugDisplayEnabled_void_callback");
			this.register_getCastShadows_void(this.nativeObject.pointer, "getCastShadows_void_callback");
			this.register_getEdgeList_void(this.nativeObject.pointer, "getEdgeList_void_callback");
			this.register_hasEdgeList_void(this.nativeObject.pointer, "hasEdgeList_void_callback");
			this.register_getWorldBoundingBox_ev_bool(this.nativeObject.pointer, "getWorldBoundingBox_ev_bool_callback");
			this.register_getWorldBoundingBox_void(this.nativeObject.pointer, "getWorldBoundingBox_void_callback");
			this.register_getLightCapBounds_void(this.nativeObject.pointer, "getLightCapBounds_void_callback");
			this.register_getDarkCapBounds_CLight_Real(this.nativeObject.pointer, "getDarkCapBounds_CLight_Real_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback");
			this.register_getPointExtrusionDistance_CLight(this.nativeObject.pointer, "getPointExtrusionDistance_CLight_callback");
			this.register_updateEdgeListLightFacing_CEdgeData_CVector4(this.nativeObject.pointer, "updateEdgeListLightFacing_CEdgeData_CVector4_callback");
			this.register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.nativeObject.pointer, "generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback");
			this.register_extrudeBounds_CAxisAlignedBox_CVector4_Real(this.nativeObject.pointer, "extrudeBounds_CAxisAlignedBox_CVector4_Real_callback");
		}
	}
	
	public static ParticleSystem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleSystem obj = null;
 		if(baseObj instanceof ParticleSystem)
		{
			obj = (ParticleSystem)baseObj;
		} else {
			obj = new ParticleSystem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleSystem");
			obj.increaseCast();
		}

		return obj;
	}
}
