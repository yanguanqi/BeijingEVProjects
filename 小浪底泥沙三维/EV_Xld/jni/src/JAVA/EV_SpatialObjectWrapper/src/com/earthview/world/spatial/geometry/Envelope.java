package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Spatial::Geometry::CEnvelope类，描述一个平行与坐标轴的矩形
 */
public class Envelope extends com.earthview.world.spatial.geometry.Ienvelope {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::CEnvelope", new EnvelopeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::JCEnvelopeProxy", new EnvelopeClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Envelope() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEnvelopeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.Envelope".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 默认拷贝构造函数
	 * @param  
	 */
	public Envelope(com.earthview.world.spatial.geometry.Envelope obj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objPtr = new BasePointer(obj);
		list.add("obj", objPtr.get());
		Create("JCEnvelopeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.Envelope".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 参数构造函数
	 * @param x 左下角X值
	 * @param y 左下角Y值
	 * @param width 宽度
	 * @param height 高度
	 */
	public Envelope(double x, double y, double width, double height) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		Create("JCEnvelopeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.Envelope".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 参数构造函数
	 * @param x 左下角X值
	 * @param y 左下角Y值
	 * @param z 左下角Z值
	 * @param width 宽度
	 * @param height 高度
	 * @param depth 深度
	 */
	public Envelope(double x, double y, double z, double width, double height, double depth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		BasePointer zPtr = new BasePointer(z);
		list.add("z", zPtr.get());
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		BasePointer depthPtr = new BasePointer(depth);
		list.add("depth", depthPtr.get());
		Create("JCEnvelopeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geometry.Envelope".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getMinX_void(long pNativeObject);
	/**
	 * 获取最小X值
	 * @param  
	 * @return 最小X值
	 */
	public double getMinX()
	{
		double returnValue = getMinX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinX_void_NoVirtual(long pNativeObject);
	protected double getMinX_NoVirtual()
	{
		double returnValue = getMinX_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMinY_void(long pNativeObject);
	/**
	 * 获取最小Y值
	 * @param  
	 * @return 最小Y值
	 */
	public double getMinY()
	{
		double returnValue = getMinY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinY_void_NoVirtual(long pNativeObject);
	protected double getMinY_NoVirtual()
	{
		double returnValue = getMinY_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMinZ_void(long pNativeObject);
	/**
	 * 获取最小Z值
	 * @param  
	 * @return 最小Z值
	 */
	public double getMinZ()
	{
		double returnValue = getMinZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinZ_void_NoVirtual(long pNativeObject);
	protected double getMinZ_NoVirtual()
	{
		double returnValue = getMinZ_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMaxX_void(long pNativeObject);
	/**
	 * 获取最大X值
	 * @param  
	 * @return 最大X值
	 */
	public double getMaxX()
	{
		double returnValue = getMaxX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxX_void_NoVirtual(long pNativeObject);
	protected double getMaxX_NoVirtual()
	{
		double returnValue = getMaxX_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMaxY_void(long pNativeObject);
	/**
	 * 获取最大Y值
	 * @param  
	 * @return 最大Y值
	 */
	public double getMaxY()
	{
		double returnValue = getMaxY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxY_void_NoVirtual(long pNativeObject);
	protected double getMaxY_NoVirtual()
	{
		double returnValue = getMaxY_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMaxZ_void(long pNativeObject);
	/**
	 * 获取最大Z值
	 * @param  
	 * @return 最大Z值
	 */
	public double getMaxZ()
	{
		double returnValue = getMaxZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxZ_void_NoVirtual(long pNativeObject);
	protected double getMaxZ_NoVirtual()
	{
		double returnValue = getMaxZ_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setMinX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置最小X值
	 * @param value X值
	 */
	public void setMinX(double value)
	{
		double valueParamValue = value;
		setMinX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMinX_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setMinX_NoVirtual(double value)
	{
		double valueParamValue = value;
		setMinX_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private void setMinY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置最小Y值
	 * @param value Y值
	 */
	public void setMinY(double value)
	{
		double valueParamValue = value;
		setMinY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMinY_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setMinY_NoVirtual(double value)
	{
		double valueParamValue = value;
		setMinY_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private void setMinZ_ev_real64(long pNativeObject, double value);
	/**
	 * 设置最小Z值
	 * @param value Z值
	 */
	public void setMinZ(double value)
	{
		double valueParamValue = value;
		setMinZ_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMinZ_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setMinZ_NoVirtual(double value)
	{
		double valueParamValue = value;
		setMinZ_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private void setMaxX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置宽度
	 * @param value 宽度值
	 */
	public void setMaxX(double value)
	{
		double valueParamValue = value;
		setMaxX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMaxX_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setMaxX_NoVirtual(double value)
	{
		double valueParamValue = value;
		setMaxX_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private void setMaxY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置高度
	 * @param value 高度值
	 */
	public void setMaxY(double value)
	{
		double valueParamValue = value;
		setMaxY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMaxY_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setMaxY_NoVirtual(double value)
	{
		double valueParamValue = value;
		setMaxY_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private void setMaxZ_ev_real64(long pNativeObject, double value);
	/**
	 * 设置深度
	 * @param value 深度值
	 */
	public void setMaxZ(double value)
	{
		double valueParamValue = value;
		setMaxZ_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMaxZ_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setMaxZ_NoVirtual(double value)
	{
		double valueParamValue = value;
		setMaxZ_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private double getWidth_void(long pNativeObject);
	/**
	 * 获取宽度值
	 * @param  
	 * @return 宽度值
	 */
	public double getWidth()
	{
		double returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getWidth_void_NoVirtual(long pNativeObject);
	protected double getWidth_NoVirtual()
	{
		double returnValue = getWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getHeight_void(long pNativeObject);
	/**
	 * 获取高度值
	 * @param  
	 * @return 高度值
	 */
	public double getHeight()
	{
		double returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getHeight_void_NoVirtual(long pNativeObject);
	protected double getHeight_NoVirtual()
	{
		double returnValue = getHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getDepth_void(long pNativeObject);
	/**
	 * 获取深度值
	 * @param  
	 * @return 深度值
	 */
	public double getDepth()
	{
		double returnValue = getDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDepth_void_NoVirtual(long pNativeObject);
	protected double getDepth_NoVirtual()
	{
		double returnValue = getDepth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void getCenter_ev_real64_ev_real64_ev_real64(long pNativeObject, long x, long y, long z);
	/**
	 * 获取中心点位置
	 * @param x X值
	 * @param y Y值
	 * @param z Z值
	 */
	public void getCenter(DoublePointer x, DoublePointer y, DoublePointer z)
	{
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		getCenter_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setCenter_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double z);
	/**
	 * 设置中心点位置
	 * @param x X值
	 * @param y Y值
	 * @param z Z值
	 */
	public void setCenter(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setCenter_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private boolean isBox_void(long pNativeObject);
	/**
	 * 判断是否是三维Box。在有效Envelope的前提下，如果MaxZ-MinZ>0,则为box
	 * @param  
	 */
	public boolean isBox()
	{
		boolean returnValue = isBox_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isBox_void_NoVirtual(long pNativeObject);
	protected boolean isBox_NoVirtual()
	{
		boolean returnValue = isBox_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 判断是否有效包围盒。有效包围盒的条件是：1.MaxX-MinX>0;2.MaxY-Miny>0;
	 * @param  
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void_NoVirtual(long pNativeObject);
	protected boolean isValid_NoVirtual()
	{
		boolean returnValue = isValid_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType(long pNativeObject, double x, double y, double z, int type);
	/**
	 * 判断是否包含指定坐标点
	 * @param x X值
	 * @param y Y值
	 * @param z Z值
	 */
	public boolean containsCoordinate(double x, double y, double z, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		int typeParamValue = type.getValue();
		boolean returnValue = containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, typeParamValue);
		return returnValue;
	}
	native private boolean containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType_NoVirtual(long pNativeObject, double x, double y, double z, int type);
	protected boolean containsCoordinate_NoVirtual(double x, double y, double z, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		int typeParamValue = type.getValue();
		boolean returnValue = containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, typeParamValue);
		return returnValue;
	}

	native private boolean containsEnvelope_IEnvelope_EVDimensionType(long pNativeObject, long envelope, int type);
	/**
	 * 判断是否包含指定包围盒
	 * @param envelope 指定包围盒
	 * @param type 指定维度
	 * @return 包含，返回true;否则，返回false
	 */
	public boolean containsEnvelope(com.earthview.world.spatial.geometry.Ienvelope envelope, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		int typeParamValue = type.getValue();
		boolean returnValue = containsEnvelope_IEnvelope_EVDimensionType(this.nativeObject.pointer, envelopeParamValue, typeParamValue);
		return returnValue;
	}
	native private boolean containsEnvelope_IEnvelope_EVDimensionType_NoVirtual(long pNativeObject, long envelope, int type);
	protected boolean containsEnvelope_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope envelope, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		int typeParamValue = type.getValue();
		boolean returnValue = containsEnvelope_IEnvelope_EVDimensionType_NoVirtual(this.nativeObject.pointer, envelopeParamValue, typeParamValue);
		return returnValue;
	}

	native private boolean isIntersects_IEnvelope_EVDimensionType(long pNativeObject, long envelope, int type);
	/**
	 * 判断指定包围盒是否相交
	 * @param envelope 指定包围盒
	 * @param type 指定维度
	 * @return 相交，返回true;否则，返回false
	 */
	public boolean isIntersects(com.earthview.world.spatial.geometry.Ienvelope envelope, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		int typeParamValue = type.getValue();
		boolean returnValue = isIntersects_IEnvelope_EVDimensionType(this.nativeObject.pointer, envelopeParamValue, typeParamValue);
		return returnValue;
	}
	native private boolean isIntersects_IEnvelope_EVDimensionType_NoVirtual(long pNativeObject, long envelope, int type);
	protected boolean isIntersects_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope envelope, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		int typeParamValue = type.getValue();
		boolean returnValue = isIntersects_IEnvelope_EVDimensionType_NoVirtual(this.nativeObject.pointer, envelopeParamValue, typeParamValue);
		return returnValue;
	}

	native private void expands_ev_bool_ev_real64_ev_real64_ev_real64(long pNativeObject, boolean isRadio, double scaleX, double scaleY, double scaleZ);
	/**
	 * 缩放包围盒
	 * @param isRadio 是否按比例处理
	 * @param scaleX 如果isRadio=true,范围[0,~];否则，scaleX按照实际距离缩放，[-~，~]
	 * @param scaleY 如果isRadio=true,范围[0,~];否则，scaleY按照实际距离缩放，[-~，~]
	 * @param scaleZ 如果isRadio=true,范围[0,~];否则，scaleZ按照实际距离缩放，[-~，~]
	 */
	public void expands(boolean isRadio, double scaleX, double scaleY, double scaleZ)
	{
		boolean isRadioParamValue = isRadio;
		double scaleXParamValue = scaleX;
		double scaleYParamValue = scaleY;
		double scaleZParamValue = scaleZ;
		expands_ev_bool_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, isRadioParamValue, scaleXParamValue, scaleYParamValue, scaleZParamValue);
	}
	native private void expands_ev_bool_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, boolean isRadio, double scaleX, double scaleY, double scaleZ);
	protected void expands_NoVirtual(boolean isRadio, double scaleX, double scaleY, double scaleZ)
	{
		boolean isRadioParamValue = isRadio;
		double scaleXParamValue = scaleX;
		double scaleYParamValue = scaleY;
		double scaleZParamValue = scaleZ;
		expands_ev_bool_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, isRadioParamValue, scaleXParamValue, scaleYParamValue, scaleZParamValue);
	}

	native private void unions_IEnvelope_EVDimensionType(long pNativeObject, long envelope, int type);
	/**
	 * 包围盒合并
	 * @param envelope 指定包围盒
	 * @param type 指定维度
	 */
	public void unions(com.earthview.world.spatial.geometry.Ienvelope envelope, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		int typeParamValue = type.getValue();
		unions_IEnvelope_EVDimensionType(this.nativeObject.pointer, envelopeParamValue, typeParamValue);
	}
	native private void unions_IEnvelope_EVDimensionType_NoVirtual(long pNativeObject, long envelope, int type);
	protected void unions_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope envelope, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		int typeParamValue = type.getValue();
		unions_IEnvelope_EVDimensionType_NoVirtual(this.nativeObject.pointer, envelopeParamValue, typeParamValue);
	}

	native private void intersects_IEnvelope_EVDimensionType(long pNativeObject, long envelope, int type);
	/**
	 * 包围盒求交
	 * @param envelope 指定包围盒
	 * @param type 指定维度
	 */
	public void intersects(com.earthview.world.spatial.geometry.Ienvelope envelope, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		int typeParamValue = type.getValue();
		intersects_IEnvelope_EVDimensionType(this.nativeObject.pointer, envelopeParamValue, typeParamValue);
	}
	native private void intersects_IEnvelope_EVDimensionType_NoVirtual(long pNativeObject, long envelope, int type);
	protected void intersects_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope envelope, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		int typeParamValue = type.getValue();
		intersects_IEnvelope_EVDimensionType_NoVirtual(this.nativeObject.pointer, envelopeParamValue, typeParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Ienvelope ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	native private long clone2_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Envelope clone2()
	{
		long returnValue = clone2_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Envelope __returnValue = new com.earthview.world.spatial.geometry.Envelope(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Envelope)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		}
		return __returnValue;
	}
	native private boolean ev_equals_IEnvelope_ev_real64_EVDimensionType(long pNativeObject, long envelope, double tolerance, int type);
	public boolean ev_equals(com.earthview.world.spatial.geometry.Ienvelope envelope, double tolerance, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		double toleranceParamValue = tolerance;
		int typeParamValue = type.getValue();
		boolean returnValue = ev_equals_IEnvelope_ev_real64_EVDimensionType(this.nativeObject.pointer, envelopeParamValue, toleranceParamValue, typeParamValue);
		return returnValue;
	}
	native private boolean ev_equals_IEnvelope_ev_real64_EVDimensionType_NoVirtual(long pNativeObject, long envelope, double tolerance, int type);
	protected boolean ev_equals_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope envelope, double tolerance, com.earthview.world.spatial.geometry.EVDimensionType type)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		double toleranceParamValue = tolerance;
		int typeParamValue = type.getValue();
		boolean returnValue = ev_equals_IEnvelope_ev_real64_EVDimensionType_NoVirtual(this.nativeObject.pointer, envelopeParamValue, toleranceParamValue, typeParamValue);
		return returnValue;
	}

	native private long OperatorAssign_CEnvelope(long pNativeObject, long envelope);
	public com.earthview.world.spatial.geometry.Envelope OperatorAssign(com.earthview.world.spatial.geometry.Envelope envelope)
	{
		long envelopeParamValue = envelope.nativeObject.pointer;
		long returnValue = OperatorAssign_CEnvelope(this.nativeObject.pointer, envelopeParamValue);
		com.earthview.world.spatial.geometry.Envelope __returnValue = new com.earthview.world.spatial.geometry.Envelope(CreatedWhenConstruct.CWC_NotToCreate, "CEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Envelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		}
		return __returnValue;
	}
	public Envelope(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Envelope(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getMinX_void(long pNativeObject, String method);
	native protected void register_getMaxX_void(long pNativeObject, String method);
	native protected void register_getMinY_void(long pNativeObject, String method);
	native protected void register_getMaxY_void(long pNativeObject, String method);
	native protected void register_getMinZ_void(long pNativeObject, String method);
	native protected void register_getMaxZ_void(long pNativeObject, String method);
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getHeight_void(long pNativeObject, String method);
	native protected void register_getDepth_void(long pNativeObject, String method);
	native protected void register_isBox_void(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_setMinX_ev_real64(long pNativeObject, String method);
	native protected void register_setMaxX_ev_real64(long pNativeObject, String method);
	native protected void register_setMinY_ev_real64(long pNativeObject, String method);
	native protected void register_setMaxY_ev_real64(long pNativeObject, String method);
	native protected void register_setMinZ_ev_real64(long pNativeObject, String method);
	native protected void register_setMaxZ_ev_real64(long pNativeObject, String method);
	native protected void register_containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType(long pNativeObject, String method);
	native protected void register_containsEnvelope_IEnvelope_EVDimensionType(long pNativeObject, String method);
	native protected void register_isIntersects_IEnvelope_EVDimensionType(long pNativeObject, String method);
	native protected void register_expands_ev_bool_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_unions_IEnvelope_EVDimensionType(long pNativeObject, String method);
	native protected void register_intersects_IEnvelope_EVDimensionType(long pNativeObject, String method);
	native protected void register_ev_equals_IEnvelope_ev_real64_EVDimensionType(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getMinX_void(this.nativeObject.pointer, "getMinX_void_callback");
			this.register_getMaxX_void(this.nativeObject.pointer, "getMaxX_void_callback");
			this.register_getMinY_void(this.nativeObject.pointer, "getMinY_void_callback");
			this.register_getMaxY_void(this.nativeObject.pointer, "getMaxY_void_callback");
			this.register_getMinZ_void(this.nativeObject.pointer, "getMinZ_void_callback");
			this.register_getMaxZ_void(this.nativeObject.pointer, "getMaxZ_void_callback");
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getHeight_void(this.nativeObject.pointer, "getHeight_void_callback");
			this.register_getDepth_void(this.nativeObject.pointer, "getDepth_void_callback");
			this.register_isBox_void(this.nativeObject.pointer, "isBox_void_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_setMinX_ev_real64(this.nativeObject.pointer, "setMinX_ev_real64_callback");
			this.register_setMaxX_ev_real64(this.nativeObject.pointer, "setMaxX_ev_real64_callback");
			this.register_setMinY_ev_real64(this.nativeObject.pointer, "setMinY_ev_real64_callback");
			this.register_setMaxY_ev_real64(this.nativeObject.pointer, "setMaxY_ev_real64_callback");
			this.register_setMinZ_ev_real64(this.nativeObject.pointer, "setMinZ_ev_real64_callback");
			this.register_setMaxZ_ev_real64(this.nativeObject.pointer, "setMaxZ_ev_real64_callback");
			this.register_containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType(this.nativeObject.pointer, "containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType_callback");
			this.register_containsEnvelope_IEnvelope_EVDimensionType(this.nativeObject.pointer, "containsEnvelope_IEnvelope_EVDimensionType_callback");
			this.register_isIntersects_IEnvelope_EVDimensionType(this.nativeObject.pointer, "isIntersects_IEnvelope_EVDimensionType_callback");
			this.register_expands_ev_bool_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "expands_ev_bool_ev_real64_ev_real64_ev_real64_callback");
			this.register_unions_IEnvelope_EVDimensionType(this.nativeObject.pointer, "unions_IEnvelope_EVDimensionType_callback");
			this.register_intersects_IEnvelope_EVDimensionType(this.nativeObject.pointer, "intersects_IEnvelope_EVDimensionType_callback");
			this.register_ev_equals_IEnvelope_ev_real64_EVDimensionType(this.nativeObject.pointer, "ev_equals_IEnvelope_ev_real64_EVDimensionType_callback");
		}
	}
	
	public static Envelope fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Envelope obj = null;
 		if(baseObj instanceof Envelope)
		{
			obj = (Envelope)baseObj;
		} else {
			obj = new Envelope(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEnvelope");
			obj.increaseCast();
		}

		return obj;
	}
}
