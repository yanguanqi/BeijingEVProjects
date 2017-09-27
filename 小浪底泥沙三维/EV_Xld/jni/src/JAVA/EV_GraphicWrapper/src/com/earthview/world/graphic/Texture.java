package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象类，表示纹理资源
 */
public class Texture extends com.earthview.world.graphic.Resource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTexture", new TextureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCTextureProxy", new TextureClassFactory());
	}

	/**
	 * 构造函数
	 * @param creator 
	 * @param name 
	 * @param handle 
	 * @param group 
	 * @param isManual 
	 * @param loader 
	 */
	public Texture(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader) {
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
		Create("JCTextureProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Texture".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Texture(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group, boolean isManual) {
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
		Create("JCTextureProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Texture".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Texture(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group) {
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
		Create("JCTextureProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Texture".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setTextureType_TextureType_callback(int ttype)
	{
		com.earthview.world.graphic.TextureType ttypeParamValue = com.earthview.world.graphic.TextureType.toEnum(ttype);
		setTextureType(ttypeParamValue);
	}

	native private void setTextureType_TextureType(long pNativeObject, int ttype);
	/**
	 * 设置纹理类型，只能在load（）运行前改变
	 * @param ttype 纹理类型
	 */
	public void setTextureType(com.earthview.world.graphic.TextureType ttype)
	{
		int ttypeParamValue = ttype.getValue();
		setTextureType_TextureType(this.nativeObject.pointer, ttypeParamValue);
	}
	native private void setTextureType_TextureType_NoVirtual(long pNativeObject, int ttype);
	protected void setTextureType_NoVirtual(com.earthview.world.graphic.TextureType ttype)
	{
		int ttypeParamValue = ttype.getValue();
		setTextureType_TextureType_NoVirtual(this.nativeObject.pointer, ttypeParamValue);
	}

	protected  int getTextureType_void_callback()
	{
		com.earthview.world.graphic.TextureType returnValue = getTextureType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getTextureType_void(long pNativeObject);
	/**
	 * 得到纹理类型
	 * @param  
	 * @return 返回纹理类型
	 */
	public com.earthview.world.graphic.TextureType getTextureType()
	{
		int returnValue = getTextureType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.TextureType.toEnum(returnValue);
	}
	native private int getTextureType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.TextureType getTextureType_NoVirtual()
	{
		int returnValue = getTextureType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.TextureType.toEnum(returnValue);
	}

	protected  long getNumMipmaps_void_callback()
	{
		long returnValue = getNumMipmaps();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getNumMipmaps_void(long pNativeObject);
	/**
	 * 获得该纹理中所用到的多级渐进纹理(mipmaps)的级数
	 * @param  
	 * @return 返回mipmaps级数
	 */
	public long getNumMipmaps()
	{
		long returnValue = getNumMipmaps_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNumMipmaps_void_NoVirtual(long pNativeObject);
	protected long getNumMipmaps_NoVirtual()
	{
		long returnValue = getNumMipmaps_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setNumMipmaps_ev_size_t_callback(long num)
	{
		long numParamValue = num;
		setNumMipmaps(numParamValue);
	}

	native private void setNumMipmaps_ev_size_t(long pNativeObject, long num);
	/**
	 * 设置该纹理中所用到的多级渐进纹理(mipmaps)的级数，必须在load方法被调用前进行设置
	 * @param num mipmaps数量
	 * @return 返回该值
	 */
	public void setNumMipmaps(long num)
	{
		long numParamValue = num;
		setNumMipmaps_ev_size_t(this.nativeObject.pointer, numParamValue);
	}
	native private void setNumMipmaps_ev_size_t_NoVirtual(long pNativeObject, long num);
	protected void setNumMipmaps_NoVirtual(long num)
	{
		long numParamValue = num;
		setNumMipmaps_ev_size_t_NoVirtual(this.nativeObject.pointer, numParamValue);
	}

	protected  boolean getMipmapsHardwareGenerated_void_callback()
	{
		boolean returnValue = getMipmapsHardwareGenerated();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getMipmapsHardwareGenerated_void(long pNativeObject);
	/**
	 * 获取硬件mipmap级别是否已经生成(只有在纹理被加载后，或者是创建了内部的资源才是正确的)
	 * @param  
	 */
	public boolean getMipmapsHardwareGenerated()
	{
		boolean returnValue = getMipmapsHardwareGenerated_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getMipmapsHardwareGenerated_void_NoVirtual(long pNativeObject);
	protected boolean getMipmapsHardwareGenerated_NoVirtual()
	{
		boolean returnValue = getMipmapsHardwareGenerated_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  float getGamma_void_callback()
	{
		float returnValue = getGamma();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getGamma_void(long pNativeObject);
	public float getGamma()
	{
		float returnValue = getGamma_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getGamma_void_NoVirtual(long pNativeObject);
	protected float getGamma_NoVirtual()
	{
		float returnValue = getGamma_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setGamma_ev_real32_callback(float g)
	{
		float gParamValue = g;
		setGamma(gParamValue);
	}

	native private void setGamma_ev_real32(long pNativeObject, float g);
	public void setGamma(float g)
	{
		float gParamValue = g;
		setGamma_ev_real32(this.nativeObject.pointer, gParamValue);
	}
	native private void setGamma_ev_real32_NoVirtual(long pNativeObject, float g);
	protected void setGamma_NoVirtual(float g)
	{
		float gParamValue = g;
		setGamma_ev_real32_NoVirtual(this.nativeObject.pointer, gParamValue);
	}

	protected  void setHardwareGammaEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setHardwareGammaEnabled(enabledParamValue);
	}

	native private void setHardwareGammaEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 
	 * @param  
	 */
	public void setHardwareGammaEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setHardwareGammaEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setHardwareGammaEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setHardwareGammaEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setHardwareGammaEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  boolean isHardwareGammaEnabled_void_callback()
	{
		boolean returnValue = isHardwareGammaEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isHardwareGammaEnabled_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public boolean isHardwareGammaEnabled()
	{
		boolean returnValue = isHardwareGammaEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isHardwareGammaEnabled_void_NoVirtual(long pNativeObject);
	protected boolean isHardwareGammaEnabled_NoVirtual()
	{
		boolean returnValue = isHardwareGammaEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setFSAA_ev_uint32_EVString_callback(long fsaa, String fsaaHint)
	{
		long fsaaParamValue = fsaa;
		String fsaaHintParamValue = fsaaHint;
		setFSAA(fsaaParamValue, fsaaHintParamValue);
	}

	native private void setFSAA_ev_uint32_EVString(long pNativeObject, long fsaa, String fsaaHint);
	/**
	 * 设置多重采样(抗锯齿)级别
	 * @param  
	 */
	public void setFSAA(long fsaa, String fsaaHint)
	{
		long fsaaParamValue = fsaa;
		String fsaaHintParamValue = fsaaHint;
		setFSAA_ev_uint32_EVString(this.nativeObject.pointer, fsaaParamValue, fsaaHintParamValue);
	}
	native private void setFSAA_ev_uint32_EVString_NoVirtual(long pNativeObject, long fsaa, String fsaaHint);
	protected void setFSAA_NoVirtual(long fsaa, String fsaaHint)
	{
		long fsaaParamValue = fsaa;
		String fsaaHintParamValue = fsaaHint;
		setFSAA_ev_uint32_EVString_NoVirtual(this.nativeObject.pointer, fsaaParamValue, fsaaHintParamValue);
	}

	protected  long getFSAA_void_callback()
	{
		long returnValue = getFSAA();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getFSAA_void(long pNativeObject);
	/**
	 * 获取多重采样(抗锯齿)级别
	 * @param  
	 */
	public long getFSAA()
	{
		long returnValue = getFSAA_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFSAA_void_NoVirtual(long pNativeObject);
	protected long getFSAA_NoVirtual()
	{
		long returnValue = getFSAA_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getFSAAHint_void_callback()
	{
		String returnValue = getFSAAHint();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFSAAHint_void(long pNativeObject);
	public String getFSAAHint()
	{
		String returnValue = getFSAAHint_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFSAAHint_void_NoVirtual(long pNativeObject);
	protected String getFSAAHint_NoVirtual()
	{
		String returnValue = getFSAAHint_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getHeight_void_callback()
	{
		long returnValue = getHeight();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getHeight_void(long pNativeObject);
	/**
	 * 返回纹理的高度
	 * @param  
	 * @return 返回height
	 */
	public long getHeight()
	{
		long returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHeight_void_NoVirtual(long pNativeObject);
	protected long getHeight_NoVirtual()
	{
		long returnValue = getHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getWidth_void_callback()
	{
		long returnValue = getWidth();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getWidth_void(long pNativeObject);
	/**
	 * 返回纹理的宽度
	 * @param  
	 */
	public long getWidth()
	{
		long returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getWidth_void_NoVirtual(long pNativeObject);
	protected long getWidth_NoVirtual()
	{
		long returnValue = getWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getDepth_void_callback()
	{
		long returnValue = getDepth();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getDepth_void(long pNativeObject);
	/**
	 * 返回纹理的深度（仅适用于三维纹理）
	 * @param  
	 */
	public long getDepth()
	{
		long returnValue = getDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDepth_void_NoVirtual(long pNativeObject);
	protected long getDepth_NoVirtual()
	{
		long returnValue = getDepth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getSrcHeight_void_callback()
	{
		long returnValue = getSrcHeight();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getSrcHeight_void(long pNativeObject);
	/**
	 * 返回纹理的原始高度
	 * @param  
	 * @return 返回height
	 */
	public long getSrcHeight()
	{
		long returnValue = getSrcHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSrcHeight_void_NoVirtual(long pNativeObject);
	protected long getSrcHeight_NoVirtual()
	{
		long returnValue = getSrcHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getSrcWidth_void_callback()
	{
		long returnValue = getSrcWidth();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getSrcWidth_void(long pNativeObject);
	/**
	 * 返回纹理的原始宽度
	 * @param  
	 * @return 返回width
	 */
	public long getSrcWidth()
	{
		long returnValue = getSrcWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSrcWidth_void_NoVirtual(long pNativeObject);
	protected long getSrcWidth_NoVirtual()
	{
		long returnValue = getSrcWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getSrcDepth_void_callback()
	{
		long returnValue = getSrcDepth();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getSrcDepth_void(long pNativeObject);
	/**
	 * 返回纹理的原始深度（仅适用于三维纹理）
	 * @param  
	 * @return 返回depth
	 */
	public long getSrcDepth()
	{
		long returnValue = getSrcDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSrcDepth_void_NoVirtual(long pNativeObject);
	protected long getSrcDepth_NoVirtual()
	{
		long returnValue = getSrcDepth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setHeight_ev_size_t_callback(long h)
	{
		long hParamValue = h;
		setHeight(hParamValue);
	}

	native private void setHeight_ev_size_t(long pNativeObject, long h);
	/**
	 * 设置纹理的高，只有在load运行前才能进行设置
	 * @param h 纹理的高
	 */
	public void setHeight(long h)
	{
		long hParamValue = h;
		setHeight_ev_size_t(this.nativeObject.pointer, hParamValue);
	}
	native private void setHeight_ev_size_t_NoVirtual(long pNativeObject, long h);
	protected void setHeight_NoVirtual(long h)
	{
		long hParamValue = h;
		setHeight_ev_size_t_NoVirtual(this.nativeObject.pointer, hParamValue);
	}

	protected  void setWidth_ev_size_t_callback(long w)
	{
		long wParamValue = w;
		setWidth(wParamValue);
	}

	native private void setWidth_ev_size_t(long pNativeObject, long w);
	/**
	 * 设置纹理的宽，只有在load运行前才能进行设置
	 * @param w 纹理的宽
	 */
	public void setWidth(long w)
	{
		long wParamValue = w;
		setWidth_ev_size_t(this.nativeObject.pointer, wParamValue);
	}
	native private void setWidth_ev_size_t_NoVirtual(long pNativeObject, long w);
	protected void setWidth_NoVirtual(long w)
	{
		long wParamValue = w;
		setWidth_ev_size_t_NoVirtual(this.nativeObject.pointer, wParamValue);
	}

	protected  void setDepth_ev_size_t_callback(long d)
	{
		long dParamValue = d;
		setDepth(dParamValue);
	}

	native private void setDepth_ev_size_t(long pNativeObject, long d);
	/**
	 * 设置纹理的深度，（只适用于三维纹理）；只有在运行load前才能进行设置
	 * @param d 纹理的深度
	 */
	public void setDepth(long d)
	{
		long dParamValue = d;
		setDepth_ev_size_t(this.nativeObject.pointer, dParamValue);
	}
	native private void setDepth_ev_size_t_NoVirtual(long pNativeObject, long d);
	protected void setDepth_NoVirtual(long d)
	{
		long dParamValue = d;
		setDepth_ev_size_t_NoVirtual(this.nativeObject.pointer, dParamValue);
	}

	protected  int getUsage_void_callback()
	{
		int returnValue = getUsage();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getUsage_void(long pNativeObject);
	/**
	 * 返回该纹理的纹理用法
	 * @param  
	 */
	public int getUsage()
	{
		int returnValue = getUsage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getUsage_void_NoVirtual(long pNativeObject);
	protected int getUsage_NoVirtual()
	{
		int returnValue = getUsage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setUsage_ev_int32_callback(int u)
	{
		int uParamValue = u;
		setUsage(uParamValue);
	}

	native private void setUsage_ev_int32(long pNativeObject, int u);
	/**
	 * 设置该纹理的纹理用法
	 * @param u u是TU_STATIC,TU_DYNAMIC,TU_WRITE_ONLY，TU_AUTOMIPMAPandTU_RENDERTARGET的合并
	 */
	public void setUsage(int u)
	{
		int uParamValue = u;
		setUsage_ev_int32(this.nativeObject.pointer, uParamValue);
	}
	native private void setUsage_ev_int32_NoVirtual(long pNativeObject, int u);
	protected void setUsage_NoVirtual(int u)
	{
		int uParamValue = u;
		setUsage_ev_int32_NoVirtual(this.nativeObject.pointer, uParamValue);
	}

	protected  void createInternalResources_void_callback()
	{
		createInternalResources();
	}

	native private void createInternalResources_void(long pNativeObject);
	/**
	 * 为该纹理创建内部的纹理资源
	 * @param  
	 */
	public void createInternalResources()
	{
		createInternalResources_void(this.nativeObject.pointer);
	}
	native private void createInternalResources_void_NoVirtual(long pNativeObject);
	protected void createInternalResources_NoVirtual()
	{
		createInternalResources_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void freeInternalResources_void_callback()
	{
		freeInternalResources();
	}

	native private void freeInternalResources_void(long pNativeObject);
	/**
	 * 释放该纹理创建的内部纹理资源
	 * @param  
	 */
	public void freeInternalResources()
	{
		freeInternalResources_void(this.nativeObject.pointer);
	}
	native private void freeInternalResources_void_NoVirtual(long pNativeObject);
	protected void freeInternalResources_NoVirtual()
	{
		freeInternalResources_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void copyToTexture_CTexturePtr_callback(long target)
	{
		com.earthview.world.graphic.TexturePtr targetParamValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate);
		targetParamValue.setDelegate(true);
		targetParamValue.setInstancePointer(new InstancePointer(target));
		IClassFactory targetParamValueClassFactory = GlobalClassFactoryMap.get(targetParamValue.getCppInstanceTypeName());
		if (targetParamValueClassFactory != null)
		{
			targetParamValue.setDelegate(true);
			targetParamValue = (com.earthview.world.graphic.TexturePtr)targetParamValueClassFactory.create();
			targetParamValue.setDelegate(true);
			targetParamValue.setInstancePointer(new InstancePointer(target));
		}
		copyToTexture(targetParamValue);
	}

	native private void copyToTexture_CTexturePtr(long pNativeObject, long target);
	/**
	 * 拷贝该纹理的内容到另一个纹理
	 * @param target 目标纹理
	 */
	public void copyToTexture(com.earthview.world.graphic.TexturePtr target)
	{
		long targetParamValue = target.nativeObject.pointer;
		copyToTexture_CTexturePtr(this.nativeObject.pointer, targetParamValue);
	}
	native private void copyToTexture_CTexturePtr_NoVirtual(long pNativeObject, long target);
	protected void copyToTexture_NoVirtual(com.earthview.world.graphic.TexturePtr target)
	{
		long targetParamValue = target.nativeObject.pointer;
		copyToTexture_CTexturePtr_NoVirtual(this.nativeObject.pointer, targetParamValue);
	}

	protected  void loadImage_CImage_callback(long img)
	{
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
		loadImage(imgParamValue);
	}

	native private void loadImage_CImage(long pNativeObject, long img);
	/**
	 * 从影像中加载数据
	 * @param img 影像
	 */
	public void loadImage(com.earthview.world.graphic.Image img)
	{
		long imgParamValue = img.nativeObject.pointer;
		loadImage_CImage(this.nativeObject.pointer, imgParamValue);
	}
	native private void loadImage_CImage_NoVirtual(long pNativeObject, long img);
	protected void loadImage_NoVirtual(com.earthview.world.graphic.Image img)
	{
		long imgParamValue = img.nativeObject.pointer;
		loadImage_CImage_NoVirtual(this.nativeObject.pointer, imgParamValue);
	}

	protected  void loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_callback(long stream, int uWidth, int uHeight, int eFormat)
	{
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
		com.earthview.world.graphic.PixelFormat eFormatParamValue = com.earthview.world.graphic.PixelFormat.toEnum(eFormat);
		loadRawData(streamParamValue, uWidthParamValue, uHeightParamValue, eFormatParamValue);
	}

	native private void loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(long pNativeObject, long stream, int uWidth, int uHeight, int eFormat);
	/**
	 * 从原始流文件中加载数据
	 * @param stream 包含原始像素数据的的数据流
	 * @param uWidth 影像的宽
	 * @param uHeight 影像的高
	 * @param eFormat 像素数据的格式
	 */
	public void loadRawData(com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat eFormat)
	{
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int eFormatParamValue = eFormat.getValue();
		loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(this.nativeObject.pointer, streamParamValue, uWidthParamValue, uHeightParamValue, eFormatParamValue);
	}
	native private void loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_NoVirtual(long pNativeObject, long stream, int uWidth, int uHeight, int eFormat);
	protected void loadRawData_NoVirtual(com.earthview.world.core.DataStreamPtr stream, int uWidth, int uHeight, com.earthview.world.graphic.PixelFormat eFormat)
	{
		long streamParamValue = stream.nativeObject.pointer;
		int uWidthParamValue = uWidth;
		int uHeightParamValue = uHeight;
		int eFormatParamValue = eFormat.getValue();
		loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_NoVirtual(this.nativeObject.pointer, streamParamValue, uWidthParamValue, uHeightParamValue, eFormatParamValue);
	}

	protected  void _loadImages_ConstImagePtrList_callback(long images)
	{
		com.earthview.world.graphic.ConstImagePtrList imagesParamValue = new com.earthview.world.graphic.ConstImagePtrList(CreatedWhenConstruct.CWC_NotToCreate);
		imagesParamValue.setDelegate(true);
		imagesParamValue.setInstancePointer(new InstancePointer(images));
		IClassFactory imagesParamValueClassFactory = GlobalClassFactoryMap.get(imagesParamValue.getCppInstanceTypeName());
		if (imagesParamValueClassFactory != null)
		{
			imagesParamValue.setDelegate(true);
			imagesParamValue = (com.earthview.world.graphic.ConstImagePtrList)imagesParamValueClassFactory.create();
			imagesParamValue.setDelegate(true);
			imagesParamValue.setInstancePointer(new InstancePointer(images));
		}
		_loadImages(imagesParamValue);
	}

	native private void _loadImages_ConstImagePtrList(long pNativeObject, long images);
	/**
	 * 从一组影像中加载纹理
	 * @param images 影像
	 */
	public void _loadImages(com.earthview.world.graphic.ConstImagePtrList images)
	{
		long imagesParamValue = images.nativeObject.pointer;
		_loadImages_ConstImagePtrList(this.nativeObject.pointer, imagesParamValue);
	}
	native private void _loadImages_ConstImagePtrList_NoVirtual(long pNativeObject, long images);
	protected void _loadImages_NoVirtual(com.earthview.world.graphic.ConstImagePtrList images)
	{
		long imagesParamValue = images.nativeObject.pointer;
		_loadImages_ConstImagePtrList_NoVirtual(this.nativeObject.pointer, imagesParamValue);
	}

	protected  int getFormat_void_callback()
	{
		com.earthview.world.graphic.PixelFormat returnValue = getFormat();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getFormat_void(long pNativeObject);
	/**
	 * 获得纹理表面的像素类型
	 * @param  
	 * @return 返回纹理表面的像素类型
	 */
	public com.earthview.world.graphic.PixelFormat getFormat()
	{
		int returnValue = getFormat_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private int getFormat_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.PixelFormat getFormat_NoVirtual()
	{
		int returnValue = getFormat_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}

	protected  void setFormat_PixelFormat_callback(int pf)
	{
		com.earthview.world.graphic.PixelFormat pfParamValue = com.earthview.world.graphic.PixelFormat.toEnum(pf);
		setFormat(pfParamValue);
	}

	native private void setFormat_PixelFormat(long pNativeObject, int pf);
	/**
	 * 为纹理设置像素类型，只在load运行前设置
	 * @param pf 像素类型
	 */
	public void setFormat(com.earthview.world.graphic.PixelFormat pf)
	{
		int pfParamValue = pf.getValue();
		setFormat_PixelFormat(this.nativeObject.pointer, pfParamValue);
	}
	native private void setFormat_PixelFormat_NoVirtual(long pNativeObject, int pf);
	protected void setFormat_NoVirtual(com.earthview.world.graphic.PixelFormat pf)
	{
		int pfParamValue = pf.getValue();
		setFormat_PixelFormat_NoVirtual(this.nativeObject.pointer, pfParamValue);
	}

	protected  int getDesiredFormat_void_callback()
	{
		com.earthview.world.graphic.PixelFormat returnValue = getDesiredFormat();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getDesiredFormat_void(long pNativeObject);
	/**
	 * 获得纹理的目标像素格式
	 * @param  
	 * @return 返回想要得到的纹理表面的像素类型
	 */
	public com.earthview.world.graphic.PixelFormat getDesiredFormat()
	{
		int returnValue = getDesiredFormat_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private int getDesiredFormat_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.PixelFormat getDesiredFormat_NoVirtual()
	{
		int returnValue = getDesiredFormat_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}

	protected  int getSrcFormat_void_callback()
	{
		com.earthview.world.graphic.PixelFormat returnValue = getSrcFormat();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getSrcFormat_void(long pNativeObject);
	/**
	 * 获得纹理的源像素格式(可能由于硬件要求和像素格式转换而不同)
	 * @param  
	 */
	public com.earthview.world.graphic.PixelFormat getSrcFormat()
	{
		int returnValue = getSrcFormat_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private int getSrcFormat_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.PixelFormat getSrcFormat_NoVirtual()
	{
		int returnValue = getSrcFormat_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}

	protected  boolean hasAlpha_void_callback()
	{
		boolean returnValue = hasAlpha();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasAlpha_void(long pNativeObject);
	/**
	 * 判断纹理是否具有alpha通道
	 * @param  
	 */
	public boolean hasAlpha()
	{
		boolean returnValue = hasAlpha_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasAlpha_void_NoVirtual(long pNativeObject);
	protected boolean hasAlpha_NoVirtual()
	{
		boolean returnValue = hasAlpha_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDesiredIntegerBitDepth_ev_uint16_callback(int bits)
	{
		int bitsParamValue = bits;
		setDesiredIntegerBitDepth(bitsParamValue);
	}

	native private void setDesiredIntegerBitDepth_ev_uint16(long pNativeObject, int bits);
	/**
	 * 设置期望的整型位深度
	 * @param bits 像素的位数
	 */
	public void setDesiredIntegerBitDepth(int bits)
	{
		int bitsParamValue = bits;
		setDesiredIntegerBitDepth_ev_uint16(this.nativeObject.pointer, bitsParamValue);
	}
	native private void setDesiredIntegerBitDepth_ev_uint16_NoVirtual(long pNativeObject, int bits);
	protected void setDesiredIntegerBitDepth_NoVirtual(int bits)
	{
		int bitsParamValue = bits;
		setDesiredIntegerBitDepth_ev_uint16_NoVirtual(this.nativeObject.pointer, bitsParamValue);
	}

	protected  int getDesiredIntegerBitDepth_void_callback()
	{
		int returnValue = getDesiredIntegerBitDepth();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getDesiredIntegerBitDepth_void(long pNativeObject);
	/**
	 * 得到期望的整型位深度
	 * @param  位
	 * @return 返回得到的位
	 */
	public int getDesiredIntegerBitDepth()
	{
		int returnValue = getDesiredIntegerBitDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getDesiredIntegerBitDepth_void_NoVirtual(long pNativeObject);
	protected int getDesiredIntegerBitDepth_NoVirtual()
	{
		int returnValue = getDesiredIntegerBitDepth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDesiredFloatBitDepth_ev_uint16_callback(int bits)
	{
		int bitsParamValue = bits;
		setDesiredFloatBitDepth(bitsParamValue);
	}

	native private void setDesiredFloatBitDepth_ev_uint16(long pNativeObject, int bits);
	/**
	 * 设置期望的float型位深度
	 * @param bits 像素的位数
	 */
	public void setDesiredFloatBitDepth(int bits)
	{
		int bitsParamValue = bits;
		setDesiredFloatBitDepth_ev_uint16(this.nativeObject.pointer, bitsParamValue);
	}
	native private void setDesiredFloatBitDepth_ev_uint16_NoVirtual(long pNativeObject, int bits);
	protected void setDesiredFloatBitDepth_NoVirtual(int bits)
	{
		int bitsParamValue = bits;
		setDesiredFloatBitDepth_ev_uint16_NoVirtual(this.nativeObject.pointer, bitsParamValue);
	}

	protected  int getDesiredFloatBitDepth_void_callback()
	{
		int returnValue = getDesiredFloatBitDepth();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getDesiredFloatBitDepth_void(long pNativeObject);
	/**
	 * 得到期望的float型位深度
	 * @param  
	 * @return 返回位值
	 */
	public int getDesiredFloatBitDepth()
	{
		int returnValue = getDesiredFloatBitDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getDesiredFloatBitDepth_void_NoVirtual(long pNativeObject);
	protected int getDesiredFloatBitDepth_NoVirtual()
	{
		int returnValue = getDesiredFloatBitDepth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDesiredBitDepths_ev_uint16_ev_uint16_callback(int integerBits, int floatBits)
	{
		int integerBitsParamValue = integerBits;
		int floatBitsParamValue = floatBits;
		setDesiredBitDepths(integerBitsParamValue, floatBitsParamValue);
	}

	native private void setDesiredBitDepths_ev_uint16_ev_uint16(long pNativeObject, int integerBits, int floatBits);
	/**
	 * 设置期望的位深度
	 * @param integerBits 整型像素的位数
	 * @param floatBits float型像素的位数
	 */
	public void setDesiredBitDepths(int integerBits, int floatBits)
	{
		int integerBitsParamValue = integerBits;
		int floatBitsParamValue = floatBits;
		setDesiredBitDepths_ev_uint16_ev_uint16(this.nativeObject.pointer, integerBitsParamValue, floatBitsParamValue);
	}
	native private void setDesiredBitDepths_ev_uint16_ev_uint16_NoVirtual(long pNativeObject, int integerBits, int floatBits);
	protected void setDesiredBitDepths_NoVirtual(int integerBits, int floatBits)
	{
		int integerBitsParamValue = integerBits;
		int floatBitsParamValue = floatBits;
		setDesiredBitDepths_ev_uint16_ev_uint16_NoVirtual(this.nativeObject.pointer, integerBitsParamValue, floatBitsParamValue);
	}

	protected  void setTreatLuminanceAsAlpha_ev_bool_callback(boolean asAlpha)
	{
		boolean asAlphaParamValue = asAlpha;
		setTreatLuminanceAsAlpha(asAlphaParamValue);
	}

	native private void setTreatLuminanceAsAlpha_ev_bool(long pNativeObject, boolean asAlpha);
	/**
	 * 当加载纹理时，设置是否把亮度像素格式作为alpha格式
	 * @param asAlpha 是否作为alpha格式
	 */
	public void setTreatLuminanceAsAlpha(boolean asAlpha)
	{
		boolean asAlphaParamValue = asAlpha;
		setTreatLuminanceAsAlpha_ev_bool(this.nativeObject.pointer, asAlphaParamValue);
	}
	native private void setTreatLuminanceAsAlpha_ev_bool_NoVirtual(long pNativeObject, boolean asAlpha);
	protected void setTreatLuminanceAsAlpha_NoVirtual(boolean asAlpha)
	{
		boolean asAlphaParamValue = asAlpha;
		setTreatLuminanceAsAlpha_ev_bool_NoVirtual(this.nativeObject.pointer, asAlphaParamValue);
	}

	protected  boolean getTreatLuminanceAsAlpha_void_callback()
	{
		boolean returnValue = getTreatLuminanceAsAlpha();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getTreatLuminanceAsAlpha_void(long pNativeObject);
	/**
	 * 当加载纹理时，获得是否把亮度像素格式作为alpha格式
	 * @param  
	 * @return 是则返回true，不是则返回false
	 */
	public boolean getTreatLuminanceAsAlpha()
	{
		boolean returnValue = getTreatLuminanceAsAlpha_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getTreatLuminanceAsAlpha_void_NoVirtual(long pNativeObject);
	protected boolean getTreatLuminanceAsAlpha_NoVirtual()
	{
		boolean returnValue = getTreatLuminanceAsAlpha_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getNumFaces_void_callback()
	{
		long returnValue = getNumFaces();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getNumFaces_void(long pNativeObject);
	/**
	 * 获得该纹理的面的个数
	 * @param  
	 * @return 返回个数
	 */
	public long getNumFaces()
	{
		long returnValue = getNumFaces_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNumFaces_void_NoVirtual(long pNativeObject);
	protected long getNumFaces_NoVirtual()
	{
		long returnValue = getNumFaces_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getBuffer_ev_size_t_ev_size_t_callback(long face, long mipmap)
	{
		long faceParamValue = face;
		long mipmapParamValue = mipmap;
		com.earthview.world.graphic.HardwarePixelBufferSharedPtr returnValue = getBuffer(faceParamValue, mipmapParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBuffer_ev_size_t_ev_size_t(long pNativeObject, long face, long mipmap);
	/**
	 * 获得硬件像素缓存
	 * @param face 纹理表面的个数
	 * @param mipmap 多级渐进纹理的级数
	 * @return 返回纹理表面的硬件像素缓存
	 */
	public com.earthview.world.graphic.HardwarePixelBufferSharedPtr getBuffer(long face, long mipmap)
	{
		long faceParamValue = face;
		long mipmapParamValue = mipmap;
		long returnValue = getBuffer_ev_size_t_ev_size_t(this.nativeObject.pointer, faceParamValue, mipmapParamValue);
		com.earthview.world.graphic.HardwarePixelBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwarePixelBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long getBuffer_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long face, long mipmap);
	protected com.earthview.world.graphic.HardwarePixelBufferSharedPtr getBuffer_NoVirtual(long face, long mipmap)
	{
		long faceParamValue = face;
		long mipmapParamValue = mipmap;
		long returnValue = getBuffer_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, faceParamValue, mipmapParamValue);
		com.earthview.world.graphic.HardwarePixelBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwarePixelBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		}
		return __returnValue;
	}

	protected  long getBuffer_ev_size_t_callback(long face)
	{
		long faceParamValue = face;
		com.earthview.world.graphic.HardwarePixelBufferSharedPtr returnValue = getBuffer(faceParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBuffer_ev_size_t(long pNativeObject, long face);
	public com.earthview.world.graphic.HardwarePixelBufferSharedPtr getBuffer(long face)
	{
		long faceParamValue = face;
		long returnValue = getBuffer_ev_size_t(this.nativeObject.pointer, faceParamValue);
		com.earthview.world.graphic.HardwarePixelBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwarePixelBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long getBuffer_ev_size_t_NoVirtual(long pNativeObject, long face);
	protected com.earthview.world.graphic.HardwarePixelBufferSharedPtr getBuffer_NoVirtual(long face)
	{
		long faceParamValue = face;
		long returnValue = getBuffer_ev_size_t_NoVirtual(this.nativeObject.pointer, faceParamValue);
		com.earthview.world.graphic.HardwarePixelBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwarePixelBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		}
		return __returnValue;
	}

	protected  long getBuffer_void_callback()
	{
		com.earthview.world.graphic.HardwarePixelBufferSharedPtr returnValue = getBuffer();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBuffer_void(long pNativeObject);
	public com.earthview.world.graphic.HardwarePixelBufferSharedPtr getBuffer()
	{
		long returnValue = getBuffer_void(this.nativeObject.pointer);
		com.earthview.world.graphic.HardwarePixelBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwarePixelBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long getBuffer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.HardwarePixelBufferSharedPtr getBuffer_NoVirtual()
	{
		long returnValue = getBuffer_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.HardwarePixelBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwarePixelBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBufferSharedPtr");
		}
		return __returnValue;
	}

	protected  void convertToImage_CImage_ev_bool_callback(long destImage, boolean includeMipMaps)
	{
		com.earthview.world.graphic.Image destImageParamValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
		destImageParamValue.setDelegate(true);
		destImageParamValue.setInstancePointer(new InstancePointer(destImage));
		IClassFactory destImageParamValueClassFactory = GlobalClassFactoryMap.get(destImageParamValue.getCppInstanceTypeName());
		if (destImageParamValueClassFactory != null)
		{
			destImageParamValue.setDelegate(true);
			destImageParamValue = (com.earthview.world.graphic.Image)destImageParamValueClassFactory.create();
			destImageParamValue.setDelegate(true);
			destImageParamValue.setInstancePointer(new InstancePointer(destImage));
		}
		boolean includeMipMapsParamValue = includeMipMaps;
		convertToImage(destImageParamValue, includeMipMapsParamValue);
	}

	native private void convertToImage_CImage_ev_bool(long pNativeObject, long destImage, boolean includeMipMaps);
	/**
	 * 用该纹理的内容转换成Image
	 * @param destImage 目标影像
	 * @param includeMipMaps 是否把mipmaps插入影像中
	 */
	public void convertToImage(com.earthview.world.graphic.Image destImage, boolean includeMipMaps)
	{
		long destImageParamValue = destImage.nativeObject.pointer;
		boolean includeMipMapsParamValue = includeMipMaps;
		convertToImage_CImage_ev_bool(this.nativeObject.pointer, destImageParamValue, includeMipMapsParamValue);
	}
	native private void convertToImage_CImage_ev_bool_NoVirtual(long pNativeObject, long destImage, boolean includeMipMaps);
	protected void convertToImage_NoVirtual(com.earthview.world.graphic.Image destImage, boolean includeMipMaps)
	{
		long destImageParamValue = destImage.nativeObject.pointer;
		boolean includeMipMapsParamValue = includeMipMaps;
		convertToImage_CImage_ev_bool_NoVirtual(this.nativeObject.pointer, destImageParamValue, includeMipMapsParamValue);
	}

	protected  void convertToImage_CImage_callback(long destImage)
	{
		com.earthview.world.graphic.Image destImageParamValue = new com.earthview.world.graphic.Image(CreatedWhenConstruct.CWC_NotToCreate);
		destImageParamValue.setDelegate(true);
		destImageParamValue.setInstancePointer(new InstancePointer(destImage));
		IClassFactory destImageParamValueClassFactory = GlobalClassFactoryMap.get(destImageParamValue.getCppInstanceTypeName());
		if (destImageParamValueClassFactory != null)
		{
			destImageParamValue.setDelegate(true);
			destImageParamValue = (com.earthview.world.graphic.Image)destImageParamValueClassFactory.create();
			destImageParamValue.setDelegate(true);
			destImageParamValue.setInstancePointer(new InstancePointer(destImage));
		}
		convertToImage(destImageParamValue);
	}

	native private void convertToImage_CImage(long pNativeObject, long destImage);
	public void convertToImage(com.earthview.world.graphic.Image destImage)
	{
		long destImageParamValue = destImage.nativeObject.pointer;
		convertToImage_CImage(this.nativeObject.pointer, destImageParamValue);
	}
	native private void convertToImage_CImage_NoVirtual(long pNativeObject, long destImage);
	protected void convertToImage_NoVirtual(com.earthview.world.graphic.Image destImage)
	{
		long destImageParamValue = destImage.nativeObject.pointer;
		convertToImage_CImage_NoVirtual(this.nativeObject.pointer, destImageParamValue);
	}

	protected  void getCustomAttribute_EVString_void_callback(String name, long pData)
	{
		String nameParamValue = name;
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		getCustomAttribute(nameParamValue, pDataParamValue);
	}

	native private void getCustomAttribute_EVString_void(long pNativeObject, String name, long pData);
	/**
	 * 从该纹理中获得自定义属性数据
	 * @param name 属性名称
	 * @param pData 数据存储区
	 */
	public void getCustomAttribute(String name, VoidPointer pData)
	{
		String nameParamValue = name;
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		getCustomAttribute_EVString_void(this.nativeObject.pointer, nameParamValue, pDataParamValue);
	}
	native private void getCustomAttribute_EVString_void_NoVirtual(long pNativeObject, String name, long pData);
	protected void getCustomAttribute_NoVirtual(String name, VoidPointer pData)
	{
		String nameParamValue = name;
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		getCustomAttribute_EVString_void_NoVirtual(this.nativeObject.pointer, nameParamValue, pDataParamValue);
	}

	protected  void reload_CImage_callback(long img)
	{
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
		reload(imgParamValue);
	}

	native private void reload_CImage(long pNativeObject, long img);
	/**
	 * 从Image中重新加载
	 * @param img 影像
	 */
	public void reload(com.earthview.world.graphic.Image img)
	{
		long imgParamValue = img.nativeObject.pointer;
		reload_CImage(this.nativeObject.pointer, imgParamValue);
	}
	native private void reload_CImage_NoVirtual(long pNativeObject, long img);
	protected void reload_NoVirtual(com.earthview.world.graphic.Image img)
	{
		long imgParamValue = img.nativeObject.pointer;
		reload_CImage_NoVirtual(this.nativeObject.pointer, imgParamValue);
	}

	protected  long getTextureID_void_callback()
	{
		long returnValue = getTextureID();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getTextureID_void(long pNativeObject);
	public long getTextureID()
	{
		long returnValue = getTextureID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTextureID_void_NoVirtual(long pNativeObject);
	protected long getTextureID_NoVirtual()
	{
		long returnValue = getTextureID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getSystemResource_void_callback()
	{
		VoidPointer returnValue = getSystemResource();
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSystemResource_void(long pNativeObject);
	public VoidPointer getSystemResource()
	{
		long returnValue = getSystemResource_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getSystemResource_void_NoVirtual(long pNativeObject);
	protected VoidPointer getSystemResource_NoVirtual()
	{
		long returnValue = getSystemResource_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
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

	native private void unloadImpl_void(long pNativeObject);
	///当调用释放内部资源时，默认执行该卸载操作
	public void unloadImpl()
	{
		unloadImpl_void(this.nativeObject.pointer);
	}
	native private void unloadImpl_void_NoVirtual(long pNativeObject);
	protected void unloadImpl_NoVirtual()
	{
		unloadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	public Texture(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Texture(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 加载的实现
	 */
	public void loadImpl()
	{
		super.loadImpl_NoVirtual();
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
	
	native protected void register_setTextureType_TextureType(long pNativeObject, String method);
	native protected void register_getTextureType_void(long pNativeObject, String method);
	native protected void register_getNumMipmaps_void(long pNativeObject, String method);
	native protected void register_setNumMipmaps_ev_size_t(long pNativeObject, String method);
	native protected void register_getMipmapsHardwareGenerated_void(long pNativeObject, String method);
	native protected void register_getGamma_void(long pNativeObject, String method);
	native protected void register_setGamma_ev_real32(long pNativeObject, String method);
	native protected void register_setHardwareGammaEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_isHardwareGammaEnabled_void(long pNativeObject, String method);
	native protected void register_setFSAA_ev_uint32_EVString(long pNativeObject, String method);
	native protected void register_getFSAA_void(long pNativeObject, String method);
	native protected void register_getFSAAHint_void(long pNativeObject, String method);
	native protected void register_getHeight_void(long pNativeObject, String method);
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getDepth_void(long pNativeObject, String method);
	native protected void register_getSrcHeight_void(long pNativeObject, String method);
	native protected void register_getSrcWidth_void(long pNativeObject, String method);
	native protected void register_getSrcDepth_void(long pNativeObject, String method);
	native protected void register_setHeight_ev_size_t(long pNativeObject, String method);
	native protected void register_setWidth_ev_size_t(long pNativeObject, String method);
	native protected void register_setDepth_ev_size_t(long pNativeObject, String method);
	native protected void register_getUsage_void(long pNativeObject, String method);
	native protected void register_setUsage_ev_int32(long pNativeObject, String method);
	native protected void register_createInternalResources_void(long pNativeObject, String method);
	native protected void register_freeInternalResources_void(long pNativeObject, String method);
	native protected void register_copyToTexture_CTexturePtr(long pNativeObject, String method);
	native protected void register_loadImage_CImage(long pNativeObject, String method);
	native protected void register_loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(long pNativeObject, String method);
	native protected void register__loadImages_ConstImagePtrList(long pNativeObject, String method);
	native protected void register_getFormat_void(long pNativeObject, String method);
	native protected void register_setFormat_PixelFormat(long pNativeObject, String method);
	native protected void register_getDesiredFormat_void(long pNativeObject, String method);
	native protected void register_getSrcFormat_void(long pNativeObject, String method);
	native protected void register_hasAlpha_void(long pNativeObject, String method);
	native protected void register_setDesiredIntegerBitDepth_ev_uint16(long pNativeObject, String method);
	native protected void register_getDesiredIntegerBitDepth_void(long pNativeObject, String method);
	native protected void register_setDesiredFloatBitDepth_ev_uint16(long pNativeObject, String method);
	native protected void register_getDesiredFloatBitDepth_void(long pNativeObject, String method);
	native protected void register_setDesiredBitDepths_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_setTreatLuminanceAsAlpha_ev_bool(long pNativeObject, String method);
	native protected void register_getTreatLuminanceAsAlpha_void(long pNativeObject, String method);
	native protected void register_getNumFaces_void(long pNativeObject, String method);
	native protected void register_getBuffer_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_getBuffer_ev_size_t(long pNativeObject, String method);
	native protected void register_getBuffer_void(long pNativeObject, String method);
	native protected void register_convertToImage_CImage_ev_bool(long pNativeObject, String method);
	native protected void register_convertToImage_CImage(long pNativeObject, String method);
	native protected void register_getCustomAttribute_EVString_void(long pNativeObject, String method);
	native protected void register_reload_CImage(long pNativeObject, String method);
	native protected void register_getTextureID_void(long pNativeObject, String method);
	native protected void register_getSystemResource_void(long pNativeObject, String method);
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
			this.register_setTextureType_TextureType(this.nativeObject.pointer, "setTextureType_TextureType_callback");
			this.register_getTextureType_void(this.nativeObject.pointer, "getTextureType_void_callback");
			this.register_getNumMipmaps_void(this.nativeObject.pointer, "getNumMipmaps_void_callback");
			this.register_setNumMipmaps_ev_size_t(this.nativeObject.pointer, "setNumMipmaps_ev_size_t_callback");
			this.register_getMipmapsHardwareGenerated_void(this.nativeObject.pointer, "getMipmapsHardwareGenerated_void_callback");
			this.register_getGamma_void(this.nativeObject.pointer, "getGamma_void_callback");
			this.register_setGamma_ev_real32(this.nativeObject.pointer, "setGamma_ev_real32_callback");
			this.register_setHardwareGammaEnabled_ev_bool(this.nativeObject.pointer, "setHardwareGammaEnabled_ev_bool_callback");
			this.register_isHardwareGammaEnabled_void(this.nativeObject.pointer, "isHardwareGammaEnabled_void_callback");
			this.register_setFSAA_ev_uint32_EVString(this.nativeObject.pointer, "setFSAA_ev_uint32_EVString_callback");
			this.register_getFSAA_void(this.nativeObject.pointer, "getFSAA_void_callback");
			this.register_getFSAAHint_void(this.nativeObject.pointer, "getFSAAHint_void_callback");
			this.register_getHeight_void(this.nativeObject.pointer, "getHeight_void_callback");
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getDepth_void(this.nativeObject.pointer, "getDepth_void_callback");
			this.register_getSrcHeight_void(this.nativeObject.pointer, "getSrcHeight_void_callback");
			this.register_getSrcWidth_void(this.nativeObject.pointer, "getSrcWidth_void_callback");
			this.register_getSrcDepth_void(this.nativeObject.pointer, "getSrcDepth_void_callback");
			this.register_setHeight_ev_size_t(this.nativeObject.pointer, "setHeight_ev_size_t_callback");
			this.register_setWidth_ev_size_t(this.nativeObject.pointer, "setWidth_ev_size_t_callback");
			this.register_setDepth_ev_size_t(this.nativeObject.pointer, "setDepth_ev_size_t_callback");
			this.register_getUsage_void(this.nativeObject.pointer, "getUsage_void_callback");
			this.register_setUsage_ev_int32(this.nativeObject.pointer, "setUsage_ev_int32_callback");
			this.register_createInternalResources_void(this.nativeObject.pointer, "createInternalResources_void_callback");
			this.register_freeInternalResources_void(this.nativeObject.pointer, "freeInternalResources_void_callback");
			this.register_copyToTexture_CTexturePtr(this.nativeObject.pointer, "copyToTexture_CTexturePtr_callback");
			this.register_loadImage_CImage(this.nativeObject.pointer, "loadImage_CImage_callback");
			this.register_loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(this.nativeObject.pointer, "loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_callback");
			this.register__loadImages_ConstImagePtrList(this.nativeObject.pointer, "_loadImages_ConstImagePtrList_callback");
			this.register_getFormat_void(this.nativeObject.pointer, "getFormat_void_callback");
			this.register_setFormat_PixelFormat(this.nativeObject.pointer, "setFormat_PixelFormat_callback");
			this.register_getDesiredFormat_void(this.nativeObject.pointer, "getDesiredFormat_void_callback");
			this.register_getSrcFormat_void(this.nativeObject.pointer, "getSrcFormat_void_callback");
			this.register_hasAlpha_void(this.nativeObject.pointer, "hasAlpha_void_callback");
			this.register_setDesiredIntegerBitDepth_ev_uint16(this.nativeObject.pointer, "setDesiredIntegerBitDepth_ev_uint16_callback");
			this.register_getDesiredIntegerBitDepth_void(this.nativeObject.pointer, "getDesiredIntegerBitDepth_void_callback");
			this.register_setDesiredFloatBitDepth_ev_uint16(this.nativeObject.pointer, "setDesiredFloatBitDepth_ev_uint16_callback");
			this.register_getDesiredFloatBitDepth_void(this.nativeObject.pointer, "getDesiredFloatBitDepth_void_callback");
			this.register_setDesiredBitDepths_ev_uint16_ev_uint16(this.nativeObject.pointer, "setDesiredBitDepths_ev_uint16_ev_uint16_callback");
			this.register_setTreatLuminanceAsAlpha_ev_bool(this.nativeObject.pointer, "setTreatLuminanceAsAlpha_ev_bool_callback");
			this.register_getTreatLuminanceAsAlpha_void(this.nativeObject.pointer, "getTreatLuminanceAsAlpha_void_callback");
			this.register_getNumFaces_void(this.nativeObject.pointer, "getNumFaces_void_callback");
			this.register_getBuffer_ev_size_t_ev_size_t(this.nativeObject.pointer, "getBuffer_ev_size_t_ev_size_t_callback");
			this.register_getBuffer_ev_size_t(this.nativeObject.pointer, "getBuffer_ev_size_t_callback");
			this.register_getBuffer_void(this.nativeObject.pointer, "getBuffer_void_callback");
			this.register_convertToImage_CImage_ev_bool(this.nativeObject.pointer, "convertToImage_CImage_ev_bool_callback");
			this.register_convertToImage_CImage(this.nativeObject.pointer, "convertToImage_CImage_callback");
			this.register_getCustomAttribute_EVString_void(this.nativeObject.pointer, "getCustomAttribute_EVString_void_callback");
			this.register_reload_CImage(this.nativeObject.pointer, "reload_CImage_callback");
			this.register_getTextureID_void(this.nativeObject.pointer, "getTextureID_void_callback");
			this.register_getSystemResource_void(this.nativeObject.pointer, "getSystemResource_void_callback");
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
	
	public static Texture fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Texture obj = null;
 		if(baseObj instanceof Texture)
		{
			obj = (Texture)baseObj;
		} else {
			obj = new Texture(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTexture");
			obj.increaseCast();
		}

		return obj;
	}
}
