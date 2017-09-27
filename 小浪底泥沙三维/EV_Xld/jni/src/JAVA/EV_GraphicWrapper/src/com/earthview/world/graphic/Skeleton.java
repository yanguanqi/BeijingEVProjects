package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 骨骼类定义和管理骨头集			
 */
public class Skeleton extends com.earthview.world.graphic.Resource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeleton", new SkeletonClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSkeletonProxy", new SkeletonClassFactory());
	}

	public static class SkeletonInternalAnimationContainer extends com.earthview.world.graphic.AnimationContainer {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer", new SkeletonInternalAnimationContainerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeleton::JCSkeletonInternalAnimationContainerProxy", new SkeletonInternalAnimationContainerClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 构造函数的键值对表
		 */
		public SkeletonInternalAnimationContainer(com.earthview.world.graphic.Skeleton ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCSkeletonInternalAnimationContainerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Skeleton$SkeletonInternalAnimationContainer".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private int getNumAnimations_void(long pNativeObject);
		public int getNumAnimations()
		{
			int returnValue = getNumAnimations_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private int getNumAnimations_void_NoVirtual(long pNativeObject);
		protected int getNumAnimations_NoVirtual()
		{
			int returnValue = getNumAnimations_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private long getAnimation_ev_uint16(long pNativeObject, int index);
		public com.earthview.world.graphic.Animation getAnimation(int index)
		{
			int indexParamValue = index;
			long returnValue = getAnimation_ev_uint16(this.nativeObject.pointer, indexParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}
		native private long getAnimation_ev_uint16_NoVirtual(long pNativeObject, int index);
		protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(int index)
		{
			int indexParamValue = index;
			long returnValue = getAnimation_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}

		native private long getAnimation_EVString(long pNativeObject, String name);
		public com.earthview.world.graphic.Animation getAnimation(String name)
		{
			String nameParamValue = name;
			long returnValue = getAnimation_EVString(this.nativeObject.pointer, nameParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}
		native private long getAnimation_EVString_NoVirtual(long pNativeObject, String name);
		protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(String name)
		{
			String nameParamValue = name;
			long returnValue = getAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}

		native private long createAnimation_EVString_Real(long pNativeObject, String name, double length);
		public com.earthview.world.graphic.Animation createAnimation(String name, double length)
		{
			String nameParamValue = name;
			double lengthParamValue = length;
			long returnValue = createAnimation_EVString_Real(this.nativeObject.pointer, nameParamValue, lengthParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}
		native private long createAnimation_EVString_Real_NoVirtual(long pNativeObject, String name, double length);
		protected com.earthview.world.graphic.Animation createAnimation_NoVirtual(String name, double length)
		{
			String nameParamValue = name;
			double lengthParamValue = length;
			long returnValue = createAnimation_EVString_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, lengthParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAnimation");
			}
			return __returnValue;
		}

		native private boolean hasAnimation_EVString(long pNativeObject, String name);
		public boolean hasAnimation(String name)
		{
			String nameParamValue = name;
			boolean returnValue = hasAnimation_EVString(this.nativeObject.pointer, nameParamValue);
			return returnValue;
		}
		native private boolean hasAnimation_EVString_NoVirtual(long pNativeObject, String name);
		protected boolean hasAnimation_NoVirtual(String name)
		{
			String nameParamValue = name;
			boolean returnValue = hasAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
			return returnValue;
		}

		native private void removeAnimation_EVString(long pNativeObject, String name);
		public void removeAnimation(String name)
		{
			String nameParamValue = name;
			removeAnimation_EVString(this.nativeObject.pointer, nameParamValue);
		}
		native private void removeAnimation_EVString_NoVirtual(long pNativeObject, String name);
		protected void removeAnimation_NoVirtual(String name)
		{
			String nameParamValue = name;
			removeAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		}

		public SkeletonInternalAnimationContainer(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SkeletonInternalAnimationContainer(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_getNumAnimations_void(long pNativeObject, String method);
		native protected void register_getAnimation_ev_uint16(long pNativeObject, String method);
		native protected void register_getAnimation_EVString(long pNativeObject, String method);
		native protected void register_createAnimation_EVString_Real(long pNativeObject, String method);
		native protected void register_hasAnimation_EVString(long pNativeObject, String method);
		native protected void register_removeAnimation_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_getNumAnimations_void(this.nativeObject.pointer, "getNumAnimations_void_callback");
				this.register_getAnimation_ev_uint16(this.nativeObject.pointer, "getAnimation_ev_uint16_callback");
				this.register_getAnimation_EVString(this.nativeObject.pointer, "getAnimation_EVString_callback");
				this.register_createAnimation_EVString_Real(this.nativeObject.pointer, "createAnimation_EVString_Real_callback");
				this.register_hasAnimation_EVString(this.nativeObject.pointer, "hasAnimation_EVString_callback");
				this.register_removeAnimation_EVString(this.nativeObject.pointer, "removeAnimation_EVString_callback");
			}
		}
		
		public static SkeletonInternalAnimationContainer fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SkeletonInternalAnimationContainer obj = null;
 			if(baseObj instanceof SkeletonInternalAnimationContainer)
			{
				obj = (SkeletonInternalAnimationContainer)baseObj;
			} else {
				obj = new SkeletonInternalAnimationContainer(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CSkeletonInternalAnimationContainer");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SkeletonInternalAnimationContainerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SkeletonInternalAnimationContainer emptyInstance = new SkeletonInternalAnimationContainer(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getAnimationContainerPtr_void_callback()
	{
		com.earthview.world.graphic.Skeleton.SkeletonInternalAnimationContainer returnValue = getAnimationContainerPtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAnimationContainerPtr_void(long pNativeObject);
	public com.earthview.world.graphic.Skeleton.SkeletonInternalAnimationContainer getAnimationContainerPtr()
	{
		long returnValue = getAnimationContainerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Skeleton.SkeletonInternalAnimationContainer __returnValue = new com.earthview.world.graphic.Skeleton.SkeletonInternalAnimationContainer(CreatedWhenConstruct.CWC_NotToCreate, "CSkeletonInternalAnimationContainer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton.SkeletonInternalAnimationContainer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonInternalAnimationContainer");
		}
		return __returnValue;
	}
	native private long getAnimationContainerPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Skeleton.SkeletonInternalAnimationContainer getAnimationContainerPtr_NoVirtual()
	{
		long returnValue = getAnimationContainerPtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Skeleton.SkeletonInternalAnimationContainer __returnValue = new com.earthview.world.graphic.Skeleton.SkeletonInternalAnimationContainer(CreatedWhenConstruct.CWC_NotToCreate, "CSkeletonInternalAnimationContainer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton.SkeletonInternalAnimationContainer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonInternalAnimationContainer");
		}
		return __returnValue;
	}

	///virtual const EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer& getAnimationContainer() {return *m_pAnimationContainer;}
	public static class BoneHandleMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeleton::BoneHandleMap", new BoneHandleMapClassFactory());
		}

		public BoneHandleMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("BoneHandleMap", null);
		}

		native private void push_back_ev_uint16(long pNativeObject, int t);
		public void push_back(int t)
		{
			int tParamValue = t;
			push_back_ev_uint16(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public UShortPointer front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			UShortPointer __returnValue = new UShortPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public UShortPointer back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			UShortPointer __returnValue = new UShortPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_ev_uint16(long pNativeObject, long pos, int t);
		public void insert(long pos, int t)
		{
			long posParamValue = pos;
			int tParamValue = t;
			insert_ev_uint32_ev_uint16(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public UShortPointer OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			UShortPointer __returnValue = new UShortPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public UShortPointer at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			UShortPointer __returnValue = new UShortPointer(new InstancePointer(returnValue));
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
		public BoneHandleMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BoneHandleMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static BoneHandleMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BoneHandleMap obj = null;
 			if(baseObj instanceof BoneHandleMap)
			{
				obj = (BoneHandleMap)baseObj;
			} else {
				obj = new BoneHandleMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "BoneHandleMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BoneHandleMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BoneHandleMap emptyInstance = new BoneHandleMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Internal constructor for use by CSkeletonInstance only
	public Skeleton() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSkeletonProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Skeleton".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Skeleton(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader) {
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
		Create("JCSkeletonProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Skeleton".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Skeleton(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual) {
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
		Create("JCSkeletonProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Skeleton".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Skeleton(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group) {
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
		Create("JCSkeletonProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Skeleton".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long createBone_void_callback()
	{
		com.earthview.world.graphic.Bone returnValue = createBone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createBone_void(long pNativeObject);
	/**
	 * 创建新骨头若不命名，则内部对其自动命名此骨头未被挂接在其它骨头上，除非此骨头作为根骨头，否则后续需要将其挂接到某个骨头上
	 * @param  
	 */
	public com.earthview.world.graphic.Bone createBone()
	{
		long returnValue = createBone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}
	native private long createBone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Bone createBone_NoVirtual()
	{
		long returnValue = createBone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}

	protected  long createBone_ev_uint16_callback(int handle)
	{
		int handleParamValue = handle;
		com.earthview.world.graphic.Bone returnValue = createBone(handleParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createBone_ev_uint16(long pNativeObject, int handle);
	public com.earthview.world.graphic.Bone createBone(int handle)
	{
		int handleParamValue = handle;
		long returnValue = createBone_ev_uint16(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}
	native private long createBone_ev_uint16_NoVirtual(long pNativeObject, int handle);
	protected com.earthview.world.graphic.Bone createBone_NoVirtual(int handle)
	{
		int handleParamValue = handle;
		long returnValue = createBone_ev_uint16_NoVirtual(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}

	protected  long createBone_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.Bone returnValue = createBone(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createBone_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Bone createBone(String name)
	{
		String nameParamValue = name;
		long returnValue = createBone_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}
	native private long createBone_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Bone createBone_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createBone_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}

	protected  long createBone_EVString_ev_uint16_callback(String name, int handle)
	{
		String nameParamValue = name;
		int handleParamValue = handle;
		com.earthview.world.graphic.Bone returnValue = createBone(nameParamValue, handleParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createBone_EVString_ev_uint16(long pNativeObject, String name, int handle);
	public com.earthview.world.graphic.Bone createBone(String name, int handle)
	{
		String nameParamValue = name;
		int handleParamValue = handle;
		long returnValue = createBone_EVString_ev_uint16(this.nativeObject.pointer, nameParamValue, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}
	native private long createBone_EVString_ev_uint16_NoVirtual(long pNativeObject, String name, int handle);
	protected com.earthview.world.graphic.Bone createBone_NoVirtual(String name, int handle)
	{
		String nameParamValue = name;
		int handleParamValue = handle;
		long returnValue = createBone_EVString_ev_uint16_NoVirtual(this.nativeObject.pointer, nameParamValue, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}

	protected  int getNumBones_void_callback()
	{
		int returnValue = getNumBones();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNumBones_void(long pNativeObject);
	/**
	 * 获得骨头的数量
	 * @param  
	 */
	public int getNumBones()
	{
		int returnValue = getNumBones_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumBones_void_NoVirtual(long pNativeObject);
	protected int getNumBones_NoVirtual()
	{
		int returnValue = getNumBones_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getRootBone_void_callback()
	{
		com.earthview.world.graphic.Bone returnValue = getRootBone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRootBone_void(long pNativeObject);
	/**
	 * 获得根骨头(第一个没有父骨头的骨头)
	 * @param  
	 */
	public com.earthview.world.graphic.Bone getRootBone()
	{
		long returnValue = getRootBone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}
	native private long getRootBone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Bone getRootBone_NoVirtual()
	{
		long returnValue = getRootBone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}

	public static class BoneList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeleton::BoneList", new BoneListClassFactory());
		}

		public BoneList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("BoneList", null);
		}

		native private void push_back_CBone(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.Bone> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CBone(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.Bone> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.Bone> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Bone>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.Bone> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.Bone> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Bone>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CBone(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.Bone> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CBone(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.Bone> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Bone> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Bone>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.Bone> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Bone> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Bone>(new InstancePointer(returnValue));
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
		public BoneList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BoneList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static BoneList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BoneList obj = null;
 			if(baseObj instanceof BoneList)
			{
				obj = (BoneList)baseObj;
			} else {
				obj = new BoneList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "BoneList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BoneListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BoneList emptyInstance = new BoneList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CSkeleton::BoneList> EarthView::World::Graphic::CSkeleton::BoneIterator;
	public static class BoneIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeleton::BoneIterator", new BoneIteratorClassFactory());
		}

		public BoneIterator(com.earthview.world.graphic.Skeleton.BoneList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("BoneIterator", list);
		}

		public BoneIterator(com.earthview.world.graphic.Skeleton.BoneIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("BoneIterator", list);
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
		public com.earthview.world.graphic.Bone getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CBone");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.Bone next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CBone");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.Bone getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CBone");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.Bone getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CBone");
			}
			return __returnValue;
		}
		public BoneIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BoneIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static BoneIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BoneIterator obj = null;
 			if(baseObj instanceof BoneIterator)
			{
				obj = (BoneIterator)baseObj;
			} else {
				obj = new BoneIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "BoneIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BoneIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BoneIterator emptyInstance = new BoneIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getRootBoneIterator_void_callback()
	{
		com.earthview.world.graphic.Skeleton.BoneIterator returnValue = getRootBoneIterator();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRootBoneIterator_void(long pNativeObject);
	/**
	 * 获得根骨头的迭代器没有挂接在其它骨头下的骨头都认为是根骨头
	 * @param  
	 */
	public com.earthview.world.graphic.Skeleton.BoneIterator getRootBoneIterator()
	{
		long returnValue = getRootBoneIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Skeleton.BoneIterator __returnValue = new com.earthview.world.graphic.Skeleton.BoneIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "BoneIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton.BoneIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "BoneIterator");
		}
		return __returnValue;
	}
	native private long getRootBoneIterator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Skeleton.BoneIterator getRootBoneIterator_NoVirtual()
	{
		long returnValue = getRootBoneIterator_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.Skeleton.BoneIterator __returnValue = new com.earthview.world.graphic.Skeleton.BoneIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "BoneIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton.BoneIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "BoneIterator");
		}
		return __returnValue;
	}

	protected  long getBoneIterator_void_callback()
	{
		com.earthview.world.graphic.Skeleton.BoneIterator returnValue = getBoneIterator();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBoneIterator_void(long pNativeObject);
	/**
	 * 获得骨头的迭代器				
	 * @param  
	 */
	public com.earthview.world.graphic.Skeleton.BoneIterator getBoneIterator()
	{
		long returnValue = getBoneIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Skeleton.BoneIterator __returnValue = new com.earthview.world.graphic.Skeleton.BoneIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "BoneIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton.BoneIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "BoneIterator");
		}
		return __returnValue;
	}
	native private long getBoneIterator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Skeleton.BoneIterator getBoneIterator_NoVirtual()
	{
		long returnValue = getBoneIterator_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.Skeleton.BoneIterator __returnValue = new com.earthview.world.graphic.Skeleton.BoneIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "BoneIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton.BoneIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "BoneIterator");
		}
		return __returnValue;
	}

	protected  long getBone_ev_uint16_callback(int handle)
	{
		int handleParamValue = handle;
		com.earthview.world.graphic.Bone returnValue = getBone(handleParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBone_ev_uint16(long pNativeObject, int handle);
	/**
	 * 获得骨头
	 * @param  
	 */
	public com.earthview.world.graphic.Bone getBone(int handle)
	{
		int handleParamValue = handle;
		long returnValue = getBone_ev_uint16(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}
	native private long getBone_ev_uint16_NoVirtual(long pNativeObject, int handle);
	protected com.earthview.world.graphic.Bone getBone_NoVirtual(int handle)
	{
		int handleParamValue = handle;
		long returnValue = getBone_ev_uint16_NoVirtual(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}

	protected  long getBone_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.Bone returnValue = getBone(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBone_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Bone getBone(String name)
	{
		String nameParamValue = name;
		long returnValue = getBone_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}
	native private long getBone_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Bone getBone_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getBone_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Bone __returnValue = new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate, "CBone");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Bone)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBone");
		}
		return __returnValue;
	}

	protected  boolean hasBone_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasBone(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasBone_EVString(long pNativeObject, String name);
	/**
	 * 判断给定名称的骨头是否存在
	 * @param  
	 */
	public boolean hasBone(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasBone_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean hasBone_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean hasBone_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasBone_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  void setBindingPose_void_callback()
	{
		setBindingPose();
	}

	native private void setBindingPose_void(long pNativeObject);
	/**
	 * 将骨头的当前姿态置为绑定姿态后续即便骨头的姿态改变，亦可取得此姿态
	 * @param  
	 */
	public void setBindingPose()
	{
		setBindingPose_void(this.nativeObject.pointer);
	}
	native private void setBindingPose_void_NoVirtual(long pNativeObject);
	protected void setBindingPose_NoVirtual()
	{
		setBindingPose_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void reset_ev_bool_callback(boolean resetManualBones)
	{
		boolean resetManualBonesParamValue = resetManualBones;
		reset(resetManualBonesParamValue);
	}

	native private void reset_ev_bool(long pNativeObject, boolean resetManualBones);
	/**
	 * 将骨头的姿态恢复到绑定姿态				
	 * @param  
	 */
	public void reset(boolean resetManualBones)
	{
		boolean resetManualBonesParamValue = resetManualBones;
		reset_ev_bool(this.nativeObject.pointer, resetManualBonesParamValue);
	}
	native private void reset_ev_bool_NoVirtual(long pNativeObject, boolean resetManualBones);
	protected void reset_NoVirtual(boolean resetManualBones)
	{
		boolean resetManualBonesParamValue = resetManualBones;
		reset_ev_bool_NoVirtual(this.nativeObject.pointer, resetManualBonesParamValue);
	}

	protected  void reset_void_callback()
	{
		reset();
	}

	native private void reset_void(long pNativeObject);
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void reset_void_NoVirtual(long pNativeObject);
	protected void reset_NoVirtual()
	{
		reset_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long createAnimation_EVString_Real_callback(String name, double length)
	{
		String nameParamValue = name;
		double lengthParamValue = length;
		com.earthview.world.graphic.Animation returnValue = createAnimation(nameParamValue, lengthParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createAnimation_EVString_Real(long pNativeObject, String name, double length);
	/**
	 * 创建动画				
	 * @param name 名称
	 * @param length 动画时长(单位为秒)
	 */
	public com.earthview.world.graphic.Animation createAnimation(String name, double length)
	{
		String nameParamValue = name;
		double lengthParamValue = length;
		long returnValue = createAnimation_EVString_Real(this.nativeObject.pointer, nameParamValue, lengthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long createAnimation_EVString_Real_NoVirtual(long pNativeObject, String name, double length);
	protected com.earthview.world.graphic.Animation createAnimation_NoVirtual(String name, double length)
	{
		String nameParamValue = name;
		double lengthParamValue = length;
		long returnValue = createAnimation_EVString_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, lengthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  long getAnimation_EVString_LinkedSkeletonAnimationSource_callback(String name, long linker)
	{
		String nameParamValue = name;
		NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource> linkerParamValue = (linker == 0L ? null : new NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource>(new InstancePointer(linker)));
		com.earthview.world.graphic.Animation returnValue = getAnimation(nameParamValue, linkerParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAnimation_EVString_LinkedSkeletonAnimationSource(long pNativeObject, String name, long linker);
	/**
	 * 获得给定名称的动画				
	 * @param name 名称
	 */
	public com.earthview.world.graphic.Animation getAnimation(String name, NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource> linker)
	{
		String nameParamValue = name;
		long linkerParamValue = (linker == null ? 0L : linker.nativeObject.pointer);
		long returnValue = getAnimation_EVString_LinkedSkeletonAnimationSource(this.nativeObject.pointer, nameParamValue, linkerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long getAnimation_EVString_LinkedSkeletonAnimationSource_NoVirtual(long pNativeObject, String name, long linker);
	protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(String name, NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource> linker)
	{
		String nameParamValue = name;
		long linkerParamValue = (linker == null ? 0L : linker.nativeObject.pointer);
		long returnValue = getAnimation_EVString_LinkedSkeletonAnimationSource_NoVirtual(this.nativeObject.pointer, nameParamValue, linkerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  long getAnimation_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.Animation returnValue = getAnimation(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAnimation_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Animation getAnimation(String name)
	{
		String nameParamValue = name;
		long returnValue = getAnimation_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long getAnimation_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = getAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  long _getAnimationImpl_EVString_LinkedSkeletonAnimationSource_callback(String name, long linker)
	{
		String nameParamValue = name;
		NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource> linkerParamValue = (linker == 0L ? null : new NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource>(new InstancePointer(linker)));
		com.earthview.world.graphic.Animation returnValue = _getAnimationImpl(nameParamValue, linkerParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getAnimationImpl_EVString_LinkedSkeletonAnimationSource(long pNativeObject, String name, long linker);
	//// Internal accessor for animations (returns null if animation does not exist)
	public com.earthview.world.graphic.Animation _getAnimationImpl(String name, NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource> linker)
	{
		String nameParamValue = name;
		long linkerParamValue = (linker == null ? 0L : linker.nativeObject.pointer);
		long returnValue = _getAnimationImpl_EVString_LinkedSkeletonAnimationSource(this.nativeObject.pointer, nameParamValue, linkerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long _getAnimationImpl_EVString_LinkedSkeletonAnimationSource_NoVirtual(long pNativeObject, String name, long linker);
	protected com.earthview.world.graphic.Animation _getAnimationImpl_NoVirtual(String name, NativeObjectPointer<com.earthview.world.graphic.LinkedSkeletonAnimationSource> linker)
	{
		String nameParamValue = name;
		long linkerParamValue = (linker == null ? 0L : linker.nativeObject.pointer);
		long returnValue = _getAnimationImpl_EVString_LinkedSkeletonAnimationSource_NoVirtual(this.nativeObject.pointer, nameParamValue, linkerParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  long _getAnimationImpl_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.Animation returnValue = _getAnimationImpl(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getAnimationImpl_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Animation _getAnimationImpl(String name)
	{
		String nameParamValue = name;
		long returnValue = _getAnimationImpl_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long _getAnimationImpl_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Animation _getAnimationImpl_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = _getAnimationImpl_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  boolean hasAnimation_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasAnimation(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasAnimation_EVString(long pNativeObject, String name);
	/**
	 * 判断给定名称的动画是否存在
	 * @param name 名称
	 */
	public boolean hasAnimation(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasAnimation_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean hasAnimation_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean hasAnimation_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  void removeAnimation_EVString_callback(String name)
	{
		String nameParamValue = name;
		removeAnimation(nameParamValue);
	}

	native private void removeAnimation_EVString(long pNativeObject, String name);
	/**
	 * 移除给定名称的动画
	 * @param name 名称
	 */
	public void removeAnimation(String name)
	{
		String nameParamValue = name;
		removeAnimation_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeAnimation_EVString_NoVirtual(long pNativeObject, String name);
	protected void removeAnimation_NoVirtual(String name)
	{
		String nameParamValue = name;
		removeAnimation_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void setAnimationState_CAnimationStateSet_callback(long animSet)
	{
		com.earthview.world.graphic.AnimationStateSet animSetParamValue = new com.earthview.world.graphic.AnimationStateSet(CreatedWhenConstruct.CWC_NotToCreate);
		animSetParamValue.setDelegate(true);
		animSetParamValue.setInstancePointer(new InstancePointer(animSet));
		IClassFactory animSetParamValueClassFactory = GlobalClassFactoryMap.get(animSetParamValue.getCppInstanceTypeName());
		if (animSetParamValueClassFactory != null)
		{
			animSetParamValue.setDelegate(true);
			animSetParamValue = (com.earthview.world.graphic.AnimationStateSet)animSetParamValueClassFactory.create();
			animSetParamValue.setDelegate(true);
			animSetParamValue.setInstancePointer(new InstancePointer(animSet));
		}
		setAnimationState(animSetParamValue);
	}

	native private void setAnimationState_CAnimationStateSet(long pNativeObject, long animSet);
	/**
	 * 设置动画状态集
	 * @param  
	 */
	public void setAnimationState(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = animSet.nativeObject.pointer;
		setAnimationState_CAnimationStateSet(this.nativeObject.pointer, animSetParamValue);
	}
	native private void setAnimationState_CAnimationStateSet_NoVirtual(long pNativeObject, long animSet);
	protected void setAnimationState_NoVirtual(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = animSet.nativeObject.pointer;
		setAnimationState_CAnimationStateSet_NoVirtual(this.nativeObject.pointer, animSetParamValue);
	}

	protected  void _initAnimationState_CAnimationStateSet_callback(long animSet)
	{
		com.earthview.world.graphic.AnimationStateSet animSetParamValue = (animSet == 0L ? null : new com.earthview.world.graphic.AnimationStateSet(CreatedWhenConstruct.CWC_NotToCreate));
		if(animSetParamValue != null)
		{
		animSetParamValue.setDelegate(true);
		animSetParamValue.setInstancePointer(new InstancePointer(animSet));
		IClassFactory animSetParamValueClassFactory = GlobalClassFactoryMap.get(animSetParamValue.getCppInstanceTypeName());
		if (animSetParamValueClassFactory != null)
		{
			animSetParamValue.setDelegate(true);
			animSetParamValue = (com.earthview.world.graphic.AnimationStateSet)animSetParamValueClassFactory.create();
			animSetParamValue.setDelegate(true);
			animSetParamValue.setInstancePointer(new InstancePointer(animSet));
		}
		}
		_initAnimationState(animSetParamValue);
	}

	native private void _initAnimationState_CAnimationStateSet(long pNativeObject, long animSet);
	/**
	 * 初始化动画状态集
	 * @param  
	 */
	public void _initAnimationState(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = (animSet == null ? 0L : animSet.nativeObject.pointer);
		_initAnimationState_CAnimationStateSet(this.nativeObject.pointer, animSetParamValue);
	}
	native private void _initAnimationState_CAnimationStateSet_NoVirtual(long pNativeObject, long animSet);
	protected void _initAnimationState_NoVirtual(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = (animSet == null ? 0L : animSet.nativeObject.pointer);
		_initAnimationState_CAnimationStateSet_NoVirtual(this.nativeObject.pointer, animSetParamValue);
	}

	protected  void _refreshAnimationState_CAnimationStateSet_callback(long animSet)
	{
		com.earthview.world.graphic.AnimationStateSet animSetParamValue = (animSet == 0L ? null : new com.earthview.world.graphic.AnimationStateSet(CreatedWhenConstruct.CWC_NotToCreate));
		if(animSetParamValue != null)
		{
		animSetParamValue.setDelegate(true);
		animSetParamValue.setInstancePointer(new InstancePointer(animSet));
		IClassFactory animSetParamValueClassFactory = GlobalClassFactoryMap.get(animSetParamValue.getCppInstanceTypeName());
		if (animSetParamValueClassFactory != null)
		{
			animSetParamValue.setDelegate(true);
			animSetParamValue = (com.earthview.world.graphic.AnimationStateSet)animSetParamValueClassFactory.create();
			animSetParamValue.setDelegate(true);
			animSetParamValue.setInstancePointer(new InstancePointer(animSet));
		}
		}
		_refreshAnimationState(animSetParamValue);
	}

	native private void _refreshAnimationState_CAnimationStateSet(long pNativeObject, long animSet);
	/**
	 * 更新动画状态集
	 * @param  
	 */
	public void _refreshAnimationState(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = (animSet == null ? 0L : animSet.nativeObject.pointer);
		_refreshAnimationState_CAnimationStateSet(this.nativeObject.pointer, animSetParamValue);
	}
	native private void _refreshAnimationState_CAnimationStateSet_NoVirtual(long pNativeObject, long animSet);
	protected void _refreshAnimationState_NoVirtual(com.earthview.world.graphic.AnimationStateSet animSet)
	{
		long animSetParamValue = (animSet == null ? 0L : animSet.nativeObject.pointer);
		_refreshAnimationState_CAnimationStateSet_NoVirtual(this.nativeObject.pointer, animSetParamValue);
	}

	protected  void _getBoneMatrices_CMatrix4_callback(long pMatrices)
	{
		com.earthview.world.spatial.math.Matrix4 pMatricesParamValue = (pMatrices == 0L ? null : new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate));
		if(pMatricesParamValue != null)
		{
		pMatricesParamValue.setDelegate(true);
		pMatricesParamValue.setInstancePointer(new InstancePointer(pMatrices));
		IClassFactory pMatricesParamValueClassFactory = GlobalClassFactoryMap.get(pMatricesParamValue.getCppInstanceTypeName());
		if (pMatricesParamValueClassFactory != null)
		{
			pMatricesParamValue.setDelegate(true);
			pMatricesParamValue = (com.earthview.world.spatial.math.Matrix4)pMatricesParamValueClassFactory.create();
			pMatricesParamValue.setDelegate(true);
			pMatricesParamValue.setInstancePointer(new InstancePointer(pMatrices));
		}
		}
		_getBoneMatrices(pMatricesParamValue);
	}

	native private void _getBoneMatrices_CMatrix4(long pNativeObject, long pMatrices);
	/**
	 * 获得骨头矩阵要求数组长度不小于与骨头数量
	 * @param  
	 */
	public void _getBoneMatrices(com.earthview.world.spatial.math.Matrix4 pMatrices)
	{
		long pMatricesParamValue = (pMatrices == null ? 0L : pMatrices.nativeObject.pointer);
		_getBoneMatrices_CMatrix4(this.nativeObject.pointer, pMatricesParamValue);
	}
	native private void _getBoneMatrices_CMatrix4_NoVirtual(long pNativeObject, long pMatrices);
	protected void _getBoneMatrices_NoVirtual(com.earthview.world.spatial.math.Matrix4 pMatrices)
	{
		long pMatricesParamValue = (pMatrices == null ? 0L : pMatrices.nativeObject.pointer);
		_getBoneMatrices_CMatrix4_NoVirtual(this.nativeObject.pointer, pMatricesParamValue);
	}

	protected  void _getBoneMatrices_CMatrix4_ev_uint32_callback(long pMatrices, long index)
	{
		com.earthview.world.spatial.math.Matrix4 pMatricesParamValue = (pMatrices == 0L ? null : new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate));
		if(pMatricesParamValue != null)
		{
		pMatricesParamValue.setDelegate(true);
		pMatricesParamValue.setInstancePointer(new InstancePointer(pMatrices));
		IClassFactory pMatricesParamValueClassFactory = GlobalClassFactoryMap.get(pMatricesParamValue.getCppInstanceTypeName());
		if (pMatricesParamValueClassFactory != null)
		{
			pMatricesParamValue.setDelegate(true);
			pMatricesParamValue = (com.earthview.world.spatial.math.Matrix4)pMatricesParamValueClassFactory.create();
			pMatricesParamValue.setDelegate(true);
			pMatricesParamValue.setInstancePointer(new InstancePointer(pMatrices));
		}
		}
		long indexParamValue = index;
		_getBoneMatrices(pMatricesParamValue, indexParamValue);
	}

	native private void _getBoneMatrices_CMatrix4_ev_uint32(long pNativeObject, long pMatrices, long index);
	public void _getBoneMatrices(com.earthview.world.spatial.math.Matrix4 pMatrices, long index)
	{
		long pMatricesParamValue = (pMatrices == null ? 0L : pMatrices.nativeObject.pointer);
		long indexParamValue = index;
		_getBoneMatrices_CMatrix4_ev_uint32(this.nativeObject.pointer, pMatricesParamValue, indexParamValue);
	}
	native private void _getBoneMatrices_CMatrix4_ev_uint32_NoVirtual(long pNativeObject, long pMatrices, long index);
	protected void _getBoneMatrices_NoVirtual(com.earthview.world.spatial.math.Matrix4 pMatrices, long index)
	{
		long pMatricesParamValue = (pMatrices == null ? 0L : pMatrices.nativeObject.pointer);
		long indexParamValue = index;
		_getBoneMatrices_CMatrix4_ev_uint32_NoVirtual(this.nativeObject.pointer, pMatricesParamValue, indexParamValue);
	}

	protected  int getNumAnimations_void_callback()
	{
		int returnValue = getNumAnimations();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNumAnimations_void(long pNativeObject);
	/**
	 * 获得动画数量				
	 * @param  
	 */
	public int getNumAnimations()
	{
		int returnValue = getNumAnimations_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumAnimations_void_NoVirtual(long pNativeObject);
	protected int getNumAnimations_NoVirtual()
	{
		int returnValue = getNumAnimations_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getAnimation_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.Animation returnValue = getAnimation(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAnimation_ev_uint16(long pNativeObject, int index);
	/**
	 * 获得动画			
	 * @param  
	 */
	public com.earthview.world.graphic.Animation getAnimation(int index)
	{
		int indexParamValue = index;
		long returnValue = getAnimation_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private long getAnimation_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.Animation getAnimation_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getAnimation_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}

	protected  int getBlendMode_void_callback()
	{
		com.earthview.world.graphic.SkeletonAnimationBlendMode returnValue = getBlendMode();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getBlendMode_void(long pNativeObject);
	/**
	 * 获得骨骼动画混合方式			
	 * @param  
	 */
	public com.earthview.world.graphic.SkeletonAnimationBlendMode getBlendMode()
	{
		int returnValue = getBlendMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.SkeletonAnimationBlendMode.toEnum(returnValue);
	}
	native private int getBlendMode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SkeletonAnimationBlendMode getBlendMode_NoVirtual()
	{
		int returnValue = getBlendMode_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.SkeletonAnimationBlendMode.toEnum(returnValue);
	}

	protected  void setBlendMode_SkeletonAnimationBlendMode_callback(int state)
	{
		com.earthview.world.graphic.SkeletonAnimationBlendMode stateParamValue = com.earthview.world.graphic.SkeletonAnimationBlendMode.toEnum(state);
		setBlendMode(stateParamValue);
	}

	native private void setBlendMode_SkeletonAnimationBlendMode(long pNativeObject, int state);
	/**
	 * 设置骨骼动画混合方式			
	 * @param  
	 */
	public void setBlendMode(com.earthview.world.graphic.SkeletonAnimationBlendMode state)
	{
		int stateParamValue = state.getValue();
		setBlendMode_SkeletonAnimationBlendMode(this.nativeObject.pointer, stateParamValue);
	}
	native private void setBlendMode_SkeletonAnimationBlendMode_NoVirtual(long pNativeObject, int state);
	protected void setBlendMode_NoVirtual(com.earthview.world.graphic.SkeletonAnimationBlendMode state)
	{
		int stateParamValue = state.getValue();
		setBlendMode_SkeletonAnimationBlendMode_NoVirtual(this.nativeObject.pointer, stateParamValue);
	}

	protected  void _updateTransforms_void_callback()
	{
		_updateTransforms();
	}

	native private void _updateTransforms_void(long pNativeObject);
	/**
	 * 更新骨头的姿态			
	 * @param  
	 */
	public void _updateTransforms()
	{
		_updateTransforms_void(this.nativeObject.pointer);
	}
	native private void _updateTransforms_void_NoVirtual(long pNativeObject);
	protected void _updateTransforms_NoVirtual()
	{
		_updateTransforms_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void optimiseAllAnimations_ev_bool_callback(boolean preservingIdentityNodeTracks)
	{
		boolean preservingIdentityNodeTracksParamValue = preservingIdentityNodeTracks;
		optimiseAllAnimations(preservingIdentityNodeTracksParamValue);
	}

	native private void optimiseAllAnimations_ev_bool(long pNativeObject, boolean preservingIdentityNodeTracks);
	public void optimiseAllAnimations(boolean preservingIdentityNodeTracks)
	{
		boolean preservingIdentityNodeTracksParamValue = preservingIdentityNodeTracks;
		optimiseAllAnimations_ev_bool(this.nativeObject.pointer, preservingIdentityNodeTracksParamValue);
	}
	native private void optimiseAllAnimations_ev_bool_NoVirtual(long pNativeObject, boolean preservingIdentityNodeTracks);
	protected void optimiseAllAnimations_NoVirtual(boolean preservingIdentityNodeTracks)
	{
		boolean preservingIdentityNodeTracksParamValue = preservingIdentityNodeTracks;
		optimiseAllAnimations_ev_bool_NoVirtual(this.nativeObject.pointer, preservingIdentityNodeTracksParamValue);
	}

	protected  void optimiseAllAnimations_void_callback()
	{
		optimiseAllAnimations();
	}

	native private void optimiseAllAnimations_void(long pNativeObject);
	public void optimiseAllAnimations()
	{
		optimiseAllAnimations_void(this.nativeObject.pointer);
	}
	native private void optimiseAllAnimations_void_NoVirtual(long pNativeObject);
	protected void optimiseAllAnimations_NoVirtual()
	{
		optimiseAllAnimations_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void addLinkedSkeletonAnimationSource_EVString_Real_callback(String skelName, double scale)
	{
		String skelNameParamValue = skelName;
		double scaleParamValue = scale;
		addLinkedSkeletonAnimationSource(skelNameParamValue, scaleParamValue);
	}

	native private void addLinkedSkeletonAnimationSource_EVString_Real(long pNativeObject, String skelName, double scale);
	public void addLinkedSkeletonAnimationSource(String skelName, double scale)
	{
		String skelNameParamValue = skelName;
		double scaleParamValue = scale;
		addLinkedSkeletonAnimationSource_EVString_Real(this.nativeObject.pointer, skelNameParamValue, scaleParamValue);
	}
	native private void addLinkedSkeletonAnimationSource_EVString_Real_NoVirtual(long pNativeObject, String skelName, double scale);
	protected void addLinkedSkeletonAnimationSource_NoVirtual(String skelName, double scale)
	{
		String skelNameParamValue = skelName;
		double scaleParamValue = scale;
		addLinkedSkeletonAnimationSource_EVString_Real_NoVirtual(this.nativeObject.pointer, skelNameParamValue, scaleParamValue);
	}

	protected  void addLinkedSkeletonAnimationSource_EVString_callback(String skelName)
	{
		String skelNameParamValue = skelName;
		addLinkedSkeletonAnimationSource(skelNameParamValue);
	}

	native private void addLinkedSkeletonAnimationSource_EVString(long pNativeObject, String skelName);
	public void addLinkedSkeletonAnimationSource(String skelName)
	{
		String skelNameParamValue = skelName;
		addLinkedSkeletonAnimationSource_EVString(this.nativeObject.pointer, skelNameParamValue);
	}
	native private void addLinkedSkeletonAnimationSource_EVString_NoVirtual(long pNativeObject, String skelName);
	protected void addLinkedSkeletonAnimationSource_NoVirtual(String skelName)
	{
		String skelNameParamValue = skelName;
		addLinkedSkeletonAnimationSource_EVString_NoVirtual(this.nativeObject.pointer, skelNameParamValue);
	}

	protected  void removeAllLinkedSkeletonAnimationSources_void_callback()
	{
		removeAllLinkedSkeletonAnimationSources();
	}

	native private void removeAllLinkedSkeletonAnimationSources_void(long pNativeObject);
	//// Remove all links to other skeletons for the purposes of sharing animation
	public void removeAllLinkedSkeletonAnimationSources()
	{
		removeAllLinkedSkeletonAnimationSources_void(this.nativeObject.pointer);
	}
	native private void removeAllLinkedSkeletonAnimationSources_void_NoVirtual(long pNativeObject);
	protected void removeAllLinkedSkeletonAnimationSources_NoVirtual()
	{
		removeAllLinkedSkeletonAnimationSources_void_NoVirtual(this.nativeObject.pointer);
	}

	public static class LinkedSkeletonAnimSourceList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList", new LinkedSkeletonAnimSourceListClassFactory());
		}

		public LinkedSkeletonAnimSourceList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("LinkedSkeletonAnimSourceList", null);
		}

		native private void push_back_LinkedSkeletonAnimationSource(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.LinkedSkeletonAnimationSource t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_LinkedSkeletonAnimationSource(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.LinkedSkeletonAnimationSource front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.LinkedSkeletonAnimationSource __returnValue = new com.earthview.world.graphic.LinkedSkeletonAnimationSource(CreatedWhenConstruct.CWC_NotToCreate, "LinkedSkeletonAnimationSource");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LinkedSkeletonAnimationSource)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.LinkedSkeletonAnimationSource back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.LinkedSkeletonAnimationSource __returnValue = new com.earthview.world.graphic.LinkedSkeletonAnimationSource(CreatedWhenConstruct.CWC_NotToCreate, "LinkedSkeletonAnimationSource");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LinkedSkeletonAnimationSource)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_LinkedSkeletonAnimationSource(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.LinkedSkeletonAnimationSource t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_LinkedSkeletonAnimationSource(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public com.earthview.world.graphic.LinkedSkeletonAnimationSource OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.LinkedSkeletonAnimationSource __returnValue = new com.earthview.world.graphic.LinkedSkeletonAnimationSource(CreatedWhenConstruct.CWC_NotToCreate, "LinkedSkeletonAnimationSource");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LinkedSkeletonAnimationSource)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.LinkedSkeletonAnimationSource at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.LinkedSkeletonAnimationSource __returnValue = new com.earthview.world.graphic.LinkedSkeletonAnimationSource(CreatedWhenConstruct.CWC_NotToCreate, "LinkedSkeletonAnimationSource");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LinkedSkeletonAnimationSource)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
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
		public LinkedSkeletonAnimSourceList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LinkedSkeletonAnimSourceList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static LinkedSkeletonAnimSourceList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LinkedSkeletonAnimSourceList obj = null;
 			if(baseObj instanceof LinkedSkeletonAnimSourceList)
			{
				obj = (LinkedSkeletonAnimSourceList)baseObj;
			} else {
				obj = new LinkedSkeletonAnimSourceList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "LinkedSkeletonAnimSourceList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LinkedSkeletonAnimSourceListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LinkedSkeletonAnimSourceList emptyInstance = new LinkedSkeletonAnimSourceList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList>EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator;
	public static class LinkedSkeletonAnimSourceIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator", new LinkedSkeletonAnimSourceIteratorClassFactory());
		}

		public LinkedSkeletonAnimSourceIterator(com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("LinkedSkeletonAnimSourceIterator", list);
		}

		public LinkedSkeletonAnimSourceIterator(com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("LinkedSkeletonAnimSourceIterator", list);
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
		public com.earthview.world.graphic.LinkedSkeletonAnimationSource getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.LinkedSkeletonAnimationSource __returnValue = new com.earthview.world.graphic.LinkedSkeletonAnimationSource(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LinkedSkeletonAnimationSource)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.LinkedSkeletonAnimationSource next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			com.earthview.world.graphic.LinkedSkeletonAnimationSource __returnValue = new com.earthview.world.graphic.LinkedSkeletonAnimationSource(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LinkedSkeletonAnimationSource)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.LinkedSkeletonAnimationSource getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.LinkedSkeletonAnimationSource __returnValue = new com.earthview.world.graphic.LinkedSkeletonAnimationSource(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LinkedSkeletonAnimationSource)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.LinkedSkeletonAnimationSource getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.LinkedSkeletonAnimationSource __returnValue = new com.earthview.world.graphic.LinkedSkeletonAnimationSource(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LinkedSkeletonAnimationSource)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimationSource");
			}
			return __returnValue;
		}
		public LinkedSkeletonAnimSourceIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LinkedSkeletonAnimSourceIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static LinkedSkeletonAnimSourceIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LinkedSkeletonAnimSourceIterator obj = null;
 			if(baseObj instanceof LinkedSkeletonAnimSourceIterator)
			{
				obj = (LinkedSkeletonAnimSourceIterator)baseObj;
			} else {
				obj = new LinkedSkeletonAnimSourceIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "LinkedSkeletonAnimSourceIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LinkedSkeletonAnimSourceIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LinkedSkeletonAnimSourceIterator emptyInstance = new LinkedSkeletonAnimSourceIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getLinkedSkeletonAnimationSourceIterator_void_callback()
	{
		com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator returnValue = getLinkedSkeletonAnimationSourceIterator();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLinkedSkeletonAnimationSourceIterator_void(long pNativeObject);
	//// Get an iterator over the linked skeletons used as animation sources
	public com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator getLinkedSkeletonAnimationSourceIterator()
	{
		long returnValue = getLinkedSkeletonAnimationSourceIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator __returnValue = new com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimSourceIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimSourceIterator");
		}
		return __returnValue;
	}
	native private long getLinkedSkeletonAnimationSourceIterator_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator getLinkedSkeletonAnimationSourceIterator_NoVirtual()
	{
		long returnValue = getLinkedSkeletonAnimationSourceIterator_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator __returnValue = new com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimSourceIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton.LinkedSkeletonAnimSourceIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LinkedSkeletonAnimSourceIterator");
		}
		return __returnValue;
	}

	protected  void _notifyManualBonesDirty_void_callback()
	{
		_notifyManualBonesDirty();
	}

	native private void _notifyManualBonesDirty_void(long pNativeObject);
	//// Internal method for marking the manual bones as dirty
	public void _notifyManualBonesDirty()
	{
		_notifyManualBonesDirty_void(this.nativeObject.pointer);
	}
	native private void _notifyManualBonesDirty_void_NoVirtual(long pNativeObject);
	protected void _notifyManualBonesDirty_NoVirtual()
	{
		_notifyManualBonesDirty_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _notifyManualBoneStateChange_CBone_callback(long ref_bone)
	{
		com.earthview.world.graphic.Bone ref_boneParamValue = (ref_bone == 0L ? null : new com.earthview.world.graphic.Bone(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_boneParamValue != null)
		{
		ref_boneParamValue.setDelegate(true);
		ref_boneParamValue.setInstancePointer(new InstancePointer(ref_bone));
		IClassFactory ref_boneParamValueClassFactory = GlobalClassFactoryMap.get(ref_boneParamValue.getCppInstanceTypeName());
		if (ref_boneParamValueClassFactory != null)
		{
			ref_boneParamValue.setDelegate(true);
			ref_boneParamValue = (com.earthview.world.graphic.Bone)ref_boneParamValueClassFactory.create();
			ref_boneParamValue.setDelegate(true);
			ref_boneParamValue.setInstancePointer(new InstancePointer(ref_bone));
		}
		}
		_notifyManualBoneStateChange(ref_boneParamValue);
	}

	native private void _notifyManualBoneStateChange_CBone(long pNativeObject, long ref_bone);
	//// Internal method for notifying that a bone is manual
	public void _notifyManualBoneStateChange(com.earthview.world.graphic.Bone ref_bone)
	{
		long ref_boneParamValue = (ref_bone == null ? 0L : ref_bone.nativeObject.pointer);
		_notifyManualBoneStateChange_CBone(this.nativeObject.pointer, ref_boneParamValue);
	}
	native private void _notifyManualBoneStateChange_CBone_NoVirtual(long pNativeObject, long ref_bone);
	protected void _notifyManualBoneStateChange_NoVirtual(com.earthview.world.graphic.Bone ref_bone)
	{
		long ref_boneParamValue = (ref_bone == null ? 0L : ref_bone.nativeObject.pointer);
		_notifyManualBoneStateChange_CBone_NoVirtual(this.nativeObject.pointer, ref_boneParamValue);
	}

	protected  boolean getManualBonesDirty_void_callback()
	{
		boolean returnValue = getManualBonesDirty();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getManualBonesDirty_void(long pNativeObject);
	//// Have manual bones been modified since the skeleton was last updated?
	public boolean getManualBonesDirty()
	{
		boolean returnValue = getManualBonesDirty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getManualBonesDirty_void_NoVirtual(long pNativeObject);
	protected boolean getManualBonesDirty_NoVirtual()
	{
		boolean returnValue = getManualBonesDirty_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean hasManualBones_void_callback()
	{
		boolean returnValue = hasManualBones();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasManualBones_void(long pNativeObject);
	//// Are there any manually controlled bones?
	public boolean hasManualBones()
	{
		boolean returnValue = hasManualBones_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasManualBones_void_NoVirtual(long pNativeObject);
	protected boolean hasManualBones_NoVirtual()
	{
		boolean returnValue = hasManualBones_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_callback(long source, long boneHandleMap, long animations)
	{
		com.earthview.world.graphic.Skeleton sourceParamValue = (source == 0L ? null : new com.earthview.world.graphic.Skeleton(CreatedWhenConstruct.CWC_NotToCreate));
		if(sourceParamValue != null)
		{
		sourceParamValue.setDelegate(true);
		sourceParamValue.setInstancePointer(new InstancePointer(source));
		IClassFactory sourceParamValueClassFactory = GlobalClassFactoryMap.get(sourceParamValue.getCppInstanceTypeName());
		if (sourceParamValueClassFactory != null)
		{
			sourceParamValue.setDelegate(true);
			sourceParamValue = (com.earthview.world.graphic.Skeleton)sourceParamValueClassFactory.create();
			sourceParamValue.setDelegate(true);
			sourceParamValue.setInstancePointer(new InstancePointer(source));
		}
		}
		com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMapParamValue = new com.earthview.world.graphic.Skeleton.BoneHandleMap(CreatedWhenConstruct.CWC_NotToCreate);
		boneHandleMapParamValue.setDelegate(true);
		boneHandleMapParamValue.setInstancePointer(new InstancePointer(boneHandleMap));
		IClassFactory boneHandleMapParamValueClassFactory = GlobalClassFactoryMap.get(boneHandleMapParamValue.getCppInstanceTypeName());
		if (boneHandleMapParamValueClassFactory != null)
		{
			boneHandleMapParamValue.setDelegate(true);
			boneHandleMapParamValue = (com.earthview.world.graphic.Skeleton.BoneHandleMap)boneHandleMapParamValueClassFactory.create();
			boneHandleMapParamValue.setDelegate(true);
			boneHandleMapParamValue.setInstancePointer(new InstancePointer(boneHandleMap));
		}
		com.earthview.world.core.StringVector animationsParamValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		animationsParamValue.setDelegate(true);
		animationsParamValue.setInstancePointer(new InstancePointer(animations));
		IClassFactory animationsParamValueClassFactory = GlobalClassFactoryMap.get(animationsParamValue.getCppInstanceTypeName());
		if (animationsParamValueClassFactory != null)
		{
			animationsParamValue.setDelegate(true);
			animationsParamValue = (com.earthview.world.core.StringVector)animationsParamValueClassFactory.create();
			animationsParamValue.setDelegate(true);
			animationsParamValue.setInstancePointer(new InstancePointer(animations));
		}
		_mergeSkeletonAnimations(sourceParamValue, boneHandleMapParamValue, animationsParamValue);
	}

	native private void _mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector(long pNativeObject, long source, long boneHandleMap, long animations);
	public void _mergeSkeletonAnimations(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap, com.earthview.world.core.StringVector animations)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long boneHandleMapParamValue = boneHandleMap.nativeObject.pointer;
		long animationsParamValue = animations.nativeObject.pointer;
		_mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector(this.nativeObject.pointer, sourceParamValue, boneHandleMapParamValue, animationsParamValue);
	}
	native private void _mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_NoVirtual(long pNativeObject, long source, long boneHandleMap, long animations);
	protected void _mergeSkeletonAnimations_NoVirtual(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap, com.earthview.world.core.StringVector animations)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long boneHandleMapParamValue = boneHandleMap.nativeObject.pointer;
		long animationsParamValue = animations.nativeObject.pointer;
		_mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_NoVirtual(this.nativeObject.pointer, sourceParamValue, boneHandleMapParamValue, animationsParamValue);
	}

	protected  void _mergeSkeletonAnimations_CSkeleton_BoneHandleMap_callback(long source, long boneHandleMap)
	{
		com.earthview.world.graphic.Skeleton sourceParamValue = (source == 0L ? null : new com.earthview.world.graphic.Skeleton(CreatedWhenConstruct.CWC_NotToCreate));
		if(sourceParamValue != null)
		{
		sourceParamValue.setDelegate(true);
		sourceParamValue.setInstancePointer(new InstancePointer(source));
		IClassFactory sourceParamValueClassFactory = GlobalClassFactoryMap.get(sourceParamValue.getCppInstanceTypeName());
		if (sourceParamValueClassFactory != null)
		{
			sourceParamValue.setDelegate(true);
			sourceParamValue = (com.earthview.world.graphic.Skeleton)sourceParamValueClassFactory.create();
			sourceParamValue.setDelegate(true);
			sourceParamValue.setInstancePointer(new InstancePointer(source));
		}
		}
		com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMapParamValue = new com.earthview.world.graphic.Skeleton.BoneHandleMap(CreatedWhenConstruct.CWC_NotToCreate);
		boneHandleMapParamValue.setDelegate(true);
		boneHandleMapParamValue.setInstancePointer(new InstancePointer(boneHandleMap));
		IClassFactory boneHandleMapParamValueClassFactory = GlobalClassFactoryMap.get(boneHandleMapParamValue.getCppInstanceTypeName());
		if (boneHandleMapParamValueClassFactory != null)
		{
			boneHandleMapParamValue.setDelegate(true);
			boneHandleMapParamValue = (com.earthview.world.graphic.Skeleton.BoneHandleMap)boneHandleMapParamValueClassFactory.create();
			boneHandleMapParamValue.setDelegate(true);
			boneHandleMapParamValue.setInstancePointer(new InstancePointer(boneHandleMap));
		}
		_mergeSkeletonAnimations(sourceParamValue, boneHandleMapParamValue);
	}

	native private void _mergeSkeletonAnimations_CSkeleton_BoneHandleMap(long pNativeObject, long source, long boneHandleMap);
	public void _mergeSkeletonAnimations(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long boneHandleMapParamValue = boneHandleMap.nativeObject.pointer;
		_mergeSkeletonAnimations_CSkeleton_BoneHandleMap(this.nativeObject.pointer, sourceParamValue, boneHandleMapParamValue);
	}
	native private void _mergeSkeletonAnimations_CSkeleton_BoneHandleMap_NoVirtual(long pNativeObject, long source, long boneHandleMap);
	protected void _mergeSkeletonAnimations_NoVirtual(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long boneHandleMapParamValue = boneHandleMap.nativeObject.pointer;
		_mergeSkeletonAnimations_CSkeleton_BoneHandleMap_NoVirtual(this.nativeObject.pointer, sourceParamValue, boneHandleMapParamValue);
	}

	protected  void _buildMapBoneByHandle_CSkeleton_BoneHandleMap_callback(long source, long boneHandleMap)
	{
		com.earthview.world.graphic.Skeleton sourceParamValue = (source == 0L ? null : new com.earthview.world.graphic.Skeleton(CreatedWhenConstruct.CWC_NotToCreate));
		if(sourceParamValue != null)
		{
		sourceParamValue.setDelegate(true);
		sourceParamValue.setInstancePointer(new InstancePointer(source));
		IClassFactory sourceParamValueClassFactory = GlobalClassFactoryMap.get(sourceParamValue.getCppInstanceTypeName());
		if (sourceParamValueClassFactory != null)
		{
			sourceParamValue.setDelegate(true);
			sourceParamValue = (com.earthview.world.graphic.Skeleton)sourceParamValueClassFactory.create();
			sourceParamValue.setDelegate(true);
			sourceParamValue.setInstancePointer(new InstancePointer(source));
		}
		}
		com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMapParamValue = new com.earthview.world.graphic.Skeleton.BoneHandleMap(CreatedWhenConstruct.CWC_NotToCreate);
		boneHandleMapParamValue.setDelegate(true);
		boneHandleMapParamValue.setInstancePointer(new InstancePointer(boneHandleMap));
		IClassFactory boneHandleMapParamValueClassFactory = GlobalClassFactoryMap.get(boneHandleMapParamValue.getCppInstanceTypeName());
		if (boneHandleMapParamValueClassFactory != null)
		{
			boneHandleMapParamValue.setDelegate(true);
			boneHandleMapParamValue = (com.earthview.world.graphic.Skeleton.BoneHandleMap)boneHandleMapParamValueClassFactory.create();
			boneHandleMapParamValue.setDelegate(true);
			boneHandleMapParamValue.setInstancePointer(new InstancePointer(boneHandleMap));
		}
		_buildMapBoneByHandle(sourceParamValue, boneHandleMapParamValue);
	}

	native private void _buildMapBoneByHandle_CSkeleton_BoneHandleMap(long pNativeObject, long source, long boneHandleMap);
	public void _buildMapBoneByHandle(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long boneHandleMapParamValue = boneHandleMap.nativeObject.pointer;
		_buildMapBoneByHandle_CSkeleton_BoneHandleMap(this.nativeObject.pointer, sourceParamValue, boneHandleMapParamValue);
	}
	native private void _buildMapBoneByHandle_CSkeleton_BoneHandleMap_NoVirtual(long pNativeObject, long source, long boneHandleMap);
	protected void _buildMapBoneByHandle_NoVirtual(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long boneHandleMapParamValue = boneHandleMap.nativeObject.pointer;
		_buildMapBoneByHandle_CSkeleton_BoneHandleMap_NoVirtual(this.nativeObject.pointer, sourceParamValue, boneHandleMapParamValue);
	}

	protected  void _buildMapBoneByName_CSkeleton_BoneHandleMap_callback(long source, long boneHandleMap)
	{
		com.earthview.world.graphic.Skeleton sourceParamValue = (source == 0L ? null : new com.earthview.world.graphic.Skeleton(CreatedWhenConstruct.CWC_NotToCreate));
		if(sourceParamValue != null)
		{
		sourceParamValue.setDelegate(true);
		sourceParamValue.setInstancePointer(new InstancePointer(source));
		IClassFactory sourceParamValueClassFactory = GlobalClassFactoryMap.get(sourceParamValue.getCppInstanceTypeName());
		if (sourceParamValueClassFactory != null)
		{
			sourceParamValue.setDelegate(true);
			sourceParamValue = (com.earthview.world.graphic.Skeleton)sourceParamValueClassFactory.create();
			sourceParamValue.setDelegate(true);
			sourceParamValue.setInstancePointer(new InstancePointer(source));
		}
		}
		com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMapParamValue = new com.earthview.world.graphic.Skeleton.BoneHandleMap(CreatedWhenConstruct.CWC_NotToCreate);
		boneHandleMapParamValue.setDelegate(true);
		boneHandleMapParamValue.setInstancePointer(new InstancePointer(boneHandleMap));
		IClassFactory boneHandleMapParamValueClassFactory = GlobalClassFactoryMap.get(boneHandleMapParamValue.getCppInstanceTypeName());
		if (boneHandleMapParamValueClassFactory != null)
		{
			boneHandleMapParamValue.setDelegate(true);
			boneHandleMapParamValue = (com.earthview.world.graphic.Skeleton.BoneHandleMap)boneHandleMapParamValueClassFactory.create();
			boneHandleMapParamValue.setDelegate(true);
			boneHandleMapParamValue.setInstancePointer(new InstancePointer(boneHandleMap));
		}
		_buildMapBoneByName(sourceParamValue, boneHandleMapParamValue);
	}

	native private void _buildMapBoneByName_CSkeleton_BoneHandleMap(long pNativeObject, long source, long boneHandleMap);
	public void _buildMapBoneByName(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long boneHandleMapParamValue = boneHandleMap.nativeObject.pointer;
		_buildMapBoneByName_CSkeleton_BoneHandleMap(this.nativeObject.pointer, sourceParamValue, boneHandleMapParamValue);
	}
	native private void _buildMapBoneByName_CSkeleton_BoneHandleMap_NoVirtual(long pNativeObject, long source, long boneHandleMap);
	protected void _buildMapBoneByName_NoVirtual(com.earthview.world.graphic.Skeleton source, com.earthview.world.graphic.Skeleton.BoneHandleMap boneHandleMap)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long boneHandleMapParamValue = boneHandleMap.nativeObject.pointer;
		_buildMapBoneByName_CSkeleton_BoneHandleMap_NoVirtual(this.nativeObject.pointer, sourceParamValue, boneHandleMapParamValue);
	}

	native private void loadImpl_void(long pNativeObject);
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

	public Skeleton(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Skeleton(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_getAnimationContainerPtr_void(long pNativeObject, String method);
	native protected void register_createBone_void(long pNativeObject, String method);
	native protected void register_createBone_ev_uint16(long pNativeObject, String method);
	native protected void register_createBone_EVString(long pNativeObject, String method);
	native protected void register_createBone_EVString_ev_uint16(long pNativeObject, String method);
	native protected void register_getNumBones_void(long pNativeObject, String method);
	native protected void register_getRootBone_void(long pNativeObject, String method);
	native protected void register_getRootBoneIterator_void(long pNativeObject, String method);
	native protected void register_getBoneIterator_void(long pNativeObject, String method);
	native protected void register_getBone_ev_uint16(long pNativeObject, String method);
	native protected void register_getBone_EVString(long pNativeObject, String method);
	native protected void register_hasBone_EVString(long pNativeObject, String method);
	native protected void register_setBindingPose_void(long pNativeObject, String method);
	native protected void register_reset_ev_bool(long pNativeObject, String method);
	native protected void register_reset_void(long pNativeObject, String method);
	native protected void register_createAnimation_EVString_Real(long pNativeObject, String method);
	native protected void register_getAnimation_EVString_LinkedSkeletonAnimationSource(long pNativeObject, String method);
	native protected void register_getAnimation_EVString(long pNativeObject, String method);
	native protected void register__getAnimationImpl_EVString_LinkedSkeletonAnimationSource(long pNativeObject, String method);
	native protected void register__getAnimationImpl_EVString(long pNativeObject, String method);
	native protected void register_hasAnimation_EVString(long pNativeObject, String method);
	native protected void register_removeAnimation_EVString(long pNativeObject, String method);
	native protected void register_setAnimationState_CAnimationStateSet(long pNativeObject, String method);
	native protected void register__initAnimationState_CAnimationStateSet(long pNativeObject, String method);
	native protected void register__refreshAnimationState_CAnimationStateSet(long pNativeObject, String method);
	native protected void register__getBoneMatrices_CMatrix4(long pNativeObject, String method);
	native protected void register__getBoneMatrices_CMatrix4_ev_uint32(long pNativeObject, String method);
	native protected void register_getNumAnimations_void(long pNativeObject, String method);
	native protected void register_getAnimation_ev_uint16(long pNativeObject, String method);
	native protected void register_getBlendMode_void(long pNativeObject, String method);
	native protected void register_setBlendMode_SkeletonAnimationBlendMode(long pNativeObject, String method);
	native protected void register__updateTransforms_void(long pNativeObject, String method);
	native protected void register_optimiseAllAnimations_ev_bool(long pNativeObject, String method);
	native protected void register_optimiseAllAnimations_void(long pNativeObject, String method);
	native protected void register_addLinkedSkeletonAnimationSource_EVString_Real(long pNativeObject, String method);
	native protected void register_addLinkedSkeletonAnimationSource_EVString(long pNativeObject, String method);
	native protected void register_removeAllLinkedSkeletonAnimationSources_void(long pNativeObject, String method);
	native protected void register_getLinkedSkeletonAnimationSourceIterator_void(long pNativeObject, String method);
	native protected void register__notifyManualBonesDirty_void(long pNativeObject, String method);
	native protected void register__notifyManualBoneStateChange_CBone(long pNativeObject, String method);
	native protected void register_getManualBonesDirty_void(long pNativeObject, String method);
	native protected void register_hasManualBones_void(long pNativeObject, String method);
	native protected void register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector(long pNativeObject, String method);
	native protected void register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap(long pNativeObject, String method);
	native protected void register__buildMapBoneByHandle_CSkeleton_BoneHandleMap(long pNativeObject, String method);
	native protected void register__buildMapBoneByName_CSkeleton_BoneHandleMap(long pNativeObject, String method);
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
			this.register_getAnimationContainerPtr_void(this.nativeObject.pointer, "getAnimationContainerPtr_void_callback");
			this.register_createBone_void(this.nativeObject.pointer, "createBone_void_callback");
			this.register_createBone_ev_uint16(this.nativeObject.pointer, "createBone_ev_uint16_callback");
			this.register_createBone_EVString(this.nativeObject.pointer, "createBone_EVString_callback");
			this.register_createBone_EVString_ev_uint16(this.nativeObject.pointer, "createBone_EVString_ev_uint16_callback");
			this.register_getNumBones_void(this.nativeObject.pointer, "getNumBones_void_callback");
			this.register_getRootBone_void(this.nativeObject.pointer, "getRootBone_void_callback");
			this.register_getRootBoneIterator_void(this.nativeObject.pointer, "getRootBoneIterator_void_callback");
			this.register_getBoneIterator_void(this.nativeObject.pointer, "getBoneIterator_void_callback");
			this.register_getBone_ev_uint16(this.nativeObject.pointer, "getBone_ev_uint16_callback");
			this.register_getBone_EVString(this.nativeObject.pointer, "getBone_EVString_callback");
			this.register_hasBone_EVString(this.nativeObject.pointer, "hasBone_EVString_callback");
			this.register_setBindingPose_void(this.nativeObject.pointer, "setBindingPose_void_callback");
			this.register_reset_ev_bool(this.nativeObject.pointer, "reset_ev_bool_callback");
			this.register_reset_void(this.nativeObject.pointer, "reset_void_callback");
			this.register_createAnimation_EVString_Real(this.nativeObject.pointer, "createAnimation_EVString_Real_callback");
			this.register_getAnimation_EVString_LinkedSkeletonAnimationSource(this.nativeObject.pointer, "getAnimation_EVString_LinkedSkeletonAnimationSource_callback");
			this.register_getAnimation_EVString(this.nativeObject.pointer, "getAnimation_EVString_callback");
			this.register__getAnimationImpl_EVString_LinkedSkeletonAnimationSource(this.nativeObject.pointer, "_getAnimationImpl_EVString_LinkedSkeletonAnimationSource_callback");
			this.register__getAnimationImpl_EVString(this.nativeObject.pointer, "_getAnimationImpl_EVString_callback");
			this.register_hasAnimation_EVString(this.nativeObject.pointer, "hasAnimation_EVString_callback");
			this.register_removeAnimation_EVString(this.nativeObject.pointer, "removeAnimation_EVString_callback");
			this.register_setAnimationState_CAnimationStateSet(this.nativeObject.pointer, "setAnimationState_CAnimationStateSet_callback");
			this.register__initAnimationState_CAnimationStateSet(this.nativeObject.pointer, "_initAnimationState_CAnimationStateSet_callback");
			this.register__refreshAnimationState_CAnimationStateSet(this.nativeObject.pointer, "_refreshAnimationState_CAnimationStateSet_callback");
			this.register__getBoneMatrices_CMatrix4(this.nativeObject.pointer, "_getBoneMatrices_CMatrix4_callback");
			this.register__getBoneMatrices_CMatrix4_ev_uint32(this.nativeObject.pointer, "_getBoneMatrices_CMatrix4_ev_uint32_callback");
			this.register_getNumAnimations_void(this.nativeObject.pointer, "getNumAnimations_void_callback");
			this.register_getAnimation_ev_uint16(this.nativeObject.pointer, "getAnimation_ev_uint16_callback");
			this.register_getBlendMode_void(this.nativeObject.pointer, "getBlendMode_void_callback");
			this.register_setBlendMode_SkeletonAnimationBlendMode(this.nativeObject.pointer, "setBlendMode_SkeletonAnimationBlendMode_callback");
			this.register__updateTransforms_void(this.nativeObject.pointer, "_updateTransforms_void_callback");
			this.register_optimiseAllAnimations_ev_bool(this.nativeObject.pointer, "optimiseAllAnimations_ev_bool_callback");
			this.register_optimiseAllAnimations_void(this.nativeObject.pointer, "optimiseAllAnimations_void_callback");
			this.register_addLinkedSkeletonAnimationSource_EVString_Real(this.nativeObject.pointer, "addLinkedSkeletonAnimationSource_EVString_Real_callback");
			this.register_addLinkedSkeletonAnimationSource_EVString(this.nativeObject.pointer, "addLinkedSkeletonAnimationSource_EVString_callback");
			this.register_removeAllLinkedSkeletonAnimationSources_void(this.nativeObject.pointer, "removeAllLinkedSkeletonAnimationSources_void_callback");
			this.register_getLinkedSkeletonAnimationSourceIterator_void(this.nativeObject.pointer, "getLinkedSkeletonAnimationSourceIterator_void_callback");
			this.register__notifyManualBonesDirty_void(this.nativeObject.pointer, "_notifyManualBonesDirty_void_callback");
			this.register__notifyManualBoneStateChange_CBone(this.nativeObject.pointer, "_notifyManualBoneStateChange_CBone_callback");
			this.register_getManualBonesDirty_void(this.nativeObject.pointer, "getManualBonesDirty_void_callback");
			this.register_hasManualBones_void(this.nativeObject.pointer, "hasManualBones_void_callback");
			this.register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector(this.nativeObject.pointer, "_mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_callback");
			this.register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap(this.nativeObject.pointer, "_mergeSkeletonAnimations_CSkeleton_BoneHandleMap_callback");
			this.register__buildMapBoneByHandle_CSkeleton_BoneHandleMap(this.nativeObject.pointer, "_buildMapBoneByHandle_CSkeleton_BoneHandleMap_callback");
			this.register__buildMapBoneByName_CSkeleton_BoneHandleMap(this.nativeObject.pointer, "_buildMapBoneByName_CSkeleton_BoneHandleMap_callback");
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
	
	public static Skeleton fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Skeleton obj = null;
 		if(baseObj instanceof Skeleton)
		{
			obj = (Skeleton)baseObj;
		} else {
			obj = new Skeleton(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSkeleton");
			obj.increaseCast();
		}

		return obj;
	}
}
