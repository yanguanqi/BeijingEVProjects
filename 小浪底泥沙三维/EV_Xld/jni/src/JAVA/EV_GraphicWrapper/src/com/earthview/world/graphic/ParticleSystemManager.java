package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 粒子系统管理器
 */
public class ParticleSystemManager extends com.earthview.world.graphic.ScriptLoader {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager", new ParticleSystemManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCParticleSystemManagerProxy", new ParticleSystemManagerClassFactory());
	}

	public static class ParticleTemplateMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap", new ParticleTemplateMapClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public ParticleTemplateMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ParticleTemplateMap", null);
		}

		native private boolean push_EVString_CParticleSystem(long pNativeObject, String key, long ref_val);
		/**
		 * 在map容器中添加元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.ParticleSystem> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_CParticleSystem(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_EVString(long pNativeObject, String key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(String key)
		{
			String keyParamValue = key;
			boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_EVString(long pNativeObject, String key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleSystem> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ParticleSystem> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleSystem>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleSystem> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ParticleSystem> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleSystem>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_EVString(long pNativeObject, String key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(String key)
		{
			String keyParamValue = key;
			erase_EVString(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回容器的大小
		 * @param  
		 * @return 容器的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空容器
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断容器是否为空
		 * @param  
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public ParticleTemplateMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ParticleTemplateMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ParticleTemplateMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ParticleTemplateMap obj = null;
 			if(baseObj instanceof ParticleTemplateMap)
			{
				obj = (ParticleTemplateMap)baseObj;
			} else {
				obj = new ParticleTemplateMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ParticleTemplateMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ParticleTemplateMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ParticleTemplateMap emptyInstance = new ParticleTemplateMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ParticleAffectorFactoryMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap", new ParticleAffectorFactoryMapClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public ParticleAffectorFactoryMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ParticleAffectorFactoryMap", null);
		}

		native private boolean push_EVString_CParticleAffectorFactory(long pNativeObject, String key, long ref_val);
		/**
		 * 在map容器中添加元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.ParticleAffectorFactory> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_CParticleAffectorFactory(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_EVString(long pNativeObject, String key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(String key)
		{
			String keyParamValue = key;
			boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_EVString(long pNativeObject, String key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleAffectorFactory> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ParticleAffectorFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleAffectorFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleAffectorFactory> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ParticleAffectorFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleAffectorFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_EVString(long pNativeObject, String key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(String key)
		{
			String keyParamValue = key;
			erase_EVString(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回容器的大小
		 * @param  
		 * @return 容器的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空容器
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断容器是否为空
		 * @param  
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public ParticleAffectorFactoryMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ParticleAffectorFactoryMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ParticleAffectorFactoryMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ParticleAffectorFactoryMap obj = null;
 			if(baseObj instanceof ParticleAffectorFactoryMap)
			{
				obj = (ParticleAffectorFactoryMap)baseObj;
			} else {
				obj = new ParticleAffectorFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ParticleAffectorFactoryMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ParticleAffectorFactoryMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ParticleAffectorFactoryMap emptyInstance = new ParticleAffectorFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ParticleEmitterFactoryMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap", new ParticleEmitterFactoryMapClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public ParticleEmitterFactoryMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ParticleEmitterFactoryMap", null);
		}

		native private boolean push_EVString_CParticleEmitterFactory(long pNativeObject, String key, long ref_val);
		/**
		 * 在map容器中添加元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.ParticleEmitterFactory> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_CParticleEmitterFactory(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_EVString(long pNativeObject, String key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(String key)
		{
			String keyParamValue = key;
			boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_EVString(long pNativeObject, String key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleEmitterFactory> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ParticleEmitterFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleEmitterFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleEmitterFactory> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ParticleEmitterFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleEmitterFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_EVString(long pNativeObject, String key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(String key)
		{
			String keyParamValue = key;
			erase_EVString(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回容器的大小
		 * @param  
		 * @return 容器的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空容器
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断容器是否为空
		 * @param  
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public ParticleEmitterFactoryMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ParticleEmitterFactoryMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ParticleEmitterFactoryMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ParticleEmitterFactoryMap obj = null;
 			if(baseObj instanceof ParticleEmitterFactoryMap)
			{
				obj = (ParticleEmitterFactoryMap)baseObj;
			} else {
				obj = new ParticleEmitterFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ParticleEmitterFactoryMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ParticleEmitterFactoryMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ParticleEmitterFactoryMap emptyInstance = new ParticleEmitterFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ParticleSystemRendererFactoryMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap", new ParticleSystemRendererFactoryMapClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public ParticleSystemRendererFactoryMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ParticleSystemRendererFactoryMap", null);
		}

		native private boolean push_EVString_CParticleSystemRendererFactory(long pNativeObject, String key, long ref_val);
		/**
		 * 在map容器中添加元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.ParticleSystemRendererFactory> ref_val)
		{
			String keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_EVString_CParticleSystemRendererFactory(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_EVString(long pNativeObject, String key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(String key)
		{
			String keyParamValue = key;
			boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_EVString(long pNativeObject, String key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleSystemRendererFactory> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ParticleSystemRendererFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleSystemRendererFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleSystemRendererFactory> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ParticleSystemRendererFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleSystemRendererFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_EVString(long pNativeObject, String key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(String key)
		{
			String keyParamValue = key;
			erase_EVString(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回容器的大小
		 * @param  
		 * @return 容器的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空容器
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断容器是否为空
		 * @param  
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public ParticleSystemRendererFactoryMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ParticleSystemRendererFactoryMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ParticleSystemRendererFactoryMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ParticleSystemRendererFactoryMap obj = null;
 			if(baseObj instanceof ParticleSystemRendererFactoryMap)
			{
				obj = (ParticleSystemRendererFactoryMap)baseObj;
			} else {
				obj = new ParticleSystemRendererFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ParticleSystemRendererFactoryMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ParticleSystemRendererFactoryMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ParticleSystemRendererFactoryMap emptyInstance = new ParticleSystemRendererFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public ParticleSystemManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCParticleSystemManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ParticleSystemManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void addEmitterFactory_CParticleEmitterFactory(long pNativeObject, long ref_factory);
	/**
	 * 添加一个新的发射器对象工厂到可用的发射器类型列表中
	 * @param factory 指向EarthView::World::Graphic::CParticleEmitterFactory的指针
	 */
	public void addEmitterFactory(com.earthview.world.graphic.ParticleEmitterFactory ref_factory)
	{
		long ref_factoryParamValue = (ref_factory == null ? 0L : ref_factory.nativeObject.pointer);
		addEmitterFactory_CParticleEmitterFactory(this.nativeObject.pointer, ref_factoryParamValue);
	}
	native private void addAffectorFactory_CParticleAffectorFactory(long pNativeObject, long ref_factory);
	/**
	 * 添加一个新的效果器对象工厂到可用的发射器类型列表中
	 * @param factory 指向EarthView::World::Graphic::CParticleEmitterFactory的指针
	 */
	public void addAffectorFactory(com.earthview.world.graphic.ParticleAffectorFactory ref_factory)
	{
		long ref_factoryParamValue = (ref_factory == null ? 0L : ref_factory.nativeObject.pointer);
		addAffectorFactory_CParticleAffectorFactory(this.nativeObject.pointer, ref_factoryParamValue);
	}
	native private void addRendererFactory_CParticleSystemRendererFactory(long pNativeObject, long ref_factory);
	/**
	 * 注册一个工厂类来创建EarthView::World::Graphic::CParticleSystemRenderer实例
	 * @param factory 指向EarthView::World::Graphic::CParticleSystemRendererFactory的指针
	 */
	public void addRendererFactory(com.earthview.world.graphic.ParticleSystemRendererFactory ref_factory)
	{
		long ref_factoryParamValue = (ref_factory == null ? 0L : ref_factory.nativeObject.pointer);
		addRendererFactory_CParticleSystemRendererFactory(this.nativeObject.pointer, ref_factoryParamValue);
	}
	native private void addTemplate_EVString_CParticleSystem(long pNativeObject, String name, long ref_sysTemplate);
	/**
	 * 添加一个新的粒子系统模板到可用的模板列表中
	 * @param name 模板的名称
	 * @param sysTemplate 指向粒子系统的指针
	 */
	public void addTemplate(String name, com.earthview.world.graphic.ParticleSystem ref_sysTemplate)
	{
		String nameParamValue = name;
		long ref_sysTemplateParamValue = (ref_sysTemplate == null ? 0L : ref_sysTemplate.nativeObject.pointer);
		addTemplate_EVString_CParticleSystem(this.nativeObject.pointer, nameParamValue, ref_sysTemplateParamValue);
	}
	native private void removeTemplate_EVString_ev_bool(long pNativeObject, String name, boolean deleteTemplate);
	/**
	 * 从粒子系统管理中去除掉一个已给的模板
	 * @param name 去除模板的名称
	 * @param deleteTemplate  如果为ture删除模板，否则不删除
	 */
	public void removeTemplate(String name, boolean deleteTemplate)
	{
		String nameParamValue = name;
		boolean deleteTemplateParamValue = deleteTemplate;
		removeTemplate_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, deleteTemplateParamValue);
	}
	native private void removeTemplate_EVString(long pNativeObject, String name);
	/**
	 * 从粒子系统管理中去除掉一个已给的模板
	 * @param name 去除模板的名称
	 */
	public void removeTemplate(String name)
	{
		String nameParamValue = name;
		removeTemplate_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeAllTemplates_ev_bool(long pNativeObject, boolean deleteTemplate);
	/**
	 * 从粒子系统管理中去除所有的模板
	 * @param deleteTemplate 如果为ture删除模板，否则不删除
	 */
	public void removeAllTemplates(boolean deleteTemplate)
	{
		boolean deleteTemplateParamValue = deleteTemplate;
		removeAllTemplates_ev_bool(this.nativeObject.pointer, deleteTemplateParamValue);
	}
	native private void removeAllTemplates_void(long pNativeObject);
	/**
	 * 从粒子系统管理中去除所有的模板
	 * @param  
	 */
	public void removeAllTemplates()
	{
		removeAllTemplates_void(this.nativeObject.pointer);
	}
	native private void removeTemplatesByResourceGroup_EVString(long pNativeObject, String resourceGroup);
	/**
	 * 去除指定资源组的所有模板
	 * @param resourceGroup 删除模板的资源组
	 */
	public void removeTemplatesByResourceGroup(String resourceGroup)
	{
		String resourceGroupParamValue = resourceGroup;
		removeTemplatesByResourceGroup_EVString(this.nativeObject.pointer, resourceGroupParamValue);
	}
	native private long createTemplate_EVString_EVString(long pNativeObject, String name, String resourceGroup);
	/**
	 * 创建一个新的粒子系统模板
	 * @param name 模板的名称
	 * @param resourceGroup 资源组的名称
	 */
	public com.earthview.world.graphic.ParticleSystem createTemplate(String name, String resourceGroup)
	{
		String nameParamValue = name;
		String resourceGroupParamValue = resourceGroup;
		long returnValue = createTemplate_EVString_EVString(this.nativeObject.pointer, nameParamValue, resourceGroupParamValue);
		if(returnValue == 0L) {
			return null;
		}
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
	native private long getTemplate_EVString(long pNativeObject, String name);
	/**
	 * 获得粒子系统模板
	 * @param name 模板的名称
	 */
	public com.earthview.world.graphic.ParticleSystem getTemplate(String name)
	{
		String nameParamValue = name;
		long returnValue = getTemplate_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
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
	native private long _createEmitter_EVString_CParticleSystem(long pNativeObject, String emitterType, long psys);
	/// <summary>
	/// 创建一个新的发射器
	/// </summary>
	/// <param name="emitterType">创建的发射器类型的名称</param>
	/// <param name="psys"><指向粒子系统的指针/param>
	/// <returns></returns>
	public com.earthview.world.graphic.ParticleEmitter _createEmitter(String emitterType, com.earthview.world.graphic.ParticleSystem psys)
	{
		String emitterTypeParamValue = emitterType;
		long psysParamValue = (psys == null ? 0L : psys.nativeObject.pointer);
		long returnValue = _createEmitter_EVString_CParticleSystem(this.nativeObject.pointer, emitterTypeParamValue, psysParamValue);
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
	native private void _destroyEmitter_CParticleEmitter(long pNativeObject, long emitter);
	/**
	 * 销毁一个发射器
	 * @param emitter 指向被销毁发射器的指针
	 */
	public void _destroyEmitter(com.earthview.world.graphic.ParticleEmitter emitter)
	{
		long emitterParamValue = (emitter == null ? 0L : emitter.nativeObject.pointer);
		_destroyEmitter_CParticleEmitter(this.nativeObject.pointer, emitterParamValue);
	}
	native private long _createAffector_EVString_CParticleSystem(long pNativeObject, String affectorType, long psys);
	/// <summary>
	/// 创建一个新的效果器
	/// </summary>
	/// <param name="affectorType">创建的效果器类型的名称</param>
	/// <param name="psys"><指向粒子系统的指针/param>
	/// <returns></returns>
	public com.earthview.world.graphic.ParticleAffector _createAffector(String affectorType, com.earthview.world.graphic.ParticleSystem psys)
	{
		String affectorTypeParamValue = affectorType;
		long psysParamValue = (psys == null ? 0L : psys.nativeObject.pointer);
		long returnValue = _createAffector_EVString_CParticleSystem(this.nativeObject.pointer, affectorTypeParamValue, psysParamValue);
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
	native private void _destroyAffector_CParticleAffector(long pNativeObject, long affector);
	/**
	 * 销毁一个效果器
	 * @param affector 指向被销毁效果器的指针
	 */
	public void _destroyAffector(com.earthview.world.graphic.ParticleAffector affector)
	{
		long affectorParamValue = (affector == null ? 0L : affector.nativeObject.pointer);
		_destroyAffector_CParticleAffector(this.nativeObject.pointer, affectorParamValue);
	}
	native private long _createRenderer_EVString(long pNativeObject, String rendererType);
	/**
	 * 创建一个新的渲染器
	 * @param rendererType 创建的渲染器类型的名称
	 */
	public com.earthview.world.graphic.ParticleSystemRenderer _createRenderer(String rendererType)
	{
		String rendererTypeParamValue = rendererType;
		long returnValue = _createRenderer_EVString(this.nativeObject.pointer, rendererTypeParamValue);
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
	native private void _destroyRenderer_CParticleSystemRenderer(long pNativeObject, long renderer);
	/**
	 * 销毁一个渲染器
	 * @param renderer 指向被销毁渲染器的指针
	 */
	public void _destroyRenderer(com.earthview.world.graphic.ParticleSystemRenderer renderer)
	{
		long rendererParamValue = (renderer == null ? 0L : renderer.nativeObject.pointer);
		_destroyRenderer_CParticleSystemRenderer(this.nativeObject.pointer, rendererParamValue);
	}
	native private void _initialise_void(long pNativeObject);
	/**
	 * 初始化方法
	 * @param  
	 */
	public void _initialise()
	{
		_initialise_void(this.nativeObject.pointer);
	}
	native private long getScriptPatterns_void(long pNativeObject);
	/**
	 * 获得用来查找脚本文件的文件样式
	 * @param  
	 */
	public com.earthview.world.core.StringVector getScriptPatterns()
	{
		long returnValue = getScriptPatterns_void(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate, "StringVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private long getScriptPatterns_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.StringVector getScriptPatterns_NoVirtual()
	{
		long returnValue = getScriptPatterns_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate, "StringVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}

	native private void parseScript_DataStreamPtr_EVString(long pNativeObject, long stream, String groupName);
	/**
	 * 解析脚本文件
	 * @param  
	 */
	public void parseScript(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
	}
	native private void parseScript_DataStreamPtr_EVString_NoVirtual(long pNativeObject, long stream, String groupName);
	protected void parseScript_NoVirtual(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		parseScript_DataStreamPtr_EVString_NoVirtual(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
	}

	native private double getLoadingOrder_void(long pNativeObject);
	/**
	 * 获得文件的下载顺序
	 * @param  
	 */
	public double getLoadingOrder()
	{
		double returnValue = getLoadingOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLoadingOrder_void_NoVirtual(long pNativeObject);
	protected double getLoadingOrder_NoVirtual()
	{
		double returnValue = getLoadingOrder_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap> EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator;
	public static class StringParticleAffectorFactoryPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair", new StringParticleAffectorFactoryPairClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public StringParticleAffectorFactoryPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("StringParticleAffectorFactoryPair", null);
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
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.ParticleAffectorFactory get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ParticleAffectorFactory __returnValue = new com.earthview.world.graphic.ParticleAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate, "CParticleAffectorFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleAffectorFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CParticleAffectorFactory");
			}
			return __returnValue;
		}
		
		native private void set_second_CParticleAffectorFactory (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.ParticleAffectorFactory second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CParticleAffectorFactory(this.nativeObject.pointer, secondParamValue);
		}
		
		public StringParticleAffectorFactoryPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StringParticleAffectorFactoryPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StringParticleAffectorFactoryPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StringParticleAffectorFactoryPair obj = null;
 			if(baseObj instanceof StringParticleAffectorFactoryPair)
			{
				obj = (StringParticleAffectorFactoryPair)baseObj;
			} else {
				obj = new StringParticleAffectorFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "StringParticleAffectorFactoryPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StringParticleAffectorFactoryPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StringParticleAffectorFactoryPair emptyInstance = new StringParticleAffectorFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ParticleAffectorFactoryIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator", new ParticleAffectorFactoryIteratorClassFactory());
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public ParticleAffectorFactoryIterator(com.earthview.world.graphic.ParticleSystemManager.ParticleAffectorFactoryIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ParticleAffectorFactoryIterator", list);
		}

		/**
		 * 构造函数
		 * @param rhs 迭代器对应集合
		 */
		public ParticleAffectorFactoryIterator(com.earthview.world.graphic.ParticleSystemManager.ParticleAffectorFactoryMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ParticleAffectorFactoryIterator", list);
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
		native private String nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public String nextKey()
		{
			String returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.ParticleAffectorFactory nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ParticleAffectorFactory __returnValue = new com.earthview.world.graphic.ParticleAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate, "CParticleAffectorFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleAffectorFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CParticleAffectorFactory");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleAffectorFactory> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.ParticleAffectorFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleAffectorFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.ParticleAffectorFactory next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ParticleAffectorFactory __returnValue = new com.earthview.world.graphic.ParticleAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate, "CParticleAffectorFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleAffectorFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CParticleAffectorFactory");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleAffectorFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleAffectorFactoryPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleAffectorFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleAffectorFactoryPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleAffectorFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleAffectorFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleAffectorFactoryPair");
			}
			return __returnValue;
		}
		public ParticleAffectorFactoryIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ParticleAffectorFactoryIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ParticleAffectorFactoryIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ParticleAffectorFactoryIterator obj = null;
 			if(baseObj instanceof ParticleAffectorFactoryIterator)
			{
				obj = (ParticleAffectorFactoryIterator)baseObj;
			} else {
				obj = new ParticleAffectorFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ParticleAffectorFactoryIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ParticleAffectorFactoryIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ParticleAffectorFactoryIterator emptyInstance = new ParticleAffectorFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap> EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator;
	public static class StringParticleEmitterFactoryPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair", new StringParticleEmitterFactoryPairClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public StringParticleEmitterFactoryPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("StringParticleEmitterFactoryPair", null);
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
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.ParticleEmitterFactory get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ParticleEmitterFactory __returnValue = new com.earthview.world.graphic.ParticleEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate, "CParticleEmitterFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleEmitterFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CParticleEmitterFactory");
			}
			return __returnValue;
		}
		
		native private void set_second_CParticleEmitterFactory (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.ParticleEmitterFactory second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CParticleEmitterFactory(this.nativeObject.pointer, secondParamValue);
		}
		
		public StringParticleEmitterFactoryPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StringParticleEmitterFactoryPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StringParticleEmitterFactoryPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StringParticleEmitterFactoryPair obj = null;
 			if(baseObj instanceof StringParticleEmitterFactoryPair)
			{
				obj = (StringParticleEmitterFactoryPair)baseObj;
			} else {
				obj = new StringParticleEmitterFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "StringParticleEmitterFactoryPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StringParticleEmitterFactoryPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StringParticleEmitterFactoryPair emptyInstance = new StringParticleEmitterFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ParticleEmitterFactoryIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator", new ParticleEmitterFactoryIteratorClassFactory());
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public ParticleEmitterFactoryIterator(com.earthview.world.graphic.ParticleSystemManager.ParticleEmitterFactoryIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ParticleEmitterFactoryIterator", list);
		}

		/**
		 * 构造函数
		 * @param rhs 迭代器对应集合
		 */
		public ParticleEmitterFactoryIterator(com.earthview.world.graphic.ParticleSystemManager.ParticleEmitterFactoryMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ParticleEmitterFactoryIterator", list);
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
		native private String nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public String nextKey()
		{
			String returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.ParticleEmitterFactory nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ParticleEmitterFactory __returnValue = new com.earthview.world.graphic.ParticleEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate, "CParticleEmitterFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleEmitterFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CParticleEmitterFactory");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleEmitterFactory> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.ParticleEmitterFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleEmitterFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.ParticleEmitterFactory next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ParticleEmitterFactory __returnValue = new com.earthview.world.graphic.ParticleEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate, "CParticleEmitterFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleEmitterFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CParticleEmitterFactory");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleEmitterFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleEmitterFactoryPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleEmitterFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleEmitterFactoryPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleEmitterFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleEmitterFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleEmitterFactoryPair");
			}
			return __returnValue;
		}
		public ParticleEmitterFactoryIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ParticleEmitterFactoryIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ParticleEmitterFactoryIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ParticleEmitterFactoryIterator obj = null;
 			if(baseObj instanceof ParticleEmitterFactoryIterator)
			{
				obj = (ParticleEmitterFactoryIterator)baseObj;
			} else {
				obj = new ParticleEmitterFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ParticleEmitterFactoryIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ParticleEmitterFactoryIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ParticleEmitterFactoryIterator emptyInstance = new ParticleEmitterFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap> EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator;
	public static class StringParticleSystemRendererFactoryPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair", new StringParticleSystemRendererFactoryPairClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public StringParticleSystemRendererFactoryPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("StringParticleSystemRendererFactoryPair", null);
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
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.ParticleSystemRendererFactory get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ParticleSystemRendererFactory __returnValue = new com.earthview.world.graphic.ParticleSystemRendererFactory(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystemRendererFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemRendererFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CParticleSystemRendererFactory");
			}
			return __returnValue;
		}
		
		native private void set_second_CParticleSystemRendererFactory (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.ParticleSystemRendererFactory second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CParticleSystemRendererFactory(this.nativeObject.pointer, secondParamValue);
		}
		
		public StringParticleSystemRendererFactoryPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StringParticleSystemRendererFactoryPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StringParticleSystemRendererFactoryPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StringParticleSystemRendererFactoryPair obj = null;
 			if(baseObj instanceof StringParticleSystemRendererFactoryPair)
			{
				obj = (StringParticleSystemRendererFactoryPair)baseObj;
			} else {
				obj = new StringParticleSystemRendererFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "StringParticleSystemRendererFactoryPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StringParticleSystemRendererFactoryPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StringParticleSystemRendererFactoryPair emptyInstance = new StringParticleSystemRendererFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ParticleRendererFactoryIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator", new ParticleRendererFactoryIteratorClassFactory());
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public ParticleRendererFactoryIterator(com.earthview.world.graphic.ParticleSystemManager.ParticleRendererFactoryIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ParticleRendererFactoryIterator", list);
		}

		/**
		 * 构造函数
		 * @param rhs 迭代器对应集合
		 */
		public ParticleRendererFactoryIterator(com.earthview.world.graphic.ParticleSystemManager.ParticleSystemRendererFactoryMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ParticleRendererFactoryIterator", list);
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
		native private String nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public String nextKey()
		{
			String returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.ParticleSystemRendererFactory nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ParticleSystemRendererFactory __returnValue = new com.earthview.world.graphic.ParticleSystemRendererFactory(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystemRendererFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemRendererFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CParticleSystemRendererFactory");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleSystemRendererFactory> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.ParticleSystemRendererFactory> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleSystemRendererFactory>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.ParticleSystemRendererFactory next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ParticleSystemRendererFactory __returnValue = new com.earthview.world.graphic.ParticleSystemRendererFactory(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystemRendererFactory");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemRendererFactory)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CParticleSystemRendererFactory");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleSystemRendererFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleSystemRendererFactoryPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleSystemRendererFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleSystemRendererFactoryPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleSystemRendererFactoryPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleSystemRendererFactoryPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleSystemRendererFactoryPair");
			}
			return __returnValue;
		}
		public ParticleRendererFactoryIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ParticleRendererFactoryIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ParticleRendererFactoryIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ParticleRendererFactoryIterator obj = null;
 			if(baseObj instanceof ParticleRendererFactoryIterator)
			{
				obj = (ParticleRendererFactoryIterator)baseObj;
			} else {
				obj = new ParticleRendererFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ParticleRendererFactoryIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ParticleRendererFactoryIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ParticleRendererFactoryIterator emptyInstance = new ParticleRendererFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getAffectorFactoryIterator_void(long pNativeObject);
	/**
	 * 获得效果器工厂的一个迭代器
	 * @param  
	 * @return 迭代器
	 */
	public com.earthview.world.graphic.ParticleSystemManager.ParticleAffectorFactoryIterator getAffectorFactoryIterator()
	{
		long returnValue = getAffectorFactoryIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ParticleSystemManager.ParticleAffectorFactoryIterator __returnValue = new com.earthview.world.graphic.ParticleSystemManager.ParticleAffectorFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParticleAffectorFactoryIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystemManager.ParticleAffectorFactoryIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParticleAffectorFactoryIterator");
		}
		return __returnValue;
	}
	native private long getEmitterFactoryIterator_void(long pNativeObject);
	/**
	 * 获得发射器工厂的一个迭代器
	 * @param  
	 * @return 迭代器
	 */
	public com.earthview.world.graphic.ParticleSystemManager.ParticleEmitterFactoryIterator getEmitterFactoryIterator()
	{
		long returnValue = getEmitterFactoryIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ParticleSystemManager.ParticleEmitterFactoryIterator __returnValue = new com.earthview.world.graphic.ParticleSystemManager.ParticleEmitterFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParticleEmitterFactoryIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystemManager.ParticleEmitterFactoryIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParticleEmitterFactoryIterator");
		}
		return __returnValue;
	}
	native private long getRendererFactoryIterator_void(long pNativeObject);
	/**
	 * 获得渲染器工厂的一个迭代器
	 * @param  
	 * @return 迭代器
	 */
	public com.earthview.world.graphic.ParticleSystemManager.ParticleRendererFactoryIterator getRendererFactoryIterator()
	{
		long returnValue = getRendererFactoryIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ParticleSystemManager.ParticleRendererFactoryIterator __returnValue = new com.earthview.world.graphic.ParticleSystemManager.ParticleRendererFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParticleRendererFactoryIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystemManager.ParticleRendererFactoryIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParticleRendererFactoryIterator");
		}
		return __returnValue;
	}
	/// typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap> EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator;
	public static class StringParticleTemplateMapPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair", new StringParticleTemplateMapPairClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public StringParticleTemplateMapPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("StringParticleTemplateMapPair", null);
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
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.ParticleSystem get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ParticleSystem __returnValue = new com.earthview.world.graphic.ParticleSystem(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystem");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_second_CParticleSystem (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.ParticleSystem second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CParticleSystem(this.nativeObject.pointer, secondParamValue);
		}
		
		public StringParticleTemplateMapPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public StringParticleTemplateMapPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static StringParticleTemplateMapPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			StringParticleTemplateMapPair obj = null;
 			if(baseObj instanceof StringParticleTemplateMapPair)
			{
				obj = (StringParticleTemplateMapPair)baseObj;
			} else {
				obj = new StringParticleTemplateMapPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "StringParticleTemplateMapPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class StringParticleTemplateMapPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			StringParticleTemplateMapPair emptyInstance = new StringParticleTemplateMapPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ParticleSystemTemplateIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator", new ParticleSystemTemplateIteratorClassFactory());
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public ParticleSystemTemplateIterator(com.earthview.world.graphic.ParticleSystemManager.ParticleSystemTemplateIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("ParticleSystemTemplateIterator", list);
		}

		/**
		 * 构造函数
		 * @param rhs 迭代器对应集合
		 */
		public ParticleSystemTemplateIterator(com.earthview.world.graphic.ParticleSystemManager.ParticleTemplateMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("ParticleSystemTemplateIterator", list);
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
		native private String nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public String nextKey()
		{
			String returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.ParticleSystem nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
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
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ParticleSystem> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.ParticleSystem> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ParticleSystem>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.ParticleSystem next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
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
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleTemplateMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleTemplateMapPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleTemplateMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleTemplateMapPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair __returnValue = new com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair(CreatedWhenConstruct.CWC_NotToCreate, "StringParticleTemplateMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ParticleSystemManager.StringParticleTemplateMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "StringParticleTemplateMapPair");
			}
			return __returnValue;
		}
		public ParticleSystemTemplateIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ParticleSystemTemplateIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ParticleSystemTemplateIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ParticleSystemTemplateIterator obj = null;
 			if(baseObj instanceof ParticleSystemTemplateIterator)
			{
				obj = (ParticleSystemTemplateIterator)baseObj;
			} else {
				obj = new ParticleSystemTemplateIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ParticleSystemTemplateIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ParticleSystemTemplateIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ParticleSystemTemplateIterator emptyInstance = new ParticleSystemTemplateIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getTemplateIterator_void(long pNativeObject);
	/**
	 * 获得粒子系统模板迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.ParticleSystemManager.ParticleSystemTemplateIterator getTemplateIterator()
	{
		long returnValue = getTemplateIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ParticleSystemManager.ParticleSystemTemplateIterator __returnValue = new com.earthview.world.graphic.ParticleSystemManager.ParticleSystemTemplateIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParticleSystemTemplateIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystemManager.ParticleSystemTemplateIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParticleSystemTemplateIterator");
		}
		return __returnValue;
	}
	native private long _getFactory_void(long pNativeObject);
	/**
	 * 获得EarthView::World::Graphic::CParticleSystemFactory类的实例
	 * @param  
	 */
	public com.earthview.world.graphic.ParticleSystemFactory _getFactory()
	{
		long returnValue = _getFactory_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleSystemFactory __returnValue = new com.earthview.world.graphic.ParticleSystemFactory(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystemFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystemFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleSystemFactory");
		}
		return __returnValue;
	}
	native private static long getSingleton_void();
	public static com.earthview.world.graphic.ParticleSystemManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.ParticleSystemManager __returnValue = new com.earthview.world.graphic.ParticleSystemManager(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystemManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystemManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleSystemManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.ParticleSystemManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleSystemManager __returnValue = new com.earthview.world.graphic.ParticleSystemManager(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystemManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystemManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleSystemManager");
		}
		return __returnValue;
	}
	public ParticleSystemManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleSystemManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getScriptPatterns_void(long pNativeObject, String method);
	native protected void register_parseScript_DataStreamPtr_EVString(long pNativeObject, String method);
	native protected void register_getLoadingOrder_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getScriptPatterns_void(this.nativeObject.pointer, "getScriptPatterns_void_callback");
			this.register_parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, "parseScript_DataStreamPtr_EVString_callback");
			this.register_getLoadingOrder_void(this.nativeObject.pointer, "getLoadingOrder_void_callback");
		}
	}
	
	public static ParticleSystemManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleSystemManager obj = null;
 		if(baseObj instanceof ParticleSystemManager)
		{
			obj = (ParticleSystemManager)baseObj;
		} else {
			obj = new ParticleSystemManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleSystemManager");
			obj.increaseCast();
		}

		return obj;
	}
}
