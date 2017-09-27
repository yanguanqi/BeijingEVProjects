package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 表示单一纹理单元的状态
 */
public class TextureUnitState extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTextureUnitState", new TextureUnitStateClassFactory());
	}

	/**
	 * 定义能够应用于纹理单元的纹理效果类型
	 */
	public enum TextureEffectType implements INativeEnum<TextureEffectType> {
		ET_ENVIRONMENT_MAP(TextureEffectTypeHelper.ENUM_VALUES[0]),
		ET_PROJECTIVE_TEXTURE(TextureEffectTypeHelper.ENUM_VALUES[1]),
		ET_UVSCROLL(TextureEffectTypeHelper.ENUM_VALUES[2]),
		ET_USCROLL(TextureEffectTypeHelper.ENUM_VALUES[3]),
		ET_VSCROLL(TextureEffectTypeHelper.ENUM_VALUES[4]),
		ET_ROTATE(TextureEffectTypeHelper.ENUM_VALUES[5]),
		ET_TRANSFORM(TextureEffectTypeHelper.ENUM_VALUES[6]);
		private int value;
		TextureEffectType(int i) {
			this.value = i;
		}
		public TextureEffectType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final TextureEffectType toEnum(int retval) {
			if(retval == ET_ENVIRONMENT_MAP.value){
				return ET_ENVIRONMENT_MAP;
			}
			else if(retval == ET_PROJECTIVE_TEXTURE.value){
				return ET_PROJECTIVE_TEXTURE;
			}
			else if(retval == ET_UVSCROLL.value){
				return ET_UVSCROLL;
			}
			else if(retval == ET_USCROLL.value){
				return ET_USCROLL;
			}
			else if(retval == ET_VSCROLL.value){
				return ET_VSCROLL;
			}
			else if(retval == ET_ROTATE.value){
				return ET_ROTATE;
			}
			else if(retval == ET_TRANSFORM.value){
				return ET_TRANSFORM;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TextureEffectTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 列举环境映射的特定类型
	 */
	public enum EnvMapType implements INativeEnum<EnvMapType> {
		ENV_PLANAR(EnvMapTypeHelper.ENUM_VALUES[0]),
		ENV_CURVED(EnvMapTypeHelper.ENUM_VALUES[1]),
		ENV_REFLECTION(EnvMapTypeHelper.ENUM_VALUES[2]),
		ENV_NORMAL(EnvMapTypeHelper.ENUM_VALUES[3]);
		private int value;
		EnvMapType(int i) {
			this.value = i;
		}
		public EnvMapType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EnvMapType toEnum(int retval) {
			if(retval == ENV_PLANAR.value){
				return ENV_PLANAR;
			}
			else if(retval == ENV_CURVED.value){
				return ENV_CURVED;
			}
			else if(retval == ENV_REFLECTION.value){
				return ENV_REFLECTION;
			}
			else if(retval == ENV_NORMAL.value){
				return ENV_NORMAL;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EnvMapTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 纹理变换类型，当处理程序变换时进行有效的列举
	 */
	public enum TextureTransformType implements INativeEnum<TextureTransformType> {
		TT_TRANSLATE_U(TextureTransformTypeHelper.ENUM_VALUES[0]),
		TT_TRANSLATE_V(TextureTransformTypeHelper.ENUM_VALUES[1]),
		TT_SCALE_U(TextureTransformTypeHelper.ENUM_VALUES[2]),
		TT_SCALE_V(TextureTransformTypeHelper.ENUM_VALUES[3]),
		TT_ROTATE(TextureTransformTypeHelper.ENUM_VALUES[4]);
		private int value;
		TextureTransformType(int i) {
			this.value = i;
		}
		public TextureTransformType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final TextureTransformType toEnum(int retval) {
			if(retval == TT_TRANSLATE_U.value){
				return TT_TRANSLATE_U;
			}
			else if(retval == TT_TRANSLATE_V.value){
				return TT_TRANSLATE_V;
			}
			else if(retval == TT_SCALE_U.value){
				return TT_SCALE_U;
			}
			else if(retval == TT_SCALE_V.value){
				return TT_SCALE_V;
			}
			else if(retval == TT_ROTATE.value){
				return TT_ROTATE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TextureTransformTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 纹理寻址方式，默认情况下是TAM_WRAP
	 */
	public enum TextureAddressingMode implements INativeEnum<TextureAddressingMode> {
		TAM_WRAP(TextureAddressingModeHelper.ENUM_VALUES[0]),
		TAM_MIRROR(TextureAddressingModeHelper.ENUM_VALUES[1]),
		TAM_CLAMP(TextureAddressingModeHelper.ENUM_VALUES[2]),
		TAM_BORDER(TextureAddressingModeHelper.ENUM_VALUES[3]);
		private int value;
		TextureAddressingMode(int i) {
			this.value = i;
		}
		public TextureAddressingMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final TextureAddressingMode toEnum(int retval) {
			if(retval == TAM_WRAP.value){
				return TAM_WRAP;
			}
			else if(retval == TAM_MIRROR.value){
				return TAM_MIRROR;
			}
			else if(retval == TAM_CLAMP.value){
				return TAM_CLAMP;
			}
			else if(retval == TAM_BORDER.value){
				return TAM_BORDER;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TextureAddressingModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 为每一个纹理坐标设置的纹理寻址方式
	 */
	public static final class Uvwaddressingmode extends RemoteNativeObject {
	
		public Uvwaddressingmode(InstancePointer pointer, boolean remote) {
			super(pointer, remote);
		}
		
		public Uvwaddressingmode(InstancePointer pInstance) {
			super(pInstance);
		}
		
		native private static long Create();
		public Uvwaddressingmode() {
			super(new InstancePointer(Create()),false);
		}
		native private int get_u_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState.TextureAddressingMode get_u()
		{
			int jniValue = get_u_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.TextureUnitState.TextureAddressingMode.toEnum(jniValue);
		}
		
		native private void set_u_TextureAddressingMode (long pNativeObject, int value);
		public void set_u(com.earthview.world.graphic.TextureUnitState.TextureAddressingMode u)
		{
			int uParamValue = u.getValue();
			
			set_u_TextureAddressingMode(this.nativeObject.pointer, uParamValue);
		}
		
		native private int get_v_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState.TextureAddressingMode get_v()
		{
			int jniValue = get_v_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.TextureUnitState.TextureAddressingMode.toEnum(jniValue);
		}
		
		native private void set_v_TextureAddressingMode (long pNativeObject, int value);
		public void set_v(com.earthview.world.graphic.TextureUnitState.TextureAddressingMode v)
		{
			int vParamValue = v.getValue();
			
			set_v_TextureAddressingMode(this.nativeObject.pointer, vParamValue);
		}
		
		native private int get_w_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState.TextureAddressingMode get_w()
		{
			int jniValue = get_w_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.TextureUnitState.TextureAddressingMode.toEnum(jniValue);
		}
		
		native private void set_w_TextureAddressingMode (long pNativeObject, int value);
		public void set_w(com.earthview.world.graphic.TextureUnitState.TextureAddressingMode w)
		{
			int wParamValue = w.getValue();
			
			set_w_TextureAddressingMode(this.nativeObject.pointer, wParamValue);
		}
		
		
		native private static void Destroy(long pNativeObject);
		public void destroyNativeObject() {
			Destroy(this.nativeObject.pointer);
		}
	}
	/**
	 * 纹理立方面，0代表前面，1代表后面，2代表左面，3代表右面，4代表上面，5代表下面
	 */
	public enum TextureCubeFace implements INativeEnum<TextureCubeFace> {
		CUBE_FRONT(TextureCubeFaceHelper.ENUM_VALUES[0]),
		CUBE_BACK(TextureCubeFaceHelper.ENUM_VALUES[1]),
		CUBE_LEFT(TextureCubeFaceHelper.ENUM_VALUES[2]),
		CUBE_RIGHT(TextureCubeFaceHelper.ENUM_VALUES[3]),
		CUBE_UP(TextureCubeFaceHelper.ENUM_VALUES[4]),
		CUBE_DOWN(TextureCubeFaceHelper.ENUM_VALUES[5]);
		private int value;
		TextureCubeFace(int i) {
			this.value = i;
		}
		public TextureCubeFace getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final TextureCubeFace toEnum(int retval) {
			if(retval == CUBE_FRONT.value){
				return CUBE_FRONT;
			}
			else if(retval == CUBE_BACK.value){
				return CUBE_BACK;
			}
			else if(retval == CUBE_LEFT.value){
				return CUBE_LEFT;
			}
			else if(retval == CUBE_RIGHT.value){
				return CUBE_RIGHT;
			}
			else if(retval == CUBE_UP.value){
				return CUBE_UP;
			}
			else if(retval == CUBE_DOWN.value){
				return CUBE_DOWN;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TextureCubeFaceHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 定义纹理效果
	 */
	public static class TextureEffect extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTextureUnitState::TextureEffect", new TextureEffectClassFactory());
		}

		public TextureEffect() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TextureEffect", null);
		}

		native private int get_type_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState.TextureEffectType get_type()
		{
			int jniValue = get_type_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.TextureUnitState.TextureEffectType.toEnum(jniValue);
		}
		
		native private void set_type_TextureEffectType (long pNativeObject, int value);
		public void set_type(com.earthview.world.graphic.TextureUnitState.TextureEffectType type)
		{
			int typeParamValue = type.getValue();
			
			set_type_TextureEffectType(this.nativeObject.pointer, typeParamValue);
		}
		
		native private int get_subtype_void(long pNativeObject);
		public int get_subtype()
		{
			int jniValue = get_subtype_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_subtype_ev_int32 (long pNativeObject, int value);
		public void set_subtype(int subtype)
		{
			int subtypeParamValue = subtype;
			
			set_subtype_ev_int32(this.nativeObject.pointer, subtypeParamValue);
		}
		
		native private double get_arg2_void(long pNativeObject);
		public double get_arg2()
		{
			double jniValue = get_arg2_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_arg2_Real (long pNativeObject, double value);
		public void set_arg2(double arg2)
		{
			double arg2ParamValue = arg2;
			
			set_arg2_Real(this.nativeObject.pointer, arg2ParamValue);
		}
		
		native private double get_arg1_void(long pNativeObject);
		public double get_arg1()
		{
			double jniValue = get_arg1_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_arg1_Real (long pNativeObject, double value);
		public void set_arg1(double arg1)
		{
			double arg1ParamValue = arg1;
			
			set_arg1_Real(this.nativeObject.pointer, arg1ParamValue);
		}
		
		native private int get_waveType_void(long pNativeObject);
		public com.earthview.world.graphic.WaveformType get_waveType()
		{
			int jniValue = get_waveType_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.WaveformType.toEnum(jniValue);
		}
		
		native private void set_waveType_WaveformType (long pNativeObject, int value);
		public void set_waveType(com.earthview.world.graphic.WaveformType waveType)
		{
			int waveTypeParamValue = waveType.getValue();
			
			set_waveType_WaveformType(this.nativeObject.pointer, waveTypeParamValue);
		}
		
		native private double get_base_void(long pNativeObject);
		public double get_base()
		{
			double jniValue = get_base_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_base_Real (long pNativeObject, double value);
		public void set_base(double base)
		{
			double baseParamValue = base;
			
			set_base_Real(this.nativeObject.pointer, baseParamValue);
		}
		
		native private double get_frequency_void(long pNativeObject);
		public double get_frequency()
		{
			double jniValue = get_frequency_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_frequency_Real (long pNativeObject, double value);
		public void set_frequency(double frequency)
		{
			double frequencyParamValue = frequency;
			
			set_frequency_Real(this.nativeObject.pointer, frequencyParamValue);
		}
		
		native private double get_phase_void(long pNativeObject);
		public double get_phase()
		{
			double jniValue = get_phase_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_phase_Real (long pNativeObject, double value);
		public void set_phase(double phase)
		{
			double phaseParamValue = phase;
			
			set_phase_Real(this.nativeObject.pointer, phaseParamValue);
		}
		
		native private double get_amplitude_void(long pNativeObject);
		public double get_amplitude()
		{
			double jniValue = get_amplitude_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_amplitude_Real (long pNativeObject, double value);
		public void set_amplitude(double amplitude)
		{
			double amplitudeParamValue = amplitude;
			
			set_amplitude_Real(this.nativeObject.pointer, amplitudeParamValue);
		}
		
		native private long get_controller_void(long pNativeObject);
		public com.earthview.world.graphic.Controller get_controller()
		{
			long jniValue = get_controller_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CController");
			}
			return __returnValue;
		}
		
		native private void set_controller_CController (long pNativeObject, long value);
		public void set_controller(com.earthview.world.graphic.Controller controller)
		{
			long controllerParamValue = (controller == null ? 0L : controller.nativeObject.pointer);
			
			set_controller_CController(this.nativeObject.pointer, controllerParamValue);
		}
		
		native private long get_frustum_void(long pNativeObject);
		public com.earthview.world.graphic.Frustum get_frustum()
		{
			long jniValue = get_frustum_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Frustum __returnValue = new com.earthview.world.graphic.Frustum(CreatedWhenConstruct.CWC_NotToCreate, "CFrustum");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Frustum)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CFrustum");
			}
			return __returnValue;
		}
		
		public TextureEffect(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextureEffect(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TextureEffect fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextureEffect obj = null;
 			if(baseObj instanceof TextureEffect)
			{
				obj = (TextureEffect)baseObj;
			} else {
				obj = new TextureEffect(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TextureEffect");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextureEffectClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextureEffect emptyInstance = new TextureEffect(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// CTexture effects in a multimap paired array
	public static class TextureUnitStateEffectMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap", new TextureUnitStateEffectMapClassFactory());
		}

		public TextureUnitStateEffectMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CTextureUnitStateEffectMap", null);
		}

		native private void push_TextureEffectType_TextureEffect(long pNativeObject, int key, long val);
		/**
		 * 
		 * @param key 纹理效果类型
		 * @param val 纹理值
		 */
		public void push(com.earthview.world.graphic.TextureUnitState.TextureEffectType key, com.earthview.world.graphic.TextureUnitState.TextureEffect val)
		{
			int keyParamValue = key.getValue();
			long valParamValue = val.nativeObject.pointer;
			push_TextureEffectType_TextureEffect(this.nativeObject.pointer, keyParamValue, valParamValue);
		}
		native private boolean exist_TextureEffectType(long pNativeObject, int key);
		/**
		 * 判断是否存在该种纹理
		 * @param key 纹理效果类型
		 * @return 如存在返回true，反之返回false
		 */
		public boolean exist(com.earthview.world.graphic.TextureUnitState.TextureEffectType key)
		{
			int keyParamValue = key.getValue();
			boolean returnValue = exist_TextureEffectType(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private void erase_TextureEffectType(long pNativeObject, int key);
		/**
		 * 删除一种纹理
		 * @param key 要删除的纹理值
		 */
		public void erase(com.earthview.world.graphic.TextureUnitState.TextureEffectType key)
		{
			int keyParamValue = key.getValue();
			erase_TextureEffectType(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 设置大小
		 * @return 返回设置的大小值
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long count_TextureEffectType(long pNativeObject, int key);
		/**
		 * 纹理类型数量
		 * @param key 键
		 * @return 返回数量的个数
		 */
		public long count(com.earthview.world.graphic.TextureUnitState.TextureEffectType key)
		{
			int keyParamValue = key.getValue();
			long returnValue = count_TextureEffectType(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long get_TextureEffectType_ev_size_t(long pNativeObject, int key, long index);
		/**
		 * 获取指定键值的第几项
		 * @param key 获得某种纹理的键值
		 * @param index 得到纹理键值的第几项
		 * @return 返回获得的纹理效果
		 */
		public com.earthview.world.graphic.TextureUnitState.TextureEffect get(com.earthview.world.graphic.TextureUnitState.TextureEffectType key, long index)
		{
			int keyParamValue = key.getValue();
			long indexParamValue = index;
			long returnValue = get_TextureEffectType_ev_size_t(this.nativeObject.pointer, keyParamValue, indexParamValue);
			com.earthview.world.graphic.TextureUnitState.TextureEffect __returnValue = new com.earthview.world.graphic.TextureUnitState.TextureEffect(CreatedWhenConstruct.CWC_NotToCreate, "TextureEffect");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TextureUnitState.TextureEffect)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "TextureEffect");
			}
			return __returnValue;
		}
		native private void erase_TextureEffectType_ev_size_t(long pNativeObject, int key, long index);
		/**
		 * 删除指定键值的第几项
		 * @param key 删除某类纹理的键值
		 * @param index 要删除某类纹理的键值的第几项
		 */
		public void erase(com.earthview.world.graphic.TextureUnitState.TextureEffectType key, long index)
		{
			int keyParamValue = key.getValue();
			long indexParamValue = index;
			erase_TextureEffectType_ev_size_t(this.nativeObject.pointer, keyParamValue, indexParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清除
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 置空
		 * @return 为空则返回true，否则返回false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public TextureUnitStateEffectMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextureUnitStateEffectMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TextureUnitStateEffectMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextureUnitStateEffectMap obj = null;
 			if(baseObj instanceof TextureUnitStateEffectMap)
			{
				obj = (TextureUnitStateEffectMap)baseObj;
			} else {
				obj = new TextureUnitStateEffectMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CTextureUnitStateEffectMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextureUnitStateEffectMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextureUnitStateEffectMap emptyInstance = new TextureUnitStateEffectMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param parent 
	 */
	public TextureUnitState(com.earthview.world.graphic.Pass ref_parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		Create("CTextureUnitState", list);
	}

	/**
	 * 构造函数
	 * @param oth 纹理单元状态
	 */
	public TextureUnitState(com.earthview.world.graphic.Pass ref_parent, com.earthview.world.graphic.TextureUnitState oth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer othPtr = new BasePointer(oth);
		list.add("oth", othPtr.get());
		Create("CTextureUnitState", list);
	}

	native private long OperatorAssign_CTextureUnitState(long pNativeObject, long oth);
	/**
	 * 重载"="
	 * @param oth 纹理单元状态
	 */
	public com.earthview.world.graphic.TextureUnitState OperatorAssign(com.earthview.world.graphic.TextureUnitState oth)
	{
		long othParamValue = oth.nativeObject.pointer;
		long returnValue = OperatorAssign_CTextureUnitState(this.nativeObject.pointer, othParamValue);
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
	/**
	 * 构造函数
	 * @param parent 渲染通路
	 * @param texName 纹理名称
	 * @param texCoordSet 纹理坐标集
	 */
	public TextureUnitState(com.earthview.world.graphic.Pass ref_parent, String texName, long texCoordSet) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer texNamePtr = new BasePointer(texName);
		list.add("texName", texNamePtr.get());
		BasePointer texCoordSetPtr = new BasePointer(texCoordSet);
		list.add("texCoordSet", texCoordSetPtr.get());
		Create("CTextureUnitState", list);
	}

	public TextureUnitState(com.earthview.world.graphic.Pass ref_parent, String texName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer texNamePtr = new BasePointer(texName);
		list.add("texName", texNamePtr.get());
		Create("CTextureUnitState", list);
	}

	native private long getTextureName_void(long pNativeObject);
	/**
	 * 得到当前纹理的名称
	 * @return 返回纹理名称
	 */
	public StringPointer getTextureName()
	{
		long returnValue = getTextureName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setTextureName_EVString_TextureType(long pNativeObject, String name, int ttype);
	/**
	 * 设置纹理名称
	 * @param name 名称
	 * @param ttype 纹理类型
	 */
	public void setTextureName(String name, com.earthview.world.graphic.TextureType ttype)
	{
		String nameParamValue = name;
		int ttypeParamValue = ttype.getValue();
		setTextureName_EVString_TextureType(this.nativeObject.pointer, nameParamValue, ttypeParamValue);
	}
	native private void setTextureName_EVString(long pNativeObject, String name);
	public void setTextureName(String name)
	{
		String nameParamValue = name;
		setTextureName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setTexture_CTexturePtr(long pNativeObject, long texPtr);
	/**
	 * 设置纹理名称
	 * @param texPtr 纹理
	 */
	public void setTexture(com.earthview.world.graphic.TexturePtr texPtr)
	{
		long texPtrParamValue = texPtr.nativeObject.pointer;
		setTexture_CTexturePtr(this.nativeObject.pointer, texPtrParamValue);
	}
	native private void setCubicTexture_CTexturePtr(long pNativeObject, long texPtrs);
	/**
	 * 设置立方体纹理
	 * @param texPtrs 纹理
	 * @param forUVW true代表一个单独的利用三维纹理坐标的三维纹理寻址，而不是6个分离的纹理
	 */
	public void setCubicTexture(com.earthview.world.graphic.TexturePtr texPtrs)
	{
		long texPtrsParamValue = (texPtrs == null ? 0L : texPtrs.nativeObject.pointer);
		setCubicTexture_CTexturePtr(this.nativeObject.pointer, texPtrsParamValue);
	}
	native private void setCubicTexture_CTexturePtr_bool(long pNativeObject, long texPtrs, boolean forUVW);
	public void setCubicTexture(com.earthview.world.graphic.TexturePtr texPtrs, boolean forUVW)
	{
		long texPtrsParamValue = (texPtrs == null ? 0L : texPtrs.nativeObject.pointer);
		boolean forUVWParamValue = forUVW;
		setCubicTexture_CTexturePtr_bool(this.nativeObject.pointer, texPtrsParamValue, forUVWParamValue);
	}
	native private void setCubicTextureName_EVString_ev_bool(long pNativeObject, String name, boolean forUVW);
	/**
	 * 设置立方体纹理名称
	 * @param name 名称
	 * @param forUVW true代表一个单独的利用三维纹理坐标的三维纹理寻址，而不是6个分离的纹理
	 */
	public void setCubicTextureName(String name, boolean forUVW)
	{
		String nameParamValue = name;
		boolean forUVWParamValue = forUVW;
		setCubicTextureName_EVString_ev_bool(this.nativeObject.pointer, nameParamValue, forUVWParamValue);
	}
	native private void setCubicTextureName_EVString(long pNativeObject, String name);
	public void setCubicTextureName(String name)
	{
		String nameParamValue = name;
		setCubicTextureName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setCubicTextureNames_EVString_ev_bool(long pNativeObject, long names, boolean forUVW);
	/**
	 * 设置立方纹理名称
	 * @param name 名称
	 * @param forUVW true代表一个单独的利用三维纹理坐标的三维纹理寻址，而不是6个分离的纹理
	 */
	public void setCubicTextureNames(StringPointer names, boolean forUVW)
	{
		long namesParamValue = (names == null ? 0L : names.nativeObject.pointer);
		boolean forUVWParamValue = forUVW;
		setCubicTextureNames_EVString_ev_bool(this.nativeObject.pointer, namesParamValue, forUVWParamValue);
	}
	native private void setCubicTextureNames_EVString(long pNativeObject, long names);
	public void setCubicTextureNames(StringPointer names)
	{
		long namesParamValue = (names == null ? 0L : names.nativeObject.pointer);
		setCubicTextureNames_EVString(this.nativeObject.pointer, namesParamValue);
	}
	native private void setAnimatedTextureName_EVString_ev_uint32_Real(long pNativeObject, String name, long numFrames, double duration);
	/**
	 * 设置用于纹理动画的纹理。eg.(flame.jpg,5,2.5)
	 * @param name 画面名称
	 * @param numFrames 图像文件数
	 * @param duration 延时（长度），单位是秒，如果是0表示不发生自动转换,需要在代码中手动改变
	 */
	public void setAnimatedTextureName(String name, long numFrames, double duration)
	{
		String nameParamValue = name;
		long numFramesParamValue = numFrames;
		double durationParamValue = duration;
		setAnimatedTextureName_EVString_ev_uint32_Real(this.nativeObject.pointer, nameParamValue, numFramesParamValue, durationParamValue);
	}
	native private void setAnimatedTextureName_EVString_ev_uint32(long pNativeObject, String name, long numFrames);
	public void setAnimatedTextureName(String name, long numFrames)
	{
		String nameParamValue = name;
		long numFramesParamValue = numFrames;
		setAnimatedTextureName_EVString_ev_uint32(this.nativeObject.pointer, nameParamValue, numFramesParamValue);
	}
	native private void setAnimatedTextureNames_EVString_ev_uint32_Real(long pNativeObject, long names, long numFrames, double duration);
	/**
	 * 设置用于纹理动画的各纹理
	 * @param name 纹理名称队列的指针，图像排序
	 * @param numFrames 图像文件数
	 * @param duration 延时，单位是秒，如果是0表示不发生自动转换,需要在代码中手动改变
	 */
	public void setAnimatedTextureNames(StringPointer names, long numFrames, double duration)
	{
		long namesParamValue = (names == null ? 0L : names.nativeObject.pointer);
		long numFramesParamValue = numFrames;
		double durationParamValue = duration;
		setAnimatedTextureNames_EVString_ev_uint32_Real(this.nativeObject.pointer, namesParamValue, numFramesParamValue, durationParamValue);
	}
	native private void setAnimatedTextureNames_EVString_ev_uint32(long pNativeObject, long names, long numFrames);
	public void setAnimatedTextureNames(StringPointer names, long numFrames)
	{
		long namesParamValue = (names == null ? 0L : names.nativeObject.pointer);
		long numFramesParamValue = numFrames;
		setAnimatedTextureNames_EVString_ev_uint32(this.nativeObject.pointer, namesParamValue, numFramesParamValue);
	}
	/**
	 * 在给定的框架内返回纹理的宽和高
	 */
	public static class TextureUnitStateTextureDimensionsPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair", new TextureUnitStateTextureDimensionsPairClassFactory());
		}

		native private long get_first_void(long pNativeObject);
		public long get_first()
		{
			long jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_size_t (long pNativeObject, long value);
		public void set_first(long first)
		{
			long firstParamValue = first;
			
			set_first_ev_size_t(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public long get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_second_ev_size_t (long pNativeObject, long value);
		public void set_second(long second)
		{
			long secondParamValue = second;
			
			set_second_ev_size_t(this.nativeObject.pointer, secondParamValue);
		}
		
		/**
		 * 默认构造函数
		 */
		public TextureUnitStateTextureDimensionsPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CTextureUnitStateTextureDimensionsPair", null);
		}

		/**
		 * 构造函数
		 * @param fir 
		 * @param sec 
		 */
		public TextureUnitStateTextureDimensionsPair(long fir, long sec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer firPtr = new BasePointer(fir);
			list.add("fir", firPtr.get());
			BasePointer secPtr = new BasePointer(sec);
			list.add("sec", secPtr.get());
			Create("CTextureUnitStateTextureDimensionsPair", list);
		}

		native private long OperatorAssign_CTextureUnitStateTextureDimensionsPair(long pNativeObject, long other);
		public com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair OperatorAssign(com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair other)
		{
			long otherParamValue = other.nativeObject.pointer;
			long returnValue = OperatorAssign_CTextureUnitStateTextureDimensionsPair(this.nativeObject.pointer, otherParamValue);
			com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair __returnValue = new com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitStateTextureDimensionsPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureUnitStateTextureDimensionsPair");
			}
			return __returnValue;
		}
		public TextureUnitStateTextureDimensionsPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextureUnitStateTextureDimensionsPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TextureUnitStateTextureDimensionsPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextureUnitStateTextureDimensionsPair obj = null;
 			if(baseObj instanceof TextureUnitStateTextureDimensionsPair)
			{
				obj = (TextureUnitStateTextureDimensionsPair)baseObj;
			} else {
				obj = new TextureUnitStateTextureDimensionsPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CTextureUnitStateTextureDimensionsPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextureUnitStateTextureDimensionsPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextureUnitStateTextureDimensionsPair emptyInstance = new TextureUnitStateTextureDimensionsPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getTextureDimensions_ev_uint32(long pNativeObject, long frame);
	public com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair getTextureDimensions(long frame)
	{
		long frameParamValue = frame;
		long returnValue = getTextureDimensions_ev_uint32(this.nativeObject.pointer, frameParamValue);
		com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair __returnValue = new com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTextureUnitStateTextureDimensionsPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitStateTextureDimensionsPair");
		}
		return __returnValue;
	}
	native private long getTextureDimensions_void(long pNativeObject);
	public com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair getTextureDimensions()
	{
		long returnValue = getTextureDimensions_void(this.nativeObject.pointer);
		com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair __returnValue = new com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTextureUnitStateTextureDimensionsPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState.TextureUnitStateTextureDimensionsPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitStateTextureDimensionsPair");
		}
		return __returnValue;
	}
	native private void setCurrentFrame_ev_uint32(long pNativeObject, long frameNumber);
	/**
	 * 在动态或者多图像纹理中改变活动的帧
	 * @param frameNumber 帧序号
	 */
	public void setCurrentFrame(long frameNumber)
	{
		long frameNumberParamValue = frameNumber;
		setCurrentFrame_ev_uint32(this.nativeObject.pointer, frameNumberParamValue);
	}
	native private long getCurrentFrame_void(long pNativeObject);
	/**
	 * 在动态或者多图像纹理中获得当前图像的帧序号
	 */
	public long getCurrentFrame()
	{
		long returnValue = getCurrentFrame_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFrameTextureName_ev_uint32(long pNativeObject, long frameNumber);
	/**
	 * 获得指定帧的纹理名称
	 * @param frameNumber 帧序号
	 * @return 返回纹理名称
	 */
	public StringPointer getFrameTextureName(long frameNumber)
	{
		long frameNumberParamValue = frameNumber;
		long returnValue = getFrameTextureName_ev_uint32(this.nativeObject.pointer, frameNumberParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setFrameTextureName_EVString_ev_uint32(long pNativeObject, String name, long frameNumber);
	/**
	 * 设置指定帧的纹理名称
	 * @param name 纹理名称
	 * @param frameNumber 帧序号
	 */
	public void setFrameTextureName(String name, long frameNumber)
	{
		String nameParamValue = name;
		long frameNumberParamValue = frameNumber;
		setFrameTextureName_EVString_ev_uint32(this.nativeObject.pointer, nameParamValue, frameNumberParamValue);
	}
	native private void addFrameTextureName_EVString(long pNativeObject, String name);
	/**
	 * 在帧容器的最后增加一个纹理名称
	 * @param name 纹理名称
	 */
	public void addFrameTextureName(String name)
	{
		String nameParamValue = name;
		addFrameTextureName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void deleteFrameTextureName_ev_size_t(long pNativeObject, long frameNumber);
	/**
	 * 删除特定帧的纹理
	 * @param name 删除纹理的帧序号
	 */
	public void deleteFrameTextureName(long frameNumber)
	{
		long frameNumberParamValue = frameNumber;
		deleteFrameTextureName_ev_size_t(this.nativeObject.pointer, frameNumberParamValue);
	}
	native private long getNumFrames_void(long pNativeObject);
	/**
	 * 得到纹理的帧数量
	 * @return 返回图像文件数
	 */
	public long getNumFrames()
	{
		long returnValue = getNumFrames_void(this.nativeObject.pointer);
		return returnValue;
	}
	///绑定类型。告诉这个纹理单元是绑定到片断处理单元还是绑定到顶点处理单元
	public enum BindingType implements INativeEnum<BindingType> {
		BT_FRAGMENT(BindingTypeHelper.ENUM_VALUES[0]),
		BT_VERTEX(BindingTypeHelper.ENUM_VALUES[1]);
		private int value;
		BindingType(int i) {
			this.value = i;
		}
		public BindingType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final BindingType toEnum(int retval) {
			if(retval == BT_FRAGMENT.value){
				return BT_FRAGMENT;
			}
			else if(retval == BT_VERTEX.value){
				return BT_VERTEX;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class BindingTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	///内容类型。这个纹理单元所包含的内容类型。告诉这个纹理单元从哪里取得它的内容
	public enum ContentType implements INativeEnum<ContentType> {
		CONTENT_NAMED(ContentTypeHelper.ENUM_VALUES[0]),
		CONTENT_SHADOW(ContentTypeHelper.ENUM_VALUES[1]),
		CONTENT_COMPOSITOR(ContentTypeHelper.ENUM_VALUES[2]);
		private int value;
		ContentType(int i) {
			this.value = i;
		}
		public ContentType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ContentType toEnum(int retval) {
			if(retval == CONTENT_NAMED.value){
				return CONTENT_NAMED;
			}
			else if(retval == CONTENT_SHADOW.value){
				return CONTENT_SHADOW;
			}
			else if(retval == CONTENT_COMPOSITOR.value){
				return CONTENT_COMPOSITOR;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ContentTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void setBindingType_BindingType(long pNativeObject, int bt);
	/**
	 * 设置绑定类型
	 * @param bt 绑定类型
	 */
	public void setBindingType(com.earthview.world.graphic.TextureUnitState.BindingType bt)
	{
		int btParamValue = bt.getValue();
		setBindingType_BindingType(this.nativeObject.pointer, btParamValue);
	}
	native private int getBindingType_void(long pNativeObject);
	/**
	 * 获得绑定类型
	 * @return 绑定类型
	 */
	public com.earthview.world.graphic.TextureUnitState.BindingType getBindingType()
	{
		int returnValue = getBindingType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.TextureUnitState.BindingType.toEnum(returnValue);
	}
	native private void setContentType_ContentType(long pNativeObject, int ct);
	/**
	 * 设置当前纹理单元的内容类型
	 * @param ct 内容类型
	 */
	public void setContentType(com.earthview.world.graphic.TextureUnitState.ContentType ct)
	{
		int ctParamValue = ct.getValue();
		setContentType_ContentType(this.nativeObject.pointer, ctParamValue);
	}
	native private int getContentType_void(long pNativeObject);
	/**
	 * 获得当前纹理单元状态参考的内容类型
	 * @return 内容类型
	 */
	public com.earthview.world.graphic.TextureUnitState.ContentType getContentType()
	{
		int returnValue = getContentType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.TextureUnitState.ContentType.toEnum(returnValue);
	}
	native private boolean isCubic_void(long pNativeObject);
	/**
	 * 判断是否是由6个面组成的立方体纹理
	 * @return 是的话返回true，否则返回false
	 */
	public boolean isCubic()
	{
		boolean returnValue = isCubic_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean is3D_void(long pNativeObject);
	/**
	 * 判断是否是3D纹理
	 * @return 假如是则返回true，否则返回false
	 */
	public boolean is3D()
	{
		boolean returnValue = is3D_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getTextureType_void(long pNativeObject);
	/**
	 * 获得纹理类型
	 * @return 返回纹理类型
	 */
	public com.earthview.world.graphic.TextureType getTextureType()
	{
		int returnValue = getTextureType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.TextureType.toEnum(returnValue);
	}
	native private void setDesiredFormat_PixelFormat(long pNativeObject, int desiredFormat);
	/**
	 * 当加载纹理时，设置想要创建的像素格式
	 * @param desiredFormat 像素格式
	 */
	public void setDesiredFormat(com.earthview.world.graphic.PixelFormat desiredFormat)
	{
		int desiredFormatParamValue = desiredFormat.getValue();
		setDesiredFormat_PixelFormat(this.nativeObject.pointer, desiredFormatParamValue);
	}
	native private int getDesiredFormat_void(long pNativeObject);
	/**
	 * 当加载纹理时，设置想要创建的像素格式
	 * @return 返回想要创建的像素格式
	 */
	public com.earthview.world.graphic.PixelFormat getDesiredFormat()
	{
		int returnValue = getDesiredFormat_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private void setNumMipmaps_ev_int32(long pNativeObject, int numMipmaps);
	/**
	 * 设置纹理的mipmap级数
	 * @param numMipmaps Mipmap数量
	 */
	public void setNumMipmaps(int numMipmaps)
	{
		int numMipmapsParamValue = numMipmaps;
		setNumMipmaps_ev_int32(this.nativeObject.pointer, numMipmapsParamValue);
	}
	native private int getNumMipmaps_void(long pNativeObject);
	/**
	 * 获得纹理的mipmap级数
	 * @return 返回Mipmap数量
	 */
	public int getNumMipmaps()
	{
		int returnValue = getNumMipmaps_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsAlpha_ev_bool(long pNativeObject, boolean isAlpha);
	/**
	 * 当是单通道时，设置该纹理是否被要求作为alpha加载，
	 * @param isAlpha 
	 */
	public void setIsAlpha(boolean isAlpha)
	{
		boolean isAlphaParamValue = isAlpha;
		setIsAlpha_ev_bool(this.nativeObject.pointer, isAlphaParamValue);
	}
	native private boolean getIsAlpha_void(long pNativeObject);
	/**
	 * 当是单通道时，设置该纹理是否被要求作为alpha加载
	 */
	public boolean getIsAlpha()
	{
		boolean returnValue = getIsAlpha_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHardwareGammaEnabled_ev_bool(long pNativeObject, boolean enabled);
	/// <summary>
	/// 设置显示器的Gamma纠正是否启用
	/// <summary>
	/// <param name="enabled">true为启用Gamma纠正</param>
	public void setHardwareGammaEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setHardwareGammaEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean isHardwareGammaEnabled_void(long pNativeObject);
	/// <summary>
	/// 获取显示器的Gamma纠正是否启用
	/// <summary>
	/// <returns>true为启用Gamma纠正</returns>
	public boolean isHardwareGammaEnabled()
	{
		boolean returnValue = isHardwareGammaEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTextureCoordSet_void(long pNativeObject);
	/**
	 * 获得该图层所用到的纹理坐标的索引
	 * @return 返回index
	 */
	public long getTextureCoordSet()
	{
		long returnValue = getTextureCoordSet_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextureCoordSet_ev_uint32(long pNativeObject, long set);
	/**
	 * 设置该图层所用到的纹理坐标的索引
	 * @param set 默认是0，假如提供每个顶点的多样纹理坐标可以改变该值
	 */
	public void setTextureCoordSet(long set)
	{
		long setParamValue = set;
		setTextureCoordSet_ev_uint32(this.nativeObject.pointer, setParamValue);
	}
	native private void setTextureTransform_CMatrix4(long pNativeObject, long xform);
	/**
	 * 设置变换矩阵
	 * @param xform 四维矩阵
	 */
	public void setTextureTransform(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = xform.nativeObject.pointer;
		setTextureTransform_CMatrix4(this.nativeObject.pointer, xformParamValue);
	}
	native private long getTextureTransform_void(long pNativeObject);
	/**
	 * 得到纹理的变换矩阵
	 * @param  
	 * @return 返回四维矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getTextureTransform()
	{
		long returnValue = getTextureTransform_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private void setTextureScroll_Real_Real(long pNativeObject, double u, double v);
	/**
	 * 给纹理设置一个固定的滚动偏移量
	 * @param u 水平方向上移动量
	 * @param v 竖直方向上的移动量
	 */
	public void setTextureScroll(double u, double v)
	{
		double uParamValue = u;
		double vParamValue = v;
		setTextureScroll_Real_Real(this.nativeObject.pointer, uParamValue, vParamValue);
	}
	native private void setTextureUScroll_Real(long pNativeObject, double value);
	/**
	 * 设置纹理的滚动偏移量，但是只设置水平方向上偏移量，即U值
	 * @param value 设置水平方向上的偏移量U
	 */
	public void setTextureUScroll(double value)
	{
		double valueParamValue = value;
		setTextureUScroll_Real(this.nativeObject.pointer, valueParamValue);
	}
	native private double getTextureUScroll_void(long pNativeObject);
	/**
	 * 得到纹理水平方向上的滚动偏移量
	 * @return U值
	 */
	public double getTextureUScroll()
	{
		double returnValue = getTextureUScroll_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextureVScroll_Real(long pNativeObject, double value);
	/**
	 * 设置纹理的滚动偏移量，但是只设置竖直方向上偏移量，即V值
	 * @param value 设置竖直方向上的偏移量V
	 */
	public void setTextureVScroll(double value)
	{
		double valueParamValue = value;
		setTextureVScroll_Real(this.nativeObject.pointer, valueParamValue);
	}
	native private double getTextureVScroll_void(long pNativeObject);
	/**
	 * 得到纹理竖直方向上的滚动偏移量
	 * @return V值
	 */
	public double getTextureVScroll()
	{
		double returnValue = getTextureVScroll_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextureUScale_Real(long pNativeObject, double value);
	/**
	 * 设置这个纹理层应用的比例系数，只设置u比例值
	 * @param value U值
	 */
	public void setTextureUScale(double value)
	{
		double valueParamValue = value;
		setTextureUScale_Real(this.nativeObject.pointer, valueParamValue);
	}
	native private double getTextureUScale_void(long pNativeObject);
	/**
	 * 获得u比例值
	 * @param  
	 * @return 返回u比例值
	 */
	public double getTextureUScale()
	{
		double returnValue = getTextureUScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextureVScale_Real(long pNativeObject, double value);
	/**
	 * 设置这个纹理层应用的比例系数，只设置v比例值
	 * @param value V值
	 */
	public void setTextureVScale(double value)
	{
		double valueParamValue = value;
		setTextureVScale_Real(this.nativeObject.pointer, valueParamValue);
	}
	native private double getTextureVScale_void(long pNativeObject);
	/**
	 * 获得v比例值
	 * @param  
	 * @return 返回v比例值
	 */
	public double getTextureVScale()
	{
		double returnValue = getTextureVScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextureScale_Real_Real(long pNativeObject, double uScale, double vScale);
	/**
	 * 设置应用于纹理坐标的缩放比例系数
	 * @param uScale 纹理在水平方向上的比例
	 * @param vScale 纹理在垂直方向上的比例
	 */
	public void setTextureScale(double uScale, double vScale)
	{
		double uScaleParamValue = uScale;
		double vScaleParamValue = vScale;
		setTextureScale_Real_Real(this.nativeObject.pointer, uScaleParamValue, vScaleParamValue);
	}
	native private void setTextureRotate_CRadian(long pNativeObject, long angle);
	/**
	 * 将一个纹理旋转一个固定的角度（逆时针）
	 * @param angle 是逆时针旋转的角的度数
	 */
	public void setTextureRotate(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		setTextureRotate_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private long getTextureRotate_void(long pNativeObject);
	/**
	 * 得到纹理旋转的角度
	 * @param  
	 * @return 返回旋转的角度
	 */
	public com.earthview.world.spatial.math.Radian getTextureRotate()
	{
		long returnValue = getTextureRotate_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private long getTextureAddressingMode_void(long pNativeObject);
	/**
	 * 对一个给定的坐标，得到它的纹理寻址模式。定义在这个纹理层的纹理坐标超过1.0时发生的事情，默认是TAM_WRAP
	 * @param  
	 * @return 返回纹理寻址模式
	 */
	public com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode getTextureAddressingMode()
	{
		long returnValue = getTextureAddressingMode_void(this.nativeObject.pointer);
		com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode __returnValue = new com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setTextureAddressingMode_TextureAddressingMode(long pNativeObject, int tam);
	/**
	 * 设置纹理寻址模式。定义在这个纹理层的纹理坐标超过1.0时发生的事情，默认是TAM_WRAP
	 * @param tam 纹理寻址模式
	 */
	public void setTextureAddressingMode(com.earthview.world.graphic.TextureUnitState.TextureAddressingMode tam)
	{
		int tamParamValue = tam.getValue();
		setTextureAddressingMode_TextureAddressingMode(this.nativeObject.pointer, tamParamValue);
	}
	native private void setTextureAddressingMode_TextureAddressingMode_TextureAddressingMode_TextureAddressingMode(long pNativeObject, int u, int v, int w);
	/**
	 * 设置纹理寻址模式。定义在这个纹理层的纹理坐标超过1.0时发生的事情，默认是TAM_WRAP
	 * @param u u
	 * @param v v
	 * @param w w
	 */
	public void setTextureAddressingMode(com.earthview.world.graphic.TextureUnitState.TextureAddressingMode u, com.earthview.world.graphic.TextureUnitState.TextureAddressingMode v, com.earthview.world.graphic.TextureUnitState.TextureAddressingMode w)
	{
		int uParamValue = u.getValue();
		int vParamValue = v.getValue();
		int wParamValue = w.getValue();
		setTextureAddressingMode_TextureAddressingMode_TextureAddressingMode_TextureAddressingMode(this.nativeObject.pointer, uParamValue, vParamValue, wParamValue);
	}
	native private void setTextureAddressingMode_UVWAddressingMode(long pNativeObject, long uvw);
	/**
	 * 设置纹理寻址模式。定义在这个纹理层的纹理坐标超过1.0时发生的事情，默认是TAM_WRAP
	 * @param uvw uvw值
	 */
	public void setTextureAddressingMode(com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode uvw)
	{
		long uvwParamValue = uvw.nativeObject.pointer;
		setTextureAddressingMode_UVWAddressingMode(this.nativeObject.pointer, uvwParamValue);
	}
	native private void setTextureBorderColour_CColourValue(long pNativeObject, long colour);
	/**
	 * 设置纹理边界色，默认情况下是黑色black，只有当寻址模式是TAM_BORDER时，该值可用
	 * @param colour 颜色
	 */
	public void setTextureBorderColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setTextureBorderColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private long getTextureBorderColour_void(long pNativeObject);
	/**
	 * 获得纹理边界色，默认情况下是黑色black，只有当寻址模式是TAM_BORDER时，该值可用
	 * @param  
	 * @return 返回纹理边界色
	 */
	public com.earthview.world.graphic.ColourValue getTextureBorderColour()
	{
		long returnValue = getTextureBorderColour_void(this.nativeObject.pointer);
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
	native private void setColourOperationEx_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_CColourValue_CColourValue_Real(long pNativeObject, int op, int source1, int source2, long arg1, long arg2, double manualBlend);
	/**
	 * 设置纹理颜色操作。这是colour_op属性的扩展版，对于在这个纹理层与前面一个纹理层之间应用的混合允许极详细的控制.看下面有关使用这个方法在多渲染通路和多纹理之间可能出现的问题
	 * @param op 默认值是LBX_MODULATE
	 * @param source1 纹理颜色，默认值是LBS_TEXTURE
	 * @param source2 纹理颜色，默认值是LBS_CURRENT
	 * @param arg1 手动提供颜色值，只有当source1=LBS_MANUAL时，需要该参数
	 * @param arg2 手动提供颜色值，只有当source2=LBS_MANUAL时，需要该参数
	 * @param manualBlend 手动混合
	 */
	public void setColourOperationEx(com.earthview.world.graphic.LayerBlendOperationEx op, com.earthview.world.graphic.LayerBlendSource source1, com.earthview.world.graphic.LayerBlendSource source2, com.earthview.world.graphic.ColourValue arg1, com.earthview.world.graphic.ColourValue arg2, double manualBlend)
	{
		int opParamValue = op.getValue();
		int source1ParamValue = source1.getValue();
		int source2ParamValue = source2.getValue();
		long arg1ParamValue = arg1.nativeObject.pointer;
		long arg2ParamValue = arg2.nativeObject.pointer;
		double manualBlendParamValue = manualBlend;
		setColourOperationEx_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_CColourValue_CColourValue_Real(this.nativeObject.pointer, opParamValue, source1ParamValue, source2ParamValue, arg1ParamValue, arg2ParamValue, manualBlendParamValue);
	}
	native private void setColourOperationEx_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_CColourValue_CColourValue(long pNativeObject, int op, int source1, int source2, long arg1, long arg2);
	public void setColourOperationEx(com.earthview.world.graphic.LayerBlendOperationEx op, com.earthview.world.graphic.LayerBlendSource source1, com.earthview.world.graphic.LayerBlendSource source2, com.earthview.world.graphic.ColourValue arg1, com.earthview.world.graphic.ColourValue arg2)
	{
		int opParamValue = op.getValue();
		int source1ParamValue = source1.getValue();
		int source2ParamValue = source2.getValue();
		long arg1ParamValue = arg1.nativeObject.pointer;
		long arg2ParamValue = arg2.nativeObject.pointer;
		setColourOperationEx_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_CColourValue_CColourValue(this.nativeObject.pointer, opParamValue, source1ParamValue, source2ParamValue, arg1ParamValue, arg2ParamValue);
	}
	native private void setColourOperationEx_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_CColourValue(long pNativeObject, int op, int source1, int source2, long arg1);
	public void setColourOperationEx(com.earthview.world.graphic.LayerBlendOperationEx op, com.earthview.world.graphic.LayerBlendSource source1, com.earthview.world.graphic.LayerBlendSource source2, com.earthview.world.graphic.ColourValue arg1)
	{
		int opParamValue = op.getValue();
		int source1ParamValue = source1.getValue();
		int source2ParamValue = source2.getValue();
		long arg1ParamValue = arg1.nativeObject.pointer;
		setColourOperationEx_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_CColourValue(this.nativeObject.pointer, opParamValue, source1ParamValue, source2ParamValue, arg1ParamValue);
	}
	native private void setColourOperationEx_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource(long pNativeObject, int op, int source1, int source2);
	public void setColourOperationEx(com.earthview.world.graphic.LayerBlendOperationEx op, com.earthview.world.graphic.LayerBlendSource source1, com.earthview.world.graphic.LayerBlendSource source2)
	{
		int opParamValue = op.getValue();
		int source1ParamValue = source1.getValue();
		int source2ParamValue = source2.getValue();
		setColourOperationEx_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource(this.nativeObject.pointer, opParamValue, source1ParamValue, source2ParamValue);
	}
	native private void setColourOperationEx_LayerBlendOperationEx_LayerBlendSource(long pNativeObject, int op, int source1);
	public void setColourOperationEx(com.earthview.world.graphic.LayerBlendOperationEx op, com.earthview.world.graphic.LayerBlendSource source1)
	{
		int opParamValue = op.getValue();
		int source1ParamValue = source1.getValue();
		setColourOperationEx_LayerBlendOperationEx_LayerBlendSource(this.nativeObject.pointer, opParamValue, source1ParamValue);
	}
	native private void setColourOperationEx_LayerBlendOperationEx(long pNativeObject, int op);
	public void setColourOperationEx(com.earthview.world.graphic.LayerBlendOperationEx op)
	{
		int opParamValue = op.getValue();
		setColourOperationEx_LayerBlendOperationEx(this.nativeObject.pointer, opParamValue);
	}
	native private void setColourOperation_LayerBlendOperation(long pNativeObject, int op);
	/**
	 * 决定这个纹理层的颜色如何与它下面的一层叠加复合起来（或者如果它是第一层的话，如何将它与光照效果复合起来）。这个方法是混合纹理层最简单的方法，因为它只需要一个参数，给你最普通的混合类型，并且自动建立两种混合方法：一种是针对单渲染通路多纹理硬件可用时的混合；另一种是针对单渲染通路多纹理硬件不可用时通过多渲染通路完成混合。然而，这是相当受限的，并且无法使用更加灵活的多纹理操作，简单地因为这些在多渲染通路回撤模式下不能被自动地支持
	 * @param op 图层混合操作类型
	 */
	public void setColourOperation(com.earthview.world.graphic.LayerBlendOperation op)
	{
		int opParamValue = op.getValue();
		setColourOperation_LayerBlendOperation(this.nativeObject.pointer, opParamValue);
	}
	native private void setColourOpMultipassFallback_SceneBlendFactor_SceneBlendFactor(long pNativeObject, int sourceFactor, int destFactor);
	/**
	 * 在如果使用了colour_op_ex属性且没有足够的多纹理硬件支持时，设置这个纹理层的多路后撤操作
	 * @param sourceFactor 原因数
	 * @param destFactor 目标因数
	 */
	public void setColourOpMultipassFallback(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		setColourOpMultipassFallback_SceneBlendFactor_SceneBlendFactor(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue);
	}
	native private long getColourBlendMode_void(long pNativeObject);
	/**
	 * 获得多纹理RGB混合模式
	 * @param  
	 */
	public com.earthview.world.graphic.LayerBlendModeEx getColourBlendMode()
	{
		long returnValue = getColourBlendMode_void(this.nativeObject.pointer);
		com.earthview.world.graphic.LayerBlendModeEx __returnValue = new com.earthview.world.graphic.LayerBlendModeEx(CreatedWhenConstruct.CWC_NotToCreate, "CLayerBlendModeEx");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LayerBlendModeEx)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayerBlendModeEx");
		}
		return __returnValue;
	}
	native private long getAlphaBlendMode_void(long pNativeObject);
	/**
	 * 获得多纹理Alpha混合模式
	 * @param  
	 * @return 返回管理颜色和Alpha部分的混合
	 */
	public com.earthview.world.graphic.LayerBlendModeEx getAlphaBlendMode()
	{
		long returnValue = getAlphaBlendMode_void(this.nativeObject.pointer);
		com.earthview.world.graphic.LayerBlendModeEx __returnValue = new com.earthview.world.graphic.LayerBlendModeEx(CreatedWhenConstruct.CWC_NotToCreate, "CLayerBlendModeEx");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LayerBlendModeEx)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayerBlendModeEx");
		}
		return __returnValue;
	}
	native private int getColourBlendFallbackSrc_void(long pNativeObject);
	/**
	 * 获得颜色混合操作的源回滚因子
	 * @param  
	 */
	public com.earthview.world.graphic.SceneBlendFactor getColourBlendFallbackSrc()
	{
		int returnValue = getColourBlendFallbackSrc_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.SceneBlendFactor.toEnum(returnValue);
	}
	native private int getColourBlendFallbackDest_void(long pNativeObject);
	/**
	 * 获得颜色混合操作的目标回滚因子
	 * @param  
	 */
	public com.earthview.world.graphic.SceneBlendFactor getColourBlendFallbackDest()
	{
		int returnValue = getColourBlendFallbackDest_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.SceneBlendFactor.toEnum(returnValue);
	}
	native private void setAlphaOperation_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_Real_Real_Real(long pNativeObject, int op, int source1, int source2, double arg1, double arg2, double manualBlend);
	/**
	 * 设置该类纹理的alpha操作
	 * @param op 加、减、乘等操作
	 * @param source1 操作第一个alpha的资源
	 * @param source2 操作第二个alpha的资源
	 * @param arg1 手动的添加该值，只有当source1=LBS_MANUAL时，才需要该参数
	 * @param arg2 手动的添加该值，只有当source2=LBS_MANUAL时，才需要该参数
	 * @param manualBlend 手动混合
	 */
	public void setAlphaOperation(com.earthview.world.graphic.LayerBlendOperationEx op, com.earthview.world.graphic.LayerBlendSource source1, com.earthview.world.graphic.LayerBlendSource source2, double arg1, double arg2, double manualBlend)
	{
		int opParamValue = op.getValue();
		int source1ParamValue = source1.getValue();
		int source2ParamValue = source2.getValue();
		double arg1ParamValue = arg1;
		double arg2ParamValue = arg2;
		double manualBlendParamValue = manualBlend;
		setAlphaOperation_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_Real_Real_Real(this.nativeObject.pointer, opParamValue, source1ParamValue, source2ParamValue, arg1ParamValue, arg2ParamValue, manualBlendParamValue);
	}
	native private void setAlphaOperation_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_Real_Real(long pNativeObject, int op, int source1, int source2, double arg1, double arg2);
	public void setAlphaOperation(com.earthview.world.graphic.LayerBlendOperationEx op, com.earthview.world.graphic.LayerBlendSource source1, com.earthview.world.graphic.LayerBlendSource source2, double arg1, double arg2)
	{
		int opParamValue = op.getValue();
		int source1ParamValue = source1.getValue();
		int source2ParamValue = source2.getValue();
		double arg1ParamValue = arg1;
		double arg2ParamValue = arg2;
		setAlphaOperation_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_Real_Real(this.nativeObject.pointer, opParamValue, source1ParamValue, source2ParamValue, arg1ParamValue, arg2ParamValue);
	}
	native private void setAlphaOperation_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_Real(long pNativeObject, int op, int source1, int source2, double arg1);
	public void setAlphaOperation(com.earthview.world.graphic.LayerBlendOperationEx op, com.earthview.world.graphic.LayerBlendSource source1, com.earthview.world.graphic.LayerBlendSource source2, double arg1)
	{
		int opParamValue = op.getValue();
		int source1ParamValue = source1.getValue();
		int source2ParamValue = source2.getValue();
		double arg1ParamValue = arg1;
		setAlphaOperation_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_Real(this.nativeObject.pointer, opParamValue, source1ParamValue, source2ParamValue, arg1ParamValue);
	}
	native private void setAlphaOperation_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource(long pNativeObject, int op, int source1, int source2);
	public void setAlphaOperation(com.earthview.world.graphic.LayerBlendOperationEx op, com.earthview.world.graphic.LayerBlendSource source1, com.earthview.world.graphic.LayerBlendSource source2)
	{
		int opParamValue = op.getValue();
		int source1ParamValue = source1.getValue();
		int source2ParamValue = source2.getValue();
		setAlphaOperation_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource(this.nativeObject.pointer, opParamValue, source1ParamValue, source2ParamValue);
	}
	native private void setAlphaOperation_LayerBlendOperationEx_LayerBlendSource(long pNativeObject, int op, int source1);
	public void setAlphaOperation(com.earthview.world.graphic.LayerBlendOperationEx op, com.earthview.world.graphic.LayerBlendSource source1)
	{
		int opParamValue = op.getValue();
		int source1ParamValue = source1.getValue();
		setAlphaOperation_LayerBlendOperationEx_LayerBlendSource(this.nativeObject.pointer, opParamValue, source1ParamValue);
	}
	native private void setAlphaOperation_LayerBlendOperationEx(long pNativeObject, int op);
	public void setAlphaOperation(com.earthview.world.graphic.LayerBlendOperationEx op)
	{
		int opParamValue = op.getValue();
		setAlphaOperation_LayerBlendOperationEx(this.nativeObject.pointer, opParamValue);
	}
	native private void addEffect_TextureEffect(long pNativeObject, long effect);
	/**
	 * 添加纹理特效
	 * @param effect 纹理效果
	 */
	public void addEffect(com.earthview.world.graphic.TextureUnitState.TextureEffect effect)
	{
		long effectParamValue = effect.nativeObject.pointer;
		addEffect_TextureEffect(this.nativeObject.pointer, effectParamValue);
	}
	native private void setEnvironmentMap_ev_bool_EnvMapType(long pNativeObject, boolean enable, int envMapType);
	/**
	 * 开始/关闭环境贴图
	 * @param enable true表示打开纹理坐标效果，能环境映射，
	 * @param envMapType 环境映射类型
	 */
	public void setEnvironmentMap(boolean enable, com.earthview.world.graphic.TextureUnitState.EnvMapType envMapType)
	{
		boolean enableParamValue = enable;
		int envMapTypeParamValue = envMapType.getValue();
		setEnvironmentMap_ev_bool_EnvMapType(this.nativeObject.pointer, enableParamValue, envMapTypeParamValue);
	}
	native private void setEnvironmentMap_ev_bool(long pNativeObject, boolean enable);
	public void setEnvironmentMap(boolean enable)
	{
		boolean enableParamValue = enable;
		setEnvironmentMap_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setScrollAnimation_Real_Real(long pNativeObject, double uSpeed, double vSpeed);
	/**
	 * 设置滚动动画
	 * @param uSpeed 水平方向上每秒的圈数
	 * @param vSpeed 垂直方向上每秒的圈数
	 */
	public void setScrollAnimation(double uSpeed, double vSpeed)
	{
		double uSpeedParamValue = uSpeed;
		double vSpeedParamValue = vSpeed;
		setScrollAnimation_Real_Real(this.nativeObject.pointer, uSpeedParamValue, vSpeedParamValue);
	}
	native private void setRotateAnimation_Real(long pNativeObject, double speed);
	/**
	 * 设置旋转动画
	 * @param speed 是每秒逆时针旋转的次数
	 */
	public void setRotateAnimation(double speed)
	{
		double speedParamValue = speed;
		setRotateAnimation_Real(this.nativeObject.pointer, speedParamValue);
	}
	native private void setTransformAnimation_TextureTransformType_WaveformType_Real_Real_Real_Real(long pNativeObject, int ttype, int waveType, double base, double frequency, double phase, double amplitude);
	/**
	 * 设置纹理变换的动画
	 * @param ttype 变换方式，滚动、旋转、比例属性
	 * @param waveType 波类型
	 * @param base 波的输出值
	 * @param frequency 波每秒重复的次数，即速度
	 * @param phase 波开始的偏移量
	 * @param amplitude 波的大小
	 */
	public void setTransformAnimation(com.earthview.world.graphic.TextureUnitState.TextureTransformType ttype, com.earthview.world.graphic.WaveformType waveType, double base, double frequency, double phase, double amplitude)
	{
		int ttypeParamValue = ttype.getValue();
		int waveTypeParamValue = waveType.getValue();
		double baseParamValue = base;
		double frequencyParamValue = frequency;
		double phaseParamValue = phase;
		double amplitudeParamValue = amplitude;
		setTransformAnimation_TextureTransformType_WaveformType_Real_Real_Real_Real(this.nativeObject.pointer, ttypeParamValue, waveTypeParamValue, baseParamValue, frequencyParamValue, phaseParamValue, amplitudeParamValue);
	}
	native private void setTransformAnimation_TextureTransformType_WaveformType_Real_Real_Real(long pNativeObject, int ttype, int waveType, double base, double frequency, double phase);
	public void setTransformAnimation(com.earthview.world.graphic.TextureUnitState.TextureTransformType ttype, com.earthview.world.graphic.WaveformType waveType, double base, double frequency, double phase)
	{
		int ttypeParamValue = ttype.getValue();
		int waveTypeParamValue = waveType.getValue();
		double baseParamValue = base;
		double frequencyParamValue = frequency;
		double phaseParamValue = phase;
		setTransformAnimation_TextureTransformType_WaveformType_Real_Real_Real(this.nativeObject.pointer, ttypeParamValue, waveTypeParamValue, baseParamValue, frequencyParamValue, phaseParamValue);
	}
	native private void setTransformAnimation_TextureTransformType_WaveformType_Real_Real(long pNativeObject, int ttype, int waveType, double base, double frequency);
	public void setTransformAnimation(com.earthview.world.graphic.TextureUnitState.TextureTransformType ttype, com.earthview.world.graphic.WaveformType waveType, double base, double frequency)
	{
		int ttypeParamValue = ttype.getValue();
		int waveTypeParamValue = waveType.getValue();
		double baseParamValue = base;
		double frequencyParamValue = frequency;
		setTransformAnimation_TextureTransformType_WaveformType_Real_Real(this.nativeObject.pointer, ttypeParamValue, waveTypeParamValue, baseParamValue, frequencyParamValue);
	}
	native private void setTransformAnimation_TextureTransformType_WaveformType_Real(long pNativeObject, int ttype, int waveType, double base);
	public void setTransformAnimation(com.earthview.world.graphic.TextureUnitState.TextureTransformType ttype, com.earthview.world.graphic.WaveformType waveType, double base)
	{
		int ttypeParamValue = ttype.getValue();
		int waveTypeParamValue = waveType.getValue();
		double baseParamValue = base;
		setTransformAnimation_TextureTransformType_WaveformType_Real(this.nativeObject.pointer, ttypeParamValue, waveTypeParamValue, baseParamValue);
	}
	native private void setTransformAnimation_TextureTransformType_WaveformType(long pNativeObject, int ttype, int waveType);
	public void setTransformAnimation(com.earthview.world.graphic.TextureUnitState.TextureTransformType ttype, com.earthview.world.graphic.WaveformType waveType)
	{
		int ttypeParamValue = ttype.getValue();
		int waveTypeParamValue = waveType.getValue();
		setTransformAnimation_TextureTransformType_WaveformType(this.nativeObject.pointer, ttypeParamValue, waveTypeParamValue);
	}
	native private void setProjectiveTexturing_ev_bool_CFrustum(long pNativeObject, boolean enabled, long ref_projectionSettings);
	/**
	 * 开启/关闭投影纹理
	 * @param enabled 在该纹理单元下是否可以投影纹理
	 * @param ref_projectionSettings 视椎体
	 */
	public void setProjectiveTexturing(boolean enabled, com.earthview.world.graphic.Frustum ref_projectionSettings)
	{
		boolean enabledParamValue = enabled;
		long ref_projectionSettingsParamValue = (ref_projectionSettings == null ? 0L : ref_projectionSettings.nativeObject.pointer);
		setProjectiveTexturing_ev_bool_CFrustum(this.nativeObject.pointer, enabledParamValue, ref_projectionSettingsParamValue);
	}
	native private void setProjectiveTexturing_ev_bool(long pNativeObject, boolean enabled);
	public void setProjectiveTexturing(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setProjectiveTexturing_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void removeAllEffects_void(long pNativeObject);
	/**
	 * 删除所有应用于该纹理层上的效果
	 * @param  
	 */
	public void removeAllEffects()
	{
		removeAllEffects_void(this.nativeObject.pointer);
	}
	native private void removeEffect_TextureEffectType(long pNativeObject, int type);
	/**
	 * 删除纹理图层上的单一效果
	 * @param type 纹理效果类型
	 */
	public void removeEffect(com.earthview.world.graphic.TextureUnitState.TextureEffectType type)
	{
		int typeParamValue = type.getValue();
		removeEffect_TextureEffectType(this.nativeObject.pointer, typeParamValue);
	}
	native private boolean isBlank_void(long pNativeObject);
	/**
	 * 判断当前纹理图层是否空白
	 * @param  
	 * @return 如没有着色返回true，否则返回false
	 */
	public boolean isBlank()
	{
		boolean returnValue = isBlank_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBlank_void(long pNativeObject);
	/**
	 * 设置当前纹理图层为空白
	 * @param  
	 */
	public void setBlank()
	{
		setBlank_void(this.nativeObject.pointer);
	}
	native private boolean isTextureLoadFailing_void(long pNativeObject);
	/**
	 * 是否加载失败
	 * @param  
	 * @return 失败返回true，否则返回false
	 */
	public boolean isTextureLoadFailing()
	{
		boolean returnValue = isTextureLoadFailing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void retryTextureLoad_void(long pNativeObject);
	/**
	 * 假如加载失败，则重新加载
	 * @param  
	 */
	public void retryTextureLoad()
	{
		retryTextureLoad_void(this.nativeObject.pointer);
	}
	native private long getEffects_void(long pNativeObject);
	/**
	 * 获得纹理特效
	 * @param  
	 */
	public com.earthview.world.graphic.TextureUnitState.TextureUnitStateEffectMap getEffects()
	{
		long returnValue = getEffects_void(this.nativeObject.pointer);
		com.earthview.world.graphic.TextureUnitState.TextureUnitStateEffectMap __returnValue = new com.earthview.world.graphic.TextureUnitState.TextureUnitStateEffectMap(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitStateEffectMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState.TextureUnitStateEffectMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitStateEffectMap");
		}
		return __returnValue;
	}
	native private double getAnimationDuration_void(long pNativeObject);
	/**
	 * 得到动态的，持续的纹理
	 * @param  
	 */
	public double getAnimationDuration()
	{
		double returnValue = getAnimationDuration_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextureFiltering_TextureFilterOptions(long pNativeObject, int filterType);
	/**
	 * 为该单元设置纹理过滤，用简单的接口
	 * @param filterType 高级过滤类型
	 */
	public void setTextureFiltering(com.earthview.world.graphic.TextureFilterOptions filterType)
	{
		int filterTypeParamValue = filterType.getValue();
		setTextureFiltering_TextureFilterOptions(this.nativeObject.pointer, filterTypeParamValue);
	}
	native private void setTextureFiltering_FilterType_FilterOptions(long pNativeObject, int ftype, int opts);
	/**
	 * 为该纹理单元设置单一的过滤选项
	 * @param filterType 设置的过滤类型
	 * @param opts 设置的过滤选项
	 */
	public void setTextureFiltering(com.earthview.world.graphic.FilterType ftype, com.earthview.world.graphic.FilterOptions opts)
	{
		int ftypeParamValue = ftype.getValue();
		int optsParamValue = opts.getValue();
		setTextureFiltering_FilterType_FilterOptions(this.nativeObject.pointer, ftypeParamValue, optsParamValue);
	}
	native private void setTextureFiltering_FilterOptions_FilterOptions_FilterOptions(long pNativeObject, int minFilter, int magFilter, int mipFilter);
	/**
	 * 为该纹理单元设置详细的过滤选项
	 * @param minFilter 当减少纹理尺寸时用minFilter,其值可以是以下三个：FO_POINT,FO_LINEARorFO_ANISOTROPIC
	 * @param magFilter 当增加纹理尺寸时用magFilter,其值可以是以下三个：FO_POINT,FO_LINEARorFO_ANISOTROPIC
	 * @param mipFilter 多级渐进纹理过滤,可以用FO_NONE(turnsoffmipmapping),FO_POINTorFO_LINEAR(trilinearfiltering)
	 */
	public void setTextureFiltering(com.earthview.world.graphic.FilterOptions minFilter, com.earthview.world.graphic.FilterOptions magFilter, com.earthview.world.graphic.FilterOptions mipFilter)
	{
		int minFilterParamValue = minFilter.getValue();
		int magFilterParamValue = magFilter.getValue();
		int mipFilterParamValue = mipFilter.getValue();
		setTextureFiltering_FilterOptions_FilterOptions_FilterOptions(this.nativeObject.pointer, minFilterParamValue, magFilterParamValue, mipFilterParamValue);
	}
	native private int getTextureFiltering_FilterType(long pNativeObject, int ftpye);
	/**
	 * 对给定的类型获得纹理过滤
	 * @param ftpye 过滤类型
	 */
	public com.earthview.world.graphic.FilterOptions getTextureFiltering(com.earthview.world.graphic.FilterType ftpye)
	{
		int ftpyeParamValue = ftpye.getValue();
		int returnValue = getTextureFiltering_FilterType(this.nativeObject.pointer, ftpyeParamValue);
		return com.earthview.world.graphic.FilterOptions.toEnum(returnValue);
	}
	native private void setTextureAnisotropy_ev_uint32(long pNativeObject, long maxAniso);
	/**
	 * 对该纹理设置各向异性程度
	 * @param maxAniso 最大各向差异性，在2和硬件所提供的最大值之间，默认值是1
	 */
	public void setTextureAnisotropy(long maxAniso)
	{
		long maxAnisoParamValue = maxAniso;
		setTextureAnisotropy_ev_uint32(this.nativeObject.pointer, maxAnisoParamValue);
	}
	native private long getTextureAnisotropy_void(long pNativeObject);
	/**
	 * 获得该纹理各向异性程度
	 * @param  
	 */
	public long getTextureAnisotropy()
	{
		long returnValue = getTextureAnisotropy_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextureMipmapBias_ev_real32(long pNativeObject, float bias);
	/**
	 * 设置多级渐进纹理的偏移值
	 * @param bias 可以是正的也可以是负的
	 */
	public void setTextureMipmapBias(float bias)
	{
		float biasParamValue = bias;
		setTextureMipmapBias_ev_real32(this.nativeObject.pointer, biasParamValue);
	}
	native private float getTextureMipmapBias_void(long pNativeObject);
	/**
	 * 设置多级渐进纹理的偏移值
	 * @param  
	 */
	public float getTextureMipmapBias()
	{
		float returnValue = getTextureMipmapBias_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCompositorReference_EVString_EVString_ev_size_t(long pNativeObject, String compositorName, String textureName, long mrtIndex);
	/**
	 * 为该纹理单元状态设置排序参考
	 * @param compositorName 排序名称
	 * @param textureName 纹理名称
	 * @param mrtIndex 指定第几个纹理
	 */
	public void setCompositorReference(String compositorName, String textureName, long mrtIndex)
	{
		String compositorNameParamValue = compositorName;
		String textureNameParamValue = textureName;
		long mrtIndexParamValue = mrtIndex;
		setCompositorReference_EVString_EVString_ev_size_t(this.nativeObject.pointer, compositorNameParamValue, textureNameParamValue, mrtIndexParamValue);
	}
	native private void setCompositorReference_EVString_EVString(long pNativeObject, String compositorName, String textureName);
	public void setCompositorReference(String compositorName, String textureName)
	{
		String compositorNameParamValue = compositorName;
		String textureNameParamValue = textureName;
		setCompositorReference_EVString_EVString(this.nativeObject.pointer, compositorNameParamValue, textureNameParamValue);
	}
	native private long getReferencedCompositorName_void(long pNativeObject);
	/**
	 * 获得纹理参考的合成器的名称
	 * @param  
	 * @return 返回名称
	 */
	public StringPointer getReferencedCompositorName()
	{
		long returnValue = getReferencedCompositorName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getReferencedTextureName_void(long pNativeObject);
	/**
	 * 获得纹理参考的在合成器中的纹理名称
	 * @param  
	 * @return 返回名称
	 */
	public StringPointer getReferencedTextureName()
	{
		long returnValue = getReferencedTextureName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getReferencedMRTIndex_void(long pNativeObject);
	/**
	 * 获得纹理参考的合成器中纹理的MRT索引值
	 * @param  
	 */
	public long getReferencedMRTIndex()
	{
		long returnValue = getReferencedMRTIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getParent_void(long pNativeObject);
	///得到父类EarthView::World::Graphic::CPass对象
	public com.earthview.world.graphic.Pass getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
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
	native private void _prepare_void(long pNativeObject);
	/// Internal method for preparing this object for load, as part of CMaterial::prepare
	public void _prepare()
	{
		_prepare_void(this.nativeObject.pointer);
	}
	native private void _unprepare_void(long pNativeObject);
	/// Internal method for undoing the preparation this object as part of CMaterial::unprepare
	public void _unprepare()
	{
		_unprepare_void(this.nativeObject.pointer);
	}
	native private void _load_void(long pNativeObject);
	/// Internal method for loading this object as part of CMaterial::load */
	public void _load()
	{
		_load_void(this.nativeObject.pointer);
	}
	native private void _unload_void(long pNativeObject);
	/// Internal method for unloading this object as part of CMaterial::unload */
	public void _unload()
	{
		_unload_void(this.nativeObject.pointer);
	}
	native private boolean hasViewRelativeTextureCoordinateGeneration_void(long pNativeObject);
	/**
	 * 判断该单元是否有依靠摄像机产生的纹理坐标
	 * @param  
	 * @return 有的话返回true，否则返回false
	 */
	public boolean hasViewRelativeTextureCoordinateGeneration()
	{
		boolean returnValue = hasViewRelativeTextureCoordinateGeneration_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isLoaded_void(long pNativeObject);
	/**
	 * 判断是否已经加载
	 * @param  
	 * @return 加载返回true，没有加载返回false
	 */
	public boolean isLoaded()
	{
		boolean returnValue = isLoaded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _notifyNeedsRecompile_void(long pNativeObject);
	/**
	 * 通报需要重新编译
	 * @param name 纹理单元状态的名称，是可选的
	 */
	public void _notifyNeedsRecompile()
	{
		_notifyNeedsRecompile_void(this.nativeObject.pointer);
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置纹理单元状态名称
	 * @param name 纹理单元状态的名称，是可选的
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getName_void(long pNativeObject);
	/**
	 * 得到纹理单元状态名称
	 * @param  
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setTextureNameAlias_EVString(long pNativeObject, String name);
	/**
	 * 为纹理边框名称设置纹理别名
	 * @param name 别名，可以是任意字符，不是唯一的
	 */
	public void setTextureNameAlias(String name)
	{
		String nameParamValue = name;
		setTextureNameAlias_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getTextureNameAlias_void(long pNativeObject);
	/**
	 * 得到纹理单元的纹理别名
	 * @param  
	 * @return 返回获得的别名
	 */
	public StringPointer getTextureNameAlias()
	{
		long returnValue = getTextureNameAlias_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
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
	native private void _notifyParent_CPass(long pNativeObject, long parent);
	/**
	 * 当所属通路改变时，进行提示
	 * @param parent parent
	 */
	public void _notifyParent(com.earthview.world.graphic.Pass parent)
	{
		long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
		_notifyParent_CPass(this.nativeObject.pointer, parentParamValue);
	}
	native private long _getTexturePtr_void(long pNativeObject);
	/**
	 * 得到给定序号的纹理指针
	 * @param  
	 */
	public com.earthview.world.graphic.TexturePtr _getTexturePtr()
	{
		long returnValue = _getTexturePtr_void(this.nativeObject.pointer);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate, "CTexturePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long _getTexturePtr_ev_size_t(long pNativeObject, long frame);
	/**
	 * 得到给定序号的纹理指针
	 * @param frame 图画
	 */
	public com.earthview.world.graphic.TexturePtr _getTexturePtr(long frame)
	{
		long frameParamValue = frame;
		long returnValue = _getTexturePtr_ev_size_t(this.nativeObject.pointer, frameParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate, "CTexturePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private void _setTexturePtr_CTexturePtr(long pNativeObject, long texptr);
	/**
	 * 为当前序号设置纹理指针
	 * @param texptr 
	 */
	public void _setTexturePtr(com.earthview.world.graphic.TexturePtr texptr)
	{
		long texptrParamValue = texptr.nativeObject.pointer;
		_setTexturePtr_CTexturePtr(this.nativeObject.pointer, texptrParamValue);
	}
	native private void _setTexturePtr_CTexturePtr_ev_size_t(long pNativeObject, long texptr, long frame);
	/**
	 * 设置给定序号的纹理指针
	 * @param texptr 
	 * @param frame 图画
	 */
	public void _setTexturePtr(com.earthview.world.graphic.TexturePtr texptr, long frame)
	{
		long texptrParamValue = texptr.nativeObject.pointer;
		long frameParamValue = frame;
		_setTexturePtr_CTexturePtr_ev_size_t(this.nativeObject.pointer, texptrParamValue, frameParamValue);
	}
	native private long _getAnimController_void(long pNativeObject);
	/**
	 * 得到纹理动画控制器
	 * @param  
	 */
	public com.earthview.world.graphic.Controller _getAnimController()
	{
		long returnValue = _getAnimController_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long get_mCurrentFrame_void(long pNativeObject);
	public long get_mCurrentFrame()
	{
		long jniValue = get_mCurrentFrame_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCurrentFrame_ev_uint32 (long pNativeObject, long value);
	public void set_mCurrentFrame(long mCurrentFrame)
	{
		long mCurrentFrameParamValue = mCurrentFrame;
		
		set_mCurrentFrame_ev_uint32(this.nativeObject.pointer, mCurrentFrameParamValue);
	}
	
	native private double get_mAnimDuration_void(long pNativeObject);
	public double get_mAnimDuration()
	{
		double jniValue = get_mAnimDuration_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mAnimDuration_Real (long pNativeObject, double value);
	public void set_mAnimDuration(double mAnimDuration)
	{
		double mAnimDurationParamValue = mAnimDuration;
		
		set_mAnimDuration_Real(this.nativeObject.pointer, mAnimDurationParamValue);
	}
	
	native private boolean get_mCubic_void(long pNativeObject);
	public boolean get_mCubic()
	{
		boolean jniValue = get_mCubic_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCubic_ev_bool (long pNativeObject, boolean value);
	public void set_mCubic(boolean mCubic)
	{
		boolean mCubicParamValue = mCubic;
		
		set_mCubic_ev_bool(this.nativeObject.pointer, mCubicParamValue);
	}
	
	native private int get_mTextureType_void(long pNativeObject);
	public com.earthview.world.graphic.TextureType get_mTextureType()
	{
		int jniValue = get_mTextureType_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.TextureType.toEnum(jniValue);
	}
	
	native private void set_mTextureType_TextureType (long pNativeObject, int value);
	public void set_mTextureType(com.earthview.world.graphic.TextureType mTextureType)
	{
		int mTextureTypeParamValue = mTextureType.getValue();
		
		set_mTextureType_TextureType(this.nativeObject.pointer, mTextureTypeParamValue);
	}
	
	native private int get_mDesiredFormat_void(long pNativeObject);
	public com.earthview.world.graphic.PixelFormat get_mDesiredFormat()
	{
		int jniValue = get_mDesiredFormat_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.PixelFormat.toEnum(jniValue);
	}
	
	native private void set_mDesiredFormat_PixelFormat (long pNativeObject, int value);
	public void set_mDesiredFormat(com.earthview.world.graphic.PixelFormat mDesiredFormat)
	{
		int mDesiredFormatParamValue = mDesiredFormat.getValue();
		
		set_mDesiredFormat_PixelFormat(this.nativeObject.pointer, mDesiredFormatParamValue);
	}
	
	native private int get_mTextureSrcMipmaps_void(long pNativeObject);
	public int get_mTextureSrcMipmaps()
	{
		int jniValue = get_mTextureSrcMipmaps_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTextureSrcMipmaps_ev_int32 (long pNativeObject, int value);
	public void set_mTextureSrcMipmaps(int mTextureSrcMipmaps)
	{
		int mTextureSrcMipmapsParamValue = mTextureSrcMipmaps;
		
		set_mTextureSrcMipmaps_ev_int32(this.nativeObject.pointer, mTextureSrcMipmapsParamValue);
	}
	
	native private long get_mTextureCoordSetIndex_void(long pNativeObject);
	public long get_mTextureCoordSetIndex()
	{
		long jniValue = get_mTextureCoordSetIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTextureCoordSetIndex_ev_uint32 (long pNativeObject, long value);
	public void set_mTextureCoordSetIndex(long mTextureCoordSetIndex)
	{
		long mTextureCoordSetIndexParamValue = mTextureCoordSetIndex;
		
		set_mTextureCoordSetIndex_ev_uint32(this.nativeObject.pointer, mTextureCoordSetIndexParamValue);
	}
	
	native private long get_mAddressMode_void(long pNativeObject);
	public com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode get_mAddressMode()
	{
		long jniValue = get_mAddressMode_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode __returnValue = new com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode(new InstancePointer(jniValue), false);
		return __returnValue;
	}
	
	native private void set_mAddressMode_UVWAddressingMode (long pNativeObject, long value);
	public void set_mAddressMode(com.earthview.world.graphic.TextureUnitState.Uvwaddressingmode mAddressMode)
	{
		long mAddressModeParamValue = mAddressMode.nativeObject.pointer;
		
		set_mAddressMode_UVWAddressingMode(this.nativeObject.pointer, mAddressModeParamValue);
	}
	
	native private long get_mBorderColour_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_mBorderColour()
	{
		long jniValue = get_mBorderColour_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	
	native private void set_mBorderColour_CColourValue (long pNativeObject, long value);
	public void set_mBorderColour(com.earthview.world.graphic.ColourValue mBorderColour)
	{
		long mBorderColourParamValue = mBorderColour.nativeObject.pointer;
		
		set_mBorderColour_CColourValue(this.nativeObject.pointer, mBorderColourParamValue);
	}
	
	native private long get_mColourBlendMode_void(long pNativeObject);
	public com.earthview.world.graphic.LayerBlendModeEx get_mColourBlendMode()
	{
		long jniValue = get_mColourBlendMode_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.LayerBlendModeEx __returnValue = new com.earthview.world.graphic.LayerBlendModeEx(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CLayerBlendModeEx");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LayerBlendModeEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLayerBlendModeEx");
		}
		return __returnValue;
	}
	
	native private void set_mColourBlendMode_CLayerBlendModeEx (long pNativeObject, long value);
	public void set_mColourBlendMode(com.earthview.world.graphic.LayerBlendModeEx mColourBlendMode)
	{
		long mColourBlendModeParamValue = mColourBlendMode.nativeObject.pointer;
		
		set_mColourBlendMode_CLayerBlendModeEx(this.nativeObject.pointer, mColourBlendModeParamValue);
	}
	
	native private int get_mColourBlendFallbackSrc_void(long pNativeObject);
	public com.earthview.world.graphic.SceneBlendFactor get_mColourBlendFallbackSrc()
	{
		int jniValue = get_mColourBlendFallbackSrc_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.SceneBlendFactor.toEnum(jniValue);
	}
	
	native private void set_mColourBlendFallbackSrc_SceneBlendFactor (long pNativeObject, int value);
	public void set_mColourBlendFallbackSrc(com.earthview.world.graphic.SceneBlendFactor mColourBlendFallbackSrc)
	{
		int mColourBlendFallbackSrcParamValue = mColourBlendFallbackSrc.getValue();
		
		set_mColourBlendFallbackSrc_SceneBlendFactor(this.nativeObject.pointer, mColourBlendFallbackSrcParamValue);
	}
	
	native private int get_mColourBlendFallbackDest_void(long pNativeObject);
	public com.earthview.world.graphic.SceneBlendFactor get_mColourBlendFallbackDest()
	{
		int jniValue = get_mColourBlendFallbackDest_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.SceneBlendFactor.toEnum(jniValue);
	}
	
	native private void set_mColourBlendFallbackDest_SceneBlendFactor (long pNativeObject, int value);
	public void set_mColourBlendFallbackDest(com.earthview.world.graphic.SceneBlendFactor mColourBlendFallbackDest)
	{
		int mColourBlendFallbackDestParamValue = mColourBlendFallbackDest.getValue();
		
		set_mColourBlendFallbackDest_SceneBlendFactor(this.nativeObject.pointer, mColourBlendFallbackDestParamValue);
	}
	
	native private long get_mAlphaBlendMode_void(long pNativeObject);
	public com.earthview.world.graphic.LayerBlendModeEx get_mAlphaBlendMode()
	{
		long jniValue = get_mAlphaBlendMode_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.LayerBlendModeEx __returnValue = new com.earthview.world.graphic.LayerBlendModeEx(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CLayerBlendModeEx");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LayerBlendModeEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLayerBlendModeEx");
		}
		return __returnValue;
	}
	
	native private void set_mAlphaBlendMode_CLayerBlendModeEx (long pNativeObject, long value);
	public void set_mAlphaBlendMode(com.earthview.world.graphic.LayerBlendModeEx mAlphaBlendMode)
	{
		long mAlphaBlendModeParamValue = mAlphaBlendMode.nativeObject.pointer;
		
		set_mAlphaBlendMode_CLayerBlendModeEx(this.nativeObject.pointer, mAlphaBlendModeParamValue);
	}
	
	native private boolean get_mTextureLoadFailed_void(long pNativeObject);
	public boolean get_mTextureLoadFailed()
	{
		boolean jniValue = get_mTextureLoadFailed_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTextureLoadFailed_ev_bool (long pNativeObject, boolean value);
	public void set_mTextureLoadFailed(boolean mTextureLoadFailed)
	{
		boolean mTextureLoadFailedParamValue = mTextureLoadFailed;
		
		set_mTextureLoadFailed_ev_bool(this.nativeObject.pointer, mTextureLoadFailedParamValue);
	}
	
	native private boolean get_mIsAlpha_void(long pNativeObject);
	public boolean get_mIsAlpha()
	{
		boolean jniValue = get_mIsAlpha_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsAlpha_ev_bool (long pNativeObject, boolean value);
	public void set_mIsAlpha(boolean mIsAlpha)
	{
		boolean mIsAlphaParamValue = mIsAlpha;
		
		set_mIsAlpha_ev_bool(this.nativeObject.pointer, mIsAlphaParamValue);
	}
	
	native private boolean get_mHwGamma_void(long pNativeObject);
	public boolean get_mHwGamma()
	{
		boolean jniValue = get_mHwGamma_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mHwGamma_ev_bool (long pNativeObject, boolean value);
	public void set_mHwGamma(boolean mHwGamma)
	{
		boolean mHwGammaParamValue = mHwGamma;
		
		set_mHwGamma_ev_bool(this.nativeObject.pointer, mHwGammaParamValue);
	}
	
	native private boolean get_mRecalcTexMatrix_void(long pNativeObject);
	public boolean get_mRecalcTexMatrix()
	{
		boolean jniValue = get_mRecalcTexMatrix_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRecalcTexMatrix_ev_bool (long pNativeObject, boolean value);
	public void set_mRecalcTexMatrix(boolean mRecalcTexMatrix)
	{
		boolean mRecalcTexMatrixParamValue = mRecalcTexMatrix;
		
		set_mRecalcTexMatrix_ev_bool(this.nativeObject.pointer, mRecalcTexMatrixParamValue);
	}
	
	native private double get_mVMod_void(long pNativeObject);
	public double get_mVMod()
	{
		double jniValue = get_mVMod_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mVMod_Real (long pNativeObject, double value);
	public void set_mVMod(double mVMod)
	{
		double mVModParamValue = mVMod;
		
		set_mVMod_Real(this.nativeObject.pointer, mVModParamValue);
	}
	
	native private double get_mUMod_void(long pNativeObject);
	public double get_mUMod()
	{
		double jniValue = get_mUMod_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mUMod_Real (long pNativeObject, double value);
	public void set_mUMod(double mUMod)
	{
		double mUModParamValue = mUMod;
		
		set_mUMod_Real(this.nativeObject.pointer, mUModParamValue);
	}
	
	native private double get_mVScale_void(long pNativeObject);
	public double get_mVScale()
	{
		double jniValue = get_mVScale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mVScale_Real (long pNativeObject, double value);
	public void set_mVScale(double mVScale)
	{
		double mVScaleParamValue = mVScale;
		
		set_mVScale_Real(this.nativeObject.pointer, mVScaleParamValue);
	}
	
	native private double get_mUScale_void(long pNativeObject);
	public double get_mUScale()
	{
		double jniValue = get_mUScale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mUScale_Real (long pNativeObject, double value);
	public void set_mUScale(double mUScale)
	{
		double mUScaleParamValue = mUScale;
		
		set_mUScale_Real(this.nativeObject.pointer, mUScaleParamValue);
	}
	
	native private long get_mRotate_void(long pNativeObject);
	public com.earthview.world.spatial.math.Radian get_mRotate()
	{
		long jniValue = get_mRotate_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	
	native private void set_mRotate_CRadian (long pNativeObject, long value);
	public void set_mRotate(com.earthview.world.spatial.math.Radian mRotate)
	{
		long mRotateParamValue = mRotate.nativeObject.pointer;
		
		set_mRotate_CRadian(this.nativeObject.pointer, mRotateParamValue);
	}
	
	native private long get_mTexModMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 get_mTexModMatrix()
	{
		long jniValue = get_mTexModMatrix_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	
	native private void set_mTexModMatrix_CMatrix4 (long pNativeObject, long value);
	public void set_mTexModMatrix(com.earthview.world.spatial.math.Matrix4 mTexModMatrix)
	{
		long mTexModMatrixParamValue = mTexModMatrix.nativeObject.pointer;
		
		set_mTexModMatrix_CMatrix4(this.nativeObject.pointer, mTexModMatrixParamValue);
	}
	
	native private int get_mMinFilter_void(long pNativeObject);
	public com.earthview.world.graphic.FilterOptions get_mMinFilter()
	{
		int jniValue = get_mMinFilter_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.FilterOptions.toEnum(jniValue);
	}
	
	native private void set_mMinFilter_FilterOptions (long pNativeObject, int value);
	public void set_mMinFilter(com.earthview.world.graphic.FilterOptions mMinFilter)
	{
		int mMinFilterParamValue = mMinFilter.getValue();
		
		set_mMinFilter_FilterOptions(this.nativeObject.pointer, mMinFilterParamValue);
	}
	
	native private int get_mMagFilter_void(long pNativeObject);
	public com.earthview.world.graphic.FilterOptions get_mMagFilter()
	{
		int jniValue = get_mMagFilter_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.FilterOptions.toEnum(jniValue);
	}
	
	native private void set_mMagFilter_FilterOptions (long pNativeObject, int value);
	public void set_mMagFilter(com.earthview.world.graphic.FilterOptions mMagFilter)
	{
		int mMagFilterParamValue = mMagFilter.getValue();
		
		set_mMagFilter_FilterOptions(this.nativeObject.pointer, mMagFilterParamValue);
	}
	
	native private int get_mMipFilter_void(long pNativeObject);
	public com.earthview.world.graphic.FilterOptions get_mMipFilter()
	{
		int jniValue = get_mMipFilter_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.FilterOptions.toEnum(jniValue);
	}
	
	native private void set_mMipFilter_FilterOptions (long pNativeObject, int value);
	public void set_mMipFilter(com.earthview.world.graphic.FilterOptions mMipFilter)
	{
		int mMipFilterParamValue = mMipFilter.getValue();
		
		set_mMipFilter_FilterOptions(this.nativeObject.pointer, mMipFilterParamValue);
	}
	
	native private long get_mMaxAniso_void(long pNativeObject);
	public long get_mMaxAniso()
	{
		long jniValue = get_mMaxAniso_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMaxAniso_ev_uint32 (long pNativeObject, long value);
	public void set_mMaxAniso(long mMaxAniso)
	{
		long mMaxAnisoParamValue = mMaxAniso;
		
		set_mMaxAniso_ev_uint32(this.nativeObject.pointer, mMaxAnisoParamValue);
	}
	
	native private float get_mMipmapBias_void(long pNativeObject);
	public float get_mMipmapBias()
	{
		float jniValue = get_mMipmapBias_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMipmapBias_ev_real32 (long pNativeObject, float value);
	public void set_mMipmapBias(float mMipmapBias)
	{
		float mMipmapBiasParamValue = mMipmapBias;
		
		set_mMipmapBias_ev_real32(this.nativeObject.pointer, mMipmapBiasParamValue);
	}
	
	native private boolean get_mIsDefaultAniso_void(long pNativeObject);
	public boolean get_mIsDefaultAniso()
	{
		boolean jniValue = get_mIsDefaultAniso_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsDefaultAniso_ev_bool (long pNativeObject, boolean value);
	public void set_mIsDefaultAniso(boolean mIsDefaultAniso)
	{
		boolean mIsDefaultAnisoParamValue = mIsDefaultAniso;
		
		set_mIsDefaultAniso_ev_bool(this.nativeObject.pointer, mIsDefaultAnisoParamValue);
	}
	
	native private boolean get_mIsDefaultFiltering_void(long pNativeObject);
	public boolean get_mIsDefaultFiltering()
	{
		boolean jniValue = get_mIsDefaultFiltering_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsDefaultFiltering_ev_bool (long pNativeObject, boolean value);
	public void set_mIsDefaultFiltering(boolean mIsDefaultFiltering)
	{
		boolean mIsDefaultFilteringParamValue = mIsDefaultFiltering;
		
		set_mIsDefaultFiltering_ev_bool(this.nativeObject.pointer, mIsDefaultFilteringParamValue);
	}
	
	native private int get_mBindingType_void(long pNativeObject);
	public com.earthview.world.graphic.TextureUnitState.BindingType get_mBindingType()
	{
		int jniValue = get_mBindingType_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.TextureUnitState.BindingType.toEnum(jniValue);
	}
	
	native private void set_mBindingType_BindingType (long pNativeObject, int value);
	public void set_mBindingType(com.earthview.world.graphic.TextureUnitState.BindingType mBindingType)
	{
		int mBindingTypeParamValue = mBindingType.getValue();
		
		set_mBindingType_BindingType(this.nativeObject.pointer, mBindingTypeParamValue);
	}
	
	native private int get_mContentType_void(long pNativeObject);
	public com.earthview.world.graphic.TextureUnitState.ContentType get_mContentType()
	{
		int jniValue = get_mContentType_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.TextureUnitState.ContentType.toEnum(jniValue);
	}
	
	native private void set_mContentType_ContentType (long pNativeObject, int value);
	public void set_mContentType(com.earthview.world.graphic.TextureUnitState.ContentType mContentType)
	{
		int mContentTypeParamValue = mContentType.getValue();
		
		set_mContentType_ContentType(this.nativeObject.pointer, mContentTypeParamValue);
	}
	
	native private long get_mCompositorRefMrtIndex_void(long pNativeObject);
	public long get_mCompositorRefMrtIndex()
	{
		long jniValue = get_mCompositorRefMrtIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCompositorRefMrtIndex_ev_size_t (long pNativeObject, long value);
	public void set_mCompositorRefMrtIndex(long mCompositorRefMrtIndex)
	{
		long mCompositorRefMrtIndexParamValue = mCompositorRefMrtIndex;
		
		set_mCompositorRefMrtIndex_ev_size_t(this.nativeObject.pointer, mCompositorRefMrtIndexParamValue);
	}
	
	native private long get_mFrames_void(long pNativeObject);
	public com.earthview.world.core.StringVector get_mFrames()
	{
		long jniValue = get_mFrames_void(this.nativeObject.pointer);
		
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mFrames_StringVector (long pNativeObject, long value);
	public void set_mFrames(com.earthview.world.core.StringVector mFrames)
	{
		long mFramesParamValue = mFrames.nativeObject.pointer;
		
		set_mFrames_StringVector(this.nativeObject.pointer, mFramesParamValue);
	}
	
	native private long get_mFramePtrs_void(long pNativeObject);
	public com.earthview.world.graphic.ShadowTextureList get_mFramePtrs()
	{
		long jniValue = get_mFramePtrs_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ShadowTextureList __returnValue = new com.earthview.world.graphic.ShadowTextureList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowTextureList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowTextureList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowTextureList");
		}
		return __returnValue;
	}
	
	native private void set_mFramePtrs_ShadowTextureList (long pNativeObject, long value);
	public void set_mFramePtrs(com.earthview.world.graphic.ShadowTextureList mFramePtrs)
	{
		long mFramePtrsParamValue = mFramePtrs.nativeObject.pointer;
		
		set_mFramePtrs_ShadowTextureList(this.nativeObject.pointer, mFramePtrsParamValue);
	}
	
	native private String get_mName_void(long pNativeObject);
	public String get_mName()
	{
		String jniValue = get_mName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mName_EVString (long pNativeObject, String value);
	public void set_mName(String mName)
	{
		String mNameParamValue = mName;
		
		set_mName_EVString(this.nativeObject.pointer, mNameParamValue);
	}
	
	native private String get_mTextureNameAlias_void(long pNativeObject);
	public String get_mTextureNameAlias()
	{
		String jniValue = get_mTextureNameAlias_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTextureNameAlias_EVString (long pNativeObject, String value);
	public void set_mTextureNameAlias(String mTextureNameAlias)
	{
		String mTextureNameAliasParamValue = mTextureNameAlias;
		
		set_mTextureNameAlias_EVString(this.nativeObject.pointer, mTextureNameAliasParamValue);
	}
	
	native private long get_mEffects_void(long pNativeObject);
	public com.earthview.world.graphic.TextureUnitState.TextureUnitStateEffectMap get_mEffects()
	{
		long jniValue = get_mEffects_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.TextureUnitState.TextureUnitStateEffectMap __returnValue = new com.earthview.world.graphic.TextureUnitState.TextureUnitStateEffectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CTextureUnitStateEffectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureUnitState.TextureUnitStateEffectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTextureUnitStateEffectMap");
		}
		return __returnValue;
	}
	
	native private void set_mEffects_CTextureUnitStateEffectMap (long pNativeObject, long value);
	public void set_mEffects(com.earthview.world.graphic.TextureUnitState.TextureUnitStateEffectMap mEffects)
	{
		long mEffectsParamValue = mEffects.nativeObject.pointer;
		
		set_mEffects_CTextureUnitStateEffectMap(this.nativeObject.pointer, mEffectsParamValue);
	}
	
	native private String get_mCompositorRefName_void(long pNativeObject);
	public String get_mCompositorRefName()
	{
		String jniValue = get_mCompositorRefName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCompositorRefName_EVString (long pNativeObject, String value);
	public void set_mCompositorRefName(String mCompositorRefName)
	{
		String mCompositorRefNameParamValue = mCompositorRefName;
		
		set_mCompositorRefName_EVString(this.nativeObject.pointer, mCompositorRefNameParamValue);
	}
	
	native private String get_mCompositorRefTexName_void(long pNativeObject);
	public String get_mCompositorRefTexName()
	{
		String jniValue = get_mCompositorRefTexName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCompositorRefTexName_EVString (long pNativeObject, String value);
	public void set_mCompositorRefTexName(String mCompositorRefTexName)
	{
		String mCompositorRefTexNameParamValue = mCompositorRefTexName;
		
		set_mCompositorRefTexName_EVString(this.nativeObject.pointer, mCompositorRefTexNameParamValue);
	}
	
	native private long get_mParent_void(long pNativeObject);
	public com.earthview.world.graphic.Pass get_mParent()
	{
		long jniValue = get_mParent_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mParent_CPass (long pNativeObject, long value);
	public void set_mParent(com.earthview.world.graphic.Pass mParent)
	{
		long mParentParamValue = (mParent == null ? 0L : mParent.nativeObject.pointer);
		
		set_mParent_CPass(this.nativeObject.pointer, mParentParamValue);
	}
	
	native private long get_mAnimController_void(long pNativeObject);
	public com.earthview.world.graphic.Controller get_mAnimController()
	{
		long jniValue = get_mAnimController_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	
	native private void set_mAnimController_CController (long pNativeObject, long value);
	public void set_mAnimController(com.earthview.world.graphic.Controller mAnimController)
	{
		long mAnimControllerParamValue = (mAnimController == null ? 0L : mAnimController.nativeObject.pointer);
		
		set_mAnimController_CController(this.nativeObject.pointer, mAnimControllerParamValue);
	}
	
	native private void recalcTextureMatrix_void(long pNativeObject);
	/**
	 * 重新计算纹理变换矩阵
	 * @param  
	 */
	public void recalcTextureMatrix()
	{
		recalcTextureMatrix_void(this.nativeObject.pointer);
	}
	native private void createAnimController_void(long pNativeObject);
	/**
	 * 创建纹理动画控制器
	 * @param  
	 */
	public void createAnimController()
	{
		createAnimController_void(this.nativeObject.pointer);
	}
	native private void createEffectController_TextureEffect(long pNativeObject, long effect);
	/**
	 * 创建纹理效果控制器
	 * @param effect 纹理效果
	 */
	public void createEffectController(com.earthview.world.graphic.TextureUnitState.TextureEffect effect)
	{
		long effectParamValue = effect.nativeObject.pointer;
		createEffectController_TextureEffect(this.nativeObject.pointer, effectParamValue);
	}
	native private void ensurePrepared_ev_size_t(long pNativeObject, long frame);
	/**
	 * 确保给定序号的纹理已准备就绪
	 * @param  
	 */
	public void ensurePrepared(long frame)
	{
		long frameParamValue = frame;
		ensurePrepared_ev_size_t(this.nativeObject.pointer, frameParamValue);
	}
	native private void ensureLoaded_ev_size_t(long pNativeObject, long frame);
	/**
	 * 确保给定序号的纹理已加载完成
	 * @param  
	 */
	public void ensureLoaded(long frame)
	{
		long frameParamValue = frame;
		ensureLoaded_ev_size_t(this.nativeObject.pointer, frameParamValue);
	}
	public TextureUnitState(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextureUnitState(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextureUnitState fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextureUnitState obj = null;
 		if(baseObj instanceof TextureUnitState)
		{
			obj = (TextureUnitState)baseObj;
		} else {
			obj = new TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextureUnitState");
			obj.increaseCast();
		}

		return obj;
	}
}
