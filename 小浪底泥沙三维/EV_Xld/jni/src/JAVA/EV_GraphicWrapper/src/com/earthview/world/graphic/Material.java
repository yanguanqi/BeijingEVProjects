package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 压缩对象的渲染属性
 */
public class Material extends com.earthview.world.graphic.Resource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CMaterial", new MaterialClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCMaterialProxy", new MaterialClassFactory());
	}

	///typedef vector<EarthView::World::Graphic::CTechnique*> EarthView::World::Graphic::CMaterial::Techniques;
	public static class Techniques extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMaterial::Techniques", new TechniquesClassFactory());
		}

		public Techniques() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("Techniques", null);
		}

		native private void push_back_CTechnique(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.Technique> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CTechnique(this.nativeObject.pointer, ref_tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.Technique> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Technique> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Technique>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.Technique> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Technique> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Technique>(new InstancePointer(returnValue));
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
		public Techniques(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Techniques(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Techniques fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Techniques obj = null;
 			if(baseObj instanceof Techniques)
			{
				obj = (Techniques)baseObj;
			} else {
				obj = new Techniques(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "Techniques");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TechniquesClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Techniques emptyInstance = new Techniques(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void prepareImpl_void(long pNativeObject);
	/**
	 * 从EarthView::World::Graphic::CResource类重载内部执行'准备'行为
	 * @param  
	 */
	public void prepareImpl()
	{
		prepareImpl_void(this.nativeObject.pointer);
	}
	native private void prepareImpl_void_NoVirtual(long pNativeObject);
	protected void prepareImpl_NoVirtual()
	{
		prepareImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void unprepareImpl_void(long pNativeObject);
	/**
	 * 从EarthView::World::Graphic::CResource类重载内部执行'反准备'行为
	 * @param  
	 */
	public void unprepareImpl()
	{
		unprepareImpl_void(this.nativeObject.pointer);
	}
	native private void unprepareImpl_void_NoVirtual(long pNativeObject);
	protected void unprepareImpl_NoVirtual()
	{
		unprepareImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void loadImpl_void(long pNativeObject);
	/**
	 * 从EarthView::World::Graphic::CResource类重载内部执行'加载'行为
	 * @param  
	 */
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
	/**
	 * 从EarthView::World::Graphic::CResource类重载内部执行'卸载'行为
	 * @param  
	 */
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
	/**
	 * 从EarthView::World::Graphic::CResource类重载计算资源的大小
	 * @param  
	 */
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

	/**
	 * 构造函数使用资源管理的创建方法
	 * @param creator 指向资源管理的指针
	 * @param name 资源的名称
	 * @param handle 
	 * @param group 资源组的名称
	 * @param isManual 是否手动下载资源
	 * @param loader 指向手动资源下载的指针
	 */
	public Material(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader) {
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
		Create("JCMaterialProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Material".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数使用资源管理的创建方法
	 * @param creator 指向资源管理的指针
	 * @param name 资源的名称
	 * @param handle 
	 * @param group 资源组的名称
	 * @param isManual 是否手动下载资源
	 */
	public Material(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual) {
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
		Create("JCMaterialProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Material".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数使用资源管理的创建方法
	 * @param creator 指向资源管理的指针
	 * @param name 资源的名称
	 * @param handle 
	 * @param group 资源组的名称
	 */
	public Material(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group) {
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
		Create("JCMaterialProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Material".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long OperatorAssign_CMaterial(long pNativeObject, long rhs);
	/**
	 * 操作符'='重载
	 * @param rhs 
	 */
	public com.earthview.world.graphic.Material OperatorAssign(com.earthview.world.graphic.Material rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorAssign_CMaterial(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.graphic.Material __returnValue = new com.earthview.world.graphic.Material(CreatedWhenConstruct.CWC_NotToCreate, "CMaterial");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Material)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterial");
		}
		return __returnValue;
	}
	native private boolean isTransparent_void(long pNativeObject);
	/**
	 * 判断材质是否是透明的
	 * @param  
	 */
	public boolean isTransparent()
	{
		boolean returnValue = isTransparent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setReceiveShadows_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置使用材质的对象是否会接收阴影透明对象不接收阴影
	 * @param enabled 
	 */
	public void setReceiveShadows(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setReceiveShadows_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getReceiveShadows_void(long pNativeObject);
	/**
	 * 获得使用材质的对象是否接收阴影
	 * @param  
	 */
	public boolean getReceiveShadows()
	{
		boolean returnValue = getReceiveShadows_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTransparencyCastsShadows_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置使用材质的透明对象是否投射阴影
	 * @param enabled 
	 */
	public void setTransparencyCastsShadows(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setTransparencyCastsShadows_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getTransparencyCastsShadows_void(long pNativeObject);
	/**
	 * 获取使用材质的透明对象是否投射阴影
	 * @param  
	 */
	public boolean getTransparencyCastsShadows()
	{
		boolean returnValue = getTransparencyCastsShadows_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long createTechnique_void(long pNativeObject);
	/**
	 * 为材质创建一个新的技术
	 * @param  
	 */
	public com.earthview.world.graphic.Technique createTechnique()
	{
		long returnValue = createTechnique_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}
	native private long getTechnique_ev_uint16(long pNativeObject, int index);
	/**
	 * 获得技术的索引
	 * @param index 索引
	 */
	public com.earthview.world.graphic.Technique getTechnique(int index)
	{
		int indexParamValue = index;
		long returnValue = getTechnique_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}
	native private long getTechnique_EVString(long pNativeObject, String name);
	/**
	 * 查找技术的名称如果技术的名称没有找到，则返回0
	 * @param name 技术的名称
	 * @return 技术的名称
	 */
	public com.earthview.world.graphic.Technique getTechnique(String name)
	{
		String nameParamValue = name;
		long returnValue = getTechnique_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}
	native private int getNumTechniques_void(long pNativeObject);
	/**
	 * 获得技术的数量
	 * @param  
	 */
	public int getNumTechniques()
	{
		int returnValue = getNumTechniques_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void removeTechnique_ev_uint16(long pNativeObject, int index);
	/**
	 * 移除指定索引的技术
	 * @param index 索引
	 */
	public void removeTechnique(int index)
	{
		int indexParamValue = index;
		removeTechnique_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeAllTechniques_void(long pNativeObject);
	/**
	 * 去除材质中所有的技术
	 * @param  
	 */
	public void removeAllTechniques()
	{
		removeAllTechniques_void(this.nativeObject.pointer);
	}
	public static class TechniqueIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMaterial::TechniqueIterator", new TechniqueIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst 
		 */
		public TechniqueIterator(com.earthview.world.graphic.Material.Techniques vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("TechniqueIterator", list);
		}

		/**
		 * 构造函数
		 * @param rhs 
		 */
		public TechniqueIterator(com.earthview.world.graphic.Material.TechniqueIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("TechniqueIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前值的指针
		 * @param  
		 * @return 当前值
		 */
		public com.earthview.world.graphic.Technique getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTechnique");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.Technique next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTechnique");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首值的指针
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.Technique getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTechnique");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.Technique getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTechnique");
			}
			return __returnValue;
		}
		public TechniqueIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TechniqueIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TechniqueIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TechniqueIterator obj = null;
 			if(baseObj instanceof TechniqueIterator)
			{
				obj = (TechniqueIterator)baseObj;
			} else {
				obj = new TechniqueIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TechniqueIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TechniqueIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TechniqueIterator emptyInstance = new TechniqueIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getTechniqueIterator_void(long pNativeObject);
	/**
	 * 获得材质中技术的迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.Material.TechniqueIterator getTechniqueIterator()
	{
		long returnValue = getTechniqueIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Material.TechniqueIterator __returnValue = new com.earthview.world.graphic.Material.TechniqueIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TechniqueIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Material.TechniqueIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TechniqueIterator");
		}
		return __returnValue;
	}
	native private long getSupportedTechniqueIterator_void(long pNativeObject);
	/**
	 * 获得被支持的技术的迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.Material.TechniqueIterator getSupportedTechniqueIterator()
	{
		long returnValue = getSupportedTechniqueIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Material.TechniqueIterator __returnValue = new com.earthview.world.graphic.Material.TechniqueIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TechniqueIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Material.TechniqueIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TechniqueIterator");
		}
		return __returnValue;
	}
	native private long getSupportedTechnique_ev_uint16(long pNativeObject, int index);
	/**
	 * 获得被支持的指定索引的技术
	 * @param index 索引
	 */
	public com.earthview.world.graphic.Technique getSupportedTechnique(int index)
	{
		int indexParamValue = index;
		long returnValue = getSupportedTechnique_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}
	native private int getNumSupportedTechniques_void(long pNativeObject);
	/**
	 * 获得被支持的技术的数量
	 * @param  
	 */
	public int getNumSupportedTechniques()
	{
		int returnValue = getNumSupportedTechniques_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getUnsupportedTechniquesExplanation_void(long pNativeObject);
	/**
	 * 获得技术不被支持的原因
	 * @param  
	 */
	public StringPointer getUnsupportedTechniquesExplanation()
	{
		long returnValue = getUnsupportedTechniquesExplanation_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getNumLodLevels_ev_uint16(long pNativeObject, int schemeIndex);
	/**
	 * 获得已给方案中材质的细节等级的数量
	 * @param schemeIndex 方案索引
	 */
	public int getNumLodLevels(int schemeIndex)
	{
		int schemeIndexParamValue = schemeIndex;
		int returnValue = getNumLodLevels_ev_uint16(this.nativeObject.pointer, schemeIndexParamValue);
		return returnValue;
	}
	native private int getNumLodLevels_EVString(long pNativeObject, String schemeName);
	/**
	 * 获得已给方案中材质的细节等级的数量
	 * @param schemeName 方案名称
	 */
	public int getNumLodLevels(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		int returnValue = getNumLodLevels_EVString(this.nativeObject.pointer, schemeNameParamValue);
		return returnValue;
	}
	native private long getBestTechnique_ev_uint16_CRenderable(long pNativeObject, int lodIndex, long rend);
	/**
	 * 获得最好的支持技术
	 * @param lodIndex 材质的细节等级索引
	 * @param rend 指向可渲染对象的指针
	 * @return 技术
	 */
	public com.earthview.world.graphic.Technique getBestTechnique(int lodIndex, com.earthview.world.graphic.Renderable rend)
	{
		int lodIndexParamValue = lodIndex;
		long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
		long returnValue = getBestTechnique_ev_uint16_CRenderable(this.nativeObject.pointer, lodIndexParamValue, rendParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}
	native private long getBestTechnique_ev_uint16(long pNativeObject, int lodIndex);
	/**
	 * 获得最好的支持技术
	 * @param lodIndex 材质的细节等级索引
	 * @return 技术
	 */
	public com.earthview.world.graphic.Technique getBestTechnique(int lodIndex)
	{
		int lodIndexParamValue = lodIndex;
		long returnValue = getBestTechnique_ev_uint16(this.nativeObject.pointer, lodIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}
	native private long getBestTechnique_void(long pNativeObject);
	/**
	 * 获得最好的支持技术
	 * @param  
	 * @return 技术
	 */
	public com.earthview.world.graphic.Technique getBestTechnique()
	{
		long returnValue = getBestTechnique_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}
	native private long ev_clone_EVString_ev_bool_EVString(long pNativeObject, String newName, boolean changeGroup, String newGroup);
	/**
	 * 材质克隆
	 * @param newName 克隆材质的新名字
	 * @param changeGroup 如果为true,资源组被改变，否则不改变
	 * @param newGroup 分配的新组（如果资源组被改变）
	 */
	public com.earthview.world.graphic.MaterialPtr ev_clone(String newName, boolean changeGroup, String newGroup)
	{
		String newNameParamValue = newName;
		boolean changeGroupParamValue = changeGroup;
		String newGroupParamValue = newGroup;
		long returnValue = ev_clone_EVString_ev_bool_EVString(this.nativeObject.pointer, newNameParamValue, changeGroupParamValue, newGroupParamValue);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private long ev_clone_EVString_ev_bool(long pNativeObject, String newName, boolean changeGroup);
	/**
	 * 材质克隆
	 * @param newName 克隆材质的新名字
	 * @param changeGroup 如果为true,资源组被改变，否则不改变
	 */
	public com.earthview.world.graphic.MaterialPtr ev_clone(String newName, boolean changeGroup)
	{
		String newNameParamValue = newName;
		boolean changeGroupParamValue = changeGroup;
		long returnValue = ev_clone_EVString_ev_bool(this.nativeObject.pointer, newNameParamValue, changeGroupParamValue);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private long ev_clone_EVString(long pNativeObject, String newName);
	/**
	 * 材质克隆
	 * @param newName 克隆材质的新名字
	 */
	public com.earthview.world.graphic.MaterialPtr ev_clone(String newName)
	{
		String newNameParamValue = newName;
		long returnValue = ev_clone_EVString(this.nativeObject.pointer, newNameParamValue);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private long cloneUnmanaged_EVString(long pNativeObject, String newName);
	public com.earthview.world.graphic.MaterialPtr cloneUnmanaged(String newName)
	{
		String newNameParamValue = newName;
		long returnValue = cloneUnmanaged_EVString(this.nativeObject.pointer, newNameParamValue);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private void copyDetailsTo_CMaterialPtr(long pNativeObject, long mat);
	/**
	 * 拷贝材质的细节到另一个材质，保留目标材质的句柄和名称
	 * @param mat 获得材质设置的引用
	 */
	public void copyDetailsTo(com.earthview.world.graphic.MaterialPtr mat)
	{
		long matParamValue = mat.nativeObject.pointer;
		copyDetailsTo_CMaterialPtr(this.nativeObject.pointer, matParamValue);
	}
	native private void compile_ev_bool(long pNativeObject, boolean autoManageTextureUnits);
	/**
	 * 编译材质
	 * @param autoManageTextureUnits 如果设置为true,当固定功能通路拥有的CTextureUnitState入口超过了card拥有的纹理单元，通路就会被拆分成多个；如果设置为false,出现这个状况就会抛出异常
	 */
	public void compile(boolean autoManageTextureUnits)
	{
		boolean autoManageTextureUnitsParamValue = autoManageTextureUnits;
		compile_ev_bool(this.nativeObject.pointer, autoManageTextureUnitsParamValue);
	}
	native private void compile_void(long pNativeObject);
	/**
	 * 编译材质
	 * @param  
	 */
	public void compile()
	{
		compile_void(this.nativeObject.pointer);
	}
	native private void setPointSize_Real(long pNativeObject, double ps);
	/**
	 * 设置每个技术中每个通路里点大小的属性
	 * @param ps 点的大小
	 */
	public void setPointSize(double ps)
	{
		double psParamValue = ps;
		setPointSize_Real(this.nativeObject.pointer, psParamValue);
	}
	native private void setAmbient_Real_Real_Real(long pNativeObject, double red, double green, double blue);
	/**
	 * 设置每个技术中每个通路里环境光的反射率
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 */
	public void setAmbient(double red, double green, double blue)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		setAmbient_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setAmbient_CColourValue(long pNativeObject, long ambient);
	/**
	 * 设置每个技术中每个通路里环境光的反射率
	 * @param ambient 环境光
	 */
	public void setAmbient(com.earthview.world.graphic.ColourValue ambient)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		setAmbient_CColourValue(this.nativeObject.pointer, ambientParamValue);
	}
	native private void setDiffuse_Real_Real_Real_Real(long pNativeObject, double red, double green, double blue, double alpha);
	/**
	 * 设置每个技术中每个通路里漫反射率
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 * @param alpha 
	 */
	public void setDiffuse(double red, double green, double blue, double alpha)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		double alphaParamValue = alpha;
		setDiffuse_Real_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setDiffuse_CColourValue(long pNativeObject, long diffuse);
	/**
	 * 设置每个技术中每个通路里漫反射率
	 * @param diffuse 漫反射
	 */
	public void setDiffuse(com.earthview.world.graphic.ColourValue diffuse)
	{
		long diffuseParamValue = diffuse.nativeObject.pointer;
		setDiffuse_CColourValue(this.nativeObject.pointer, diffuseParamValue);
	}
	native private void setSpecular_Real_Real_Real_Real(long pNativeObject, double red, double green, double blue, double alpha);
	/**
	 * 设置每个技术中每个通路里镜面反射率
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 * @param alpha 
	 */
	public void setSpecular(double red, double green, double blue, double alpha)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		double alphaParamValue = alpha;
		setSpecular_Real_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setSpecular_CColourValue(long pNativeObject, long specular);
	/**
	 * 设置每个技术中每个通路里镜面反射率
	 * @param specular 漫反射
	 */
	public void setSpecular(com.earthview.world.graphic.ColourValue specular)
	{
		long specularParamValue = specular.nativeObject.pointer;
		setSpecular_CColourValue(this.nativeObject.pointer, specularParamValue);
	}
	native private void setShininess_Real(long pNativeObject, double val);
	/**
	 * 设置每一个技术中每一个通路的发光属性
	 * @param val 漫反射
	 */
	public void setShininess(double val)
	{
		double valParamValue = val;
		setShininess_Real(this.nativeObject.pointer, valParamValue);
	}
	native private void setSelfIllumination_Real_Real_Real(long pNativeObject, double red, double green, double blue);
	/**
	 * 设置每个技术中每个通路自发光的颜色
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 */
	public void setSelfIllumination(double red, double green, double blue)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		setSelfIllumination_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setSelfIllumination_CColourValue(long pNativeObject, long selfIllum);
	/**
	 * 设置每个技术中每个通路自发光的颜色
	 * @param selfIllum 自我照明
	 */
	public void setSelfIllumination(com.earthview.world.graphic.ColourValue selfIllum)
	{
		long selfIllumParamValue = selfIllum.nativeObject.pointer;
		setSelfIllumination_CColourValue(this.nativeObject.pointer, selfIllumParamValue);
	}
	native private void setDepthCheckEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否每个通路的深度测试是否启用
	 * @param enabled 
	 */
	public void setDepthCheckEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDepthCheckEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setDepthWriteEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否每个通路的深度写入是否启用
	 * @param enabled 
	 */
	public void setDepthWriteEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDepthWriteEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setDepthFunction_CompareFunction(long pNativeObject, int func);
	/**
	 * 当进行深度检查时，深度比较函数
	 * @param func 
	 */
	public void setDepthFunction(com.earthview.world.graphic.CompareFunction func)
	{
		int funcParamValue = func.getValue();
		setDepthFunction_CompareFunction(this.nativeObject.pointer, funcParamValue);
	}
	native private void setColourWriteEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否每个通路的颜色写入是否启用
	 * @param enabled 
	 */
	public void setColourWriteEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setColourWriteEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setCullingMode_CullingMode(long pNativeObject, int mode);
	/**
	 * 设置每个通路的剔除模式
	 * @param mode 模型
	 */
	public void setCullingMode(com.earthview.world.graphic.CullingMode mode)
	{
		int modeParamValue = mode.getValue();
		setCullingMode_CullingMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void setManualCullingMode_ManualCullingMode(long pNativeObject, int mode);
	/**
	 * 设置每个通路的手动剔除模式
	 * @param mode 
	 */
	public void setManualCullingMode(com.earthview.world.graphic.ManualCullingMode mode)
	{
		int modeParamValue = mode.getValue();
		setManualCullingMode_ManualCullingMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void setLightingEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置每一个通路的动态光是否可用
	 * @param enabled 
	 */
	public void setLightingEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setLightingEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setShadingMode_ShadeOptions(long pNativeObject, int mode);
	/**
	 * 设置光照的类型
	 * @param mode 模型
	 */
	public void setShadingMode(com.earthview.world.graphic.ShadeOptions mode)
	{
		int modeParamValue = mode.getValue();
		setShadingMode_ShadeOptions(this.nativeObject.pointer, modeParamValue);
	}
	native private void setFog_ev_bool_FogMode_CColourValue_Real_Real_Real(long pNativeObject, boolean overrideScene, int mode, long colour, double expDensity, double linearStart, double linearEnd);
	/**
	 * 设置每个通路应用的雾模型
	 * @param overrideScene 如果为true,重载场景的雾参数，如果为false,取默认设置
	 * @param mode 雾模型
	 * @param colour 雾的颜色
	 * @param expDensity 雾的密度，在0~1之间
	 * @param linearStart 雾逐渐侵蚀的距离
	 * @param linearEnd 雾变到完全不透明的距离
	 */
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart, double linearEnd)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		double linearEndParamValue = linearEnd;
		setFog_ev_bool_FogMode_CColourValue_Real_Real_Real(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue, linearEndParamValue);
	}
	native private void setFog_ev_bool_FogMode_CColourValue_Real_Real(long pNativeObject, boolean overrideScene, int mode, long colour, double expDensity, double linearStart);
	/**
	 * 设置每个通路应用的雾模型
	 * @param overrideScene 如果为true,重载场景的雾参数，如果为false,取默认设置
	 * @param mode 雾模型
	 * @param colour 雾的颜色
	 * @param expDensity 雾的密度，在0~1之间
	 * @param linearStart 雾逐渐侵蚀的距离
	 */
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		setFog_ev_bool_FogMode_CColourValue_Real_Real(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue);
	}
	native private void setFog_ev_bool_FogMode_CColourValue_Real(long pNativeObject, boolean overrideScene, int mode, long colour, double expDensity);
	/**
	 * 设置每个通路应用的雾模型
	 * @param overrideScene 如果为true,重载场景的雾参数，如果为false,取默认设置
	 * @param mode 雾模型
	 * @param colour 雾的颜色
	 * @param expDensity 雾的密度，在0~1之间
	 */
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		setFog_ev_bool_FogMode_CColourValue_Real(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue, expDensityParamValue);
	}
	native private void setFog_ev_bool_FogMode_CColourValue(long pNativeObject, boolean overrideScene, int mode, long colour);
	/**
	 * 设置每个通路应用的雾模型
	 * @param overrideScene 如果为true,重载场景的雾参数，如果为false,取默认设置
	 * @param mode 雾模型
	 * @param colour 雾的颜色
	 */
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		setFog_ev_bool_FogMode_CColourValue(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue);
	}
	native private void setFog_ev_bool_FogMode(long pNativeObject, boolean overrideScene, int mode);
	/**
	 * 设置每个通路应用的雾模型
	 * @param overrideScene 如果为true,重载场景的雾参数，如果为false,取默认设置
	 * @param mode 雾模型
	 */
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		setFog_ev_bool_FogMode(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue);
	}
	native private void setFog_ev_bool(long pNativeObject, boolean overrideScene);
	/**
	 * 设置每个通路应用的雾模型
	 * @param overrideScene 如果为true,重载场景的雾参数，如果为false,取默认设置
	 */
	public void setFog(boolean overrideScene)
	{
		boolean overrideSceneParamValue = overrideScene;
		setFog_ev_bool(this.nativeObject.pointer, overrideSceneParamValue);
	}
	native private void setDepthBias_ev_real32_ev_real32(long pNativeObject, float constantBias, float slopeScaleBias);
	/**
	 * 设置通路的深度偏移
	 * @param constantBias 常量偏移值
	 * @param slopeScaleBias 相对坡度偏移值
	 */
	public void setDepthBias(float constantBias, float slopeScaleBias)
	{
		float constantBiasParamValue = constantBias;
		float slopeScaleBiasParamValue = slopeScaleBias;
		setDepthBias_ev_real32_ev_real32(this.nativeObject.pointer, constantBiasParamValue, slopeScaleBiasParamValue);
	}
	native private void setTextureFiltering_TextureFilterOptions(long pNativeObject, int filterType);
	/**
	 * 设置技术和通路中每一个纹理单元的纹理过滤
	 * @param filterType 高级过滤类型
	 */
	public void setTextureFiltering(com.earthview.world.graphic.TextureFilterOptions filterType)
	{
		int filterTypeParamValue = filterType.getValue();
		setTextureFiltering_TextureFilterOptions(this.nativeObject.pointer, filterTypeParamValue);
	}
	native private void setTextureAnisotropy_ev_int32(long pNativeObject, int maxAniso);
	/**
	 * 设置纹理的各向异性程度
	 * @param maxAniso 最大各向差异性，在2和硬件所提供的最大值之间，默认值是1
	 */
	public void setTextureAnisotropy(int maxAniso)
	{
		int maxAnisoParamValue = maxAniso;
		setTextureAnisotropy_ev_int32(this.nativeObject.pointer, maxAnisoParamValue);
	}
	native private void setSceneBlending_SceneBlendType(long pNativeObject, int sbt);
	public void setSceneBlending(com.earthview.world.graphic.SceneBlendType sbt)
	{
		int sbtParamValue = sbt.getValue();
		setSceneBlending_SceneBlendType(this.nativeObject.pointer, sbtParamValue);
	}
	native private void setSeparateSceneBlending_SceneBlendType_SceneBlendType(long pNativeObject, int sbt, int sbta);
	public void setSeparateSceneBlending(com.earthview.world.graphic.SceneBlendType sbt, com.earthview.world.graphic.SceneBlendType sbta)
	{
		int sbtParamValue = sbt.getValue();
		int sbtaParamValue = sbta.getValue();
		setSeparateSceneBlending_SceneBlendType_SceneBlendType(this.nativeObject.pointer, sbtParamValue, sbtaParamValue);
	}
	native private void setSceneBlending_SceneBlendFactor_SceneBlendFactor(long pNativeObject, int sourceFactor, int destFactor);
	public void setSceneBlending(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		setSceneBlending_SceneBlendFactor_SceneBlendFactor(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue);
	}
	native private void setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(long pNativeObject, int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha);
	public void setSeparateSceneBlending(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor, com.earthview.world.graphic.SceneBlendFactor sourceFactorAlpha, com.earthview.world.graphic.SceneBlendFactor destFactorAlpha)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		int sourceFactorAlphaParamValue = sourceFactorAlpha.getValue();
		int destFactorAlphaParamValue = destFactorAlpha.getValue();
		setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue);
	}
	native private void _notifyNeedsRecompile_void(long pNativeObject);
	/**
	 * 告诉材质需要重新编译
	 * @param  
	 */
	public void _notifyNeedsRecompile()
	{
		_notifyNeedsRecompile_void(this.nativeObject.pointer);
	}
	native private void setLodLevels_LodValueList(long pNativeObject, long lodValues);
	/**
	 * 设置到细节等级取得效果的距离
	 * @param lodValues 存储细节等级的vector容器
	 */
	public void setLodLevels(com.earthview.world.graphic.LodValueList lodValues)
	{
		long lodValuesParamValue = lodValues.nativeObject.pointer;
		setLodLevels_LodValueList(this.nativeObject.pointer, lodValuesParamValue);
	}
	native private long getLodValueIterator_void(long pNativeObject);
	/**
	 * 获得一个细节等级取得效果的细节等级值列表迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.LodValueIterator getLodValueIterator()
	{
		long returnValue = getLodValueIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.LodValueIterator __returnValue = new com.earthview.world.graphic.LodValueIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LodValueIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LodValueIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LodValueIterator");
		}
		return __returnValue;
	}
	native private long getUserLodValueIterator_void(long pNativeObject);
	public com.earthview.world.graphic.LodValueIterator getUserLodValueIterator()
	{
		long returnValue = getUserLodValueIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.LodValueIterator __returnValue = new com.earthview.world.graphic.LodValueIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LodValueIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LodValueIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LodValueIterator");
		}
		return __returnValue;
	}
	native private int getLodIndex_Real(long pNativeObject, double value);
	/**
	 * 获得细节等级索引
	 * @param value 已给的值
	 */
	public int getLodIndex(double value)
	{
		double valueParamValue = value;
		int returnValue = getLodIndex_Real(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private long getLodStrategy_void(long pNativeObject);
	/**
	 * 获得材质使用的细节等级的策略
	 * @param  
	 */
	public com.earthview.world.graphic.LodStrategy getLodStrategy()
	{
		long returnValue = getLodStrategy_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LodStrategy __returnValue = new com.earthview.world.graphic.LodStrategy(CreatedWhenConstruct.CWC_NotToCreate, "CLodStrategy");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LodStrategy)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLodStrategy");
		}
		return __returnValue;
	}
	native private void setLodStrategy_CLodStrategy(long pNativeObject, long ref_lodStrategy);
	/**
	 * 设置材质使用的细节等级的策略
	 * @param  
	 */
	public void setLodStrategy(com.earthview.world.graphic.LodStrategy ref_lodStrategy)
	{
		long ref_lodStrategyParamValue = (ref_lodStrategy == null ? 0L : ref_lodStrategy.nativeObject.pointer);
		setLodStrategy_CLodStrategy(this.nativeObject.pointer, ref_lodStrategyParamValue);
	}
	native private void touch_void(long pNativeObject);
	public void touch()
	{
		touch_void(this.nativeObject.pointer);
	}
	native private void touch_void_NoVirtual(long pNativeObject);
	protected void touch_NoVirtual()
	{
		touch_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean applyTextureAliases_CommonStringPairList_ev_bool(long pNativeObject, long aliasList, boolean apply);
	/**
	 * 应用纹理别名
	 * @param aliasList 纹理名称键值对
	 * @param apply true，应用；false，只匹配别名并不应用
	 * @return 假如匹配的纹理别名找到了，则返回true，否则返回false
	 */
	public boolean applyTextureAliases(com.earthview.world.core.CommonStringPairList aliasList, boolean apply)
	{
		long aliasListParamValue = aliasList.nativeObject.pointer;
		boolean applyParamValue = apply;
		boolean returnValue = applyTextureAliases_CommonStringPairList_ev_bool(this.nativeObject.pointer, aliasListParamValue, applyParamValue);
		return returnValue;
	}
	native private boolean applyTextureAliases_CommonStringPairList(long pNativeObject, long aliasList);
	public boolean applyTextureAliases(com.earthview.world.core.CommonStringPairList aliasList)
	{
		long aliasListParamValue = aliasList.nativeObject.pointer;
		boolean returnValue = applyTextureAliases_CommonStringPairList(this.nativeObject.pointer, aliasListParamValue);
		return returnValue;
	}
	native private boolean getCompilationRequired_void(long pNativeObject);
	/**
	 * 判断材质编辑的状态
	 * @param  
	 * @return 如果材质需要重新编辑返回true
	 */
	public boolean getCompilationRequired()
	{
		boolean returnValue = getCompilationRequired_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Material(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Material(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Material fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Material obj = null;
 		if(baseObj instanceof Material)
		{
			obj = (Material)baseObj;
		} else {
			obj = new Material(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMaterial");
			obj.increaseCast();
		}

		return obj;
	}
}
