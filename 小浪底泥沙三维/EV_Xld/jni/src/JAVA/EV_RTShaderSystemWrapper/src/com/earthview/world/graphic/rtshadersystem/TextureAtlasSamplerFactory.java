package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TextureAtlasSamplerFactory extends com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory", new TextureAtlasSamplerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCTextureAtlasSamplerFactoryProxy", new TextureAtlasSamplerFactoryClassFactory());
	}

	public enum IndexPositionMode implements INativeEnum<IndexPositionMode> {
		ipmRelative(IndexPositionModeHelper.ENUM_VALUES[0]),
		ipmAbsolute(IndexPositionModeHelper.ENUM_VALUES[1]);
		private int value;
		IndexPositionMode(int i) {
			this.value = i;
		}
		public IndexPositionMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final IndexPositionMode toEnum(int retval) {
			if(retval == ipmRelative.value){
				return ipmRelative;
			}
			else if(retval == ipmAbsolute.value){
				return ipmAbsolute;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class IndexPositionModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public static class TextureAtlasAttib extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib", new TextureAtlasAttibClassFactory());
		}

		public TextureAtlasAttib() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TextureAtlasAttib", null);
		}

		public TextureAtlasAttib(com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.IndexPositionMode _posMode) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer _posModePtr = new BasePointer(_posMode);
			list.add("_posMode", _posModePtr.get());
			Create("TextureAtlasAttib", list);
		}

		public TextureAtlasAttib(com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.IndexPositionMode _posMode, int _posOffset) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer _posModePtr = new BasePointer(_posMode);
			list.add("_posMode", _posModePtr.get());
			BasePointer _posOffsetPtr = new BasePointer(_posOffset);
			list.add("_posOffset", _posOffsetPtr.get());
			Create("TextureAtlasAttib", list);
		}

		public TextureAtlasAttib(com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.IndexPositionMode _posMode, int _posOffset, boolean _autoBorderAdjust) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer _posModePtr = new BasePointer(_posMode);
			list.add("_posMode", _posModePtr.get());
			BasePointer _posOffsetPtr = new BasePointer(_posOffset);
			list.add("_posOffset", _posOffsetPtr.get());
			BasePointer _autoBorderAdjustPtr = new BasePointer(_autoBorderAdjust);
			list.add("_autoBorderAdjust", _autoBorderAdjustPtr.get());
			Create("TextureAtlasAttib", list);
		}

		native private int get_positionMode_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.IndexPositionMode get_positionMode()
		{
			int jniValue = get_positionMode_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.IndexPositionMode.toEnum(jniValue);
		}
		
		native private void set_positionMode_IndexPositionMode (long pNativeObject, int value);
		public void set_positionMode(com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.IndexPositionMode positionMode)
		{
			int positionModeParamValue = positionMode.getValue();
			
			set_positionMode_IndexPositionMode(this.nativeObject.pointer, positionModeParamValue);
		}
		
		native private int get_positionOffset_void(long pNativeObject);
		public int get_positionOffset()
		{
			int jniValue = get_positionOffset_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_positionOffset_ev_uint16 (long pNativeObject, int value);
		public void set_positionOffset(int positionOffset)
		{
			int positionOffsetParamValue = positionOffset;
			
			set_positionOffset_ev_uint16(this.nativeObject.pointer, positionOffsetParamValue);
		}
		
		native private boolean get_autoBorderAdjust_void(long pNativeObject);
		public boolean get_autoBorderAdjust()
		{
			boolean jniValue = get_autoBorderAdjust_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_autoBorderAdjust_bool (long pNativeObject, boolean value);
		public void set_autoBorderAdjust(boolean autoBorderAdjust)
		{
			boolean autoBorderAdjustParamValue = autoBorderAdjust;
			
			set_autoBorderAdjust_bool(this.nativeObject.pointer, autoBorderAdjustParamValue);
		}
		
		public TextureAtlasAttib(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextureAtlasAttib(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TextureAtlasAttib fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextureAtlasAttib obj = null;
 			if(baseObj instanceof TextureAtlasAttib)
			{
				obj = (TextureAtlasAttib)baseObj;
			} else {
				obj = new TextureAtlasAttib(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TextureAtlasAttib");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextureAtlasAttibClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextureAtlasAttib emptyInstance = new TextureAtlasAttib(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public TextureAtlasSamplerFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTextureAtlasSamplerFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long getSingletonPtr_void();
	///CSingleton implementation
	public static com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory __returnValue = new com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory(CreatedWhenConstruct.CWC_NotToCreate, "CTextureAtlasSamplerFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureAtlasSamplerFactory");
		}
		return __returnValue;
	}
	native private static long getSingleton_void();
	public static com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory __returnValue = new com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory(CreatedWhenConstruct.CWC_NotToCreate, "CTextureAtlasSamplerFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureAtlasSamplerFactory");
		}
		return __returnValue;
	}
	native private String getType_void(long pNativeObject);
	public String getType()
	{
		String returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getType_void_NoVirtual(long pNativeObject);
	protected String getType_NoVirtual()
	{
		String returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(long pNativeObject, long compiler, long prop, long pass, long translator);
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.PropertyAbstractNode prop, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long propParamValue = (prop == null ? 0L : prop.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long translatorParamValue = (translator == null ? 0L : translator.nativeObject.pointer);
		long returnValue = createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.nativeObject.pointer, compilerParamValue, propParamValue, passParamValue, translatorParamValue);
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
	native private long createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(long pNativeObject, long compiler, long prop, long pass, long translator);
	protected com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance_NoVirtual(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.PropertyAbstractNode prop, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long propParamValue = (prop == null ? 0L : prop.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long translatorParamValue = (translator == null ? 0L : translator.nativeObject.pointer);
		long returnValue = createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(this.nativeObject.pointer, compilerParamValue, propParamValue, passParamValue, translatorParamValue);
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

	native private void writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass(long pNativeObject, long ser, long subRenderState, long srcPass, long dstPass);
	public void writeInstance(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass)
	{
		long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		long srcPassParamValue = (srcPass == null ? 0L : srcPass.nativeObject.pointer);
		long dstPassParamValue = (dstPass == null ? 0L : dstPass.nativeObject.pointer);
		writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass(this.nativeObject.pointer, serParamValue, subRenderStateParamValue, srcPassParamValue, dstPassParamValue);
	}
	native private void writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(long pNativeObject, long ser, long subRenderState, long srcPass, long dstPass);
	protected void writeInstance_NoVirtual(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass)
	{
		long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		long srcPassParamValue = (srcPass == null ? 0L : srcPass.nativeObject.pointer);
		long dstPassParamValue = (dstPass == null ? 0L : dstPass.nativeObject.pointer);
		writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(this.nativeObject.pointer, serParamValue, subRenderStateParamValue, srcPassParamValue, dstPassParamValue);
	}

	native private boolean addTexutreAtlasDefinition_EVString_TextureAtlasTablePtr(long pNativeObject, String filename, long textureAtlasTable);
	public boolean addTexutreAtlasDefinition(String filename, com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr textureAtlasTable)
	{
		String filenameParamValue = filename;
		long textureAtlasTableParamValue = textureAtlasTable.nativeObject.pointer;
		boolean returnValue = addTexutreAtlasDefinition_EVString_TextureAtlasTablePtr(this.nativeObject.pointer, filenameParamValue, textureAtlasTableParamValue);
		return returnValue;
	}
	native private boolean addTexutreAtlasDefinition_EVString(long pNativeObject, String filename);
	public boolean addTexutreAtlasDefinition(String filename)
	{
		String filenameParamValue = filename;
		boolean returnValue = addTexutreAtlasDefinition_EVString(this.nativeObject.pointer, filenameParamValue);
		return returnValue;
	}
	native private boolean addTexutreAtlasDefinition_DataStreamPtr_TextureAtlasTablePtr(long pNativeObject, long stream, long textureAtlasTable);
	///bool addTexutreAtlasDefinition( EarthView::World::Core::DataStreamPtr stream, EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr textureAtlasTable = EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr());
	public boolean addTexutreAtlasDefinition(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr textureAtlasTable)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long textureAtlasTableParamValue = textureAtlasTable.nativeObject.pointer;
		boolean returnValue = addTexutreAtlasDefinition_DataStreamPtr_TextureAtlasTablePtr(this.nativeObject.pointer, streamParamValue, textureAtlasTableParamValue);
		return returnValue;
	}
	native private boolean addTexutreAtlasDefinition_DataStreamPtr(long pNativeObject, long stream);
	public boolean addTexutreAtlasDefinition(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = addTexutreAtlasDefinition_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}
	native private void setTextureAtlasTable_EVString_TextureAtlasTablePtr_bool(long pNativeObject, String textureName, long atlasData, boolean autoBorderAdjust);
	public void setTextureAtlasTable(String textureName, com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr atlasData, boolean autoBorderAdjust)
	{
		String textureNameParamValue = textureName;
		long atlasDataParamValue = atlasData.nativeObject.pointer;
		boolean autoBorderAdjustParamValue = autoBorderAdjust;
		setTextureAtlasTable_EVString_TextureAtlasTablePtr_bool(this.nativeObject.pointer, textureNameParamValue, atlasDataParamValue, autoBorderAdjustParamValue);
	}
	native private void setTextureAtlasTable_EVString_TextureAtlasTablePtr(long pNativeObject, String textureName, long atlasData);
	public void setTextureAtlasTable(String textureName, com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr atlasData)
	{
		String textureNameParamValue = textureName;
		long atlasDataParamValue = atlasData.nativeObject.pointer;
		setTextureAtlasTable_EVString_TextureAtlasTablePtr(this.nativeObject.pointer, textureNameParamValue, atlasDataParamValue);
	}
	native private void removeTextureAtlasTable_EVString(long pNativeObject, String textureName);
	public void removeTextureAtlasTable(String textureName)
	{
		String textureNameParamValue = textureName;
		removeTextureAtlasTable_EVString(this.nativeObject.pointer, textureNameParamValue);
	}
	native private void removeAllTextureAtlasTables_void(long pNativeObject);
	public void removeAllTextureAtlasTables()
	{
		removeAllTextureAtlasTables_void(this.nativeObject.pointer);
	}
	native private long getTextureAtlasTable_EVString(long pNativeObject, String textureName);
	public com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr getTextureAtlasTable(String textureName)
	{
		String textureNameParamValue = textureName;
		long returnValue = getTextureAtlasTable_EVString(this.nativeObject.pointer, textureNameParamValue);
		com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr __returnValue = new com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr(CreatedWhenConstruct.CWC_NotToCreate, "TextureAtlasTablePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.TextureAtlasTablePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "TextureAtlasTablePtr");
		}
		return __returnValue;
	}
	native private void setDefaultAtlasingAttributes_IndexPositionMode_ev_uint16_bool(long pNativeObject, int mode, int offset, boolean autoAdjustBorders);
	public void setDefaultAtlasingAttributes(com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.IndexPositionMode mode, int offset, boolean autoAdjustBorders)
	{
		int modeParamValue = mode.getValue();
		int offsetParamValue = offset;
		boolean autoAdjustBordersParamValue = autoAdjustBorders;
		setDefaultAtlasingAttributes_IndexPositionMode_ev_uint16_bool(this.nativeObject.pointer, modeParamValue, offsetParamValue, autoAdjustBordersParamValue);
	}
	native private long getDefaultAtlasingAttributes_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.TextureAtlasAttib getDefaultAtlasingAttributes()
	{
		long returnValue = getDefaultAtlasingAttributes_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.TextureAtlasAttib __returnValue = new com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.TextureAtlasAttib(CreatedWhenConstruct.CWC_NotToCreate, "TextureAtlasAttib");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.TextureAtlasAttib)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "TextureAtlasAttib");
		}
		return __returnValue;
	}
	native private void setMaterialAtlasingAttributes_CMaterial_IndexPositionMode_ev_uint16_bool(long pNativeObject, long material, int mode, int offset, boolean autoAdjustBorders);
	public void setMaterialAtlasingAttributes(com.earthview.world.graphic.Material material, com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.IndexPositionMode mode, int offset, boolean autoAdjustBorders)
	{
		long materialParamValue = (material == null ? 0L : material.nativeObject.pointer);
		int modeParamValue = mode.getValue();
		int offsetParamValue = offset;
		boolean autoAdjustBordersParamValue = autoAdjustBorders;
		setMaterialAtlasingAttributes_CMaterial_IndexPositionMode_ev_uint16_bool(this.nativeObject.pointer, materialParamValue, modeParamValue, offsetParamValue, autoAdjustBordersParamValue);
	}
	native private boolean hasMaterialAtlasingAttributes_CMaterial_TextureAtlasAttib(long pNativeObject, long material, long attrib);
	///bool hasMaterialAtlasingAttributes(EarthView::World::Graphic::CMaterial* material, EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib* attrib = NULL) const;
	public boolean hasMaterialAtlasingAttributes(com.earthview.world.graphic.Material material, com.earthview.world.graphic.rtshadersystem.TextureAtlasSamplerFactory.TextureAtlasAttib attrib)
	{
		long materialParamValue = (material == null ? 0L : material.nativeObject.pointer);
		long attribParamValue = (attrib == null ? 0L : attrib.nativeObject.pointer);
		boolean returnValue = hasMaterialAtlasingAttributes_CMaterial_TextureAtlasAttib(this.nativeObject.pointer, materialParamValue, attribParamValue);
		return returnValue;
	}
	native private boolean hasMaterialAtlasingAttributes_CMaterial(long pNativeObject, long material);
	public boolean hasMaterialAtlasingAttributes(com.earthview.world.graphic.Material material)
	{
		long materialParamValue = (material == null ? 0L : material.nativeObject.pointer);
		boolean returnValue = hasMaterialAtlasingAttributes_CMaterial(this.nativeObject.pointer, materialParamValue);
		return returnValue;
	}
	native private long createInstanceImpl_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createInstanceImpl()
	{
		long returnValue = createInstanceImpl_void(this.nativeObject.pointer);
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
	native private long createInstanceImpl_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.rtshadersystem.SubRenderState createInstanceImpl_NoVirtual()
	{
		long returnValue = createInstanceImpl_void_NoVirtual(this.nativeObject.pointer);
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

	public TextureAtlasSamplerFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextureAtlasSamplerFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance()
	{
		return super.createInstance_NoVirtual();
	}
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.PropertyAbstractNode prop, com.earthview.world.graphic.TextureUnitState texState, com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		return super.createInstance_NoVirtual(compiler, prop, texState, translator);
	}
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createOrRetrieveInstance(com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		return super.createOrRetrieveInstance_NoVirtual(translator);
	}
	public void destroyInstance(com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState)
	{
		super.destroyInstance_NoVirtual(subRenderState);
	}
	public void destroyAllInstances()
	{
		super.destroyAllInstances_NoVirtual();
	}
	public void writeInstance(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState, com.earthview.world.graphic.TextureUnitState srcTextureUnit, com.earthview.world.graphic.TextureUnitState dstTextureUnit)
	{
		super.writeInstance_NoVirtual(ser, subRenderState, srcTextureUnit, dstTextureUnit);
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_createInstance_void(long pNativeObject, String method);
	native protected void register_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(long pNativeObject, String method);
	native protected void register_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(long pNativeObject, String method);
	native protected void register_createOrRetrieveInstance_CSGScriptTranslator(long pNativeObject, String method);
	native protected void register_destroyInstance_CSubRenderState(long pNativeObject, String method);
	native protected void register_destroyAllInstances_void(long pNativeObject, String method);
	native protected void register_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass(long pNativeObject, String method);
	native protected void register_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(long pNativeObject, String method);
	native protected void register_createInstanceImpl_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_createInstance_void(this.nativeObject.pointer, "createInstance_void_callback");
			this.register_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.nativeObject.pointer, "createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback");
			this.register_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(this.nativeObject.pointer, "createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback");
			this.register_createOrRetrieveInstance_CSGScriptTranslator(this.nativeObject.pointer, "createOrRetrieveInstance_CSGScriptTranslator_callback");
			this.register_destroyInstance_CSubRenderState(this.nativeObject.pointer, "destroyInstance_CSubRenderState_callback");
			this.register_destroyAllInstances_void(this.nativeObject.pointer, "destroyAllInstances_void_callback");
			this.register_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass(this.nativeObject.pointer, "writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback");
			this.register_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(this.nativeObject.pointer, "writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback");
			this.register_createInstanceImpl_void(this.nativeObject.pointer, "createInstanceImpl_void_callback");
		}
	}
	
	public static TextureAtlasSamplerFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextureAtlasSamplerFactory obj = null;
 		if(baseObj instanceof TextureAtlasSamplerFactory)
		{
			obj = (TextureAtlasSamplerFactory)baseObj;
		} else {
			obj = new TextureAtlasSamplerFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextureAtlasSamplerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
