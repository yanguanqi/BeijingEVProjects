package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Simpleline extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CSimpleline", new SimplelineClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCSimplelineProxy", new SimplelineClassFactory());
	}

	public Simpleline() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSimplelineProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.Simpleline".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long addSubSimpleline_void_callback()
	{
		com.earthview.industryengine.industrygraphic.SubSimpleline returnValue = addSubSimpleline();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long addSubSimpleline_void(long pNativeObject);
	public com.earthview.industryengine.industrygraphic.SubSimpleline addSubSimpleline()
	{
		long returnValue = addSubSimpleline_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.SubSimpleline __returnValue = new com.earthview.industryengine.industrygraphic.SubSimpleline(CreatedWhenConstruct.CWC_NotToCreate, "CSubSimpleline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.SubSimpleline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubSimpleline");
		}
		return __returnValue;
	}
	native private long addSubSimpleline_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.industrygraphic.SubSimpleline addSubSimpleline_NoVirtual()
	{
		long returnValue = addSubSimpleline_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.SubSimpleline __returnValue = new com.earthview.industryengine.industrygraphic.SubSimpleline(CreatedWhenConstruct.CWC_NotToCreate, "CSubSimpleline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.SubSimpleline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubSimpleline");
		}
		return __returnValue;
	}

	protected  long getSubSimpleline_ev_int32_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.industryengine.industrygraphic.SubSimpleline returnValue = getSubSimpleline(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSubSimpleline_ev_int32(long pNativeObject, int index);
	public com.earthview.industryengine.industrygraphic.SubSimpleline getSubSimpleline(int index)
	{
		int indexParamValue = index;
		long returnValue = getSubSimpleline_ev_int32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.SubSimpleline __returnValue = new com.earthview.industryengine.industrygraphic.SubSimpleline(CreatedWhenConstruct.CWC_NotToCreate, "CSubSimpleline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.SubSimpleline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubSimpleline");
		}
		return __returnValue;
	}
	native private long getSubSimpleline_ev_int32_NoVirtual(long pNativeObject, int index);
	protected com.earthview.industryengine.industrygraphic.SubSimpleline getSubSimpleline_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getSubSimpleline_ev_int32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.SubSimpleline __returnValue = new com.earthview.industryengine.industrygraphic.SubSimpleline(CreatedWhenConstruct.CWC_NotToCreate, "CSubSimpleline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.SubSimpleline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubSimpleline");
		}
		return __returnValue;
	}

	protected  void removeSubSimpleline_ev_int32_callback(int index)
	{
		int indexParamValue = index;
		removeSubSimpleline(indexParamValue);
	}

	native private void removeSubSimpleline_ev_int32(long pNativeObject, int index);
	public void removeSubSimpleline(int index)
	{
		int indexParamValue = index;
		removeSubSimpleline_ev_int32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeSubSimpleline_ev_int32_NoVirtual(long pNativeObject, int index);
	protected void removeSubSimpleline_NoVirtual(int index)
	{
		int indexParamValue = index;
		removeSubSimpleline_ev_int32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	protected  void removeAllPoints_void_callback()
	{
		removeAllPoints();
	}

	native private void removeAllPoints_void(long pNativeObject);
	public void removeAllPoints()
	{
		removeAllPoints_void(this.nativeObject.pointer);
	}
	native private void removeAllPoints_void_NoVirtual(long pNativeObject);
	protected void removeAllPoints_NoVirtual()
	{
		removeAllPoints_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getColor_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getColor();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getColor_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue getColor()
	{
		long returnValue = getColor_void(this.nativeObject.pointer);
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
	native private long getColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getColor_NoVirtual()
	{
		long returnValue = getColor_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setColor_ev_real32_ev_real32_ev_real32_ev_real32_callback(float red, float green, float blue, float alpha)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		float alphaParamValue = alpha;
		setColor(redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}

	native private void setColor_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, float red, float green, float blue, float alpha);
	public void setColor(float red, float green, float blue, float alpha)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		float alphaParamValue = alpha;
		setColor_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setColor_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(long pNativeObject, float red, float green, float blue, float alpha);
	protected void setColor_NoVirtual(float red, float green, float blue, float alpha)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		float alphaParamValue = alpha;
		setColor_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}

	protected  int getID_void_callback()
	{
		int returnValue = getID();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getID_void(long pNativeObject);
	public int getID()
	{
		int returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getID_void_NoVirtual(long pNativeObject);
	protected int getID_NoVirtual()
	{
		int returnValue = getID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setID_ev_int32_callback(int id)
	{
		int idParamValue = id;
		setID(idParamValue);
	}

	native private void setID_ev_int32(long pNativeObject, int id);
	public void setID(int id)
	{
		int idParamValue = id;
		setID_ev_int32(this.nativeObject.pointer, idParamValue);
	}
	native private void setID_ev_int32_NoVirtual(long pNativeObject, int id);
	protected void setID_NoVirtual(int id)
	{
		int idParamValue = id;
		setID_ev_int32_NoVirtual(this.nativeObject.pointer, idParamValue);
	}

	protected  int getCount_void_callback()
	{
		int returnValue = getCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getCount_void(long pNativeObject);
	public int getCount()
	{
		int returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getCount_void_NoVirtual(long pNativeObject);
	protected int getCount_NoVirtual()
	{
		int returnValue = getCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getVisible_void_callback()
	{
		boolean returnValue = getVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getVisible_void(long pNativeObject);
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getVisible_void_NoVirtual(long pNativeObject);
	protected boolean getVisible_NoVirtual()
	{
		boolean returnValue = getVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setVisible_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setVisible(valueParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean value);
	public void setVisible(boolean value)
	{
		boolean valueParamValue = value;
		setVisible_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setVisible_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  boolean containVertex_ev_uint32_callback(long indexPos)
	{
		long indexPosParamValue = indexPos;
		boolean returnValue = containVertex(indexPosParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean containVertex_ev_uint32(long pNativeObject, long indexPos);
	public boolean containVertex(long indexPos)
	{
		long indexPosParamValue = indexPos;
		boolean returnValue = containVertex_ev_uint32(this.nativeObject.pointer, indexPosParamValue);
		return returnValue;
	}
	native private boolean containVertex_ev_uint32_NoVirtual(long pNativeObject, long indexPos);
	protected boolean containVertex_NoVirtual(long indexPos)
	{
		long indexPosParamValue = indexPos;
		boolean returnValue = containVertex_ev_uint32_NoVirtual(this.nativeObject.pointer, indexPosParamValue);
		return returnValue;
	}

	protected  void setNeedHightlight_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setNeedHightlight(valueParamValue);
	}

	native private void setNeedHightlight_ev_bool(long pNativeObject, boolean value);
	public void setNeedHightlight(boolean value)
	{
		boolean valueParamValue = value;
		setNeedHightlight_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setNeedHightlight_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setNeedHightlight_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setNeedHightlight_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  boolean getNeedHightlight_void_callback()
	{
		boolean returnValue = getNeedHightlight();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getNeedHightlight_void(long pNativeObject);
	public boolean getNeedHightlight()
	{
		boolean returnValue = getNeedHightlight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getNeedHightlight_void_NoVirtual(long pNativeObject);
	protected boolean getNeedHightlight_NoVirtual()
	{
		boolean returnValue = getNeedHightlight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private static int get_UNIQUE_ID_void();
	public static int get_UNIQUE_ID()
	{
		int jniValue = get_UNIQUE_ID_void();
		
		return jniValue;
	}
	
	native private static void set_UNIQUE_ID_ev_int32 (int value);
	public static void set_UNIQUE_ID(int UNIQUE_ID)
	{
		int UNIQUE_IDParamValue = UNIQUE_ID;
		
		set_UNIQUE_ID_ev_int32(UNIQUE_IDParamValue);
	}
	
	public Simpleline(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Simpleline(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_addSubSimpleline_void(long pNativeObject, String method);
	native protected void register_getSubSimpleline_ev_int32(long pNativeObject, String method);
	native protected void register_removeSubSimpleline_ev_int32(long pNativeObject, String method);
	native protected void register_removeAllPoints_void(long pNativeObject, String method);
	native protected void register_getColor_void(long pNativeObject, String method);
	native protected void register_setColor_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_getID_void(long pNativeObject, String method);
	native protected void register_setID_ev_int32(long pNativeObject, String method);
	native protected void register_getCount_void(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_containVertex_ev_uint32(long pNativeObject, String method);
	native protected void register_setNeedHightlight_ev_bool(long pNativeObject, String method);
	native protected void register_getNeedHightlight_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addSubSimpleline_void(this.nativeObject.pointer, "addSubSimpleline_void_callback");
			this.register_getSubSimpleline_ev_int32(this.nativeObject.pointer, "getSubSimpleline_ev_int32_callback");
			this.register_removeSubSimpleline_ev_int32(this.nativeObject.pointer, "removeSubSimpleline_ev_int32_callback");
			this.register_removeAllPoints_void(this.nativeObject.pointer, "removeAllPoints_void_callback");
			this.register_getColor_void(this.nativeObject.pointer, "getColor_void_callback");
			this.register_setColor_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "setColor_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register_getID_void(this.nativeObject.pointer, "getID_void_callback");
			this.register_setID_ev_int32(this.nativeObject.pointer, "setID_ev_int32_callback");
			this.register_getCount_void(this.nativeObject.pointer, "getCount_void_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_containVertex_ev_uint32(this.nativeObject.pointer, "containVertex_ev_uint32_callback");
			this.register_setNeedHightlight_ev_bool(this.nativeObject.pointer, "setNeedHightlight_ev_bool_callback");
			this.register_getNeedHightlight_void(this.nativeObject.pointer, "getNeedHightlight_void_callback");
		}
	}
	
	public static Simpleline fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Simpleline obj = null;
 		if(baseObj instanceof Simpleline)
		{
			obj = (Simpleline)baseObj;
		} else {
			obj = new Simpleline(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSimpleline");
			obj.increaseCast();
		}

		return obj;
	}
}
