package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubSimpleline extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CSubSimpleline", new SubSimplelineClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCSubSimplelineProxy", new SubSimplelineClassFactory());
	}

	public SubSimpleline() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSubSimplelineProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.SubSimpleline".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void addPoint_ev_real64_ev_real64_ev_real64_callback(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		addPoint(xParamValue, yParamValue, zParamValue);
	}

	native private void addPoint_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double z);
	public void addPoint(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		addPoint_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void addPoint_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y, double z);
	protected void addPoint_NoVirtual(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		addPoint_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}

	protected  long getPoint_ev_int32_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.spatial.math.Vector3 returnValue = getPoint(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPoint_ev_int32(long pNativeObject, int index);
	public com.earthview.world.spatial.math.Vector3 getPoint(int index)
	{
		int indexParamValue = index;
		long returnValue = getPoint_ev_int32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getPoint_ev_int32_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.spatial.math.Vector3 getPoint_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getPoint_ev_int32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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

	protected  void removePoint_ev_int32_callback(int index)
	{
		int indexParamValue = index;
		removePoint(indexParamValue);
	}

	native private void removePoint_ev_int32(long pNativeObject, int index);
	public void removePoint(int index)
	{
		int indexParamValue = index;
		removePoint_ev_int32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removePoint_ev_int32_NoVirtual(long pNativeObject, int index);
	protected void removePoint_NoVirtual(int index)
	{
		int indexParamValue = index;
		removePoint_ev_int32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  int getBeginVertexPos_void_callback()
	{
		int returnValue = getBeginVertexPos();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getBeginVertexPos_void(long pNativeObject);
	public int getBeginVertexPos()
	{
		int returnValue = getBeginVertexPos_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getBeginVertexPos_void_NoVirtual(long pNativeObject);
	protected int getBeginVertexPos_NoVirtual()
	{
		int returnValue = getBeginVertexPos_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setBeginVertexPos_ev_int32_callback(int beginVertexPos)
	{
		int beginVertexPosParamValue = beginVertexPos;
		setBeginVertexPos(beginVertexPosParamValue);
	}

	native private void setBeginVertexPos_ev_int32(long pNativeObject, int beginVertexPos);
	public void setBeginVertexPos(int beginVertexPos)
	{
		int beginVertexPosParamValue = beginVertexPos;
		setBeginVertexPos_ev_int32(this.nativeObject.pointer, beginVertexPosParamValue);
	}
	native private void setBeginVertexPos_ev_int32_NoVirtual(long pNativeObject, int beginVertexPos);
	protected void setBeginVertexPos_NoVirtual(int beginVertexPos)
	{
		int beginVertexPosParamValue = beginVertexPos;
		setBeginVertexPos_ev_int32_NoVirtual(this.nativeObject.pointer, beginVertexPosParamValue);
	}

	protected  int getEndVertexPos_void_callback()
	{
		int returnValue = getEndVertexPos();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getEndVertexPos_void(long pNativeObject);
	public int getEndVertexPos()
	{
		int returnValue = getEndVertexPos_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getEndVertexPos_void_NoVirtual(long pNativeObject);
	protected int getEndVertexPos_NoVirtual()
	{
		int returnValue = getEndVertexPos_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setEndVertexPos_ev_int32_callback(int endVertexPos)
	{
		int endVertexPosParamValue = endVertexPos;
		setEndVertexPos(endVertexPosParamValue);
	}

	native private void setEndVertexPos_ev_int32(long pNativeObject, int endVertexPos);
	public void setEndVertexPos(int endVertexPos)
	{
		int endVertexPosParamValue = endVertexPos;
		setEndVertexPos_ev_int32(this.nativeObject.pointer, endVertexPosParamValue);
	}
	native private void setEndVertexPos_ev_int32_NoVirtual(long pNativeObject, int endVertexPos);
	protected void setEndVertexPos_NoVirtual(int endVertexPos)
	{
		int endVertexPosParamValue = endVertexPos;
		setEndVertexPos_ev_int32_NoVirtual(this.nativeObject.pointer, endVertexPosParamValue);
	}

	protected  int getBeginIndicePos_void_callback()
	{
		int returnValue = getBeginIndicePos();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getBeginIndicePos_void(long pNativeObject);
	public int getBeginIndicePos()
	{
		int returnValue = getBeginIndicePos_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getBeginIndicePos_void_NoVirtual(long pNativeObject);
	protected int getBeginIndicePos_NoVirtual()
	{
		int returnValue = getBeginIndicePos_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setBeginIndicePos_ev_int32_callback(int beginIndicePos)
	{
		int beginIndicePosParamValue = beginIndicePos;
		setBeginIndicePos(beginIndicePosParamValue);
	}

	native private void setBeginIndicePos_ev_int32(long pNativeObject, int beginIndicePos);
	public void setBeginIndicePos(int beginIndicePos)
	{
		int beginIndicePosParamValue = beginIndicePos;
		setBeginIndicePos_ev_int32(this.nativeObject.pointer, beginIndicePosParamValue);
	}
	native private void setBeginIndicePos_ev_int32_NoVirtual(long pNativeObject, int beginIndicePos);
	protected void setBeginIndicePos_NoVirtual(int beginIndicePos)
	{
		int beginIndicePosParamValue = beginIndicePos;
		setBeginIndicePos_ev_int32_NoVirtual(this.nativeObject.pointer, beginIndicePosParamValue);
	}

	protected  int getEndIndicePos_void_callback()
	{
		int returnValue = getEndIndicePos();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getEndIndicePos_void(long pNativeObject);
	public int getEndIndicePos()
	{
		int returnValue = getEndIndicePos_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getEndIndicePos_void_NoVirtual(long pNativeObject);
	protected int getEndIndicePos_NoVirtual()
	{
		int returnValue = getEndIndicePos_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setEndIndicePos_ev_int32_callback(int endIndicePos)
	{
		int endIndicePosParamValue = endIndicePos;
		setEndIndicePos(endIndicePosParamValue);
	}

	native private void setEndIndicePos_ev_int32(long pNativeObject, int endIndicePos);
	public void setEndIndicePos(int endIndicePos)
	{
		int endIndicePosParamValue = endIndicePos;
		setEndIndicePos_ev_int32(this.nativeObject.pointer, endIndicePosParamValue);
	}
	native private void setEndIndicePos_ev_int32_NoVirtual(long pNativeObject, int endIndicePos);
	protected void setEndIndicePos_NoVirtual(int endIndicePos)
	{
		int endIndicePosParamValue = endIndicePos;
		setEndIndicePos_ev_int32_NoVirtual(this.nativeObject.pointer, endIndicePosParamValue);
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

	public SubSimpleline(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubSimpleline(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_addPoint_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getPoint_ev_int32(long pNativeObject, String method);
	native protected void register_removePoint_ev_int32(long pNativeObject, String method);
	native protected void register_removeAllPoints_void(long pNativeObject, String method);
	native protected void register_getCount_void(long pNativeObject, String method);
	native protected void register_getBeginVertexPos_void(long pNativeObject, String method);
	native protected void register_setBeginVertexPos_ev_int32(long pNativeObject, String method);
	native protected void register_getEndVertexPos_void(long pNativeObject, String method);
	native protected void register_setEndVertexPos_ev_int32(long pNativeObject, String method);
	native protected void register_getBeginIndicePos_void(long pNativeObject, String method);
	native protected void register_setBeginIndicePos_ev_int32(long pNativeObject, String method);
	native protected void register_getEndIndicePos_void(long pNativeObject, String method);
	native protected void register_setEndIndicePos_ev_int32(long pNativeObject, String method);
	native protected void register_containVertex_ev_uint32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addPoint_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "addPoint_ev_real64_ev_real64_ev_real64_callback");
			this.register_getPoint_ev_int32(this.nativeObject.pointer, "getPoint_ev_int32_callback");
			this.register_removePoint_ev_int32(this.nativeObject.pointer, "removePoint_ev_int32_callback");
			this.register_removeAllPoints_void(this.nativeObject.pointer, "removeAllPoints_void_callback");
			this.register_getCount_void(this.nativeObject.pointer, "getCount_void_callback");
			this.register_getBeginVertexPos_void(this.nativeObject.pointer, "getBeginVertexPos_void_callback");
			this.register_setBeginVertexPos_ev_int32(this.nativeObject.pointer, "setBeginVertexPos_ev_int32_callback");
			this.register_getEndVertexPos_void(this.nativeObject.pointer, "getEndVertexPos_void_callback");
			this.register_setEndVertexPos_ev_int32(this.nativeObject.pointer, "setEndVertexPos_ev_int32_callback");
			this.register_getBeginIndicePos_void(this.nativeObject.pointer, "getBeginIndicePos_void_callback");
			this.register_setBeginIndicePos_ev_int32(this.nativeObject.pointer, "setBeginIndicePos_ev_int32_callback");
			this.register_getEndIndicePos_void(this.nativeObject.pointer, "getEndIndicePos_void_callback");
			this.register_setEndIndicePos_ev_int32(this.nativeObject.pointer, "setEndIndicePos_ev_int32_callback");
			this.register_containVertex_ev_uint32(this.nativeObject.pointer, "containVertex_ev_uint32_callback");
		}
	}
	
	public static SubSimpleline fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubSimpleline obj = null;
 		if(baseObj instanceof SubSimpleline)
		{
			obj = (SubSimpleline)baseObj;
		} else {
			obj = new SubSimpleline(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSubSimpleline");
			obj.increaseCast();
		}

		return obj;
	}
}
