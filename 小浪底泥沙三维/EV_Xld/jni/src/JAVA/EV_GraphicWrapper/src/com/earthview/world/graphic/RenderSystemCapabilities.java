package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 存储图形卡片的性能
 */
public class RenderSystemCapabilities extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderSystemCapabilities", new RenderSystemCapabilitiesClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderSystemCapabilitiesProxy", new RenderSystemCapabilitiesClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderSystemCapabilities() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRenderSystemCapabilitiesProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderSystemCapabilities".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long calculateSize_void_callback()
	{
		long returnValue = calculateSize();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long calculateSize_void(long pNativeObject);
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

	native private void setDriverVersion_DriverVersion(long pNativeObject, long version);
	/**
	 * 设置驱动版本
	 * @param version 
	 */
	public void setDriverVersion(com.earthview.world.graphic.DriverVersion version)
	{
		long versionParamValue = version.nativeObject.pointer;
		setDriverVersion_DriverVersion(this.nativeObject.pointer, versionParamValue);
	}
	native private void parseDriverVersionFromString_EVString(long pNativeObject, String versionString);
	public void parseDriverVersionFromString(String versionString)
	{
		String versionStringParamValue = versionString;
		parseDriverVersionFromString_EVString(this.nativeObject.pointer, versionStringParamValue);
	}
	native private long getDriverVersion_void(long pNativeObject);
	public com.earthview.world.graphic.DriverVersion getDriverVersion()
	{
		long returnValue = getDriverVersion_void(this.nativeObject.pointer);
		com.earthview.world.graphic.DriverVersion __returnValue = new com.earthview.world.graphic.DriverVersion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DriverVersion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DriverVersion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DriverVersion");
		}
		return __returnValue;
	}
	native private int getVendor_void(long pNativeObject);
	public com.earthview.world.graphic.GPUVendor getVendor()
	{
		int returnValue = getVendor_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.GPUVendor.toEnum(returnValue);
	}
	native private void setVendor_GPUVendor(long pNativeObject, int v);
	public void setVendor(com.earthview.world.graphic.GPUVendor v)
	{
		int vParamValue = v.getValue();
		setVendor_GPUVendor(this.nativeObject.pointer, vParamValue);
	}
	native private void parseVendorFromString_EVString(long pNativeObject, String vendorString);
	/**
	 * 解析和设置vendor
	 * @param vendorString 
	 */
	public void parseVendorFromString(String vendorString)
	{
		String vendorStringParamValue = vendorString;
		parseVendorFromString_EVString(this.nativeObject.pointer, vendorStringParamValue);
	}
	native private static int vendorFromString_EVString(String vendorString);
	/**
	 * 转换vendor从string类型到enum类型
	 * @param vendorString 
	 */
	public static com.earthview.world.graphic.GPUVendor vendorFromString(String vendorString)
	{
		String vendorStringParamValue = vendorString;
		int returnValue = vendorFromString_EVString(vendorStringParamValue);
		return com.earthview.world.graphic.GPUVendor.toEnum(returnValue);
	}
	native private static String vendorToString_GPUVendor(int v);
	/**
	 * 转换vendor从string类型到string类型
	 * @param vendorString 
	 */
	public static String vendorToString(com.earthview.world.graphic.GPUVendor v)
	{
		int vParamValue = v.getValue();
		String returnValue = vendorToString_GPUVendor(vParamValue);
		return returnValue;
	}
	native private boolean isDriverOlderThanVersion_DriverVersion(long pNativeObject, long v);
	public boolean isDriverOlderThanVersion(com.earthview.world.graphic.DriverVersion v)
	{
		long vParamValue = v.nativeObject.pointer;
		boolean returnValue = isDriverOlderThanVersion_DriverVersion(this.nativeObject.pointer, vParamValue);
		return returnValue;
	}
	native private void setNumWorldMatrices_ev_uint16(long pNativeObject, int num);
	public void setNumWorldMatrices(int num)
	{
		int numParamValue = num;
		setNumWorldMatrices_ev_uint16(this.nativeObject.pointer, numParamValue);
	}
	native private void setNumTextureUnits_ev_uint16(long pNativeObject, int num);
	public void setNumTextureUnits(int num)
	{
		int numParamValue = num;
		setNumTextureUnits_ev_uint16(this.nativeObject.pointer, numParamValue);
	}
	native private void setStencilBufferBitDepth_ev_uint16(long pNativeObject, int num);
	public void setStencilBufferBitDepth(int num)
	{
		int numParamValue = num;
		setStencilBufferBitDepth_ev_uint16(this.nativeObject.pointer, numParamValue);
	}
	native private void setNumVertexBlendMatrices_ev_uint16(long pNativeObject, int num);
	public void setNumVertexBlendMatrices(int num)
	{
		int numParamValue = num;
		setNumVertexBlendMatrices_ev_uint16(this.nativeObject.pointer, numParamValue);
	}
	native private void setNumMultiRenderTargets_ev_uint16(long pNativeObject, int num);
	/**
	 * 渲染目标支持同时发生的数量
	 * @param num 
	 */
	public void setNumMultiRenderTargets(int num)
	{
		int numParamValue = num;
		setNumMultiRenderTargets_ev_uint16(this.nativeObject.pointer, numParamValue);
	}
	native private int getNumWorldMatrices_void(long pNativeObject);
	public int getNumWorldMatrices()
	{
		int returnValue = getNumWorldMatrices_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumTextureUnits_void(long pNativeObject);
	/**
	 * 返回当前硬件支持输出的纹理单元的数量
	 * @param  
	 */
	public int getNumTextureUnits()
	{
		int returnValue = getNumTextureUnits_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getStencilBufferBitDepth_void(long pNativeObject);
	/**
	 * 如果硬件模板被支持，获得硬件的位深度加速模板缓存如果硬件模板不被支持，软件将提供一个8位的软件模板
	 * @param  
	 */
	public int getStencilBufferBitDepth()
	{
		int returnValue = getStencilBufferBitDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumVertexBlendMatrices_void(long pNativeObject);
	/**
	 * 返回渲染系统中可应用于硬件顶点混合的矩阵数量
	 * @param  
	 */
	public int getNumVertexBlendMatrices()
	{
		int returnValue = getNumVertexBlendMatrices_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumMultiRenderTargets_void(long pNativeObject);
	/**
	 * 渲染目标同时支持的数量
	 * @param  
	 */
	public int getNumMultiRenderTargets()
	{
		int returnValue = getNumMultiRenderTargets_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCapabilityRenderSystemSpecific_Capabilities(long pNativeObject, int c);
	/**
	 * 如果性能是渲染系统的细节返回true
	 * @param  
	 */
	public boolean isCapabilityRenderSystemSpecific(com.earthview.world.graphic.Capabilities c)
	{
		int cParamValue = c.getValue();
		boolean returnValue = isCapabilityRenderSystemSpecific_Capabilities(this.nativeObject.pointer, cParamValue);
		return returnValue;
	}
	native private void setCapability_Capabilities(long pNativeObject, int c);
	/**
	 * 添加一个性能标记
	 * @param c 
	 */
	public void setCapability(com.earthview.world.graphic.Capabilities c)
	{
		int cParamValue = c.getValue();
		setCapability_Capabilities(this.nativeObject.pointer, cParamValue);
	}
	native private void unsetCapability_Capabilities(long pNativeObject, int c);
	/**
	 * 去除掉性能标记
	 * @param c 
	 */
	public void unsetCapability(com.earthview.world.graphic.Capabilities c)
	{
		int cParamValue = c.getValue();
		unsetCapability_Capabilities(this.nativeObject.pointer, cParamValue);
	}
	native private boolean hasCapability_Capabilities(long pNativeObject, int c);
	/**
	 * 检查渲染系统的性能
	 * @param c 
	 */
	public boolean hasCapability(com.earthview.world.graphic.Capabilities c)
	{
		int cParamValue = c.getValue();
		boolean returnValue = hasCapability_Capabilities(this.nativeObject.pointer, cParamValue);
		return returnValue;
	}
	native private void addShaderProfile_EVString(long pNativeObject, String profile);
	/**
	 * 添加剖面到支持的剖面列表中
	 * @param profile 
	 */
	public void addShaderProfile(String profile)
	{
		String profileParamValue = profile;
		addShaderProfile_EVString(this.nativeObject.pointer, profileParamValue);
	}
	native private void removeShaderProfile_EVString(long pNativeObject, String profile);
	/**
	 * 去除掉已给阴影剖面
	 * @param  
	 */
	public void removeShaderProfile(String profile)
	{
		String profileParamValue = profile;
		removeShaderProfile_EVString(this.nativeObject.pointer, profileParamValue);
	}
	native private boolean isShaderProfileSupported_EVString(long pNativeObject, String profile);
	/**
	 * 如果这个阴影剖面在支持的阴影剖面列表中则返回true
	 * @param  
	 */
	public boolean isShaderProfileSupported(String profile)
	{
		String profileParamValue = profile;
		boolean returnValue = isShaderProfileSupported_EVString(this.nativeObject.pointer, profileParamValue);
		return returnValue;
	}
	native private long getSupportedShaderProfiles_void(long pNativeObject);
	/**
	 * 返回所有支持的阴影剖面的集合
	 * @param  
	 */
	public com.earthview.world.graphic.ShaderProfiles getSupportedShaderProfiles()
	{
		long returnValue = getSupportedShaderProfiles_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ShaderProfiles __returnValue = new com.earthview.world.graphic.ShaderProfiles(CreatedWhenConstruct.CWC_NotToCreate, "ShaderProfiles");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShaderProfiles)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ShaderProfiles");
		}
		return __returnValue;
	}
	native private int getVertexProgramConstantFloatCount_void(long pNativeObject);
	/**
	 * 获得顶点程序支持的浮点型常量的数量
	 * @param  
	 */
	public int getVertexProgramConstantFloatCount()
	{
		int returnValue = getVertexProgramConstantFloatCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getVertexProgramConstantIntCount_void(long pNativeObject);
	/**
	 * 获得顶点程序支持的整型常量的数量
	 * @param  
	 */
	public int getVertexProgramConstantIntCount()
	{
		int returnValue = getVertexProgramConstantIntCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getVertexProgramConstantBoolCount_void(long pNativeObject);
	/**
	 * 获得顶点程序支持的布尔型常量的数量
	 * @param  
	 */
	public int getVertexProgramConstantBoolCount()
	{
		int returnValue = getVertexProgramConstantBoolCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getGeometryProgramConstantFloatCount_void(long pNativeObject);
	/**
	 * 获得几何程序支持的浮点型常量的数量
	 * @param  
	 */
	public int getGeometryProgramConstantFloatCount()
	{
		int returnValue = getGeometryProgramConstantFloatCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getGeometryProgramConstantIntCount_void(long pNativeObject);
	/**
	 * 获得几何程序支持整型常量的数量
	 * @param  
	 */
	public int getGeometryProgramConstantIntCount()
	{
		int returnValue = getGeometryProgramConstantIntCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getGeometryProgramConstantBoolCount_void(long pNativeObject);
	/**
	 * 获得几何程序支持的布尔型常量的数量
	 * @param  
	 */
	public int getGeometryProgramConstantBoolCount()
	{
		int returnValue = getGeometryProgramConstantBoolCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFragmentProgramConstantFloatCount_void(long pNativeObject);
	/**
	 * 获得片段程序支持的浮点型常量的数量
	 * @param  
	 */
	public int getFragmentProgramConstantFloatCount()
	{
		int returnValue = getFragmentProgramConstantFloatCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFragmentProgramConstantIntCount_void(long pNativeObject);
	/**
	 * 获得片段程序支持的整型常量的数量
	 * @param  
	 */
	public int getFragmentProgramConstantIntCount()
	{
		int returnValue = getFragmentProgramConstantIntCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFragmentProgramConstantBoolCount_void(long pNativeObject);
	/**
	 * 获得片段程序支持的布尔型常量的数量
	 * @param  
	 */
	public int getFragmentProgramConstantBoolCount()
	{
		int returnValue = getFragmentProgramConstantBoolCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDeviceName_EVString(long pNativeObject, String name);
	/**
	 * 设置渲染系统驱动的名字
	 * @param name 
	 */
	public void setDeviceName(String name)
	{
		String nameParamValue = name;
		setDeviceName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getDeviceName_void(long pNativeObject);
	/**
	 * 获得渲染系统驱动的名字
	 * @param name 
	 */
	public String getDeviceName()
	{
		String returnValue = getDeviceName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVertexProgramConstantFloatCount_ev_uint16(long pNativeObject, int c);
	/**
	 * 设置顶点程序支持的浮点型常量的数量
	 * @param c 
	 */
	public void setVertexProgramConstantFloatCount(int c)
	{
		int cParamValue = c;
		setVertexProgramConstantFloatCount_ev_uint16(this.nativeObject.pointer, cParamValue);
	}
	native private void setVertexProgramConstantIntCount_ev_uint16(long pNativeObject, int c);
	/**
	 * 设置顶点程序支持的整型常量的数量
	 * @param c 
	 */
	public void setVertexProgramConstantIntCount(int c)
	{
		int cParamValue = c;
		setVertexProgramConstantIntCount_ev_uint16(this.nativeObject.pointer, cParamValue);
	}
	native private void setVertexProgramConstantBoolCount_ev_uint16(long pNativeObject, int c);
	/**
	 * 设置顶点程序支持的布尔型常量的数量
	 * @param c 
	 */
	public void setVertexProgramConstantBoolCount(int c)
	{
		int cParamValue = c;
		setVertexProgramConstantBoolCount_ev_uint16(this.nativeObject.pointer, cParamValue);
	}
	native private void setGeometryProgramConstantFloatCount_ev_uint16(long pNativeObject, int c);
	/**
	 * 设置几何程序支持的浮点型常量的数量
	 * @param c 
	 */
	public void setGeometryProgramConstantFloatCount(int c)
	{
		int cParamValue = c;
		setGeometryProgramConstantFloatCount_ev_uint16(this.nativeObject.pointer, cParamValue);
	}
	native private void setGeometryProgramConstantIntCount_ev_uint16(long pNativeObject, int c);
	/**
	 * 设置几何程序支持的整型常量的数量
	 * @param c 
	 */
	public void setGeometryProgramConstantIntCount(int c)
	{
		int cParamValue = c;
		setGeometryProgramConstantIntCount_ev_uint16(this.nativeObject.pointer, cParamValue);
	}
	native private void setGeometryProgramConstantBoolCount_ev_uint16(long pNativeObject, int c);
	/**
	 * 设置几何程序支持的布尔型常量的数量
	 * @param c 
	 */
	public void setGeometryProgramConstantBoolCount(int c)
	{
		int cParamValue = c;
		setGeometryProgramConstantBoolCount_ev_uint16(this.nativeObject.pointer, cParamValue);
	}
	native private void setFragmentProgramConstantFloatCount_ev_uint16(long pNativeObject, int c);
	/**
	 * 设置片段程序支持的浮点型常量的数量
	 * @param c 
	 */
	public void setFragmentProgramConstantFloatCount(int c)
	{
		int cParamValue = c;
		setFragmentProgramConstantFloatCount_ev_uint16(this.nativeObject.pointer, cParamValue);
	}
	native private void setFragmentProgramConstantIntCount_ev_uint16(long pNativeObject, int c);
	/**
	 * 设置片段程序支持的整型常量的数量
	 * @param c 
	 */
	public void setFragmentProgramConstantIntCount(int c)
	{
		int cParamValue = c;
		setFragmentProgramConstantIntCount_ev_uint16(this.nativeObject.pointer, cParamValue);
	}
	native private void setFragmentProgramConstantBoolCount_ev_uint16(long pNativeObject, int c);
	/**
	 * 设置片段程序支持的布尔型常量的数量
	 * @param c 
	 */
	public void setFragmentProgramConstantBoolCount(int c)
	{
		int cParamValue = c;
		setFragmentProgramConstantBoolCount_ev_uint16(this.nativeObject.pointer, cParamValue);
	}
	native private void setMaxPointSize_Real(long pNativeObject, double s);
	/**
	 * 设置像素中最大点的大小
	 * @param  
	 */
	public void setMaxPointSize(double s)
	{
		double sParamValue = s;
		setMaxPointSize_Real(this.nativeObject.pointer, sParamValue);
	}
	native private double getMaxPointSize_void(long pNativeObject);
	/**
	 * 获得像素中最大点得大小
	 * @param  
	 */
	public double getMaxPointSize()
	{
		double returnValue = getMaxPointSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setNonPOW2TexturesLimited_ev_bool(long pNativeObject, boolean l);
	/**
	 * 设置Non-POW2纹理限制
	 * @param  
	 */
	public void setNonPOW2TexturesLimited(boolean l)
	{
		boolean lParamValue = l;
		setNonPOW2TexturesLimited_ev_bool(this.nativeObject.pointer, lParamValue);
	}
	native private boolean getNonPOW2TexturesLimited_void(long pNativeObject);
	/**
	 * 判断Non-POW2纹理是否在属性方面受限制
	 * @param  
	 */
	public boolean getNonPOW2TexturesLimited()
	{
		boolean returnValue = getNonPOW2TexturesLimited_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setNumVertexTextureUnits_ev_uint16(long pNativeObject, int n);
	/**
	 * 设置支持顶点纹理单元的数量
	 * @param n 
	 */
	public void setNumVertexTextureUnits(int n)
	{
		int nParamValue = n;
		setNumVertexTextureUnits_ev_uint16(this.nativeObject.pointer, nParamValue);
	}
	native private int getNumVertexTextureUnits_void(long pNativeObject);
	/**
	 * 获得支持顶点纹理单元的数量
	 * @param n 
	 */
	public int getNumVertexTextureUnits()
	{
		int returnValue = getNumVertexTextureUnits_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVertexTextureUnitsShared_ev_bool(long pNativeObject, boolean shared);
	/**
	 * 设置是否顶点纹理单元被片段处理器分享
	 * @param shared 
	 */
	public void setVertexTextureUnitsShared(boolean shared)
	{
		boolean sharedParamValue = shared;
		setVertexTextureUnitsShared_ev_bool(this.nativeObject.pointer, sharedParamValue);
	}
	native private boolean getVertexTextureUnitsShared_void(long pNativeObject);
	/**
	 * 获得是否顶点纹理单元被片段处理器分享
	 * @param  
	 */
	public boolean getVertexTextureUnitsShared()
	{
		boolean returnValue = getVertexTextureUnitsShared_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGeometryProgramNumOutputVertices_ev_int32(long pNativeObject, int numOutputVertices);
	/**
	 * 设置几何程序可以输出的顶点的数量
	 * @param numOutputVertices 
	 */
	public void setGeometryProgramNumOutputVertices(int numOutputVertices)
	{
		int numOutputVerticesParamValue = numOutputVertices;
		setGeometryProgramNumOutputVertices_ev_int32(this.nativeObject.pointer, numOutputVerticesParamValue);
	}
	native private int getGeometryProgramNumOutputVertices_void(long pNativeObject);
	/**
	 * 获得几何程序可以输出的顶点的数量
	 * @param  
	 */
	public int getGeometryProgramNumOutputVertices()
	{
		int returnValue = getGeometryProgramNumOutputVertices_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getRenderSystemName_void(long pNativeObject);
	/**
	 * 从产生的性能中获得渲染系统的标识
	 * @param  
	 */
	public String getRenderSystemName()
	{
		String returnValue = getRenderSystemName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRenderSystemName_EVString(long pNativeObject, String rs);
	/**
	 * 设置渲染系统的标识
	 * @param rs 
	 */
	public void setRenderSystemName(String rs)
	{
		String rsParamValue = rs;
		setRenderSystemName_EVString(this.nativeObject.pointer, rsParamValue);
	}
	native private void setCategoryRelevant_CapabilitiesCategory_ev_bool(long pNativeObject, int cat, boolean relevant);
	/**
	 * 设置种类是否相关
	 * @param cat 
	 * @param relevant 
	 */
	public void setCategoryRelevant(com.earthview.world.graphic.CapabilitiesCategory cat, boolean relevant)
	{
		int catParamValue = cat.getValue();
		boolean relevantParamValue = relevant;
		setCategoryRelevant_CapabilitiesCategory_ev_bool(this.nativeObject.pointer, catParamValue, relevantParamValue);
	}
	native private boolean isCategoryRelevant_CapabilitiesCategory(long pNativeObject, int cat);
	/**
	 * 返回种类是否相关
	 * @param  
	 */
	public boolean isCategoryRelevant(com.earthview.world.graphic.CapabilitiesCategory cat)
	{
		int catParamValue = cat.getValue();
		boolean returnValue = isCategoryRelevant_CapabilitiesCategory(this.nativeObject.pointer, catParamValue);
		return returnValue;
	}
	native private void log_CLogger(long pNativeObject, long ptLog);
	/**
	 * 将性能写入日志中
	 * @param ptLog 
	 */
	public void log(com.earthview.world.core.Logger ptLog)
	{
		long ptLogParamValue = (ptLog == null ? 0L : ptLog.nativeObject.pointer);
		log_CLogger(this.nativeObject.pointer, ptLogParamValue);
	}
	public RenderSystemCapabilities(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderSystemCapabilities(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_calculateSize_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_calculateSize_void(this.nativeObject.pointer, "calculateSize_void_callback");
		}
	}
	
	public static RenderSystemCapabilities fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderSystemCapabilities obj = null;
 		if(baseObj instanceof RenderSystemCapabilities)
		{
			obj = (RenderSystemCapabilities)baseObj;
		} else {
			obj = new RenderSystemCapabilities(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderSystemCapabilities");
			obj.increaseCast();
		}

		return obj;
	}
}
