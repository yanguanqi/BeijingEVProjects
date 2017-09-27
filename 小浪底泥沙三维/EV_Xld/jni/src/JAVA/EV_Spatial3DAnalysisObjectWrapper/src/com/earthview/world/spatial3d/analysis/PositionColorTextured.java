package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 临时顶点结构
 */
public class PositionColorTextured extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CPositionColorTextured", new PositionColorTexturedClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public PositionColorTextured() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPositionColorTextured", null);
	}

	native private long get_mPosition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mPosition()
	{
		long jniValue = get_mPosition_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mPosition_CVector3 (long pNativeObject, long value);
	public void set_mPosition(com.earthview.world.spatial.math.Vector3 mPosition)
	{
		long mPositionParamValue = mPosition.nativeObject.pointer;
		
		set_mPosition_CVector3(this.nativeObject.pointer, mPositionParamValue);
	}
	
	native private float get_mA_void(long pNativeObject);
	public float get_mA()
	{
		float jniValue = get_mA_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mA_ev_real32 (long pNativeObject, float value);
	public void set_mA(float mA)
	{
		float mAParamValue = mA;
		
		set_mA_ev_real32(this.nativeObject.pointer, mAParamValue);
	}
	
	native private long get_mTextureUV_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector2 get_mTextureUV()
	{
		long jniValue = get_mTextureUV_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	
	native private void set_mTextureUV_CVector2 (long pNativeObject, long value);
	public void set_mTextureUV(com.earthview.world.spatial.math.Vector2 mTextureUV)
	{
		long mTextureUVParamValue = mTextureUV.nativeObject.pointer;
		
		set_mTextureUV_CVector2(this.nativeObject.pointer, mTextureUVParamValue);
	}
	
	public PositionColorTextured(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PositionColorTextured(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PositionColorTextured fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PositionColorTextured obj = null;
 		if(baseObj instanceof PositionColorTextured)
		{
			obj = (PositionColorTextured)baseObj;
		} else {
			obj = new PositionColorTextured(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPositionColorTextured");
			obj.increaseCast();
		}

		return obj;
	}
}
