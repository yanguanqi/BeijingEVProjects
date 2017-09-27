package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 纹理映射信息体
 */
public class TextureInfo extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CTextureInfo", new TextureInfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public TextureInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTextureInfo", null);
	}

	native private boolean equal_CTextureInfo(long pNativeObject, long rhs);
	/**
	 * 纹理信息是否相同
	 * @param rhs 纹理信息
	 */
	public boolean equal(com.earthview.world.spatial.display.TextureInfo rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = equal_CTextureInfo(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 序列化成流
	 * @param  
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从数据流恢复Symbol属性
	 * @param stream 流对象
	 */
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private boolean getDirty_void(long pNativeObject);
	/**
	 * 获取是否已改变，主要是流
	 * @param  
	 * @return 是否已改变
	 */
	public boolean getDirty()
	{
		boolean returnValue = getDirty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDirty_ev_bool(long pNativeObject, boolean dirty);
	/**
	 * 设置是否已改变，主要是流
	 * @param dirty 是否已改变
	 */
	public void setDirty(boolean dirty)
	{
		boolean dirtyParamValue = dirty;
		setDirty_ev_bool(this.nativeObject.pointer, dirtyParamValue);
	}
	native private String get_TextureID_void(long pNativeObject);
	public String get_TextureID()
	{
		String jniValue = get_TextureID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_TextureID_EVString (long pNativeObject, String value);
	public void set_TextureID(String TextureID)
	{
		String TextureIDParamValue = TextureID;
		
		set_TextureID_EVString(this.nativeObject.pointer, TextureIDParamValue);
	}
	
	native private float get_MinX_void(long pNativeObject);
	public float get_MinX()
	{
		float jniValue = get_MinX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_MinX_ev_real32 (long pNativeObject, float value);
	public void set_MinX(float MinX)
	{
		float MinXParamValue = MinX;
		
		set_MinX_ev_real32(this.nativeObject.pointer, MinXParamValue);
	}
	
	native private float get_MaxX_void(long pNativeObject);
	public float get_MaxX()
	{
		float jniValue = get_MaxX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_MaxX_ev_real32 (long pNativeObject, float value);
	public void set_MaxX(float MaxX)
	{
		float MaxXParamValue = MaxX;
		
		set_MaxX_ev_real32(this.nativeObject.pointer, MaxXParamValue);
	}
	
	native private float get_MinY_void(long pNativeObject);
	public float get_MinY()
	{
		float jniValue = get_MinY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_MinY_ev_real32 (long pNativeObject, float value);
	public void set_MinY(float MinY)
	{
		float MinYParamValue = MinY;
		
		set_MinY_ev_real32(this.nativeObject.pointer, MinYParamValue);
	}
	
	native private float get_MaxY_void(long pNativeObject);
	public float get_MaxY()
	{
		float jniValue = get_MaxY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_MaxY_ev_real32 (long pNativeObject, float value);
	public void set_MaxY(float MaxY)
	{
		float MaxYParamValue = MaxY;
		
		set_MaxY_ev_real32(this.nativeObject.pointer, MaxYParamValue);
	}
	
	native private float get_UnitSizeX_void(long pNativeObject);
	public float get_UnitSizeX()
	{
		float jniValue = get_UnitSizeX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_UnitSizeX_ev_real32 (long pNativeObject, float value);
	public void set_UnitSizeX(float UnitSizeX)
	{
		float UnitSizeXParamValue = UnitSizeX;
		
		set_UnitSizeX_ev_real32(this.nativeObject.pointer, UnitSizeXParamValue);
	}
	
	native private float get_UnitSizeY_void(long pNativeObject);
	public float get_UnitSizeY()
	{
		float jniValue = get_UnitSizeY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_UnitSizeY_ev_real32 (long pNativeObject, float value);
	public void set_UnitSizeY(float UnitSizeY)
	{
		float UnitSizeYParamValue = UnitSizeY;
		
		set_UnitSizeY_ev_real32(this.nativeObject.pointer, UnitSizeYParamValue);
	}
	
	native private int get_TAM_void(long pNativeObject);
	public com.earthview.world.spatial.display.EVTextureAddressMode get_TAM()
	{
		int jniValue = get_TAM_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.display.EVTextureAddressMode.toEnum(jniValue);
	}
	
	native private void set_TAM_EVTextureAddressMode (long pNativeObject, int value);
	public void set_TAM(com.earthview.world.spatial.display.EVTextureAddressMode TAM)
	{
		int TAMParamValue = TAM.getValue();
		
		set_TAM_EVTextureAddressMode(this.nativeObject.pointer, TAMParamValue);
	}
	
	native private long get_TextureStream_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr get_TextureStream()
	{
		long jniValue = get_TextureStream_void(this.nativeObject.pointer);
		
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	
	native private void set_TextureStream_MemoryDataStreamPtr (long pNativeObject, long value);
	public void set_TextureStream(com.earthview.world.core.MemoryDataStreamPtr TextureStream)
	{
		long TextureStreamParamValue = TextureStream.nativeObject.pointer;
		
		set_TextureStream_MemoryDataStreamPtr(this.nativeObject.pointer, TextureStreamParamValue);
	}
	
	native private float get_PicTransparency_void(long pNativeObject);
	public float get_PicTransparency()
	{
		float jniValue = get_PicTransparency_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_PicTransparency_ev_real32 (long pNativeObject, float value);
	public void set_PicTransparency(float PicTransparency)
	{
		float PicTransparencyParamValue = PicTransparency;
		
		set_PicTransparency_ev_real32(this.nativeObject.pointer, PicTransparencyParamValue);
	}
	
	public TextureInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextureInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextureInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextureInfo obj = null;
 		if(baseObj instanceof TextureInfo)
		{
			obj = (TextureInfo)baseObj;
		} else {
			obj = new TextureInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextureInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
