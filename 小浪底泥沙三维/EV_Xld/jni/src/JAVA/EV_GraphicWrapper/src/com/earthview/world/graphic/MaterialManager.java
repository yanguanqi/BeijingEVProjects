package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 材质管理器
 */
public class MaterialManager extends com.earthview.world.graphic.ResourceManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CMaterialManager", new MaterialManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCMaterialManagerProxy", new MaterialManagerClassFactory());
	}

	/**
	 * 材质事件监听
	 */
	public static class MaterialListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMaterialManager::CMaterialListener", new MaterialListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CMaterialManager::JCMaterialListenerProxy", new MaterialListenerClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public MaterialListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCMaterialListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.MaterialManager$MaterialListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  long handleSchemeNotFound_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable_callback(int schemeIndex, String schemeName, long originalMaterial, int lodIndex, long rend)
		{
			int schemeIndexParamValue = schemeIndex;
			String schemeNameParamValue = schemeName;
			com.earthview.world.graphic.Material originalMaterialParamValue = (originalMaterial == 0L ? null : new com.earthview.world.graphic.Material(CreatedWhenConstruct.CWC_NotToCreate));
			if(originalMaterialParamValue != null)
			{
			originalMaterialParamValue.setDelegate(true);
			originalMaterialParamValue.setInstancePointer(new InstancePointer(originalMaterial));
			IClassFactory originalMaterialParamValueClassFactory = GlobalClassFactoryMap.get(originalMaterialParamValue.getCppInstanceTypeName());
			if (originalMaterialParamValueClassFactory != null)
			{
				originalMaterialParamValue.setDelegate(true);
				originalMaterialParamValue = (com.earthview.world.graphic.Material)originalMaterialParamValueClassFactory.create();
				originalMaterialParamValue.setDelegate(true);
				originalMaterialParamValue.setInstancePointer(new InstancePointer(originalMaterial));
			}
			}
			int lodIndexParamValue = lodIndex;
			com.earthview.world.graphic.Renderable rendParamValue = (rend == 0L ? null : new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate));
			if(rendParamValue != null)
			{
			rendParamValue.setDelegate(true);
			rendParamValue.setInstancePointer(new InstancePointer(rend));
			IClassFactory rendParamValueClassFactory = GlobalClassFactoryMap.get(rendParamValue.getCppInstanceTypeName());
			if (rendParamValueClassFactory != null)
			{
				rendParamValue.setDelegate(true);
				rendParamValue = (com.earthview.world.graphic.Renderable)rendParamValueClassFactory.create();
				rendParamValue.setDelegate(true);
				rendParamValue.setInstancePointer(new InstancePointer(rend));
			}
			}
			com.earthview.world.graphic.Technique returnValue = handleSchemeNotFound(schemeIndexParamValue, schemeNameParamValue, originalMaterialParamValue, lodIndexParamValue, rendParamValue);
			if(returnValue == null) {
				return 0L;
			}
			returnValue.setDelegate(true);
			long __returnValue = returnValue.nativeObject.pointer;
			return __returnValue;
		}

		native private long handleSchemeNotFound_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable(long pNativeObject, int schemeIndex, String schemeName, long originalMaterial, int lodIndex, long rend);
		/**
		 * 如果已给方案的技术在材质中没有找到，允许手动指定一个技术实例
		 * @param schemeIndex 方案的索引
		 * @param schemeName 方案的名称
		 * @param originalMaterial 正在处理的材质，它没有专门的技术
		 * @param lodIndex 细节等级索引
		 * @param rend 指向可渲染对象的指针
		 * @return 返回一个指向技术的指针，如果希望使用默认技术则返回null
		 */
		public com.earthview.world.graphic.Technique handleSchemeNotFound(int schemeIndex, String schemeName, com.earthview.world.graphic.Material originalMaterial, int lodIndex, com.earthview.world.graphic.Renderable rend)
		{
			int schemeIndexParamValue = schemeIndex;
			String schemeNameParamValue = schemeName;
			long originalMaterialParamValue = (originalMaterial == null ? 0L : originalMaterial.nativeObject.pointer);
			int lodIndexParamValue = lodIndex;
			long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
			long returnValue = handleSchemeNotFound_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable(this.nativeObject.pointer, schemeIndexParamValue, schemeNameParamValue, originalMaterialParamValue, lodIndexParamValue, rendParamValue);
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
		native private long handleSchemeNotFound_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable_NoVirtual(long pNativeObject, int schemeIndex, String schemeName, long originalMaterial, int lodIndex, long rend);
		protected com.earthview.world.graphic.Technique handleSchemeNotFound_NoVirtual(int schemeIndex, String schemeName, com.earthview.world.graphic.Material originalMaterial, int lodIndex, com.earthview.world.graphic.Renderable rend)
		{
			int schemeIndexParamValue = schemeIndex;
			String schemeNameParamValue = schemeName;
			long originalMaterialParamValue = (originalMaterial == null ? 0L : originalMaterial.nativeObject.pointer);
			int lodIndexParamValue = lodIndex;
			long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
			long returnValue = handleSchemeNotFound_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable_NoVirtual(this.nativeObject.pointer, schemeIndexParamValue, schemeNameParamValue, originalMaterialParamValue, lodIndexParamValue, rendParamValue);
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

		public MaterialListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MaterialListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_handleSchemeNotFound_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_handleSchemeNotFound_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable(this.nativeObject.pointer, "handleSchemeNotFound_ev_uint16_EVString_CMaterial_ev_uint16_CRenderable_callback");
			}
		}
		
		public static MaterialListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MaterialListener obj = null;
 			if(baseObj instanceof MaterialListener)
			{
				obj = (MaterialListener)baseObj;
			} else {
				obj = new MaterialListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CMaterialListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MaterialListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MaterialListener emptyInstance = new MaterialListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, long handle, String group, boolean isManual, long ref_loader, long params);
	/**
	 * 从EarthView::World::Graphic::CResourceManager类重载创建一个新的资源实例与管理保持一致
	 * @param name 资源的名称
	 * @param handle 
	 * @param group 资源组名称
	 * @param isManual 资源是否手动下载
	 * @param loader 指向EarthView::World::Graphic::CManualResourceLoader的指针
	 * @param params 名称/值对参数
	 */
	public com.earthview.world.graphic.Resource createImpl(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, paramsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Resource __returnValue = new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate, "CResource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Resource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResource");
		}
		return __returnValue;
	}
	native private long createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, long handle, String group, boolean isManual, long ref_loader, long params);
	protected com.earthview.world.graphic.Resource createImpl_NoVirtual(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long handleParamValue = handle.nativeObject.pointer;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, handleParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, paramsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Resource __returnValue = new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate, "CResource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Resource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResource");
		}
		return __returnValue;
	}

	native private static String get_DEFAULT_SCHEME_NAME_void();
	public static String get_DEFAULT_SCHEME_NAME()
	{
		String jniValue = get_DEFAULT_SCHEME_NAME_void();
		
		return jniValue;
	}
	
	native private static void set_DEFAULT_SCHEME_NAME_EVString (String value);
	public static void set_DEFAULT_SCHEME_NAME(String DEFAULT_SCHEME_NAME)
	{
		String DEFAULT_SCHEME_NAMEParamValue = DEFAULT_SCHEME_NAME;
		
		set_DEFAULT_SCHEME_NAME_EVString(DEFAULT_SCHEME_NAMEParamValue);
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public MaterialManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMaterialManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.MaterialManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void initialise_void(long pNativeObject);
	/**
	 * 初始化材质管理，同时解析所有可用的程序和材质脚本
	 * @param  
	 */
	public void initialise()
	{
		initialise_void(this.nativeObject.pointer);
	}
	native private void parseScript_DataStreamPtr_EVString(long pNativeObject, long stream, String groupName);
	/**
	 * 解析脚本文件
	 * @param stream 数据流
	 * @param groupName 资源组名称
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

	protected  void setDefaultTextureFiltering_TextureFilterOptions_callback(int fo)
	{
		com.earthview.world.graphic.TextureFilterOptions foParamValue = com.earthview.world.graphic.TextureFilterOptions.toEnum(fo);
		setDefaultTextureFiltering(foParamValue);
	}

	native private void setDefaultTextureFiltering_TextureFilterOptions(long pNativeObject, int fo);
	/**
	 * 设置默认的纹理过滤方式
	 * @param fo 默认值选项
	 */
	public void setDefaultTextureFiltering(com.earthview.world.graphic.TextureFilterOptions fo)
	{
		int foParamValue = fo.getValue();
		setDefaultTextureFiltering_TextureFilterOptions(this.nativeObject.pointer, foParamValue);
	}
	native private void setDefaultTextureFiltering_TextureFilterOptions_NoVirtual(long pNativeObject, int fo);
	protected void setDefaultTextureFiltering_NoVirtual(com.earthview.world.graphic.TextureFilterOptions fo)
	{
		int foParamValue = fo.getValue();
		setDefaultTextureFiltering_TextureFilterOptions_NoVirtual(this.nativeObject.pointer, foParamValue);
	}

	protected  void setDefaultTextureFiltering_FilterType_FilterOptions_callback(int ftype, int opts)
	{
		com.earthview.world.graphic.FilterType ftypeParamValue = com.earthview.world.graphic.FilterType.toEnum(ftype);
		com.earthview.world.graphic.FilterOptions optsParamValue = com.earthview.world.graphic.FilterOptions.toEnum(opts);
		setDefaultTextureFiltering(ftypeParamValue, optsParamValue);
	}

	native private void setDefaultTextureFiltering_FilterType_FilterOptions(long pNativeObject, int ftype, int opts);
	/**
	 * 设置默认的纹理过滤方式
	 * @param ftype 过滤类型
	 * @param opts 默认值选项
	 */
	public void setDefaultTextureFiltering(com.earthview.world.graphic.FilterType ftype, com.earthview.world.graphic.FilterOptions opts)
	{
		int ftypeParamValue = ftype.getValue();
		int optsParamValue = opts.getValue();
		setDefaultTextureFiltering_FilterType_FilterOptions(this.nativeObject.pointer, ftypeParamValue, optsParamValue);
	}
	native private void setDefaultTextureFiltering_FilterType_FilterOptions_NoVirtual(long pNativeObject, int ftype, int opts);
	protected void setDefaultTextureFiltering_NoVirtual(com.earthview.world.graphic.FilterType ftype, com.earthview.world.graphic.FilterOptions opts)
	{
		int ftypeParamValue = ftype.getValue();
		int optsParamValue = opts.getValue();
		setDefaultTextureFiltering_FilterType_FilterOptions_NoVirtual(this.nativeObject.pointer, ftypeParamValue, optsParamValue);
	}

	protected  void setDefaultTextureFiltering_FilterOptions_FilterOptions_FilterOptions_callback(int minFilter, int magFilter, int mipFilter)
	{
		com.earthview.world.graphic.FilterOptions minFilterParamValue = com.earthview.world.graphic.FilterOptions.toEnum(minFilter);
		com.earthview.world.graphic.FilterOptions magFilterParamValue = com.earthview.world.graphic.FilterOptions.toEnum(magFilter);
		com.earthview.world.graphic.FilterOptions mipFilterParamValue = com.earthview.world.graphic.FilterOptions.toEnum(mipFilter);
		setDefaultTextureFiltering(minFilterParamValue, magFilterParamValue, mipFilterParamValue);
	}

	native private void setDefaultTextureFiltering_FilterOptions_FilterOptions_FilterOptions(long pNativeObject, int minFilter, int magFilter, int mipFilter);
	/**
	 * 设置默认的纹理过滤方式
	 * @param minFilter 
	 * @param magFilter 
	 * @param mipFilter 
	 */
	public void setDefaultTextureFiltering(com.earthview.world.graphic.FilterOptions minFilter, com.earthview.world.graphic.FilterOptions magFilter, com.earthview.world.graphic.FilterOptions mipFilter)
	{
		int minFilterParamValue = minFilter.getValue();
		int magFilterParamValue = magFilter.getValue();
		int mipFilterParamValue = mipFilter.getValue();
		setDefaultTextureFiltering_FilterOptions_FilterOptions_FilterOptions(this.nativeObject.pointer, minFilterParamValue, magFilterParamValue, mipFilterParamValue);
	}
	native private void setDefaultTextureFiltering_FilterOptions_FilterOptions_FilterOptions_NoVirtual(long pNativeObject, int minFilter, int magFilter, int mipFilter);
	protected void setDefaultTextureFiltering_NoVirtual(com.earthview.world.graphic.FilterOptions minFilter, com.earthview.world.graphic.FilterOptions magFilter, com.earthview.world.graphic.FilterOptions mipFilter)
	{
		int minFilterParamValue = minFilter.getValue();
		int magFilterParamValue = magFilter.getValue();
		int mipFilterParamValue = mipFilter.getValue();
		setDefaultTextureFiltering_FilterOptions_FilterOptions_FilterOptions_NoVirtual(this.nativeObject.pointer, minFilterParamValue, magFilterParamValue, mipFilterParamValue);
	}

	protected  int getDefaultTextureFiltering_FilterType_callback(int ftype)
	{
		com.earthview.world.graphic.FilterType ftypeParamValue = com.earthview.world.graphic.FilterType.toEnum(ftype);
		com.earthview.world.graphic.FilterOptions returnValue = getDefaultTextureFiltering(ftypeParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getDefaultTextureFiltering_FilterType(long pNativeObject, int ftype);
	/**
	 * 获得默认的纹理过滤方式
	 * @param  
	 */
	public com.earthview.world.graphic.FilterOptions getDefaultTextureFiltering(com.earthview.world.graphic.FilterType ftype)
	{
		int ftypeParamValue = ftype.getValue();
		int returnValue = getDefaultTextureFiltering_FilterType(this.nativeObject.pointer, ftypeParamValue);
		return com.earthview.world.graphic.FilterOptions.toEnum(returnValue);
	}
	native private int getDefaultTextureFiltering_FilterType_NoVirtual(long pNativeObject, int ftype);
	protected com.earthview.world.graphic.FilterOptions getDefaultTextureFiltering_NoVirtual(com.earthview.world.graphic.FilterType ftype)
	{
		int ftypeParamValue = ftype.getValue();
		int returnValue = getDefaultTextureFiltering_FilterType_NoVirtual(this.nativeObject.pointer, ftypeParamValue);
		return com.earthview.world.graphic.FilterOptions.toEnum(returnValue);
	}

	native private void setDefaultAnisotropy_ev_uint32(long pNativeObject, long maxAniso);
	/**
	 * 设置默认的纹理各向异性等级，默认值为1
	 * @param maxAniso 各向异性等级
	 */
	public void setDefaultAnisotropy(long maxAniso)
	{
		long maxAnisoParamValue = maxAniso;
		setDefaultAnisotropy_ev_uint32(this.nativeObject.pointer, maxAnisoParamValue);
	}
	native private long getDefaultAnisotropy_void(long pNativeObject);
	/**
	 * 获得默认的纹理各向异性等级
	 * @param  
	 */
	public long getDefaultAnisotropy()
	{
		long returnValue = getDefaultAnisotropy_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long getDefaultSettings_void_callback()
	{
		com.earthview.world.graphic.MaterialPtr returnValue = getDefaultSettings();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDefaultSettings_void(long pNativeObject);
	/**
	 * 获得指向默认材质的指针
	 * @param  
	 * @return 指针
	 */
	public com.earthview.world.graphic.MaterialPtr getDefaultSettings()
	{
		long returnValue = getDefaultSettings_void(this.nativeObject.pointer);
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
	native private long getDefaultSettings_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MaterialPtr getDefaultSettings_NoVirtual()
	{
		long returnValue = getDefaultSettings_void_NoVirtual(this.nativeObject.pointer);
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

	protected  int _getSchemeIndex_EVString_callback(String name)
	{
		String nameParamValue = name;
		int returnValue = _getSchemeIndex(nameParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int _getSchemeIndex_EVString(long pNativeObject, String name);
	/**
	 * 获得材质方案名称的索引
	 * @param name 名称
	 * @return 索引值
	 */
	public int _getSchemeIndex(String name)
	{
		String nameParamValue = name;
		int returnValue = _getSchemeIndex_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private int _getSchemeIndex_EVString_NoVirtual(long pNativeObject, String name);
	protected int _getSchemeIndex_NoVirtual(String name)
	{
		String nameParamValue = name;
		int returnValue = _getSchemeIndex_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  String _getSchemeName_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		String returnValue = _getSchemeName(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String _getSchemeName_ev_uint16(long pNativeObject, int index);
	/**
	 * 获得已给索引的材质方案的名称
	 * @param index 索引
	 * @return 名称
	 */
	public String _getSchemeName(int index)
	{
		int indexParamValue = index;
		String returnValue = _getSchemeName_ev_uint16(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String _getSchemeName_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected String _getSchemeName_NoVirtual(int index)
	{
		int indexParamValue = index;
		String returnValue = _getSchemeName_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  int _getActiveSchemeIndex_void_callback()
	{
		int returnValue = _getActiveSchemeIndex();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int _getActiveSchemeIndex_void(long pNativeObject);
	/**
	 * 获得活动方案的索引值
	 * @param  
	 * @return 索引值
	 */
	public int _getActiveSchemeIndex()
	{
		int returnValue = _getActiveSchemeIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int _getActiveSchemeIndex_void_NoVirtual(long pNativeObject);
	protected int _getActiveSchemeIndex_NoVirtual()
	{
		int returnValue = _getActiveSchemeIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getActiveScheme_void_callback()
	{
		String returnValue = getActiveScheme();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getActiveScheme_void(long pNativeObject);
	/**
	 * 获得活动材质方案的名称
	 * @param  
	 * @return 名称
	 */
	public String getActiveScheme()
	{
		String returnValue = getActiveScheme_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getActiveScheme_void_NoVirtual(long pNativeObject);
	protected String getActiveScheme_NoVirtual()
	{
		String returnValue = getActiveScheme_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setActiveScheme_EVString_callback(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		setActiveScheme(schemeNameParamValue);
	}

	native private void setActiveScheme_EVString(long pNativeObject, String schemeName);
	/**
	 * 设置活动材质方案的名称
	 * @param  
	 */
	public void setActiveScheme(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		setActiveScheme_EVString(this.nativeObject.pointer, schemeNameParamValue);
	}
	native private void setActiveScheme_EVString_NoVirtual(long pNativeObject, String schemeName);
	protected void setActiveScheme_NoVirtual(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		setActiveScheme_EVString_NoVirtual(this.nativeObject.pointer, schemeNameParamValue);
	}

	protected  void addListener_CMaterialListener_EVString_callback(long ref_l, String schemeName)
	{
		com.earthview.world.graphic.MaterialManager.MaterialListener ref_lParamValue = (ref_l == 0L ? null : new com.earthview.world.graphic.MaterialManager.MaterialListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_lParamValue != null)
		{
		ref_lParamValue.setDelegate(true);
		ref_lParamValue.setInstancePointer(new InstancePointer(ref_l));
		IClassFactory ref_lParamValueClassFactory = GlobalClassFactoryMap.get(ref_lParamValue.getCppInstanceTypeName());
		if (ref_lParamValueClassFactory != null)
		{
			ref_lParamValue.setDelegate(true);
			ref_lParamValue = (com.earthview.world.graphic.MaterialManager.MaterialListener)ref_lParamValueClassFactory.create();
			ref_lParamValue.setDelegate(true);
			ref_lParamValue.setInstancePointer(new InstancePointer(ref_l));
		}
		}
		String schemeNameParamValue = schemeName;
		addListener(ref_lParamValue, schemeNameParamValue);
	}

	native private void addListener_CMaterialListener_EVString(long pNativeObject, long ref_l, String schemeName);
	/**
	 * 给材质事件添加一个监听器如果schemeName已给出,则监听器只接收指定的事件
	 * @param l 监听器
	 * @param schemeName 方案名称
	 */
	public void addListener(com.earthview.world.graphic.MaterialManager.MaterialListener ref_l, String schemeName)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		String schemeNameParamValue = schemeName;
		addListener_CMaterialListener_EVString(this.nativeObject.pointer, ref_lParamValue, schemeNameParamValue);
	}
	native private void addListener_CMaterialListener_EVString_NoVirtual(long pNativeObject, long ref_l, String schemeName);
	protected void addListener_NoVirtual(com.earthview.world.graphic.MaterialManager.MaterialListener ref_l, String schemeName)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		String schemeNameParamValue = schemeName;
		addListener_CMaterialListener_EVString_NoVirtual(this.nativeObject.pointer, ref_lParamValue, schemeNameParamValue);
	}

	protected  void addListener_CMaterialListener_callback(long ref_l)
	{
		com.earthview.world.graphic.MaterialManager.MaterialListener ref_lParamValue = (ref_l == 0L ? null : new com.earthview.world.graphic.MaterialManager.MaterialListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_lParamValue != null)
		{
		ref_lParamValue.setDelegate(true);
		ref_lParamValue.setInstancePointer(new InstancePointer(ref_l));
		IClassFactory ref_lParamValueClassFactory = GlobalClassFactoryMap.get(ref_lParamValue.getCppInstanceTypeName());
		if (ref_lParamValueClassFactory != null)
		{
			ref_lParamValue.setDelegate(true);
			ref_lParamValue = (com.earthview.world.graphic.MaterialManager.MaterialListener)ref_lParamValueClassFactory.create();
			ref_lParamValue.setDelegate(true);
			ref_lParamValue.setInstancePointer(new InstancePointer(ref_l));
		}
		}
		addListener(ref_lParamValue);
	}

	native private void addListener_CMaterialListener(long pNativeObject, long ref_l);
	/**
	 * 给材质事件添加一个监听器
	 * @param l 监听器
	 */
	public void addListener(com.earthview.world.graphic.MaterialManager.MaterialListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		addListener_CMaterialListener(this.nativeObject.pointer, ref_lParamValue);
	}
	native private void addListener_CMaterialListener_NoVirtual(long pNativeObject, long ref_l);
	protected void addListener_NoVirtual(com.earthview.world.graphic.MaterialManager.MaterialListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		addListener_CMaterialListener_NoVirtual(this.nativeObject.pointer, ref_lParamValue);
	}

	protected  void removeListener_CMaterialListener_EVString_callback(long l, String schemeName)
	{
		com.earthview.world.graphic.MaterialManager.MaterialListener lParamValue = (l == 0L ? null : new com.earthview.world.graphic.MaterialManager.MaterialListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(lParamValue != null)
		{
		lParamValue.setDelegate(true);
		lParamValue.setInstancePointer(new InstancePointer(l));
		IClassFactory lParamValueClassFactory = GlobalClassFactoryMap.get(lParamValue.getCppInstanceTypeName());
		if (lParamValueClassFactory != null)
		{
			lParamValue.setDelegate(true);
			lParamValue = (com.earthview.world.graphic.MaterialManager.MaterialListener)lParamValueClassFactory.create();
			lParamValue.setDelegate(true);
			lParamValue.setInstancePointer(new InstancePointer(l));
		}
		}
		String schemeNameParamValue = schemeName;
		removeListener(lParamValue, schemeNameParamValue);
	}

	native private void removeListener_CMaterialListener_EVString(long pNativeObject, long l, String schemeName);
	/**
	 * 去除材质事件的监听器
	 * @param l 监听器
	 * @param schemeName 方案名称
	 */
	public void removeListener(com.earthview.world.graphic.MaterialManager.MaterialListener l, String schemeName)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		String schemeNameParamValue = schemeName;
		removeListener_CMaterialListener_EVString(this.nativeObject.pointer, lParamValue, schemeNameParamValue);
	}
	native private void removeListener_CMaterialListener_EVString_NoVirtual(long pNativeObject, long l, String schemeName);
	protected void removeListener_NoVirtual(com.earthview.world.graphic.MaterialManager.MaterialListener l, String schemeName)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		String schemeNameParamValue = schemeName;
		removeListener_CMaterialListener_EVString_NoVirtual(this.nativeObject.pointer, lParamValue, schemeNameParamValue);
	}

	protected  void removeListener_CMaterialListener_callback(long l)
	{
		com.earthview.world.graphic.MaterialManager.MaterialListener lParamValue = (l == 0L ? null : new com.earthview.world.graphic.MaterialManager.MaterialListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(lParamValue != null)
		{
		lParamValue.setDelegate(true);
		lParamValue.setInstancePointer(new InstancePointer(l));
		IClassFactory lParamValueClassFactory = GlobalClassFactoryMap.get(lParamValue.getCppInstanceTypeName());
		if (lParamValueClassFactory != null)
		{
			lParamValue.setDelegate(true);
			lParamValue = (com.earthview.world.graphic.MaterialManager.MaterialListener)lParamValueClassFactory.create();
			lParamValue.setDelegate(true);
			lParamValue.setInstancePointer(new InstancePointer(l));
		}
		}
		removeListener(lParamValue);
	}

	native private void removeListener_CMaterialListener(long pNativeObject, long l);
	/**
	 * 去除材质事件的监听器
	 * @param l 监听器
	 * @param schemeName 方案名称
	 */
	public void removeListener(com.earthview.world.graphic.MaterialManager.MaterialListener l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		removeListener_CMaterialListener(this.nativeObject.pointer, lParamValue);
	}
	native private void removeListener_CMaterialListener_NoVirtual(long pNativeObject, long l);
	protected void removeListener_NoVirtual(com.earthview.world.graphic.MaterialManager.MaterialListener l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		removeListener_CMaterialListener_NoVirtual(this.nativeObject.pointer, lParamValue);
	}

	protected  long _arbitrateMissingTechniqueForActiveScheme_CMaterial_ev_uint16_CRenderable_callback(long mat, int lodIndex, long rend)
	{
		com.earthview.world.graphic.Material matParamValue = (mat == 0L ? null : new com.earthview.world.graphic.Material(CreatedWhenConstruct.CWC_NotToCreate));
		if(matParamValue != null)
		{
		matParamValue.setDelegate(true);
		matParamValue.setInstancePointer(new InstancePointer(mat));
		IClassFactory matParamValueClassFactory = GlobalClassFactoryMap.get(matParamValue.getCppInstanceTypeName());
		if (matParamValueClassFactory != null)
		{
			matParamValue.setDelegate(true);
			matParamValue = (com.earthview.world.graphic.Material)matParamValueClassFactory.create();
			matParamValue.setDelegate(true);
			matParamValue.setInstancePointer(new InstancePointer(mat));
		}
		}
		int lodIndexParamValue = lodIndex;
		com.earthview.world.graphic.Renderable rendParamValue = (rend == 0L ? null : new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate));
		if(rendParamValue != null)
		{
		rendParamValue.setDelegate(true);
		rendParamValue.setInstancePointer(new InstancePointer(rend));
		IClassFactory rendParamValueClassFactory = GlobalClassFactoryMap.get(rendParamValue.getCppInstanceTypeName());
		if (rendParamValueClassFactory != null)
		{
			rendParamValue.setDelegate(true);
			rendParamValue = (com.earthview.world.graphic.Renderable)rendParamValueClassFactory.create();
			rendParamValue.setDelegate(true);
			rendParamValue.setInstancePointer(new InstancePointer(rend));
		}
		}
		com.earthview.world.graphic.Technique returnValue = _arbitrateMissingTechniqueForActiveScheme(matParamValue, lodIndexParamValue, rendParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _arbitrateMissingTechniqueForActiveScheme_CMaterial_ev_uint16_CRenderable(long pNativeObject, long mat, int lodIndex, long rend);
	//// Internal method for sorting out missing technique for a scheme
	public com.earthview.world.graphic.Technique _arbitrateMissingTechniqueForActiveScheme(com.earthview.world.graphic.Material mat, int lodIndex, com.earthview.world.graphic.Renderable rend)
	{
		long matParamValue = (mat == null ? 0L : mat.nativeObject.pointer);
		int lodIndexParamValue = lodIndex;
		long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
		long returnValue = _arbitrateMissingTechniqueForActiveScheme_CMaterial_ev_uint16_CRenderable(this.nativeObject.pointer, matParamValue, lodIndexParamValue, rendParamValue);
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
	native private long _arbitrateMissingTechniqueForActiveScheme_CMaterial_ev_uint16_CRenderable_NoVirtual(long pNativeObject, long mat, int lodIndex, long rend);
	protected com.earthview.world.graphic.Technique _arbitrateMissingTechniqueForActiveScheme_NoVirtual(com.earthview.world.graphic.Material mat, int lodIndex, com.earthview.world.graphic.Renderable rend)
	{
		long matParamValue = (mat == null ? 0L : mat.nativeObject.pointer);
		int lodIndexParamValue = lodIndex;
		long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
		long returnValue = _arbitrateMissingTechniqueForActiveScheme_CMaterial_ev_uint16_CRenderable_NoVirtual(this.nativeObject.pointer, matParamValue, lodIndexParamValue, rendParamValue);
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

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.MaterialManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.MaterialManager __returnValue = new com.earthview.world.graphic.MaterialManager(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.MaterialManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MaterialManager __returnValue = new com.earthview.world.graphic.MaterialManager(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialManager");
		}
		return __returnValue;
	}
	native private long createSelectionMaterial_void(long pNativeObject);
	public com.earthview.world.graphic.MaterialPtr createSelectionMaterial()
	{
		long returnValue = createSelectionMaterial_void(this.nativeObject.pointer);
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
	public MaterialManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MaterialManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 创建(但不加载)资源，若存在则直接返回
	 */
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.create_NoVirtual(name, group, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.create_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group, boolean isManual)
	{
		return super.create_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr create(String name, String group)
	{
		return super.create_NoVirtual(name, group);
	}
	/**
	 * 只创建(不加载)资源，不考虑同名的资源是否已经存在，创建后也不再管理该资源
	 */
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.createUnmanaged_NoVirtual(name, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.createUnmanaged_NoVirtual(name, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual)
	{
		return super.createUnmanaged_NoVirtual(name, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name)
	{
		return super.createUnmanaged_NoVirtual(name);
	}
	/**
	 * 创建或获取资源
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual, ref_loader, createParams);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual)
	{
		return super.createOrRetrieve_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group)
	{
		return super.createOrRetrieve_NoVirtual(name, group);
	}
	/**
	 * 设置内存总容量
	 */
	public void setMemoryBudget(long bytes)
	{
		super.setMemoryBudget_NoVirtual(bytes);
	}
	/**
	 * 获取内存总容量
	 */
	public long getMemoryBudget()
	{
		return super.getMemoryBudget_NoVirtual();
	}
	/**
	 * 获取已经占用的内存容量
	 */
	public long getMemoryUsage()
	{
		return super.getMemoryUsage_NoVirtual();
	}
	/**
	 * 卸载资源
	 */
	public void unload(String name)
	{
		super.unload_NoVirtual(name);
	}
	public void unload(ULongPointer handle)
	{
		super.unload_NoVirtual(handle);
	}
	/**
	 * 卸载所有资源
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void unloadAll(boolean reloadableOnly)
	{
		super.unloadAll_NoVirtual(reloadableOnly);
	}
	public void unloadAll()
	{
		super.unloadAll_NoVirtual();
	}
	/**
	 * 重新加载所有资源
	 */
	public void reloadAll(boolean reloadableOnly)
	{
		super.reloadAll_NoVirtual(reloadableOnly);
	}
	public void reloadAll()
	{
		super.reloadAll_NoVirtual();
	}
	/**
	 * 卸载所有未被引用的资源
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void unloadUnreferencedResources(boolean reloadableOnly)
	{
		super.unloadUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void unloadUnreferencedResources()
	{
		super.unloadUnreferencedResources_NoVirtual();
	}
	/**
	 * 重新加载所有未被引用的资源
	 * @param reloadableOnly 
	 */
	public void reloadUnreferencedResources(boolean reloadableOnly)
	{
		super.reloadUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void reloadUnreferencedResources()
	{
		super.reloadUnreferencedResources_NoVirtual();
	}
	/**
	 * 移除资源如果资源没有其它引用，则会引起资源的析构;如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
	 * @param reloadableOnly 
	 */
	public void remove(com.earthview.world.graphic.ResourcePtr r)
	{
		super.remove_NoVirtual(r);
	}
	public void remove(String name)
	{
		super.remove_NoVirtual(name);
	}
	public void remove(ULongPointer handle)
	{
		super.remove_NoVirtual(handle);
	}
	public void remove(String name, String groupname)
	{
		super.remove_NoVirtual(name, groupname);
	}
	/**
	 * 移除所有资源如果资源没有其它引用，则会引起资源的析构;如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
	 * @param reloadableOnly 
	 */
	public void removeAll()
	{
		super.removeAll_NoVirtual();
	}
	/**
	 * 移除所有未被引用的资源				
	 * @param reloadableOnly 传递true，则只卸载可以重新加载的资源
	 */
	public void removeUnreferencedResources(boolean reloadableOnly)
	{
		super.removeUnreferencedResources_NoVirtual(reloadableOnly);
	}
	public void removeUnreferencedResources()
	{
		super.removeUnreferencedResources_NoVirtual();
	}
	public void removeUnreferencedResource(String name)
	{
		super.removeUnreferencedResource_NoVirtual(name);
	}
	public void removeUnreferencedResource(String name, String groupName)
	{
		super.removeUnreferencedResource_NoVirtual(name, groupName);
	}
	/**
	 * 卸载所有未被引用的资源				
	 * @param  
	 */
	public void unloadUnreferencedResource(String name, String groupName)
	{
		super.unloadUnreferencedResource_NoVirtual(name, groupName);
	}
	public void unloadUnreferencedResource(String name, String groupName, int useCount)
	{
		super.unloadUnreferencedResource_NoVirtual(name, groupName, useCount);
	}
	/**
	 * 获取资源				
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr getByName(String name, String groupName)
	{
		return super.getByName_NoVirtual(name, groupName);
	}
	public com.earthview.world.graphic.ResourcePtr getByName(String name)
	{
		return super.getByName_NoVirtual(name);
	}
	public com.earthview.world.graphic.ResourcePtr getByHandle(ULongPointer handle)
	{
		return super.getByHandle_NoVirtual(handle);
	}
	/**
	 * 判断资源是否存在于资源管理器中				
	 * @param  
	 */
	public boolean resourceExists(String name)
	{
		return super.resourceExists_NoVirtual(name);
	}
	public boolean resourceExists(ULongPointer handle)
	{
		return super.resourceExists_NoVirtual(handle);
	}
	/**
	 * 通知资源被开始使用				
	 * @param  
	 */
	public void _notifyResourceTouched(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceTouched_NoVirtual(res);
	}
	/**
	 * 通知资源被加载完成			
	 * @param  
	 */
	public void _notifyResourceLoaded(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceLoaded_NoVirtual(res);
	}
	/**
	 * 通知资源被卸载完成			
	 * @param  
	 */
	public void _notifyResourceUnloaded(com.earthview.world.graphic.Resource res)
	{
		super._notifyResourceUnloaded_NoVirtual(res);
	}
	/**
	 * 准备资源			
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader, loadParams, backgroundThread);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader, loadParams);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.prepare_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr prepare(String name, String group, boolean isManual)
	{
		return super.prepare_NoVirtual(name, group, isManual);
	}
	/**
	 * 加载资源			
	 * @param  
	 */
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, boolean backgroundThread)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader, loadParams, backgroundThread);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader, loadParams);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		return super.load_NoVirtual(name, group, isManual, ref_loader);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, boolean isManual)
	{
		return super.load_NoVirtual(name, group, isManual);
	}
	public com.earthview.world.graphic.ResourcePtr load(String name, String group)
	{
		return super.load_NoVirtual(name, group);
	}
	public void setVerbose(boolean v)
	{
		super.setVerbose_NoVirtual(v);
	}
	public boolean getVerbose()
	{
		return super.getVerbose_NoVirtual();
	}
	public void addImpl(com.earthview.world.graphic.ResourcePtr res)
	{
		super.addImpl_NoVirtual(res);
	}
	public void removeImpl(com.earthview.world.graphic.ResourcePtr res)
	{
		super.removeImpl_NoVirtual(res);
	}
	public void checkUsage()
	{
		super.checkUsage_NoVirtual();
	}
	public com.earthview.world.core.StringVector getScriptPatterns()
	{
		return super.getScriptPatterns_NoVirtual();
	}
	public double getLoadingOrder()
	{
		return super.getLoadingOrder_NoVirtual();
	}
	
	native protected void register_setDefaultTextureFiltering_TextureFilterOptions(long pNativeObject, String method);
	native protected void register_setDefaultTextureFiltering_FilterType_FilterOptions(long pNativeObject, String method);
	native protected void register_setDefaultTextureFiltering_FilterOptions_FilterOptions_FilterOptions(long pNativeObject, String method);
	native protected void register_getDefaultTextureFiltering_FilterType(long pNativeObject, String method);
	native protected void register_getDefaultSettings_void(long pNativeObject, String method);
	native protected void register__getSchemeIndex_EVString(long pNativeObject, String method);
	native protected void register__getSchemeName_ev_uint16(long pNativeObject, String method);
	native protected void register__getActiveSchemeIndex_void(long pNativeObject, String method);
	native protected void register_getActiveScheme_void(long pNativeObject, String method);
	native protected void register_setActiveScheme_EVString(long pNativeObject, String method);
	native protected void register_addListener_CMaterialListener_EVString(long pNativeObject, String method);
	native protected void register_addListener_CMaterialListener(long pNativeObject, String method);
	native protected void register_removeListener_CMaterialListener_EVString(long pNativeObject, String method);
	native protected void register_removeListener_CMaterialListener(long pNativeObject, String method);
	native protected void register__arbitrateMissingTechniqueForActiveScheme_CMaterial_ev_uint16_CRenderable(long pNativeObject, String method);
	native protected void register_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_create_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_create_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_create_EVString_EVString(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString(long pNativeObject, String method);
	native protected void register_setMemoryBudget_ev_size_t(long pNativeObject, String method);
	native protected void register_getMemoryBudget_void(long pNativeObject, String method);
	native protected void register_getMemoryUsage_void(long pNativeObject, String method);
	native protected void register_unload_EVString(long pNativeObject, String method);
	native protected void register_unload_ev_uint64(long pNativeObject, String method);
	native protected void register_unloadAll_ev_bool(long pNativeObject, String method);
	native protected void register_unloadAll_void(long pNativeObject, String method);
	native protected void register_reloadAll_ev_bool(long pNativeObject, String method);
	native protected void register_reloadAll_void(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResources_ev_bool(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResources_void(long pNativeObject, String method);
	native protected void register_reloadUnreferencedResources_ev_bool(long pNativeObject, String method);
	native protected void register_reloadUnreferencedResources_void(long pNativeObject, String method);
	native protected void register_remove_ResourcePtr(long pNativeObject, String method);
	native protected void register_remove_EVString(long pNativeObject, String method);
	native protected void register_remove_ev_uint64(long pNativeObject, String method);
	native protected void register_remove_EVString_EVString(long pNativeObject, String method);
	native protected void register_removeAll_void(long pNativeObject, String method);
	native protected void register_removeUnreferencedResources_ev_bool(long pNativeObject, String method);
	native protected void register_removeUnreferencedResources_void(long pNativeObject, String method);
	native protected void register_removeUnreferencedResource_EVString(long pNativeObject, String method);
	native protected void register_removeUnreferencedResource_EVString_EVString(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResource_EVString_EVString(long pNativeObject, String method);
	native protected void register_unloadUnreferencedResource_EVString_EVString_ev_uint16(long pNativeObject, String method);
	native protected void register_getByName_EVString_EVString(long pNativeObject, String method);
	native protected void register_getByName_EVString(long pNativeObject, String method);
	native protected void register_getByHandle_ev_uint64(long pNativeObject, String method);
	native protected void register_resourceExists_EVString(long pNativeObject, String method);
	native protected void register_resourceExists_ev_uint64(long pNativeObject, String method);
	native protected void register__notifyResourceTouched_CResource(long pNativeObject, String method);
	native protected void register__notifyResourceLoaded_CResource(long pNativeObject, String method);
	native protected void register__notifyResourceUnloaded_CResource(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString(long pNativeObject, String method);
	native protected void register_setVerbose_ev_bool(long pNativeObject, String method);
	native protected void register_getVerbose_void(long pNativeObject, String method);
	native protected void register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_addImpl_ResourcePtr(long pNativeObject, String method);
	native protected void register_removeImpl_ResourcePtr(long pNativeObject, String method);
	native protected void register_checkUsage_void(long pNativeObject, String method);
	native protected void register_getScriptPatterns_void(long pNativeObject, String method);
	native protected void register_parseScript_DataStreamPtr_EVString(long pNativeObject, String method);
	native protected void register_getLoadingOrder_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setDefaultTextureFiltering_TextureFilterOptions(this.nativeObject.pointer, "setDefaultTextureFiltering_TextureFilterOptions_callback");
			this.register_setDefaultTextureFiltering_FilterType_FilterOptions(this.nativeObject.pointer, "setDefaultTextureFiltering_FilterType_FilterOptions_callback");
			this.register_setDefaultTextureFiltering_FilterOptions_FilterOptions_FilterOptions(this.nativeObject.pointer, "setDefaultTextureFiltering_FilterOptions_FilterOptions_FilterOptions_callback");
			this.register_getDefaultTextureFiltering_FilterType(this.nativeObject.pointer, "getDefaultTextureFiltering_FilterType_callback");
			this.register_getDefaultSettings_void(this.nativeObject.pointer, "getDefaultSettings_void_callback");
			this.register__getSchemeIndex_EVString(this.nativeObject.pointer, "_getSchemeIndex_EVString_callback");
			this.register__getSchemeName_ev_uint16(this.nativeObject.pointer, "_getSchemeName_ev_uint16_callback");
			this.register__getActiveSchemeIndex_void(this.nativeObject.pointer, "_getActiveSchemeIndex_void_callback");
			this.register_getActiveScheme_void(this.nativeObject.pointer, "getActiveScheme_void_callback");
			this.register_setActiveScheme_EVString(this.nativeObject.pointer, "setActiveScheme_EVString_callback");
			this.register_addListener_CMaterialListener_EVString(this.nativeObject.pointer, "addListener_CMaterialListener_EVString_callback");
			this.register_addListener_CMaterialListener(this.nativeObject.pointer, "addListener_CMaterialListener_callback");
			this.register_removeListener_CMaterialListener_EVString(this.nativeObject.pointer, "removeListener_CMaterialListener_EVString_callback");
			this.register_removeListener_CMaterialListener(this.nativeObject.pointer, "removeListener_CMaterialListener_callback");
			this.register__arbitrateMissingTechniqueForActiveScheme_CMaterial_ev_uint16_CRenderable(this.nativeObject.pointer, "_arbitrateMissingTechniqueForActiveScheme_CMaterial_ev_uint16_CRenderable_callback");
			this.register_create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "create_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_create_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "create_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_create_EVString_EVString_ev_bool(this.nativeObject.pointer, "create_EVString_EVString_ev_bool_callback");
			this.register_create_EVString_EVString(this.nativeObject.pointer, "create_EVString_EVString_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_createUnmanaged_EVString_ev_bool(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_callback");
			this.register_createUnmanaged_EVString(this.nativeObject.pointer, "createUnmanaged_EVString_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_callback");
			this.register_createOrRetrieve_EVString_EVString(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_callback");
			this.register_setMemoryBudget_ev_size_t(this.nativeObject.pointer, "setMemoryBudget_ev_size_t_callback");
			this.register_getMemoryBudget_void(this.nativeObject.pointer, "getMemoryBudget_void_callback");
			this.register_getMemoryUsage_void(this.nativeObject.pointer, "getMemoryUsage_void_callback");
			this.register_unload_EVString(this.nativeObject.pointer, "unload_EVString_callback");
			this.register_unload_ev_uint64(this.nativeObject.pointer, "unload_ev_uint64_callback");
			this.register_unloadAll_ev_bool(this.nativeObject.pointer, "unloadAll_ev_bool_callback");
			this.register_unloadAll_void(this.nativeObject.pointer, "unloadAll_void_callback");
			this.register_reloadAll_ev_bool(this.nativeObject.pointer, "reloadAll_ev_bool_callback");
			this.register_reloadAll_void(this.nativeObject.pointer, "reloadAll_void_callback");
			this.register_unloadUnreferencedResources_ev_bool(this.nativeObject.pointer, "unloadUnreferencedResources_ev_bool_callback");
			this.register_unloadUnreferencedResources_void(this.nativeObject.pointer, "unloadUnreferencedResources_void_callback");
			this.register_reloadUnreferencedResources_ev_bool(this.nativeObject.pointer, "reloadUnreferencedResources_ev_bool_callback");
			this.register_reloadUnreferencedResources_void(this.nativeObject.pointer, "reloadUnreferencedResources_void_callback");
			this.register_remove_ResourcePtr(this.nativeObject.pointer, "remove_ResourcePtr_callback");
			this.register_remove_EVString(this.nativeObject.pointer, "remove_EVString_callback");
			this.register_remove_ev_uint64(this.nativeObject.pointer, "remove_ev_uint64_callback");
			this.register_remove_EVString_EVString(this.nativeObject.pointer, "remove_EVString_EVString_callback");
			this.register_removeAll_void(this.nativeObject.pointer, "removeAll_void_callback");
			this.register_removeUnreferencedResources_ev_bool(this.nativeObject.pointer, "removeUnreferencedResources_ev_bool_callback");
			this.register_removeUnreferencedResources_void(this.nativeObject.pointer, "removeUnreferencedResources_void_callback");
			this.register_removeUnreferencedResource_EVString(this.nativeObject.pointer, "removeUnreferencedResource_EVString_callback");
			this.register_removeUnreferencedResource_EVString_EVString(this.nativeObject.pointer, "removeUnreferencedResource_EVString_EVString_callback");
			this.register_unloadUnreferencedResource_EVString_EVString(this.nativeObject.pointer, "unloadUnreferencedResource_EVString_EVString_callback");
			this.register_unloadUnreferencedResource_EVString_EVString_ev_uint16(this.nativeObject.pointer, "unloadUnreferencedResource_EVString_EVString_ev_uint16_callback");
			this.register_getByName_EVString_EVString(this.nativeObject.pointer, "getByName_EVString_EVString_callback");
			this.register_getByName_EVString(this.nativeObject.pointer, "getByName_EVString_callback");
			this.register_getByHandle_ev_uint64(this.nativeObject.pointer, "getByHandle_ev_uint64_callback");
			this.register_resourceExists_EVString(this.nativeObject.pointer, "resourceExists_EVString_callback");
			this.register_resourceExists_ev_uint64(this.nativeObject.pointer, "resourceExists_ev_uint64_callback");
			this.register__notifyResourceTouched_CResource(this.nativeObject.pointer, "_notifyResourceTouched_CResource_callback");
			this.register__notifyResourceLoaded_CResource(this.nativeObject.pointer, "_notifyResourceLoaded_CResource_callback");
			this.register__notifyResourceUnloaded_CResource(this.nativeObject.pointer, "_notifyResourceUnloaded_CResource_callback");
			this.register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback");
			this.register_prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_prepare_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_prepare_EVString_EVString_ev_bool(this.nativeObject.pointer, "prepare_EVString_EVString_ev_bool_callback");
			this.register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_callback");
			this.register_load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_load_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_load_EVString_EVString_ev_bool(this.nativeObject.pointer, "load_EVString_EVString_ev_bool_callback");
			this.register_load_EVString_EVString(this.nativeObject.pointer, "load_EVString_EVString_callback");
			this.register_setVerbose_ev_bool(this.nativeObject.pointer, "setVerbose_ev_bool_callback");
			this.register_getVerbose_void(this.nativeObject.pointer, "getVerbose_void_callback");
			this.register_createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "createImpl_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_addImpl_ResourcePtr(this.nativeObject.pointer, "addImpl_ResourcePtr_callback");
			this.register_removeImpl_ResourcePtr(this.nativeObject.pointer, "removeImpl_ResourcePtr_callback");
			this.register_checkUsage_void(this.nativeObject.pointer, "checkUsage_void_callback");
			this.register_getScriptPatterns_void(this.nativeObject.pointer, "getScriptPatterns_void_callback");
			this.register_parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, "parseScript_DataStreamPtr_EVString_callback");
			this.register_getLoadingOrder_void(this.nativeObject.pointer, "getLoadingOrder_void_callback");
		}
	}
	
	public static MaterialManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MaterialManager obj = null;
 		if(baseObj instanceof MaterialManager)
		{
			obj = (MaterialManager)baseObj;
		} else {
			obj = new MaterialManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMaterialManager");
			obj.increaseCast();
		}

		return obj;
	}
}
