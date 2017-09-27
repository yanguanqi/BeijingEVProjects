package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Pass extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPass", new PassClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCPassProxy", new PassClassFactory());
	}

	public static class HashFunc extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPass::HashFunc", new HashFuncClassFactory());
		}

		public HashFunc() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("HashFunc", null);
		}

		public HashFunc(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public HashFunc(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static HashFunc fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			HashFunc obj = null;
 			if(baseObj instanceof HashFunc)
			{
				obj = (HashFunc)baseObj;
			} else {
				obj = new HashFunc(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "HashFunc");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class HashFuncClassFactory implements IClassFactory {
		public BaseObject create()
		{
			HashFunc emptyInstance = new HashFunc(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///// Storage of texture unit states
	////typedef vector<EarthView::World::Graphic::CTextureUnitState*> EarthView::World::Graphic::CPass::TextureUnitStates;
	public static class TextureUnitStates extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPass::TextureUnitStates", new TextureUnitStatesClassFactory());
		}

		public TextureUnitStates() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TextureUnitStates", null);
		}

		native private void push_back_CTextureUnitState(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.TextureUnitState> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CTextureUnitState(this.nativeObject.pointer, ref_tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.TextureUnitState> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.TextureUnitState> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.TextureUnitState>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.TextureUnitState> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.TextureUnitState> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.TextureUnitState>(new InstancePointer(returnValue));
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
		public TextureUnitStates(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextureUnitStates(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TextureUnitStates fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextureUnitStates obj = null;
 			if(baseObj instanceof TextureUnitStates)
			{
				obj = (TextureUnitStates)baseObj;
			} else {
				obj = new TextureUnitStates(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TextureUnitStates");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextureUnitStatesClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextureUnitStates emptyInstance = new TextureUnitStates(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class PassSet extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPass::PassSet", new PassSetClassFactory());
		}

		public PassSet() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("PassSet", null);
		}

		native private void insert_CPass(long pNativeObject, long ref_val);
		public void insert(NativeObjectPointer<com.earthview.world.graphic.Pass> ref_val)
		{
			long ref_valParamValue = ref_val.nativeObject.pointer;
			insert_CPass(this.nativeObject.pointer, ref_valParamValue);
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long erase_CPass(long pNativeObject, long key);
		public long erase(NativeObjectPointer<com.earthview.world.graphic.Pass> key)
		{
			long keyParamValue = key.nativeObject.pointer;
			long returnValue = erase_CPass(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private long count_CPass(long pNativeObject, long key);
		public long count(NativeObjectPointer<com.earthview.world.graphic.Pass> key)
		{
			long keyParamValue = key.nativeObject.pointer;
			long returnValue = count_CPass(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long max_size_void(long pNativeObject);
		public long max_size()
		{
			long returnValue = max_size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void swap_PassSet(long pNativeObject, long other);
		public void swap(com.earthview.world.graphic.Pass.PassSet other)
		{
			long otherParamValue = other.nativeObject.pointer;
			swap_PassSet(this.nativeObject.pointer, otherParamValue);
		}
		public PassSet(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PassSet(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PassSet fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PassSet obj = null;
 			if(baseObj instanceof PassSet)
			{
				obj = (PassSet)baseObj;
			} else {
				obj = new PassSet(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PassSet");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PassSetClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PassSet emptyInstance = new PassSet(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///// Default constructor
	public Pass() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPassProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Pass".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Pass(com.earthview.world.graphic.Technique ref_parent, int index) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer indexPtr = new BasePointer(index);
		list.add("index", indexPtr.get());
		Create("JCPassProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Pass".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	///// Copy constructor
	public Pass(com.earthview.world.graphic.Technique ref_parent, int index, com.earthview.world.graphic.Pass oth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer indexPtr = new BasePointer(index);
		list.add("index", indexPtr.get());
		BasePointer othPtr = new BasePointer(oth);
		list.add("oth", othPtr.get());
		Create("JCPassProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Pass".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long OperatorAssign_CPass(long pNativeObject, long oth);
	///// Operator = overload
	public com.earthview.world.graphic.Pass OperatorAssign(com.earthview.world.graphic.Pass oth)
	{
		long othParamValue = oth.nativeObject.pointer;
		long returnValue = OperatorAssign_CPass(this.nativeObject.pointer, othParamValue);
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
	native private boolean isProgrammable_void(long pNativeObject);
	/**
	 * 是否已编程
	 */
	public boolean isProgrammable()
	{
		boolean returnValue = isProgrammable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasVertexProgram_void(long pNativeObject);
	/**
	 * 是否有顶点程序
	 */
	public boolean hasVertexProgram()
	{
		boolean returnValue = hasVertexProgram_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasFragmentProgram_void(long pNativeObject);
	/**
	 * 是否有片段程序
	 */
	public boolean hasFragmentProgram()
	{
		boolean returnValue = hasFragmentProgram_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasGeometryProgram_void(long pNativeObject);
	/**
	 * 是否有几何程序
	 */
	public boolean hasGeometryProgram()
	{
		boolean returnValue = hasGeometryProgram_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasShadowCasterVertexProgram_void(long pNativeObject);
	/**
	 * 是否有投射阴影的顶点程序
	 */
	public boolean hasShadowCasterVertexProgram()
	{
		boolean returnValue = hasShadowCasterVertexProgram_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasShadowCasterFragmentProgram_void(long pNativeObject);
	/**
	 * 是否有投射阴影的片段程序
	 */
	public boolean hasShadowCasterFragmentProgram()
	{
		boolean returnValue = hasShadowCasterFragmentProgram_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasShadowReceiverVertexProgram_void(long pNativeObject);
	/**
	 * 是否有接收阴影的顶点程序
	 */
	public boolean hasShadowReceiverVertexProgram()
	{
		boolean returnValue = hasShadowReceiverVertexProgram_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasShadowReceiverFragmentProgram_void(long pNativeObject);
	/**
	 * 是否有接收阴影的片段程序
	 */
	public boolean hasShadowReceiverFragmentProgram()
	{
		boolean returnValue = hasShadowReceiverFragmentProgram_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getIndex_void(long pNativeObject);
	/**
	 * 获得通路在技术中的序号
	 */
	public int getIndex()
	{
		int returnValue = getIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getName_void(long pNativeObject);
	/**
	 * 获得名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setAmbient_Real_Real_Real(long pNativeObject, double red, double green, double blue);
	/**
	 * 设置环境光反射率
	 */
	public void setAmbient(double red, double green, double blue)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		setAmbient_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setAmbient_CColourValue(long pNativeObject, long ambient);
	public void setAmbient(com.earthview.world.graphic.ColourValue ambient)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		setAmbient_CColourValue(this.nativeObject.pointer, ambientParamValue);
	}
	native private void setDiffuse_Real_Real_Real_Real(long pNativeObject, double red, double green, double blue, double alpha);
	/**
	 * 设置漫射光反射率
	 */
	public void setDiffuse(double red, double green, double blue, double alpha)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		double alphaParamValue = alpha;
		setDiffuse_Real_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setDiffuse_CColourValue(long pNativeObject, long diffuse);
	public void setDiffuse(com.earthview.world.graphic.ColourValue diffuse)
	{
		long diffuseParamValue = diffuse.nativeObject.pointer;
		setDiffuse_CColourValue(this.nativeObject.pointer, diffuseParamValue);
	}
	native private void setSpecular_Real_Real_Real_Real(long pNativeObject, double red, double green, double blue, double alpha);
	/**
	 * 设置镜面光反射率
	 */
	public void setSpecular(double red, double green, double blue, double alpha)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		double alphaParamValue = alpha;
		setSpecular_Real_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setSpecular_CColourValue(long pNativeObject, long specular);
	public void setSpecular(com.earthview.world.graphic.ColourValue specular)
	{
		long specularParamValue = specular.nativeObject.pointer;
		setSpecular_CColourValue(this.nativeObject.pointer, specularParamValue);
	}
	native private void setShininess_Real(long pNativeObject, double val);
	/**
	 * 设置镜面高光亮度
	 */
	public void setShininess(double val)
	{
		double valParamValue = val;
		setShininess_Real(this.nativeObject.pointer, valParamValue);
	}
	native private void setSelfIllumination_Real_Real_Real(long pNativeObject, double red, double green, double blue);
	/**
	 * 设置自发光的颜色
	 */
	public void setSelfIllumination(double red, double green, double blue)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		setSelfIllumination_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setSelfIllumination_CColourValue(long pNativeObject, long selfIllum);
	public void setSelfIllumination(com.earthview.world.graphic.ColourValue selfIllum)
	{
		long selfIllumParamValue = selfIllum.nativeObject.pointer;
		setSelfIllumination_CColourValue(this.nativeObject.pointer, selfIllumParamValue);
	}
	native private void setEmissive_Real_Real_Real(long pNativeObject, double red, double green, double blue);
	/**
	 * 设置自发光的颜色
	 */
	public void setEmissive(double red, double green, double blue)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		setEmissive_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setEmissive_CColourValue(long pNativeObject, long emissive);
	public void setEmissive(com.earthview.world.graphic.ColourValue emissive)
	{
		long emissiveParamValue = emissive.nativeObject.pointer;
		setEmissive_CColourValue(this.nativeObject.pointer, emissiveParamValue);
	}
	native private void setVertexColourTracking_ev_int32(long pNativeObject, int tracking);
	/**
	 * 设置顶点颜色跟踪类型
	 */
	public void setVertexColourTracking(int tracking)
	{
		int trackingParamValue = tracking;
		setVertexColourTracking_ev_int32(this.nativeObject.pointer, trackingParamValue);
	}
	native private double getPointSize_void(long pNativeObject);
	/**
	 * 获得点大小
	 */
	public double getPointSize()
	{
		double returnValue = getPointSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPointSize_Real(long pNativeObject, double ps);
	/**
	 * 设置点大小
	 */
	public void setPointSize(double ps)
	{
		double psParamValue = ps;
		setPointSize_Real(this.nativeObject.pointer, psParamValue);
	}
	native private void setPointSpritesEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否启用点精灵
	 */
	public void setPointSpritesEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setPointSpritesEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getPointSpritesEnabled_void(long pNativeObject);
	/**
	 * 获取是否启用点精灵
	 */
	public boolean getPointSpritesEnabled()
	{
		boolean returnValue = getPointSpritesEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPointAttenuation_ev_bool_Real_Real_Real(long pNativeObject, boolean enabled, double constant, double linear, double quadratic);
	/**
	 * 设置点精灵参数
	 */
	public void setPointAttenuation(boolean enabled, double constant, double linear, double quadratic)
	{
		boolean enabledParamValue = enabled;
		double constantParamValue = constant;
		double linearParamValue = linear;
		double quadraticParamValue = quadratic;
		setPointAttenuation_ev_bool_Real_Real_Real(this.nativeObject.pointer, enabledParamValue, constantParamValue, linearParamValue, quadraticParamValue);
	}
	native private void setPointAttenuation_ev_bool_Real_Real(long pNativeObject, boolean enabled, double constant, double linear);
	public void setPointAttenuation(boolean enabled, double constant, double linear)
	{
		boolean enabledParamValue = enabled;
		double constantParamValue = constant;
		double linearParamValue = linear;
		setPointAttenuation_ev_bool_Real_Real(this.nativeObject.pointer, enabledParamValue, constantParamValue, linearParamValue);
	}
	native private void setPointAttenuation_ev_bool_Real(long pNativeObject, boolean enabled, double constant);
	public void setPointAttenuation(boolean enabled, double constant)
	{
		boolean enabledParamValue = enabled;
		double constantParamValue = constant;
		setPointAttenuation_ev_bool_Real(this.nativeObject.pointer, enabledParamValue, constantParamValue);
	}
	native private void setPointAttenuation_ev_bool(long pNativeObject, boolean enabled);
	public void setPointAttenuation(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setPointAttenuation_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean isPointAttenuationEnabled_void(long pNativeObject);
	/**
	 * 设置点精灵参数是否启用
	 */
	public boolean isPointAttenuationEnabled()
	{
		boolean returnValue = isPointAttenuationEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPointAttenuationConstant_void(long pNativeObject);
	public double getPointAttenuationConstant()
	{
		double returnValue = getPointAttenuationConstant_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPointAttenuationLinear_void(long pNativeObject);
	public double getPointAttenuationLinear()
	{
		double returnValue = getPointAttenuationLinear_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPointAttenuationQuadratic_void(long pNativeObject);
	public double getPointAttenuationQuadratic()
	{
		double returnValue = getPointAttenuationQuadratic_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPointMinSize_Real(long pNativeObject, double min);
	public void setPointMinSize(double min)
	{
		double minParamValue = min;
		setPointMinSize_Real(this.nativeObject.pointer, minParamValue);
	}
	native private double getPointMinSize_void(long pNativeObject);
	public double getPointMinSize()
	{
		double returnValue = getPointMinSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPointMaxSize_Real(long pNativeObject, double max);
	public void setPointMaxSize(double max)
	{
		double maxParamValue = max;
		setPointMaxSize_Real(this.nativeObject.pointer, maxParamValue);
	}
	native private double getPointMaxSize_void(long pNativeObject);
	public double getPointMaxSize()
	{
		double returnValue = getPointMaxSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getAmbient_void(long pNativeObject);
	/**
	 * 获得环境光反射率
	 */
	public com.earthview.world.graphic.ColourValue getAmbient()
	{
		long returnValue = getAmbient_void(this.nativeObject.pointer);
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
	native private long getDiffuse_void(long pNativeObject);
	/**
	 * 获得漫射光反射率
	 */
	public com.earthview.world.graphic.ColourValue getDiffuse()
	{
		long returnValue = getDiffuse_void(this.nativeObject.pointer);
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
	native private long getSpecular_void(long pNativeObject);
	/**
	 * 获得镜面光反射率
	 */
	public com.earthview.world.graphic.ColourValue getSpecular()
	{
		long returnValue = getSpecular_void(this.nativeObject.pointer);
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
	native private long getSelfIllumination_void(long pNativeObject);
	/**
	 * 获得自发光颜色
	 */
	public com.earthview.world.graphic.ColourValue getSelfIllumination()
	{
		long returnValue = getSelfIllumination_void(this.nativeObject.pointer);
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
	native private long getEmissive_void(long pNativeObject);
	/**
	 * 获得自发光颜色
	 */
	public com.earthview.world.graphic.ColourValue getEmissive()
	{
		long returnValue = getEmissive_void(this.nativeObject.pointer);
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
	native private double getShininess_void(long pNativeObject);
	/**
	 * 获得镜面高光亮度
	 */
	public double getShininess()
	{
		double returnValue = getShininess_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getVertexColourTracking_void(long pNativeObject);
	/**
	 * 获得顶点颜色跟踪类型
	 */
	public int getVertexColourTracking()
	{
		int returnValue = getVertexColourTracking_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long createTextureUnitState_RecompileMethod(long pNativeObject, int recompile);
	/**
	 * 创建纹理单元
	 * @param recompile 是否重新编译
	 */
	public com.earthview.world.graphic.TextureUnitState createTextureUnitState(com.earthview.world.graphic.RecompileMethod recompile)
	{
		int recompileParamValue = recompile.getValue();
		long returnValue = createTextureUnitState_RecompileMethod(this.nativeObject.pointer, recompileParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
		}
		return __returnValue;
	}
	native private long createTextureUnitState_void(long pNativeObject);
	public com.earthview.world.graphic.TextureUnitState createTextureUnitState()
	{
		long returnValue = createTextureUnitState_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
		}
		return __returnValue;
	}
	native private long createTextureUnitState_ev_uint32_RecompileMethod(long pNativeObject, long toWhere, int recompile);
	/**
	 * 在指定索引处创建纹理单元
	 * @param toWhere 索引
	 * @param recompile 是否重新编译
	 */
	public com.earthview.world.graphic.TextureUnitState createTextureUnitState(long toWhere, com.earthview.world.graphic.RecompileMethod recompile)
	{
		long toWhereParamValue = toWhere;
		int recompileParamValue = recompile.getValue();
		long returnValue = createTextureUnitState_ev_uint32_RecompileMethod(this.nativeObject.pointer, toWhereParamValue, recompileParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
		}
		return __returnValue;
	}
	native private long createTextureUnitState_ev_uint32(long pNativeObject, long toWhere);
	public com.earthview.world.graphic.TextureUnitState createTextureUnitState(long toWhere)
	{
		long toWhereParamValue = toWhere;
		long returnValue = createTextureUnitState_ev_uint32(this.nativeObject.pointer, toWhereParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
		}
		return __returnValue;
	}
	native private long createTextureUnitState_EVString_ev_uint16_RecompileMethod(long pNativeObject, String textureName, int texCoordSet, int recompile);
	/**
	 * 创建纹理单元
	 * @param textureName 纹理名称
	 * @param texCoordSet 纹理坐标索引
	 * @param recompile 是否重新编译
	 */
	public com.earthview.world.graphic.TextureUnitState createTextureUnitState(String textureName, int texCoordSet, com.earthview.world.graphic.RecompileMethod recompile)
	{
		String textureNameParamValue = textureName;
		int texCoordSetParamValue = texCoordSet;
		int recompileParamValue = recompile.getValue();
		long returnValue = createTextureUnitState_EVString_ev_uint16_RecompileMethod(this.nativeObject.pointer, textureNameParamValue, texCoordSetParamValue, recompileParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
		}
		return __returnValue;
	}
	native private long createTextureUnitState_EVString_ev_uint16(long pNativeObject, String textureName, int texCoordSet);
	public com.earthview.world.graphic.TextureUnitState createTextureUnitState(String textureName, int texCoordSet)
	{
		String textureNameParamValue = textureName;
		int texCoordSetParamValue = texCoordSet;
		long returnValue = createTextureUnitState_EVString_ev_uint16(this.nativeObject.pointer, textureNameParamValue, texCoordSetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
		}
		return __returnValue;
	}
	native private long createTextureUnitState_EVString(long pNativeObject, String textureName);
	public com.earthview.world.graphic.TextureUnitState createTextureUnitState(String textureName)
	{
		String textureNameParamValue = textureName;
		long returnValue = createTextureUnitState_EVString(this.nativeObject.pointer, textureNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
		}
		return __returnValue;
	}
	native private void addTextureUnitState_CTextureUnitState_RecompileMethod(long pNativeObject, long state, int recompile);
	/**
	 * 添加纹理单元
	 * @param state 纹理单元
	 * @param recompile 是否重新编译
	 */
	public void addTextureUnitState(com.earthview.world.graphic.TextureUnitState state, com.earthview.world.graphic.RecompileMethod recompile)
	{
		long stateParamValue = (state == null ? 0L : state.nativeObject.pointer);
		int recompileParamValue = recompile.getValue();
		addTextureUnitState_CTextureUnitState_RecompileMethod(this.nativeObject.pointer, stateParamValue, recompileParamValue);
	}
	native private void addTextureUnitState_CTextureUnitState(long pNativeObject, long state);
	public void addTextureUnitState(com.earthview.world.graphic.TextureUnitState state)
	{
		long stateParamValue = (state == null ? 0L : state.nativeObject.pointer);
		addTextureUnitState_CTextureUnitState(this.nativeObject.pointer, stateParamValue);
	}
	native private void insertTextureUnitState_CTextureUnitState_ev_uint32_RecompileMethod(long pNativeObject, long state, long toWhere, int recompile);
	/**
	 * 插入纹理单元
	 * @param state 纹理单元
	 * @param toWhere 索引
	 * @param recompile 是否重新编译
	 */
	public void insertTextureUnitState(com.earthview.world.graphic.TextureUnitState state, long toWhere, com.earthview.world.graphic.RecompileMethod recompile)
	{
		long stateParamValue = (state == null ? 0L : state.nativeObject.pointer);
		long toWhereParamValue = toWhere;
		int recompileParamValue = recompile.getValue();
		insertTextureUnitState_CTextureUnitState_ev_uint32_RecompileMethod(this.nativeObject.pointer, stateParamValue, toWhereParamValue, recompileParamValue);
	}
	native private void insertTextureUnitState_CTextureUnitState_ev_uint32(long pNativeObject, long state, long toWhere);
	public void insertTextureUnitState(com.earthview.world.graphic.TextureUnitState state, long toWhere)
	{
		long stateParamValue = (state == null ? 0L : state.nativeObject.pointer);
		long toWhereParamValue = toWhere;
		insertTextureUnitState_CTextureUnitState_ev_uint32(this.nativeObject.pointer, stateParamValue, toWhereParamValue);
	}
	native private long getTextureUnitState_ev_uint16(long pNativeObject, int index);
	/**
	 * 获取纹理单元
	 */
	public com.earthview.world.graphic.TextureUnitState getTextureUnitState(int index)
	{
		int indexParamValue = index;
		long returnValue = getTextureUnitState_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
		}
		return __returnValue;
	}
	native private long getTextureUnitState_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.TextureUnitState getTextureUnitState(String name)
	{
		String nameParamValue = name;
		long returnValue = getTextureUnitState_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
		}
		return __returnValue;
	}
	native private int getTextureUnitStateIndex_CTextureUnitState(long pNativeObject, long state);
	/**
	 * 获取纹理单元的序号
	 */
	public int getTextureUnitStateIndex(com.earthview.world.graphic.TextureUnitState state)
	{
		long stateParamValue = (state == null ? 0L : state.nativeObject.pointer);
		int returnValue = getTextureUnitStateIndex_CTextureUnitState(this.nativeObject.pointer, stateParamValue);
		return returnValue;
	}
	////typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CPass::TextureUnitStates> EarthView::World::Graphic::CPass::TextureUnitStateIterator;
	public static class TextureUnitStateIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPass::TextureUnitStateIterator", new TextureUnitStateIteratorClassFactory());
		}

		public TextureUnitStateIterator(com.earthview.world.graphic.Pass.TextureUnitStates vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("TextureUnitStateIterator", list);
		}

		public TextureUnitStateIterator(com.earthview.world.graphic.Pass.TextureUnitStateIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("TextureUnitStateIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
			}
			return __returnValue;
		}
		public TextureUnitStateIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextureUnitStateIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TextureUnitStateIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextureUnitStateIterator obj = null;
 			if(baseObj instanceof TextureUnitStateIterator)
			{
				obj = (TextureUnitStateIterator)baseObj;
			} else {
				obj = new TextureUnitStateIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TextureUnitStateIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextureUnitStateIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextureUnitStateIterator emptyInstance = new TextureUnitStateIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ConstTextureUnitStateIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator", new ConstTextureUnitStateIteratorClassFactory());
		}

		public ConstTextureUnitStateIterator(com.earthview.world.graphic.Pass.TextureUnitStates vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("ConstTextureUnitStateIterator", list);
		}

		public ConstTextureUnitStateIterator(com.earthview.world.graphic.Pass.ConstTextureUnitStateIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("ConstTextureUnitStateIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
			}
			return __returnValue;
		}
		public ConstTextureUnitStateIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ConstTextureUnitStateIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ConstTextureUnitStateIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ConstTextureUnitStateIterator obj = null;
 			if(baseObj instanceof ConstTextureUnitStateIterator)
			{
				obj = (ConstTextureUnitStateIterator)baseObj;
			} else {
				obj = new ConstTextureUnitStateIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ConstTextureUnitStateIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ConstTextureUnitStateIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ConstTextureUnitStateIterator emptyInstance = new ConstTextureUnitStateIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getTextureUnitStateIterator_void(long pNativeObject);
	/**
	 * 获取纹理单元的迭代器
	 */
	public com.earthview.world.graphic.Pass.TextureUnitStateIterator getTextureUnitStateIterator()
	{
		long returnValue = getTextureUnitStateIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Pass.TextureUnitStateIterator __returnValue = new com.earthview.world.graphic.Pass.TextureUnitStateIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TextureUnitStateIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass.TextureUnitStateIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TextureUnitStateIterator");
		}
		return __returnValue;
	}
	native private void removeTextureUnitState_ev_uint16(long pNativeObject, int index);
	/**
	 * 移除纹理单元
	 */
	public void removeTextureUnitState(int index)
	{
		int indexParamValue = index;
		removeTextureUnitState_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeTextureUnitState_ev_uint16_RecompileMethod(long pNativeObject, int index, int recompile);
	public void removeTextureUnitState(int index, com.earthview.world.graphic.RecompileMethod recompile)
	{
		int indexParamValue = index;
		int recompileParamValue = recompile.getValue();
		removeTextureUnitState_ev_uint16_RecompileMethod(this.nativeObject.pointer, indexParamValue, recompileParamValue);
	}
	native private void removeAllTextureUnitStates_void(long pNativeObject);
	/**
	 * 移除所有纹理单元
	 */
	public void removeAllTextureUnitStates()
	{
		removeAllTextureUnitStates_void(this.nativeObject.pointer);
	}
	native private int getNumTextureUnitStates_void(long pNativeObject);
	/**
	 * 获得纹理单元的数量
	 */
	public int getNumTextureUnitStates()
	{
		int returnValue = getNumTextureUnitStates_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSceneBlending_SceneBlendType(long pNativeObject, int sbt);
	/**
	 * 设置场景混合方式
	 */
	public void setSceneBlending(com.earthview.world.graphic.SceneBlendType sbt)
	{
		int sbtParamValue = sbt.getValue();
		setSceneBlending_SceneBlendType(this.nativeObject.pointer, sbtParamValue);
	}
	native private void setSeparateSceneBlending_SceneBlendType_SceneBlendType(long pNativeObject, int sbt, int sbta);
	/**
	 * 为RGB通道和Alpha通道分别设置场景混合方式
	 */
	public void setSeparateSceneBlending(com.earthview.world.graphic.SceneBlendType sbt, com.earthview.world.graphic.SceneBlendType sbta)
	{
		int sbtParamValue = sbt.getValue();
		int sbtaParamValue = sbta.getValue();
		setSeparateSceneBlending_SceneBlendType_SceneBlendType(this.nativeObject.pointer, sbtParamValue, sbtaParamValue);
	}
	native private void setSceneBlending_SceneBlendFactor_SceneBlendFactor(long pNativeObject, int sourceFactor, int destFactor);
	/**
	 * 设置场景混合方式
	 */
	public void setSceneBlending(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		setSceneBlending_SceneBlendFactor_SceneBlendFactor(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue);
	}
	native private void setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(long pNativeObject, int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha);
	/**
	 * 为RGB通道和Alpha通道分别设置场景混合方式
	 */
	public void setSeparateSceneBlending(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor, com.earthview.world.graphic.SceneBlendFactor sourceFactorAlpha, com.earthview.world.graphic.SceneBlendFactor destFactorAlpha)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		int sourceFactorAlphaParamValue = sourceFactorAlpha.getValue();
		int destFactorAlphaParamValue = destFactorAlpha.getValue();
		setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue);
	}
	native private boolean hasSeparateSceneBlending_void(long pNativeObject);
	/**
	 * 询问RGB通道和Alpha通道是否使用不同的场景混合方式
	 */
	public boolean hasSeparateSceneBlending()
	{
		boolean returnValue = hasSeparateSceneBlending_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSourceBlendFactor_void(long pNativeObject);
	/**
	 * 获得RGB通道的源混合因子
	 */
	public com.earthview.world.graphic.SceneBlendFactor getSourceBlendFactor()
	{
		int returnValue = getSourceBlendFactor_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.SceneBlendFactor.toEnum(returnValue);
	}
	native private int getDestBlendFactor_void(long pNativeObject);
	/**
	 * 获得RGB通道的目标混合因子
	 */
	public com.earthview.world.graphic.SceneBlendFactor getDestBlendFactor()
	{
		int returnValue = getDestBlendFactor_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.SceneBlendFactor.toEnum(returnValue);
	}
	native private int getSourceBlendFactorAlpha_void(long pNativeObject);
	/**
	 * 获得Aplha通道的源混合因子
	 */
	public com.earthview.world.graphic.SceneBlendFactor getSourceBlendFactorAlpha()
	{
		int returnValue = getSourceBlendFactorAlpha_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.SceneBlendFactor.toEnum(returnValue);
	}
	native private int getDestBlendFactorAlpha_void(long pNativeObject);
	/**
	 * 获得Aplha通道的目标混合因子
	 */
	public com.earthview.world.graphic.SceneBlendFactor getDestBlendFactorAlpha()
	{
		int returnValue = getDestBlendFactorAlpha_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.SceneBlendFactor.toEnum(returnValue);
	}
	native private void setSceneBlendingOperation_SceneBlendOperation(long pNativeObject, int op);
	/**
	 * 设置场景混合操作
	 */
	public void setSceneBlendingOperation(com.earthview.world.graphic.SceneBlendOperation op)
	{
		int opParamValue = op.getValue();
		setSceneBlendingOperation_SceneBlendOperation(this.nativeObject.pointer, opParamValue);
	}
	native private void setSeparateSceneBlendingOperation_SceneBlendOperation_SceneBlendOperation(long pNativeObject, int op, int alphaOp);
	/**
	 * 为RGB通道和Alpha通道分别设置场景混合操作
	 */
	public void setSeparateSceneBlendingOperation(com.earthview.world.graphic.SceneBlendOperation op, com.earthview.world.graphic.SceneBlendOperation alphaOp)
	{
		int opParamValue = op.getValue();
		int alphaOpParamValue = alphaOp.getValue();
		setSeparateSceneBlendingOperation_SceneBlendOperation_SceneBlendOperation(this.nativeObject.pointer, opParamValue, alphaOpParamValue);
	}
	native private boolean hasSeparateSceneBlendingOperations_void(long pNativeObject);
	/**
	 * 询问RGB通道和Alpha通道是否使用不同的场景混合操作
	 */
	public boolean hasSeparateSceneBlendingOperations()
	{
		boolean returnValue = hasSeparateSceneBlendingOperations_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSceneBlendingOperation_void(long pNativeObject);
	/**
	 * 获得RGB通道的混合操作
	 */
	public com.earthview.world.graphic.SceneBlendOperation getSceneBlendingOperation()
	{
		int returnValue = getSceneBlendingOperation_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.SceneBlendOperation.toEnum(returnValue);
	}
	native private int getSceneBlendingOperationAlpha_void(long pNativeObject);
	/**
	 * 获得Alpha通道的混合操作
	 */
	public com.earthview.world.graphic.SceneBlendOperation getSceneBlendingOperationAlpha()
	{
		int returnValue = getSceneBlendingOperationAlpha_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.SceneBlendOperation.toEnum(returnValue);
	}
	native private boolean isTransparent_void(long pNativeObject);
	/**
	 * 是否为透明通路
	 */
	public boolean isTransparent()
	{
		boolean returnValue = isTransparent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDepthCheckEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置深度测试是否启用
	 */
	public void setDepthCheckEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDepthCheckEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getDepthCheckEnabled_void(long pNativeObject);
	/**
	 * 获取深度测试是否启用
	 */
	public boolean getDepthCheckEnabled()
	{
		boolean returnValue = getDepthCheckEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDepthWriteEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置深度写入是否启用
	 */
	public void setDepthWriteEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDepthWriteEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getDepthWriteEnabled_void(long pNativeObject);
	/**
	 * 获取深度写入是否启用
	 */
	public boolean getDepthWriteEnabled()
	{
		boolean returnValue = getDepthWriteEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDepthFunction_CompareFunction(long pNativeObject, int func);
	/**
	 * 设置深度比较函数
	 */
	public void setDepthFunction(com.earthview.world.graphic.CompareFunction func)
	{
		int funcParamValue = func.getValue();
		setDepthFunction_CompareFunction(this.nativeObject.pointer, funcParamValue);
	}
	native private int getDepthFunction_void(long pNativeObject);
	/**
	 * 获得深度比较函数
	 */
	public com.earthview.world.graphic.CompareFunction getDepthFunction()
	{
		int returnValue = getDepthFunction_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.CompareFunction.toEnum(returnValue);
	}
	native private void setColourWriteEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置颜色写入是否启用
	 */
	public void setColourWriteEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setColourWriteEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getColourWriteEnabled_void(long pNativeObject);
	/**
	 * 获取颜色写入是否启用
	 */
	public boolean getColourWriteEnabled()
	{
		boolean returnValue = getColourWriteEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCullingMode_CullingMode(long pNativeObject, int mode);
	/**
	 * 设置剔除方式
	 */
	public void setCullingMode(com.earthview.world.graphic.CullingMode mode)
	{
		int modeParamValue = mode.getValue();
		setCullingMode_CullingMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getCullingMode_void(long pNativeObject);
	/**
	 * 获取剔除方式
	 */
	public com.earthview.world.graphic.CullingMode getCullingMode()
	{
		int returnValue = getCullingMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.CullingMode.toEnum(returnValue);
	}
	native private void setManualCullingMode_ManualCullingMode(long pNativeObject, int mode);
	/**
	 * 设置手动剔除方式(GPU)
	 */
	public void setManualCullingMode(com.earthview.world.graphic.ManualCullingMode mode)
	{
		int modeParamValue = mode.getValue();
		setManualCullingMode_ManualCullingMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getManualCullingMode_void(long pNativeObject);
	/**
	 * 获取手动剔除方式(GPU)
	 */
	public com.earthview.world.graphic.ManualCullingMode getManualCullingMode()
	{
		int returnValue = getManualCullingMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.ManualCullingMode.toEnum(returnValue);
	}
	native private void setLightingEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否启用光照
	 */
	public void setLightingEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setLightingEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getLightingEnabled_void(long pNativeObject);
	/**
	 * 获取是否启用光照
	 */
	public boolean getLightingEnabled()
	{
		boolean returnValue = getLightingEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxSimultaneousLights_ev_uint16(long pNativeObject, int maxLights);
	public void setMaxSimultaneousLights(int maxLights)
	{
		int maxLightsParamValue = maxLights;
		setMaxSimultaneousLights_ev_uint16(this.nativeObject.pointer, maxLightsParamValue);
	}
	native private int getMaxSimultaneousLights_void(long pNativeObject);
	public int getMaxSimultaneousLights()
	{
		int returnValue = getMaxSimultaneousLights_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setStartLight_ev_uint16(long pNativeObject, int startLight);
	/**
	 * 设置光照开始的序号
	 */
	public void setStartLight(int startLight)
	{
		int startLightParamValue = startLight;
		setStartLight_ev_uint16(this.nativeObject.pointer, startLightParamValue);
	}
	native private int getStartLight_void(long pNativeObject);
	/**
	 * 获取光照开始的序号
	 */
	public int getStartLight()
	{
		int returnValue = getStartLight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLightMask_ev_uint32(long pNativeObject, long mask);
	public void setLightMask(long mask)
	{
		long maskParamValue = mask;
		setLightMask_ev_uint32(this.nativeObject.pointer, maskParamValue);
	}
	native private long getLightMask_void(long pNativeObject);
	public long getLightMask()
	{
		long returnValue = getLightMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShadingMode_ShadeOptions(long pNativeObject, int mode);
	/**
	 * 设置光照模型
	 */
	public void setShadingMode(com.earthview.world.graphic.ShadeOptions mode)
	{
		int modeParamValue = mode.getValue();
		setShadingMode_ShadeOptions(this.nativeObject.pointer, modeParamValue);
	}
	native private int getShadingMode_void(long pNativeObject);
	/**
	 * 获取光照模型
	 */
	public com.earthview.world.graphic.ShadeOptions getShadingMode()
	{
		int returnValue = getShadingMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.ShadeOptions.toEnum(returnValue);
	}
	native private void setPolygonMode_PolygonMode(long pNativeObject, int mode);
	/**
	 * 设置三角面渲染方式
	 */
	public void setPolygonMode(com.earthview.world.graphic.PolygonMode mode)
	{
		int modeParamValue = mode.getValue();
		setPolygonMode_PolygonMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getPolygonMode_void(long pNativeObject);
	/**
	 * 获取三角面渲染方式
	 */
	public com.earthview.world.graphic.PolygonMode getPolygonMode()
	{
		int returnValue = getPolygonMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.PolygonMode.toEnum(returnValue);
	}
	protected  void setPolygonModeOverrideable_ev_bool_callback(boolean val)
	{
		boolean valParamValue = val;
		setPolygonModeOverrideable(valParamValue);
	}

	native private void setPolygonModeOverrideable_ev_bool(long pNativeObject, boolean val);
	public void setPolygonModeOverrideable(boolean val)
	{
		boolean valParamValue = val;
		setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private void setPolygonModeOverrideable_ev_bool_NoVirtual(long pNativeObject, boolean val);
	protected void setPolygonModeOverrideable_NoVirtual(boolean val)
	{
		boolean valParamValue = val;
		setPolygonModeOverrideable_ev_bool_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  boolean getPolygonModeOverrideable_void_callback()
	{
		boolean returnValue = getPolygonModeOverrideable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getPolygonModeOverrideable_void(long pNativeObject);
	public boolean getPolygonModeOverrideable()
	{
		boolean returnValue = getPolygonModeOverrideable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getPolygonModeOverrideable_void_NoVirtual(long pNativeObject);
	protected boolean getPolygonModeOverrideable_NoVirtual()
	{
		boolean returnValue = getPolygonModeOverrideable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setFog_ev_bool_FogMode_CColourValue_Real_Real_Real(long pNativeObject, boolean overrideScene, int mode, long colour, double expDensity, double linearStart, double linearEnd);
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart, double linearEnd)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		double linearEndParamValue = linearEnd;
		setFog_ev_bool_FogMode_CColourValue_Real_Real_Real(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue, linearEndParamValue);
	}
	native private void setFog_ev_bool_FogMode_CColourValue_Real_Real(long pNativeObject, boolean overrideScene, int mode, long colour, double expDensity, double linearStart);
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		setFog_ev_bool_FogMode_CColourValue_Real_Real(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue);
	}
	native private void setFog_ev_bool_FogMode_CColourValue_Real(long pNativeObject, boolean overrideScene, int mode, long colour, double expDensity);
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		setFog_ev_bool_FogMode_CColourValue_Real(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue, expDensityParamValue);
	}
	native private void setFog_ev_bool_FogMode_CColourValue(long pNativeObject, boolean overrideScene, int mode, long colour);
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		setFog_ev_bool_FogMode_CColourValue(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue);
	}
	native private void setFog_ev_bool_FogMode(long pNativeObject, boolean overrideScene, int mode);
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		setFog_ev_bool_FogMode(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue);
	}
	native private void setFog_ev_bool(long pNativeObject, boolean overrideScene);
	public void setFog(boolean overrideScene)
	{
		boolean overrideSceneParamValue = overrideScene;
		setFog_ev_bool(this.nativeObject.pointer, overrideSceneParamValue);
	}
	native private boolean getFogOverride_void(long pNativeObject);
	public boolean getFogOverride()
	{
		boolean returnValue = getFogOverride_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFogMode_void(long pNativeObject);
	public com.earthview.world.graphic.FogMode getFogMode()
	{
		int returnValue = getFogMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.FogMode.toEnum(returnValue);
	}
	native private long getFogColour_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue getFogColour()
	{
		long returnValue = getFogColour_void(this.nativeObject.pointer);
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
	native private double getFogStart_void(long pNativeObject);
	public double getFogStart()
	{
		double returnValue = getFogStart_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFogEnd_void(long pNativeObject);
	public double getFogEnd()
	{
		double returnValue = getFogEnd_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFogDensity_void(long pNativeObject);
	public double getFogDensity()
	{
		double returnValue = getFogDensity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDepthBias_ev_real32_ev_real32(long pNativeObject, float constantBias, float slopeScaleBias);
	/**
	 * 设置深度偏移值
	 * @param  
	 * @param  
	 */
	public void setDepthBias(float constantBias, float slopeScaleBias)
	{
		float constantBiasParamValue = constantBias;
		float slopeScaleBiasParamValue = slopeScaleBias;
		setDepthBias_ev_real32_ev_real32(this.nativeObject.pointer, constantBiasParamValue, slopeScaleBiasParamValue);
	}
	native private void setDepthBias_ev_real32(long pNativeObject, float constantBias);
	public void setDepthBias(float constantBias)
	{
		float constantBiasParamValue = constantBias;
		setDepthBias_ev_real32(this.nativeObject.pointer, constantBiasParamValue);
	}
	native private float getDepthBiasConstant_void(long pNativeObject);
	/**
	 * 获取深度偏移常量
	 */
	public float getDepthBiasConstant()
	{
		float returnValue = getDepthBiasConstant_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getDepthBiasSlopeScale_void(long pNativeObject);
	/**
	 * 获取深度偏移倾斜值
	 */
	public float getDepthBiasSlopeScale()
	{
		float returnValue = getDepthBiasSlopeScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIterationDepthBias_ev_real32(long pNativeObject, float biasPerIteration);
	public void setIterationDepthBias(float biasPerIteration)
	{
		float biasPerIterationParamValue = biasPerIteration;
		setIterationDepthBias_ev_real32(this.nativeObject.pointer, biasPerIterationParamValue);
	}
	native private float getIterationDepthBias_void(long pNativeObject);
	public float getIterationDepthBias()
	{
		float returnValue = getIterationDepthBias_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool(long pNativeObject, int func, short value, boolean alphaToCoverageEnabled);
	/**
	 * 设置Alpha通道拒绝参数
	 */
	public void setAlphaRejectSettings(com.earthview.world.graphic.CompareFunction func, short value, boolean alphaToCoverageEnabled)
	{
		int funcParamValue = func.getValue();
		short valueParamValue = value;
		boolean alphaToCoverageEnabledParamValue = alphaToCoverageEnabled;
		setAlphaRejectSettings_CompareFunction_ev_uchar_ev_bool(this.nativeObject.pointer, funcParamValue, valueParamValue, alphaToCoverageEnabledParamValue);
	}
	native private void setAlphaRejectSettings_CompareFunction_ev_uchar(long pNativeObject, int func, short value);
	public void setAlphaRejectSettings(com.earthview.world.graphic.CompareFunction func, short value)
	{
		int funcParamValue = func.getValue();
		short valueParamValue = value;
		setAlphaRejectSettings_CompareFunction_ev_uchar(this.nativeObject.pointer, funcParamValue, valueParamValue);
	}
	native private void setAlphaRejectFunction_CompareFunction(long pNativeObject, int func);
	public void setAlphaRejectFunction(com.earthview.world.graphic.CompareFunction func)
	{
		int funcParamValue = func.getValue();
		setAlphaRejectFunction_CompareFunction(this.nativeObject.pointer, funcParamValue);
	}
	native private void setAlphaRejectValue_ev_uchar(long pNativeObject, short val);
	public void setAlphaRejectValue(short val)
	{
		short valParamValue = val;
		setAlphaRejectValue_ev_uchar(this.nativeObject.pointer, valParamValue);
	}
	native private int getAlphaRejectFunction_void(long pNativeObject);
	/**
	 * 获取Alpha通道拒绝时比较函数
	 */
	public com.earthview.world.graphic.CompareFunction getAlphaRejectFunction()
	{
		int returnValue = getAlphaRejectFunction_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.CompareFunction.toEnum(returnValue);
	}
	native private short getAlphaRejectValue_void(long pNativeObject);
	/**
	 * 获取Alpha通道拒绝时的临界值
	 */
	public short getAlphaRejectValue()
	{
		short returnValue = getAlphaRejectValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAlphaToCoverageEnabled_ev_bool(long pNativeObject, boolean enabled);
	public void setAlphaToCoverageEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setAlphaToCoverageEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean isAlphaToCoverageEnabled_void(long pNativeObject);
	public boolean isAlphaToCoverageEnabled()
	{
		boolean returnValue = isAlphaToCoverageEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTransparentSortingEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否启用透明通路排序如果不启用，则此材质的深度排序将禁用
	 */
	public void setTransparentSortingEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setTransparentSortingEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getTransparentSortingEnabled_void(long pNativeObject);
	/**
	 * 获取是否启用透明通路排序				
	 */
	public boolean getTransparentSortingEnabled()
	{
		boolean returnValue = getTransparentSortingEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTransparentSortingForced_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否强制启用透明通路排序如果启用，则不论深度写入/测试是否开启，都将强制排序
	 */
	public void setTransparentSortingForced(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setTransparentSortingForced_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getTransparentSortingForced_void(long pNativeObject);
	/**
	 * 获取是否强制启用透明通路排序				
	 */
	public boolean getTransparentSortingForced()
	{
		boolean returnValue = getTransparentSortingForced_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIteratePerLight_ev_bool_ev_bool_LightTypes(long pNativeObject, boolean enabled, boolean onlyForOneLightType, int lightType);
	/**
	 * 设置逐光源迭代			默认渲染流程是所有光源一起作用于渲染对象若启用逐光源迭代，则每个/每几个分别作用于渲染对象,迭代光源的个数由setLightCountPerIteration函数进行设置
	 * @param enabled 
	 * @param onlyForOneLightType 是否只为某种类型的光源启用迭代
	 * @param lightType 光源类型
	 */
	public void setIteratePerLight(boolean enabled, boolean onlyForOneLightType, com.earthview.world.graphic.Light.LightTypes lightType)
	{
		boolean enabledParamValue = enabled;
		boolean onlyForOneLightTypeParamValue = onlyForOneLightType;
		int lightTypeParamValue = lightType.getValue();
		setIteratePerLight_ev_bool_ev_bool_LightTypes(this.nativeObject.pointer, enabledParamValue, onlyForOneLightTypeParamValue, lightTypeParamValue);
	}
	native private void setIteratePerLight_ev_bool_ev_bool(long pNativeObject, boolean enabled, boolean onlyForOneLightType);
	public void setIteratePerLight(boolean enabled, boolean onlyForOneLightType)
	{
		boolean enabledParamValue = enabled;
		boolean onlyForOneLightTypeParamValue = onlyForOneLightType;
		setIteratePerLight_ev_bool_ev_bool(this.nativeObject.pointer, enabledParamValue, onlyForOneLightTypeParamValue);
	}
	native private void setIteratePerLight_ev_bool(long pNativeObject, boolean enabled);
	public void setIteratePerLight(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setIteratePerLight_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getIteratePerLight_void(long pNativeObject);
	/**
	 * 获取光源迭代是否启用
	 */
	public boolean getIteratePerLight()
	{
		boolean returnValue = getIteratePerLight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getRunOnlyForOneLightType_void(long pNativeObject);
	/**
	 * 获取光源迭代是否只针对特定类型的光源
	 */
	public boolean getRunOnlyForOneLightType()
	{
		boolean returnValue = getRunOnlyForOneLightType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getOnlyLightType_void(long pNativeObject);
	/**
	 * 获取光源迭代针对的特定光源的类型
	 */
	public com.earthview.world.graphic.Light.LightTypes getOnlyLightType()
	{
		int returnValue = getOnlyLightType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.Light.LightTypes.toEnum(returnValue);
	}
	native private void setLightCountPerIteration_ev_uint16(long pNativeObject, int c);
	/**
	 * 设置迭代光源的个数
	 */
	public void setLightCountPerIteration(int c)
	{
		int cParamValue = c;
		setLightCountPerIteration_ev_uint16(this.nativeObject.pointer, cParamValue);
	}
	native private int getLightCountPerIteration_void(long pNativeObject);
	/**
	 * 获取迭代光源的个数
	 */
	public int getLightCountPerIteration()
	{
		int returnValue = getLightCountPerIteration_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getParent_void(long pNativeObject);
	/**
	 * 获取所属的技术
	 */
	public com.earthview.world.graphic.Technique getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
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
	native private String getResourceGroup_void(long pNativeObject);
	/**
	 * 获取所属材质的资源组名
	 */
	public String getResourceGroup()
	{
		String returnValue = getResourceGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVertexProgram_EVString_ev_bool_RecompileMethod(long pNativeObject, String name, boolean resetParams, int recompile);
	/**
	 * 设置顶点GPU程序
	 * @param name GPU程序名称
	 * @param resetParams 是否重置GPU参数
	 * @param recompile 是否重新编译
	 * @param gpuPtr GPU程序
	 */
	public void setVertexProgram(String name, boolean resetParams, com.earthview.world.graphic.RecompileMethod recompile)
	{
		String nameParamValue = name;
		boolean resetParamsParamValue = resetParams;
		int recompileParamValue = recompile.getValue();
		setVertexProgram_EVString_ev_bool_RecompileMethod(this.nativeObject.pointer, nameParamValue, resetParamsParamValue, recompileParamValue);
	}
	native private void setVertexProgram_CGpuProgramPtr_RecompileMethod(long pNativeObject, long gpuPtr, int recompile);
	public void setVertexProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr, com.earthview.world.graphic.RecompileMethod recompile)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		int recompileParamValue = recompile.getValue();
		setVertexProgram_CGpuProgramPtr_RecompileMethod(this.nativeObject.pointer, gpuPtrParamValue, recompileParamValue);
	}
	native private void setVertexProgram_EVString_ev_bool(long pNativeObject, String name, boolean resetParams);
	public void setVertexProgram(String name, boolean resetParams)
	{
		String nameParamValue = name;
		boolean resetParamsParamValue = resetParams;
		setVertexProgram_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, resetParamsParamValue);
	}
	native private void setVertexProgram_EVString(long pNativeObject, String name);
	public void setVertexProgram(String name)
	{
		String nameParamValue = name;
		setVertexProgram_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setVertexProgram_CGpuProgramPtr(long pNativeObject, long gpuPtr);
	public void setVertexProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		setVertexProgram_CGpuProgramPtr(this.nativeObject.pointer, gpuPtrParamValue);
	}
	native private void setVertexProgramParameters_GpuProgramParametersSharedPtr(long pNativeObject, long params);
	/**
	 * 设置顶点GPU程序使用的参数
	 */
	public void setVertexProgramParameters(com.earthview.world.graphic.GpuProgramParametersSharedPtr params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		setVertexProgramParameters_GpuProgramParametersSharedPtr(this.nativeObject.pointer, paramsParamValue);
	}
	native private String getVertexProgramName_void(long pNativeObject);
	/**
	 * 获得顶点GPU程序名称
	 */
	public String getVertexProgramName()
	{
		String returnValue = getVertexProgramName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getVertexProgramParameters_void(long pNativeObject);
	/**
	 * 获得顶点GPU程序使用的参数
	 */
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr getVertexProgramParameters()
	{
		long returnValue = getVertexProgramParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}
	native private long getVertexProgram_void(long pNativeObject);
	/**
	 * 获得顶点GPU程序
	 */
	public com.earthview.world.graphic.GpuProgramPtr getVertexProgram()
	{
		long returnValue = getVertexProgram_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private void setShadowCasterVertexProgram_EVString_RecompileMethod(long pNativeObject, String name, int recompile);
	/**
	 * 设置投射阴影的顶点GPU程序当场景使用纹理阴影时起作用
	 * @param name GPU程序名称
	 * @param gpuPtr GPU程序
	 * @param recompile 是否重新编译
	 */
	public void setShadowCasterVertexProgram(String name, com.earthview.world.graphic.RecompileMethod recompile)
	{
		String nameParamValue = name;
		int recompileParamValue = recompile.getValue();
		setShadowCasterVertexProgram_EVString_RecompileMethod(this.nativeObject.pointer, nameParamValue, recompileParamValue);
	}
	native private void setShadowCasterVertexProgram_CGpuProgramPtr_RecompileMethod(long pNativeObject, long gpuPtr, int recompile);
	public void setShadowCasterVertexProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr, com.earthview.world.graphic.RecompileMethod recompile)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		int recompileParamValue = recompile.getValue();
		setShadowCasterVertexProgram_CGpuProgramPtr_RecompileMethod(this.nativeObject.pointer, gpuPtrParamValue, recompileParamValue);
	}
	native private void setShadowCasterVertexProgram_EVString(long pNativeObject, String name);
	public void setShadowCasterVertexProgram(String name)
	{
		String nameParamValue = name;
		setShadowCasterVertexProgram_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setShadowCasterVertexProgram_CGpuProgramPtr(long pNativeObject, long gpuPtr);
	public void setShadowCasterVertexProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		setShadowCasterVertexProgram_CGpuProgramPtr(this.nativeObject.pointer, gpuPtrParamValue);
	}
	native private void setShadowCasterVertexProgramParameters_GpuProgramParametersSharedPtr(long pNativeObject, long params);
	/**
	 * 设置投射阴影的顶点GPU程序使用的参数				
	 */
	public void setShadowCasterVertexProgramParameters(com.earthview.world.graphic.GpuProgramParametersSharedPtr params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		setShadowCasterVertexProgramParameters_GpuProgramParametersSharedPtr(this.nativeObject.pointer, paramsParamValue);
	}
	native private String getShadowCasterVertexProgramName_void(long pNativeObject);
	/**
	 * 获取投射阴影的顶点GPU程序的名称				
	 */
	public String getShadowCasterVertexProgramName()
	{
		String returnValue = getShadowCasterVertexProgramName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getShadowCasterVertexProgramParameters_void(long pNativeObject);
	/**
	 * 获取投射阴影的顶点GPU程序使用的参数			
	 */
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr getShadowCasterVertexProgramParameters()
	{
		long returnValue = getShadowCasterVertexProgramParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}
	native private long getShadowCasterVertexProgram_void(long pNativeObject);
	/**
	 * 获取投射阴影的顶点GPU程序		
	 */
	public com.earthview.world.graphic.GpuProgramPtr getShadowCasterVertexProgram()
	{
		long returnValue = getShadowCasterVertexProgram_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private void setShadowCasterFragmentProgram_EVString_RecompileMethod(long pNativeObject, String name, int recompile);
	/**
	 * 设置投射阴影的片段GPU程序当场景使用纹理阴影时起作用
	 * @param name GPU程序名称
	 * @param gpuPtr GPU程序
	 * @param recompile 是否重新编译
	 */
	public void setShadowCasterFragmentProgram(String name, com.earthview.world.graphic.RecompileMethod recompile)
	{
		String nameParamValue = name;
		int recompileParamValue = recompile.getValue();
		setShadowCasterFragmentProgram_EVString_RecompileMethod(this.nativeObject.pointer, nameParamValue, recompileParamValue);
	}
	native private void setShadowCasterFragmentProgram_CGpuProgramPtr_RecompileMethod(long pNativeObject, long gpuPtr, int recompile);
	public void setShadowCasterFragmentProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr, com.earthview.world.graphic.RecompileMethod recompile)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		int recompileParamValue = recompile.getValue();
		setShadowCasterFragmentProgram_CGpuProgramPtr_RecompileMethod(this.nativeObject.pointer, gpuPtrParamValue, recompileParamValue);
	}
	native private void setShadowCasterFragmentProgram_EVString(long pNativeObject, String name);
	public void setShadowCasterFragmentProgram(String name)
	{
		String nameParamValue = name;
		setShadowCasterFragmentProgram_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setShadowCasterFragmentProgram_CGpuProgramPtr(long pNativeObject, long gpuPtr);
	public void setShadowCasterFragmentProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		setShadowCasterFragmentProgram_CGpuProgramPtr(this.nativeObject.pointer, gpuPtrParamValue);
	}
	native private void setShadowCasterFragmentProgramParameters_GpuProgramParametersSharedPtr(long pNativeObject, long params);
	/**
	 * 设置投射阴影的片段GPU程序使用的参数				
	 */
	public void setShadowCasterFragmentProgramParameters(com.earthview.world.graphic.GpuProgramParametersSharedPtr params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		setShadowCasterFragmentProgramParameters_GpuProgramParametersSharedPtr(this.nativeObject.pointer, paramsParamValue);
	}
	native private String getShadowCasterFragmentProgramName_void(long pNativeObject);
	/**
	 * 获取投射阴影的片段GPU程序的名称				
	 */
	public String getShadowCasterFragmentProgramName()
	{
		String returnValue = getShadowCasterFragmentProgramName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getShadowCasterFragmentProgramParameters_void(long pNativeObject);
	/**
	 * 获取投射阴影的片段GPU程序使用的参数				
	 */
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr getShadowCasterFragmentProgramParameters()
	{
		long returnValue = getShadowCasterFragmentProgramParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}
	native private long getShadowCasterFragmentProgram_void(long pNativeObject);
	/**
	 * 获取投射阴影的片段GPU程序		
	 */
	public com.earthview.world.graphic.GpuProgramPtr getShadowCasterFragmentProgram()
	{
		long returnValue = getShadowCasterFragmentProgram_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private void setShadowReceiverVertexProgram_EVString_RecompileMethod(long pNativeObject, String name, int recompile);
	/**
	 * 设置接收阴影的顶点GPU程序当场景使用纹理阴影时起作用
	 * @param name GPU程序名称
	 * @param gpuPtr GPU程序
	 * @param recompile 是否重新编译
	 */
	public void setShadowReceiverVertexProgram(String name, com.earthview.world.graphic.RecompileMethod recompile)
	{
		String nameParamValue = name;
		int recompileParamValue = recompile.getValue();
		setShadowReceiverVertexProgram_EVString_RecompileMethod(this.nativeObject.pointer, nameParamValue, recompileParamValue);
	}
	native private void setShadowReceiverVertexProgram_CGpuProgramPtr_RecompileMethod(long pNativeObject, long gpuPtr, int recompile);
	public void setShadowReceiverVertexProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr, com.earthview.world.graphic.RecompileMethod recompile)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		int recompileParamValue = recompile.getValue();
		setShadowReceiverVertexProgram_CGpuProgramPtr_RecompileMethod(this.nativeObject.pointer, gpuPtrParamValue, recompileParamValue);
	}
	native private void setShadowReceiverVertexProgram_EVString(long pNativeObject, String name);
	public void setShadowReceiverVertexProgram(String name)
	{
		String nameParamValue = name;
		setShadowReceiverVertexProgram_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setShadowReceiverVertexProgram_CGpuProgramPtr(long pNativeObject, long gpuPtr);
	public void setShadowReceiverVertexProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		setShadowReceiverVertexProgram_CGpuProgramPtr(this.nativeObject.pointer, gpuPtrParamValue);
	}
	native private void setShadowReceiverVertexProgramParameters_GpuProgramParametersSharedPtr(long pNativeObject, long params);
	/**
	 * 设置接收阴影的顶点GPU程序使用的参数				
	 * @param  
	 */
	public void setShadowReceiverVertexProgramParameters(com.earthview.world.graphic.GpuProgramParametersSharedPtr params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		setShadowReceiverVertexProgramParameters_GpuProgramParametersSharedPtr(this.nativeObject.pointer, paramsParamValue);
	}
	native private void setShadowReceiverFragmentProgram_EVString_RecompileMethod(long pNativeObject, String name, int recompile);
	/**
	 * 设置接收阴影的片段GPU程序当场景使用纹理阴影时起作用
	 * @param name GPU程序名称
	 * @param gpuPtr GPU程序
	 * @param recompile 是否重新编译
	 */
	public void setShadowReceiverFragmentProgram(String name, com.earthview.world.graphic.RecompileMethod recompile)
	{
		String nameParamValue = name;
		int recompileParamValue = recompile.getValue();
		setShadowReceiverFragmentProgram_EVString_RecompileMethod(this.nativeObject.pointer, nameParamValue, recompileParamValue);
	}
	native private void setShadowReceiverFragmentProgram_CGpuProgramPtr_RecompileMethod(long pNativeObject, long gpuPtr, int recompile);
	public void setShadowReceiverFragmentProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr, com.earthview.world.graphic.RecompileMethod recompile)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		int recompileParamValue = recompile.getValue();
		setShadowReceiverFragmentProgram_CGpuProgramPtr_RecompileMethod(this.nativeObject.pointer, gpuPtrParamValue, recompileParamValue);
	}
	native private void setShadowReceiverFragmentProgram_EVString(long pNativeObject, String name);
	public void setShadowReceiverFragmentProgram(String name)
	{
		String nameParamValue = name;
		setShadowReceiverFragmentProgram_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setShadowReceiverFragmentProgram_CGpuProgramPtr(long pNativeObject, long gpuPtr);
	public void setShadowReceiverFragmentProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		setShadowReceiverFragmentProgram_CGpuProgramPtr(this.nativeObject.pointer, gpuPtrParamValue);
	}
	native private void setShadowReceiverFragmentProgramParameters_GpuProgramParametersSharedPtr(long pNativeObject, long params);
	/**
	 * 设置接收阴影的片段GPU程序使用的参数				
	 * @param  
	 */
	public void setShadowReceiverFragmentProgramParameters(com.earthview.world.graphic.GpuProgramParametersSharedPtr params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		setShadowReceiverFragmentProgramParameters_GpuProgramParametersSharedPtr(this.nativeObject.pointer, paramsParamValue);
	}
	native private String getShadowReceiverVertexProgramName_void(long pNativeObject);
	/**
	 * 获取接收阴影的顶点GPU程序的名称				
	 * @param  
	 */
	public String getShadowReceiverVertexProgramName()
	{
		String returnValue = getShadowReceiverVertexProgramName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getShadowReceiverVertexProgramParameters_void(long pNativeObject);
	/**
	 * 获取接收阴影的顶点GPU程序使用的参数				
	 * @param  
	 */
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr getShadowReceiverVertexProgramParameters()
	{
		long returnValue = getShadowReceiverVertexProgramParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}
	native private long getShadowReceiverVertexProgram_void(long pNativeObject);
	/**
	 * 获取接收阴影的顶点GPU程序		
	 * @param  
	 */
	public com.earthview.world.graphic.GpuProgramPtr getShadowReceiverVertexProgram()
	{
		long returnValue = getShadowReceiverVertexProgram_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private String getShadowReceiverFragmentProgramName_void(long pNativeObject);
	/**
	 * 获取接收阴影的片段GPU程序的名称			
	 * @param  
	 */
	public String getShadowReceiverFragmentProgramName()
	{
		String returnValue = getShadowReceiverFragmentProgramName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getShadowReceiverFragmentProgramParameters_void(long pNativeObject);
	/**
	 * 设置接收阴影的片段GPU程序使用的参数				
	 * @param  
	 */
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr getShadowReceiverFragmentProgramParameters()
	{
		long returnValue = getShadowReceiverFragmentProgramParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}
	native private long getShadowReceiverFragmentProgram_void(long pNativeObject);
	/**
	 * 获取接收阴影的片段GPU程序		
	 * @param  
	 */
	public com.earthview.world.graphic.GpuProgramPtr getShadowReceiverFragmentProgram()
	{
		long returnValue = getShadowReceiverFragmentProgram_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private void setFragmentProgram_EVString_ev_bool_RecompileMethod(long pNativeObject, String name, boolean resetParams, int recompile);
	/**
	 * 设置片段GPU程序
	 * @param name GPU程序名称
	 * @param resetParams 是否重置GPU参数
	 * @param gpuPtr GPU程序
	 * @param recompile 是否重新编译
	 */
	public void setFragmentProgram(String name, boolean resetParams, com.earthview.world.graphic.RecompileMethod recompile)
	{
		String nameParamValue = name;
		boolean resetParamsParamValue = resetParams;
		int recompileParamValue = recompile.getValue();
		setFragmentProgram_EVString_ev_bool_RecompileMethod(this.nativeObject.pointer, nameParamValue, resetParamsParamValue, recompileParamValue);
	}
	native private void setFragmentProgram_CGpuProgramPtr_RecompileMethod(long pNativeObject, long gpuPtr, int recompile);
	public void setFragmentProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr, com.earthview.world.graphic.RecompileMethod recompile)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		int recompileParamValue = recompile.getValue();
		setFragmentProgram_CGpuProgramPtr_RecompileMethod(this.nativeObject.pointer, gpuPtrParamValue, recompileParamValue);
	}
	native private void setFragmentProgram_EVString_ev_bool(long pNativeObject, String name, boolean resetParams);
	public void setFragmentProgram(String name, boolean resetParams)
	{
		String nameParamValue = name;
		boolean resetParamsParamValue = resetParams;
		setFragmentProgram_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, resetParamsParamValue);
	}
	native private void setFragmentProgram_EVString(long pNativeObject, String name);
	public void setFragmentProgram(String name)
	{
		String nameParamValue = name;
		setFragmentProgram_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setFragmentProgram_CGpuProgramPtr(long pNativeObject, long gpuPtr);
	public void setFragmentProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		setFragmentProgram_CGpuProgramPtr(this.nativeObject.pointer, gpuPtrParamValue);
	}
	native private void setFragmentProgramParameters_GpuProgramParametersSharedPtr(long pNativeObject, long params);
	/**
	 * 设置片段GPU程序使用的参数
	 * @param  
	 */
	public void setFragmentProgramParameters(com.earthview.world.graphic.GpuProgramParametersSharedPtr params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		setFragmentProgramParameters_GpuProgramParametersSharedPtr(this.nativeObject.pointer, paramsParamValue);
	}
	native private String getFragmentProgramName_void(long pNativeObject);
	/**
	 * 获取片段GPU程序的名称
	 * @param  
	 */
	public String getFragmentProgramName()
	{
		String returnValue = getFragmentProgramName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFragmentProgramParameters_void(long pNativeObject);
	/**
	 * 获取片段GPU程序使用的参数
	 * @param  
	 */
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr getFragmentProgramParameters()
	{
		long returnValue = getFragmentProgramParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}
	native private long getFragmentProgram_void(long pNativeObject);
	/**
	 * 获取片段GPU程序
	 * @param  
	 */
	public com.earthview.world.graphic.GpuProgramPtr getFragmentProgram()
	{
		long returnValue = getFragmentProgram_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private void setGeometryProgram_EVString_ev_bool_RecompileMethod(long pNativeObject, String name, boolean resetParams, int recompile);
	/**
	 * 设置几何GPU程序
	 * @param name GPU程序名称
	 * @param resetParams 是否重置GPU参数
	 * @param gpuPtr GPU程序
	 * @param recompile 是否重新编译
	 */
	public void setGeometryProgram(String name, boolean resetParams, com.earthview.world.graphic.RecompileMethod recompile)
	{
		String nameParamValue = name;
		boolean resetParamsParamValue = resetParams;
		int recompileParamValue = recompile.getValue();
		setGeometryProgram_EVString_ev_bool_RecompileMethod(this.nativeObject.pointer, nameParamValue, resetParamsParamValue, recompileParamValue);
	}
	native private void setGeometryProgram_CGpuProgramPtr_RecompileMethod(long pNativeObject, long gpuPtr, int recompile);
	public void setGeometryProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr, com.earthview.world.graphic.RecompileMethod recompile)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		int recompileParamValue = recompile.getValue();
		setGeometryProgram_CGpuProgramPtr_RecompileMethod(this.nativeObject.pointer, gpuPtrParamValue, recompileParamValue);
	}
	native private void setGeometryProgram_EVString_ev_bool(long pNativeObject, String name, boolean resetParams);
	public void setGeometryProgram(String name, boolean resetParams)
	{
		String nameParamValue = name;
		boolean resetParamsParamValue = resetParams;
		setGeometryProgram_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, resetParamsParamValue);
	}
	native private void setGeometryProgram_EVString(long pNativeObject, String name);
	public void setGeometryProgram(String name)
	{
		String nameParamValue = name;
		setGeometryProgram_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setGeometryProgram_CGpuProgramPtr(long pNativeObject, long gpuPtr);
	public void setGeometryProgram(com.earthview.world.graphic.GpuProgramPtr gpuPtr)
	{
		long gpuPtrParamValue = gpuPtr.nativeObject.pointer;
		setGeometryProgram_CGpuProgramPtr(this.nativeObject.pointer, gpuPtrParamValue);
	}
	native private void setGeometryProgramParameters_GpuProgramParametersSharedPtr(long pNativeObject, long params);
	/**
	 * 设置几何GPU程序使用的参数
	 * @param  
	 */
	public void setGeometryProgramParameters(com.earthview.world.graphic.GpuProgramParametersSharedPtr params)
	{
		long paramsParamValue = params.nativeObject.pointer;
		setGeometryProgramParameters_GpuProgramParametersSharedPtr(this.nativeObject.pointer, paramsParamValue);
	}
	native private String getGeometryProgramName_void(long pNativeObject);
	/**
	 * 获取几何GPU程序的名称
	 * @param  
	 */
	public String getGeometryProgramName()
	{
		String returnValue = getGeometryProgramName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getGeometryProgramParameters_void(long pNativeObject);
	/**
	 * 获取几何GPU程序使用的参数
	 * @param  
	 */
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr getGeometryProgramParameters()
	{
		long returnValue = getGeometryProgramParameters_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}
	native private long getGeometryProgram_void(long pNativeObject);
	/**
	 * 获取几何GPU程序
	 * @param  
	 */
	public com.earthview.world.graphic.GpuProgramPtr getGeometryProgram()
	{
		long returnValue = getGeometryProgram_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private long _split_ev_uint16(long pNativeObject, int numUnits);
	public com.earthview.world.graphic.Pass _split(int numUnits)
	{
		int numUnitsParamValue = numUnits;
		long returnValue = _split_ev_uint16(this.nativeObject.pointer, numUnitsParamValue);
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
	native private void _notifyIndex_ev_uint16(long pNativeObject, int index);
	public void _notifyIndex(int index)
	{
		int indexParamValue = index;
		_notifyIndex_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void _prepare_void(long pNativeObject);
	public void _prepare()
	{
		_prepare_void(this.nativeObject.pointer);
	}
	native private void _unprepare_void(long pNativeObject);
	public void _unprepare()
	{
		_unprepare_void(this.nativeObject.pointer);
	}
	native private void _load_void(long pNativeObject);
	public void _load()
	{
		_load_void(this.nativeObject.pointer);
	}
	native private void _unload_void(long pNativeObject);
	public void _unload()
	{
		_unload_void(this.nativeObject.pointer);
	}
	native private boolean isLoaded_void(long pNativeObject);
	//// Is this loaded?
	public boolean isLoaded()
	{
		boolean returnValue = isLoaded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHash_void(long pNativeObject);
	public long getHash()
	{
		long returnValue = getHash_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _dirtyHash_void(long pNativeObject);
	///// Mark the hash as dirty
	public void _dirtyHash()
	{
		_dirtyHash_void(this.nativeObject.pointer);
	}
	native private void _recalculateHash_void(long pNativeObject);
	public void _recalculateHash()
	{
		_recalculateHash_void(this.nativeObject.pointer);
	}
	native private void _notifyNeedsRecompile_void(long pNativeObject);
	/**
	 * 通报需要重新编译
	 * @param  
	 */
	public void _notifyNeedsRecompile()
	{
		_notifyNeedsRecompile_void(this.nativeObject.pointer);
	}
	native private void _updateAutoParams_CAutoParamDataSource_ev_uint16(long pNativeObject, long source, int variabilityMask);
	public void _updateAutoParams(com.earthview.world.graphic.AutoParamDataSource source, int variabilityMask)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		int variabilityMaskParamValue = variabilityMask;
		_updateAutoParams_CAutoParamDataSource_ev_uint16(this.nativeObject.pointer, sourceParamValue, variabilityMaskParamValue);
	}
	native private int _getTextureUnitWithContentTypeIndex_ContentType_ev_uint16(long pNativeObject, int contentType, int index);
	public int _getTextureUnitWithContentTypeIndex(com.earthview.world.graphic.TextureUnitState.ContentType contentType, int index)
	{
		int contentTypeParamValue = contentType.getValue();
		int indexParamValue = index;
		int returnValue = _getTextureUnitWithContentTypeIndex_ContentType_ev_uint16(this.nativeObject.pointer, contentTypeParamValue, indexParamValue);
		return returnValue;
	}
	native private void setTextureFiltering_TextureFilterOptions(long pNativeObject, int filterType);
	/**
	 * 为每个纹理单元设置纹理过滤方式
	 * @param  
	 */
	public void setTextureFiltering(com.earthview.world.graphic.TextureFilterOptions filterType)
	{
		int filterTypeParamValue = filterType.getValue();
		setTextureFiltering_TextureFilterOptions(this.nativeObject.pointer, filterTypeParamValue);
	}
	native private void setTextureAnisotropy_ev_uint32(long pNativeObject, long maxAniso);
	/**
	 * 为每个纹理单元设置纹理各向异性值
	 * @param  
	 */
	public void setTextureAnisotropy(long maxAniso)
	{
		long maxAnisoParamValue = maxAniso;
		setTextureAnisotropy_ev_uint32(this.nativeObject.pointer, maxAnisoParamValue);
	}
	native private void setNormaliseNormals_ev_bool(long pNativeObject, boolean normalise);
	/**
	 * 设置是否对法向量进行单位化
	 * @param  
	 */
	public void setNormaliseNormals(boolean normalise)
	{
		boolean normaliseParamValue = normalise;
		setNormaliseNormals_ev_bool(this.nativeObject.pointer, normaliseParamValue);
	}
	native private boolean getNormaliseNormals_void(long pNativeObject);
	/**
	 * 获取是否对法向量进行单位化
	 * @param  
	 */
	public boolean getNormaliseNormals()
	{
		boolean returnValue = getNormaliseNormals_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static long getDirtyHashList_void();
	public static com.earthview.world.graphic.Pass.PassSet getDirtyHashList()
	{
		long returnValue = getDirtyHashList_void();
		com.earthview.world.graphic.Pass.PassSet __returnValue = new com.earthview.world.graphic.Pass.PassSet(CreatedWhenConstruct.CWC_NotToCreate, "PassSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass.PassSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "PassSet");
		}
		return __returnValue;
	}
	native private static long getPassGraveyard_void();
	public static com.earthview.world.graphic.Pass.PassSet getPassGraveyard()
	{
		long returnValue = getPassGraveyard_void();
		com.earthview.world.graphic.Pass.PassSet __returnValue = new com.earthview.world.graphic.Pass.PassSet(CreatedWhenConstruct.CWC_NotToCreate, "PassSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass.PassSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "PassSet");
		}
		return __returnValue;
	}
	native private static void clearDirtyHashList_void();
	public static void clearDirtyHashList()
	{
		clearDirtyHashList_void();
	}
	native private static void processPendingPassUpdates_void();
	public static void processPendingPassUpdates()
	{
		processPendingPassUpdates_void();
	}
	native private void queueForDeletion_void(long pNativeObject);
	/**
	 * 加入到销毁队列
	 * @param  
	 */
	public void queueForDeletion()
	{
		queueForDeletion_void(this.nativeObject.pointer);
	}
	native private boolean isAmbientOnly_void(long pNativeObject);
	public boolean isAmbientOnly()
	{
		boolean returnValue = isAmbientOnly_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPassIterationCount_ev_size_t(long pNativeObject, long count);
	public void setPassIterationCount(long count)
	{
		long countParamValue = count;
		setPassIterationCount_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private long getPassIterationCount_void(long pNativeObject);
	public long getPassIterationCount()
	{
		long returnValue = getPassIterationCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean applyTextureAliases_CommonStringPairList_ev_bool(long pNativeObject, long aliasList, boolean apply);
	/**
	 * 应用纹理别名
	 * @param aliasList 纹理名称键值对
	 * @param apply true，应用；false，只匹配别名并不应用
	 * @return 假如匹配的纹理别名找到了，则返回true，否则返回false
	 */
	public boolean applyTextureAliases(com.earthview.world.core.CommonStringPairList aliasList, boolean apply)
	{
		long aliasListParamValue = aliasList.nativeObject.pointer;
		boolean applyParamValue = apply;
		boolean returnValue = applyTextureAliases_CommonStringPairList_ev_bool(this.nativeObject.pointer, aliasListParamValue, applyParamValue);
		return returnValue;
	}
	native private boolean applyTextureAliases_CommonStringPairList(long pNativeObject, long aliasList);
	public boolean applyTextureAliases(com.earthview.world.core.CommonStringPairList aliasList)
	{
		long aliasListParamValue = aliasList.nativeObject.pointer;
		boolean returnValue = applyTextureAliases_CommonStringPairList(this.nativeObject.pointer, aliasListParamValue);
		return returnValue;
	}
	native private void setLightScissoringEnabled_ev_bool(long pNativeObject, boolean enabled);
	public void setLightScissoringEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setLightScissoringEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getLightScissoringEnabled_void(long pNativeObject);
	public boolean getLightScissoringEnabled()
	{
		boolean returnValue = getLightScissoringEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLightClipPlanesEnabled_ev_bool(long pNativeObject, boolean enabled);
	public void setLightClipPlanesEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setLightClipPlanesEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getLightClipPlanesEnabled_void(long pNativeObject);
	public boolean getLightClipPlanesEnabled()
	{
		boolean returnValue = getLightClipPlanesEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIlluminationStage_IlluminationStage(long pNativeObject, int is);
	public void setIlluminationStage(com.earthview.world.graphic.IlluminationStage is)
	{
		int isParamValue = is.getValue();
		setIlluminationStage_IlluminationStage(this.nativeObject.pointer, isParamValue);
	}
	native private int getIlluminationStage_void(long pNativeObject);
	///// Get the manually assigned illumination stage, if any
	public com.earthview.world.graphic.IlluminationStage getIlluminationStage()
	{
		int returnValue = getIlluminationStage_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.IlluminationStage.toEnum(returnValue);
	}
	public enum BuiltinHashFunction implements INativeEnum<BuiltinHashFunction> {
		MIN_TEXTURE_CHANGE(BuiltinHashFunctionHelper.ENUM_VALUES[0]),
		MIN_GPU_PROGRAM_CHANGE(BuiltinHashFunctionHelper.ENUM_VALUES[1]);
		private int value;
		BuiltinHashFunction(int i) {
			this.value = i;
		}
		public BuiltinHashFunction getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final BuiltinHashFunction toEnum(int retval) {
			if(retval == MIN_TEXTURE_CHANGE.value){
				return MIN_TEXTURE_CHANGE;
			}
			else if(retval == MIN_GPU_PROGRAM_CHANGE.value){
				return MIN_GPU_PROGRAM_CHANGE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class BuiltinHashFunctionHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private static void setHashFunction_BuiltinHashFunction(int builtin);
	public static void setHashFunction(com.earthview.world.graphic.Pass.BuiltinHashFunction builtin)
	{
		int builtinParamValue = builtin.getValue();
		setHashFunction_BuiltinHashFunction(builtinParamValue);
	}
	native private static void setHashFunction_HashFunc(long hashFunc);
	public static void setHashFunction(com.earthview.world.graphic.Pass.HashFunc hashFunc)
	{
		long hashFuncParamValue = (hashFunc == null ? 0L : hashFunc.nativeObject.pointer);
		setHashFunction_HashFunc(hashFuncParamValue);
	}
	native private static long getHashFunction_void();
	public static com.earthview.world.graphic.Pass.HashFunc getHashFunction()
	{
		long returnValue = getHashFunction_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pass.HashFunc __returnValue = new com.earthview.world.graphic.Pass.HashFunc(CreatedWhenConstruct.CWC_NotToCreate, "HashFunc");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass.HashFunc)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "HashFunc");
		}
		return __returnValue;
	}
	native private static long getBuiltinHashFunction_BuiltinHashFunction(int builtin);
	public static com.earthview.world.graphic.Pass.HashFunc getBuiltinHashFunction(com.earthview.world.graphic.Pass.BuiltinHashFunction builtin)
	{
		int builtinParamValue = builtin.getValue();
		long returnValue = getBuiltinHashFunction_BuiltinHashFunction(builtinParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pass.HashFunc __returnValue = new com.earthview.world.graphic.Pass.HashFunc(CreatedWhenConstruct.CWC_NotToCreate, "HashFunc");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass.HashFunc)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "HashFunc");
		}
		return __returnValue;
	}
	native private long getUserObjectBindings_void(long pNativeObject);
	public com.earthview.world.graphic.UserObjectBindings getUserObjectBindings()
	{
		long returnValue = getUserObjectBindings_void(this.nativeObject.pointer);
		com.earthview.world.graphic.UserObjectBindings __returnValue = new com.earthview.world.graphic.UserObjectBindings(CreatedWhenConstruct.CWC_NotToCreate, "CUserObjectBindings");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.UserObjectBindings)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserObjectBindings");
		}
		return __returnValue;
	}
	public Pass(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Pass(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setPolygonModeOverrideable_ev_bool(long pNativeObject, String method);
	native protected void register_getPolygonModeOverrideable_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, "setPolygonModeOverrideable_ev_bool_callback");
			this.register_getPolygonModeOverrideable_void(this.nativeObject.pointer, "getPolygonModeOverrideable_void_callback");
		}
	}
	
	public static Pass fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Pass obj = null;
 		if(baseObj instanceof Pass)
		{
			obj = (Pass)baseObj;
		} else {
			obj = new Pass(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPass");
			obj.increaseCast();
		}

		return obj;
	}
}
