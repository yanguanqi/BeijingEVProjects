package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 配置文件类从包含键值的文件中分析出配置
 */
public class ConfigFile extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CConfigFile", new ConfigFileClassFactory());
	}

	/**
	 * 默认的构造函数
	 * @param  
	 */
	public ConfigFile() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CConfigFile", null);
	}

	native private void load_EVString(long pNativeObject, String filename);
	/**
	 * 加载文件（不通过资源组加载）
	 * @param filename 文件名
	 */
	public void load(String filename)
	{
		String filenameParamValue = filename;
		load_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private void load_EVString_EVString(long pNativeObject, String filename, String separators);
	/**
	 * 加载文件（不通过资源组加载）
	 * @param filename 文件名
	 * @param separators 分隔符
	 */
	public void load(String filename, String separators)
	{
		String filenameParamValue = filename;
		String separatorsParamValue = separators;
		load_EVString_EVString(this.nativeObject.pointer, filenameParamValue, separatorsParamValue);
	}
	native private void load_EVString_EVString_ev_bool(long pNativeObject, String filename, String separators, boolean trimWhitespace);
	/**
	 * 加载文件（不通过资源组加载）
	 * @param filename 文件名
	 * @param separators 分隔符
	 * @param trimWhitespace 空白区域的处理
	 */
	public void load(String filename, String separators, boolean trimWhitespace)
	{
		String filenameParamValue = filename;
		String separatorsParamValue = separators;
		boolean trimWhitespaceParamValue = trimWhitespace;
		load_EVString_EVString_ev_bool(this.nativeObject.pointer, filenameParamValue, separatorsParamValue, trimWhitespaceParamValue);
	}
	native private void load_EVString_EVString_EVString(long pNativeObject, String filename, String resourceGroup, String separators);
	/**
	 * 加载文件（通过资源组加载）
	 * @param filename 文件名
	 * @param resourceGroup 资源组名
	 * @param separators 分隔符
	 */
	public void load(String filename, String resourceGroup, String separators)
	{
		String filenameParamValue = filename;
		String resourceGroupParamValue = resourceGroup;
		String separatorsParamValue = separators;
		load_EVString_EVString_EVString(this.nativeObject.pointer, filenameParamValue, resourceGroupParamValue, separatorsParamValue);
	}
	native private void load_EVString_EVString_EVString_ev_bool(long pNativeObject, String filename, String resourceGroup, String separators, boolean trimWhitespace);
	/**
	 * 加载文件（通过资源组加载）
	 * @param filename 文件名
	 * @param resourceGroup 资源组名
	 * @param separators 分隔符
	 * @param trimWhitespace 空白区域的处理
	 */
	public void load(String filename, String resourceGroup, String separators, boolean trimWhitespace)
	{
		String filenameParamValue = filename;
		String resourceGroupParamValue = resourceGroup;
		String separatorsParamValue = separators;
		boolean trimWhitespaceParamValue = trimWhitespace;
		load_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, filenameParamValue, resourceGroupParamValue, separatorsParamValue, trimWhitespaceParamValue);
	}
	native private void load_DataStreamPtr(long pNativeObject, long stream);
	/**
	 * 加载文件（通过数据流加载）
	 * @param stream 数据流名
	 */
	public void load(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		load_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void load_DataStreamPtr_EVString(long pNativeObject, long stream, String separators);
	/**
	 * 加载文件（通过数据流加载）
	 * @param stream 数据流名
	 * @param separators 分隔符号
	 */
	public void load(com.earthview.world.core.DataStreamPtr stream, String separators)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String separatorsParamValue = separators;
		load_DataStreamPtr_EVString(this.nativeObject.pointer, streamParamValue, separatorsParamValue);
	}
	native private void load_DataStreamPtr_EVString_ev_bool(long pNativeObject, long stream, String separators, boolean trimWhitespace);
	/**
	 * 加载文件（通过数据流加载）
	 * @param stream 数据流名
	 * @param separators 分隔符号
	 * @param trimWhitespace 空白区域的处理
	 */
	public void load(com.earthview.world.core.DataStreamPtr stream, String separators, boolean trimWhitespace)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String separatorsParamValue = separators;
		boolean trimWhitespaceParamValue = trimWhitespace;
		load_DataStreamPtr_EVString_ev_bool(this.nativeObject.pointer, streamParamValue, separatorsParamValue, trimWhitespaceParamValue);
	}
	native private void loadDirect_EVString(long pNativeObject, String filename);
	/**
	 * 依据文件名加载文件（不通过资源组加载）
	 * @param filename 文件名
	 */
	public void loadDirect(String filename)
	{
		String filenameParamValue = filename;
		loadDirect_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private void loadDirect_EVString_EVString(long pNativeObject, String filename, String separators);
	/**
	 * 依据文件名加载文件（不通过资源组加载）
	 * @param filename 文件名
	 * @param separators 分隔符号
	 */
	public void loadDirect(String filename, String separators)
	{
		String filenameParamValue = filename;
		String separatorsParamValue = separators;
		loadDirect_EVString_EVString(this.nativeObject.pointer, filenameParamValue, separatorsParamValue);
	}
	native private void loadDirect_EVString_EVString_ev_bool(long pNativeObject, String filename, String separators, boolean trimWhitespace);
	/**
	 * 依据文件名加载文件（不通过资源组加载）
	 * @param filename 文件名
	 * @param separators 分隔符号
	 * @param trimWhitespace 空白区域的处理
	 */
	public void loadDirect(String filename, String separators, boolean trimWhitespace)
	{
		String filenameParamValue = filename;
		String separatorsParamValue = separators;
		boolean trimWhitespaceParamValue = trimWhitespace;
		loadDirect_EVString_EVString_ev_bool(this.nativeObject.pointer, filenameParamValue, separatorsParamValue, trimWhitespaceParamValue);
	}
	native private void loadFromResourceSystem_EVString_EVString(long pNativeObject, String filename, String resourceGroup);
	/**
	 * 依据文件名加载文件（通过资源组加载）
	 * @param filename 文件名
	 * @param resourceGroup 资源组名
	 */
	public void loadFromResourceSystem(String filename, String resourceGroup)
	{
		String filenameParamValue = filename;
		String resourceGroupParamValue = resourceGroup;
		loadFromResourceSystem_EVString_EVString(this.nativeObject.pointer, filenameParamValue, resourceGroupParamValue);
	}
	native private void loadFromResourceSystem_EVString_EVString_EVString(long pNativeObject, String filename, String resourceGroup, String separators);
	/**
	 * 依据文件名加载文件（通过资源组加载）
	 * @param filename 文件名
	 * @param resourceGroup 资源组名
	 * @param separators 分隔符号
	 */
	public void loadFromResourceSystem(String filename, String resourceGroup, String separators)
	{
		String filenameParamValue = filename;
		String resourceGroupParamValue = resourceGroup;
		String separatorsParamValue = separators;
		loadFromResourceSystem_EVString_EVString_EVString(this.nativeObject.pointer, filenameParamValue, resourceGroupParamValue, separatorsParamValue);
	}
	native private void loadFromResourceSystem_EVString_EVString_EVString_ev_bool(long pNativeObject, String filename, String resourceGroup, String separators, boolean trimWhitespace);
	/**
	 * 依据文件名加载文件（通过资源组加载）
	 * @param filename 文件名
	 * @param resourceGroup 资源组名
	 * @param separators 分隔符号
	 * @param trimWhitespace 空白区域的处理
	 */
	public void loadFromResourceSystem(String filename, String resourceGroup, String separators, boolean trimWhitespace)
	{
		String filenameParamValue = filename;
		String resourceGroupParamValue = resourceGroup;
		String separatorsParamValue = separators;
		boolean trimWhitespaceParamValue = trimWhitespace;
		loadFromResourceSystem_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, filenameParamValue, resourceGroupParamValue, separatorsParamValue, trimWhitespaceParamValue);
	}
	native private String getSetting_EVString(long pNativeObject, String key);
	/**
	 * 从文件中通过键得到配置
	 * @param key 配置的名称
	 * @return 如果得到第一配置则返回这一个配置的索引，否则返回缺省值（CStringUtil::BLANK）
	 */
	public String getSetting(String key)
	{
		String keyParamValue = key;
		String returnValue = getSetting_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private String getSetting_EVString_EVString(long pNativeObject, String key, String section);
	/**
	 * 从文件中通过键得到配置
	 * @param key 配置的名称
	 * @param section 配置所在的部分的名称
	 * @return 如果得到第一配置则返回这个配置的索引，否则返回缺省值（CStringUtil::BLANK）
	 */
	public String getSetting(String key, String section)
	{
		String keyParamValue = key;
		String sectionParamValue = section;
		String returnValue = getSetting_EVString_EVString(this.nativeObject.pointer, keyParamValue, sectionParamValue);
		return returnValue;
	}
	native private String getSetting_EVString_EVString_EVString(long pNativeObject, String key, String section, String defaultValue);
	/**
	 * 从文件中通过键得到配置
	 * @param key 配置的名称
	 * @param section 配置所在的部分的名称
	 * @param defaultValue 缺省值
	 * @return 如果得到第一配置则返回这个配置的索引，否则返回缺省值（CStringUtil::BLANK）
	 */
	public String getSetting(String key, String section, String defaultValue)
	{
		String keyParamValue = key;
		String sectionParamValue = section;
		String defaultValueParamValue = defaultValue;
		String returnValue = getSetting_EVString_EVString_EVString(this.nativeObject.pointer, keyParamValue, sectionParamValue, defaultValueParamValue);
		return returnValue;
	}
	native private long getMultiSetting_EVString(long pNativeObject, String key);
	/**
	 * 从文件中通过键得到多个配置
	 * @param key 配置的名称
	 * @return 返回存放配置的容器
	 */
	public com.earthview.world.core.StringVector getMultiSetting(String key)
	{
		String keyParamValue = key;
		long returnValue = getMultiSetting_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private long getMultiSetting_EVString_EVString(long pNativeObject, String key, String section);
	/**
	 * 从文件中通过键得到配置
	 * @param key 配置的名称
	 * @param section 配置所在的部分的名称
	 * @return 返回存放配置的容器
	 */
	public com.earthview.world.core.StringVector getMultiSetting(String key, String section)
	{
		String keyParamValue = key;
		String sectionParamValue = section;
		long returnValue = getMultiSetting_EVString_EVString(this.nativeObject.pointer, keyParamValue, sectionParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	/**
	 * multimap容器类以EVString类的作为索引，存放EVString类型的值的容器类
	 */
	public static class SettingsMultiMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CConfigFile::SettingsMultiMap", new SettingsMultiMapClassFactory());
		}

		/**
		 * 默认的构造函数
		 * @param  
		 */
		public SettingsMultiMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SettingsMultiMap", null);
		}

		native private void push_EVString_EVString(long pNativeObject, String key, String val);
		/**
		 * 增加元素
		 * @param key 键
		 * @param val 值
		 * @return 添加成功返回true，否则返回false
		 */
		public void push(String key, String val)
		{
			String keyParamValue = key;
			String valParamValue = val;
			push_EVString_EVString(this.nativeObject.pointer, keyParamValue, valParamValue);
		}
		native private boolean exist_EVString(long pNativeObject, String key);
		/**
		 * 判断键是否存在
		 * @param key 键
		 * @return 存在该键返回true，否则返回false
		 */
		public boolean exist(String key)
		{
			String keyParamValue = key;
			boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private void erase_EVString(long pNativeObject, String key);
		/**
		 * 删除元素
		 * @param key 键
		 */
		public void erase(String key)
		{
			String keyParamValue = key;
			erase_EVString(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 容器的大小
		 * @param  
		 * @return 返回容器的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long count_EVString(long pNativeObject, String key);
		/**
		 * 计数
		 * @param key 键
		 * @return 返回容器中键是key的个数
		 */
		public long count(String key)
		{
			String keyParamValue = key;
			long returnValue = count_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long get_EVString_ev_size_t(long pNativeObject, String key, long index);
		/**
		 * 获取指定键值的第几项
		 * @param key 键
		 * @param index 索引
		 * @return 如果得到返回索引，否则返回空
		 */
		public StringPointer get(String key, long index)
		{
			String keyParamValue = key;
			long indexParamValue = index;
			long returnValue = get_EVString_ev_size_t(this.nativeObject.pointer, keyParamValue, indexParamValue);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_EVString_ev_size_t(long pNativeObject, String key, long index);
		/**
		 * 删除指定键值的第几项
		 * @param key 键
		 * @param index 索引
		 */
		public void erase(String key, long index)
		{
			String keyParamValue = key;
			long indexParamValue = index;
			erase_EVString_ev_size_t(this.nativeObject.pointer, keyParamValue, indexParamValue);
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
		/// 判断该容器类是否为空
		/// </summary>
		/// <param name=""></param>
		/// <returns>若为空则返回true，否则返回false</returns>
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public SettingsMultiMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SettingsMultiMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SettingsMultiMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SettingsMultiMap obj = null;
 			if(baseObj instanceof SettingsMultiMap)
			{
				obj = (SettingsMultiMap)baseObj;
			} else {
				obj = new SettingsMultiMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SettingsMultiMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SettingsMultiMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SettingsMultiMap emptyInstance = new SettingsMultiMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SettingsMultiMapPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair", new SettingsMultiMapPairClassFactory());
		}

		public SettingsMultiMapPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SettingsMultiMapPair", null);
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
		
		public SettingsMultiMapPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SettingsMultiMapPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SettingsMultiMapPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SettingsMultiMapPair obj = null;
 			if(baseObj instanceof SettingsMultiMapPair)
			{
				obj = (SettingsMultiMapPair)baseObj;
			} else {
				obj = new SettingsMultiMapPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SettingsMultiMapPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SettingsMultiMapPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SettingsMultiMapPair emptyInstance = new SettingsMultiMapPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * EarthView::World::Graphic::CConfigFile::SettingsMultiMap容器的迭代器类对EarthView::World::Graphic::CConfigFile::SettingsMultiMap容器的一些操作
	 */
	public static class SettingsIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CConfigFile::SettingsIterator", new SettingsIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst EarthView::World::Graphic::CConfigFile::SettingsMultiMap类的引用
		 */
		public SettingsIterator(com.earthview.world.graphic.ConfigFile.SettingsMultiMap lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("SettingsIterator", list);
		}

		/**
		 * 构造函数
		 * @param other EarthView::World::Graphic::CConfigFile::SettingsIterator类的引用
		 */
		public SettingsIterator(com.earthview.world.graphic.ConfigFile.SettingsIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("SettingsIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断容器是否有两个或两个以上元素
		 * @param  
		 * @return 有两个或者两个以上的元素测返回true，否则返回false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 将迭代器移到下一个位置
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private String nextKey_void(long pNativeObject);
		/**
		 * 得到当前键
		 * @param  
		 * @return 返回当前键
		 */
		public String nextKey()
		{
			String returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private String nextValue_void(long pNativeObject);
		/**
		 * 得到当前值
		 * @param  
		 * @return 返回当前值
		 */
		public String nextValue()
		{
			String returnValue = nextValue_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 得到当前值地址
		 * @param  
		 * @return 返回当前值地址
		 */
		public StringPointer nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private String next_void(long pNativeObject);
		/**
		 * 得到当前值
		 * @param  
		 * @return 得到当前值，指向下一个值
		 */
		public String next()
		{
			String returnValue = next_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 标记第一个元素位置
		 * @param  
		 * @return 返回第一个元素位置的索引
		 */
		public com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair __returnValue = new com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair(CreatedWhenConstruct.CWC_NotToCreate, "SettingsMultiMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SettingsMultiMapPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 标记最后一个元素位置后一位
		 * @param  
		 * @return 返回最后一个元素后一个位置的索引
		 */
		public com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair __returnValue = new com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair(CreatedWhenConstruct.CWC_NotToCreate, "SettingsMultiMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SettingsMultiMapPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 标记当前元素位置
		 * @param  
		 * @return 返回当前元素位置的索引
		 */
		public com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair __returnValue = new com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair(CreatedWhenConstruct.CWC_NotToCreate, "SettingsMultiMapPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ConfigFile.SettingsMultiMapPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SettingsMultiMapPair");
			}
			return __returnValue;
		}
		public SettingsIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SettingsIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SettingsIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SettingsIterator obj = null;
 			if(baseObj instanceof SettingsIterator)
			{
				obj = (SettingsIterator)baseObj;
			} else {
				obj = new SettingsIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SettingsIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SettingsIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SettingsIterator emptyInstance = new SettingsIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * map的容器类以EVString作为键，存储EarthView::World::Graphic::CConfigFile::SettingsMultiMap类型的值的容器
	 */
	public static class SettingsBySection extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CConfigFile::SettingsBySection", new SettingsBySectionClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public SettingsBySection() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SettingsBySection", null);
		}

		native private boolean push_EVString_SettingsMultiMap(long pNativeObject, String key, long val);
		/**
		 * 增加元素
		 * @param key 键
		 * @param val 值,是EarthView::World::Graphic::CConfigFile::SettingsMultiMap类的引用
		 * @return 添加成功返回true，否则返回false
		 */
		public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.ConfigFile.SettingsMultiMap> val)
		{
			String keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_EVString_SettingsMultiMap(this.nativeObject.pointer, keyParamValue, valParamValue);
			return returnValue;
		}
		native private boolean exist_EVString(long pNativeObject, String key);
		/**
		 * 判断键是否存在
		 * @param key 键
		 * @return 存在该键返回true，否则返回false
		 */
		public boolean exist(String key)
		{
			String keyParamValue = key;
			boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_EVString(long pNativeObject, String key);
		/**
		 * "[]"的重载
		 * @param key 键
		 * @return 返回键
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ConfigFile.SettingsMultiMap> OperatorIndex(String key)
		{
			String keyParamValue = key;
			long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ConfigFile.SettingsMultiMap> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ConfigFile.SettingsMultiMap>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_EVString(long pNativeObject, String key);
		/**
		 * 得到键
		 * @param key 键
		 * @return 返回键
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ConfigFile.SettingsMultiMap> get(String key)
		{
			String keyParamValue = key;
			long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.ConfigFile.SettingsMultiMap> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ConfigFile.SettingsMultiMap>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_EVString(long pNativeObject, String key);
		/**
		 * 删除元素
		 * @param key 键
		 */
		public void erase(String key)
		{
			String keyParamValue = key;
			erase_EVString(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 容器的大小
		 * @param  
		 * @return 返回迭代器的大小
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
		 * 判断容器器是否为空
		 * @param  
		 * @return 若为空则返回true，否则返回false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public SettingsBySection(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SettingsBySection(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SettingsBySection fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SettingsBySection obj = null;
 			if(baseObj instanceof SettingsBySection)
			{
				obj = (SettingsBySection)baseObj;
			} else {
				obj = new SettingsBySection(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SettingsBySection");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SettingsBySectionClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SettingsBySection emptyInstance = new SettingsBySection(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SectionPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CConfigFile::SectionPair", new SectionPairClassFactory());
		}

		public SectionPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SectionPair", null);
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
		public com.earthview.world.graphic.ConfigFile.SettingsMultiMap get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ConfigFile.SettingsMultiMap __returnValue = new com.earthview.world.graphic.ConfigFile.SettingsMultiMap(CreatedWhenConstruct.CWC_NotToCreate, "SettingsMultiMap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ConfigFile.SettingsMultiMap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SettingsMultiMap");
			}
			return __returnValue;
		}
		
		native private void set_second_SettingsMultiMap (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.ConfigFile.SettingsMultiMap second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_SettingsMultiMap(this.nativeObject.pointer, secondParamValue);
		}
		
		public SectionPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SectionPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SectionPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SectionPair obj = null;
 			if(baseObj instanceof SectionPair)
			{
				obj = (SectionPair)baseObj;
			} else {
				obj = new SectionPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SectionPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SectionPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SectionPair emptyInstance = new SectionPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * （EarthView::World::Graphic::CConfigFile::SettingsMultiMap类型，键是string类型）map的迭代器类对map容器一些操作
	 */
	public static class SectionIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CConfigFile::SectionIterator", new SectionIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst EarthView::World::Graphic::CConfigFile::SettingsBySection类的引用
		 */
		public SectionIterator(com.earthview.world.graphic.ConfigFile.SettingsBySection lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("SectionIterator", list);
		}

		/**
		 * 构造函数
		 * @param other EarthView::World::Graphic::CConfigFile::SectionIterator类的引用
		 */
		public SectionIterator(com.earthview.world.graphic.ConfigFile.SectionIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("SectionIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断容器是否有两个或两个以上元素
		 * @param  
		 * @return 有两个或者两个以上的元素测返回true，否则返回false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 将迭代器移到下一个位置
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private String nextKey_void(long pNativeObject);
		/**
		 * 得到当前键
		 * @param  
		 * @return 返回当前键
		 */
		public String nextKey()
		{
			String returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 得到当前值
		 * @param  
		 * @return 返回当前值
		 */
		public com.earthview.world.graphic.ConfigFile.SettingsMultiMap nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ConfigFile.SettingsMultiMap __returnValue = new com.earthview.world.graphic.ConfigFile.SettingsMultiMap(CreatedWhenConstruct.CWC_NotToCreate, "SettingsMultiMap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ConfigFile.SettingsMultiMap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SettingsMultiMap");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 得到当前值地址
		 * @param  
		 * @return 返回当前值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.ConfigFile.SettingsMultiMap> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.ConfigFile.SettingsMultiMap> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.ConfigFile.SettingsMultiMap>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 得到当前值
		 * @param  
		 * @return 得到当前值，指向下一个值
		 */
		public com.earthview.world.graphic.ConfigFile.SettingsMultiMap next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ConfigFile.SettingsMultiMap __returnValue = new com.earthview.world.graphic.ConfigFile.SettingsMultiMap(CreatedWhenConstruct.CWC_NotToCreate, "SettingsMultiMap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ConfigFile.SettingsMultiMap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SettingsMultiMap");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 标记第一个元素位置
		 * @param  
		 * @return 返回第一个元素位置的索引
		 */
		public com.earthview.world.graphic.ConfigFile.SectionPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ConfigFile.SectionPair __returnValue = new com.earthview.world.graphic.ConfigFile.SectionPair(CreatedWhenConstruct.CWC_NotToCreate, "SectionPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ConfigFile.SectionPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SectionPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 标记最后一个元素位置后一位
		 * @param  
		 * @return 返回最后一个元素后一个位置的索引
		 */
		public com.earthview.world.graphic.ConfigFile.SectionPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ConfigFile.SectionPair __returnValue = new com.earthview.world.graphic.ConfigFile.SectionPair(CreatedWhenConstruct.CWC_NotToCreate, "SectionPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ConfigFile.SectionPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SectionPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 标记当前元素位置
		 * @param  
		 * @return 返回当前元素位置的索引
		 */
		public com.earthview.world.graphic.ConfigFile.SectionPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.ConfigFile.SectionPair __returnValue = new com.earthview.world.graphic.ConfigFile.SectionPair(CreatedWhenConstruct.CWC_NotToCreate, "SectionPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ConfigFile.SectionPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SectionPair");
			}
			return __returnValue;
		}
		public SectionIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SectionIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SectionIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SectionIterator obj = null;
 			if(baseObj instanceof SectionIterator)
			{
				obj = (SectionIterator)baseObj;
			} else {
				obj = new SectionIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SectionIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SectionIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SectionIterator emptyInstance = new SectionIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getSectionIterator_void(long pNativeObject);
	/**
	 * 定义一个迭代器，该迭代器能够遍历配置文件中所有的部分中的元素
	 * @param  
	 * @return 返回迭代器
	 */
	public com.earthview.world.graphic.ConfigFile.SectionIterator getSectionIterator()
	{
		long returnValue = getSectionIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ConfigFile.SectionIterator __returnValue = new com.earthview.world.graphic.ConfigFile.SectionIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "SectionIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConfigFile.SectionIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SectionIterator");
		}
		return __returnValue;
	}
	native private long getSettingsIterator_void(long pNativeObject);
	/**
	 * 定义一个迭代器，该迭代器能够遍历一个部分中所有元素
	 * @param  
	 * @return 返回迭代器
	 */
	public com.earthview.world.graphic.ConfigFile.SettingsIterator getSettingsIterator()
	{
		long returnValue = getSettingsIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ConfigFile.SettingsIterator __returnValue = new com.earthview.world.graphic.ConfigFile.SettingsIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "SettingsIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConfigFile.SettingsIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SettingsIterator");
		}
		return __returnValue;
	}
	native private long getSettingsIterator_EVString(long pNativeObject, String section);
	/**
	 * 定义一个迭代器，该迭代器能够遍历一个部分中所有元素
	 * @param section 部分的名称
	 * @return 返回迭代器
	 */
	public com.earthview.world.graphic.ConfigFile.SettingsIterator getSettingsIterator(String section)
	{
		String sectionParamValue = section;
		long returnValue = getSettingsIterator_EVString(this.nativeObject.pointer, sectionParamValue);
		com.earthview.world.graphic.ConfigFile.SettingsIterator __returnValue = new com.earthview.world.graphic.ConfigFile.SettingsIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "SettingsIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConfigFile.SettingsIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SettingsIterator");
		}
		return __returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空设置
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public ConfigFile(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConfigFile(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ConfigFile fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConfigFile obj = null;
 		if(baseObj instanceof ConfigFile)
		{
			obj = (ConfigFile)baseObj;
		} else {
			obj = new ConfigFile(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CConfigFile");
			obj.increaseCast();
		}

		return obj;
	}
}
