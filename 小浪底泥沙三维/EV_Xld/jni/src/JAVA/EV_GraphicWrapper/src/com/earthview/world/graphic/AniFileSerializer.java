package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AniFileSerializer extends com.earthview.world.graphic.AnimationBaseSerializer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAniFileSerializer", new AniFileSerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAniFileSerializerProxy", new AniFileSerializerClassFactory());
	}

	public AniFileSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAniFileSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AniFileSerializer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void fromStream_DataStreamPtr(long pNativeObject, long stream);
	public void fromStream(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_DataStreamPtr(long pNativeObject, long stream);
	public void toStream(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_DataStreamPtr_Endian(long pNativeObject, long stream, int endianMode);
	public void toStream(com.earthview.world.core.DataStreamPtr stream, com.earthview.world.graphic.AnimationBaseSerializer.Endian endianMode)
	{
		long streamParamValue = stream.nativeObject.pointer;
		int endianModeParamValue = endianMode.getValue();
		toStream_DataStreamPtr_Endian(this.nativeObject.pointer, streamParamValue, endianModeParamValue);
	}
	native private long getRootNodeSerializer_DataStreamPtr(long pNativeObject, long stream);
	///#if USEXML
	///					virtual void fromXMl(_in const EVString& filePath);
	///
	///					virtual void toXml(_in const EVString& filePath);
	///
	///					void fromString(_in const EVString& xmlContext);
	///
	///					EVString toString();
	///#endif
	public com.earthview.world.graphic.NodeSerializer getRootNodeSerializer(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = getRootNodeSerializer_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
		com.earthview.world.graphic.NodeSerializer __returnValue = new com.earthview.world.graphic.NodeSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CNodeSerializer");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NodeSerializer)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CNodeSerializer");
		}
		return __returnValue;
	}
	native private long getRootNodeSerializer_void(long pNativeObject);
	public com.earthview.world.graphic.NodeSerializer getRootNodeSerializer()
	{
		long returnValue = getRootNodeSerializer_void(this.nativeObject.pointer);
		com.earthview.world.graphic.NodeSerializer __returnValue = new com.earthview.world.graphic.NodeSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CNodeSerializer");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NodeSerializer)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CNodeSerializer");
		}
		return __returnValue;
	}
	native private void setRootNodeSerializer_CNodeSerializer(long pNativeObject, long rootNodeSerializer);
	public void setRootNodeSerializer(com.earthview.world.graphic.NodeSerializer rootNodeSerializer)
	{
		long rootNodeSerializerParamValue = rootNodeSerializer.nativeObject.pointer;
		setRootNodeSerializer_CNodeSerializer(this.nativeObject.pointer, rootNodeSerializerParamValue);
	}
	native private long getFrameTagList_DataStreamPtr(long pNativeObject, long stream);
	public com.earthview.world.graphic.FrameTagList getFrameTagList(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = getFrameTagList_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
		com.earthview.world.graphic.FrameTagList __returnValue = new com.earthview.world.graphic.FrameTagList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFrameTagList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FrameTagList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFrameTagList");
		}
		return __returnValue;
	}
	native private long getFrameTagList_void(long pNativeObject);
	public com.earthview.world.graphic.FrameTagList getFrameTagList()
	{
		long returnValue = getFrameTagList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.FrameTagList __returnValue = new com.earthview.world.graphic.FrameTagList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFrameTagList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FrameTagList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFrameTagList");
		}
		return __returnValue;
	}
	native private void setFrameTagSerializerList_CFrameTagSerializerList(long pNativeObject, long frameTagSerializerList);
	public void setFrameTagSerializerList(com.earthview.world.graphic.FrameTagSerializerList frameTagSerializerList)
	{
		long frameTagSerializerListParamValue = frameTagSerializerList.nativeObject.pointer;
		setFrameTagSerializerList_CFrameTagSerializerList(this.nativeObject.pointer, frameTagSerializerListParamValue);
	}
	native private double getFrameTagLength_DataStreamPtr(long pNativeObject, long stream);
	public double getFrameTagLength(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		double returnValue = getFrameTagLength_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}
	native private double getFrameTagLength_void(long pNativeObject);
	public double getFrameTagLength()
	{
		double returnValue = getFrameTagLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCategoryList_DataStreamPtr(long pNativeObject, long stream);
	public com.earthview.world.graphic.CategoryList getCategoryList(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = getCategoryList_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
		com.earthview.world.graphic.CategoryList __returnValue = new com.earthview.world.graphic.CategoryList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCategoryList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CategoryList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCategoryList");
		}
		return __returnValue;
	}
	native private void setCategorySerializerList_CCategorySerializerList(long pNativeObject, long categatorySerializerList);
	public void setCategorySerializerList(com.earthview.world.graphic.CategorySerializerList categatorySerializerList)
	{
		long categatorySerializerListParamValue = categatorySerializerList.nativeObject.pointer;
		setCategorySerializerList_CCategorySerializerList(this.nativeObject.pointer, categatorySerializerListParamValue);
	}
	native private long getSubMeshMatrixColorList_DataStreamPtr(long pNativeObject, long stream);
	public com.earthview.world.graphic.SubMeshMatrixColorList getSubMeshMatrixColorList(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = getSubMeshMatrixColorList_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
		com.earthview.world.graphic.SubMeshMatrixColorList __returnValue = new com.earthview.world.graphic.SubMeshMatrixColorList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSubMeshMatrixColorList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SubMeshMatrixColorList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSubMeshMatrixColorList");
		}
		return __returnValue;
	}
	native private void setMatrixColorSerializerList_CSubMeshMatrixColorSeriailzerList(long pNativeObject, long subMeshMatrixColorSerializerList);
	public void setMatrixColorSerializerList(com.earthview.world.graphic.SubMeshMatrixColorSeriailzerList subMeshMatrixColorSerializerList)
	{
		long subMeshMatrixColorSerializerListParamValue = subMeshMatrixColorSerializerList.nativeObject.pointer;
		setMatrixColorSerializerList_CSubMeshMatrixColorSeriailzerList(this.nativeObject.pointer, subMeshMatrixColorSerializerListParamValue);
	}
	native private boolean getAnimation_DataStreamPtr(long pNativeObject, long stream);
	public boolean getAnimation(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = getAnimation_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}
	native private void setReadStream_DataStreamPtr(long pNativeObject, long stream);
	public void setReadStream(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		setReadStream_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private long getCategorySerializerList_DataStreamPtr(long pNativeObject, long stream);
	///
	public com.earthview.world.graphic.CategorySerializerList getCategorySerializerList(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = getCategorySerializerList_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
		com.earthview.world.graphic.CategorySerializerList __returnValue = new com.earthview.world.graphic.CategorySerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCategorySerializerList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CategorySerializerList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCategorySerializerList");
		}
		return __returnValue;
	}
	native private boolean initAniFileVersion_DataStreamPtr(long pNativeObject, long stream);
	///
	public boolean initAniFileVersion(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = initAniFileVersion_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}
	public AniFileSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AniFileSerializer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void fromStreamImplement(com.earthview.world.core.DataStreamPtr stream)
	{
		super.fromStreamImplement_NoVirtual(stream);
	}
	public void toStreamImplement(com.earthview.world.core.DataStreamPtr stream)
	{
		super.toStreamImplement_NoVirtual(stream);
	}
	public void flipToLittleEndian(VoidPointer pData, long size, long count)
	{
		super.flipToLittleEndian_NoVirtual(pData, size, count);
	}
	public void flipToLittleEndian(VoidPointer pData, long size)
	{
		super.flipToLittleEndian_NoVirtual(pData, size);
	}
	public void flipFromLittleEndian(VoidPointer pData, long size, long count)
	{
		super.flipFromLittleEndian_NoVirtual(pData, size, count);
	}
	public void flipFromLittleEndian(VoidPointer pData, long size)
	{
		super.flipFromLittleEndian_NoVirtual(pData, size);
	}
	public void flipEndian(VoidPointer pData, long size, long count)
	{
		super.flipEndian_NoVirtual(pData, size, count);
	}
	public void flipEndian(VoidPointer pData, long size)
	{
		super.flipEndian_NoVirtual(pData, size);
	}
	//// Determine the endianness of the incoming stream compared to native
	public void determineEndianness(com.earthview.world.core.DataStreamPtr stream)
	{
		super.determineEndianness_NoVirtual(stream);
	}
	//// Determine the endianness to write with based on option
	public void determineEndianness(com.earthview.world.graphic.AnimationBaseSerializer.Endian requestedEndian)
	{
		super.determineEndianness_NoVirtual(requestedEndian);
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
	
	public static AniFileSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AniFileSerializer obj = null;
 		if(baseObj instanceof AniFileSerializer)
		{
			obj = (AniFileSerializer)baseObj;
		} else {
			obj = new AniFileSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAniFileSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
