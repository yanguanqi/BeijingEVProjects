package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * Objectrepresentingonepassoroperationinacompositionsequence.Thisprovidesa	methodtoconvenientlyinterleaveCRenderSystemcommandsbetweenRenderQueues.
 */
public class CompositionPass extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositionPass", new CompositionPassClassFactory());
	}

	public CompositionPass(com.earthview.world.graphic.CompositionTargetPass ref_parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		Create("CCompositionPass", list);
	}

	/**
	 * Enumerationthatenumeratesthevariouscompositionpasstypes.
	 */
	public enum PassType implements INativeEnum<PassType> {
		PT_CLEAR(PassTypeHelper.ENUM_VALUES[0]),
		PT_STENCIL(PassTypeHelper.ENUM_VALUES[1]),
		PT_RENDERSCENE(PassTypeHelper.ENUM_VALUES[2]),
		PT_RENDERQUAD(PassTypeHelper.ENUM_VALUES[3]),
		PT_RENDERCUSTOM(PassTypeHelper.ENUM_VALUES[4]);
		private int value;
		PassType(int i) {
			this.value = i;
		}
		public PassType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final PassType toEnum(int retval) {
			if(retval == PT_CLEAR.value){
				return PT_CLEAR;
			}
			else if(retval == PT_STENCIL.value){
				return PT_STENCIL;
			}
			else if(retval == PT_RENDERSCENE.value){
				return PT_RENDERSCENE;
			}
			else if(retval == PT_RENDERQUAD.value){
				return PT_RENDERQUAD;
			}
			else if(retval == PT_RENDERCUSTOM.value){
				return PT_RENDERCUSTOM;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class PassTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void setType_PassType(long pNativeObject, int type);
	/**
	 * Setthetypeofcompositionpass
	 * @param  name="type"
	 */
	public void setType(com.earthview.world.graphic.CompositionPass.PassType type)
	{
		int typeParamValue = type.getValue();
		setType_PassType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getType_void(long pNativeObject);
	/**
	 * Getthetypeofcompositionpass
	 * @param  
	 */
	public com.earthview.world.graphic.CompositionPass.PassType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.CompositionPass.PassType.toEnum(returnValue);
	}
	native private void setIdentifier_ev_uint32(long pNativeObject, long id);
	/**
	 * Setanidentifierforthispass.Thisidentifiercanbeusedto	"listenin"onthispasswithanCCompositorInstance::CCompositorInstanceListener.
	 * @param  name="id"
	 */
	public void setIdentifier(long id)
	{
		long idParamValue = id;
		setIdentifier_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private long getIdentifier_void(long pNativeObject);
	/**
	 * Gettheidentifierforthispass
	 * @param  
	 * @return id
	 */
	public long getIdentifier()
	{
		long returnValue = getIdentifier_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaterial_CMaterialPtr(long pNativeObject, long mat);
	/**
	 * Setthematerialusedbythispass	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 * @param  name="mat"
	 */
	public void setMaterial(com.earthview.world.graphic.MaterialPtr mat)
	{
		long matParamValue = mat.nativeObject.pointer;
		setMaterial_CMaterialPtr(this.nativeObject.pointer, matParamValue);
	}
	native private void setMaterialName_EVString(long pNativeObject, String name);
	/**
	 * Setthematerialusedbythispass	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 * @param  name="name"
	 */
	public void setMaterialName(String name)
	{
		String nameParamValue = name;
		setMaterialName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getMaterial_void(long pNativeObject);
	/**
	 * Getthematerialusedbythispass	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 * @param  
	 * @return EarthView::World::Graphic::CMaterialPtr
	 */
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		long returnValue = getMaterial_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private void setFirstRenderQueue_ev_uint8(long pNativeObject, short id);
	/**
	 * Setthefirstrenderqueuetoberenderedinthispass(inclusive)	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERSCENE
	 * @param  name="id"
	 */
	public void setFirstRenderQueue(short id)
	{
		short idParamValue = id;
		setFirstRenderQueue_ev_uint8(this.nativeObject.pointer, idParamValue);
	}
	native private short getFirstRenderQueue_void(long pNativeObject);
	/**
	 * Getthefirstrenderqueuetoberenderedinthispass(inclusive)	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERSCENE
	 * @param  
	 */
	public short getFirstRenderQueue()
	{
		short returnValue = getFirstRenderQueue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLastRenderQueue_ev_uint8(long pNativeObject, short id);
	///<sumamry> Set the last render queue to be rendered in this pass (inclusive)
	///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERSCENE
	///</summary>
	///<param>name ="id"</param>
	///<returns></returns>
	public void setLastRenderQueue(short id)
	{
		short idParamValue = id;
		setLastRenderQueue_ev_uint8(this.nativeObject.pointer, idParamValue);
	}
	native private short getLastRenderQueue_void(long pNativeObject);
	/**
	 * Getthelastrenderqueuetoberenderedinthispass(inclusive)	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERSCENE
	 * @param  
	 */
	public short getLastRenderQueue()
	{
		short returnValue = getLastRenderQueue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaterialScheme_EVString(long pNativeObject, String schemeName);
	/**
	 * Setthematerialschemeusedbythispass.@remarks	Onlyapplicabletopassesthatrenderthescene.	@seeCTechnique::setScheme.
	 * @param  name="schemeName"
	 */
	public void setMaterialScheme(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		setMaterialScheme_EVString(this.nativeObject.pointer, schemeNameParamValue);
	}
	native private long getMaterialScheme_void(long pNativeObject);
	/**
	 * Getthematerialschemeusedbythispass.@remarks	Onlyapplicabletopassesthatrenderthescene.	@seeCTechnique::setScheme.
	 * @param  
	 */
	public StringPointer getMaterialScheme()
	{
		long returnValue = getMaterialScheme_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setClearBuffers_ev_uint32(long pNativeObject, long val);
	/**
	 * Settheviewportclearbuffers(defaultstoFBT_COLOUR|FBT_DEPTH)
	 * @param  name="val"isacombinationofFBT_COLOUR,FBT_DEPTH,FBT_STENCIL.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisCLEAR
	 */
	public void setClearBuffers(long val)
	{
		long valParamValue = val;
		setClearBuffers_ev_uint32(this.nativeObject.pointer, valParamValue);
	}
	native private long getClearBuffers_void(long pNativeObject);
	/**
	 * Gettheviewportclearbuffers.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisCLEAR
	 * @param  
	 */
	public long getClearBuffers()
	{
		long returnValue = getClearBuffers_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setClearColour_CColourValue(long pNativeObject, long val);
	/**
	 * Settheviewportclearcolour(defaultsto0,0,0,0)	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisCLEAR
	 * @param  name="val"
	 */
	public void setClearColour(com.earthview.world.graphic.ColourValue val)
	{
		long valParamValue = val.nativeObject.pointer;
		setClearColour_CColourValue(this.nativeObject.pointer, valParamValue);
	}
	native private long getClearColour_void(long pNativeObject);
	/**
	 * Gettheviewportclearcolour(defaultsto0,0,0,0)	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisCLEAR
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getClearColour()
	{
		long returnValue = getClearColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setClearDepth_Real(long pNativeObject, double depth);
	/**
	 * Settheviewportcleardepth(defaultsto1.0)	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisCLEAR
	 * @param  name="depth"
	 */
	public void setClearDepth(double depth)
	{
		double depthParamValue = depth;
		setClearDepth_Real(this.nativeObject.pointer, depthParamValue);
	}
	native private double getClearDepth_void(long pNativeObject);
	/**
	 * Gettheviewportcleardepth(defaultsto1.0)	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisCLEAR
	 * @param  
	 */
	public double getClearDepth()
	{
		double returnValue = getClearDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setClearStencil_ev_uint32(long pNativeObject, long value);
	/**
	 * Settheviewportclearstencilvalue(defaultsto0)	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisCLEAR
	 * @param  name="value"
	 */
	public void setClearStencil(long value)
	{
		long valueParamValue = value;
		setClearStencil_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private long getClearStencil_void(long pNativeObject);
	/**
	 * Gettheviewportclearstencilvalue(defaultsto0)	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisCLEAR
	 * @param  
	 */
	public long getClearStencil()
	{
		long returnValue = getClearStencil_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setStencilCheck_ev_bool(long pNativeObject, boolean value);
	/**
	 * Setstencilcheckonoroff.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  name="value"
	 */
	public void setStencilCheck(boolean value)
	{
		boolean valueParamValue = value;
		setStencilCheck_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getStencilCheck_void(long pNativeObject);
	/**
	 * Getstencilcheckenable.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  
	 */
	public boolean getStencilCheck()
	{
		boolean returnValue = getStencilCheck_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setStencilFunc_CompareFunction(long pNativeObject, int value);
	/**
	 * Setstencilcomparefunction.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  name="value"
	 */
	public void setStencilFunc(com.earthview.world.graphic.CompareFunction value)
	{
		int valueParamValue = value.getValue();
		setStencilFunc_CompareFunction(this.nativeObject.pointer, valueParamValue);
	}
	native private int getStencilFunc_void(long pNativeObject);
	/**
	 * Getstencilcomparefunction.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  
	 */
	public com.earthview.world.graphic.CompareFunction getStencilFunc()
	{
		int returnValue = getStencilFunc_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.CompareFunction.toEnum(returnValue);
	}
	native private void setStencilRefValue_ev_uint32(long pNativeObject, long value);
	/**
	 * Setstencilreferencevalue.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  name="value"
	 */
	public void setStencilRefValue(long value)
	{
		long valueParamValue = value;
		setStencilRefValue_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private long getStencilRefValue_void(long pNativeObject);
	/**
	 * Getstencilreferencevalue.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  
	 */
	public long getStencilRefValue()
	{
		long returnValue = getStencilRefValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setStencilMask_ev_uint32(long pNativeObject, long value);
	/**
	 * Setstencilmask.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  name="value"
	 */
	public void setStencilMask(long value)
	{
		long valueParamValue = value;
		setStencilMask_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private long getStencilMask_void(long pNativeObject);
	/**
	 * Getstencilmask.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  
	 * @return stencilmask
	 */
	public long getStencilMask()
	{
		long returnValue = getStencilMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setStencilFailOp_StencilOperation(long pNativeObject, int value);
	/**
	 * Setstencilfailoperation.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  name="value"
	 */
	public void setStencilFailOp(StencilOperation value)
	{
		int valueParamValue = value.getValue();
		setStencilFailOp_StencilOperation(this.nativeObject.pointer, valueParamValue);
	}
	native private int getStencilFailOp_void(long pNativeObject);
	/**
	 * Getstencilfailoperation.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  
	 */
	public StencilOperation getStencilFailOp()
	{
		int returnValue = getStencilFailOp_void(this.nativeObject.pointer);
		return StencilOperation.toEnum(returnValue);
	}
	native private void setStencilDepthFailOp_StencilOperation(long pNativeObject, int value);
	/**
	 * Setstencildepthfailoperation.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  name="value"
	 */
	public void setStencilDepthFailOp(StencilOperation value)
	{
		int valueParamValue = value.getValue();
		setStencilDepthFailOp_StencilOperation(this.nativeObject.pointer, valueParamValue);
	}
	native private int getStencilDepthFailOp_void(long pNativeObject);
	/**
	 * Getstencildepthfailoperation.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  
	 */
	public StencilOperation getStencilDepthFailOp()
	{
		int returnValue = getStencilDepthFailOp_void(this.nativeObject.pointer);
		return StencilOperation.toEnum(returnValue);
	}
	native private void setStencilPassOp_StencilOperation(long pNativeObject, int value);
	/**
	 * Setstencilpassoperation.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  name="value"
	 */
	public void setStencilPassOp(StencilOperation value)
	{
		int valueParamValue = value.getValue();
		setStencilPassOp_StencilOperation(this.nativeObject.pointer, valueParamValue);
	}
	native private int getStencilPassOp_void(long pNativeObject);
	/**
	 * Getstencilpassoperation.@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  
	 */
	public StencilOperation getStencilPassOp()
	{
		int returnValue = getStencilPassOp_void(this.nativeObject.pointer);
		return StencilOperation.toEnum(returnValue);
	}
	native private void setStencilTwoSidedOperation_ev_bool(long pNativeObject, boolean value);
	/**
	 * Settwosidedstenciloperation.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisSTENCIL
	 * @param  name="value"
	 */
	public void setStencilTwoSidedOperation(boolean value)
	{
		boolean valueParamValue = value;
		setStencilTwoSidedOperation_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getStencilTwoSidedOperation_void(long pNativeObject);
	///<summary> Get two sided stencil operation.
	///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
	///<param></param>
	///<returns></returns>
	public boolean getStencilTwoSidedOperation()
	{
		boolean returnValue = getStencilTwoSidedOperation_void(this.nativeObject.pointer);
		return returnValue;
	}
	/**
	 * Inputs(formaterialusedforrenderingthequad)
	 */
	public static class InputTex extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositionPass::InputTex", new InputTexClassFactory());
		}

		native private String get_name_void(long pNativeObject);
		public String get_name()
		{
			String jniValue = get_name_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_name_EVString (long pNativeObject, String value);
		public void set_name(String name)
		{
			String nameParamValue = name;
			
			set_name_EVString(this.nativeObject.pointer, nameParamValue);
		}
		
		native private long get_mrtIndex_void(long pNativeObject);
		public long get_mrtIndex()
		{
			long jniValue = get_mrtIndex_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mrtIndex_ev_size_t (long pNativeObject, long value);
		public void set_mrtIndex(long mrtIndex)
		{
			long mrtIndexParamValue = mrtIndex;
			
			set_mrtIndex_ev_size_t(this.nativeObject.pointer, mrtIndexParamValue);
		}
		
		public InputTex() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("InputTex", null);
		}

		public InputTex(String strName, long index) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer strNamePtr = new BasePointer(strName);
			list.add("strName", strNamePtr.get());
			BasePointer indexPtr = new BasePointer(index);
			list.add("index", indexPtr.get());
			Create("InputTex", list);
		}

		public InputTex(String strName) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer strNamePtr = new BasePointer(strName);
			list.add("strName", strNamePtr.get());
			Create("InputTex", list);
		}

		public InputTex(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public InputTex(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static InputTex fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			InputTex obj = null;
 			if(baseObj instanceof InputTex)
			{
				obj = (InputTex)baseObj;
			} else {
				obj = new InputTex(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "InputTex");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class InputTexClassFactory implements IClassFactory {
		public BaseObject create()
		{
			InputTex emptyInstance = new InputTex(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void setInput_ev_size_t_EVString_ev_size_t(long pNativeObject, long id, String input, long mrtIndex);
	/**
	 * Setaninputlocaltexture.Anemptystringclearstheinput.
	 * @param  name="id"Inputtoset.Mustbein0..EV_MAX_TEXTURE_LAYERS-1
	 * @param  name="input"Whichtexturetobindtothisinput.Anemptystringclearstheinput.
	 * @param  name="mrtIndex"WhichsurfaceofanMRTtoretrieve
	 * @param  name="note"applieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 */
	public void setInput(long id, String input, long mrtIndex)
	{
		long idParamValue = id;
		String inputParamValue = input;
		long mrtIndexParamValue = mrtIndex;
		setInput_ev_size_t_EVString_ev_size_t(this.nativeObject.pointer, idParamValue, inputParamValue, mrtIndexParamValue);
	}
	native private void setInput_ev_size_t_EVString(long pNativeObject, long id, String input);
	public void setInput(long id, String input)
	{
		long idParamValue = id;
		String inputParamValue = input;
		setInput_ev_size_t_EVString(this.nativeObject.pointer, idParamValue, inputParamValue);
	}
	native private void setInput_ev_size_t(long pNativeObject, long id);
	public void setInput(long id)
	{
		long idParamValue = id;
		setInput_ev_size_t(this.nativeObject.pointer, idParamValue);
	}
	native private long getInput_ev_size_t(long pNativeObject, long id);
	/**
	 * Getthevalueofaninput.
	 * @param  name="id"Inputtoget.Mustbein0..EV_MAX_TEXTURE_LAYERS-1.
	 */
	public com.earthview.world.graphic.CompositionPass.InputTex getInput(long id)
	{
		long idParamValue = id;
		long returnValue = getInput_ev_size_t(this.nativeObject.pointer, idParamValue);
		com.earthview.world.graphic.CompositionPass.InputTex __returnValue = new com.earthview.world.graphic.CompositionPass.InputTex(CreatedWhenConstruct.CWC_NotToCreate, "InputTex");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionPass.InputTex)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "InputTex");
		}
		return __returnValue;
	}
	native private long getNumInputs_void(long pNativeObject);
	/**
	 * Getthenumberofinputsused.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 * @param  
	 */
	public long getNumInputs()
	{
		long returnValue = getNumInputs_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clearAllInputs_void(long pNativeObject);
	/**
	 * Clearallinputs.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 * @param  
	 */
	public void clearAllInputs()
	{
		clearAllInputs_void(this.nativeObject.pointer);
	}
	native private long getParent_void(long pNativeObject);
	/**
	 * Getparentobject	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 * @param  
	 */
	public com.earthview.world.graphic.CompositionTargetPass getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositionTargetPass __returnValue = new com.earthview.world.graphic.CompositionTargetPass(CreatedWhenConstruct.CWC_NotToCreate, "CCompositionTargetPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositionTargetPass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositionTargetPass");
		}
		return __returnValue;
	}
	native private boolean _isSupported_void(long pNativeObject);
	/**
	 * Determineifthistargetpassissupportedonthecurrentrenderingdevice.
	 * @param  
	 */
	public boolean _isSupported()
	{
		boolean returnValue = _isSupported_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setQuadCorners_Real_Real_Real_Real(long pNativeObject, double left, double top, double right, double bottom);
	/**
	 * Setquadnormalisedpositions[-1;1]x[-1;1]@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 * @param  name="left"
	 * @param  name="top"
	 * @param  name="right"
	 * @param  name="bottom"
	 */
	public void setQuadCorners(double left, double top, double right, double bottom)
	{
		double leftParamValue = left;
		double topParamValue = top;
		double rightParamValue = right;
		double bottomParamValue = bottom;
		setQuadCorners_Real_Real_Real_Real(this.nativeObject.pointer, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
	}
	native private boolean getQuadCorners_Real_Real_Real_Real(long pNativeObject, long left, long top, long right, long bottom);
	/**
	 * Getquadnormalisedpositions[-1;1]x[-1;1]@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 * @param  name="left"
	 * @param  name="top"
	 * @param  name="right"
	 * @param  name="bottom"
	 */
	public boolean getQuadCorners(DoublePointer left, DoublePointer top, DoublePointer right, DoublePointer bottom)
	{
		long leftParamValue = left.nativeObject.pointer;
		long topParamValue = top.nativeObject.pointer;
		long rightParamValue = right.nativeObject.pointer;
		long bottomParamValue = bottom.nativeObject.pointer;
		boolean returnValue = getQuadCorners_Real_Real_Real_Real(this.nativeObject.pointer, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
		return returnValue;
	}
	native private void setQuadFarCorners_ev_bool_ev_bool(long pNativeObject, boolean farCorners, boolean farCornersViewSpace);
	/**
	 * Setstheuseofcamerafrustumfarcornersprovidedinthequad'snormals	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 * @param  name="farCorners"
	 * @param  name="farCornersViewSpace"
	 */
	public void setQuadFarCorners(boolean farCorners, boolean farCornersViewSpace)
	{
		boolean farCornersParamValue = farCorners;
		boolean farCornersViewSpaceParamValue = farCornersViewSpace;
		setQuadFarCorners_ev_bool_ev_bool(this.nativeObject.pointer, farCornersParamValue, farCornersViewSpaceParamValue);
	}
	native private boolean getQuadFarCorners_void(long pNativeObject);
	/**
	 * Returnstrueifcamerafrustumfarcornersareprovidedinthequad.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 * @param  
	 */
	public boolean getQuadFarCorners()
	{
		boolean returnValue = getQuadFarCorners_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getQuadFarCornersViewSpace_void(long pNativeObject);
	/**
	 * Returnstrueifthefarcornersprovidedinthequadareinviewspace	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERQUAD
	 * @param  
	 */
	public boolean getQuadFarCornersViewSpace()
	{
		boolean returnValue = getQuadFarCornersViewSpace_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCustomType_EVString(long pNativeObject, String customType);
	/**
	 * Setthetypenameofthiscustomcompositionpass.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERCUSTOM	@seeCCompositorManager::registerCustomCompositionPass
	 * @param  name="customType"
	 */
	public void setCustomType(String customType)
	{
		String customTypeParamValue = customType;
		setCustomType_EVString(this.nativeObject.pointer, customTypeParamValue);
	}
	native private long getCustomType_void(long pNativeObject);
	/**
	 * Getthetypenameofthiscustomcompositionpass.	@noteapplieswhenEarthView::World::Graphic::CCompositionPass::PassTypeisRENDERCUSTOM	@seeCCompositorManager::registerCustomCompositionPass
	 * @param  
	 */
	public StringPointer getCustomType()
	{
		long returnValue = getCustomType_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public CompositionPass(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompositionPass(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CompositionPass fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompositionPass obj = null;
 		if(baseObj instanceof CompositionPass)
		{
			obj = (CompositionPass)baseObj;
		} else {
			obj = new CompositionPass(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompositionPass");
			obj.increaseCast();
		}

		return obj;
	}
}
