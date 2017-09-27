package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationBaseSerializer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationBaseSerializer", new AnimationBaseSerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAnimationBaseSerializerProxy", new AnimationBaseSerializerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public AnimationBaseSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAnimationBaseSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AnimationBaseSerializer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public enum Endian implements INativeEnum<Endian> {
		ENDIAN_NATIVE(EndianHelper.ENUM_VALUES[0]),
		ENDIAN_BIG(EndianHelper.ENUM_VALUES[1]),
		ENDIAN_LITTLE(EndianHelper.ENUM_VALUES[2]);
		private int value;
		Endian(int i) {
			this.value = i;
		}
		public Endian getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final Endian toEnum(int retval) {
			if(retval == ENDIAN_NATIVE.value){
				return ENDIAN_NATIVE;
			}
			else if(retval == ENDIAN_BIG.value){
				return ENDIAN_BIG;
			}
			else if(retval == ENDIAN_LITTLE.value){
				return ENDIAN_LITTLE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EndianHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// Use little endian (0x1000 is serialised as 0x00 0x10)
	public enum ModelAnimationChunkID implements INativeEnum<ModelAnimationChunkID> {
		UNKNOWNCHUNK(ModelAnimationChunkIDHelper.ENUM_VALUES[0]),
		FRAMETAGLIST(ModelAnimationChunkIDHelper.ENUM_VALUES[1]),
		FRAME_TAG(ModelAnimationChunkIDHelper.ENUM_VALUES[2]),
		NODE_TAG(ModelAnimationChunkIDHelper.ENUM_VALUES[3]),
		CATEGORY(ModelAnimationChunkIDHelper.ENUM_VALUES[4]),
		NAMEVALUEPAIR(ModelAnimationChunkIDHelper.ENUM_VALUES[5]),
		TRANSLATION(ModelAnimationChunkIDHelper.ENUM_VALUES[6]),
		ROTATION(ModelAnimationChunkIDHelper.ENUM_VALUES[7]),
		SCALE(ModelAnimationChunkIDHelper.ENUM_VALUES[8]),
		KEYFRAME(ModelAnimationChunkIDHelper.ENUM_VALUES[9]),
		ANIMATION(ModelAnimationChunkIDHelper.ENUM_VALUES[10]),
		MATRIX(ModelAnimationChunkIDHelper.ENUM_VALUES[11]),
		COLOR(ModelAnimationChunkIDHelper.ENUM_VALUES[12]),
		SUBMESH(ModelAnimationChunkIDHelper.ENUM_VALUES[13]),
		NODE(ModelAnimationChunkIDHelper.ENUM_VALUES[14]),
		ANIFILE(ModelAnimationChunkIDHelper.ENUM_VALUES[15]),
		CATEGORYLIST(ModelAnimationChunkIDHelper.ENUM_VALUES[16]),
		MATRIXCOLOR(ModelAnimationChunkIDHelper.ENUM_VALUES[17]),
		SUMMESHMATRIXCOLOR(ModelAnimationChunkIDHelper.ENUM_VALUES[18]),
		SUMMESHMATRIXCOLORLIST(ModelAnimationChunkIDHelper.ENUM_VALUES[19]),
		ANIFILEANIMATION(ModelAnimationChunkIDHelper.ENUM_VALUES[20]);
		private int value;
		ModelAnimationChunkID(int i) {
			this.value = i;
		}
		public ModelAnimationChunkID getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ModelAnimationChunkID toEnum(int retval) {
			if(retval == UNKNOWNCHUNK.value){
				return UNKNOWNCHUNK;
			}
			else if(retval == FRAMETAGLIST.value){
				return FRAMETAGLIST;
			}
			else if(retval == FRAME_TAG.value){
				return FRAME_TAG;
			}
			else if(retval == NODE_TAG.value){
				return NODE_TAG;
			}
			else if(retval == CATEGORY.value){
				return CATEGORY;
			}
			else if(retval == NAMEVALUEPAIR.value){
				return NAMEVALUEPAIR;
			}
			else if(retval == TRANSLATION.value){
				return TRANSLATION;
			}
			else if(retval == ROTATION.value){
				return ROTATION;
			}
			else if(retval == SCALE.value){
				return SCALE;
			}
			else if(retval == KEYFRAME.value){
				return KEYFRAME;
			}
			else if(retval == ANIMATION.value){
				return ANIMATION;
			}
			else if(retval == MATRIX.value){
				return MATRIX;
			}
			else if(retval == COLOR.value){
				return COLOR;
			}
			else if(retval == SUBMESH.value){
				return SUBMESH;
			}
			else if(retval == NODE.value){
				return NODE;
			}
			else if(retval == ANIFILE.value){
				return ANIFILE;
			}
			else if(retval == CATEGORYLIST.value){
				return CATEGORYLIST;
			}
			else if(retval == MATRIXCOLOR.value){
				return MATRIXCOLOR;
			}
			else if(retval == SUMMESHMATRIXCOLOR.value){
				return SUMMESHMATRIXCOLOR;
			}
			else if(retval == SUMMESHMATRIXCOLORLIST.value){
				return SUMMESHMATRIXCOLORLIST;
			}
			else if(retval == ANIFILEANIMATION.value){
				return ANIFILEANIMATION;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ModelAnimationChunkIDHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void setFlipEndian_ev_bool(long pNativeObject, boolean flipEndian);
	///0x8100,
	public void setFlipEndian(boolean flipEndian)
	{
		boolean flipEndianParamValue = flipEndian;
		setFlipEndian_ev_bool(this.nativeObject.pointer, flipEndianParamValue);
	}
	native private boolean getFilpEndian_void(long pNativeObject);
	public boolean getFilpEndian()
	{
		boolean returnValue = getFilpEndian_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLength_void(long pNativeObject);
	public long getLength()
	{
		long returnValue = getLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getChunkID_void(long pNativeObject);
	public int getChunkID()
	{
		int returnValue = getChunkID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void fromStream_DataStreamPtr(long pNativeObject, long stream);
	public void fromStream(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_DataStreamPtr_ModelAnimationChunkID(long pNativeObject, long stream, int filterChunkID);
	public void fromStream(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.AnimationBaseSerializer.ModelAnimationChunkID filterChunkID)
	{
		long streamParamValue = stream.nativeObject.pointer;
		int filterChunkIDParamValue = filterChunkID.getValue();
		fromStream_DataStreamPtr_ModelAnimationChunkID(this.nativeObject.pointer, streamParamValue, filterChunkIDParamValue);
	}
	protected  void fromStreamImplement_DataStreamPtr_callback(long stream)
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
		fromStreamImplement(streamParamValue);
	}

	native private void fromStreamImplement_DataStreamPtr(long pNativeObject, long stream);
	public void fromStreamImplement(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStreamImplement_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStreamImplement_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected void fromStreamImplement_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStreamImplement_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private void toStream_DataStreamPtr(long pNativeObject, long stream);
	public void toStream(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	protected  void toStreamImplement_DataStreamPtr_callback(long stream)
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
		toStreamImplement(streamParamValue);
	}

	native private void toStreamImplement_DataStreamPtr(long pNativeObject, long stream);
	public void toStreamImplement(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStreamImplement_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStreamImplement_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected void toStreamImplement_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStreamImplement_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private long get_mVersion_void(long pNativeObject);
	public long get_mVersion()
	{
		long jniValue = get_mVersion_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mVersion_ev_uint32 (long pNativeObject, long value);
	public void set_mVersion(long mVersion)
	{
		long mVersionParamValue = mVersion;
		
		set_mVersion_ev_uint32(this.nativeObject.pointer, mVersionParamValue);
	}
	
	protected  void flipToLittleEndian_void_ev_size_t_ev_size_t_callback(long pData, long size, long count)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		long countParamValue = count;
		flipToLittleEndian(pDataParamValue, sizeParamValue, countParamValue);
	}

	native private void flipToLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, long pData, long size, long count);
	public void flipToLittleEndian(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipToLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}
	native private void flipToLittleEndian_void_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long pData, long size, long count);
	protected void flipToLittleEndian_NoVirtual(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipToLittleEndian_void_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}

	protected  void flipToLittleEndian_void_ev_size_t_callback(long pData, long size)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		flipToLittleEndian(pDataParamValue, sizeParamValue);
	}

	native private void flipToLittleEndian_void_ev_size_t(long pNativeObject, long pData, long size);
	public void flipToLittleEndian(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipToLittleEndian_void_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}
	native private void flipToLittleEndian_void_ev_size_t_NoVirtual(long pNativeObject, long pData, long size);
	protected void flipToLittleEndian_NoVirtual(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipToLittleEndian_void_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}

	protected  void flipFromLittleEndian_void_ev_size_t_ev_size_t_callback(long pData, long size, long count)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		long countParamValue = count;
		flipFromLittleEndian(pDataParamValue, sizeParamValue, countParamValue);
	}

	native private void flipFromLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, long pData, long size, long count);
	public void flipFromLittleEndian(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipFromLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}
	native private void flipFromLittleEndian_void_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long pData, long size, long count);
	protected void flipFromLittleEndian_NoVirtual(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipFromLittleEndian_void_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}

	protected  void flipFromLittleEndian_void_ev_size_t_callback(long pData, long size)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		flipFromLittleEndian(pDataParamValue, sizeParamValue);
	}

	native private void flipFromLittleEndian_void_ev_size_t(long pNativeObject, long pData, long size);
	public void flipFromLittleEndian(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipFromLittleEndian_void_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}
	native private void flipFromLittleEndian_void_ev_size_t_NoVirtual(long pNativeObject, long pData, long size);
	protected void flipFromLittleEndian_NoVirtual(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipFromLittleEndian_void_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}

	protected  void flipEndian_void_ev_size_t_ev_size_t_callback(long pData, long size, long count)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		long countParamValue = count;
		flipEndian(pDataParamValue, sizeParamValue, countParamValue);
	}

	native private void flipEndian_void_ev_size_t_ev_size_t(long pNativeObject, long pData, long size, long count);
	public void flipEndian(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}
	native private void flipEndian_void_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long pData, long size, long count);
	protected void flipEndian_NoVirtual(VoidPointer pData, long size, long count)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		long countParamValue = count;
		flipEndian_void_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue, countParamValue);
	}

	protected  void flipEndian_void_ev_size_t_callback(long pData, long size)
	{
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		long sizeParamValue = size;
		flipEndian(pDataParamValue, sizeParamValue);
	}

	native private void flipEndian_void_ev_size_t(long pNativeObject, long pData, long size);
	public void flipEndian(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipEndian_void_ev_size_t(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}
	native private void flipEndian_void_ev_size_t_NoVirtual(long pNativeObject, long pData, long size);
	protected void flipEndian_NoVirtual(VoidPointer pData, long size)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		long sizeParamValue = size;
		flipEndian_void_ev_size_t_NoVirtual(this.nativeObject.pointer, pDataParamValue, sizeParamValue);
	}

	protected  void determineEndianness_DataStreamPtr_callback(long stream)
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
		determineEndianness(streamParamValue);
	}

	native private void determineEndianness_DataStreamPtr(long pNativeObject, long stream);
	//// Determine the endianness of the incoming stream compared to native
	public void determineEndianness(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		determineEndianness_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void determineEndianness_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected void determineEndianness_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		determineEndianness_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	protected  void determineEndianness_Endian_callback(int requestedEndian)
	{
		com.earthview.world.graphic.AnimationBaseSerializer.Endian requestedEndianParamValue = com.earthview.world.graphic.AnimationBaseSerializer.Endian.toEnum(requestedEndian);
		determineEndianness(requestedEndianParamValue);
	}

	native private void determineEndianness_Endian(long pNativeObject, int requestedEndian);
	//// Determine the endianness to write with based on option
	public void determineEndianness(com.earthview.world.graphic.AnimationBaseSerializer.Endian requestedEndian)
	{
		int requestedEndianParamValue = requestedEndian.getValue();
		determineEndianness_Endian(this.nativeObject.pointer, requestedEndianParamValue);
	}
	native private void determineEndianness_Endian_NoVirtual(long pNativeObject, int requestedEndian);
	protected void determineEndianness_NoVirtual(com.earthview.world.graphic.AnimationBaseSerializer.Endian requestedEndian)
	{
		int requestedEndianParamValue = requestedEndian.getValue();
		determineEndianness_Endian_NoVirtual(this.nativeObject.pointer, requestedEndianParamValue);
	}

	public AnimationBaseSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationBaseSerializer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_fromStreamImplement_DataStreamPtr(long pNativeObject, String method);
	native protected void register_toStreamImplement_DataStreamPtr(long pNativeObject, String method);
	native protected void register_flipToLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipToLittleEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_flipFromLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipFromLittleEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_determineEndianness_DataStreamPtr(long pNativeObject, String method);
	native protected void register_determineEndianness_Endian(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_fromStreamImplement_DataStreamPtr(this.nativeObject.pointer, "fromStreamImplement_DataStreamPtr_callback");
			this.register_toStreamImplement_DataStreamPtr(this.nativeObject.pointer, "toStreamImplement_DataStreamPtr_callback");
			this.register_flipToLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipToLittleEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipToLittleEndian_void_ev_size_t(this.nativeObject.pointer, "flipToLittleEndian_void_ev_size_t_callback");
			this.register_flipFromLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipFromLittleEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipFromLittleEndian_void_ev_size_t(this.nativeObject.pointer, "flipFromLittleEndian_void_ev_size_t_callback");
			this.register_flipEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipEndian_void_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_callback");
			this.register_determineEndianness_DataStreamPtr(this.nativeObject.pointer, "determineEndianness_DataStreamPtr_callback");
			this.register_determineEndianness_Endian(this.nativeObject.pointer, "determineEndianness_Endian_callback");
		}
	}
	
	public static AnimationBaseSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationBaseSerializer obj = null;
 		if(baseObj instanceof AnimationBaseSerializer)
		{
			obj = (AnimationBaseSerializer)baseObj;
		} else {
			obj = new AnimationBaseSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimationBaseSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
