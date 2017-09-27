package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShaderGenerator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator", new ShaderGeneratorClassFactory());
	}

	native private static boolean initialize_void();
	public static boolean initialize()
	{
		boolean returnValue = initialize_void();
		return returnValue;
	}
	native private static void ev_finalize_void();
	public static void ev_finalize()
	{
		ev_finalize_void();
	}
	native private static long getSingleton_void();
	public static com.earthview.world.graphic.rtshadersystem.ShaderGenerator getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.rtshadersystem.ShaderGenerator __returnValue = new com.earthview.world.graphic.rtshadersystem.ShaderGenerator(CreatedWhenConstruct.CWC_NotToCreate, "CShaderGenerator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ShaderGenerator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CShaderGenerator");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.rtshadersystem.ShaderGenerator getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.ShaderGenerator __returnValue = new com.earthview.world.graphic.rtshadersystem.ShaderGenerator(CreatedWhenConstruct.CWC_NotToCreate, "CShaderGenerator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ShaderGenerator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CShaderGenerator");
		}
		return __returnValue;
	}
	native private void addSceneManager_CSceneManager(long pNativeObject, long sceneMgr);
	public void addSceneManager(com.earthview.world.graphic.SceneManager sceneMgr)
	{
		long sceneMgrParamValue = (sceneMgr == null ? 0L : sceneMgr.nativeObject.pointer);
		addSceneManager_CSceneManager(this.nativeObject.pointer, sceneMgrParamValue);
	}
	native private void removeSceneManager_CSceneManager(long pNativeObject, long sceneMgr);
	public void removeSceneManager(com.earthview.world.graphic.SceneManager sceneMgr)
	{
		long sceneMgrParamValue = (sceneMgr == null ? 0L : sceneMgr.nativeObject.pointer);
		removeSceneManager_CSceneManager(this.nativeObject.pointer, sceneMgrParamValue);
	}
	native private long getActiveSceneManager_void(long pNativeObject);
	public com.earthview.world.graphic.SceneManager getActiveSceneManager()
	{
		long returnValue = getActiveSceneManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private void setTargetLanguage_EVString(long pNativeObject, String shaderLanguage);
	public void setTargetLanguage(String shaderLanguage)
	{
		String shaderLanguageParamValue = shaderLanguage;
		setTargetLanguage_EVString(this.nativeObject.pointer, shaderLanguageParamValue);
	}
	native private long getTargetLanguage_void(long pNativeObject);
	public StringPointer getTargetLanguage()
	{
		long returnValue = getTargetLanguage_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setVertexShaderProfiles_EVString(long pNativeObject, String vertexShaderProfiles);
	public void setVertexShaderProfiles(String vertexShaderProfiles)
	{
		String vertexShaderProfilesParamValue = vertexShaderProfiles;
		setVertexShaderProfiles_EVString(this.nativeObject.pointer, vertexShaderProfilesParamValue);
	}
	native private long getVertexShaderProfiles_void(long pNativeObject);
	public StringPointer getVertexShaderProfiles()
	{
		long returnValue = getVertexShaderProfiles_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getVertexShaderProfilesList_void(long pNativeObject);
	public com.earthview.world.core.StringVector getVertexShaderProfilesList()
	{
		long returnValue = getVertexShaderProfilesList_void(this.nativeObject.pointer);
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
	native private void setFragmentShaderProfiles_EVString(long pNativeObject, String fragmentShaderProfiles);
	public void setFragmentShaderProfiles(String fragmentShaderProfiles)
	{
		String fragmentShaderProfilesParamValue = fragmentShaderProfiles;
		setFragmentShaderProfiles_EVString(this.nativeObject.pointer, fragmentShaderProfilesParamValue);
	}
	native private long getFragmentShaderProfiles_void(long pNativeObject);
	public StringPointer getFragmentShaderProfiles()
	{
		long returnValue = getFragmentShaderProfiles_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getFragmentShaderProfilesList_void(long pNativeObject);
	public com.earthview.world.core.StringVector getFragmentShaderProfilesList()
	{
		long returnValue = getFragmentShaderProfilesList_void(this.nativeObject.pointer);
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
	native private void setShaderCachePath_EVString(long pNativeObject, String cachePath);
	public void setShaderCachePath(String cachePath)
	{
		String cachePathParamValue = cachePath;
		setShaderCachePath_EVString(this.nativeObject.pointer, cachePathParamValue);
	}
	native private long getShaderCachePath_void(long pNativeObject);
	public StringPointer getShaderCachePath()
	{
		long returnValue = getShaderCachePath_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void flushShaderCache_void(long pNativeObject);
	public void flushShaderCache()
	{
		flushShaderCache_void(this.nativeObject.pointer);
	}
	native private long getRenderState_EVString(long pNativeObject, String schemeName);
	public com.earthview.world.graphic.rtshadersystem.RenderState getRenderState(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		long returnValue = getRenderState_EVString(this.nativeObject.pointer, schemeNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.RenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate, "CRenderState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.RenderState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderState");
		}
		return __returnValue;
	}
	public static class RenderStateCreateOrRetrieveResult extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult", new RenderStateCreateOrRetrieveResultClassFactory());
		}

		native private long get_first_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.RenderState get_first()
		{
			long jniValue = get_first_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.rtshadersystem.RenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate, "CRenderState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.RenderState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderState");
			}
			return __returnValue;
		}
		
		native private void set_first_CRenderState (long pNativeObject, long value);
		public void set_first(com.earthview.world.graphic.rtshadersystem.RenderState first)
		{
			long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
			
			set_first_CRenderState(this.nativeObject.pointer, firstParamValue);
		}
		
		native private boolean get_second_void(long pNativeObject);
		public boolean get_second()
		{
			boolean jniValue = get_second_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_second_ev_bool (long pNativeObject, boolean value);
		public void set_second(boolean second)
		{
			boolean secondParamValue = second;
			
			set_second_ev_bool(this.nativeObject.pointer, secondParamValue);
		}
		
		/**
		 * 构造函数
		 * @param fir 键
		 * @param sec 值
		 */
		public RenderStateCreateOrRetrieveResult(com.earthview.world.graphic.rtshadersystem.RenderState fir, boolean sec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer firPtr = new BasePointer(fir);
			list.add("fir", firPtr.get());
			BasePointer secPtr = new BasePointer(sec);
			list.add("sec", secPtr.get());
			Create("RenderStateCreateOrRetrieveResult", list);
		}

		public RenderStateCreateOrRetrieveResult() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("RenderStateCreateOrRetrieveResult", null);
		}

		public RenderStateCreateOrRetrieveResult(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RenderStateCreateOrRetrieveResult(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static RenderStateCreateOrRetrieveResult fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RenderStateCreateOrRetrieveResult obj = null;
 			if(baseObj instanceof RenderStateCreateOrRetrieveResult)
			{
				obj = (RenderStateCreateOrRetrieveResult)baseObj;
			} else {
				obj = new RenderStateCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "RenderStateCreateOrRetrieveResult");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RenderStateCreateOrRetrieveResultClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RenderStateCreateOrRetrieveResult emptyInstance = new RenderStateCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long createOrRetrieveRenderState_EVString(long pNativeObject, String schemeName);
	public com.earthview.world.graphic.rtshadersystem.ShaderGenerator.RenderStateCreateOrRetrieveResult createOrRetrieveRenderState(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		long returnValue = createOrRetrieveRenderState_EVString(this.nativeObject.pointer, schemeNameParamValue);
		com.earthview.world.graphic.rtshadersystem.ShaderGenerator.RenderStateCreateOrRetrieveResult __returnValue = new com.earthview.world.graphic.rtshadersystem.ShaderGenerator.RenderStateCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RenderStateCreateOrRetrieveResult");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ShaderGenerator.RenderStateCreateOrRetrieveResult)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RenderStateCreateOrRetrieveResult");
		}
		return __returnValue;
	}
	native private boolean hasRenderState_EVString(long pNativeObject, String schemeName);
	public boolean hasRenderState(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		boolean returnValue = hasRenderState_EVString(this.nativeObject.pointer, schemeNameParamValue);
		return returnValue;
	}
	native private long getRenderState_EVString_EVString_ev_uint16(long pNativeObject, String schemeName, String materialName, int passIndex);
	public com.earthview.world.graphic.rtshadersystem.RenderState getRenderState(String schemeName, String materialName, int passIndex)
	{
		String schemeNameParamValue = schemeName;
		String materialNameParamValue = materialName;
		int passIndexParamValue = passIndex;
		long returnValue = getRenderState_EVString_EVString_ev_uint16(this.nativeObject.pointer, schemeNameParamValue, materialNameParamValue, passIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.RenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate, "CRenderState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.RenderState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderState");
		}
		return __returnValue;
	}
	native private long getRenderState_EVString_EVString_EVString_ev_uint16(long pNativeObject, String schemeName, String materialName, String groupName, int passIndex);
	public com.earthview.world.graphic.rtshadersystem.RenderState getRenderState(String schemeName, String materialName, String groupName, int passIndex)
	{
		String schemeNameParamValue = schemeName;
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		int passIndexParamValue = passIndex;
		long returnValue = getRenderState_EVString_EVString_EVString_ev_uint16(this.nativeObject.pointer, schemeNameParamValue, materialNameParamValue, groupNameParamValue, passIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.RenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate, "CRenderState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.RenderState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderState");
		}
		return __returnValue;
	}
	native private void addSubRenderStateFactory_CSubRenderStateFactory(long pNativeObject, long factory);
	public void addSubRenderStateFactory(com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory factory)
	{
		long factoryParamValue = (factory == null ? 0L : factory.nativeObject.pointer);
		addSubRenderStateFactory_CSubRenderStateFactory(this.nativeObject.pointer, factoryParamValue);
	}
	native private long getNumSubRenderStateFactories_void(long pNativeObject);
	public long getNumSubRenderStateFactories()
	{
		long returnValue = getNumSubRenderStateFactories_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSubRenderStateFactory_ev_size_t(long pNativeObject, long index);
	public com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory getSubRenderStateFactory(long index)
	{
		long indexParamValue = index;
		long returnValue = getSubRenderStateFactory_ev_size_t(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory __returnValue = new com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory(CreatedWhenConstruct.CWC_NotToCreate, "CSubRenderStateFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubRenderStateFactory");
		}
		return __returnValue;
	}
	native private long getSubRenderStateFactory_EVString(long pNativeObject, String type);
	public com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory getSubRenderStateFactory(String type)
	{
		String typeParamValue = type;
		long returnValue = getSubRenderStateFactory_EVString(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory __returnValue = new com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory(CreatedWhenConstruct.CWC_NotToCreate, "CSubRenderStateFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubRenderStateFactory");
		}
		return __returnValue;
	}
	native private void removeSubRenderStateFactory_CSubRenderStateFactory(long pNativeObject, long factory);
	public void removeSubRenderStateFactory(com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory factory)
	{
		long factoryParamValue = (factory == null ? 0L : factory.nativeObject.pointer);
		removeSubRenderStateFactory_CSubRenderStateFactory(this.nativeObject.pointer, factoryParamValue);
	}
	native private long createSubRenderState_EVString(long pNativeObject, String type);
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createSubRenderState(String type)
	{
		String typeParamValue = type;
		long returnValue = createSubRenderState_EVString(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.SubRenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate, "CSubRenderState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.SubRenderState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubRenderState");
		}
		return __returnValue;
	}
	native private void destroySubRenderState_CSubRenderState(long pNativeObject, long subRenderState);
	public void destroySubRenderState(com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState)
	{
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		destroySubRenderState_CSubRenderState(this.nativeObject.pointer, subRenderStateParamValue);
	}
	native private boolean hasShaderBasedTechnique_EVString_EVString_EVString(long pNativeObject, String materialName, String srcTechniqueSchemeName, String dstTechniqueSchemeName);
	public boolean hasShaderBasedTechnique(String materialName, String srcTechniqueSchemeName, String dstTechniqueSchemeName)
	{
		String materialNameParamValue = materialName;
		String srcTechniqueSchemeNameParamValue = srcTechniqueSchemeName;
		String dstTechniqueSchemeNameParamValue = dstTechniqueSchemeName;
		boolean returnValue = hasShaderBasedTechnique_EVString_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, srcTechniqueSchemeNameParamValue, dstTechniqueSchemeNameParamValue);
		return returnValue;
	}
	native private boolean hasShaderBasedTechnique_EVString_EVString_EVString_EVString(long pNativeObject, String materialName, String groupName, String srcTechniqueSchemeName, String dstTechniqueSchemeName);
	public boolean hasShaderBasedTechnique(String materialName, String groupName, String srcTechniqueSchemeName, String dstTechniqueSchemeName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		String srcTechniqueSchemeNameParamValue = srcTechniqueSchemeName;
		String dstTechniqueSchemeNameParamValue = dstTechniqueSchemeName;
		boolean returnValue = hasShaderBasedTechnique_EVString_EVString_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue, srcTechniqueSchemeNameParamValue, dstTechniqueSchemeNameParamValue);
		return returnValue;
	}
	native private boolean createShaderBasedTechnique_EVString_EVString_EVString_ev_bool(long pNativeObject, String materialName, String srcTechniqueSchemeName, String dstTechniqueSchemeName, boolean overProgrammable);
	///ev_bool			createShaderBasedTechnique	(const EVString& materialName, const EVString& srcTechniqueSchemeName,
	///	const EVString& dstTechniqueSchemeName, ev_bool overProgrammable = false);
	public boolean createShaderBasedTechnique(String materialName, String srcTechniqueSchemeName, String dstTechniqueSchemeName, boolean overProgrammable)
	{
		String materialNameParamValue = materialName;
		String srcTechniqueSchemeNameParamValue = srcTechniqueSchemeName;
		String dstTechniqueSchemeNameParamValue = dstTechniqueSchemeName;
		boolean overProgrammableParamValue = overProgrammable;
		boolean returnValue = createShaderBasedTechnique_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, materialNameParamValue, srcTechniqueSchemeNameParamValue, dstTechniqueSchemeNameParamValue, overProgrammableParamValue);
		return returnValue;
	}
	native private boolean createShaderBasedTechnique_EVString_EVString_EVString(long pNativeObject, String materialName, String srcTechniqueSchemeName, String dstTechniqueSchemeName);
	public boolean createShaderBasedTechnique(String materialName, String srcTechniqueSchemeName, String dstTechniqueSchemeName)
	{
		String materialNameParamValue = materialName;
		String srcTechniqueSchemeNameParamValue = srcTechniqueSchemeName;
		String dstTechniqueSchemeNameParamValue = dstTechniqueSchemeName;
		boolean returnValue = createShaderBasedTechnique_EVString_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, srcTechniqueSchemeNameParamValue, dstTechniqueSchemeNameParamValue);
		return returnValue;
	}
	native private boolean createShaderBasedTechnique_EVString_EVString_EVString_EVString_ev_bool(long pNativeObject, String materialName, String groupName, String srcTechniqueSchemeName, String dstTechniqueSchemeName, boolean overProgrammable);
	public boolean createShaderBasedTechnique(String materialName, String groupName, String srcTechniqueSchemeName, String dstTechniqueSchemeName, boolean overProgrammable)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		String srcTechniqueSchemeNameParamValue = srcTechniqueSchemeName;
		String dstTechniqueSchemeNameParamValue = dstTechniqueSchemeName;
		boolean overProgrammableParamValue = overProgrammable;
		boolean returnValue = createShaderBasedTechnique_EVString_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue, srcTechniqueSchemeNameParamValue, dstTechniqueSchemeNameParamValue, overProgrammableParamValue);
		return returnValue;
	}
	native private boolean createShaderBasedTechnique_EVString_EVString_EVString_EVString(long pNativeObject, String materialName, String groupName, String srcTechniqueSchemeName, String dstTechniqueSchemeName);
	public boolean createShaderBasedTechnique(String materialName, String groupName, String srcTechniqueSchemeName, String dstTechniqueSchemeName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		String srcTechniqueSchemeNameParamValue = srcTechniqueSchemeName;
		String dstTechniqueSchemeNameParamValue = dstTechniqueSchemeName;
		boolean returnValue = createShaderBasedTechnique_EVString_EVString_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue, srcTechniqueSchemeNameParamValue, dstTechniqueSchemeNameParamValue);
		return returnValue;
	}
	native private boolean removeShaderBasedTechnique_EVString_EVString_EVString(long pNativeObject, String materialName, String srcTechniqueSchemeName, String dstTechniqueSchemeName);
	public boolean removeShaderBasedTechnique(String materialName, String srcTechniqueSchemeName, String dstTechniqueSchemeName)
	{
		String materialNameParamValue = materialName;
		String srcTechniqueSchemeNameParamValue = srcTechniqueSchemeName;
		String dstTechniqueSchemeNameParamValue = dstTechniqueSchemeName;
		boolean returnValue = removeShaderBasedTechnique_EVString_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, srcTechniqueSchemeNameParamValue, dstTechniqueSchemeNameParamValue);
		return returnValue;
	}
	native private boolean removeShaderBasedTechnique_EVString_EVString_EVString_EVString(long pNativeObject, String materialName, String groupName, String srcTechniqueSchemeName, String dstTechniqueSchemeName);
	public boolean removeShaderBasedTechnique(String materialName, String groupName, String srcTechniqueSchemeName, String dstTechniqueSchemeName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		String srcTechniqueSchemeNameParamValue = srcTechniqueSchemeName;
		String dstTechniqueSchemeNameParamValue = dstTechniqueSchemeName;
		boolean returnValue = removeShaderBasedTechnique_EVString_EVString_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue, srcTechniqueSchemeNameParamValue, dstTechniqueSchemeNameParamValue);
		return returnValue;
	}
	native private boolean removeAllShaderBasedTechniques_EVString_EVString(long pNativeObject, String materialName, String groupName);
	public boolean removeAllShaderBasedTechniques(String materialName, String groupName)
	{
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		boolean returnValue = removeAllShaderBasedTechniques_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue);
		return returnValue;
	}
	native private boolean removeAllShaderBasedTechniques_EVString(long pNativeObject, String materialName);
	public boolean removeAllShaderBasedTechniques(String materialName)
	{
		String materialNameParamValue = materialName;
		boolean returnValue = removeAllShaderBasedTechniques_EVString(this.nativeObject.pointer, materialNameParamValue);
		return returnValue;
	}
	native private boolean cloneShaderBasedTechniques_EVString_EVString_EVString_EVString(long pNativeObject, String srcMaterialName, String srcGroupName, String dstMaterialName, String dstGroupName);
	public boolean cloneShaderBasedTechniques(String srcMaterialName, String srcGroupName, String dstMaterialName, String dstGroupName)
	{
		String srcMaterialNameParamValue = srcMaterialName;
		String srcGroupNameParamValue = srcGroupName;
		String dstMaterialNameParamValue = dstMaterialName;
		String dstGroupNameParamValue = dstGroupName;
		boolean returnValue = cloneShaderBasedTechniques_EVString_EVString_EVString_EVString(this.nativeObject.pointer, srcMaterialNameParamValue, srcGroupNameParamValue, dstMaterialNameParamValue, dstGroupNameParamValue);
		return returnValue;
	}
	native private void removeAllShaderBasedTechniques_void(long pNativeObject);
	public void removeAllShaderBasedTechniques()
	{
		removeAllShaderBasedTechniques_void(this.nativeObject.pointer);
	}
	native private void createScheme_EVString(long pNativeObject, String schemeName);
	public void createScheme(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		createScheme_EVString(this.nativeObject.pointer, schemeNameParamValue);
	}
	native private void invalidateScheme_EVString(long pNativeObject, String schemeName);
	public void invalidateScheme(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		invalidateScheme_EVString(this.nativeObject.pointer, schemeNameParamValue);
	}
	native private boolean validateScheme_EVString(long pNativeObject, String schemeName);
	public boolean validateScheme(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		boolean returnValue = validateScheme_EVString(this.nativeObject.pointer, schemeNameParamValue);
		return returnValue;
	}
	native private void invalidateMaterial_EVString_EVString_EVString(long pNativeObject, String schemeName, String materialName, String groupName);
	///void			invalidateMaterial			(const EVString& schemeName, const EVString& materialName,
	///	const EVString& groupName = CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME);
	public void invalidateMaterial(String schemeName, String materialName, String groupName)
	{
		String schemeNameParamValue = schemeName;
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		invalidateMaterial_EVString_EVString_EVString(this.nativeObject.pointer, schemeNameParamValue, materialNameParamValue, groupNameParamValue);
	}
	native private void invalidateMaterial_EVString_EVString(long pNativeObject, String schemeName, String materialName);
	public void invalidateMaterial(String schemeName, String materialName)
	{
		String schemeNameParamValue = schemeName;
		String materialNameParamValue = materialName;
		invalidateMaterial_EVString_EVString(this.nativeObject.pointer, schemeNameParamValue, materialNameParamValue);
	}
	native private boolean validateMaterial_EVString_EVString_EVString(long pNativeObject, String schemeName, String materialName, String groupName);
	///ev_bool			validateMaterial			(const EVString& schemeName, const EVString& materialName,
	///	const EVString& groupName = CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME);
	public boolean validateMaterial(String schemeName, String materialName, String groupName)
	{
		String schemeNameParamValue = schemeName;
		String materialNameParamValue = materialName;
		String groupNameParamValue = groupName;
		boolean returnValue = validateMaterial_EVString_EVString_EVString(this.nativeObject.pointer, schemeNameParamValue, materialNameParamValue, groupNameParamValue);
		return returnValue;
	}
	native private boolean validateMaterial_EVString_EVString(long pNativeObject, String schemeName, String materialName);
	public boolean validateMaterial(String schemeName, String materialName)
	{
		String schemeNameParamValue = schemeName;
		String materialNameParamValue = materialName;
		boolean returnValue = validateMaterial_EVString_EVString(this.nativeObject.pointer, schemeNameParamValue, materialNameParamValue);
		return returnValue;
	}
	native private long getMaterialSerializerListener_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.Sgmaterialserializerlistener getMaterialSerializerListener()
	{
		long returnValue = getMaterialSerializerListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.Sgmaterialserializerlistener __returnValue = new com.earthview.world.graphic.rtshadersystem.Sgmaterialserializerlistener(CreatedWhenConstruct.CWC_NotToCreate, "CSGMaterialSerializerListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.Sgmaterialserializerlistener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSGMaterialSerializerListener");
		}
		return __returnValue;
	}
	native private long getVertexShaderCount_void(long pNativeObject);
	public long getVertexShaderCount()
	{
		long returnValue = getVertexShaderCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFragmentShaderCount_void(long pNativeObject);
	public long getFragmentShaderCount()
	{
		long returnValue = getFragmentShaderCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVertexShaderOutputsCompactPolicy_VSOutputCompactPolicy(long pNativeObject, int policy);
	public void setVertexShaderOutputsCompactPolicy(com.earthview.world.graphic.rtshadersystem.VSOutputCompactPolicy policy)
	{
		int policyParamValue = policy.getValue();
		setVertexShaderOutputsCompactPolicy_VSOutputCompactPolicy(this.nativeObject.pointer, policyParamValue);
	}
	native private int getVertexShaderOutputsCompactPolicy_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.VSOutputCompactPolicy getVertexShaderOutputsCompactPolicy()
	{
		int returnValue = getVertexShaderOutputsCompactPolicy_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.rtshadersystem.VSOutputCompactPolicy.toEnum(returnValue);
	}
	native private void setCreateShaderOverProgrammablePass_ev_bool(long pNativeObject, boolean value);
	public void setCreateShaderOverProgrammablePass(boolean value)
	{
		boolean valueParamValue = value;
		setCreateShaderOverProgrammablePass_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getCreateShaderOverProgrammablePass_void(long pNativeObject);
	public boolean getCreateShaderOverProgrammablePass()
	{
		boolean returnValue = getCreateShaderOverProgrammablePass_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRTShaderSchemeCount_void(long pNativeObject);
	public long getRTShaderSchemeCount()
	{
		long returnValue = getRTShaderSchemeCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRTShaderScheme_ev_size_t(long pNativeObject, long index);
	public StringPointer getRTShaderScheme(long index)
	{
		long indexParamValue = index;
		long returnValue = getRTShaderScheme_ev_size_t(this.nativeObject.pointer, indexParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
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
	
	///typedef vector<EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*>				EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList;
	public static class Sgtechniquelist extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList", new SgtechniquelistClassFactory());
		}

		public Sgtechniquelist() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SGTechniqueList", null);
		}

		native private void push_back_SGTechnique(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique t)
		{
			long tParamValue = (t == null ? 0L : t.nativeObject.pointer);
			push_back_SGTechnique(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_SGTechnique(long pNativeObject, long pos, long t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique> t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_SGTechnique(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique>(new InstancePointer(returnValue));
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
		public Sgtechniquelist(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Sgtechniquelist(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Sgtechniquelist fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Sgtechniquelist obj = null;
 			if(baseObj instanceof Sgtechniquelist)
			{
				obj = (Sgtechniquelist)baseObj;
			} else {
				obj = new Sgtechniquelist(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SGTechniqueList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SgtechniquelistClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Sgtechniquelist emptyInstance = new Sgtechniquelist(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// Protected types.
	public static class Sgpass extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass", new SgpassClassFactory());
		}

		public Sgpass(com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique parent, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			BasePointer srcPassPtr = new BasePointer(srcPass);
			list.add("srcPass", srcPassPtr.get());
			BasePointer dstPassPtr = new BasePointer(dstPass);
			list.add("dstPass", dstPassPtr.get());
			Create("SGPass", list);
		}

		native private void buildTargetRenderState_void(long pNativeObject);
		public void buildTargetRenderState()
		{
			buildTargetRenderState_void(this.nativeObject.pointer);
		}
		native private void acquirePrograms_void(long pNativeObject);
		public void acquirePrograms()
		{
			acquirePrograms_void(this.nativeObject.pointer);
		}
		native private void releasePrograms_void(long pNativeObject);
		public void releasePrograms()
		{
			releasePrograms_void(this.nativeObject.pointer);
		}
		native private void notifyRenderSingleObject_CRenderable_CAutoParamDataSource_LightList_ev_bool(long pNativeObject, long rend, long source, long pLightList, boolean suppressRenderStateChanges);
		public void notifyRenderSingleObject(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList, boolean suppressRenderStateChanges)
		{
			long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
			long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
			long pLightListParamValue = (pLightList == null ? 0L : pLightList.nativeObject.pointer);
			boolean suppressRenderStateChangesParamValue = suppressRenderStateChanges;
			notifyRenderSingleObject_CRenderable_CAutoParamDataSource_LightList_ev_bool(this.nativeObject.pointer, rendParamValue, sourceParamValue, pLightListParamValue, suppressRenderStateChangesParamValue);
		}
		native private long getSrcPass_void(long pNativeObject);
		public com.earthview.world.graphic.Pass getSrcPass()
		{
			long returnValue = getSrcPass_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPass");
			}
			return __returnValue;
		}
		native private long getDstPass_void(long pNativeObject);
		public com.earthview.world.graphic.Pass getDstPass()
		{
			long returnValue = getDstPass_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPass");
			}
			return __returnValue;
		}
		native private long getCustomFFPSubState_ev_int32(long pNativeObject, int subStateOrder);
		public com.earthview.world.graphic.rtshadersystem.SubRenderState getCustomFFPSubState(int subStateOrder)
		{
			int subStateOrderParamValue = subStateOrder;
			long returnValue = getCustomFFPSubState_ev_int32(this.nativeObject.pointer, subStateOrderParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.rtshadersystem.SubRenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate, "CSubRenderState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.SubRenderState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CSubRenderState");
			}
			return __returnValue;
		}
		native private long getCustomRenderState_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.RenderState getCustomRenderState()
		{
			long returnValue = getCustomRenderState_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.rtshadersystem.RenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate, "CRenderState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.RenderState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderState");
			}
			return __returnValue;
		}
		native private void setCustomRenderState_CRenderState(long pNativeObject, long customRenderState);
		public void setCustomRenderState(com.earthview.world.graphic.rtshadersystem.RenderState customRenderState)
		{
			long customRenderStateParamValue = (customRenderState == null ? 0L : customRenderState.nativeObject.pointer);
			setCustomRenderState_CRenderState(this.nativeObject.pointer, customRenderStateParamValue);
		}
		native private static String get_UserKey_void();
		public static String get_UserKey()
		{
			String jniValue = get_UserKey_void();
			
			return jniValue;
		}
		
		native private static void set_UserKey_EVString (String value);
		public static void set_UserKey(String UserKey)
		{
			String UserKeyParamValue = UserKey;
			
			set_UserKey_EVString(UserKeyParamValue);
		}
		
		public Sgpass(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Sgpass(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Sgpass fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Sgpass obj = null;
 			if(baseObj instanceof Sgpass)
			{
				obj = (Sgpass)baseObj;
			} else {
				obj = new Sgpass(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SGPass");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SgpassClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Sgpass emptyInstance = new Sgpass(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// Key name for associating with a EarthView::World::Graphic::CPass instance.
	public static class Sgtechnique extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique", new SgtechniqueClassFactory());
		}

		public Sgtechnique(com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgmaterial parent, com.earthview.world.graphic.Technique srcTechnique, String dstTechniqueSchemeName) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			BasePointer srcTechniquePtr = new BasePointer(srcTechnique);
			list.add("srcTechnique", srcTechniquePtr.get());
			BasePointer dstTechniqueSchemeNamePtr = new BasePointer(dstTechniqueSchemeName);
			list.add("dstTechniqueSchemeName", dstTechniqueSchemeNamePtr.get());
			Create("SGTechnique", list);
		}

		native private long getParent_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgmaterial getParent()
		{
			long returnValue = getParent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgmaterial __returnValue = new com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgmaterial(CreatedWhenConstruct.CWC_NotToCreate, "SGMaterial");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgmaterial)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SGMaterial");
			}
			return __returnValue;
		}
		native private long getSourceTechnique_void(long pNativeObject);
		public com.earthview.world.graphic.Technique getSourceTechnique()
		{
			long returnValue = getSourceTechnique_void(this.nativeObject.pointer);
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
		native private long getDestinationTechnique_void(long pNativeObject);
		public com.earthview.world.graphic.Technique getDestinationTechnique()
		{
			long returnValue = getDestinationTechnique_void(this.nativeObject.pointer);
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
		native private long getDestinationTechniqueSchemeName_void(long pNativeObject);
		public StringPointer getDestinationTechniqueSchemeName()
		{
			long returnValue = getDestinationTechniqueSchemeName_void(this.nativeObject.pointer);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void buildTargetRenderState_void(long pNativeObject);
		public void buildTargetRenderState()
		{
			buildTargetRenderState_void(this.nativeObject.pointer);
		}
		native private void acquirePrograms_void(long pNativeObject);
		public void acquirePrograms()
		{
			acquirePrograms_void(this.nativeObject.pointer);
		}
		native private void releasePrograms_void(long pNativeObject);
		public void releasePrograms()
		{
			releasePrograms_void(this.nativeObject.pointer);
		}
		native private void setBuildDestinationTechnique_ev_bool(long pNativeObject, boolean buildTechnique);
		public void setBuildDestinationTechnique(boolean buildTechnique)
		{
			boolean buildTechniqueParamValue = buildTechnique;
			setBuildDestinationTechnique_ev_bool(this.nativeObject.pointer, buildTechniqueParamValue);
		}
		native private boolean getBuildDestinationTechnique_void(long pNativeObject);
		public boolean getBuildDestinationTechnique()
		{
			boolean returnValue = getBuildDestinationTechnique_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getRenderState_ev_uint16(long pNativeObject, int passIndex);
		public com.earthview.world.graphic.rtshadersystem.RenderState getRenderState(int passIndex)
		{
			int passIndexParamValue = passIndex;
			long returnValue = getRenderState_ev_uint16(this.nativeObject.pointer, passIndexParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.rtshadersystem.RenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate, "CRenderState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.RenderState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderState");
			}
			return __returnValue;
		}
		native private boolean hasRenderState_ev_uint16(long pNativeObject, int passIndex);
		public boolean hasRenderState(int passIndex)
		{
			int passIndexParamValue = passIndex;
			boolean returnValue = hasRenderState_ev_uint16(this.nativeObject.pointer, passIndexParamValue);
			return returnValue;
		}
		native private static String get_UserKey_void();
		public static String get_UserKey()
		{
			String jniValue = get_UserKey_void();
			
			return jniValue;
		}
		
		native private static void set_UserKey_EVString (String value);
		public static void set_UserKey(String UserKey)
		{
			String UserKeyParamValue = UserKey;
			
			set_UserKey_EVString(UserKeyParamValue);
		}
		
		public Sgtechnique(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Sgtechnique(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Sgtechnique fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Sgtechnique obj = null;
 			if(baseObj instanceof Sgtechnique)
			{
				obj = (Sgtechnique)baseObj;
			} else {
				obj = new Sgtechnique(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SGTechnique");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SgtechniqueClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Sgtechnique emptyInstance = new Sgtechnique(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// Key name for associating with a EarthView::World::Graphic::CTechnique instance.
	public static class Sgmaterial extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial", new SgmaterialClassFactory());
		}

		public Sgmaterial(String materialName, String groupName) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer materialNamePtr = new BasePointer(materialName);
			list.add("materialName", materialNamePtr.get());
			BasePointer groupNamePtr = new BasePointer(groupName);
			list.add("groupName", groupNamePtr.get());
			Create("SGMaterial", list);
		}

		native private long getMaterialName_void(long pNativeObject);
		public StringPointer getMaterialName()
		{
			long returnValue = getMaterialName_void(this.nativeObject.pointer);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long getGroupName_void(long pNativeObject);
		public StringPointer getGroupName()
		{
			long returnValue = getGroupName_void(this.nativeObject.pointer);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long getTechniqueList_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechniquelist getTechniqueList()
		{
			long returnValue = getTechniqueList_void(this.nativeObject.pointer);
			com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechniquelist __returnValue = new com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechniquelist(CreatedWhenConstruct.CWC_NotToCreate, "SGTechniqueList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechniquelist)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SGTechniqueList");
			}
			return __returnValue;
		}
		public Sgmaterial(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Sgmaterial(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Sgmaterial fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Sgmaterial obj = null;
 			if(baseObj instanceof Sgmaterial)
			{
				obj = (Sgmaterial)baseObj;
			} else {
				obj = new Sgmaterial(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SGMaterial");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SgmaterialClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Sgmaterial emptyInstance = new Sgmaterial(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class Sgscheme extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme", new SgschemeClassFactory());
		}

		public Sgscheme(String schemeName) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer schemeNamePtr = new BasePointer(schemeName);
			list.add("schemeName", schemeNamePtr.get());
			Create("SGScheme", list);
		}

		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void invalidate_void(long pNativeObject);
		public void invalidate()
		{
			invalidate_void(this.nativeObject.pointer);
		}
		native private void validate_void(long pNativeObject);
		public void validate()
		{
			validate_void(this.nativeObject.pointer);
		}
		native private void invalidate_EVString_EVString(long pNativeObject, String materialName, String groupName);
		public void invalidate(String materialName, String groupName)
		{
			String materialNameParamValue = materialName;
			String groupNameParamValue = groupName;
			invalidate_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue);
		}
		native private void invalidate_EVString(long pNativeObject, String materialName);
		public void invalidate(String materialName)
		{
			String materialNameParamValue = materialName;
			invalidate_EVString(this.nativeObject.pointer, materialNameParamValue);
		}
		native private boolean validate_EVString_EVString(long pNativeObject, String materialName, String groupName);
		public boolean validate(String materialName, String groupName)
		{
			String materialNameParamValue = materialName;
			String groupNameParamValue = groupName;
			boolean returnValue = validate_EVString_EVString(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue);
			return returnValue;
		}
		native private boolean validate_EVString(long pNativeObject, String materialName);
		public boolean validate(String materialName)
		{
			String materialNameParamValue = materialName;
			boolean returnValue = validate_EVString(this.nativeObject.pointer, materialNameParamValue);
			return returnValue;
		}
		native private void addTechniqueEntry_SGTechnique(long pNativeObject, long techEntry);
		public void addTechniqueEntry(com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique techEntry)
		{
			long techEntryParamValue = (techEntry == null ? 0L : techEntry.nativeObject.pointer);
			addTechniqueEntry_SGTechnique(this.nativeObject.pointer, techEntryParamValue);
		}
		native private void removeTechniqueEntry_SGTechnique(long pNativeObject, long techEntry);
		public void removeTechniqueEntry(com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgtechnique techEntry)
		{
			long techEntryParamValue = (techEntry == null ? 0L : techEntry.nativeObject.pointer);
			removeTechniqueEntry_SGTechnique(this.nativeObject.pointer, techEntryParamValue);
		}
		native private long getRenderState_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.RenderState getRenderState()
		{
			long returnValue = getRenderState_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.rtshadersystem.RenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate, "CRenderState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.RenderState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderState");
			}
			return __returnValue;
		}
		native private long getRenderState_EVString_EVString_ev_uint16(long pNativeObject, String materialName, String groupName, int passIndex);
		public com.earthview.world.graphic.rtshadersystem.RenderState getRenderState(String materialName, String groupName, int passIndex)
		{
			String materialNameParamValue = materialName;
			String groupNameParamValue = groupName;
			int passIndexParamValue = passIndex;
			long returnValue = getRenderState_EVString_EVString_ev_uint16(this.nativeObject.pointer, materialNameParamValue, groupNameParamValue, passIndexParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.rtshadersystem.RenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate, "CRenderState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.RenderState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRenderState");
			}
			return __returnValue;
		}
		public Sgscheme(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Sgscheme(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Sgscheme fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Sgscheme obj = null;
 			if(baseObj instanceof Sgscheme)
			{
				obj = (Sgscheme)baseObj;
			} else {
				obj = new Sgscheme(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SGScheme");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SgschemeClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Sgscheme emptyInstance = new Sgscheme(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class Sgrenderobjectlistener extends com.earthview.world.graphic.RenderObjectListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener", new SgrenderobjectlistenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::JSGRenderObjectListenerProxy", new SgrenderobjectlistenerClassFactory());
		}

		public Sgrenderobjectlistener(com.earthview.world.graphic.rtshadersystem.ShaderGenerator owner) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ownerPtr = new BasePointer(owner);
			list.add("owner", ownerPtr.get());
			Create("JSGRenderObjectListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.rtshadersystem.ShaderGenerator$Sgrenderobjectlistener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(long rend, long pass, long source, long pLightList, boolean suppressRenderStateChanges)
		{
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
			com.earthview.world.graphic.Pass passParamValue = (pass == 0L ? null : new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate));
			if(passParamValue != null)
			{
			passParamValue.setDelegate(true);
			passParamValue.setInstancePointer(new InstancePointer(pass));
			IClassFactory passParamValueClassFactory = GlobalClassFactoryMap.get(passParamValue.getCppInstanceTypeName());
			if (passParamValueClassFactory != null)
			{
				passParamValue.setDelegate(true);
				passParamValue = (com.earthview.world.graphic.Pass)passParamValueClassFactory.create();
				passParamValue.setDelegate(true);
				passParamValue.setInstancePointer(new InstancePointer(pass));
			}
			}
			com.earthview.world.graphic.AutoParamDataSource sourceParamValue = (source == 0L ? null : new com.earthview.world.graphic.AutoParamDataSource(CreatedWhenConstruct.CWC_NotToCreate));
			if(sourceParamValue != null)
			{
			sourceParamValue.setDelegate(true);
			sourceParamValue.setInstancePointer(new InstancePointer(source));
			IClassFactory sourceParamValueClassFactory = GlobalClassFactoryMap.get(sourceParamValue.getCppInstanceTypeName());
			if (sourceParamValueClassFactory != null)
			{
				sourceParamValue.setDelegate(true);
				sourceParamValue = (com.earthview.world.graphic.AutoParamDataSource)sourceParamValueClassFactory.create();
				sourceParamValue.setDelegate(true);
				sourceParamValue.setInstancePointer(new InstancePointer(source));
			}
			}
			com.earthview.world.graphic.LightList pLightListParamValue = (pLightList == 0L ? null : new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate));
			if(pLightListParamValue != null)
			{
			pLightListParamValue.setDelegate(true);
			pLightListParamValue.setInstancePointer(new InstancePointer(pLightList));
			IClassFactory pLightListParamValueClassFactory = GlobalClassFactoryMap.get(pLightListParamValue.getCppInstanceTypeName());
			if (pLightListParamValueClassFactory != null)
			{
				pLightListParamValue.setDelegate(true);
				pLightListParamValue = (com.earthview.world.graphic.LightList)pLightListParamValueClassFactory.create();
				pLightListParamValue.setDelegate(true);
				pLightListParamValue.setInstancePointer(new InstancePointer(pLightList));
			}
			}
			boolean suppressRenderStateChangesParamValue = suppressRenderStateChanges;
			notifyRenderSingleObject(rendParamValue, passParamValue, sourceParamValue, pLightListParamValue, suppressRenderStateChangesParamValue);
		}

		native private void notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(long pNativeObject, long rend, long pass, long source, long pLightList, boolean suppressRenderStateChanges);
		public void notifyRenderSingleObject(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList, boolean suppressRenderStateChanges)
		{
			long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
			long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
			long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
			long pLightListParamValue = (pLightList == null ? 0L : pLightList.nativeObject.pointer);
			boolean suppressRenderStateChangesParamValue = suppressRenderStateChanges;
			notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.nativeObject.pointer, rendParamValue, passParamValue, sourceParamValue, pLightListParamValue, suppressRenderStateChangesParamValue);
		}
		native private void notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(long pNativeObject, long rend, long pass, long source, long pLightList, boolean suppressRenderStateChanges);
		protected void notifyRenderSingleObject_NoVirtual(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList, boolean suppressRenderStateChanges)
		{
			long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
			long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
			long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
			long pLightListParamValue = (pLightList == null ? 0L : pLightList.nativeObject.pointer);
			boolean suppressRenderStateChangesParamValue = suppressRenderStateChanges;
			notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(this.nativeObject.pointer, rendParamValue, passParamValue, sourceParamValue, pLightListParamValue, suppressRenderStateChangesParamValue);
		}

		public Sgrenderobjectlistener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Sgrenderobjectlistener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 开始渲染单个对象时调用该事件
		 * @param rend 渲染接口
		 * @param pass 渲染通路
		 * @param source 动态参数源
		 * @param pLightList 光照列表
		 * @param suppressRenderStateChanges 抑制渲染状态改变的参数
		 */
		public void notifyRenderSingleObjectStarted(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList, boolean suppressRenderStateChanges)
		{
			super.notifyRenderSingleObjectStarted_NoVirtual(rend, pass, source, pLightList, suppressRenderStateChanges);
		}
		public void notifyRenderSingleObjectEnd(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList, boolean suppressRenderStateChanges)
		{
			super.notifyRenderSingleObjectEnd_NoVirtual(rend, pass, source, pLightList, suppressRenderStateChanges);
		}
		
		native protected void register_notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(long pNativeObject, String method);
		native protected void register_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(long pNativeObject, String method);
		native protected void register_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.nativeObject.pointer, "notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
				this.register_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.nativeObject.pointer, "notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
				this.register_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.nativeObject.pointer, "notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
			}
		}
		
		public static Sgrenderobjectlistener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Sgrenderobjectlistener obj = null;
 			if(baseObj instanceof Sgrenderobjectlistener)
			{
				obj = (Sgrenderobjectlistener)baseObj;
			} else {
				obj = new Sgrenderobjectlistener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SGRenderObjectListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SgrenderobjectlistenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Sgrenderobjectlistener emptyInstance = new Sgrenderobjectlistener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class Sgscenemanagerlistener extends com.earthview.world.graphic.SceneManager.SceneManagerListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener", new SgscenemanagerlistenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::JSGSceneManagerListenerProxy", new SgscenemanagerlistenerClassFactory());
		}

		public Sgscenemanagerlistener(com.earthview.world.graphic.rtshadersystem.ShaderGenerator owner) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ownerPtr = new BasePointer(owner);
			list.add("owner", ownerPtr.get());
			Create("JSGSceneManagerListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.rtshadersystem.ShaderGenerator$Sgscenemanagerlistener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private void preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(long pNativeObject, long source, int irs, long v);
		public void preFindVisibleObjects(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.SceneManager.IlluminationRenderStage irs, com.earthview.world.graphic.Viewport v)
		{
			long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
			int irsParamValue = irs.getValue();
			long vParamValue = (v == null ? 0L : v.nativeObject.pointer);
			preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(this.nativeObject.pointer, sourceParamValue, irsParamValue, vParamValue);
		}
		native private void preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_NoVirtual(long pNativeObject, long source, int irs, long v);
		protected void preFindVisibleObjects_NoVirtual(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.SceneManager.IlluminationRenderStage irs, com.earthview.world.graphic.Viewport v)
		{
			long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
			int irsParamValue = irs.getValue();
			long vParamValue = (v == null ? 0L : v.nativeObject.pointer);
			preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_NoVirtual(this.nativeObject.pointer, sourceParamValue, irsParamValue, vParamValue);
		}

		native private void postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(long pNativeObject, long source, int irs, long v);
		public void postFindVisibleObjects(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.SceneManager.IlluminationRenderStage irs, com.earthview.world.graphic.Viewport v)
		{
			long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
			int irsParamValue = irs.getValue();
			long vParamValue = (v == null ? 0L : v.nativeObject.pointer);
			postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(this.nativeObject.pointer, sourceParamValue, irsParamValue, vParamValue);
		}
		native private void postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_NoVirtual(long pNativeObject, long source, int irs, long v);
		protected void postFindVisibleObjects_NoVirtual(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.SceneManager.IlluminationRenderStage irs, com.earthview.world.graphic.Viewport v)
		{
			long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
			int irsParamValue = irs.getValue();
			long vParamValue = (v == null ? 0L : v.nativeObject.pointer);
			postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_NoVirtual(this.nativeObject.pointer, sourceParamValue, irsParamValue, vParamValue);
		}

		native private void shadowTexturesUpdated_ev_size_t(long pNativeObject, long numberOfShadowTextures);
		public void shadowTexturesUpdated(long numberOfShadowTextures)
		{
			long numberOfShadowTexturesParamValue = numberOfShadowTextures;
			shadowTexturesUpdated_ev_size_t(this.nativeObject.pointer, numberOfShadowTexturesParamValue);
		}
		native private void shadowTexturesUpdated_ev_size_t_NoVirtual(long pNativeObject, long numberOfShadowTextures);
		protected void shadowTexturesUpdated_NoVirtual(long numberOfShadowTextures)
		{
			long numberOfShadowTexturesParamValue = numberOfShadowTextures;
			shadowTexturesUpdated_ev_size_t_NoVirtual(this.nativeObject.pointer, numberOfShadowTexturesParamValue);
		}

		native private void shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t(long pNativeObject, long light, long camera, long iteration);
		public void shadowTextureCasterPreViewProj(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera camera, long iteration)
		{
			long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
			long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
			long iterationParamValue = iteration;
			shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t(this.nativeObject.pointer, lightParamValue, cameraParamValue, iterationParamValue);
		}
		native private void shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_NoVirtual(long pNativeObject, long light, long camera, long iteration);
		protected void shadowTextureCasterPreViewProj_NoVirtual(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera camera, long iteration)
		{
			long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
			long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
			long iterationParamValue = iteration;
			shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_NoVirtual(this.nativeObject.pointer, lightParamValue, cameraParamValue, iterationParamValue);
		}

		native private void shadowTextureReceiverPreViewProj_CLight_CFrustum(long pNativeObject, long light, long frustum);
		public void shadowTextureReceiverPreViewProj(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Frustum frustum)
		{
			long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
			long frustumParamValue = (frustum == null ? 0L : frustum.nativeObject.pointer);
			shadowTextureReceiverPreViewProj_CLight_CFrustum(this.nativeObject.pointer, lightParamValue, frustumParamValue);
		}
		native private void shadowTextureReceiverPreViewProj_CLight_CFrustum_NoVirtual(long pNativeObject, long light, long frustum);
		protected void shadowTextureReceiverPreViewProj_NoVirtual(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Frustum frustum)
		{
			long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
			long frustumParamValue = (frustum == null ? 0L : frustum.nativeObject.pointer);
			shadowTextureReceiverPreViewProj_CLight_CFrustum_NoVirtual(this.nativeObject.pointer, lightParamValue, frustumParamValue);
		}

		public Sgscenemanagerlistener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Sgscenemanagerlistener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 在每帧更新场景图前触发			
		 */
		public void preUpdateSceneGraph(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.Camera camera)
		{
			super.preUpdateSceneGraph_NoVirtual(source, camera);
		}
		/**
		 * 在每帧更新场景图后触发			
		 */
		public void postUpdateSceneGraph(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.Camera camera)
		{
			super.postUpdateSceneGraph_NoVirtual(source, camera);
		}
		/**
		 * 对影响视椎体的光源进行排序
		 * @param lightList 光源列表
		 * @return 为true，已排序
		 */
		public boolean sortLightsAffectingFrustum(com.earthview.world.graphic.LightList lightList)
		{
			return super.sortLightsAffectingFrustum_NoVirtual(lightList);
		}
		/**
		 * 场景管理器销毁时触发
		 * @param source 场景管理器
		 */
		public void sceneManagerDestroyed(com.earthview.world.graphic.SceneManager source)
		{
			super.sceneManagerDestroyed_NoVirtual(source);
		}
		
		native protected void register_preUpdateSceneGraph_CSceneManager_CCamera(long pNativeObject, String method);
		native protected void register_postUpdateSceneGraph_CSceneManager_CCamera(long pNativeObject, String method);
		native protected void register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(long pNativeObject, String method);
		native protected void register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(long pNativeObject, String method);
		native protected void register_shadowTexturesUpdated_ev_size_t(long pNativeObject, String method);
		native protected void register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t(long pNativeObject, String method);
		native protected void register_shadowTextureReceiverPreViewProj_CLight_CFrustum(long pNativeObject, String method);
		native protected void register_sortLightsAffectingFrustum_LightList(long pNativeObject, String method);
		native protected void register_sceneManagerDestroyed_CSceneManager(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_preUpdateSceneGraph_CSceneManager_CCamera(this.nativeObject.pointer, "preUpdateSceneGraph_CSceneManager_CCamera_callback");
				this.register_postUpdateSceneGraph_CSceneManager_CCamera(this.nativeObject.pointer, "postUpdateSceneGraph_CSceneManager_CCamera_callback");
				this.register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(this.nativeObject.pointer, "preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
				this.register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(this.nativeObject.pointer, "postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
				this.register_shadowTexturesUpdated_ev_size_t(this.nativeObject.pointer, "shadowTexturesUpdated_ev_size_t_callback");
				this.register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t(this.nativeObject.pointer, "shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback");
				this.register_shadowTextureReceiverPreViewProj_CLight_CFrustum(this.nativeObject.pointer, "shadowTextureReceiverPreViewProj_CLight_CFrustum_callback");
				this.register_sortLightsAffectingFrustum_LightList(this.nativeObject.pointer, "sortLightsAffectingFrustum_LightList_callback");
				this.register_sceneManagerDestroyed_CSceneManager(this.nativeObject.pointer, "sceneManagerDestroyed_CSceneManager_callback");
			}
		}
		
		public static Sgscenemanagerlistener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Sgscenemanagerlistener obj = null;
 			if(baseObj instanceof Sgscenemanagerlistener)
			{
				obj = (Sgscenemanagerlistener)baseObj;
			} else {
				obj = new Sgscenemanagerlistener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SGSceneManagerListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SgscenemanagerlistenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Sgscenemanagerlistener emptyInstance = new Sgscenemanagerlistener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class Sgscripttranslatormanager extends com.earthview.world.graphic.ScriptTranslatorManager {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager", new SgscripttranslatormanagerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::JSGScriptTranslatorManagerProxy", new SgscripttranslatormanagerClassFactory());
		}

		public Sgscripttranslatormanager(com.earthview.world.graphic.rtshadersystem.ShaderGenerator owner) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ownerPtr = new BasePointer(owner);
			list.add("owner", ownerPtr.get());
			Create("JSGScriptTranslatorManagerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.rtshadersystem.ShaderGenerator$Sgscripttranslatormanager".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getNumTranslators_void(long pNativeObject);
		//// Returns the number of translators being managed
		public long getNumTranslators()
		{
			long returnValue = getNumTranslators_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getNumTranslators_void_NoVirtual(long pNativeObject);
		protected long getNumTranslators_NoVirtual()
		{
			long returnValue = getNumTranslators_void_NoVirtual(this.nativeObject.pointer);
			return returnValue;
		}

		native private long getTranslator_AbstractNodePtr(long pNativeObject, long node);
		//// Returns a manager for the given object abstract node, or null if it is not supported
		public com.earthview.world.graphic.ScriptTranslator getTranslator(com.earthview.world.graphic.AbstractNodePtr node)
		{
			long nodeParamValue = node.nativeObject.pointer;
			long returnValue = getTranslator_AbstractNodePtr(this.nativeObject.pointer, nodeParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ScriptTranslator __returnValue = new com.earthview.world.graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate, "CScriptTranslator");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ScriptTranslator)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CScriptTranslator");
			}
			return __returnValue;
		}
		native private long getTranslator_AbstractNodePtr_NoVirtual(long pNativeObject, long node);
		protected com.earthview.world.graphic.ScriptTranslator getTranslator_NoVirtual(com.earthview.world.graphic.AbstractNodePtr node)
		{
			long nodeParamValue = node.nativeObject.pointer;
			long returnValue = getTranslator_AbstractNodePtr_NoVirtual(this.nativeObject.pointer, nodeParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.ScriptTranslator __returnValue = new com.earthview.world.graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate, "CScriptTranslator");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ScriptTranslator)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CScriptTranslator");
			}
			return __returnValue;
		}

		public Sgscripttranslatormanager(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Sgscripttranslatormanager(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_getNumTranslators_void(long pNativeObject, String method);
		native protected void register_getTranslator_AbstractNodePtr(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_getNumTranslators_void(this.nativeObject.pointer, "getNumTranslators_void_callback");
				this.register_getTranslator_AbstractNodePtr(this.nativeObject.pointer, "getTranslator_AbstractNodePtr_callback");
			}
		}
		
		public static Sgscripttranslatormanager fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Sgscripttranslatormanager obj = null;
 			if(baseObj instanceof Sgscripttranslatormanager)
			{
				obj = (Sgscripttranslatormanager)baseObj;
			} else {
				obj = new Sgscripttranslatormanager(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SGScriptTranslatorManager");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SgscripttranslatormanagerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Sgscripttranslatormanager emptyInstance = new Sgscripttranslatormanager(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public ShaderGenerator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShaderGenerator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ShaderGenerator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShaderGenerator obj = null;
 		if(baseObj instanceof ShaderGenerator)
		{
			obj = (ShaderGenerator)baseObj;
		} else {
			obj = new ShaderGenerator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CShaderGenerator");
			obj.increaseCast();
		}

		return obj;
	}
}
