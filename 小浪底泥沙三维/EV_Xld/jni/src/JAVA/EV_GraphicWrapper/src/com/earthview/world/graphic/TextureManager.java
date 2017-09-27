package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 纹理管理类,管理纹理
 */
public class TextureManager extends com.earthview.world.graphic.ResourceManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTextureManager", new TextureManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCTextureManagerProxy", new TextureManagerClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public TextureManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTextureManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.TextureManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long getSingleton_void();
	/**
	 * 获得单例
	 */
	public static com.earthview.world.graphic.TextureManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.TextureManager __returnValue = new com.earthview.world.graphic.TextureManager(CreatedWhenConstruct.CWC_NotToCreate, "CTextureManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 获得单例
	 * @param  
	 */
	public static com.earthview.world.graphic.TextureManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureManager __returnValue = new com.earthview.world.graphic.TextureManager(CreatedWhenConstruct.CWC_NotToCreate, "CTextureManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureManager");
		}
		return __returnValue;
	}
	protected  long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_callback(String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.PixelFormat desiredFormatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(desiredFormat);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult returnValue = createOrRetrieve(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection);
	/**
	 * 创建一个新的纹理，或者得到一件存在的同名的纹理
	 * @param name 纹理名称
	 * @param group 
	 * @param isManual 
	 * @param loader 
	 * @param createParams 
	 * @param texType 加载或创建的纹理的类型，默认是2D的
	 * @param numMipmaps 多级渐进纹理的数量
	 * @param gamma 
	 * @param isAlpha 
	 * @param desiredFormat 
	 * @param hwGammaCorrection 
	 */
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	protected  long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_callback(String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.PixelFormat desiredFormatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(desiredFormat);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult returnValue = createOrRetrieve(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat);
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	protected  long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_callback(String name, String group, boolean isManual, long loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader loaderParamValue = (loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(loaderParamValue != null)
		{
		loaderParamValue.setDelegate(true);
		loaderParamValue.setInstancePointer(new InstancePointer(loader));
		IClassFactory loaderParamValueClassFactory = GlobalClassFactoryMap.get(loaderParamValue.getCppInstanceTypeName());
		if (loaderParamValueClassFactory != null)
		{
			loaderParamValue.setDelegate(true);
			loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)loaderParamValueClassFactory.create();
			loaderParamValue.setDelegate(true);
			loaderParamValue.setInstancePointer(new InstancePointer(loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult returnValue = createOrRetrieve(nameParamValue, groupParamValue, isManualParamValue, loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String name, String group, boolean isManual, long loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha);
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long loaderParamValue = (loader == null ? 0L : loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long loaderParamValue = (loader == null ? 0L : loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	protected  long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_callback(String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult returnValue = createOrRetrieve(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma);
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	protected  long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_callback(String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult returnValue = createOrRetrieve(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps);
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	protected  long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_callback(String name, String group, boolean isManual, long ref_loader, long createParams, int texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult returnValue = createOrRetrieve(nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams, int texType);
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams, int texType);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams);
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long ref_loader, long createParams);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String name, String group, boolean isManual, long loader);
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long loaderParamValue = (loader == null ? 0L : loader.nativeObject.pointer);
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, loaderParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(long pNativeObject, String name, String group, boolean isManual, long loader);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long loaderParamValue = (loader == null ? 0L : loader.nativeObject.pointer);
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue, loaderParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString_ev_bool(long pNativeObject, String name, String group, boolean isManual);
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_ev_bool_NoVirtual(long pNativeObject, String name, String group, boolean isManual);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group, boolean isManual)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long returnValue = createOrRetrieve_EVString_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	native private long createOrRetrieve_EVString_EVString(long pNativeObject, String name, String group);
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = createOrRetrieve_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long createOrRetrieve_EVString_EVString_NoVirtual(long pNativeObject, String name, String group);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult createOrRetrieve_NoVirtual(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = createOrRetrieve_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	protected  long replaceResource_EVString_EVString_callback(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult returnValue = replaceResource(nameParamValue, groupParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long replaceResource_EVString_EVString(long pNativeObject, String name, String group);
	public com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult replaceResource(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = replaceResource_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private long replaceResource_EVString_EVString_NoVirtual(long pNativeObject, String name, String group);
	protected com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult replaceResource_NoVirtual(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = replaceResource_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceManager.ResourceCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourceCreateOrRetrieveResult");
		}
		return __returnValue;
	}

	protected  long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_callback(String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.PixelFormat desiredFormatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(desiredFormat);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		com.earthview.world.graphic.ResourcePtr returnValue = createUnmanaged(nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection);
	/**
	 * 创建一个新的纹理
	 * @param name 纹理名称
	 * @param isManual 
	 * @param loader 
	 * @param createParams 
	 * @param texType 加载或创建的纹理的类型，默认是2D的
	 * @param numMipmaps 多级渐进纹理的数量
	 * @param gamma 
	 * @param isAlpha 
	 * @param desiredFormat 
	 * @param hwGammaCorrection 
	 */
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_callback(String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.PixelFormat desiredFormatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(desiredFormat);
		com.earthview.world.graphic.ResourcePtr returnValue = createUnmanaged(nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_callback(String name, boolean isManual, long loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader loaderParamValue = (loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(loaderParamValue != null)
		{
		loaderParamValue.setDelegate(true);
		loaderParamValue.setInstancePointer(new InstancePointer(loader));
		IClassFactory loaderParamValueClassFactory = GlobalClassFactoryMap.get(loaderParamValue.getCppInstanceTypeName());
		if (loaderParamValueClassFactory != null)
		{
			loaderParamValue.setDelegate(true);
			loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)loaderParamValueClassFactory.create();
			loaderParamValue.setDelegate(true);
			loaderParamValue.setInstancePointer(new InstancePointer(loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.ResourcePtr returnValue = createUnmanaged(nameParamValue, isManualParamValue, loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String name, boolean isManual, long loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long loaderParamValue = (loader == null ? 0L : loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, nameParamValue, isManualParamValue, loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_NoVirtual(long pNativeObject, String name, boolean isManual, long loader, long createParams, int texType, int numMipmaps, double gamma, boolean isAlpha);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long loaderParamValue = (loader == null ? 0L : loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue, loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_callback(String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		com.earthview.world.graphic.ResourcePtr returnValue = createUnmanaged(nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_NoVirtual(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps, double gamma);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_callback(String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		com.earthview.world.graphic.ResourcePtr returnValue = createUnmanaged(nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_NoVirtual(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams, int texType, int numMipmaps);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType, int numMipmaps)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue, numMipmapsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_callback(String name, boolean isManual, long ref_loader, long createParams, int texType)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList createParamsParamValue = (createParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(createParamsParamValue != null)
		{
		createParamsParamValue.setDelegate(true);
		createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		IClassFactory createParamsParamValueClassFactory = GlobalClassFactoryMap.get(createParamsParamValue.getCppInstanceTypeName());
		if (createParamsParamValueClassFactory != null)
		{
			createParamsParamValue.setDelegate(true);
			createParamsParamValue = (com.earthview.world.core.CommonStringPairList)createParamsParamValueClassFactory.create();
			createParamsParamValue.setDelegate(true);
			createParamsParamValue.setInstancePointer(new InstancePointer(createParams));
		}
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		com.earthview.world.graphic.ResourcePtr returnValue = createUnmanaged(nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams, int texType);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_NoVirtual(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams, int texType);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		int texTypeParamValue = texType.getValue();
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue, texTypeParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String name, boolean isManual, long ref_loader, long createParams);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long createParamsParamValue = (createParams == null ? 0L : createParams.nativeObject.pointer);
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue, ref_loaderParamValue, createParamsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String name, boolean isManual, long loader);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long loaderParamValue = (loader == null ? 0L : loader.nativeObject.pointer);
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, isManualParamValue, loaderParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_CManualResourceLoader_NoVirtual(long pNativeObject, String name, boolean isManual, long loader);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long loaderParamValue = (loader == null ? 0L : loader.nativeObject.pointer);
		long returnValue = createUnmanaged_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue, loaderParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	native private long createUnmanaged_EVString_ev_bool(long pNativeObject, String name, boolean isManual);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name, boolean isManual)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long returnValue = createUnmanaged_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_ev_bool_NoVirtual(long pNativeObject, String name, boolean isManual);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name, boolean isManual)
	{
		String nameParamValue = name;
		boolean isManualParamValue = isManual;
		long returnValue = createUnmanaged_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, isManualParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	native private long createUnmanaged_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.ResourcePtr createUnmanaged(String name)
	{
		String nameParamValue = name;
		long returnValue = createUnmanaged_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long createUnmanaged_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.ResourcePtr createUnmanaged_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createUnmanaged_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_callback(String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.PixelFormat desiredFormatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(desiredFormat);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		com.earthview.world.graphic.TexturePtr returnValue = prepare(nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection);
	/**
	 * 从一个资源定位文件中准备一个纹理
	 * @param name 加载的文件名称
	 * @param group 划分纹理的资源名称
	 * @param texType 加载或创建的纹理的类型，默认是2D的
	 * @param numMipmaps 多级渐进纹理的数量
	 * @param gamma 
	 * @param isAlpha 仅适用于灰白影像
	 * @param desiredFormat 
	 * @param hwGammaCorrection 
	 */
	public com.earthview.world.graphic.TexturePtr prepare(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection);
	protected com.earthview.world.graphic.TexturePtr prepare_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_callback(String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.PixelFormat desiredFormatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(desiredFormat);
		com.earthview.world.graphic.TexturePtr returnValue = prepare(nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat);
	public com.earthview.world.graphic.TexturePtr prepare(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		long returnValue = prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat);
	protected com.earthview.world.graphic.TexturePtr prepare_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		long returnValue = prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_callback(String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.TexturePtr returnValue = prepare(nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha);
	public com.earthview.world.graphic.TexturePtr prepare(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		long returnValue = prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_NoVirtual(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha);
	protected com.earthview.world.graphic.TexturePtr prepare_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		long returnValue = prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_TextureType_ev_int32_Real_callback(String name, String group, int texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		com.earthview.world.graphic.TexturePtr returnValue = prepare(nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_TextureType_ev_int32_Real(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma);
	public com.earthview.world.graphic.TexturePtr prepare(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		long returnValue = prepare_EVString_EVString_TextureType_ev_int32_Real(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_TextureType_ev_int32_Real_NoVirtual(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma);
	protected com.earthview.world.graphic.TexturePtr prepare_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		long returnValue = prepare_EVString_EVString_TextureType_ev_int32_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_TextureType_ev_int32_callback(String name, String group, int texType, int numMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		com.earthview.world.graphic.TexturePtr returnValue = prepare(nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_TextureType_ev_int32(long pNativeObject, String name, String group, int texType, int numMipmaps);
	public com.earthview.world.graphic.TexturePtr prepare(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		long returnValue = prepare_EVString_EVString_TextureType_ev_int32(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_TextureType_ev_int32_NoVirtual(long pNativeObject, String name, String group, int texType, int numMipmaps);
	protected com.earthview.world.graphic.TexturePtr prepare_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		long returnValue = prepare_EVString_EVString_TextureType_ev_int32_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_TextureType_callback(String name, String group, int texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		com.earthview.world.graphic.TexturePtr returnValue = prepare(nameParamValue, groupParamValue, texTypeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString_TextureType(long pNativeObject, String name, String group, int texType);
	public com.earthview.world.graphic.TexturePtr prepare(String name, String group, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long returnValue = prepare_EVString_EVString_TextureType(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_TextureType_NoVirtual(long pNativeObject, String name, String group, int texType);
	protected com.earthview.world.graphic.TexturePtr prepare_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long returnValue = prepare_EVString_EVString_TextureType_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long prepare_EVString_EVString_callback(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TexturePtr returnValue = prepare(nameParamValue, groupParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long prepare_EVString_EVString(long pNativeObject, String name, String group);
	public com.earthview.world.graphic.TexturePtr prepare(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = prepare_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long prepare_EVString_EVString_NoVirtual(long pNativeObject, String name, String group);
	protected com.earthview.world.graphic.TexturePtr prepare_NoVirtual(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = prepare_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_callback(String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.PixelFormat desiredFormatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(desiredFormat);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		com.earthview.world.graphic.ResourcePtr returnValue = load(nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection);
	/**
	 * 从资源定位文件中加载一个纹理
	 * @param name 加载的文件名称
	 * @param group 划分纹理的资源名称
	 * @param texType 加载或创建的纹理的类型，默认是2D的
	 * @param numMipmaps 多级渐进纹理的数量
	 * @param gamma 
	 * @param isAlpha 仅适用于灰白影像
	 * @param desiredFormat 
	 * @param hwGammaCorrection 
	 */
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_callback(String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.PixelFormat desiredFormatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(desiredFormat);
		com.earthview.world.graphic.ResourcePtr returnValue = load(nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat);
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		long returnValue = load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha, int desiredFormat);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		long returnValue = load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_callback(String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.ResourcePtr returnValue = load(nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha);
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		long returnValue = load_EVString_EVString_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_NoVirtual(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma, boolean isAlpha);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma, boolean isAlpha)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		long returnValue = load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue, isAlphaParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_TextureType_ev_int32_Real_callback(String name, String group, int texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		com.earthview.world.graphic.ResourcePtr returnValue = load(nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_TextureType_ev_int32_Real(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma);
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		long returnValue = load_EVString_EVString_TextureType_ev_int32_Real(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_TextureType_ev_int32_Real_NoVirtual(long pNativeObject, String name, String group, int texType, int numMipmaps, double gamma);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		double gammaParamValue = gamma;
		long returnValue = load_EVString_EVString_TextureType_ev_int32_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_TextureType_ev_int32_callback(String name, String group, int texType, int numMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int numMipmapsParamValue = numMipmaps;
		com.earthview.world.graphic.ResourcePtr returnValue = load(nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_TextureType_ev_int32(long pNativeObject, String name, String group, int texType, int numMipmaps);
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		long returnValue = load_EVString_EVString_TextureType_ev_int32(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_TextureType_ev_int32_NoVirtual(long pNativeObject, String name, String group, int texType, int numMipmaps);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, int numMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		int numMipmapsParamValue = numMipmaps;
		long returnValue = load_EVString_EVString_TextureType_ev_int32_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, numMipmapsParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long load_EVString_EVString_TextureType_callback(String name, String group, int texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		com.earthview.world.graphic.ResourcePtr returnValue = load(nameParamValue, groupParamValue, texTypeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long load_EVString_EVString_TextureType(long pNativeObject, String name, String group, int texType);
	public com.earthview.world.graphic.ResourcePtr load(String name, String group, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long returnValue = load_EVString_EVString_TextureType(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_TextureType_NoVirtual(long pNativeObject, String name, String group, int texType);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long returnValue = load_EVString_EVString_TextureType_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	native private long load_EVString_EVString(long pNativeObject, String name, String group);
	public com.earthview.world.graphic.ResourcePtr load(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = load_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}
	native private long load_EVString_EVString_NoVirtual(long pNativeObject, String name, String group);
	protected com.earthview.world.graphic.ResourcePtr load_NoVirtual(String name, String group)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long returnValue = load_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue);
		com.earthview.world.graphic.ResourcePtr __returnValue = new com.earthview.world.graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourcePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ResourcePtr");
		}
		return __returnValue;
	}

	protected  long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_callback(String name, String group, long img, int texType, int iNumMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.Image imgParamValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
		imgParamValue.setDelegate(true);
		imgParamValue.setInstancePointer(new InstancePointer(img));
		IClassFactory imgParamValueClassFactory = GlobalClassFactoryMap.get(imgParamValue.getCppInstanceTypeName());
		if (imgParamValueClassFactory != null)
		{
			imgParamValue.setDelegate(true);
			imgParamValue = (com.earthview.world.graphic.Image)imgParamValueClassFactory.create();
			imgParamValue.setDelegate(true);
			imgParamValue.setInstancePointer(new InstancePointer(img));
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.PixelFormat desiredFormatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(desiredFormat);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		com.earthview.world.graphic.TexturePtr returnValue = loadImage(nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(long pNativeObject, String name, String group, long img, int texType, int iNumMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection);
	/**
	 * 从Image对象中加载纹理
	 * @param name 生成的纹理名称
	 * @param group 划分纹理的资源名称
	 * @param img 包含所加载数据的EarthView::World::Graphic::CImage类对象
	 * @param texType 加载或创建的纹理的类型，默认是2D的
	 * @param iNumMipmaps 多级渐进纹理的数量
	 * @param gamma 
	 * @param isAlpha 仅适用于灰白影像
	 * @param desiredFormat 
	 * @param hwGammaCorrection 
	 */
	public com.earthview.world.graphic.TexturePtr loadImage(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(long pNativeObject, String name, String group, long img, int texType, int iNumMipmaps, double gamma, boolean isAlpha, int desiredFormat, boolean hwGammaCorrection);
	protected com.earthview.world.graphic.TexturePtr loadImage_NoVirtual(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_callback(String name, String group, long img, int texType, int iNumMipmaps, double gamma, boolean isAlpha, int desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.Image imgParamValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
		imgParamValue.setDelegate(true);
		imgParamValue.setInstancePointer(new InstancePointer(img));
		IClassFactory imgParamValueClassFactory = GlobalClassFactoryMap.get(imgParamValue.getCppInstanceTypeName());
		if (imgParamValueClassFactory != null)
		{
			imgParamValue.setDelegate(true);
			imgParamValue = (com.earthview.world.graphic.Image)imgParamValueClassFactory.create();
			imgParamValue.setDelegate(true);
			imgParamValue.setInstancePointer(new InstancePointer(img));
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		com.earthview.world.graphic.PixelFormat desiredFormatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(desiredFormat);
		com.earthview.world.graphic.TexturePtr returnValue = loadImage(nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(long pNativeObject, String name, String group, long img, int texType, int iNumMipmaps, double gamma, boolean isAlpha, int desiredFormat);
	public com.earthview.world.graphic.TexturePtr loadImage(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		long returnValue = loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(long pNativeObject, String name, String group, long img, int texType, int iNumMipmaps, double gamma, boolean isAlpha, int desiredFormat);
	protected com.earthview.world.graphic.TexturePtr loadImage_NoVirtual(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma, boolean isAlpha, com.earthview.world.graphic.PixelFormat desiredFormat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphaParamValue = isAlpha;
		int desiredFormatParamValue = desiredFormat.getValue();
		long returnValue = loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, isAlphaParamValue, desiredFormatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_callback(String name, String group, long img, int texType, int iNumMipmaps, double gamma, boolean isAlphat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.Image imgParamValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
		imgParamValue.setDelegate(true);
		imgParamValue.setInstancePointer(new InstancePointer(img));
		IClassFactory imgParamValueClassFactory = GlobalClassFactoryMap.get(imgParamValue.getCppInstanceTypeName());
		if (imgParamValueClassFactory != null)
		{
			imgParamValue.setDelegate(true);
			imgParamValue = (com.earthview.world.graphic.Image)imgParamValueClassFactory.create();
			imgParamValue.setDelegate(true);
			imgParamValue.setInstancePointer(new InstancePointer(img));
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphatParamValue = isAlphat;
		com.earthview.world.graphic.TexturePtr returnValue = loadImage(nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, isAlphatParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String name, String group, long img, int texType, int iNumMipmaps, double gamma, boolean isAlphat);
	public com.earthview.world.graphic.TexturePtr loadImage(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma, boolean isAlphat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphatParamValue = isAlphat;
		long returnValue = loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, isAlphatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_NoVirtual(long pNativeObject, String name, String group, long img, int texType, int iNumMipmaps, double gamma, boolean isAlphat);
	protected com.earthview.world.graphic.TexturePtr loadImage_NoVirtual(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma, boolean isAlphat)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean isAlphatParamValue = isAlphat;
		long returnValue = loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, isAlphatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_callback(String name, String group, long img, int texType, int iNumMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.Image imgParamValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
		imgParamValue.setDelegate(true);
		imgParamValue.setInstancePointer(new InstancePointer(img));
		IClassFactory imgParamValueClassFactory = GlobalClassFactoryMap.get(imgParamValue.getCppInstanceTypeName());
		if (imgParamValueClassFactory != null)
		{
			imgParamValue.setDelegate(true);
			imgParamValue = (com.earthview.world.graphic.Image)imgParamValueClassFactory.create();
			imgParamValue.setDelegate(true);
			imgParamValue.setInstancePointer(new InstancePointer(img));
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		com.earthview.world.graphic.TexturePtr returnValue = loadImage(nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real(long pNativeObject, String name, String group, long img, int texType, int iNumMipmaps, double gamma);
	public com.earthview.world.graphic.TexturePtr loadImage(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		long returnValue = loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_NoVirtual(long pNativeObject, String name, String group, long img, int texType, int iNumMipmaps, double gamma);
	protected com.earthview.world.graphic.TexturePtr loadImage_NoVirtual(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		long returnValue = loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long loadImage_EVString_EVString_CImage_TextureType_ev_int32_callback(String name, String group, long img, int texType, int iNumMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.Image imgParamValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
		imgParamValue.setDelegate(true);
		imgParamValue.setInstancePointer(new InstancePointer(img));
		IClassFactory imgParamValueClassFactory = GlobalClassFactoryMap.get(imgParamValue.getCppInstanceTypeName());
		if (imgParamValueClassFactory != null)
		{
			imgParamValue.setDelegate(true);
			imgParamValue = (com.earthview.world.graphic.Image)imgParamValueClassFactory.create();
			imgParamValue.setDelegate(true);
			imgParamValue.setInstancePointer(new InstancePointer(img));
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int iNumMipmapsParamValue = iNumMipmaps;
		com.earthview.world.graphic.TexturePtr returnValue = loadImage(nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadImage_EVString_EVString_CImage_TextureType_ev_int32(long pNativeObject, String name, String group, long img, int texType, int iNumMipmaps);
	public com.earthview.world.graphic.TexturePtr loadImage(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType, int iNumMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		long returnValue = loadImage_EVString_EVString_CImage_TextureType_ev_int32(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadImage_EVString_EVString_CImage_TextureType_ev_int32_NoVirtual(long pNativeObject, String name, String group, long img, int texType, int iNumMipmaps);
	protected com.earthview.world.graphic.TexturePtr loadImage_NoVirtual(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType, int iNumMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		long returnValue = loadImage_EVString_EVString_CImage_TextureType_ev_int32_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue, iNumMipmapsParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long loadImage_EVString_EVString_CImage_TextureType_callback(String name, String group, long img, int texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.Image imgParamValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
		imgParamValue.setDelegate(true);
		imgParamValue.setInstancePointer(new InstancePointer(img));
		IClassFactory imgParamValueClassFactory = GlobalClassFactoryMap.get(imgParamValue.getCppInstanceTypeName());
		if (imgParamValueClassFactory != null)
		{
			imgParamValue.setDelegate(true);
			imgParamValue = (com.earthview.world.graphic.Image)imgParamValueClassFactory.create();
			imgParamValue.setDelegate(true);
			imgParamValue.setInstancePointer(new InstancePointer(img));
		}
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		com.earthview.world.graphic.TexturePtr returnValue = loadImage(nameParamValue, groupParamValue, imgParamValue, texTypeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadImage_EVString_EVString_CImage_TextureType(long pNativeObject, String name, String group, long img, int texType);
	public com.earthview.world.graphic.TexturePtr loadImage(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		long returnValue = loadImage_EVString_EVString_CImage_TextureType(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadImage_EVString_EVString_CImage_TextureType_NoVirtual(long pNativeObject, String name, String group, long img, int texType);
	protected com.earthview.world.graphic.TexturePtr loadImage_NoVirtual(String name, String group, com.earthview.world.graphic.Image img, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		int texTypeParamValue = texType.getValue();
		long returnValue = loadImage_EVString_EVString_CImage_TextureType_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue, texTypeParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long loadImage_EVString_EVString_CImage_callback(String name, String group, long img)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.Image imgParamValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
		imgParamValue.setDelegate(true);
		imgParamValue.setInstancePointer(new InstancePointer(img));
		IClassFactory imgParamValueClassFactory = GlobalClassFactoryMap.get(imgParamValue.getCppInstanceTypeName());
		if (imgParamValueClassFactory != null)
		{
			imgParamValue.setDelegate(true);
			imgParamValue = (com.earthview.world.graphic.Image)imgParamValueClassFactory.create();
			imgParamValue.setDelegate(true);
			imgParamValue.setInstancePointer(new InstancePointer(img));
		}
		com.earthview.world.graphic.TexturePtr returnValue = loadImage(nameParamValue, groupParamValue, imgParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadImage_EVString_EVString_CImage(long pNativeObject, String name, String group, long img);
	public com.earthview.world.graphic.TexturePtr loadImage(String name, String group, com.earthview.world.graphic.Image img)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		long returnValue = loadImage_EVString_EVString_CImage(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadImage_EVString_EVString_CImage_NoVirtual(long pNativeObject, String name, String group, long img);
	protected com.earthview.world.graphic.TexturePtr loadImage_NoVirtual(String name, String group, com.earthview.world.graphic.Image img)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long imgParamValue = img.nativeObject.pointer;
		long returnValue = loadImage_EVString_EVString_CImage_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, imgParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_callback(String name, String group, long stream, int uWidth, int uHeight, int format, int texType, int iNumMipmaps, double gamma, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.core.DataStreamPtr streamParamValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		com.earthview.world.graphic.TexturePtr returnValue = loadRawData(nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, hwGammaCorrectionParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String name, String group, long stream, int uWidth, int uHeight, int format, int texType, int iNumMipmaps, double gamma, boolean hwGammaCorrection);
	/**
	 * 从原始数据流加载纹理
	 * @param name 生成的纹理名称
	 * @param group 划分纹理的资源名称
	 * @param stream 引入的数据流
	 * @param uWidth 该纹理的宽
	 * @param uHeight 该纹理的高
	 * @param format 导入的数据的格式
	 * @param texType 加载或创建的纹理的类型，默认是2D的
	 * @param iNumMipmaps 多级渐进纹理的数量
	 * @param gamma 
	 * @param hwGammaCorrection 
	 */
	public com.earthview.world.graphic.TexturePtr loadRawData(String name, String group, com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat format, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int formatParamValue = format.getValue();
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_NoVirtual(long pNativeObject, String name, String group, long stream, int uWidth, int uHeight, int format, int texType, int iNumMipmaps, double gamma, boolean hwGammaCorrection);
	protected com.earthview.world.graphic.TexturePtr loadRawData_NoVirtual(String name, String group, com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat format, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int formatParamValue = format.getValue();
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_callback(String name, String group, long stream, int uWidth, int uHeight, int format, int texType, int iNumMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.core.DataStreamPtr streamParamValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		com.earthview.world.graphic.TexturePtr returnValue = loadRawData(nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(long pNativeObject, String name, String group, long stream, int uWidth, int uHeight, int format, int texType, int iNumMipmaps, double gamma);
	public com.earthview.world.graphic.TexturePtr loadRawData(String name, String group, com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat format, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int formatParamValue = format.getValue();
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		long returnValue = loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(this.nativeObject.pointer, nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_NoVirtual(long pNativeObject, String name, String group, long stream, int uWidth, int uHeight, int format, int texType, int iNumMipmaps, double gamma);
	protected com.earthview.world.graphic.TexturePtr loadRawData_NoVirtual(String name, String group, com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat format, com.earthview.world.graphic.TextureType texType, int iNumMipmaps, double gamma)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int formatParamValue = format.getValue();
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		double gammaParamValue = gamma;
		long returnValue = loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue, iNumMipmapsParamValue, gammaParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_callback(String name, String group, long stream, int uWidth, int uHeight, int format, int texType, int iNumMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.core.DataStreamPtr streamParamValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		int iNumMipmapsParamValue = iNumMipmaps;
		com.earthview.world.graphic.TexturePtr returnValue = loadRawData(nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue, iNumMipmapsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(long pNativeObject, String name, String group, long stream, int uWidth, int uHeight, int format, int texType, int iNumMipmaps);
	public com.earthview.world.graphic.TexturePtr loadRawData(String name, String group, com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat format, com.earthview.world.graphic.TextureType texType, int iNumMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int formatParamValue = format.getValue();
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		long returnValue = loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(this.nativeObject.pointer, nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue, iNumMipmapsParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_NoVirtual(long pNativeObject, String name, String group, long stream, int uWidth, int uHeight, int format, int texType, int iNumMipmaps);
	protected com.earthview.world.graphic.TexturePtr loadRawData_NoVirtual(String name, String group, com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat format, com.earthview.world.graphic.TextureType texType, int iNumMipmaps)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int formatParamValue = format.getValue();
		int texTypeParamValue = texType.getValue();
		int iNumMipmapsParamValue = iNumMipmaps;
		long returnValue = loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue, iNumMipmapsParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_callback(String name, String group, long stream, int uWidth, int uHeight, int format, int texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.core.DataStreamPtr streamParamValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		com.earthview.world.graphic.TexturePtr returnValue = loadRawData(nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(long pNativeObject, String name, String group, long stream, int uWidth, int uHeight, int format, int texType);
	public com.earthview.world.graphic.TexturePtr loadRawData(String name, String group, com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat format, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int formatParamValue = format.getValue();
		int texTypeParamValue = texType.getValue();
		long returnValue = loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(this.nativeObject.pointer, nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_NoVirtual(long pNativeObject, String name, String group, long stream, int uWidth, int uHeight, int format, int texType);
	protected com.earthview.world.graphic.TexturePtr loadRawData_NoVirtual(String name, String group, com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat format, com.earthview.world.graphic.TextureType texType)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int formatParamValue = format.getValue();
		int texTypeParamValue = texType.getValue();
		long returnValue = loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue, texTypeParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_callback(String name, String group, long stream, int uWidth, int uHeight, int format)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.core.DataStreamPtr streamParamValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		com.earthview.world.graphic.TexturePtr returnValue = loadRawData(nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(long pNativeObject, String name, String group, long stream, int uWidth, int uHeight, int format);
	public com.earthview.world.graphic.TexturePtr loadRawData(String name, String group, com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat format)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int formatParamValue = format.getValue();
		long returnValue = loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(this.nativeObject.pointer, nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_NoVirtual(long pNativeObject, String name, String group, long stream, int uWidth, int uHeight, int format);
	protected com.earthview.world.graphic.TexturePtr loadRawData_NoVirtual(String name, String group, com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat format)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int formatParamValue = format.getValue();
		long returnValue = loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, streamParamValue, uWidthParamValue, uHeightParamValue, formatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_callback(String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection, long fsaa, String fsaaHint)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		int usageParamValue = usage;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long fsaaParamValue = fsaa;
		String fsaaHintParamValue = fsaaHint;
		com.earthview.world.graphic.TexturePtr returnValue = createManual(nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue, fsaaParamValue, fsaaHintParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection, long fsaa, String fsaaHint);
	/**
	 * 用特定的宽，高，深度来创建一个纹理
	 * @param name 生成的纹理名称
	 * @param group 划分纹理的资源名称
	 * @param texType 加载或创建的纹理的类型，默认是2D的
	 * @param width 纹理的宽
	 * @param height 该纹理的高
	 * @param depth 该纹理的深度
	 * @param num_mips 多级渐进纹理的数量
	 * @param format 像素格式
	 * @param usage 用途
	 * @param ref_loader 手动加载器
	 * @param hwGammaCorrection 
	 * @param fsaa 多重采样级别
	 * @param fsaaHint 
	 */
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader, boolean hwGammaCorrection, long fsaa, String fsaaHint)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long fsaaParamValue = fsaa;
		String fsaaHintParamValue = fsaaHint;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue, fsaaParamValue, fsaaHintParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_NoVirtual(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection, long fsaa, String fsaaHint);
	protected com.earthview.world.graphic.TexturePtr createManual_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader, boolean hwGammaCorrection, long fsaa, String fsaaHint)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long fsaaParamValue = fsaa;
		String fsaaHintParamValue = fsaaHint;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue, fsaaParamValue, fsaaHintParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_callback(String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection, long fsaa)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		int usageParamValue = usage;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long fsaaParamValue = fsaa;
		com.earthview.world.graphic.TexturePtr returnValue = createManual(nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue, fsaaParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection, long fsaa);
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader, boolean hwGammaCorrection, long fsaa)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long fsaaParamValue = fsaa;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue, fsaaParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_NoVirtual(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection, long fsaa);
	protected com.earthview.world.graphic.TexturePtr createManual_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader, boolean hwGammaCorrection, long fsaa)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long fsaaParamValue = fsaa;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue, fsaaParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_callback(String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		int usageParamValue = usage;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		com.earthview.world.graphic.TexturePtr returnValue = createManual(nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection);
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_NoVirtual(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection);
	protected com.earthview.world.graphic.TexturePtr createManual_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_callback(String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		int usageParamValue = usage;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.graphic.TexturePtr returnValue = createManual(nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader);
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_NoVirtual(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage, long ref_loader);
	protected com.earthview.world.graphic.TexturePtr createManual_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_callback(String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		int usageParamValue = usage;
		com.earthview.world.graphic.TexturePtr returnValue = createManual(nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage);
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_NoVirtual(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format, int usage);
	protected com.earthview.world.graphic.TexturePtr createManual_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue, usageParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	protected  long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_callback(String name, String group, int texType, long width, long height, long depth, int num_mips, int format)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.TextureType texTypeParamValue = com.earthview.world.graphic.TextureType.toEnum(texType);
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		com.earthview.world.graphic.TexturePtr returnValue = createManual(nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format);
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_NoVirtual(long pNativeObject, String name, String group, int texType, long width, long height, long depth, int num_mips, int format);
	protected com.earthview.world.graphic.TexturePtr createManual_NoVirtual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, long depth, int num_mips, com.earthview.world.graphic.PixelFormat format)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, depthParamValue, num_mipsParamValue, formatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}

	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(long pNativeObject, String name, String group, int texType, long width, long height, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection, long fsaa, String fsaaHint);
	/**
	 * 手动创建一个深度为1的纹理
	 * @param name 生成的纹理名称
	 * @param group 划分纹理的资源名称
	 * @param texType 加载或创建的纹理的类型，默认是2D的
	 * @param width 纹理的宽
	 * @param height 该纹理的高
	 * @param num_mips 多级渐进纹理的数量
	 * @param format 像素格式
	 * @param usage 用途
	 * @param ref_loader 手动加载器
	 * @param hwGammaCorrection 
	 * @param fsaa 多重采样级别
	 * @param fsaaHint 
	 */
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader, boolean hwGammaCorrection, long fsaa, String fsaaHint)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long fsaaParamValue = fsaa;
		String fsaaHintParamValue = fsaaHint;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue, fsaaParamValue, fsaaHintParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(long pNativeObject, String name, String group, int texType, long width, long height, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection, long fsaa);
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader, boolean hwGammaCorrection, long fsaa)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long fsaaParamValue = fsaa;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue, fsaaParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(long pNativeObject, String name, String group, int texType, long width, long height, int num_mips, int format, int usage, long ref_loader, boolean hwGammaCorrection);
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader, boolean hwGammaCorrection)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		boolean hwGammaCorrectionParamValue = hwGammaCorrection;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue, hwGammaCorrectionParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(long pNativeObject, String name, String group, int texType, long width, long height, int num_mips, int format, int usage, long ref_loader);
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, num_mipsParamValue, formatParamValue, usageParamValue, ref_loaderParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(long pNativeObject, String name, String group, int texType, long width, long height, int num_mips, int format, int usage);
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, int num_mips, com.earthview.world.graphic.PixelFormat format, int usage)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, num_mipsParamValue, formatParamValue, usageParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat(long pNativeObject, String name, String group, int texType, long width, long height, int num_mips, int format);
	public com.earthview.world.graphic.TexturePtr createManual(String name, String group, com.earthview.world.graphic.TextureType texType, long width, long height, int num_mips, com.earthview.world.graphic.PixelFormat format)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		int texTypeParamValue = texType.getValue();
		long widthParamValue = width;
		long heightParamValue = height;
		int num_mipsParamValue = num_mips;
		int formatParamValue = format.getValue();
		long returnValue = createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat(this.nativeObject.pointer, nameParamValue, groupParamValue, texTypeParamValue, widthParamValue, heightParamValue, num_mipsParamValue, formatParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	protected  void setPreferredIntegerBitDepth_ev_uint16_ev_bool_callback(int bits, boolean reloadTextures)
	{
		int bitsParamValue = bits;
		boolean reloadTexturesParamValue = reloadTextures;
		setPreferredIntegerBitDepth(bitsParamValue, reloadTexturesParamValue);
	}

	native private void setPreferredIntegerBitDepth_ev_uint16_ev_bool(long pNativeObject, int bits, boolean reloadTextures);
	/**
	 * 为纹理设置一个首选的位的范围
	 * @param bits 位数
	 * @param reloadTextures 假如为true（默认为true），将要加载所有的可加载的纹理
	 */
	public void setPreferredIntegerBitDepth(int bits, boolean reloadTextures)
	{
		int bitsParamValue = bits;
		boolean reloadTexturesParamValue = reloadTextures;
		setPreferredIntegerBitDepth_ev_uint16_ev_bool(this.nativeObject.pointer, bitsParamValue, reloadTexturesParamValue);
	}
	native private void setPreferredIntegerBitDepth_ev_uint16_ev_bool_NoVirtual(long pNativeObject, int bits, boolean reloadTextures);
	protected void setPreferredIntegerBitDepth_NoVirtual(int bits, boolean reloadTextures)
	{
		int bitsParamValue = bits;
		boolean reloadTexturesParamValue = reloadTextures;
		setPreferredIntegerBitDepth_ev_uint16_ev_bool_NoVirtual(this.nativeObject.pointer, bitsParamValue, reloadTexturesParamValue);
	}

	protected  void setPreferredIntegerBitDepth_ev_uint16_callback(int bits)
	{
		int bitsParamValue = bits;
		setPreferredIntegerBitDepth(bitsParamValue);
	}

	native private void setPreferredIntegerBitDepth_ev_uint16(long pNativeObject, int bits);
	public void setPreferredIntegerBitDepth(int bits)
	{
		int bitsParamValue = bits;
		setPreferredIntegerBitDepth_ev_uint16(this.nativeObject.pointer, bitsParamValue);
	}
	native private void setPreferredIntegerBitDepth_ev_uint16_NoVirtual(long pNativeObject, int bits);
	protected void setPreferredIntegerBitDepth_NoVirtual(int bits)
	{
		int bitsParamValue = bits;
		setPreferredIntegerBitDepth_ev_uint16_NoVirtual(this.nativeObject.pointer, bitsParamValue);
	}

	protected  int getPreferredIntegerBitDepth_void_callback()
	{
		int returnValue = getPreferredIntegerBitDepth();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getPreferredIntegerBitDepth_void(long pNativeObject);
	/**
	 * 得到整型像素格式的纹理首选的位深度
	 * @param  
	 */
	public int getPreferredIntegerBitDepth()
	{
		int returnValue = getPreferredIntegerBitDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getPreferredIntegerBitDepth_void_NoVirtual(long pNativeObject);
	protected int getPreferredIntegerBitDepth_NoVirtual()
	{
		int returnValue = getPreferredIntegerBitDepth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setPreferredFloatBitDepth_ev_uint16_ev_bool_callback(int bits, boolean reloadTextures)
	{
		int bitsParamValue = bits;
		boolean reloadTexturesParamValue = reloadTextures;
		setPreferredFloatBitDepth(bitsParamValue, reloadTexturesParamValue);
	}

	native private void setPreferredFloatBitDepth_ev_uint16_ev_bool(long pNativeObject, int bits, boolean reloadTextures);
	/**
	 * 得到浮点型像素格式的纹理首选的位深度
	 * @param bits 位，可选的值是0,16and32，默认为0（意味着保持原始的格式）
	 * @param reloadTextures 假如为true（默认为true），将要加载所有的可加载的纹理
	 */
	public void setPreferredFloatBitDepth(int bits, boolean reloadTextures)
	{
		int bitsParamValue = bits;
		boolean reloadTexturesParamValue = reloadTextures;
		setPreferredFloatBitDepth_ev_uint16_ev_bool(this.nativeObject.pointer, bitsParamValue, reloadTexturesParamValue);
	}
	native private void setPreferredFloatBitDepth_ev_uint16_ev_bool_NoVirtual(long pNativeObject, int bits, boolean reloadTextures);
	protected void setPreferredFloatBitDepth_NoVirtual(int bits, boolean reloadTextures)
	{
		int bitsParamValue = bits;
		boolean reloadTexturesParamValue = reloadTextures;
		setPreferredFloatBitDepth_ev_uint16_ev_bool_NoVirtual(this.nativeObject.pointer, bitsParamValue, reloadTexturesParamValue);
	}

	protected  void setPreferredFloatBitDepth_ev_uint16_callback(int bits)
	{
		int bitsParamValue = bits;
		setPreferredFloatBitDepth(bitsParamValue);
	}

	native private void setPreferredFloatBitDepth_ev_uint16(long pNativeObject, int bits);
	public void setPreferredFloatBitDepth(int bits)
	{
		int bitsParamValue = bits;
		setPreferredFloatBitDepth_ev_uint16(this.nativeObject.pointer, bitsParamValue);
	}
	native private void setPreferredFloatBitDepth_ev_uint16_NoVirtual(long pNativeObject, int bits);
	protected void setPreferredFloatBitDepth_NoVirtual(int bits)
	{
		int bitsParamValue = bits;
		setPreferredFloatBitDepth_ev_uint16_NoVirtual(this.nativeObject.pointer, bitsParamValue);
	}

	protected  int getPreferredFloatBitDepth_void_callback()
	{
		int returnValue = getPreferredFloatBitDepth();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getPreferredFloatBitDepth_void(long pNativeObject);
	/**
	 * 得到浮点型像素格式纹理的首选的位深度
	 * @param  
	 */
	public int getPreferredFloatBitDepth()
	{
		int returnValue = getPreferredFloatBitDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getPreferredFloatBitDepth_void_NoVirtual(long pNativeObject);
	protected int getPreferredFloatBitDepth_NoVirtual()
	{
		int returnValue = getPreferredFloatBitDepth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setPreferredBitDepths_ev_uint16_ev_uint16_ev_bool_callback(int integerBits, int floatBits, boolean reloadTextures)
	{
		int integerBitsParamValue = integerBits;
		int floatBitsParamValue = floatBits;
		boolean reloadTexturesParamValue = reloadTextures;
		setPreferredBitDepths(integerBitsParamValue, floatBitsParamValue, reloadTexturesParamValue);
	}

	native private void setPreferredBitDepths_ev_uint16_ev_uint16_ev_bool(long pNativeObject, int integerBits, int floatBits, boolean reloadTextures);
	/**
	 * 为整型和浮点型像素格式的纹理设置首选的位深度
	 * @param integerBits 位，可选的值是0,16and32，默认为0（意味着保持原始的格式）
	 * @param floatBits 位，可选的值是0,16and32，默认为0（意味着保持原始的格式）
	 * @param reloadTextures 假如为true（默认为true），将要加载所有的可加载的纹理
	 */
	public void setPreferredBitDepths(int integerBits, int floatBits, boolean reloadTextures)
	{
		int integerBitsParamValue = integerBits;
		int floatBitsParamValue = floatBits;
		boolean reloadTexturesParamValue = reloadTextures;
		setPreferredBitDepths_ev_uint16_ev_uint16_ev_bool(this.nativeObject.pointer, integerBitsParamValue, floatBitsParamValue, reloadTexturesParamValue);
	}
	native private void setPreferredBitDepths_ev_uint16_ev_uint16_ev_bool_NoVirtual(long pNativeObject, int integerBits, int floatBits, boolean reloadTextures);
	protected void setPreferredBitDepths_NoVirtual(int integerBits, int floatBits, boolean reloadTextures)
	{
		int integerBitsParamValue = integerBits;
		int floatBitsParamValue = floatBits;
		boolean reloadTexturesParamValue = reloadTextures;
		setPreferredBitDepths_ev_uint16_ev_uint16_ev_bool_NoVirtual(this.nativeObject.pointer, integerBitsParamValue, floatBitsParamValue, reloadTexturesParamValue);
	}

	protected  void setPreferredBitDepths_ev_uint16_ev_uint16_callback(int integerBits, int floatBits)
	{
		int integerBitsParamValue = integerBits;
		int floatBitsParamValue = floatBits;
		setPreferredBitDepths(integerBitsParamValue, floatBitsParamValue);
	}

	native private void setPreferredBitDepths_ev_uint16_ev_uint16(long pNativeObject, int integerBits, int floatBits);
	public void setPreferredBitDepths(int integerBits, int floatBits)
	{
		int integerBitsParamValue = integerBits;
		int floatBitsParamValue = floatBits;
		setPreferredBitDepths_ev_uint16_ev_uint16(this.nativeObject.pointer, integerBitsParamValue, floatBitsParamValue);
	}
	native private void setPreferredBitDepths_ev_uint16_ev_uint16_NoVirtual(long pNativeObject, int integerBits, int floatBits);
	protected void setPreferredBitDepths_NoVirtual(int integerBits, int floatBits)
	{
		int integerBitsParamValue = integerBits;
		int floatBitsParamValue = floatBits;
		setPreferredBitDepths_ev_uint16_ev_uint16_NoVirtual(this.nativeObject.pointer, integerBitsParamValue, floatBitsParamValue);
	}

	protected  boolean isFormatSupported_TextureType_PixelFormat_ev_int32_callback(int ttype, int format, int usage)
	{
		com.earthview.world.graphic.TextureType ttypeParamValue = com.earthview.world.graphic.TextureType.toEnum(ttype);
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		int usageParamValue = usage;
		boolean returnValue = isFormatSupported(ttypeParamValue, formatParamValue, usageParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isFormatSupported_TextureType_PixelFormat_ev_int32(long pNativeObject, int ttype, int format, int usage);
	/**
	 * 判断该系统能否支持给定的选项的纹理格式
	 * @param ttype 
	 * @param format 要求的像素格式
	 * @param usage 纹理所需要使用的类型
	 * @return 假如支持该格式则返回true
	 */
	public boolean isFormatSupported(com.earthview.world.graphic.TextureType ttype, com.earthview.world.graphic.PixelFormat format, int usage)
	{
		int ttypeParamValue = ttype.getValue();
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		boolean returnValue = isFormatSupported_TextureType_PixelFormat_ev_int32(this.nativeObject.pointer, ttypeParamValue, formatParamValue, usageParamValue);
		return returnValue;
	}
	native private boolean isFormatSupported_TextureType_PixelFormat_ev_int32_NoVirtual(long pNativeObject, int ttype, int format, int usage);
	protected boolean isFormatSupported_NoVirtual(com.earthview.world.graphic.TextureType ttype, com.earthview.world.graphic.PixelFormat format, int usage)
	{
		int ttypeParamValue = ttype.getValue();
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		boolean returnValue = isFormatSupported_TextureType_PixelFormat_ev_int32_NoVirtual(this.nativeObject.pointer, ttypeParamValue, formatParamValue, usageParamValue);
		return returnValue;
	}

	protected  boolean isEquivalentFormatSupported_TextureType_PixelFormat_ev_int32_callback(int ttype, int format, int usage)
	{
		com.earthview.world.graphic.TextureType ttypeParamValue = com.earthview.world.graphic.TextureType.toEnum(ttype);
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		int usageParamValue = usage;
		boolean returnValue = isEquivalentFormatSupported(ttypeParamValue, formatParamValue, usageParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isEquivalentFormatSupported_TextureType_PixelFormat_ev_int32(long pNativeObject, int ttype, int format, int usage);
	/**
	 * 利用给定的选项，判断该系统能否支持纹理格式，或者另一个没有质量损失的格式
	 * @param ttype 
	 * @param format 要求的像素格式
	 * @param usage 纹理所需要使用的类型
	 * @return 假如支持该格式则返回true
	 */
	public boolean isEquivalentFormatSupported(com.earthview.world.graphic.TextureType ttype, com.earthview.world.graphic.PixelFormat format, int usage)
	{
		int ttypeParamValue = ttype.getValue();
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		boolean returnValue = isEquivalentFormatSupported_TextureType_PixelFormat_ev_int32(this.nativeObject.pointer, ttypeParamValue, formatParamValue, usageParamValue);
		return returnValue;
	}
	native private boolean isEquivalentFormatSupported_TextureType_PixelFormat_ev_int32_NoVirtual(long pNativeObject, int ttype, int format, int usage);
	protected boolean isEquivalentFormatSupported_NoVirtual(com.earthview.world.graphic.TextureType ttype, com.earthview.world.graphic.PixelFormat format, int usage)
	{
		int ttypeParamValue = ttype.getValue();
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		boolean returnValue = isEquivalentFormatSupported_TextureType_PixelFormat_ev_int32_NoVirtual(this.nativeObject.pointer, ttypeParamValue, formatParamValue, usageParamValue);
		return returnValue;
	}

	protected  int getNativeFormat_TextureType_PixelFormat_ev_int32_callback(int ttype, int format, int usage)
	{
		com.earthview.world.graphic.TextureType ttypeParamValue = com.earthview.world.graphic.TextureType.toEnum(ttype);
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		int usageParamValue = usage;
		com.earthview.world.graphic.PixelFormat returnValue = getNativeFormat(ttypeParamValue, formatParamValue, usageParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getNativeFormat_TextureType_PixelFormat_ev_int32(long pNativeObject, int ttype, int format, int usage);
	/**
	 * 
	 * @param ttype 
	 * @param format 要求的像素格式
	 * @param usage 纹理所需要使用的类型
	 * @return 返回像素格式
	 */
	public com.earthview.world.graphic.PixelFormat getNativeFormat(com.earthview.world.graphic.TextureType ttype, com.earthview.world.graphic.PixelFormat format, int usage)
	{
		int ttypeParamValue = ttype.getValue();
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		int returnValue = getNativeFormat_TextureType_PixelFormat_ev_int32(this.nativeObject.pointer, ttypeParamValue, formatParamValue, usageParamValue);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private int getNativeFormat_TextureType_PixelFormat_ev_int32_NoVirtual(long pNativeObject, int ttype, int format, int usage);
	protected com.earthview.world.graphic.PixelFormat getNativeFormat_NoVirtual(com.earthview.world.graphic.TextureType ttype, com.earthview.world.graphic.PixelFormat format, int usage)
	{
		int ttypeParamValue = ttype.getValue();
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		int returnValue = getNativeFormat_TextureType_PixelFormat_ev_int32_NoVirtual(this.nativeObject.pointer, ttypeParamValue, formatParamValue, usageParamValue);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}

	protected  boolean isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_ev_bool_callback(int ttype, int format, int usage, boolean preciseFormatOnly)
	{
		com.earthview.world.graphic.TextureType ttypeParamValue = com.earthview.world.graphic.TextureType.toEnum(ttype);
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		int usageParamValue = usage;
		boolean preciseFormatOnlyParamValue = preciseFormatOnly;
		boolean returnValue = isHardwareFilteringSupported(ttypeParamValue, formatParamValue, usageParamValue, preciseFormatOnlyParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_ev_bool(long pNativeObject, int ttype, int format, int usage, boolean preciseFormatOnly);
	/**
	 * 判断硬件是否支持给定纹理类型的过滤
	 * @param ttype 被要求的纹理类型
	 * @param format 被要求的像素格式
	 * @param usage 纹理所需要使用的类型
	 * @param preciseFormatOnly 
	 * @return 假如该纹理过滤器被支持则返回true，否则返回false
	 */
	public boolean isHardwareFilteringSupported(com.earthview.world.graphic.TextureType ttype, com.earthview.world.graphic.PixelFormat format, int usage, boolean preciseFormatOnly)
	{
		int ttypeParamValue = ttype.getValue();
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		boolean preciseFormatOnlyParamValue = preciseFormatOnly;
		boolean returnValue = isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_ev_bool(this.nativeObject.pointer, ttypeParamValue, formatParamValue, usageParamValue, preciseFormatOnlyParamValue);
		return returnValue;
	}
	native private boolean isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_ev_bool_NoVirtual(long pNativeObject, int ttype, int format, int usage, boolean preciseFormatOnly);
	protected boolean isHardwareFilteringSupported_NoVirtual(com.earthview.world.graphic.TextureType ttype, com.earthview.world.graphic.PixelFormat format, int usage, boolean preciseFormatOnly)
	{
		int ttypeParamValue = ttype.getValue();
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		boolean preciseFormatOnlyParamValue = preciseFormatOnly;
		boolean returnValue = isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_ev_bool_NoVirtual(this.nativeObject.pointer, ttypeParamValue, formatParamValue, usageParamValue, preciseFormatOnlyParamValue);
		return returnValue;
	}

	protected  boolean isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_callback(int ttype, int format, int usage)
	{
		com.earthview.world.graphic.TextureType ttypeParamValue = com.earthview.world.graphic.TextureType.toEnum(ttype);
		com.earthview.world.graphic.PixelFormat formatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(format);
		int usageParamValue = usage;
		boolean returnValue = isHardwareFilteringSupported(ttypeParamValue, formatParamValue, usageParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32(long pNativeObject, int ttype, int format, int usage);
	public boolean isHardwareFilteringSupported(com.earthview.world.graphic.TextureType ttype, com.earthview.world.graphic.PixelFormat format, int usage)
	{
		int ttypeParamValue = ttype.getValue();
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		boolean returnValue = isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32(this.nativeObject.pointer, ttypeParamValue, formatParamValue, usageParamValue);
		return returnValue;
	}
	native private boolean isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_NoVirtual(long pNativeObject, int ttype, int format, int usage);
	protected boolean isHardwareFilteringSupported_NoVirtual(com.earthview.world.graphic.TextureType ttype, com.earthview.world.graphic.PixelFormat format, int usage)
	{
		int ttypeParamValue = ttype.getValue();
		int formatParamValue = format.getValue();
		int usageParamValue = usage;
		boolean returnValue = isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_NoVirtual(this.nativeObject.pointer, ttypeParamValue, formatParamValue, usageParamValue);
		return returnValue;
	}

	protected  void setDefaultNumMipmaps_ev_size_t_callback(long num)
	{
		long numParamValue = num;
		setDefaultNumMipmaps(numParamValue);
	}

	native private void setDefaultNumMipmaps_ev_size_t(long pNativeObject, long num);
	/**
	 * 设置默认的多级渐进纹理级数,不设置则默认是0
	 * @param num 
	 */
	public void setDefaultNumMipmaps(long num)
	{
		long numParamValue = num;
		setDefaultNumMipmaps_ev_size_t(this.nativeObject.pointer, numParamValue);
	}
	native private void setDefaultNumMipmaps_ev_size_t_NoVirtual(long pNativeObject, long num);
	protected void setDefaultNumMipmaps_NoVirtual(long num)
	{
		long numParamValue = num;
		setDefaultNumMipmaps_ev_size_t_NoVirtual(this.nativeObject.pointer, numParamValue);
	}

	protected  long getDefaultNumMipmaps_void_callback()
	{
		long returnValue = getDefaultNumMipmaps();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getDefaultNumMipmaps_void(long pNativeObject);
	/**
	 * 得到默认的多级渐进纹理的级数
	 * @param num 
	 */
	public long getDefaultNumMipmaps()
	{
		long returnValue = getDefaultNumMipmaps_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDefaultNumMipmaps_void_NoVirtual(long pNativeObject);
	protected long getDefaultNumMipmaps_NoVirtual()
	{
		long returnValue = getDefaultNumMipmaps_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public TextureManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextureManager(CreatedWhenConstruct cwc, String classNameStr) {
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
	public void setVerbose(boolean v)
	{
		super.setVerbose_NoVirtual(v);
	}
	public boolean getVerbose()
	{
		return super.getVerbose_NoVirtual();
	}
	public com.earthview.world.graphic.Resource createImpl(String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader loader, com.earthview.world.core.CommonStringPairList createParams)
	{
		return super.createImpl_NoVirtual(name, handle, group, isManual, loader, createParams);
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
	public void parseScript(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		super.parseScript_NoVirtual(stream, groupName);
	}
	public double getLoadingOrder()
	{
		return super.getLoadingOrder_NoVirtual();
	}
	
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(long pNativeObject, String method);
	native protected void register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(long pNativeObject, String method);
	native protected void register_replaceResource_EVString_EVString(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(long pNativeObject, String method);
	native protected void register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_TextureType_ev_int32_Real(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_TextureType_ev_int32(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_TextureType(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_TextureType_ev_int32_Real(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_TextureType_ev_int32(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_TextureType(long pNativeObject, String method);
	native protected void register_loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(long pNativeObject, String method);
	native protected void register_loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(long pNativeObject, String method);
	native protected void register_loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String method);
	native protected void register_loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real(long pNativeObject, String method);
	native protected void register_loadImage_EVString_EVString_CImage_TextureType_ev_int32(long pNativeObject, String method);
	native protected void register_loadImage_EVString_EVString_CImage_TextureType(long pNativeObject, String method);
	native protected void register_loadImage_EVString_EVString_CImage(long pNativeObject, String method);
	native protected void register_loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(long pNativeObject, String method);
	native protected void register_loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(long pNativeObject, String method);
	native protected void register_loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(long pNativeObject, String method);
	native protected void register_loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(long pNativeObject, String method);
	native protected void register_loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(long pNativeObject, String method);
	native protected void register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(long pNativeObject, String method);
	native protected void register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(long pNativeObject, String method);
	native protected void register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(long pNativeObject, String method);
	native protected void register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(long pNativeObject, String method);
	native protected void register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(long pNativeObject, String method);
	native protected void register_setPreferredIntegerBitDepth_ev_uint16_ev_bool(long pNativeObject, String method);
	native protected void register_setPreferredIntegerBitDepth_ev_uint16(long pNativeObject, String method);
	native protected void register_getPreferredIntegerBitDepth_void(long pNativeObject, String method);
	native protected void register_setPreferredFloatBitDepth_ev_uint16_ev_bool(long pNativeObject, String method);
	native protected void register_setPreferredFloatBitDepth_ev_uint16(long pNativeObject, String method);
	native protected void register_getPreferredFloatBitDepth_void(long pNativeObject, String method);
	native protected void register_setPreferredBitDepths_ev_uint16_ev_uint16_ev_bool(long pNativeObject, String method);
	native protected void register_setPreferredBitDepths_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_isFormatSupported_TextureType_PixelFormat_ev_int32(long pNativeObject, String method);
	native protected void register_isEquivalentFormatSupported_TextureType_PixelFormat_ev_int32(long pNativeObject, String method);
	native protected void register_getNativeFormat_TextureType_PixelFormat_ev_int32(long pNativeObject, String method);
	native protected void register_isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_ev_bool(long pNativeObject, String method);
	native protected void register_isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32(long pNativeObject, String method);
	native protected void register_setDefaultNumMipmaps_ev_size_t(long pNativeObject, String method);
	native protected void register_getDefaultNumMipmaps_void(long pNativeObject, String method);
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
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_callback");
			this.register_createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(this.nativeObject.pointer, "createOrRetrieve_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_callback");
			this.register_replaceResource_EVString_EVString(this.nativeObject.pointer, "replaceResource_EVString_EVString_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_callback");
			this.register_createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(this.nativeObject.pointer, "createUnmanaged_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_callback");
			this.register_prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.nativeObject.pointer, "prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_callback");
			this.register_prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.nativeObject.pointer, "prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_callback");
			this.register_prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, "prepare_EVString_EVString_TextureType_ev_int32_Real_ev_bool_callback");
			this.register_prepare_EVString_EVString_TextureType_ev_int32_Real(this.nativeObject.pointer, "prepare_EVString_EVString_TextureType_ev_int32_Real_callback");
			this.register_prepare_EVString_EVString_TextureType_ev_int32(this.nativeObject.pointer, "prepare_EVString_EVString_TextureType_ev_int32_callback");
			this.register_prepare_EVString_EVString_TextureType(this.nativeObject.pointer, "prepare_EVString_EVString_TextureType_callback");
			this.register_prepare_EVString_EVString(this.nativeObject.pointer, "prepare_EVString_EVString_callback");
			this.register_load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.nativeObject.pointer, "load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_callback");
			this.register_load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.nativeObject.pointer, "load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_callback");
			this.register_load_EVString_EVString_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, "load_EVString_EVString_TextureType_ev_int32_Real_ev_bool_callback");
			this.register_load_EVString_EVString_TextureType_ev_int32_Real(this.nativeObject.pointer, "load_EVString_EVString_TextureType_ev_int32_Real_callback");
			this.register_load_EVString_EVString_TextureType_ev_int32(this.nativeObject.pointer, "load_EVString_EVString_TextureType_ev_int32_callback");
			this.register_load_EVString_EVString_TextureType(this.nativeObject.pointer, "load_EVString_EVString_TextureType_callback");
			this.register_loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(this.nativeObject.pointer, "loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_callback");
			this.register_loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(this.nativeObject.pointer, "loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_callback");
			this.register_loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, "loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_callback");
			this.register_loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real(this.nativeObject.pointer, "loadImage_EVString_EVString_CImage_TextureType_ev_int32_Real_callback");
			this.register_loadImage_EVString_EVString_CImage_TextureType_ev_int32(this.nativeObject.pointer, "loadImage_EVString_EVString_CImage_TextureType_ev_int32_callback");
			this.register_loadImage_EVString_EVString_CImage_TextureType(this.nativeObject.pointer, "loadImage_EVString_EVString_CImage_TextureType_callback");
			this.register_loadImage_EVString_EVString_CImage(this.nativeObject.pointer, "loadImage_EVString_EVString_CImage_callback");
			this.register_loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(this.nativeObject.pointer, "loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_callback");
			this.register_loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(this.nativeObject.pointer, "loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_callback");
			this.register_loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(this.nativeObject.pointer, "loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_callback");
			this.register_loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(this.nativeObject.pointer, "loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_callback");
			this.register_loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(this.nativeObject.pointer, "loadRawData_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_callback");
			this.register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(this.nativeObject.pointer, "createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_callback");
			this.register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(this.nativeObject.pointer, "createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_callback");
			this.register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(this.nativeObject.pointer, "createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_callback");
			this.register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(this.nativeObject.pointer, "createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_callback");
			this.register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(this.nativeObject.pointer, "createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_callback");
			this.register_createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(this.nativeObject.pointer, "createManual_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_callback");
			this.register_setPreferredIntegerBitDepth_ev_uint16_ev_bool(this.nativeObject.pointer, "setPreferredIntegerBitDepth_ev_uint16_ev_bool_callback");
			this.register_setPreferredIntegerBitDepth_ev_uint16(this.nativeObject.pointer, "setPreferredIntegerBitDepth_ev_uint16_callback");
			this.register_getPreferredIntegerBitDepth_void(this.nativeObject.pointer, "getPreferredIntegerBitDepth_void_callback");
			this.register_setPreferredFloatBitDepth_ev_uint16_ev_bool(this.nativeObject.pointer, "setPreferredFloatBitDepth_ev_uint16_ev_bool_callback");
			this.register_setPreferredFloatBitDepth_ev_uint16(this.nativeObject.pointer, "setPreferredFloatBitDepth_ev_uint16_callback");
			this.register_getPreferredFloatBitDepth_void(this.nativeObject.pointer, "getPreferredFloatBitDepth_void_callback");
			this.register_setPreferredBitDepths_ev_uint16_ev_uint16_ev_bool(this.nativeObject.pointer, "setPreferredBitDepths_ev_uint16_ev_uint16_ev_bool_callback");
			this.register_setPreferredBitDepths_ev_uint16_ev_uint16(this.nativeObject.pointer, "setPreferredBitDepths_ev_uint16_ev_uint16_callback");
			this.register_isFormatSupported_TextureType_PixelFormat_ev_int32(this.nativeObject.pointer, "isFormatSupported_TextureType_PixelFormat_ev_int32_callback");
			this.register_isEquivalentFormatSupported_TextureType_PixelFormat_ev_int32(this.nativeObject.pointer, "isEquivalentFormatSupported_TextureType_PixelFormat_ev_int32_callback");
			this.register_getNativeFormat_TextureType_PixelFormat_ev_int32(this.nativeObject.pointer, "getNativeFormat_TextureType_PixelFormat_ev_int32_callback");
			this.register_isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_ev_bool(this.nativeObject.pointer, "isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_ev_bool_callback");
			this.register_isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32(this.nativeObject.pointer, "isHardwareFilteringSupported_TextureType_PixelFormat_ev_int32_callback");
			this.register_setDefaultNumMipmaps_ev_size_t(this.nativeObject.pointer, "setDefaultNumMipmaps_ev_size_t_callback");
			this.register_getDefaultNumMipmaps_void(this.nativeObject.pointer, "getDefaultNumMipmaps_void_callback");
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
	
	public static TextureManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextureManager obj = null;
 		if(baseObj instanceof TextureManager)
		{
			obj = (TextureManager)baseObj;
		} else {
			obj = new TextureManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextureManager");
			obj.increaseCast();
		}

		return obj;
	}
}
