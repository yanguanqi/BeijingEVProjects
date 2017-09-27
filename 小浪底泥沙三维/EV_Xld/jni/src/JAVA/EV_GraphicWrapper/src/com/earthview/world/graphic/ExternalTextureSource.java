package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////! Video starts playing as soon as possible
public class ExternalTextureSource extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CExternalTextureSource", new ExternalTextureSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCExternalTextureSourceProxy", new ExternalTextureSourceClassFactory());
	}

	public ExternalTextureSource() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCExternalTextureSourceProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ExternalTextureSource".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setInputName_EVString(long pNativeObject, String sIN);
	////--------------------------------------------------------////
	////Base Functions that work with Command EVString Interface... Or can be called
	////manually to create video through code
	////! Sets an input file name - if needed by plugin
	public void setInputName(String sIN)
	{
		String sINParamValue = sIN;
		setInputName_EVString(this.nativeObject.pointer, sINParamValue);
	}
	native private long getInputName_void(long pNativeObject);
	////! Gets currently set input file name
	public StringPointer getInputName()
	{
		long returnValue = getInputName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setFPS_ev_int32(long pNativeObject, int iFPS);
	////! Sets the frames per second - plugin may or may not use this
	public void setFPS(int iFPS)
	{
		int iFPSParamValue = iFPS;
		setFPS_ev_int32(this.nativeObject.pointer, iFPSParamValue);
	}
	native private int getFPS_void(long pNativeObject);
	////! Gets currently set frames per second
	public int getFPS()
	{
		int returnValue = getFPS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPlayMode_eTexturePlayMode(long pNativeObject, int eMode);
	////! Sets a play mode
	public void setPlayMode(com.earthview.world.graphic.eTexturePlayMode eMode)
	{
		int eModeParamValue = eMode.getValue();
		setPlayMode_eTexturePlayMode(this.nativeObject.pointer, eModeParamValue);
	}
	native private int getPlayMode_void(long pNativeObject);
	////! Gets currently set play mode
	public com.earthview.world.graphic.eTexturePlayMode getPlayMode()
	{
		int returnValue = getPlayMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.eTexturePlayMode.toEnum(returnValue);
	}
	native private void setTextureTecPassStateLevel_ev_int32_ev_int32_ev_int32(long pNativeObject, int t, int p, int s);
	////! Used for attaching texture to CTechnique, State, and texture unit layer
	public void setTextureTecPassStateLevel(int t, int p, int s)
	{
		int tParamValue = t;
		int pParamValue = p;
		int sParamValue = s;
		setTextureTecPassStateLevel_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, tParamValue, pParamValue, sParamValue);
	}
	native private void getTextureTecPassStateLevel_ev_int32_ev_int32_ev_int32(long pNativeObject, long t, long p, long s);
	////! Get currently selected Textute attribs.
	public void getTextureTecPassStateLevel(IntegerPointer t, IntegerPointer p, IntegerPointer s)
	{
		long tParamValue = t.nativeObject.pointer;
		long pParamValue = p.nativeObject.pointer;
		long sParamValue = s.nativeObject.pointer;
		getTextureTecPassStateLevel_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, tParamValue, pParamValue, sParamValue);
	}
	native private void addBaseParams_void(long pNativeObject);
	public void addBaseParams()
	{
		addBaseParams_void(this.nativeObject.pointer);
	}
	native private long getPluginStringName_void(long pNativeObject);
	public StringPointer getPluginStringName()
	{
		long returnValue = getPluginStringName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getDictionaryStringName_void(long pNativeObject);
	public StringPointer getDictionaryStringName()
	{
		long returnValue = getDictionaryStringName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  boolean initialise_void_callback()
	{
		boolean returnValue = initialise();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean initialise_void(long pNativeObject);
	////Pure virtual functions that plugins must Override
	public boolean initialise()
	{
		boolean returnValue = initialise_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean initialise_void_NoVirtual(long pNativeObject);
	protected boolean initialise_NoVirtual()
	{
		boolean returnValue = initialise_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void shutDown_void_callback()
	{
		shutDown();
	}

	native private void shutDown_void(long pNativeObject);
	public void shutDown()
	{
		shutDown_void(this.nativeObject.pointer);
	}
	native private void shutDown_void_NoVirtual(long pNativeObject);
	protected void shutDown_NoVirtual()
	{
		shutDown_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void createDefinedTexture_EVString_EVString_callback(String sMaterialName, String groupName)
	{
		String sMaterialNameParamValue = sMaterialName;
		String groupNameParamValue = groupName;
		createDefinedTexture(sMaterialNameParamValue, groupNameParamValue);
	}

	native private void createDefinedTexture_EVString_EVString(long pNativeObject, String sMaterialName, String groupName);
	public void createDefinedTexture(String sMaterialName, String groupName)
	{
		String sMaterialNameParamValue = sMaterialName;
		String groupNameParamValue = groupName;
		createDefinedTexture_EVString_EVString(this.nativeObject.pointer, sMaterialNameParamValue, groupNameParamValue);
	}
	native private void createDefinedTexture_EVString_EVString_NoVirtual(long pNativeObject, String sMaterialName, String groupName);
	protected void createDefinedTexture_NoVirtual(String sMaterialName, String groupName)
	{
		String sMaterialNameParamValue = sMaterialName;
		String groupNameParamValue = groupName;
		createDefinedTexture_EVString_EVString_NoVirtual(this.nativeObject.pointer, sMaterialNameParamValue, groupNameParamValue);
	}

	protected  void createDefinedTexture_EVString_callback(String sMaterialName)
	{
		String sMaterialNameParamValue = sMaterialName;
		createDefinedTexture(sMaterialNameParamValue);
	}

	native private void createDefinedTexture_EVString(long pNativeObject, String sMaterialName);
	public void createDefinedTexture(String sMaterialName)
	{
		String sMaterialNameParamValue = sMaterialName;
		createDefinedTexture_EVString(this.nativeObject.pointer, sMaterialNameParamValue);
	}
	native private void createDefinedTexture_EVString_NoVirtual(long pNativeObject, String sMaterialName);
	protected void createDefinedTexture_NoVirtual(String sMaterialName)
	{
		String sMaterialNameParamValue = sMaterialName;
		createDefinedTexture_EVString_NoVirtual(this.nativeObject.pointer, sMaterialNameParamValue);
	}

	protected  void destroyAdvancedTexture_EVString_EVString_callback(String sTextureName, String groupName)
	{
		String sTextureNameParamValue = sTextureName;
		String groupNameParamValue = groupName;
		destroyAdvancedTexture(sTextureNameParamValue, groupNameParamValue);
	}

	native private void destroyAdvancedTexture_EVString_EVString(long pNativeObject, String sTextureName, String groupName);
	public void destroyAdvancedTexture(String sTextureName, String groupName)
	{
		String sTextureNameParamValue = sTextureName;
		String groupNameParamValue = groupName;
		destroyAdvancedTexture_EVString_EVString(this.nativeObject.pointer, sTextureNameParamValue, groupNameParamValue);
	}
	native private void destroyAdvancedTexture_EVString_EVString_NoVirtual(long pNativeObject, String sTextureName, String groupName);
	protected void destroyAdvancedTexture_NoVirtual(String sTextureName, String groupName)
	{
		String sTextureNameParamValue = sTextureName;
		String groupNameParamValue = groupName;
		destroyAdvancedTexture_EVString_EVString_NoVirtual(this.nativeObject.pointer, sTextureNameParamValue, groupNameParamValue);
	}

	protected  void destroyAdvancedTexture_EVString_callback(String sTextureName)
	{
		String sTextureNameParamValue = sTextureName;
		destroyAdvancedTexture(sTextureNameParamValue);
	}

	native private void destroyAdvancedTexture_EVString(long pNativeObject, String sTextureName);
	public void destroyAdvancedTexture(String sTextureName)
	{
		String sTextureNameParamValue = sTextureName;
		destroyAdvancedTexture_EVString(this.nativeObject.pointer, sTextureNameParamValue);
	}
	native private void destroyAdvancedTexture_EVString_NoVirtual(long pNativeObject, String sTextureName);
	protected void destroyAdvancedTexture_NoVirtual(String sTextureName)
	{
		String sTextureNameParamValue = sTextureName;
		destroyAdvancedTexture_EVString_NoVirtual(this.nativeObject.pointer, sTextureNameParamValue);
	}

	public ExternalTextureSource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ExternalTextureSource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	native protected void register_initialise_void(long pNativeObject, String method);
	native protected void register_shutDown_void(long pNativeObject, String method);
	native protected void register_createDefinedTexture_EVString_EVString(long pNativeObject, String method);
	native protected void register_createDefinedTexture_EVString(long pNativeObject, String method);
	native protected void register_destroyAdvancedTexture_EVString_EVString(long pNativeObject, String method);
	native protected void register_destroyAdvancedTexture_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_initialise_void(this.nativeObject.pointer, "initialise_void_callback");
			this.register_shutDown_void(this.nativeObject.pointer, "shutDown_void_callback");
			this.register_createDefinedTexture_EVString_EVString(this.nativeObject.pointer, "createDefinedTexture_EVString_EVString_callback");
			this.register_createDefinedTexture_EVString(this.nativeObject.pointer, "createDefinedTexture_EVString_callback");
			this.register_destroyAdvancedTexture_EVString_EVString(this.nativeObject.pointer, "destroyAdvancedTexture_EVString_EVString_callback");
			this.register_destroyAdvancedTexture_EVString(this.nativeObject.pointer, "destroyAdvancedTexture_EVString_callback");
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static ExternalTextureSource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ExternalTextureSource obj = null;
 		if(baseObj instanceof ExternalTextureSource)
		{
			obj = (ExternalTextureSource)baseObj;
		} else {
			obj = new ExternalTextureSource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CExternalTextureSource");
			obj.increaseCast();
		}

		return obj;
	}
}
